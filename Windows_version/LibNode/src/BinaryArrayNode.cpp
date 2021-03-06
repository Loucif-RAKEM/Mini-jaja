#include "BinaryArrayNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "TypeChecker.h"

BinaryArrayNode::BinaryArrayNode(Node* child1, Node* child2): Node("binaryarray",  2){
    appendChild(child1);
    appendChild(child2);
}

BinaryArrayNode::~BinaryArrayNode(){}

string BinaryArrayNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string BinaryArrayNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

string BinaryArrayNode::accept(TypeChecker* tc, Memory* mem){
    return tc->visit(this, mem);
}
