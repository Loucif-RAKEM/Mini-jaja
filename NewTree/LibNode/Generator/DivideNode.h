#ifndef DIVIDENODE_H
#define DIVIDENODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;

class DivideNode: public Node{

	public:
		DivideNode(Node* child1, Node* child2);
		~DivideNode();
		virtual std::string accept(VisitComp* v);
		virtual string accept(VisitInterp* v);

};

#endif 
