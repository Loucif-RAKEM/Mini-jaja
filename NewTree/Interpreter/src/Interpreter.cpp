#include "Interpreter.h"
#include "Tuple.h"
#include "MJJProgram.h"
#include "AllNodes.h"
#include "VisitInterp.h"
#include "Memory.h"

using namespace std;

void die(string error){
    std::cerr << error << std::endl;
}

void Interpreter::interpretProgram(MJJProgram mjjprogram){
    mjjprogram.getRootNode()->display();
    Memory* m = new Memory();
    VisitInterp vi;
    vi.visitAll(mjjprogram.getRootNode(), m, 0);
    delete m;
}

/*void Interpreter::interpret(std::string jajaCode, Tuple* tuple){
    QRegExp regexp;
    if(jajaCode == "init"){
        if(tuple->getStack() == NULL){
            tuple->setStack(new Stack<Quadruplet*>());
            tuple->setAddress(tuple->getAddress() + 1);
        }else die("In function Interpreter::interpret(std::string, Stack<Quadruplet*>*) : encountering \"init\" instruction when stack is not NULL.");
    }else if(tuple->getStack() != NULL){
        if(jajaCode == "pop"){
            tuple->getStack()->pop();
            tuple->setAddress(tuple->getAddress() + 1);
        }else if(jajaCode == "swap"){
            tuple->getStack()->swap();
            tuple->setAddress(tuple->getAddress() + 1);
        }else if(jajaCode == "jcstop"){
            tuple->setAddress(0);
        }else{
            regexp.setPattern("^push\\(([1-9][0-9]*|0)\\)$");
            if(QString(jajaCode.c_str()).contains(regexp)){
                int value = regexp.cap(1).toInt();
                tuple->getStack()->push(new Quadruplet("", value, CST, VOID));
                tuple->setAddress(tuple->getAddress() + 1);
            }else{
                regexp.setPattern("^store\\(([a-zA-Z][a-zA-Z_0-9]*)\\)$");
                if(QString(jajaCode.c_str()).contains(regexp)){
                    string identifier = regexp.cap(1).toStdString();
                    int value = tuple->getStack()->top()->getValue();
                    tuple->getStack()->pop();
                    Interpreter::affecterVal(identifier, value, tuple->getStack());
                    tuple->setAddress(tuple->getAddress() + 1);
                }else{
                    regexp.setPattern("^new\\(([a-zA-Z][a-zA-Z_0-9]*),(int|boolean),var,([1-9][0-9]*|0)\\)$");
                    if(QString(jajaCode.c_str()).contains(regexp)){
                        string identifier = regexp.cap(1).toStdString();
                        Type type = (regexp.cap(2) == "int") ? INTEGER : BOOLEAN;
                        int value = regexp.cap(3).toInt();
                        Interpreter::declVar(identifier, value, type, tuple->getStack());
                        cerr << "NOT SURE In function void Interpreter::interpreter" << endl;
                    }
                }
            }
        }
    }else{
        stringstream stream;
        stream << "In function Interpreter::interpret(std::string, Stack<Quadruplet*>*) : encountering \"" << jajaCode <<  "\" instruction when stack is NULL.";
        die(stream.str());
    }
}
*/

void Interpreter::affecterVal(const std::string identifier, const int value, Memory* mem){
    if(mem->getStack()->getLength() > 0){
        Quadruplet* topElement = new Quadruplet(mem->getStack()->top());
        if(identifier != topElement->getIdentifier()){
            mem->getStack()->pop();
			Interpreter::affecterVal(identifier, value, mem);
            mem->getStack()->push(topElement);
        }else if(topElement->getKind() == VCST){
            topElement->setValue(value);
            topElement->setKind(CST);
            mem->getStack()->pop();
            mem->getStack()->push(topElement);
        }else if(topElement->getKind() == CST){
            mem->getStack()->pop();
            delete topElement;
        }else{
            topElement->setValue(value);
            mem->getStack()->pop();
            mem->getStack()->push(topElement);
        }
    }else{
        stringstream error;
        error << "In function Interpreter::affecterVal(std::string, int, Stack<Quadruplet<T>*>*) : the identifier \"" << identifier << "\" does not exist in the stack.";
        die(error.str());
    }
}

void Interpreter::declVar(const std::string identifier, const int value, const Type type, Memory* mem){
    Quadruplet* quadruplet = new Quadruplet(identifier, value, VCST, type);
    mem->getStack()->push(quadruplet);
}

int Interpreter::val(const std::string identifier, Memory* mem){
    if(mem->getStack()->getLength() > 0){
        if(identifier == mem->getStack()->top()->getIdentifier()) return mem->getStack()->top()->getValue();
        else{
            Quadruplet* quadruplet = new Quadruplet(mem->getStack()->top());
            mem->getStack()->pop();
            int ret = Interpreter::val(identifier, mem);
            mem->getStack()->push(quadruplet);
            return ret;
        }
    }else{
        stringstream error;
        error << "In function Interpreter::val(std::string, Stack<Quadruplet<T>*>*) : unable to find identifier " << identifier << " in the stack.";
        die(error.str());
        return -1;
    }
}
