#include "LeafNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"

LeafNode::LeafNode(const char* label): Node(label,  0){
}

LeafNode::~LeafNode(){}

string LeafNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string LeafNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

