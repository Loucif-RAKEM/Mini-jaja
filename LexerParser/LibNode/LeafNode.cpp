#include "LeafNode.h"
#include "VisitComp.h"

LeafNode::LeafNode(const char* label): Node(label,  0){
}

LeafNode::~LeafNode(){}

string LeafNode::accept(VisitComp* v){
	return v->visit(this);
}
