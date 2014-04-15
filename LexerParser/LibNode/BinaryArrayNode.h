#ifndef BINARYARRAYNODE_H
#define BINARYARRAYNODE_H

#include "Node.h"
class VisitComp;

class BinaryArrayNode: public Node{

	public:
		BinaryArrayNode(Node* child1, Node* child2);
		~BinaryArrayNode();
		virtual std::string accept(VisitComp* v);

};

#endif 
