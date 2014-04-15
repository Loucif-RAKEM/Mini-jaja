#include "GreaterThanNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"

GreaterThanNode::GreaterThanNode(Node* child1, Node* child2): Node("greaterthan",  2){
	appendChild(child1);
	appendChild(child2);
}

GreaterThanNode::~GreaterThanNode(){}

string GreaterThanNode::accept(VisitComp* v){
	return v->visit(this);
}

string GreaterThanNode::accept(VisitInterp* v){
	return v->visit(this);
}

