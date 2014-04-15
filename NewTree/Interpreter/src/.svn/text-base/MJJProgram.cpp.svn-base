#include <iostream>
#include "MJJProgram.h"
#include "AllNodes.h"

extern "C" FILE* yyin;
extern "C" int yyparse();

using namespace std;

ClassNode* MJJProgram::rootNode = NULL;

MJJProgram::MJJProgram(std::string fileName): Program(fileName)
{
    if(file){
        yyin = file;
        yyparse();
    }
}

MJJProgram::~MJJProgram()
{
}

void MJJProgram::onAbstractSyntaxTreeCompleted(ClassNode *rootNode)
{
    MJJProgram::rootNode = rootNode;
}


ClassNode* MJJProgram::getRootNode()
{
    return MJJProgram::rootNode;
}

void MJJProgram::setRootNode(ClassNode *rootNode)
{
    this->rootNode = rootNode;
}
