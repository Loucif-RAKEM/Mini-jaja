#ifndef MJJPROGRAM_H
#define MJJPROGRAM_H

#include "Program.h"
#include <string>

class ClassNode;

class MJJProgram : public Program
{
public:
    MJJProgram(std::string fileName);
    ~MJJProgram();
    static void onAbstractSyntaxTreeCompleted(ClassNode* rootNode);
    ClassNode *getRootNode();

private:
    static ClassNode* rootNode;
    void setRootNode(ClassNode* rootNode);
};

#endif // MJJPROGRAM_H
