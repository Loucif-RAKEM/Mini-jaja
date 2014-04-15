#include "UnaryMinusNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "../LibInterpreter/Stack.h"

UnaryMinusNode::UnaryMinusNode(Node* child1): Node("unaryminus",  1){
    appendChild(child1);
}

UnaryMinusNode::~UnaryMinusNode(){}

string UnaryMinusNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string UnaryMinusNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

