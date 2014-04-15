#include "WhileNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"

WhileNode::WhileNode(Node* child1, Node* child2): Node("while",  2){
    appendChild(child1);
    appendChild(child2);
}

WhileNode::~WhileNode(){}

string WhileNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string WhileNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

