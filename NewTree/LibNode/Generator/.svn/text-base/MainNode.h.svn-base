#ifndef MAINNODE_H
#define MAINNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;

class MainNode: public Node{

	public:
		MainNode(Node* child1, Node* child2);
		~MainNode();
		virtual std::string accept(VisitComp* v);
		virtual string accept(VisitInterp* v);

};

#endif 
