#include "MainNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "TypeChecker.h"

MainNode::MainNode(Node* child1, Node* child2): Node("main",  2){
    appendChild(child1);
    appendChild(child2);
}

MainNode::~MainNode(){}

string MainNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string MainNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

string MainNode::accept(TypeChecker* tc, Memory* mem){
    return tc->visit(this, mem);
}
