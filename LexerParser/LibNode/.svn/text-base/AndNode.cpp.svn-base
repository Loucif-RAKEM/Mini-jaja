#include "AndNode.h"
#include "VisitComp.h"

AndNode::AndNode(Node* child1, Node* child2): Node("and",  2){
	appendChild(child1);
	appendChild(child2);
}

AndNode::~AndNode(){}

string AndNode::accept(VisitComp* v){
	return v->visit(this);
}
