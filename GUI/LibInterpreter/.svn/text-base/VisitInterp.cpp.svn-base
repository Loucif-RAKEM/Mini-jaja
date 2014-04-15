#include "../LibInterpreter/Memory.h"
#include "../LibNode/VisitInterp.h"
#include "Interpreter.h"
#include <fstream>
#include <iostream>
#include <stdlib.h>

using namespace std;

VisitInterp::VisitInterp(): compteurMeth(0), compteurClass(0){
    stringToType["BOOLEAN"] = BOOLEAN;
    stringToType["INTEGER"] = INTEGER;
    stringToType["VOID"] = VOID;
}

VisitInterp::~VisitInterp(){}

void VisitInterp::visitAll(ClassNode* root, Memory* mem, int flag){
    //Visite tout les élements de l'arbre
    //string res;
    //Memory* mem = new mem(NULL, 0);

    root->accept(this, mem);
    //cout << res;
}

string VisitInterp::visit(AndNode* c, Memory* mem, int flag) {
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

string VisitInterp::visit(AssignmentNode* assign, Memory* mem, int flag) {
    string identifier = assign->getChildren()[0]->accept(this, mem);
    int value = atoi(assign->getChildren()[1]->accept(this, mem).c_str());
    Interpreter::affecterVal(identifier, value, mem->getStack());
    /*
    //push
    mem->push(new Quadruplet("", assign->getChildren()[1]->accept(this, mem)), CST, VOID);
    mem->getAddress(mem->getAddress()+1);
    //store
    int value = mem->top()->getValue();œ
    mem->pop();
    Interpreter::affecterVal(assign->getChildren()[0]->accept(this, mem));

    //*/
    return "";
}

string VisitInterp::visit(BinaryArrayNode* c, Memory* mem, int flag) {
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

string VisitInterp::visit(BinaryMinusNode* c, Memory* mem, int flag) {
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

string VisitInterp::visit(CallENode* c, Memory* mem, int flag) {
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

string VisitInterp::visit(CallINode* c, Memory* mem, int flag) {
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

string VisitInterp::visit(ClassNode* c, Memory* mem, int flag) {
    // []
    mem->setStack(new Stack<Quadruplet*>());

    // DeclVar
    string identifier = c->getChildren()[0]->accept(this, mem);
    Interpreter::declVar(identifier, 0, VOID, mem->getStack());


    // dss
    c->getChildren()[1]->accept(this, mem);
    //mma
    c->getChildren()[2]->accept(this, mem);
    
    //retrait dss
    c->getChildren()[1]->accept(this, mem, 1);

    return "";
}

string VisitInterp::visit(CstNode* c, Memory* mem, int flag) {
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

string VisitInterp::visit(DeclsNode* decls, Memory* mem, int flag) {
    if(flag == 0){
        if(decls->getLabel() != "") {
            decls->getChildren()[0]->accept(this, mem);
            decls->getChildren()[1]->accept(this, mem);
        }
    }else{
        if(decls->getLabel() != "") {
            decls->getChildren()[0]->accept(this, mem, 1);
            decls->getChildren()[1]->accept(this, mem, 1);
        }
    }
    return "";
}

string VisitInterp::visit(DivideNode* c, Memory* mem, int flag) {
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

string VisitInterp::visit(EqualityNode* c, Memory* mem, int flag) {
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

string VisitInterp::visit(ExpListNode* c, Memory* mem, int flag) {
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

string VisitInterp::visit(GreaterThanNode* c, Memory* mem, int flag) {
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

string VisitInterp::visit(HeaderNode* c, Memory* mem, int flag) {
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

string VisitInterp::visit(HeadersNode* c, Memory* mem, int flag) {
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

string VisitInterp::visit(IdentNode* id, Memory* mem, int flag) {
    Interpreter::val(id->getChildren()[0]->accept(this, mem), mem->getStack());
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

string VisitInterp::visit(IfElseNode* in, Memory* mem, int flag) {
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

string VisitInterp::visit(IfNode* in, Memory* mem, int flag) {
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

string VisitInterp::visit(IncrementNode* in, Memory* mem, int flag) {
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

string VisitInterp::visit(InstrsNode* iss, Memory* mem, int flag) {
    if(iss->getLabel() != "") {
        iss->getChildren()[0]->accept(this, mem);
        iss->getChildren()[1]->accept(this, mem);
    }
    return "";
}

string VisitInterp::visit(LeafNode* leaf, Memory* mem, int flag) {
    return leaf->getLabel();
    return "";
}

string VisitInterp::visit(MainNode* main, Memory* mem, int flag) {

    main->getChildren()[0]->accept(this, mem);
    main->getChildren()[1]->accept(this, mem);
    
    //retrait
    main->getChildren()[0]->accept(this, mem, 1);
    return "";
}

string VisitInterp::visit(MethodNode* in, Memory* mem, int flag) {
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

string VisitInterp::visit(NotNode* in, Memory* mem, int flag) {
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

string VisitInterp::visit(NumberNode* num, Memory* mem, int flag) {
    return num->accept(this, mem);
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
}

string VisitInterp::visit(OrNode* num, Memory* mem, int flag) {
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

string VisitInterp::visit(PlusNode* num, Memory* mem, int flag) {
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

string VisitInterp::visit(ReturnNode* num, Memory* mem, int flag) {
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

string VisitInterp::visit(SumNode* num, Memory* mem, int flag) {
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

string VisitInterp::visit(TernaryArrayNode* num, Memory* mem, int flag) {
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

string VisitInterp::visit(TimesNode* num, Memory* mem, int flag) {
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

string VisitInterp::visit(UnaryMinusNode* num, Memory* mem, int flag) {
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

string VisitInterp::visit(VarNode* v, Memory* mem, int flag) {
    string identifier;
    int value = 0;
    Type type;
    
    if(flag == 0){
        identifier = v->getChildren()[1]->accept(this, mem);            //identifier
        type = stringToType[v->getChildren()[0]->accept(this, mem)];                  //type

        if(v->getChildren()[2]->getChildren() != NULL){
            value = atoi(v->getChildren()[2]->accept(this, mem).c_str());   // value

            Interpreter::declVar(identifier,
                                 value,
                                 type,
                                 mem->getStack());     //mem
            //*/
        }else{

            Interpreter::declVar(identifier,
                                 value,
                                 type,
                                 mem->getStack());    //mem
            //*/
        }
    }else{
        /*identifier = v->getChildren()[1]->accept(this, mem);            //identifier
        type = stringToType[v->getChildren()[0]->accept(this, mem)];                  //type

        if(v->getChildren()[2]->getChildren() != NULL){
             value = atoi(v->getChildren()[2]->accept(this, mem).c_str());   // value

            Interpreter::retraitVar(identifier,
                                value,
                                type,
                                mem);     //mem
            //*/
        /*}else{

            Interpreter::retraitVar(identifier,
                                 value,
                                 type,
                                 mem);    //mem
            //*/
        //}
    }
    return "";
}

string VisitInterp::visit(VarsNode* v, Memory* mem, int flag) {
    if(flag == 0){
        if(v->getLabel() != ""){
            v->getChildren()[0]->accept(this, mem);
            v->getChildren()[1]->accept(this, mem);
        }
    }else{
        if(v->getLabel() != ""){
            v->getChildren()[0]->accept(this, mem, 1);
            v->getChildren()[1]->accept(this, mem, 1);
        }
    }
    return "";
}

string VisitInterp::visit(WhileNode* num, Memory* mem, int flag) {
    cout <<  "BE CAREFULL : VISIT NOT IMPLEMENTED FOR THIS NODE !\n";
    return "";
}

