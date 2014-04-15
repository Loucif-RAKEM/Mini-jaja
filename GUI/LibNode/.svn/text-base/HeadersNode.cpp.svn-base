#include "HeadersNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "../LibInterpreter/Stack.h"

HeadersNode::HeadersNode(Node* child1, Node* child2): Node("headers",  2){
    appendChild(child1);
    appendChild(child2);
}

HeadersNode::~HeadersNode(){}

string HeadersNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string HeadersNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

