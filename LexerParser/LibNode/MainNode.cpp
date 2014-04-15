#include "MainNode.h"
#include "VisitComp.h"

MainNode::MainNode(Node* child1, Node* child2): Node("main",  2){
	appendChild(child1);
	appendChild(child2);
}

MainNode::~MainNode(){}

string MainNode::accept(VisitComp* v){
	return v->visit(this);
}
