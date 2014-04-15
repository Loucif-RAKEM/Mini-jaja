#include "CallINode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "../LibInterpreter/Stack.h"

CallINode::CallINode(Node* child1, Node* child2): Node("calli",  2){
    appendChild(child1);
    appendChild(child2);
}

CallINode::~CallINode(){}

string CallINode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string CallINode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

