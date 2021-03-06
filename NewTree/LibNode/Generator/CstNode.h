#ifndef CSTNODE_H
#define CSTNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;

class CstNode: public Node{

	public:
		CstNode(Node* child1, Node* child2, Node* child3);
		~CstNode();
		virtual std::string accept(VisitComp* v);
		virtual string accept(VisitInterp* v);

};

#endif 
