#include <iostream>
#include "NopInstruction.h"
using namespace std;

NopInstruction::NopInstruction(string label):Instruction(label)
{

}

string NopInstruction::getLabel() const
{
    return label;
}

void NopInstruction::setLabel(string label)
{
    label = label;
}

void NopInstruction::interpret( Memory* mem, int* address){
    *address = *address + 1;
}
