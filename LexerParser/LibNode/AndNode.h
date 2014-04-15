#ifndef ANDNODE_H
#define ANDNODE_H

#include "Node.h"
class VisitComp;

class AndNode: public Node{

	public:
		AndNode(Node* child1, Node* child2);
		~AndNode();
		virtual std::string accept(VisitComp* v);

};

#endif 
