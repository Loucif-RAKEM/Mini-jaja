#include "TimesNode.h"
#include "VisitComp.h"

TimesNode::TimesNode(Node* child1, Node* child2): Node("times",  2){
	appendChild(child1);
	appendChild(child2);
}

TimesNode::~TimesNode(){}

string TimesNode::accept(VisitComp* v){
	return v->visit(this);
}
