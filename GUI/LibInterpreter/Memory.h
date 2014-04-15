#ifndef MEMORY_H
#define MEMORY_H

#include "Stack.h"
#include "Heap.h"
#include "Quadruplet.h"

class Memory
{

public:
    Memory();
    Stack<Quadruplet*>* getStack() const;

    Heap getHeap() const;

    void setStack(Stack<Quadruplet*>*);

    void setHeap(Heap);


private:
    Stack<Quadruplet*>* stack;
    Heap heap;
};

#endif // MEMORY_H
