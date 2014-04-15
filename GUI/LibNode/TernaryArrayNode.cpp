#include "TernaryArrayNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "../LibInterpreter/Stack.h"

TernaryArrayNode::TernaryArrayNode(Node* child1, Node* child2, Node* child3): Node("ternaryarray",  3){
    appendChild(child1);
    appendChild(child2);
    appendChild(child3);
}

TernaryArrayNode::~TernaryArrayNode(){}

string TernaryArrayNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string TernaryArrayNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

