#ifndef INCINSTRUCTION_H
#define INCINSTRUCTION_H
#include "Instruction.h"
class IncInstruction : public Instruction
{
    public:
        IncInstruction(std::string label, std::string ident);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
        std::string getIdent() const;
        void setIdent(std::string ident);

    private:
        std::string label;
        std::string ident;
};

#endif // INCINSTRUCTION_H
