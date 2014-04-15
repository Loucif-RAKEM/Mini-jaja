#include "HeadersNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"

HeadersNode::HeadersNode(Node* child1, Node* child2): Node("headers",  2){
	appendChild(child1);
	appendChild(child2);
}

HeadersNode::~HeadersNode(){}

string HeadersNode::accept(VisitComp* v){
	return v->visit(this);
}

string HeadersNode::accept(VisitInterp* v){
	return v->visit(this);
}

