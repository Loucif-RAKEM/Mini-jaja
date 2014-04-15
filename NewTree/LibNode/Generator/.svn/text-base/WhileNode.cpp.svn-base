#include "WhileNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"

WhileNode::WhileNode(Node* child1, Node* child2): Node("while",  2){
	appendChild(child1);
	appendChild(child2);
}

WhileNode::~WhileNode(){}

string WhileNode::accept(VisitComp* v){
	return v->visit(this);
}

string WhileNode::accept(VisitInterp* v){
	return v->visit(this);
}

