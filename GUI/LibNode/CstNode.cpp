#include "CstNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "../LibInterpreter/Stack.h"

CstNode::CstNode(Node* child1, Node* child2, Node* child3): Node("cst",  3){
    appendChild(child1);
    appendChild(child2);
    appendChild(child3);
}

CstNode::~CstNode(){}

string CstNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string CstNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

