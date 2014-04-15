#include "ReturnNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "../LibInterpreter/Stack.h"

ReturnNode::ReturnNode(Node* child1): Node("return",  1){
    appendChild(child1);
}

ReturnNode::~ReturnNode(){}

string ReturnNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string ReturnNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

