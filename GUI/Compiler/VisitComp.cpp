#include "../LibNode/VisitComp.h"
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

VisitComp::VisitComp(): ligneCourante(0){}

VisitComp::~VisitComp(){}

void VisitComp::visitAll(ClassNode* root, string filename){
    string res;
    
    res = root->accept(this);
    filename += ".jjc";
    ofstream file(filename.c_str(), ofstream::trunc);
    file << res;
    file.close();
}

string VisitComp::visit(AndNode* an, int flag) {
    string temp;
    if(flag==0){
        temp += an->getChildren()[0]->accept(this);
        temp += an->getChildren()[1]->accept(this);
        temp += "and\n";
    }else if(flag==2){
        temp += an->getChildren()[0]->accept(this, 2);
        temp += an->getChildren()[1]->accept(this, 2);
        temp += "1";
    }
    return temp;

}

string VisitComp::visit(AssignmentNode* assign, int flag) {
    string temp;
    if(flag==0){
        temp = "";
        temp += assign->getChildren()[1]->accept(this);
        temp += "store(";
        temp += assign->getChildren()[0]->getChildren()[0]->getLabel() + ")\n";
        ligneCourante++;
    }else if(flag==2){
        temp += assign->getChildren()[1]->accept(this, 2);
        temp += "1";
    }
    return temp;
}

string VisitComp::visit(BinaryArrayNode* ban, int flag) {
    ban->getLabel(); // A supprimer ! Sert uniquement à enlever les warnings !!!!
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(BinaryMinusNode* bmn, int flag) {
    string temp;
    if(flag==0){
        temp += bmn->getChildren()[0]->accept(this);
        temp += bmn->getChildren()[1]->accept(this);
        temp += "sub\n";
        ligneCourante++;
    }else if(flag==2){
        temp += bmn->getChildren()[0]->accept(this, 2);
        temp += bmn->getChildren()[1]->accept(this, 2);
        temp += "1";
    }
    return temp;
}

string VisitComp::visit(CallENode* cen, int flag) {
    cen->getLabel(); // A supprimer ! Sert uniquement à enlever les warnings !!!!
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(CallINode* cin, int flag) {
    cin->getLabel(); // A supprimer ! Sert uniquement à enlever les warnings !!!!
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(ClassNode* c, int flag) {
    string temp;
    temp += "init\n";
    ligneCourante++;
    temp += c->getChildren()[1]->accept(this);
    temp += c->getChildren()[2]->accept(this);

    //retrait dss
    temp += c->getChildren()[1]->accept(this, 1);
    //retrait du main et stop
    temp += "jcstop\n";
    ligneCourante++;
    return temp;
}

string VisitComp::visit(CstNode* cn, int flag) {
    cn->getLabel(); // A supprimer ! Sert uniquement à enlever les warnings !!!!
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(DeclsNode* decls, int flag) {
    string temp;
    if(flag == 0){
        if(decls->getLabel() != ""){
            temp = "new(" + decls->getChildren()[0]->accept(this) + ")" + "\n";
            ligneCourante++;
            temp += decls->getChildren()[1]->accept(this);
        }
    }else if(flag == 1){
        if(decls->getLabel() != ""){
            temp = "swap\npop\n";
            ligneCourante++;
            ligneCourante++;
            temp += decls->getChildren()[1]->accept(this, 1);
        }
    }else if(flag==2){
        temp += decls->getChildren()[1]->accept(this, 2);
        temp += "1";
    }else if(flag == 3){
        temp += "11";
        temp += decls->getChildren()[1]->accept(this, 3);
    }
    return temp;
}

string VisitComp::visit(DivideNode* dn, int flag) {
    string temp;
    if(flag == 0){
        temp += dn->getChildren()[0]->accept(this);
        temp += dn->getChildren()[1]->accept(this);
        temp += "div\n";
        ligneCourante++;
    }else if(flag==2){
        temp += dn->getChildren()[0]->accept(this, 2);
        temp += dn->getChildren()[1]->accept(this, 2);
        temp += "1";
    }
    return temp;
}

string VisitComp::visit(EqualityNode* eqn, int flag) {
    string temp;
    if(flag == 0){
        temp += eqn->getChildren()[0]->accept(this);
        temp += eqn->getChildren()[1]->accept(this);
        temp += "cmp\n";
        ligneCourante++;
    }else if(flag==2){
        temp += eqn->getChildren()[0]->accept(this, 2);
        temp += eqn->getChildren()[1]->accept(this, 2);
        temp += "1";
    }
    return temp;
}

string VisitComp::visit(ExpListNode* c, int flag) {
    string temp = "";
    if(flag == 0){
        temp += c->getChildren()[0]->accept(this);
        temp += c->getChildren()[1]->accept(this);
    }else if(flag==2){
        temp += c->getChildren()[0]->accept(this, 2);
        temp += c->getChildren()[1]->accept(this, 2);
    }
    return temp;
}

string VisitComp::visit(GreaterThanNode* c, int flag) {
    string temp;
    if(flag == 0){
        temp += c->getChildren()[0]->accept(this);
        temp += c->getChildren()[1]->accept(this);
        temp += "sup\n";
        ligneCourante++;
    }else if(flag==2){
        temp += c->getChildren()[0]->accept(this, 2);
        temp += c->getChildren()[1]->accept(this, 2);
        temp += "1";
    }
    return temp;
}

string VisitComp::visit(HeaderNode* c, int flag) {
    c->getLabel(); // A supprimer ! Sert uniquement à enlever les warnings !!!!
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(HeadersNode* c, int flag) {
    c->getLabel(); // A supprimer ! Sert uniquement à enlever les warnings !!!!
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(IdentNode* in, int flag) {
    string temp="";
    if(flag == 0){
        temp = "load(" + in->getChildren()[0]->accept(this) + ")\n";
        ligneCourante++;
    }else if(flag==2){
        temp += "1";
    }
    return temp;
}

string VisitComp::visit(IfElseNode* in, int flag) {
    string temp;
    int res = 0;
    int nbLigne;
    if(flag == 0){
        //conditions du if
        temp +=in->getChildren()[0]->accept(this);
        nbLigne=ligneCourante + 2 + in->getChildren()[2]->accept(this, 2).size();

        string result;
        ostringstream convert;
        convert << nbLigne;
        result = convert.str();

        temp += "if("+result;
        temp += ")\n";
        ligneCourante++;
        //nb de lignes dans instructions
        res = in->getChildren()[1]->accept(this, 2).size(); // ou legnth
        nbLigne = nbLigne+res;
        string result2;

		//else
		temp += in->getChildren()[2]->accept(this);

		//goto
        ostringstream convert2;
        convert2 << nbLigne;
        result2 = convert2.str();
        temp += "goto("+result2;
        temp += ")\n";
        ligneCourante++;
        //instructions du if
        temp += in->getChildren()[1]->accept(this);
    }else if(flag == 1){
        temp += in->getChildren()[1]->accept(this, 1);
        temp += in->getChildren()[2]->accept(this, 1);
    }else if(flag == 2){
        temp+="11";
        temp += in->getChildren()[1]->accept(this, 2);
        temp += in->getChildren()[2]->accept(this, 1);
    }

    return temp;
}

string VisitComp::visit(IfNode* in, int flag) {
    string temp;
    int res = 0;
    int nbLigne;
    if(flag == 0){
        //conditions
        temp +=in->getChildren()[0]->accept(this);
        nbLigne=ligneCourante+2;

        string result;

        ostringstream convert;
        convert << nbLigne;
        result = convert.str();

        temp += "if("+result;
        temp += ")\n";
        ligneCourante++;
        //nb de lignes dans instructions
        res = in->getChildren()[1]->accept(this, 2).size(); // ou legnth
        nbLigne = nbLigne+res;
        string result2;

        ostringstream convert2;
        convert2 << nbLigne;
        result2 = convert2.str();
        temp += "goto("+result2;
        temp += ")\n";
        ligneCourante++;
        //instructions
        temp += in->getChildren()[1]->accept(this);
    }else if(flag == 1){
        temp += in->getChildren()[1]->accept(this, 1);
    }else if(flag == 2){
        temp+="11";
        temp += in->getChildren()[1]->accept(this, 2);
    }

    return temp;
}

string VisitComp::visit(IncrementNode* in, int flag) {
    string temp;
    if(flag == 0){
        temp += "push(1)\n";
        ligneCourante++;
        temp += "inc("+in->getChildren()[0]->getChildren()[0]->getLabel();
        temp += ")\n";
        ligneCourante++;
    }else if(flag==2){
        temp += "11";
    }
    return temp;
}

string VisitComp::visit(InstrsNode* iss, int flag) {
    string temp;
    if(flag == 0){
        temp += iss->getChildren()[0]->accept(this);
        temp += iss->getChildren()[1]->accept(this);
    }else if(flag==2){
        temp += iss->getChildren()[0]->accept(this, 2);
        temp += iss->getChildren()[1]->accept(this, 2);
    }
    return temp;
}

string VisitComp::visit(LeafNode* leaf, int flag) {
    return leaf->getLabel();
}

string VisitComp::visit(MainNode* main, int flag) {
    string temp;
    if(flag == 0){
        temp += main->getChildren()[0]->accept(this);
        temp += main->getChildren()[1]->accept(this);
        //push(0) void methode
        temp += "push(0)\n";
        ligneCourante++;

        //retrait dss
        temp += main->getChildren()[0]->accept(this, 1);
        //retrait du main : pop
        temp += "pop\n";
    }else if(flag==2){
        temp += main->getChildren()[0]->accept(this, 2);
        temp += main->getChildren()[1]->accept(this, 2);
        //1 de plus pour le push(0)
        temp += "1";
        //compte les swap pop avec le flag =3
        temp += main->getChildren()[0]->accept(this, 3);
        temp += main->getChildren()[1]->accept(this, 3);
        //pop de la fin
        temp+="1";
    }
    return temp;
}

string VisitComp::visit(MethodNode* in, int flag) {
    in->getLabel(); // A supprimer ! Sert uniquement à enlever les warnings !!!!
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(NotNode* nn, int flag) {
    string temp;
    if(flag==0){
        temp += nn->getChildren()[0]->accept(this);
        temp += "not\n";
        ligneCourante++;
    }else if(flag==2){
        temp += nn->getChildren()[0]->accept(this, 2);
        temp += "1";
    }
    return temp;
}

string VisitComp::visit(NumberNode* num, int flag) {
    string temp;
    if(flag == 0){
        temp += "push("+num->getChildren()[0]->accept(this) +")\n";
        ligneCourante++;
    }else if(flag==2){
        temp += "1";
    }
    return temp;
}

string VisitComp::visit(OrNode* on, int flag) {
    string temp;
    if(flag == 0){
        temp += on->getChildren()[0]->accept(this);
        temp += on->getChildren()[1]->accept(this);
        temp += "or\n";
    }else if(flag==2){
        temp += on->getChildren()[0]->accept(this, 2);
        temp += on->getChildren()[1]->accept(this, 2);
        temp += "1";
    }
    return temp;
}

string VisitComp::visit(PlusNode* pn, int flag) {
    string temp;
    if(flag == 0){
        temp += pn->getChildren()[0]->accept(this);
        temp += pn->getChildren()[1]->accept(this);
        temp += "add\n";
        ligneCourante++;
    }else if(flag==2){
        temp += pn->getChildren()[0]->accept(this, 2);
        temp += pn->getChildren()[1]->accept(this, 2);
        temp += "1";
    }
    return temp;
}

string VisitComp::visit(ReturnNode* rn, int flag) {
    rn->getLabel(); // A supprimer ! Sert uniquement à enlever les warnings !!!!
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(SumNode* sn, int flag) {
    string temp;
    if(flag == 0){
        temp += "load("+sn->getChildren()[0]->getChildren()[0]->getLabel();
        temp += ")\n";
        ligneCourante++;
        temp += sn->getChildren()[1]->accept(this);
        temp += "add\n";
        ligneCourante++;
    }else if(flag==2){
        temp += sn->getChildren()[1]->accept(this, 2);
        temp += "11";
    }
    return temp;
}

string VisitComp::visit(TernaryArrayNode* tan, int flag) {
    tan->getLabel(); // A supprimer ! Sert uniquement à enlever les warnings !!!!
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(TimesNode* tn, int flag) {
    string temp;
    if(flag == 0){
        temp += tn->getChildren()[0]->accept(this);
        temp += tn->getChildren()[1]->accept(this);
        temp += "mul\n";
        ligneCourante++;
    }else if(flag==2){
        temp += tn->getChildren()[0]->accept(this, 2);
        temp += tn->getChildren()[1]->accept(this, 2);
        temp += "1";
    }
    return temp;
}

string VisitComp::visit(UnaryMinusNode* umn, int flag) {
    string temp;
    if(flag == 0){
        temp += umn->getChildren()[0]->accept(this);
        temp += "neg\n";
        ligneCourante++;
    }else if(flag==2){
        temp += umn->getChildren()[0]->accept(this, 2);
        temp += "1";
    }
    return temp;
}

string VisitComp::visit(VarNode* v, int flag) {
    string temp;
    if(flag == 0){
        if(v->getChildren()[2]->getChildren() != NULL){
            temp+=v->getChildren()[2]->accept(this);
            //ANCIENNE VERSION temp+="push("+v->getChildren()[2]->getChildren()[0]->accept(this)+")\n";
        }else{
            temp += "push(0)\n";
            ligneCourante++;
        }
        temp += "new(";
        temp += v->getChildren()[1]->getChildren()[0]->getLabel() + ",";
        temp += v->getChildren()[0]->accept(this) + ",";
        temp += "var,";
        temp += "0)";
        ligneCourante++;
    }else if(flag == 1){
        temp += "swap\npop\n";
        ligneCourante++;
        ligneCourante++;
    }else if(flag==2){
        if(v->getChildren()[2]->getChildren() != NULL){
            temp += v->getChildren()[2]->accept(this, 2);
        }
        temp += "1";
    }else if(flag == 3){
        temp += "11";
    }
    return temp;
}

string VisitComp::visit(VarsNode* v, int flag) {
    string temp;
    if(flag == 0){
        if(v->getLabel() != ""){
            temp = v->getChildren()[0]->accept(this) + "\n";
            temp += v->getChildren()[1]->accept(this);
        }
    }else if(flag == 1){
        temp = "swap\npop\n";
        ligneCourante++;
        ligneCourante++;
        temp += v->getChildren()[1]->accept(this, 1);
    }else if(flag==2){
        temp += v->getChildren()[0]->accept(this, 2);
        temp += v->getChildren()[1]->accept(this, 2);
    }else if(flag == 3){
        temp += v->getChildren()[0]->accept(this, 3);
        temp += v->getChildren()[1]->accept(this, 3);
    }
    return temp;
}

string VisitComp::visit(WhileNode* wn, int flag) {
    wn->getLabel(); // A supprimer ! Sert uniquement à enlever les warnings !!!!
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}
