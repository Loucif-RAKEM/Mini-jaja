#ifndef COMPILER_H
#define COMPILER_H

#include <string>

class MJJProgram;

namespace Compiler{

    void compile(MJJProgram mjjprogram, std::string outputFileName);

}

#endif
