#ifndef IDENTNODE_H
#define IDENTNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;

class IdentNode: public Node{

	public:
		IdentNode(Node* child1);
		~IdentNode();
		virtual std::string accept(VisitComp* v);
		virtual string accept(VisitInterp* v);

};

#endif 
