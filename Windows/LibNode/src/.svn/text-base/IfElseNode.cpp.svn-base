#include "IfElseNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "TypeChecker.h"

IfElseNode::IfElseNode(Node* child1, Node* child2, Node* child3): Node("ifelse",  3){
    appendChild(child1);
    appendChild(child2);
    appendChild(child3);
}

IfElseNode::~IfElseNode(){}

string IfElseNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string IfElseNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

string IfElseNode::accept(TypeChecker* tc, Memory* mem){
    return tc->visit(this, mem);
}
