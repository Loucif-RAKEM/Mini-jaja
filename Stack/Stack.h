#ifndef STACK_H
#define STACK_H

#include <stack>
#include "Quadruplet.h"

class Stack: public std::stack<Quadruplet>{

	public:
		Stack();
		void swap();
		void display () const;

};

#endif
