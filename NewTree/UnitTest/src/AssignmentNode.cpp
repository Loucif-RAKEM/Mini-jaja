#include "AssignmentNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"

AssignmentNode::AssignmentNode(Node* child1, Node* child2): Node("assignment",  2){
    appendChild(child1);
    appendChild(child2);
}

AssignmentNode::~AssignmentNode(){}

string AssignmentNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string AssignmentNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

