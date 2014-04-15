#ifndef TUPLE_H
#define TUPLE_H

#include <fstream>
#include "Stack.h"
#include "Quadruplet.h"

class Tuple{

    public:

        Tuple(Stack<Quadruplet*>*, unsigned int);

        ~Tuple();

        Stack<Quadruplet*>* getStack() const;

        unsigned int getAddress() const;

        void setStack(Stack<Quadruplet*>*);

        void setAddress(unsigned int);

        friend std::ostream& operator<<(std::ostream&, const Tuple&);

    private:
        Stack<Quadruplet*>* stack;
        unsigned int address;

};

#endif
