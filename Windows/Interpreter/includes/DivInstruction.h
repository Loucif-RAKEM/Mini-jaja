#ifndef DIVINSTRUCTION_H
#define DIVINSTRUCTION_H

#include "Instruction.h"

class DivInstruction :public Instruction{
    public:
        DivInstruction(std::string label);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
    private:
        std::string label;
};
#endif
