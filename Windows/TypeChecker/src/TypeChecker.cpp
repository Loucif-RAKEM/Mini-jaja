#include <iostream>
#include "TypeChecker.h"
#include "AllNodes.h"
#include "MJJProgram.h"
#include "Memory.h"
#include "Type.h"
#include "Quadruplet.h"
#include "mainwindow.h"

//TODO : tester si tab[1] est valide. i.e : tester si tab est bien un tableau et l'indice est valide !

using namespace std;

TypeChecker::TypeChecker(){
    m_errorsFound = false;
}

bool TypeChecker::errorsFound(){
    return m_errorsFound;
}

void TypeChecker::notifyError(){
    m_errorsFound = true;
}

void TypeChecker::notifyError(string error){
    m_errorsFound = true;
    MainWindow::getSingleton()->showError(error);
}

Type TypeChecker::getType(Node* node, Memory* mem){
    string nodeLabel = node->getLabel();
    if(nodeLabel == "true" || nodeLabel == "false" || nodeLabel == "boolean"){
        return T_BOOLEAN;
    }else if(nodeLabel == "ident"){
        string identifier = node->getChildren()[0]->getLabel();
        if(idInfos.find(identifier) != idInfos.end()){
            return idInfos[identifier]->getType();
        }else{
            notifyError("Erreur : La variable " + identifier + " est utilisee mais n'a pas ete declaree.\n");
            return T_INTEGER;
        }
    }else if(nodeLabel == "calle"){
        string identifier = node->getChildren()[0]->getChildren()[0]->getLabel();
        if(idInfos.find(identifier) != idInfos.end()){
            return idInfos[identifier]->getType();
        }else{
            notifyError("Erreur : La méthode " + identifier + " est utilisee mais n'a pas ete declaree.\n");
            return T_INTEGER;
        }
    }else if(nodeLabel == "binaryarray"){
        string identifier = node->getChildren()[0]->getChildren()[0]->getLabel();
        if(idInfos.find(identifier) != idInfos.end()){
            if(idInfos[identifier]->getKind() == METH){
                notifyError("Erreur : La methode " + identifier + " est utilisee comme un tableau.\n");
            }else if(idInfos[identifier]->getKind() != ARRAY){
                notifyError("Erreur : La variable " + identifier + " est utilisee comme un tableau.\n");
            }else{
                return idInfos[identifier]->getType();
            }
        }else{
            notifyError("Erreur : Le tableau " + identifier + " est utilise mais n'a pas ete declare.\n");
            return T_INTEGER;
        }
    }else if(nodeLabel == "" || nodeLabel == "void"){
        return T_VOID;
    }else if(nodeLabel != "number"){
        return stringToType(node->accept(this, mem));
    }else{
        return T_INTEGER;
    }
}

void TypeChecker::checkProgram(MJJProgram mjjprogram){
    ClassNode* rootNode = mjjprogram.getRootNode();
    if(rootNode != NULL){
        m_errorsFound = false;
        Memory* mem = new Memory();
        cout << m_errorsFound << endl;
        rootNode->accept(this, mem);
        cout << m_errorsFound << endl;
    }else{
        m_errorsFound = true;
    }
}

string TypeChecker::visit(ClassNode *cn, Memory *mem)
{
    cn->getChildren()[0]->accept(this, mem);
    cn->getChildren()[1]->accept(this, mem);
    cn->getChildren()[2]->accept(this, mem);
    return "";
}

string TypeChecker::visit(VarsNode *vsn, Memory *mem)
{
    vsn->getChildren()[0]->accept(this, mem);
    vsn->getChildren()[1]->accept(this, mem);
    return "";
}

string TypeChecker::visit(WhileNode *wn, Memory *mem)
{
    return "";
}

string TypeChecker::visit(VarNode *vn, Memory *mem)
{
    Type t1 = stringToType(vn->getChildren()[0]->accept(this, mem));
    string identifier = vn->getChildren()[1]->getChildren()[0]->getLabel();

    //================================================================================//
    // Vérifie si la variable a déjà été déclarée et la déclare dans le cas contraire //
    //================================================================================//
    if(idInfos.find(identifier) == idInfos.end()){
        Quadruplet* quadruplet = new Quadruplet(identifier, 0, VAR, t1);
        idInfos[identifier] = quadruplet;
    }else{
        notifyError("Erreur : La variable \"" + identifier + "\" a deja ete definie.\n");
    }
    //================================================================================//

    Type t2 = getType(vn->getChildren()[2], mem);//stringToType(vn->getChildren()[2]->accept(this, mem));
    if(t1 != t2){
        if(t2 == T_VOID && vn->getChildren()[2]->getLabel() == ""){
            if(t1 == T_BOOLEAN){
                cerr << "Avertissement : La variable \"" << identifier << "\" a été initialisée à \"false\" par défaut." << endl;
            }else{
                cerr << "Avertissement : La variable \"" << identifier << "\" a été initialisée à \"0\" par défaut." << endl;
            }
        }else{
            notifyError("Erreur : Impossible d'affecter une expression de type \"" + string(stringFromType(t2)) + "\" a la variable \"" + identifier + "\" de type \"" + string(stringFromType(t1)) + "\".\n");
        }
    }
    return "";
}

string TypeChecker::visit(UnaryMinusNode *vsn, Memory *mem)
{
    Type t1 = getType(vsn->getChildren()[0], mem);
    if(t1 != T_INTEGER){
        notifyError("Erreur : L'operateur unaire \"-\" doit etre utilise avec une expression de type \"int\" et est utilisee avec une expression de type \"" + string(stringFromType(t1)) + "\".\n");
    }
    return stringFromType(T_INTEGER);
}

string TypeChecker::visit(TimesNode *tn, Memory *mem)
{
    Type t1 = getType(tn->getChildren()[0], mem);
    Type t2 = getType(tn->getChildren()[1], mem);
    if(t1 != T_INTEGER || t2 != T_INTEGER){
        notifyError("Erreur : L'operateur \"*\" doit etre utilise avec deux expressions de type \"int\" et est utilise avec deux expressions de types \"" + string(stringFromType(t1)) + "\" et \"" + string(stringFromType(t2)) + "\".\n");
    }
    return stringFromType(T_INTEGER);
}

string TypeChecker::visit(TernaryArrayNode *tan, Memory *mem)
{
    Type t1 = getType(tan->getChildren()[0], mem);
    Type t2 = getType(tan->getChildren()[2], mem);
    string identifier = tan->getChildren()[1]->getChildren()[0]->getLabel();

    //================================================================================//
    // Vérifie si la variable a déjà été déclarée et la déclare dans le cas contraire //
    //================================================================================//
    if(idInfos.find(identifier) == idInfos.end()){
        Quadruplet* quadruplet = new Quadruplet(identifier, 0, ARRAY, t1);
        idInfos[identifier] = quadruplet;
    }else{
        notifyError("Erreur : La variable " + identifier + " a deja ete definie.\n");
    }
    //================================================================================//

    if(t2 != T_INTEGER){
        notifyError("Erreur : La taille du tableau \"" + identifier + "\" doit etre un entier et est de type \"" + string(stringFromType(t2)) + "\".\n");
    }
    return "";
}

string TypeChecker::visit(SumNode *sn, Memory *mem)
{
    return stringFromType(T_INTEGER);
}

string TypeChecker::visit(ReturnNode *rn, Memory *mem)
{
    return "";
}

string TypeChecker::visit(PlusNode *pn, Memory *mem)
{
    Type t1 = getType(pn->getChildren()[0], mem);
    Type t2 = getType(pn->getChildren()[1], mem);
    if(t1 != T_INTEGER || t2 != T_INTEGER){
        notifyError("Erreur : L'operateur \"+\" doit etre utilise avec deux expressions de type \"int\" et est utilise avec deux expressions de types \"" + string(stringFromType(t1)) + "\" et \"" + string(stringFromType(t2)) + "\".\n");
    }
    return stringFromType(T_INTEGER);
}

string TypeChecker::visit(OrNode *on, Memory *mem)
{
    Type t1 = getType(on->getChildren()[0], mem);//stringToType(an->getChildren()[0]->accept(this, mem));
    Type t2 = getType(on->getChildren()[1], mem);//stringToType(an->getChildren()[1]->accept(this, mem));
    if(t1 != T_BOOLEAN || t2 != T_BOOLEAN){
        notifyError("Erreur : L'operateur \"||\" doit etre utilise avec deux expressions de type \"boolean\" et est utilise avec deux expressions de types \"" + string(stringFromType(t1)) + "\" et \"" + string(stringFromType(t2)) + "\".\n");
    }
    return stringFromType(T_BOOLEAN);
}

string TypeChecker::visit(NumberNode *nn, Memory *mem)
{
    return stringFromType(T_INTEGER);
}

string TypeChecker::visit(NotNode *nn, Memory *mem)
{
    Type t1 = getType(nn->getChildren()[0], mem);
    if(t1 != T_BOOLEAN){
        notifyError("Erreur : L'operateur \"!\" doit etre utilise avec une expression de type \"boolean\" et est utilisee avec une expression de type \"" + string(stringFromType(t1)) + "\".\"");
    }

    return stringFromType(T_BOOLEAN);
}

string TypeChecker::visit(MethodNode *mn, Memory *mem)
{
    Type t1 = getType(mn->getChildren()[0], mem);
    string identifier = mn->getChildren()[1]->getChildren()[0]->getLabel();
    if(idInfos.find(identifier) == idInfos.end()){
        Quadruplet* quadruplet = new Quadruplet(identifier, mn, METH, t1);
        idInfos[identifier] = quadruplet;
    }else{
        //if(idInfos[identifier]->getKind() == METH){
        //idInfos[identifier]->getMethod() == mn;
        notifyError("Erreur : La variable \"" + identifier + "\" a deja ete definie. La declaration d'une methode de meme nom est ambigue.");
        //}
    }
    return stringFromType(t1);
}

string TypeChecker::visit(MainNode *mn, Memory *mem)
{
    mn->getChildren()[0]->accept(this, mem);
    mn->getChildren()[1]->accept(this, mem);
    return "";
}

string TypeChecker::visit(LeafNode *ln, Memory *mem)
{
    //return stringFromType(getType(ln->getChildren()[0], mem));
    string nodeLabel = ln->getLabel();
    if(nodeLabel == "true" || nodeLabel == "false" || nodeLabel == "boolean"){
        return stringFromType(T_BOOLEAN);
    }else{
        return stringFromType(T_INTEGER);
    }
}

string TypeChecker::visit(InstrsNode *isn, Memory *mem)
{
    isn->getChildren()[0]->accept(this, mem);
    isn->getChildren()[1]->accept(this, mem);
    return "";
}

string TypeChecker::visit(IncrementNode *in, Memory *mem)
{
    return stringFromType(T_INTEGER);
}

string TypeChecker::visit(IfNode *in, Memory *mem)
{
    return "";
}

string TypeChecker::visit(IfElseNode *ien, Memory *mem)
{
    return "";
}

string TypeChecker::visit(IdentNode *in, Memory *mem)
{
    return in->getChildren()[0]->accept(this, mem);
}

string TypeChecker::visit(HeadersNode *hsn, Memory *mem)
{
    return "";
}

string TypeChecker::visit(HeaderNode *hn, Memory *mem)
{
    return "";
}

string TypeChecker::visit(GreaterThanNode *sn, Memory *mem)
{
    Type t1 = getType(sn->getChildren()[0], mem);
    Type t2 = getType(sn->getChildren()[1], mem);
    if(t1 != T_INTEGER || t2 != T_INTEGER){
        notifyError("Erreur : L'operateur \">\" doit etre utilise avec deux expressions de type \"int\" et est utilise avec deux expressions de types \"" + string(stringFromType(t1)) + "\" et \"" + string(stringFromType(t2)) + "\".\n");
    }
    return stringFromType(T_BOOLEAN);
}

string TypeChecker::visit(ExpListNode *sn, Memory *mem)
{
    return "";
}

string TypeChecker::visit(EqualityNode *en, Memory *mem)
{
    Type t1 = getType(en->getChildren()[0], mem);
    Type t2 = getType(en->getChildren()[1], mem);
    if(t1 != t2 || t1 == T_VOID || t2 == T_VOID){
        notifyError("Erreur : L'operateur \"==\" doit etre utilise avec deux expressions de meme type (non \"void\") et est utilise avec deux expressions de types \"" + string(stringFromType(t1)) + "\" et \"" + string(stringFromType(t2)) + "\".\n");
    }
    return stringFromType(T_BOOLEAN);
}

string TypeChecker::visit(DivideNode *sn, Memory *mem)
{
    Type t1 = getType(sn->getChildren()[0], mem);
    Type t2 = getType(sn->getChildren()[1], mem);
    if(t1 != T_INTEGER || t2 != T_INTEGER){
        notifyError("Erreur : L'operateur \"/\" doit etre utilise avec deux expressions de type \"int\" et est utilise avec deux expressions de types \"" + string(stringFromType(t1)) + "\" et \"" + string(stringFromType(t2))+ "\".\n");
    }
    return stringFromType(T_INTEGER);
}

string TypeChecker::visit(DeclsNode *sn, Memory *mem)
{
    sn->getChildren()[0]->accept(this, mem);
    sn->getChildren()[1]->accept(this, mem);
    return "";
}

string TypeChecker::visit(CstNode *cn, Memory *mem)
{

    cout << m_errorsFound << endl;
    Type t1 = stringToType(cn->getChildren()[0]->accept(this, mem));
    string identifier = cn->getChildren()[1]->getChildren()[0]->getLabel();

    //================================================================================//
    // Vérifie si la variable a déjà été déclarée et la déclare dans le cas contraire //
    //================================================================================//
    if(idInfos.find(identifier) == idInfos.end()){
        Quadruplet* quadruplet = new Quadruplet(identifier, 0, CST, t1);
        idInfos[identifier] = quadruplet;
    }else{
        notifyError("Erreur : La variable \"" + identifier + "\" a deja ete definie.\n");
    }
    //================================================================================//

    Type t2 = getType(cn->getChildren()[2], mem);//stringToType(cn->getChildren()[2]->accept(this, mem));
    if(t1 != t2){
        if(t2 == T_VOID && cn->getChildren()[2]->getLabel() == ""){
            if(t1 == T_BOOLEAN){
                cerr << "Avertissement : La variable \"" << identifier << "\" a été initialisée à \"false\" par défaut." << endl;
            }else{
                cerr << "Avertissement : La variable \"" << identifier << "\" a été initialisée à \"0\" par défaut." << endl;
            }
        }else{
            notifyError("Erreur : Impossible d'affecter une expression de type \"" + string(stringFromType(t2)) + "\" à une variable de type \"" + string(stringFromType(t1)) + "\".\n");
        }
    }
    return "";
}

string TypeChecker::visit(CallINode *sn, Memory *mem)
{
    Type t1 = getType(sn->getChildren()[0], mem);
    string identifier = sn->getChildren()[0]->getChildren()[0]->getLabel();
    if(t1 != T_VOID){
        cerr << "Avertissement : La valeur de retour de la méthode \"" << identifier << "\" est ignorée." << endl;
    }
    if(idInfos.find(identifier) == idInfos.end()){
        notifyError("Erreur : La methode \"" + identifier + "\" est appelee mais n'a pas ete declaree.\n");
    }
    return stringFromType(t1);
}

string TypeChecker::visit(CallENode *sn, Memory *mem)
{
    return "";
}

string TypeChecker::visit(BinaryMinusNode *sn, Memory *mem)
{
    Type t1 = getType(sn->getChildren()[0], mem);
    string identifier = sn->getChildren()[0]->getChildren()[0]->getLabel();
    Type t2 = getType(sn->getChildren()[1], mem);
    if(t1 != T_INTEGER || t2 != T_INTEGER){
        notifyError("Erreur : L'operateur binaire \"-\" doit etre utilise avec deux expressions de type \"int\" et est utilise avec deux expressions de types \"" + string(stringFromType(t1)) + "\" et \"" + string(stringFromType(t2)) + "\".\n");
    }
    return stringFromType(T_INTEGER);
}

string TypeChecker::visit(BinaryArrayNode *ban, Memory *mem)
{
    Type t1 = getType(ban->getChildren()[0], mem);
    string identifier = ban->getChildren()[0]->getChildren()[0]->getLabel();
    return stringFromType(t1);
}

string TypeChecker::visit(AssignmentNode *an, Memory *mem)
{
    Type t1 = getType(an->getChildren()[0], mem);
    Type t2 = getType(an->getChildren()[1], mem);
    if(t1 != t2){
        if(an->getChildren()[0]->getLabel() != "binaryarray"){
            string identifier = an->getChildren()[0]->getChildren()[0]->getLabel();
            notifyError("Erreur : Impossible d'affecter une expression de type \"" + string(stringFromType(t2)) + "\" a la variable \"" + identifier + "\" de type \"" + string(stringFromType(t1)) + "\".\n");
        }else{
            string identifier = an->getChildren()[0]->getChildren()[0]->getChildren()[0]->getLabel();
            notifyError("Erreur : Impossible d'affecter une expression de type \"" + string(stringFromType(t2)) + "\" au tableau \"" + identifier + "\" de type \"" + string(stringFromType(t1)) + "\".\n");
            Type t3 = getType(an->getChildren()[0]->getChildren()[1], mem);
            if(t3 != T_INTEGER){
                notifyError("Erreur : L'indice du tableau \"" + identifier + "\" doit etre un entier et est de type \"" + string(stringFromType(t3)) + "\".\n");
            }
        }
    }
    return "";
}

string TypeChecker::visit(AndNode *an, Memory *mem)
{
    Type t1 = getType(an->getChildren()[0], mem);
    Type t2 = getType(an->getChildren()[1], mem);
    if(t1 != T_BOOLEAN || t2 != T_BOOLEAN){
        notifyError("Erreur : L'operateur \"&&\" doit etre utilise avec deux expressions de type \"boolean\" et est utilise avec deux expressions de types \"" + string(stringFromType(t1)) + "\" et \"" + string(stringFromType(t2)) + "\".\n");
    }
    return stringFromType(T_BOOLEAN);
}
