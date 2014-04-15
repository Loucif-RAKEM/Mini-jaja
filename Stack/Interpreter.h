#ifndef INTERPRETER_H_INCLUDED
#define INTERPRETER_H_INCLUDED

#include "Stack.h"

class Interpreter{
	public:
		Interpreter();
		void affecterVal(std::string, int, Stack*);
		int val(std::string, Stack*);
		void declVar(std::string, int, Type, Stack*);
};
#endif;
