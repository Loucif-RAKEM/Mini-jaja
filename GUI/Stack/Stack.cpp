#include "Stack.h"
#include <iostream>
#include <list> 

Stack::Stack(){
	std::cout << "In stack" << std::endl;
}

void Stack::affecterVal(char* label,int value){
	int indice = 0;
	int continuer = 1;
    //char* cst = "cst";	
    while( indice < size() && continuer ){
		if(top().getLabel() == label){
			continuer = false;
			if(top().getGenre() == VCST){
				top().setValue(value);
				top().setLabel(label);
				top().setGenre(CST);
			}
			else if(top().getGenre() == CST){
				pop();
			}
			else{
				top().setValue(value);
				top().setLabel(label);		
			}		
		}
		indice++;		
	}	
}

void Stack::swap(){
	Quadruplet q1;
	Quadruplet q2;
	q1 = this->top();
	this->pop();
	q2 = this->top();
	this->pop();
	
	this->push(q2);
	this->push(q1);
}

void Stack::display() const{
	//while(int i < this->size()){}
}
	
