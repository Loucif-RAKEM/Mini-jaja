#include "NumberNode.h"
#include "VisitComp.h"

NumberNode::NumberNode(Node* child1): Node("number",  1){
	appendChild(child1);
}

NumberNode::~NumberNode(){}

string NumberNode::accept(VisitComp* v){
	return v->visit(this);
}
