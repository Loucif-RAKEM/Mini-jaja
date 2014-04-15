#include "ClassNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"

ClassNode::ClassNode(Node* child1, Node* child2, Node* child3): Node("class",  3){
	appendChild(child1);
	appendChild(child2);
	appendChild(child3);
}

ClassNode::~ClassNode(){}

string ClassNode::accept(VisitComp* v){
	return v->visit(this);
}

string ClassNode::accept(VisitInterp* v){
	return v->visit(this);
}

