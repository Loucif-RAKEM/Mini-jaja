#include "EqualityNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "../LibInterpreter/Stack.h"

EqualityNode::EqualityNode(Node* child1, Node* child2): Node("equality",  2){
    appendChild(child1);
    appendChild(child2);
}

EqualityNode::~EqualityNode(){}

string EqualityNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string EqualityNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

