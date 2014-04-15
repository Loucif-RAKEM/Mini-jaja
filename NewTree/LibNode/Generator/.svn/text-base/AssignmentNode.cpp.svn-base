#include "AssignmentNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"

AssignmentNode::AssignmentNode(Node* child1, Node* child2): Node("assignment",  2){
	appendChild(child1);
	appendChild(child2);
}

AssignmentNode::~AssignmentNode(){}

string AssignmentNode::accept(VisitComp* v){
	return v->visit(this);
}

string AssignmentNode::accept(VisitInterp* v){
	return v->visit(this);
}

