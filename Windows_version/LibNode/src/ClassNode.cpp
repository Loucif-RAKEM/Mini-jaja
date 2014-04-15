#include <iostream>
#include "ClassNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "TypeChecker.h"

using namespace std;

ClassNode::ClassNode(Node* child1, Node* child2, Node* child3): Node("class",  3){
    appendChild(child1);
    appendChild(child2);
    appendChild(child3);
}

ClassNode::~ClassNode(){}

string ClassNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string ClassNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

string ClassNode::accept(TypeChecker* tc, Memory* mem){
    return tc->visit(this, mem);
}
