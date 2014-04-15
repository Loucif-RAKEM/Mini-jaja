#include "IncInstruction.h"
using namespace std;

IncInstruction::IncInstruction(string label, string ident):Instruction(label),ident(ident)
{

}

string IncInstruction::getLabel() const
{
    return label;
}

void IncInstruction::setLabel(string label)
{
    label = label;
}

std::string IncInstruction::getIdent() const
{
    return ident;
}

void IncInstruction::setIdent(std::string ident)
{
    ident = ident;
}


 void IncInstruction::interpret (Memory* mem, int* address){
    int value = mem->getStack()->top()->getValue();
    mem->getStack()->pop();
    Interpreter::affecterVal(this->ident,Interpreter::val(this->ident, mem)+value,mem);
    *address = *address + 1;
}
