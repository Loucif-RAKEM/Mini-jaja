#ifndef JCSTOP_H
#define JCSTOP_H
#include "Instruction.h"

class JCstop : public Instruction
{
    public:
        JCstop(std::string label);

        void interpret(Memory*, int*);
        std::string getLabel() const;
        void setLabel(std::string label);
    private:
        std::string label;
};

#endif // JCSTOP_H
