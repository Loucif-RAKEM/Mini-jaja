#include "IdentNode.h"
#include "VisitComp.h"

IdentNode::IdentNode(Node* child1): Node("ident",  1){
	appendChild(child1);
}

IdentNode::~IdentNode(){}

string IdentNode::accept(VisitComp* v){
	return v->visit(this);
}
