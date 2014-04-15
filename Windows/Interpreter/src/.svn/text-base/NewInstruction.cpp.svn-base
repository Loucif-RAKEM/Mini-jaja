#include "NewInstruction.h"
using namespace std;

NewInstruction::NewInstruction(string label,string ident, Type type, Kind kind, int value ):Instruction(label)
{
    this->ident = ident;
    this->type = type;
    this->kind = kind;
    this->value = value;
}

string NewInstruction::getLabel() const
{
    return label;
}
void NewInstruction::setLabel(std::string label)
{
    this->label = label;
}

Type NewInstruction::getType() const
{
    return type;
}
void NewInstruction::setType(Type type)
{
    this->type = type;
}

Kind NewInstruction::getKind() const
{
    return kind;
}
void NewInstruction::setKind(Kind kind)
{
    this->kind = kind;
}

string NewInstruction::getIdent() const
{
    return ident;
}
void NewInstruction::setIdent(string ident)
{
    this->ident = ident;
}

void NewInstruction::interpret (Memory* mem, int* address){
    Kind kind = this->kind;
    Type type = this->type;
    int addr = this->value;
    std::string identifier = this->ident;
    //cout <<identifier<< type<< mem<< addr<<endl;
    if (kind == VAR){
        Interpreter::identVal(identifier, type, mem, addr);
    }
    else if(kind == CST ){
        int value1 = mem->getStack()->top()->getValue();
        mem->getStack()->pop();
        Interpreter::declCst(identifier,value1,type,mem);

    }
    else if (kind == VCST){
        int value1 = mem->getStack()->top()->getValue();
        mem->getStack()->pop();
        Interpreter::declVCst(identifier,value1,type,mem);

    }
    else if (kind == METH){
        int value1 = mem->getStack()->top()->getValue();
        mem->getStack()->pop();
        Interpreter::declMethJJC(identifier,value1,type,mem);

    }
    *address = *address+1;
}
