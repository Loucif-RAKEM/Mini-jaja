#ifndef VARSNODE_H
#define VARSNODE_H

#include "Node.h"
class VisitComp;

class VarsNode: public Node{

	public:
		VarsNode(Node* child1, Node* child2);
		~VarsNode();
		virtual std::string accept(VisitComp* v);

};

#endif 
