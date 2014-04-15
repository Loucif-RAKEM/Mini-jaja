#include <iostream>
#include "Tuple.h"

using namespace std;

Tuple::Tuple(Stack<Quadruplet*>* stack, unsigned int address) : stack(stack), address(address){}

Tuple::~Tuple(){
    if(stack != NULL){
        delete stack;
    }
}

Stack<Quadruplet*>* Tuple::getStack() const{
    return stack;
}

unsigned int Tuple::getAddress() const{
    return address;
}

void Tuple::setStack(Stack<Quadruplet*>* stack){
    this->stack = stack;
}

void Tuple::setAddress(unsigned int address){
    this->address = address;
}

std::ostream& operator<<(std::ostream& stream, const Tuple& tuple)
{
    stream << "<" << tuple.getStack() << ", " << tuple.getAddress() << ">";
    return stream;
}
