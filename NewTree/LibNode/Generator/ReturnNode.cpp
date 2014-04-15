#include "ReturnNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"

ReturnNode::ReturnNode(Node* child1): Node("return",  1){
	appendChild(child1);
}

ReturnNode::~ReturnNode(){}

string ReturnNode::accept(VisitComp* v){
	return v->visit(this);
}

string ReturnNode::accept(VisitInterp* v){
	return v->visit(this);
}

