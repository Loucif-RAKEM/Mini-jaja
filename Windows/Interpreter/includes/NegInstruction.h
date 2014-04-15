#ifndef NEGINSTRUCTION_H
#define NEGINSTRUCTION_H

#include "Instruction.h"

class NegInstruction :public Instruction{
    public:
        NegInstruction(std::string label);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
    private:
        std::string label;
};
#endif
