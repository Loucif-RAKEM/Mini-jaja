#include "Compiler.h"
#include "VisitComp.h"
#include "MJJProgram.h"

using namespace std;

void Compiler::compile(MJJProgram mjjprogram, string outputFileName){
    VisitComp v;
    ClassNode* rootNode = mjjprogram.getRootNode();
    if(rootNode != NULL){
        v.visitAll(rootNode, outputFileName);
    }
}
