#include "HeaderNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"

HeaderNode::HeaderNode(Node* child1, Node* child2): Node("header",  2){
    appendChild(child1);
    appendChild(child2);
}

HeaderNode::~HeaderNode(){}

string HeaderNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string HeaderNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

