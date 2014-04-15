#include "TernaryArrayNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"

TernaryArrayNode::TernaryArrayNode(Node* child1, Node* child2, Node* child3): Node("ternaryarray",  3){
	appendChild(child1);
	appendChild(child2);
	appendChild(child3);
}

TernaryArrayNode::~TernaryArrayNode(){}

string TernaryArrayNode::accept(VisitComp* v){
	return v->visit(this);
}

string TernaryArrayNode::accept(VisitInterp* v){
	return v->visit(this);
}

