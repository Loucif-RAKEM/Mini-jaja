#ifndef LINK_H
#define LINK_H

#include <iostream>

using namespace std;

template<typename T>
class Link{

    public:
        Link(const T& value, Link<T>* nextElement=NULL): value(value), nextElement(nextElement){}

        ~Link(){
            delete value;
            value = NULL;
            nextElement = NULL;
        }

        void display() const{
            cout << this << " : " << *value << " --> " << nextElement << endl;
        }

        const T& getValue() const{
            return value;
        }

        Link<T>* getNextElement() const{
            return nextElement;
        }

        void setNextElement(Link<T>* nextElement){
            this->nextElement = nextElement;
        }

    private:
        T value;
        Link<T>* nextElement;

};

#endif
