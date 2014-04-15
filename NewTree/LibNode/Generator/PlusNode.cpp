#include "PlusNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"

PlusNode::PlusNode(Node* child1, Node* child2): Node("plus",  2){
	appendChild(child1);
	appendChild(child2);
}

PlusNode::~PlusNode(){}

string PlusNode::accept(VisitComp* v){
	return v->visit(this);
}

string PlusNode::accept(VisitInterp* v){
	return v->visit(this);
}

