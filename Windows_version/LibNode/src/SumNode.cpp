#include "SumNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "TypeChecker.h"

SumNode::SumNode(Node* child1, Node* child2): Node("sum",  2){
    appendChild(child1);
    appendChild(child2);
}

SumNode::~SumNode(){}

string SumNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string SumNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

string SumNode::accept(TypeChecker* tc, Memory* mem){
    return tc->visit(this, mem);
}
