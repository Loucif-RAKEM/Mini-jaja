#include "NotNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "TypeChecker.h"

NotNode::NotNode(Node* child1): Node("not",  1){
    appendChild(child1);
}

NotNode::~NotNode(){}

string NotNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string NotNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

string NotNode::accept(TypeChecker* tc, Memory* mem){
    return tc->visit(this, mem);
}
