#include "ExpListNode.h"
#include "VisitComp.h"

ExpListNode::ExpListNode(Node* child1, Node* child2): Node("explist",  2){
	appendChild(child1);
	appendChild(child2);
}

ExpListNode::~ExpListNode(){}

string ExpListNode::accept(VisitComp* v){
	return v->visit(this);
}
