#include "VarsNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "../LibInterpreter/Stack.h"

VarsNode::VarsNode(Node* child1, Node* child2): Node("vars",  2){
    appendChild(child1);
    appendChild(child2);
}

VarsNode::~VarsNode(){}

string VarsNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string VarsNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

