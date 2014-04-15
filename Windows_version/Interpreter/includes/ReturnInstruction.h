#ifndef RETURNINSTRUCTION_H
#define RETURNINSTRUCTION_H

#include "Instruction.h"

class ReturnInstruction :public Instruction{
    public:
        ReturnInstruction(std::string label);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
    private:
        std::string label;
};
#endif
