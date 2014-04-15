#include "MethodNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "TypeChecker.h"

MethodNode::MethodNode(Node* child1, Node* child2, Node* child3, Node* child4, Node* child5): Node("method",  5){
    appendChild(child1);
    appendChild(child2);
    appendChild(child3);
    appendChild(child4);
    appendChild(child5);
}

MethodNode::~MethodNode(){}

string MethodNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string MethodNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

string MethodNode::accept(TypeChecker* tc, Memory* mem){
    return tc->visit(this, mem);
}
