#ifndef INTERPRETER_H
#define INTERPRETER_H

#include <iostream>
#include <sstream>
#include "Stack.h"
#include "Quadruplet.h"

void die(std::string error);

namespace Interpreter{

    void affecterVal(const std::string identifier, const int value, Stack<Quadruplet*>* stack){
        if(stack->getLength() > 0){
            Quadruplet* topElement = new Quadruplet(stack->top());
            if(identifier != topElement->getIdentifier()){
                stack->pop();
                affecterVal(identifier, value, stack);
                stack->push(topElement);
            }else if(topElement->getKind() == VCST){
                topElement->setValue(value);
                topElement->setKind(CST);
                stack->pop();
                stack->push(topElement);
            }else if(topElement->getKind() == CST){
                stack->pop();
                delete topElement;
            }else{
                topElement->setValue(value);
                stack->pop();
                stack->push(topElement);
            }
        }else{
            stringstream error;
            error << "In function Interpreter::affecterVal(std::string, int, Stack<Quadruplet<T>*>*) : the identifier \"" << identifier << "\" does not exist in the stack.";
            die(error.str());
        }
    }

    void declVar(const std::string identifier, const int value, const Type type, Stack<Quadruplet*>* stack){
        Quadruplet* quadruplet = new Quadruplet(identifier, value, VCST, type);
        stack->push(quadruplet);
    }

    int val(const std::string identifier, Stack<Quadruplet*>* stack){
        if(stack->getLength() > 0){
            if(identifier == stack->top()->getIdentifier()) return stack->top()->getValue();
            else{
                Quadruplet* quadruplet = new Quadruplet(stack->top());
                stack->pop();
                int ret = val(identifier, stack);
                stack->push(quadruplet);
                return ret;
            }
        }else{
            stringstream error;
            error << "In function Interpreter::val(std::string, Stack<Quadruplet<T>*>*) : unable to find identifier " << identifier << " in the stack.";
            die(error.str());
        }
    }

}

#endif
