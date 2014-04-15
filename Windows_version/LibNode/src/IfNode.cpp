#include "IfNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "TypeChecker.h"

IfNode::IfNode(Node* child1, Node* child2): Node("if",  2){
    appendChild(child1);
    appendChild(child2);
}

IfNode::~IfNode(){}

string IfNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string IfNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

string IfNode::accept(TypeChecker* tc, Memory* mem){
    return tc->visit(this, mem);
}
