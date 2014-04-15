#include "CstNode.h"
#include "VisitComp.h"

CstNode::CstNode(Node* child1, Node* child2, Node* child3): Node("cst",  3){
	appendChild(child1);
	appendChild(child2);
	appendChild(child3);
}

CstNode::~CstNode(){}

string CstNode::accept(VisitComp* v){
	return v->visit(this);
}
