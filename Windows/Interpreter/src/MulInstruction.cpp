#include <iostream>
#include "MulInstruction.h"
using namespace std;

MulInstruction::MulInstruction(string label):Instruction(label)
{

}

string MulInstruction::getLabel() const
{
    return label;
}

void MulInstruction::setLabel(string label)
{
    label = label;
}

void MulInstruction::interpret ( Memory* mem, int* address){
    int value2 = mem->getStack()->top()->getValue();
    mem->getStack()->pop();
    int value1 = mem->getStack()->top()->getValue();
    mem->getStack()->pop();
    int result = value2 * value1;
    Quadruplet* quadruplet = new Quadruplet ("",result,CST,T_OMEGA);
    mem->getStack()->push(quadruplet);
    *address = *address + 1;
}
