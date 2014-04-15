#include "LeafNode.h"
#include "VisitComp.h"
#include "VisitInterp.h"

LeafNode::LeafNode(const char* label): Node(label,  0){
}

LeafNode::~LeafNode(){}

string LeafNode::accept(VisitComp* v){
	return v->visit(this);
}

string LeafNode::accept(VisitInterp* v){
	return v->visit(this);
}

