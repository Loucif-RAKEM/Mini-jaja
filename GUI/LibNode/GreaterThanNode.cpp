#include "GreaterThanNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "../LibInterpreter/Stack.h"

GreaterThanNode::GreaterThanNode(Node* child1, Node* child2): Node("greaterthan",  2){
    appendChild(child1);
    appendChild(child2);
}

GreaterThanNode::~GreaterThanNode(){}

string GreaterThanNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string GreaterThanNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

