#include "InstrsNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "TypeChecker.h"

InstrsNode::InstrsNode(Node* child1, Node* child2): Node("instrs",  2){
    appendChild(child1);
    appendChild(child2);
}

InstrsNode::~InstrsNode(){}

string InstrsNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string InstrsNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

string InstrsNode::accept(TypeChecker* tc, Memory* mem){
    return tc->visit(this, mem);
}
