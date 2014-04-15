#include <iostream>
#include "InitInstruction.h"

using namespace std;

InitInstruction::InitInstruction(string label):Instruction(label)
{
}

string InitInstruction::getLabel() const
{
    return label;
}

void InitInstruction::setLabel(string label)
{
    label = label;
}

void InitInstruction::interpret( Memory* mem, int* address){
    mem = new Memory();
    *address = *address + 1;
}
