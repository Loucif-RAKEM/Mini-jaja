#include "CallENode.h"
#include "VisitComp.h"

CallENode::CallENode(Node* child1, Node* child2): Node("calle",  2){
	appendChild(child1);
	appendChild(child2);
}

CallENode::~CallENode(){}

string CallENode::accept(VisitComp* v){
	return v->visit(this);
}
