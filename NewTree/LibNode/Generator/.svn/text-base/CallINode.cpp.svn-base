#include "CallINode.h"
#include "VisitComp.h"
#include "VisitInterp.h"

CallINode::CallINode(Node* child1, Node* child2): Node("calli",  2){
	appendChild(child1);
	appendChild(child2);
}

CallINode::~CallINode(){}

string CallINode::accept(VisitComp* v){
	return v->visit(this);
}

string CallINode::accept(VisitInterp* v){
	return v->visit(this);
}

