#ifndef ASSIGNMENTNODE_H
#define ASSIGNMENTNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;

class AssignmentNode: public Node{

	public:
		AssignmentNode(Node* child1, Node* child2);
		~AssignmentNode();
		virtual std::string accept(VisitComp* v);
		virtual string accept(VisitInterp* v);

};

#endif 
