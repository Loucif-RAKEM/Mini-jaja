#include "IfInstruction.h"
using namespace std;
IfInstruction::IfInstruction(string label, int value):Instruction(label),value(value)
{

}

string IfInstruction::getLabel() const
{
    return label;
}

void IfInstruction::setLabel(string label)
{
    label = label;
}

int IfInstruction::getValue() const
{
    return value;
}

void IfInstruction::setValue(int value)
{
    value = value;
}

void IfInstruction::interpret ( Memory* mem, int* address){
    int condition = mem->getStack()->top()->getValue();
    mem->getStack()->pop();
    if(condition){
    *address = this->getValue();
    }
    else {
    *address = *address +1;
    }
}
