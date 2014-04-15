#include "IncrementNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "../LibInterpreter/Stack.h"

IncrementNode::IncrementNode(Node* child1): Node("increment",  1){
    appendChild(child1);
}

IncrementNode::~IncrementNode(){}

string IncrementNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string IncrementNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

