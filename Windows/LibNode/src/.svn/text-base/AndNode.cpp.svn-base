#include "AndNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "TypeChecker.h"

AndNode::AndNode(Node* child1, Node* child2): Node("and",  2){
    appendChild(child1);
    appendChild(child2);
}

AndNode::~AndNode(){}

string AndNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string AndNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

string AndNode::accept(TypeChecker* tc, Memory* mem){
    return tc->visit(this, mem);
}
