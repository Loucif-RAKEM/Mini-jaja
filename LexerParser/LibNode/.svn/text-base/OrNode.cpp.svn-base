#include "OrNode.h"
#include "VisitComp.h"

OrNode::OrNode(Node* child1, Node* child2): Node("or",  2){
	appendChild(child1);
	appendChild(child2);
}

OrNode::~OrNode(){}

string OrNode::accept(VisitComp* v){
	return v->visit(this);
}
