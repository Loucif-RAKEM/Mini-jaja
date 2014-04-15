#include "BinaryMinusNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"

BinaryMinusNode::BinaryMinusNode(Node* child1, Node* child2): Node("binaryminus",  2){
    appendChild(child1);
    appendChild(child2);
}

BinaryMinusNode::~BinaryMinusNode(){}

string BinaryMinusNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string BinaryMinusNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

