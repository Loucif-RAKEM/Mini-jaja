#include "Compiler.h"
#include "VisitComp.h"
#include "MJJProgram.h"

using namespace std;

void Compiler::compile(MJJProgram mjjprogram, string outputFileName){
    VisitComp v;
    v.visitAll(mjjprogram.getRootNode(), outputFileName);
}
