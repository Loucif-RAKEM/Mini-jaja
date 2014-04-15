#include "Interpreter.h"
Interpreter::Interpreter(){
}

void Interpreter::affecterVal(std::string label, int value, Stack* stack){
	int index = 0;
	int again = 1;	
    while( index < stack->size() &&  again){
		if(stack->top().getLabel() == label){
		    again = 0;
			if(stack->top().getKind() == VCST){
			    stack->top().setValue(value);
			    stack->top().setLabel(label);
			    stack->top().setKind(CST);
			}
			else if(stack->top().getKind() == CST){
			   stack->pop();
			}
			else{
			    stack->top().setValue(value);
			    stack->top().setLabel(label);		
			}		
		}
	    index++;		
	}
    if(index >= stack->size()){
        throw std::string("ERREUR: l'identifiant n'existe pas dans la mémoire"); 
    }
}


int Interpreter::val(std::string label, Stack* stack) {
// throw expections if stack is empty 
	int index = 0 ; 
	int result = 0 ;
	int again = 1 ;

 	if( stack->size() == 0) 
	{
		throw std::string("Pile vide");
	} // exceptions 
	else{  
		while( index < stack->size() &&  again) {
			if (stack->top().getLabel() == label){ 
				result = stack->top().getValue() ; 
				again = 0;
			}
			index++;
		}
	}
	return result ; 
}

void Interpreter::declVar(std::string label, int value, Type type, Stack* stack) {
	Quadruplet q = Quadruplet(label, value, type, VCST);
	stack->push(q);
}
