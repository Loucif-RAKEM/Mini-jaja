#ifndef SUBINSTRUCTION_H
#define SUBINSTRUCTION_H

#include "Instruction.h"

class SubInstruction :public Instruction{
    public:
        SubInstruction(std::string label);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
    private:
        std::string label;
};
#endif
