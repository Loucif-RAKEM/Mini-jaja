#include "NewArrayInstruction.h"
using namespace std;

NewArrayInstruction::NewArrayInstruction(string label,string ident, Type type):Instruction(label)
{
    this->ident = ident;
    this->type = type;
}

string NewArrayInstruction::getLabel() const
{
    return label;
}
void NewArrayInstruction::setLabel(std::string label)
{
    label = label;
}

Type NewArrayInstruction::getType() const
{
    return type;
}
void NewArrayInstruction::setType(Type type)
{
    type = type;
}

void NewArrayInstruction::interpret (Memory* mem, int* address){
    int value = mem->getStack()->top()->getValue();
    mem->getStack()->pop();
    Interpreter::declTab(this->ident,value,this->type,mem);
    *address = *address + 1;
}
