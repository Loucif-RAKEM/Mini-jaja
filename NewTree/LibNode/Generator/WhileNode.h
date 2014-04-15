#ifndef WHILENODE_H
#define WHILENODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;

class WhileNode: public Node{

	public:
		WhileNode(Node* child1, Node* child2);
		~WhileNode();
		virtual std::string accept(VisitComp* v);
		virtual string accept(VisitInterp* v);

};

#endif 
