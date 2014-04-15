#include "DivideNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "../LibInterpreter/Stack.h"

DivideNode::DivideNode(Node* child1, Node* child2): Node("divide",  2){
    appendChild(child1);
    appendChild(child2);
}

DivideNode::~DivideNode(){}

string DivideNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string DivideNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

