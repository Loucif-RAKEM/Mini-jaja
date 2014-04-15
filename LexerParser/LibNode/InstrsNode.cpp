#include "InstrsNode.h"
#include "VisitComp.h"

InstrsNode::InstrsNode(Node* child1, Node* child2): Node("instrs",  2){
	appendChild(child1);
	appendChild(child2);
}

InstrsNode::~InstrsNode(){}

string InstrsNode::accept(VisitComp* v){
	return v->visit(this);
}
