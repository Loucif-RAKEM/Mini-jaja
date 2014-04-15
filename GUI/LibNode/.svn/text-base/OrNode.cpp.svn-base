#include "OrNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "../LibInterpreter/Stack.h"

OrNode::OrNode(Node* child1, Node* child2): Node("or",  2){
    appendChild(child1);
    appendChild(child2);
}

OrNode::~OrNode(){}

string OrNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string OrNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

