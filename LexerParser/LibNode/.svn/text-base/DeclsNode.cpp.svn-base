#include "DeclsNode.h"
#include "VisitComp.h"

DeclsNode::DeclsNode(Node* child1, Node* child2): Node("decls",  2){
	appendChild(child1);
	appendChild(child2);
}

DeclsNode::~DeclsNode(){}

string DeclsNode::accept(VisitComp* v){
	return v->visit(this);
}
