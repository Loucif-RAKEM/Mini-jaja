#include "MethodNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"

MethodNode::MethodNode(Node* child1, Node* child2, Node* child3, Node* child4, Node* child5): Node("method",  5){
	appendChild(child1);
	appendChild(child2);
	appendChild(child3);
	appendChild(child4);
	appendChild(child5);
}

MethodNode::~MethodNode(){}

string MethodNode::accept(VisitComp* v){
	return v->visit(this);
}

string MethodNode::accept(VisitInterp* v){
	return v->visit(this);
}

