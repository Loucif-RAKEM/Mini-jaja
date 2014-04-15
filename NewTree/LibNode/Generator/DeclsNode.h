#ifndef DECLSNODE_H
#define DECLSNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;

class DeclsNode: public Node{

	public:
		DeclsNode(Node* child1, Node* child2);
		~DeclsNode();
		virtual std::string accept(VisitComp* v);
		virtual string accept(VisitInterp* v);

};

#endif 
