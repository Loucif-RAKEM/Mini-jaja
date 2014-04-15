#include "VisitComp.h"
#include <fstream>
#include <iostream>

using namespace std;

VisitComp::VisitComp(): compteurMeth(0), compteurClass(0){}

VisitComp::~VisitComp(){}

void VisitComp::visitAll(ClassNode* root, string filename){
    string res;
    
    res = root->accept(this);
    filename += ".jjc";
    ofstream file(filename.c_str(), ofstream::trunc);
    file << res;
    file.close();
}

string VisitComp::visit(AndNode* c, int flag) {
    string temp;
    temp += c->getChildren()[0]->accept(this);
    temp += c->getChildren()[1]->accept(this);
    temp += "and\n";
    return temp;
}

string VisitComp::visit(AssignmentNode* assign, int flag) {
    string temp;
    temp = "";
    temp += assign->getChildren()[1]->accept(this);
    temp += "store(";
    temp += assign->getChildren()[0]->getChildren()[0]->getLabel() + ")\n";
    return temp;
}

string VisitComp::visit(BinaryArrayNode* c, int flag) {
    c->getLabel(); // A supprimer ! Sert uniquement à enlever les warnings !!!!
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(BinaryMinusNode* c, int flag) {
    string temp;
    temp += c->getChildren()[0]->accept(this);
    temp += c->getChildren()[1]->accept(this);
    temp += "sub\n";
    return temp;
}

string VisitComp::visit(CallENode* c, int flag) {
    c->getLabel(); // A supprimer ! Sert uniquement à enlever les warnings !!!!
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(CallINode* c, int flag) {
    c->getLabel(); // A supprimer ! Sert uniquement à enlever les warnings !!!!
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(ClassNode* c, int flag) {
    string temp;
    temp += "init\n";
    temp += c->getChildren()[1]->accept(this);
    temp += c->getChildren()[2]->accept(this);

    //retrait dss
    temp += c->getChildren()[1]->accept(this, 1);
    //retrait du main et stop
    temp += "pop\njcstop\n";
    return temp;
}

string VisitComp::visit(CstNode* c, int flag) {
    c->getLabel(); // A supprimer ! Sert uniquement à enlever les warnings !!!!
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(DeclsNode* decls, int flag) {
    string temp;
    if(flag == 0){
        if(decls->getLabel() != ""){
            temp = "new(" + decls->getChildren()[0]->accept(this) + ")" + "\n";
            temp += decls->getChildren()[1]->accept(this);
        }
    }else{
        if(decls->getLabel() != ""){
            temp = "swap\npop\n";
            temp += decls->getChildren()[1]->accept(this, 1);
        }
    }
    return temp;
}

string VisitComp::visit(DivideNode* c, int flag) {
    string temp;
    temp += c->getChildren()[0]->accept(this);
    temp += c->getChildren()[1]->accept(this);
    temp += "div\n";
    return temp;
}

string VisitComp::visit(EqualityNode* c, int flag) {
    string temp;
    temp += c->getChildren()[0]->accept(this);
    temp += c->getChildren()[1]->accept(this);
    temp += "cmp\n";
    return temp;
}

string VisitComp::visit(ExpListNode* c, int flag) {
    string temp = "";
    temp += c->getChildren()[0]->accept(this);
    temp += c->getChildren()[1]->accept(this);
    return temp;
}

string VisitComp::visit(GreaterThanNode* c, int flag) {
    string temp;
    temp += c->getChildren()[0]->accept(this);
    temp += c->getChildren()[1]->accept(this);
    temp += "sup\n";
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
    return "load(" + in->getChildren()[0]->accept(this) + ")\n";
}

string VisitComp::visit(IfElseNode* in, int flag) {
    in->getLabel(); // A supprimer ! Sert uniquement à enlever les warnings !!!!
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(IfNode* in, int flag) {
    in->getLabel(); // A supprimer ! Sert uniquement à enlever les warnings !!!!
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(IncrementNode* in, int flag) {
    in->getLabel(); // A supprimer ! Sert uniquement à enlever les warnings !!!!
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(InstrsNode* iss, int flag) {
    string temp;
    temp += iss->getChildren()[0]->accept(this);
    temp += iss->getChildren()[1]->accept(this);
    return temp;
}

string VisitComp::visit(LeafNode* leaf, int flag) {
    return leaf->getLabel();
}

string VisitComp::visit(MainNode* main, int flag) {
    string temp;
    temp += main->getChildren()[0]->accept(this);
    temp += main->getChildren()[1]->accept(this);
    //push(o) void methode
    temp += "push(0)\n";

    //retrait dss
    temp += main->getChildren()[0]->accept(this, 1);
    return temp;
}

string VisitComp::visit(MethodNode* in, int flag) {
    in->getLabel(); // A supprimer ! Sert uniquement à enlever les warnings !!!!
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(NotNode* nn, int flag) {
    string temp;
    temp += nn->getChildren()[0]->accept(this);
    temp += "not\n";
    return temp;
}

string VisitComp::visit(NumberNode* num, int flag) {
    return "push("+num->getChildren()[0]->accept(this) +")\n";
}

string VisitComp::visit(OrNode* on, int flag) {
    string temp;
    temp += on->getChildren()[0]->accept(this);
    temp += on->getChildren()[1]->accept(this);
    temp += "or\n";
    return temp;
}

string VisitComp::visit(PlusNode* pn, int flag) {
    string temp;
    temp += pn->getChildren()[0]->accept(this);
    temp += pn->getChildren()[1]->accept(this);
    temp += "add\n";
    return temp;
}

string VisitComp::visit(ReturnNode* rn, int flag) {
    rn->getLabel(); // A supprimer ! Sert uniquement à enlever les warnings !!!!
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(SumNode* sn, int flag) {
    sn->getLabel(); // A supprimer ! Sert uniquement à enlever les warnings !!!!
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(TernaryArrayNode* tan, int flag) {
    tan->getLabel(); // A supprimer ! Sert uniquement à enlever les warnings !!!!
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(TimesNode* tn, int flag) {
    string temp;
    temp += tn->getChildren()[0]->accept(this);
    temp += tn->getChildren()[1]->accept(this);
    temp += "mul\n";
    return temp;
}

string VisitComp::visit(UnaryMinusNode* umn, int flag) {
    string temp;
    temp += umn->getChildren()[0]->accept(this);
    temp += "neg\n";
    return temp;
}

string VisitComp::visit(VarNode* v, int flag) {
    string temp;
    if(flag == 0){
        if(v->getChildren()[2]->getChildren() != NULL){
            temp+=v->getChildren()[2]->accept(this);
            //ANCIENNE VERSION temp+="push("+v->getChildren()[2]->getChildren()[0]->accept(this)+")\n";
        }
        temp += "new(";
        temp += v->getChildren()[1]->getChildren()[0]->getLabel() + ",";
        temp += v->getChildren()[0]->accept(this) + ",";
        temp += "var,";
        temp += "0)";
    }else{
        temp += "swap\npop\n";
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
    }else{
        temp = "swap\npop\n";
        temp += v->getChildren()[1]->accept(this, 1);
    }
    return temp;
}

string VisitComp::visit(WhileNode* wn, int flag) {
    wn->getLabel(); // A supprimer ! Sert uniquement à enlever les warnings !!!!
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}
