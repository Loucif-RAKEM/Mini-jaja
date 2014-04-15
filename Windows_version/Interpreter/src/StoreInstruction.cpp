#include "StoreInstruction.h"

StoreInstruction::StoreInstruction(string label, string ident):Instruction(label)
{
    this->ident = ident;
}

string StoreInstruction::getLabel() const
{
    return label;
}
void StoreInstruction::setLabel(std::string label)
{
    label = label;
}

string StoreInstruction::getIdent() const
{
    return ident;
}
void StoreInstruction::setIdent(string ident)
{
    ident = ident;
}


void StoreInstruction::interpret (Memory* mem, int* address){
    int value1 = mem->getStack()->top()->getValue();
    mem->getStack()->pop();
    Interpreter::affecterVal(this->ident,value1,mem);
    *address = *address + 1;
}
