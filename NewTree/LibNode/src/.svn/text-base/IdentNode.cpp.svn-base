#include "IdentNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"

IdentNode::IdentNode(Node* child1): Node("ident",  1){
    appendChild(child1);
}

IdentNode::~IdentNode(){}

string IdentNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string IdentNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

