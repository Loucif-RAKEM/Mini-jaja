#include "AstoreInstruction.h"

AstoreInstruction::AstoreInstruction(string label, string ident):Instruction(label)
{
    this->ident = ident;
}

string AstoreInstruction::getLabel() const
{
    return label;
}
void AstoreInstruction::setLabel(std::string label)
{
    label = label;
}

string AstoreInstruction::getIdent() const
{
    return ident;
}
void AstoreInstruction::setIdent(string ident)
{
    ident = ident;
}

void AstoreInstruction::interpret (Memory* mem, int* address){
    int value1 = mem->getStack()->top()->getValue();
    mem->getStack()->pop();
    int indice = mem->getStack()->top()->getValue();
    mem->getStack()->pop();
    Interpreter::affecterValT(this->ident,value1,indice,mem);
    *address = *address + 1;
}
