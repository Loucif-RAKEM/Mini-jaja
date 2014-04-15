#include "HeaderNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"

HeaderNode::HeaderNode(Node* child1, Node* child2): Node("header",  2){
	appendChild(child1);
	appendChild(child2);
}

HeaderNode::~HeaderNode(){}

string HeaderNode::accept(VisitComp* v){
	return v->visit(this);
}

string HeaderNode::accept(VisitInterp* v){
	return v->visit(this);
}

