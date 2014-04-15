#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

template<typename T>
class Stack{

    public:
        Stack(): ll(new LinkedList<T>()){}

        ~Stack(){
            delete ll;
        }

        void push(const T& element){
            ll->insertBefore(element);
        }

        void pop(){
            ll->removeFirst();
        }

        void swap(){
            ll->swapElements(0, 1);
        }

        const T& top(){
            return ll->getFirst()->getValue();
        }

        unsigned int getLength() const{
            return ll->getLength();
        }

        void display() const{
            ll->display();
        }

        LinkedList<T>* getLinkedList() {
            return ll;
        }

    private:
        LinkedList<T>* ll;

};

#endif
