#include <iostream>
#include "SupInstruction.h"
using namespace std;

SupInstruction::SupInstruction(string label):Instruction(label)
{

}

string SupInstruction::getLabel() const
{
    return label;
}

void SupInstruction::setLabel(string label)
{
    label = label;
}

void SupInstruction::interpret ( Memory* mem, int* address){
    int value2 = mem->getStack()->top()->getValue();
    mem->getStack()->pop();
    int value1 = mem->getStack()->top()->getValue();
    mem->getStack()->pop();
    int result = 0;
    if (value1 > value2){
    result = 1;
    }
    Quadruplet* quadruplet = new Quadruplet ("",result,CST,T_OMEGA);
    mem->getStack()->push(quadruplet);
    *address = *address + 1;
}
