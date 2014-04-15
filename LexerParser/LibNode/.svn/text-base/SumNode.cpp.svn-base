#include "SumNode.h"
#include "VisitComp.h"

SumNode::SumNode(Node* child1, Node* child2): Node("sum",  2){
	appendChild(child1);
	appendChild(child2);
}

SumNode::~SumNode(){}

string SumNode::accept(VisitComp* v){
	return v->visit(this);
}
