#include <iostream>
#include "PopInstruction.h"
using namespace std;

PopInstruction::PopInstruction(string label):Instruction(label)
{

}

string PopInstruction::getLabel() const
{
    return label;
}

void PopInstruction::setLabel(string label)
{
    label = label;
}

void PopInstruction::interpret( Memory* mem, int* address){
    mem->getStack()->pop();
    *address = *address + 1;
}
