#ifndef JJCPROGRAM_H
#define JJCPROGRAM_H

#include "Instruction.h"
#include "Program.h"
#include "cstdio"
#include <fstream>
#include <vector>

class Instruction;
class JJCProgram : Program{

    public:

    JJCProgram(std::string fileName);

    void parse();

    int getNbInstruction() const;
    void setNbInstruction(int value);

    std::vector<Instruction*>* getInstructions() const;
    void setInstructions(std::vector<Instruction*>* value);

private:
    int nbInstruction;
    std::vector<Instruction*>* instructions;
    std::string fileName;


};

#endif // JJCPROGRAM_H
