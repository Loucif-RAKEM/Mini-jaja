#ifndef HEADERNODE_H
#define HEADERNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;

class HeaderNode: public Node{

	public:
		HeaderNode(Node* child1, Node* child2);
		~HeaderNode();
		virtual std::string accept(VisitComp* v);
		virtual string accept(VisitInterp* v);

};

#endif 
