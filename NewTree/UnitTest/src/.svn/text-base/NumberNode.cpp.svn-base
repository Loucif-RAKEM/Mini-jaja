#include "NumberNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"

NumberNode::NumberNode(Node* child1): Node("number",  1){
    appendChild(child1);
}

NumberNode::~NumberNode(){}

string NumberNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string NumberNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

