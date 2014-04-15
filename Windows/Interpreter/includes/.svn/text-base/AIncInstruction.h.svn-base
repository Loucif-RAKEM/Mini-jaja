#ifndef AINCINSTRUCTION_H
#define AINCINSTRUCTION_H

#include "Instruction.h"
class AIncInstruction : public Instruction
{
    public:
        AIncInstruction(std::string label, std::string ident);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
        std::string getIdent() const;
        void setIdent(std::string ident);

    private:
        std::string label;
        std::string ident;
};

#endif // AINCINSTRUCTION_H
