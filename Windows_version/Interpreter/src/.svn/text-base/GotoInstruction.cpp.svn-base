#include "GotoInstruction.h"
using namespace std;

GotoInstruction::GotoInstruction(string label, int value):Instruction(label),value(value)
{
}

string GotoInstruction::getLabel() const
{
    return label;
}

void GotoInstruction::setLabel(string label)
{
    label = label;
}

int GotoInstruction::getValue() const
{
    return value;
}

void GotoInstruction::setValue(int value)
{
    value = value;
}

void GotoInstruction::interpret( Memory* mem, int* address){
    *address = this->getValue();
}
