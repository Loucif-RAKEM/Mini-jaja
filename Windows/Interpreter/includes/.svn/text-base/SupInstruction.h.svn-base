#ifndef SUPINSTRUCTION_H
#define SUPPINSTRUCTION_H

#include "Instruction.h"

class SupInstruction :public Instruction{
    public:
        SupInstruction(std::string label);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
    private:
        std::string label;
};
#endif
