#ifndef ORINSTRUCTION_H
#define ORPINSTRUCTION_H

#include "Instruction.h"

class OrInstruction :public Instruction{
    public:
        OrInstruction(std::string label);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
    private:
        std::string label;
};
#endif
