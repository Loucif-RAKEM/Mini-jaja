#include "DeclsNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"
#include "../LibInterpreter/Stack.h"

DeclsNode::DeclsNode(Node* child1, Node* child2): Node("decls",  2){
    appendChild(child1);
    appendChild(child2);
}

DeclsNode::~DeclsNode(){}

string DeclsNode::accept(VisitComp* v, int flag){
    return v->visit(this, flag);
}

string DeclsNode::accept(VisitInterp* v, Memory* mem, int flag){
    return v->visit(this, mem, flag);
}

