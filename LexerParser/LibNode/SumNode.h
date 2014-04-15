#ifndef SUMNODE_H
#define SUMNODE_H

#include "Node.h"
class VisitComp;

class SumNode: public Node{

	public:
		SumNode(Node* child1, Node* child2);
		~SumNode();
		virtual std::string accept(VisitComp* v);

};

#endif 
