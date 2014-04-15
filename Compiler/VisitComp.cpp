#include "../LexerParser/LibNode/VisitComp.h"
#include <fstream>
#include <iostream>

using namespace std;

VisitComp::VisitComp(): compteurMeth(0), compteurClass(0){}

VisitComp::~VisitComp(){}

void VisitComp::visitAll(ClassNode* root, string filename){
    string res;
    FILE *f;
    
    res = root->accept(this);
    filename += ".jjc";
    ofstream file(filename.c_str(), ofstream::trunc);
    file << res;
    file.close();
}

string VisitComp::visit(AndNode* c) {
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(AssignmentNode* assign) {
    string temp;
    	temp = "push(";
		temp += assign->getChildren()[1]->accept(this) + ")" + "\n";
		temp += "store(";
		temp += assign->getChildren()[0]->accept(this) + ")\n";
    return temp;
}

string VisitComp::visit(BinaryArrayNode* c) {
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(BinaryMinusNode* c) {
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(CallENode* c) {
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(CallINode* c) {
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(ClassNode* c) {
    string temp;
    temp += "init\n";
    temp += c->getChildren()[1]->accept(this);
    temp += c->getChildren()[2]->accept(this);
        while(compteurClass>1){
        temp += "swap\npop\n";
        compteurClass--;

    }
    //retrait du main et stop
    temp += "pop\njcstop\n";
    return temp;
}

string VisitComp::visit(CstNode* c) {
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(DeclsNode* decls) {
    string temp;
       if(decls->getLabel() != ""){
       		temp = "new(" + decls->getChildren()[0]->accept(this) + ")" + "\n";
       		temp += decls->getChildren()[1]->accept(this);
       		compteurClass++;
       }
    return temp;
}

string VisitComp::visit(DivideNode* c) {
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(EqualityNode* c) {
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(ExpListNode* c) {
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(GreaterThanNode* c) {
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(HeaderNode* c) {
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(HeadersNode* c) {
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(IdentNode* in) {
    return in->getChildren()[0]->accept(this);
}

string VisitComp::visit(IfElseNode* in) {
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(IfNode* in) {
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(IncrementNode* in) {
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(InstrsNode* iss) {
    string temp;
    temp += iss->getChildren()[0]->accept(this);
    temp += iss->getChildren()[1]->accept(this);
    return temp;
}

string VisitComp::visit(LeafNode* leaf) {
    return leaf->getLabel();
}

string VisitComp::visit(MainNode* main) {
	compteurClass++;
    string temp;
    temp += main->getChildren()[0]->accept(this);
    temp += main->getChildren()[1]->accept(this);
    //push(o) void methode
    //swap() pop() retrait de la variable declare dans le main
    //Ajouter compteur + boucle de swap pop pour retirer toutes les variables déclare
    temp += "push(0)\n";
    while(compteurMeth>0){
    	temp += "swap\npop\n";
    	compteurMeth--;
    	
    }
    return temp;
}

string VisitComp::visit(MethodNode* in) {
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(NotNode* in) {
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(NumberNode* num) {
    return num->getChildren()[0]->accept(this);
}

string VisitComp::visit(OrNode* num) {
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(PlusNode* num) {
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(ReturnNode* num) {
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(SumNode* num) {
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(TernaryArrayNode* num) {
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(TimesNode* num) {
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(UnaryMinusNode* num) {
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitComp::visit(VarNode* v) {
    string temp;
    if(v->getChildren()[2]->getChildren()[0]!=NULL){
		temp+="push("+v->getChildren()[2]->getChildren()[0]->accept(this)+")\n";
	}
	temp += "new(";
    temp += v->getChildren()[0]->accept(this) + ",";
    temp += v->getChildren()[1]->accept(this) + ",";
    temp += "var,";
    temp += "0)";
    compteurMeth++;
    return temp;
}

string VisitComp::visit(VarsNode* v) {
   	 string temp;
       	if(v->getLabel() != ""){
       		temp += v->getChildren()[0]->accept(this) + "\n";
       		temp += v->getChildren()[1]->accept(this);
       	}
   	 return temp;
}

string VisitComp::visit(WhileNode* num) {
    return "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}
