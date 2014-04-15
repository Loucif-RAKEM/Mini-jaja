#ifndef MULINSTRUCTION_H
#define MULINSTRUCTION_H

#include "Instruction.h"

class MulInstruction : public Instruction{
    public:
        MulInstruction(std::string label);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
    private:
        std::string label;
};
#endif
