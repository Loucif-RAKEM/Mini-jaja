#include <iostream>
#include "PushInstruction.h"
using namespace std;

PushInstruction::PushInstruction(string label, int value):Instruction(label),value(value)
{

}

string PushInstruction::getLabel() const
{
    return label;
}

void PushInstruction::setLabel(string label)
{
    label = label;
}

int PushInstruction::getValue() const
{
    return value;
}

void PushInstruction::setValue(int value)
{
    value = value;
}

void PushInstruction::interpret( Memory* mem, int* address){
Quadruplet* quadruplet = new Quadruplet ("", this->getValue(), CST, T_OMEGA);
    mem->getStack()->push(quadruplet);
    *address = *address + 1;
}
