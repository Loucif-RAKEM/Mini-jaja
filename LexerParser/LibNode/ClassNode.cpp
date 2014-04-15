#include "ClassNode.h"
#include "VisitComp.h"

ClassNode::ClassNode(Node* child1, Node* child2, Node* child3): Node("class",  3){
	appendChild(child1);
	appendChild(child2);
	appendChild(child3);
}

ClassNode::~ClassNode(){}

string ClassNode::accept(VisitComp* v){
	return v->visit(this);
}
