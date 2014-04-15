#ifndef CALLINODE_H
#define CALLINODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;

class CallINode: public Node{

	public:
		CallINode(Node* child1, Node* child2);
		~CallINode();
		virtual std::string accept(VisitComp* v);
		virtual string accept(VisitInterp* v);

};

#endif 
