#ifndef ADDINSTRUCTION_H
#define ADDINSTRUCTION_H

#include "Instruction.h"

class AddInstruction :public Instruction{
    public:
        AddInstruction(std::string label);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
    private:
        std::string label;
};
#endif
