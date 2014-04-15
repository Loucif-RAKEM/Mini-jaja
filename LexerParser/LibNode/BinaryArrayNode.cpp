#include "BinaryArrayNode.h"
#include "VisitComp.h"

BinaryArrayNode::BinaryArrayNode(Node* child1, Node* child2): Node("binaryarray",  2){
	appendChild(child1);
	appendChild(child2);
}

BinaryArrayNode::~BinaryArrayNode(){}

string BinaryArrayNode::accept(VisitComp* v){
	return v->visit(this);
}
