#include "DivideNode.h"
#include "VisitComp.h"

DivideNode::DivideNode(Node* child1, Node* child2): Node("divide",  2){
	appendChild(child1);
	appendChild(child2);
}

DivideNode::~DivideNode(){}

string DivideNode::accept(VisitComp* v){
	return v->visit(this);
}
