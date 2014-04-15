#ifndef LEAFNODE_H
#define LEAFNODE_H

#include "Node.h"
class VisitComp;

class LeafNode: public Node{

	public:
		LeafNode(const char* label);
		~LeafNode();
		virtual std::string accept(VisitComp* v);

};

#endif 
