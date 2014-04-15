#include "TimesNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "TypeChecker.h"

TimesNode::TimesNode(Node* child1, Node* child2): Node("times",  2){
    appendChild(child1);
    appendChild(child2);
}

TimesNode::~TimesNode(){}

string TimesNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string TimesNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

string TimesNode::accept(TypeChecker* tc, Memory* mem){
    return tc->visit(this, mem);
}
