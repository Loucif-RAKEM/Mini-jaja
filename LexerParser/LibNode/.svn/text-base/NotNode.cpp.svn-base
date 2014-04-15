#include "NotNode.h"
#include "VisitComp.h"

NotNode::NotNode(Node* child1): Node("not",  1){
	appendChild(child1);
}

NotNode::~NotNode(){}

string NotNode::accept(VisitComp* v){
	return v->visit(this);
}
