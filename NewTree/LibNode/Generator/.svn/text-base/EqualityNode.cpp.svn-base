#include "EqualityNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"

EqualityNode::EqualityNode(Node* child1, Node* child2): Node("equality",  2){
	appendChild(child1);
	appendChild(child2);
}

EqualityNode::~EqualityNode(){}

string EqualityNode::accept(VisitComp* v){
	return v->visit(this);
}

string EqualityNode::accept(VisitInterp* v){
	return v->visit(this);
}

