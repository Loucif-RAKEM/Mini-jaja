#ifndef PUSHINSTRUCTION_H
#define PUSHINSTRUCTION_H

#include "Instruction.h"

class PushInstruction :public Instruction{
    public:
	PushInstruction(std::string label, int value);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
        int getValue() const;
        void setValue(int label);
    private:
        std::string label;
        int value;

};
#endif
