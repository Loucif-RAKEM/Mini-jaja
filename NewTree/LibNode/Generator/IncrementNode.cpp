#include "IncrementNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"

IncrementNode::IncrementNode(Node* child1): Node("increment",  1){
	appendChild(child1);
}

IncrementNode::~IncrementNode(){}

string IncrementNode::accept(VisitComp* v){
	return v->visit(this);
}

string IncrementNode::accept(VisitInterp* v){
	return v->visit(this);
}

