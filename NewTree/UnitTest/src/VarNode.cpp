#include "VarNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"

VarNode::VarNode(Node* child1, Node* child2, Node* child3): Node("var",  3){
    appendChild(child1);
    appendChild(child2);
    appendChild(child3);
}

VarNode::~VarNode(){}

string VarNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string VarNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

