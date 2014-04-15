#include "CallENode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "../LibInterpreter/Stack.h"

CallENode::CallENode(Node* child1, Node* child2): Node("calle",  2){
    appendChild(child1);
    appendChild(child2);
}

CallENode::~CallENode(){}

string CallENode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string CallENode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

