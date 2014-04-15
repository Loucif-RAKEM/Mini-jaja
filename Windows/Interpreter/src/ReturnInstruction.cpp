#include <iostream>
#include "ReturnInstruction.h"
using namespace std;

ReturnInstruction::ReturnInstruction(string label):Instruction(label)
{

}

string ReturnInstruction::getLabel() const
{
    return label;
}

void ReturnInstruction::setLabel(string label)
{
    label = label;
}

void ReturnInstruction::interpret ( Memory* mem, int* address){
    *address = (mem->getStack()->top()->getValue());
    mem->getStack()->pop();
}
