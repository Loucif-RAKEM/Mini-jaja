#include "Memory.h"
#include "VisitInterp.h"
#include "Interpreter.h"
#include "Quadruplet.h"
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <sstream>


using namespace std;

int VisitInterp::getValue(Node* node, Memory* mem){
    int value = 0;
    if(node->getLabel() == "binaryarray"){
        string identifier = node->getChildren()[0]->accept(this, mem);
        int index = getValue(node->getChildren()[1], mem);
        value = Interpreter::valT(identifier, index, mem);
    }else{
        string strValue = node->accept(this, mem);
        if(node->getLabel() == "ident"){
            value = Interpreter::val(strValue, mem);
        }else{
            if(strValue == "true"){
                value = 1;
            }else if(strValue == "false"){
                value = 0;
            }else{
                value = atoi(strValue.c_str());
            }
        }
    }
    return value;
}



VisitInterp::VisitInterp(): compteurMeth(0), compteurClass(0){
    liste = new LinkedList<QPair<Node*, int> >();
}

VisitInterp::~VisitInterp(){}

LinkedList<QPair<Node *, int> >* VisitInterp::getListe(){
	return liste;
}

void VisitInterp::visitAll(ClassNode* root, Memory* mem, int flag){
    root->accept(this, mem);
}

void VisitInterp::visitNode(Node* root, Memory* mem, int flag){
    cout << "juste avant le root.accept" << endl;
    root->accept(this, mem, flag);
    cout << "juste apres le root.accept" << endl;
}

string VisitInterp::visit(AndNode* an, Memory* mem, int flag) {
    switch(flag) {
    case 0: {
        int leftChild = getValue(an->getChildren()[0], mem);
        int rightChild = getValue(an->getChildren()[1], mem);

        std::ostringstream oss;
        int value = leftChild && rightChild;
        oss << value;

        return oss.str();
        break; }
    case 1: {
        break; }
    case 2: {
        int leftChild = getValue(an->getChildren()[0], mem);
        int rightChild = getValue(an->getChildren()[1], mem);

        std::ostringstream oss;
        int value = leftChild && rightChild;
        oss << value;

        return oss.str();
        break; }
    case 3: {
        int leftChild = getValue(an->getChildren()[0], mem);
        int rightChild = getValue(an->getChildren()[1], mem);

        std::ostringstream oss;
        int value = leftChild && rightChild;
        oss << value;

        return oss.str();
        break; }
    case 4: {
        break; }
    case 5: {
        break; }
    }
    return "";
}

string VisitInterp::visit(AssignmentNode* an, Memory* mem, int flag) {
    string identifier;
    int value;

    switch(flag) {
    case 0: {
        if(an->getChildren()[0]->getLabel() == "binaryarray"){
            identifier = an->getChildren()[0]->getChildren()[0]->accept(this, mem);
            value = getValue(an->getChildren()[1], mem);
            int index = getValue(an->getChildren()[0]->getChildren()[1], mem);
            Interpreter::affecterValT(identifier, value, index, mem);
        }else{
            identifier = an->getChildren()[0]->accept(this, mem);
            value = getValue(an->getChildren()[1], mem);
            Interpreter::affecterVal(identifier, value, mem);
        }
        mem->getStack()->display();
        break; }
    case 1: {
        break; }
    case 2: {
        if(an->getChildren()[0]->getLabel() == "binaryarray"){
            identifier = an->getChildren()[0]->getChildren()[0]->accept(this, mem);
            value = getValue(an->getChildren()[1], mem);
            int index = getValue(an->getChildren()[0]->getChildren()[1], mem);
            //Interpreter::affecterValT(identifier, value, index, mem);
        }else{
            identifier = an->getChildren()[0]->accept(this, mem);
            value = getValue(an->getChildren()[1], mem);
            //Interpreter::affecterVal(identifier, value, mem);
        }
        mem->getStack()->display();
        break; }
    case 3: {
        if(an->getChildren()[0]->getLabel() == "binaryarray"){
            identifier = an->getChildren()[0]->getChildren()[0]->accept(this, mem, 3);
            value = getValue(an->getChildren()[1], mem);
            int index = getValue(an->getChildren()[0]->getChildren()[1], mem);
            Interpreter::affecterValT(identifier, value, index, mem);
        }else{
            identifier = an->getChildren()[0]->accept(this, mem, 3);
            value = getValue(an->getChildren()[1], mem);
            Interpreter::affecterVal(identifier, value, mem);
        }
        mem->getStack()->display();
        break; }
    case 4: {
        break; }
    case 5: {
        break; }
    }
    return "";
}

string VisitInterp::visit(BinaryArrayNode* ban, Memory* mem, int flag) {
    string identifier = ban->getChildren()[0]->accept(this, mem);
    int value = getValue(ban->getChildren()[1], mem);

    switch(flag) {
    case 0: {
        Interpreter::valT(identifier, value, mem);
        break; }
    case 1: {
        break; }
    case 2: {
        //Interpreter::valT(identifier, value, mem);
        break; }
    case 3: {
        Interpreter::valT(identifier, value, mem);
        break; }
    case 4: {
        break; }
    case 5: {
        break; }
    }

    return "";
}

string VisitInterp::visit(BinaryMinusNode* bmn, Memory* mem, int flag) {

    int leftChild = getValue(bmn->getChildren()[0], mem);
    int rightChild = getValue(bmn->getChildren()[1], mem);

    switch(flag) {
    case 0: {
        std::ostringstream oss;
        int value = leftChild - rightChild;
        oss << value;

        return oss.str();
        break; }
    case 1: {
        break; }
    case 2: {
        std::ostringstream oss;
        int value = leftChild - rightChild;
        oss << value;

        return oss.str();
        break; }
    case 3: {
        std::ostringstream oss;
        int value = leftChild - rightChild;
        oss << value;

        return oss.str();
        break; }
    case 4: {
        break; }
    case 5: {
        break; }
    }
    return "";
}

string VisitInterp::visit(CallENode* cen, Memory* mem, int flag) {
    const string methodIdentifier = cen->getChildren()[0]->accept(this, mem);

    switch(flag) {
    case 0: {
        // Paramètre
        Node* headers = Interpreter::parametre(methodIdentifier, mem);

        // ExpParam
        Interpreter::expParam(cen->getChildren()[1], headers, mem);

        // Déclaration
        Node* dvs = Interpreter::declaration(methodIdentifier, mem);
        dvs->accept(this, mem,2);

        // Mettre un flag 5 pour vars et intrs. On interprete sans ajouter les nodes dans la listes

        // Corps
        Node* iss = Interpreter::corps(methodIdentifier, mem);
        iss->accept(this, mem,2);

        // Need flag 6 pour les retraits sans push ? ou modification des flag 2 (=push) et flag 1 (=no push)

        // Retrait Déclaration
        dvs->accept(this, mem, 5);

        // Retrait Paramètre
        headers->accept(this, mem, 5);

        std::ostringstream oss;
        int value = Interpreter::val(Interpreter::variableClasse(mem), mem);
        oss << value;

        return oss.str();
        break; }
    case 1: {
        break; }
    case 2: {
        // Paramètre
        Node* headers = Interpreter::parametre(methodIdentifier, mem);

        // ExpParam
        Interpreter::expParam(cen->getChildren()[1], headers, mem);

        // Déclaration
        Node* dvs = Interpreter::declaration(methodIdentifier, mem);
        dvs->accept(this, mem);

        // Corps
        Node* iss = Interpreter::corps(methodIdentifier, mem);
        iss->accept(this, mem);

        // Retrait Déclaration
        dvs->accept(this, mem, 1);

        // Retrait Paramètre
        headers->accept(this, mem, 1);

        std::ostringstream oss;
        int value = Interpreter::val(Interpreter::variableClasse(mem), mem);
        oss << value;

        return oss.str();
        break; }
    case 3: {
        // Paramètre
        Node* headers = Interpreter::parametre(methodIdentifier, mem);

        // ExpParam
        Interpreter::expParam(cen->getChildren()[1], headers, mem);

        // Déclaration
        Node* dvs = Interpreter::declaration(methodIdentifier, mem);
        dvs->accept(this, mem);

        // Corps
        //Node* iss = Interpreter::corps(methodIdentifier, mem);
        //iss->accept(this, mem);

        // Retrait Déclaration
        //dvs->accept(this, mem, 1);

        // Retrait Paramètre
        //headers->accept(this, mem, 1);

        std::ostringstream oss;
        int value = Interpreter::val(Interpreter::variableClasse(mem), mem);
        oss << value;

        return oss.str();
        break; }
    case 4: {
        break; }
    case 5: {
        break; }
    }
    return "";
}

string VisitInterp::visit(CallINode* cin, Memory* mem, int flag) {
    const string methodIdentifier = cin->getChildren()[0]->accept(this, mem);

    switch(flag) {
    case 0: {
        // Paramètre
        Node* headers = Interpreter::parametre(methodIdentifier, mem);

        // ExpParam
        Interpreter::expParam(cin->getChildren()[1], headers, mem);

        // Déclaration
        Node* dvs = Interpreter::declaration(methodIdentifier, mem);
        dvs->accept(this, mem);

        // Corps
        Node* iss = Interpreter::corps(methodIdentifier, mem);
        iss->accept(this, mem);

        // Retrait Déclaration
        dvs->accept(this, mem, 1);

        // Retrait Paramètre
        headers->accept(this, mem, 1);

        break; }
    case 1: {
        break; }
    case 2: {
        // Paramètre
        Node* headers = Interpreter::parametre(methodIdentifier, mem);

        // ExpParam
        Interpreter::expParam(cin->getChildren()[1], headers, mem);

        // Déclaration
        Node* dvs = Interpreter::declaration(methodIdentifier, mem);
        dvs->accept(this, mem);

        // Corps
        Node* iss = Interpreter::corps(methodIdentifier, mem);
        iss->accept(this, mem);

        // Retrait Déclaration
        dvs->accept(this, mem, 1);

        // Retrait Paramètre
        headers->accept(this, mem, 1);

        break; }
    case 3: {
        // Paramètre
        Node* headers = Interpreter::parametre(methodIdentifier, mem);

        // ExpParam
        Interpreter::expParam(cin->getChildren()[1], headers, mem);

        // Déclaration
        Node* dvs = Interpreter::declaration(methodIdentifier, mem);
        dvs->accept(this, mem);

        // Corps
        Node* iss = Interpreter::corps(methodIdentifier, mem);
        iss->accept(this, mem);

        // Retrait Déclaration
        dvs->accept(this, mem, 1);

        // Retrait Paramètre
        headers->accept(this, mem, 1);

        break; }
    case 4: {
        break; }
    case 5: {
        break; }
    }
    return "";
}

string VisitInterp::visit(ClassNode* cn, Memory* mem, int flag) {

    switch(flag) {
    case 0: {
        // []
        mem->setStack(new Stack<Quadruplet*>());

        liste->insertAfter(QPair<Node*, int>(cn, 3));
        // DeclVar
        string identifier = cn->getChildren()[0]->accept(this, mem);
        Interpreter::declVar(identifier, 0, T_VOID, mem);

        // dss
        cn->getChildren()[1]->accept(this, mem);
        cout << endl << endl;
        cout << "####################################" << endl;
        cout << "Before main :" << endl;
        cout << "####################################" << endl;
        mem->getStack()->display();
        cout << "####################################" << endl;
        cout << endl << endl;

        //mma
        cn->getChildren()[2]->accept(this, mem);

        cout << endl << endl;
        cout << "####################################" << endl;
        cout << "After main :" << endl;
        cout << "####################################" << endl;
        mem->getStack()->display();
        cout << "####################################" << endl;
        cout << endl << endl;

        //retrait dss
        cn->getChildren()[1]->accept(this, mem, 1);

        cout << endl << endl;
        cout << "####################################" << endl;
        cout << "Withdrawing :" << endl;
        cout << "####################################" << endl;
        mem->getStack()->display();
        cout << "####################################" << endl;
        cout << endl << endl;
        Interpreter::retirerDecl(cn->getChildren()[0]->accept(this, mem), mem);
        liste->insertAfter(QPair<Node*, int>(cn, 4));
        mem->getStack()->display();

        break; }
    case 1: {
        break; }
    case 2: {
        cout << "test" << endl;
        liste->insertAfter(QPair<Node*, int>(cn,3));
        // []
        mem->setStack(new Stack<Quadruplet*>());

        // DeclVar
        string identifier = cn->getChildren()[0]->accept(this, mem, 2);
        //Interpreter::declVar(identifier, 0, T_VOID, mem);

        // dss
        cn->getChildren()[1]->accept(this, mem, 2);
        /*
        cout << endl << endl;
        cout << "####################################" << endl;
        cout << "Before main :" << endl;
        cout << "####################################" << endl;
        mem->getStack()->display();
        cout << "####################################" << endl;
        cout << endl << endl;
        */

        //mma
        cn->getChildren()[2]->accept(this, mem, 2);
        /*
        cout << endl << endl;
        cout << "####################################" << endl;
        cout << "After main :" << endl;
        cout << "####################################" << endl;
        mem->getStack()->display();
        cout << "####################################" << endl;
        cout << endl << endl;
        */

        //retrait dss
        //cn->getChildren()[1]->accept(this, mem, 1); //4 ?
        /*
        cout << endl << endl;
        cout << "####################################" << endl;
        cout << "Withdrawing :" << endl;
        cout << "####################################" << endl;
        mem->getStack()->display();
        cout << "####################################" << endl;
        cout << endl << endl;
        */
        break; }
    case 3: {
        // []
        mem->setStack(new Stack<Quadruplet*>());

        // DeclVar
        string identifier = cn->getChildren()[0]->accept(this, mem);
        Interpreter::declVar(identifier, 0, T_VOID, mem);
/*
        // dss
        cn->getChildren()[1]->accept(this, mem);
        /*cout << endl << endl;
        cout << "####################################" << endl;
        cout << "Before main :" << endl;
        cout << "####################################" << endl;
        mem->getStack()->display();
        cout << "####################################" << endl;
        cout << endl << endl;

        //mma
        cn->getChildren()[2]->accept(this, mem);

        cout << endl << endl;
        cout << "####################################" << endl;
        cout << "After main :" << endl;
        cout << "####################################" << endl;
        mem->getStack()->display();
        cout << "####################################" << endl;
        cout << endl << endl;

        //retrait dss
        cn->getChildren()[1]->accept(this, mem, 1);

        cout << endl << endl;
        cout << "####################################" << endl;
        cout << "Withdrawing :" << endl;
        cout << "####################################" << endl;
        mem->getStack()->display();
        cout << "####################################" << endl;
        cout << endl << endl;*/
        break; }
    case 4: {
        Interpreter::retirerDecl(cn->getChildren()[0]->accept(this, mem), mem);
        break; }
    case 5: {
        break; }
    }
    return "";
}

string VisitInterp::visit(CstNode* cstn, Memory* mem, int flag) {

    string identifier = cstn->getChildren()[1]->accept(this, mem);
    switch(flag) {
    case 0: {
        int value = 0;
        Type type;

        liste->insertAfter(QPair<Node*, int>(cstn, 3));

        type = stringToType(cstn->getChildren()[0]->accept(this, mem));
        value = getValue(cstn->getChildren()[2], mem);
        if(cstn->getChildren()[2]->getChildren() != NULL){
            Interpreter::declCst(identifier, value, type, mem);
        }else{
            Interpreter::declVCst(identifier, 0, type, mem);
        }

        break; }
    case 1: {
        Interpreter::retirerDecl(identifier, mem);
        break; }
    case 2: {
        int value = 0;
        Type type;

        type = stringToType(cstn->getChildren()[0]->accept(this, mem));
        value = getValue(cstn->getChildren()[2], mem);
        //Interpreter::declCst(identifier, value, type, mem);
        break; }
    case 3: {
        int value = 0;
        Type type;
        type = stringToType(cstn->getChildren()[0]->accept(this, mem));
        value = getValue(cstn->getChildren()[2], mem);
        if(cstn->getChildren()[2]->getChildren() != NULL){
            Interpreter::declCst(identifier, value, type, mem);
        }else{
            Interpreter::declVCst(identifier, 0, type, mem);
        }
        break; }
    case 4: {
        Interpreter::retirerDecl(identifier, mem);
        break; }
    case 5: {
        break; }

    }
    return "";
}

string VisitInterp::visit(DeclsNode* dsn, Memory* mem, int flag) {

    switch(flag) {
    case 0: {
        if(dsn->getLabel() != "") {
            //liste->insertAfter(QPair<Node*, int>(dsn->getChildren()[0], 3));
            dsn->getChildren()[0]->accept(this, mem);
            dsn->getChildren()[1]->accept(this, mem);
        }
        break; }
    case 1: {
        if(dsn->getLabel() != "") {
            dsn->getChildren()[1]->accept(this, mem, 1);
            dsn->getChildren()[0]->accept(this, mem, 1);
            liste->insertAfter(QPair<Node*, int>(dsn->getChildren()[0], 4));
        }
        break; }
    case 2: {
        if(dsn->getLabel() != "") {
            //liste->insertAfter(QPair<Node*, int>(dsn->getChildren()[0],3));
            dsn->getChildren()[1]->accept(this, mem, 2);
        }
        break; }
    case 3: {
        if(dsn->getLabel() != "") {
            dsn->getChildren()[0]->accept(this, mem, 3);
            dsn->getChildren()[1]->accept(this, mem, 3);
        }
        break; }
    case 4: {
        break; }
    case 5: {
        break; }
    }


    return "";
}

string VisitInterp::visit(DivideNode* dn, Memory* mem, int flag) {

    int leftChild = getValue(dn->getChildren()[0], mem);
    int rightChild = getValue(dn->getChildren()[1], mem);

    int value;

    switch(flag) {
    case 0: {
        std::ostringstream oss;
        if(rightChild != 0){
            value = leftChild / rightChild;
        }else{
            cerr << "Error : Division by 0 attempted." << endl;
            value = 0;
        }
        oss << value;

        return oss.str();
        break; }
    case 1: {
        break; }
    case 2: {
        /*std::ostringstream oss;
        if(rightChild != 0){
            value = leftChild / rightChild;
        }else{
            cerr << "Error : Division by 0 attempted." << endl;
            value = 0;
        }
        oss << value;

        return oss.str();*/
        break; }
    case 3: {
        std::ostringstream oss;
        if(rightChild != 0){
            value = leftChild / rightChild;
        }else{
            cerr << "Error : Division by 0 attempted." << endl;
            value = 0;
        }
        oss << value;

        return oss.str();
        break; }
    case 4: {
        break; }
    case 5: {
        break; }
    }
    return "";
}

string VisitInterp::visit(EqualityNode* en, Memory* mem, int flag) {

    int leftChild = getValue(en->getChildren()[0], mem);
    int rightChild = getValue(en->getChildren()[1], mem);

    switch(flag) {
    case 0: {
        if(leftChild == rightChild ){
            return "1";
        }
        else{
            return "0";
        }
        break; }
    case 1: {
        break; }
    case 2: {
       /* if(leftChild == rightChild ){
            return "1";
        }
        else{
            return "0";
        }*/
        break; }
    case 3: {
        if(leftChild == rightChild ){
            return "1";
        }
        else{
            return "0";
        }
        break; }
    case 4: {
        break; }
    case 5: {
        break; }
    }
    return "";
}

string VisitInterp::visit(ExpListNode* eln, Memory* mem, int flag) {
    switch(flag) {
    case 0: {
        cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR EXPLISTNODE !\n";
        break; }
    case 1: {
        cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR EXPLISTNODE !\n";
        break; }
    case 2: {
        cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR EXPLISTNODE !\n";
        break; }
    case 3: {
        cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR EXPLISTNODE !\n";
        break; }
    case 4: {
        cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR EXPLISTNODE !\n";
        break; }
    case 5: {
        cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR EXPLISTNODE !\n";
        break; }
    }

    return "";
}

string VisitInterp::visit(GreaterThanNode* gtn, Memory* mem, int flag) {

    int leftChild = getValue(gtn->getChildren()[0], mem);
    int rightChild = getValue(gtn->getChildren()[1], mem);

    switch(flag) {
    case 0: {
        if(leftChild > rightChild ){
            return "1";
        }
        else{
            return "0";
        }
        break; }
    case 1: {
        break; }
    case 2: {
       /* if(leftChild > rightChild ){
            return "1";
        }
        else{
            return "0";
        }*/
        break; }
    case 3: {
        if(leftChild > rightChild ){
            return "1";
        }
        else{
            return "0";
        }
        break; }
    case 4: {
        break; }
    case 5: {
        break; }
    }
    return "";
}

string VisitInterp::visit(HeaderNode* hn, Memory* mem, int flag) {
    switch(flag) {
    case 0: {
        break; }
    case 1: {
        Interpreter::retirerDecl(hn->getChildren()[1]->accept(this, mem), mem);
        break; }
    case 2: {
        break; }
    case 3: {
        break; }
    case 4: {
        Interpreter::retirerDecl(hn->getChildren()[1]->accept(this, mem), mem);
        break; }
    case 5: {
        break; }
    }
    return "";
}

string VisitInterp::visit(HeadersNode* hsn, Memory* mem, int flag) {
    switch(flag) {
    case 0: {
        break; }
    case 1: {
        hsn->getChildren()[1]->accept(this, mem, 1);
        hsn->getChildren()[0]->accept(this, mem, 1);
        liste->insertAfter(QPair<Node*, int>(hsn->getChildren()[0], 4));
        break; }
    case 2: {
        break; }
    case 3: {
        break; }
    case 4: {
        break; }
    case 5: {
        hsn->getChildren()[1]->accept(this, mem, 5);
        hsn->getChildren()[0]->accept(this, mem, 4);
        break; }
    }
    return "";
}

string VisitInterp::visit(IdentNode* in, Memory* mem, int flag) {

    string identifier = in->getChildren()[0]->accept(this, mem);

    return identifier;
}

string VisitInterp::visit(IfElseNode* ien, Memory* mem, int flag) {

    bool condition = getValue(ien->getChildren()[0], mem);

    switch(flag) {
    case 0: {
        if(condition){
            liste->insertAfter(QPair<Node*, int>(ien->getChildren()[0], 3));
            ien->getChildren()[1]->accept(this, mem);
        }else{
            ien->getChildren()[2]->accept(this, mem);
        }
        break; }
    case 1: {
        break; }
    case 2: {
        liste->insertAfter(QPair<Node*, int>(ien->getChildren()[0], 3));
        if(condition){
            ien->getChildren()[1]->accept(this, mem, 2);
        }else{
            ien->getChildren()[2]->accept(this, mem, 2);
        }
        break; }
    case 3: {
        if(condition){
            ien->getChildren()[1]->accept(this, mem, 3);
        }else{
            ien->getChildren()[2]->accept(this, mem, 3);
        }
        break; }
    case 4: {
        break; }
    case 5: {
        break; }
    }
    return "";
}

string VisitInterp::visit(IfNode* in, Memory* mem, int flag) {

    bool condition = getValue(in->getChildren()[0], mem);

    switch(flag) {
    case 0: {
        liste->insertAfter(QPair<Node*, int>(in->getChildren()[0], 3));
        if(condition) in->getChildren()[1]->accept(this, mem);
        break; }
    case 1: {
        break; }
    case 2: {
        liste->insertAfter(QPair<Node*, int>(in->getChildren()[0], 3));
    	if(condition) in->getChildren()[1]->accept(this, mem, 2);
        break; }
    case 3: {
        if(condition) in->getChildren()[1]->accept(this, mem, 3);
        break; }
    case 4: {
        break; }
    case 5: {
        break; }
    }

    return "";
}

string VisitInterp::visit(IncrementNode* in, Memory* mem, int flag) {

    string identifier = in->getChildren()[0]->accept(this, mem);

    switch(flag) {
    case 0: {
        Interpreter::affecterVal(identifier, Interpreter::val(identifier, mem) + 1, mem);
        break; }
    case 1: {
        break; }
    case 2: {
        //Interpreter::affecterVal(identifier, Interpreter::val(identifier, mem) + 1, mem);
        break; }
    case 3: {
        Interpreter::affecterVal(identifier, Interpreter::val(identifier, mem) + 1, mem);
        break; }
    case 4: {
        break; }
    case 5: {
        break; }
    }

    return "";
}

string VisitInterp::visit(InstrsNode* iss, Memory* mem, int flag) {

    switch(flag) {
    case 0: {
        if(iss->getLabel() != "") {
            liste->insertAfter(QPair<Node*, int>(iss->getChildren()[0], 3));
            iss->getChildren()[0]->accept(this, mem);
            iss->getChildren()[1]->accept(this, mem);
        }
        break; }
    case 1: {
        break; }
    case 2: {
        if(iss->getLabel() != "") {
            //iss->getChildren()[0]->accept(this, mem, 2);
            //liste->insertAfter(QPair<Node*, int>(iss->getChildren()[0], 3));
            //iss->getChildren()[1]->accept(this, mem, 2);
            iss->getChildren()[0]->accept(this, mem);
            iss->getChildren()[1]->accept(this, mem);
        }
        break; }
    case 3: {
        if(iss->getLabel() != "") {
            iss->getChildren()[0]->accept(this, mem, 3);
            iss->getChildren()[1]->accept(this, mem, 3);
        }
        break; }
    case 4: {
        break; }
    case 5: {
        iss->getChildren()[0]->accept(this, mem,4);
        iss->getChildren()[1]->accept(this, mem,4);
        break; }
    }

    return "";
}

string VisitInterp::visit(LeafNode* ln, Memory* mem, int flag) {

    return ln->getLabel();
}

string VisitInterp::visit(MainNode* mn, Memory* mem, int flag) {

    switch(flag) {
    case 0: {
        mn->getChildren()[0]->accept(this, mem);
        mn->getChildren()[1]->accept(this, mem);

        // Retrait
        mn->getChildren()[0]->accept(this, mem, 1);
        break; }
    case 1: {
        break; }
    case 2: {
        mn->getChildren()[0]->accept(this, mem, 2);
        mn->getChildren()[1]->accept(this, mem, 2);

        break; }
    case 3: {
        mn->getChildren()[0]->accept(this, mem, 3);
        mn->getChildren()[1]->accept(this, mem, 3);

        // Retrait
       // mn->getChildren()[0]->accept(this, mem, 1);//4??
        break; }
    case 4: {
        break; }
    case 5: {
        break; }
    }

    return "";
}

string VisitInterp::visit(MethodNode* mn, Memory* mem, int flag) {
    string identifier = mn->getChildren()[1]->accept(this, mem);

    switch(flag) {
    case 0: {
        liste->insertAfter(QPair<Node*, int>(mn, 3));
        Type type = stringToType(mn->getChildren()[0]->accept(this, mem));
        Node* headers = mn->getChildren()[2];
        Interpreter::declMeth(identifier, mn, type, mem);
        break; }
    case 1: {
        Interpreter::retirerDecl(identifier, mem);
        break; }
    case 2: {
        //liste->insertAfter(QPair<Node*, int>(mn, 3));
        Type type = stringToType(mn->getChildren()[0]->accept(this, mem));
        Node* headers = mn->getChildren()[2];
        //Interpreter::declMeth(identifier, mn, type, mem);
        break; }
    case 3: {
        Type type = stringToType(mn->getChildren()[0]->accept(this, mem));
        Node* headers = mn->getChildren()[2];
        Interpreter::declMeth(identifier, mn, type, mem);
        break; }
    case 4: {
        Interpreter::retirerDecl(identifier, mem);
        break; }
    case 5: {
        break; }
    }

    return "";
}

string VisitInterp::visit(NotNode* nn, Memory* mem, int flag) {

    int child = getValue(nn->getChildren()[0], mem);

    switch(flag) {
    case 0: {
        if(!child){
            return "1";
        }else{
            return "0";
        }
        break; }
    case 1: {
        break; }
    case 2: {
        /*if(!child){
            return "1";
        }else{
            return "0";
        }*/
        break; }
    case 3: {
        if(!child){
            return "1";
        }else{
            return "0";
        }
        break; }
    case 4: {
        break; }
    case 5: {
        break; }
    }
    return "";
}

string VisitInterp::visit(NumberNode* nn, Memory* mem, int flag) {

    return nn->getChildren()[0]->accept(this, mem);
}

string VisitInterp::visit(OrNode* on, Memory* mem, int flag) {

    int leftChild = getValue(on->getChildren()[0], mem);
    int rightChild = getValue(on->getChildren()[1], mem);

    switch(flag) {
    case 0: {
        return (leftChild || rightChild) ? "1" : "0";
        break; }
    case 1: {
        break; }
    case 2: {
        //return (leftChild || rightChild) ? "1" : "0";
        break; }
    case 3: {
        return (leftChild || rightChild) ? "1" : "0";
        break; }
    case 4: {
        break; }
    case 5: {
        break; }
    }
    return "";
}

string VisitInterp::visit(PlusNode* pn, Memory* mem, int flag) {

    int leftChild = getValue(pn->getChildren()[0], mem);
    int rightChild = getValue(pn->getChildren()[1], mem);

    switch(flag) {
    case 0: {
        std::ostringstream oss;
        int value = leftChild + rightChild;
        oss << value;

        return oss.str();
        break; }
    case 1: {
        break; }
    case 2: {
        /*std::ostringstream oss;
        int value = leftChild + rightChild;
        oss << value;

        return oss.str();*/
        break; }
    case 3: {
        std::ostringstream oss;
        int value = leftChild + rightChild;
        oss << value;

        return oss.str();
        break; }
    case 4: {
        break; }
    case 5: {
        break; }
    }
    return "";
}

string VisitInterp::visit(ReturnNode* rn, Memory* mem, int flag) {
    int value = getValue(rn->getChildren()[0], mem);

    switch(flag) {
    case 0: {
        Interpreter::affecterVal(Interpreter::variableClasse(mem), value, mem);
        break; }
    case 1: {
        break; }
    case 2: {
        //Interpreter::affecterVal(Interpreter::variableClasse(mem), value, mem);
        break; }
    case 3: {
        Interpreter::affecterVal(Interpreter::variableClasse(mem), value, mem);
        break; }
    case 4: {
        break; }
    case 5: {
        break; }
    }

    return "";
}

string VisitInterp::visit(SumNode* sn, Memory* mem, int flag) {

    string identifier = sn->getChildren()[0]->accept(this, mem);
    int value = getValue(sn->getChildren()[1], mem);

    switch(flag) {
    case 0: {
        Interpreter::affecterVal(identifier, Interpreter::val(identifier, mem) + value, mem);
        break; }
    case 1: {
        break; }
    case 2: {
        //Interpreter::affecterVal(identifier, Interpreter::val(identifier, mem) + value, mem);
        break; }
    case 3: {
        Interpreter::affecterVal(identifier, Interpreter::val(identifier, mem) + value, mem);
        break; }
    case 4: {
        break; }
    case 5: {
        break; }
    }

    return "";
}

string VisitInterp::visit(TernaryArrayNode* tan, Memory* mem, int flag) {
    string identifier = tan->getChildren()[1]->accept(this, mem);
    switch(flag) {
    case 0: {
        liste->insertAfter(QPair<Node*, int>(tan, 3));
        Type type = stringToType(tan->getChildren()[0]->accept(this, mem));
        int size = getValue(tan->getChildren()[2], mem);
        Interpreter::declTab(identifier, size, type, mem);
        break; }
    case 1: {
        Interpreter::retirerDecl(identifier, mem);
        break; }
    case 2: {
        /*Type type = stringToType(tan->getChildren()[0]->accept(this, mem));
        int size = getValue(tan->getChildren()[2], mem);
        //Interpreter::declTab(identifier, size, type, mem);*/
        break; }
    case 3: {
        Type type = stringToType(tan->getChildren()[0]->accept(this, mem));
        int size = getValue(tan->getChildren()[2], mem);
        Interpreter::declTab(identifier, size, type, mem);
        break; }
    case 4: {
        Interpreter::retirerDecl(identifier, mem);
        break; }
    case 5: {
        break; }
    }

    return "";
}

string VisitInterp::visit(TimesNode* tn, Memory* mem, int flag) {
    int leftChild = getValue(tn->getChildren()[0], mem);
    int rightChild = getValue(tn->getChildren()[1], mem);

    switch(flag) {
    case 0: {
        std::ostringstream oss;
        int value = leftChild * rightChild;
        oss << value;
        return oss.str();
        break; }
    case 1: {
        break; }
    case 2: {
      /*  std::ostringstream oss;
        int value = leftChild * rightChild;
        oss << value;
        return oss.str();*/
        break; }
    case 3: {
        std::ostringstream oss;
        int value = leftChild * rightChild;
        oss << value;
        return oss.str();
        break; }
    case 4: {
        break; }
    case 5: {
        break; }
    }
    return "";
}

string VisitInterp::visit(UnaryMinusNode* umn, Memory* mem, int flag) {
    int leftChild = getValue(umn->getChildren()[0], mem);

    switch(flag) {
    case 0: {
        std::ostringstream oss;
        int value = -leftChild;
        oss << value;
        return oss.str();
        break; }
    case 1: {
        break; }
    case 2: {
       /* std::ostringstream oss;
        int value = -leftChild;
        oss << value;
        return oss.str();*/
        break; }
    case 3: {
        std::ostringstream oss;
        int value = -leftChild;
        oss << value;
        return oss.str();
        break; }
    case 4: {
        break; }
    case 5: {
        break; }
    }
    return "";
}

string VisitInterp::visit(VarNode* vn, Memory* mem, int flag) {
    Type type;
    string identifier = vn->getChildren()[1]->accept(this, mem);
    int value;

    switch(flag) {
    case 0: {
        liste->insertAfter(QPair<Node*, int>(vn, 3));
        type = stringToType(vn->getChildren()[0]->accept(this, mem));
        value = getValue(vn->getChildren()[2], mem);
        Interpreter::declVar(identifier, value, type, mem);
        break; }
    case 1: {
        Interpreter::retirerDecl(identifier, mem);
        break; }
    case 2: {
        type = stringToType(vn->getChildren()[0]->accept(this, mem));
        value = getValue(vn->getChildren()[2], mem);
        Interpreter::declVar(identifier, value, type, mem);
        break; }
    case 3: {
        type = stringToType(vn->getChildren()[0]->accept(this, mem));
        value = getValue(vn->getChildren()[2], mem);
        Interpreter::declVar(identifier, value, type, mem);
        break; }
    case 4: {
        Interpreter::retirerDecl(identifier, mem);
        break; }
    case 5: {
        type = stringToType(vn->getChildren()[0]->accept(this, mem));
        value = getValue(vn->getChildren()[2], mem);
        Interpreter::declVar(identifier, value, type, mem);
        break; }
    }
    mem->getStack()->display();
    return "";
}

string VisitInterp::visit(VarsNode* vsn, Memory* mem, int flag) {
    switch(flag) {
    case 0: {
        if(vsn->getLabel() != ""){
            vsn->getChildren()[0]->accept(this, mem);
            vsn->getChildren()[1]->accept(this, mem);
        }
        break; }
    case 1: {
        if(vsn->getLabel() != ""){
            vsn->getChildren()[1]->accept(this, mem, 1);
            vsn->getChildren()[0]->accept(this, mem, 1);
            liste->insertAfter(QPair<Node*, int>(vsn->getChildren()[0], 4));
        }
        break; }
    case 2: {
        if(vsn->getLabel() != ""){
            vsn->getChildren()[0]->accept(this, mem, 2);
            vsn->getChildren()[1]->accept(this, mem, 2);
        }
        break; }
    case 3: {
        /*if(vsn->getLabel() != ""){
            vsn->getChildren()[0]->accept(this, mem, 3);
            //vsn->getChildren()[1]->accept(this, mem, 3);
        }*/
        break; }
    case 4: {
        break; }
    case 5: {
        if(vsn->getLabel() != ""){
            vsn->getChildren()[0]->accept(this, mem, 4);
            vsn->getChildren()[1]->accept(this, mem, 4);
        }
        break; }
    }
    return "";
}

string VisitInterp::visit(WhileNode* wn, Memory* mem, int flag) {
    bool condition = getValue(wn->getChildren()[0], mem);
    switch(flag) {
    case 0: {
        if(condition){
            wn->getChildren()[1]->accept(this, mem);
            this->visit(wn, mem, flag);
        }
        break; }
    case 1: {
        break; }
    case 2: {
        if(condition){
            wn->getChildren()[1]->accept(this, mem, 2);
            this->visit(wn, mem, 2);
        }
        break; }
    case 3: {
       /* if(condition){
            wn->getChildren()[1]->accept(this, mem, 3);
            this->visit(wn, mem, 3);
        }*/
        break; }
    case 4: {
        break; }
    case 5: {
        break; }
    }
    return "";
}
