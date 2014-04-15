#ifndef LOADINSTRUCTION_H
#define LOADINSTRUCTION_H

#include "Instruction.h"

class LoadInstruction : public Instruction
{
    public:
        LoadInstruction(std::string label, std::string ident);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
        std::string getIdent() const;
        void setIdent(std::string ident);

    private:
        std::string label;
        std::string ident;
};

#endif // LOADINSTRUCTION_H
