
#include "AIncInstruction.h"
using namespace std;

AIncInstruction::AIncInstruction(string label, string ident):Instruction(label)
{
    this->ident = ident;
}

string AIncInstruction::getLabel() const
{
    return label;
}

void AIncInstruction::setLabel(string label)
{
    this->label = label;
}

std::string AIncInstruction::getIdent() const
{
    return ident;
}

void AIncInstruction::setIdent(std::string ident)
{
    this->ident = ident;
}


void AIncInstruction::interpret (Memory* mem, int* address){
    int value = mem->getStack()->top()->getValue();
    mem->getStack()->pop();
    int ind = mem->getStack()->top()->getValue();
     mem->getStack()->pop();
    //PROBLEME
     //Interpreter::affecterValT(this->ident,ind,(Interpreter::valT(this->ident,ind, mem)+value),mem);
    Interpreter::affecterValT(this->ident,(Interpreter::valT(this->ident,ind, mem)+value), ind, mem);
    *address = *address + 1;
}
