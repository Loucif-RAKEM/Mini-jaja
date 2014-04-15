#ifndef INVOKEINSTRUCTION_H
#define INVOKEINSTRUCTION_H
#include "Instruction.h"

class InvokeInstruction : public Instruction
{
    public:
        InvokeInstruction(std::string label, std::string ident);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
        string getIdent() const;
        void setIdent(string ident);

    private:
        std::string label;
        std::string ident;
};

#endif // INVOKEINSTRUCTION_H
