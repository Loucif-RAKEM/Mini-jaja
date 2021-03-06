#ifndef TIMESNODE_H
#define TIMESNODE_H

#include "Node.h"
class VisitComp;

class TimesNode: public Node{

	public:
		TimesNode(Node* child1, Node* child2);
		~TimesNode();
		virtual std::string accept(VisitComp* v);

};

#endif 
