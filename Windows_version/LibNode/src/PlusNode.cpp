#include "PlusNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "TypeChecker.h"

PlusNode::PlusNode(Node* child1, Node* child2): Node("plus",  2){
    appendChild(child1);
    appendChild(child2);
}

PlusNode::~PlusNode(){}

string PlusNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string PlusNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

string PlusNode::accept(TypeChecker* tc, Memory* mem){
    return tc->visit(this, mem);
}
