#include "VarNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"

VarNode::VarNode(Node* child1, Node* child2, Node* child3): Node("var",  3){
	appendChild(child1);
	appendChild(child2);
	appendChild(child3);
}

VarNode::~VarNode(){}

string VarNode::accept(VisitComp* v){
	return v->visit(this);
}

string VarNode::accept(VisitInterp* v){
	return v->visit(this);
}

