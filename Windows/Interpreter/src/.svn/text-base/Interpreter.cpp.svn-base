#include "Interpreter.h"
#include "Tuple.h"
#include "MJJProgram.h"
#include "AllNodes.h"
#include "VisitInterp.h"
#include "Memory.h"
#include "JJCProgram.h"
#include "Instruction.h"
#include "LinkedList.h"


using namespace std;

void die(string error){
    std::cerr << error << std::endl;
}

void Interpreter::interpretProgram(MJJProgram mjjprogram){
    //Memory* m = new Memory();
    m = new Memory();
    VisitInterp vi;
    ClassNode* rootNode = mjjprogram.getRootNode();
    if(rootNode != NULL){
        mjjprogram.getRootNode()->display();
        vi.visitAll(rootNode, m, 0);
    }
    //delete m;
}

LinkedList<QPair<Node*, int> >* Interpreter::interpretNode(Node* node, int flag){
    //Memory* m = new Memory();
    if(flag == 0) {
    	m = new Memory();
        cout << "NEW MEMORY" << endl;
    }
    VisitInterp vi;
    LinkedList<QPair<Node*, int> >* liste;
    if(node != NULL){
        vi.visitNode(node, m, flag);
    }
    liste = vi.getListe();
    //delete m;
    cout << "Juste avant le return liste" << endl;
    return liste;
}

void Interpreter::interpretProgram(JJCProgram jjcprogram){

    int address = 1;
    int* p_address = &address;
    m = new Memory();
    while(*p_address-1 < jjcprogram.getInstructions()->size() && *p_address-1 >= 0 && (*(jjcprogram.getInstructions()))[*p_address-1]->getLabel() != "jcstop" ){
        cout << "Execution de " << *p_address << endl;
        (*(jjcprogram.getInstructions()))[*p_address-1]->interpret(m, p_address);
        m->getStack()->display();
    }
}

int Interpreter::interpretProgramSS(JJCProgram jjcprogram, int stop){

    int address = 0;
    if(stop == 1){
        address = 1;
    }
    else{
        address = stop;
    }

    int* p_address = &address;
    if(*p_address == 1){
        m = new Memory();
        cout << "NEW MEMORY" << endl;
    }
    if(*p_address-1 < jjcprogram.getInstructions()->size() && *p_address-1 >= 0 && (*(jjcprogram.getInstructions()))[*p_address-1]->getLabel() != "jcstop"){
        cout << *p_address << " : execution de " << (*(jjcprogram.getInstructions()))[*p_address-1]->getLabel() << endl;
        (*(jjcprogram.getInstructions()))[*p_address-1]->interpret(m, p_address);
        m->getStack()->display();
    }
    else{
        *p_address = -1;
    }
    return *p_address;
}

Memory* Interpreter::getMemory(){
    return m;
}



void Interpreter::affecterVal(const std::string identifier, const int value, Memory* mem){
    if(mem->getStack()->getLength() > 0){
        Quadruplet* topElement = new Quadruplet(mem->getStack()->top());
        if(identifier != topElement->getIdentifier()){
            mem->getStack()->pop();
			Interpreter::affecterVal(identifier, value, mem);
            mem->getStack()->push(topElement);
        }else if(topElement->getKind() == VCST){
            topElement->setValue(value);
            mem->getStack()->pop();
            topElement->setKind(CST);
            mem->getStack()->push(topElement);
        }else if(topElement->getKind() == CST){
            //mem->getStack()->pop();
            delete topElement;
            stringstream error;
            error << "Erreur : Impossible de modifier une constante." << endl;
            die(error.str());
        }else{
            topElement->setValue(value);
            mem->getStack()->pop();
            mem->getStack()->push(topElement);
        }
    }else{
        stringstream error;
        error << "In function Interpreter::affecterVal(const std::string identifier, const int value, Memory* mem) : \"" << identifier << "\" was not declared in this scope.";
        die(error.str());
    }
}

void Interpreter::affecterValT(const string identifier, int value, const int index, Memory* mem){
    if(mem->getStack()->getLength() > 0){
        Quadruplet* topElement = new Quadruplet(mem->getStack()->top());

        if(identifier != topElement->getIdentifier()){
            mem->getStack()->pop();
			Interpreter::affecterValT(identifier, value, index, mem);
            mem->getStack()->push(topElement);
        }else{
            int address = topElement->getValue();
			mem->getHeap()->affecterTas(address, index, value); 
		}
    }else{
        stringstream error;
        error << "void affecterValT(const string identifier, const int value, const int index, Memory* mem) : " << identifier << " was not declared in this scope.";
        die(error.str());
    }
}

void Interpreter::declVar(const string identifier, const int value, const Type type, Memory* mem){
    Quadruplet* quadruplet = new Quadruplet(identifier, value, VAR, type);
    mem->getStack()->push(quadruplet);
}

void Interpreter::declVCst(const string identifier, const int value, const Type type, Memory* mem){
        Quadruplet* quadruplet = new Quadruplet(identifier, value, VCST, type);
        mem->getStack()->push(quadruplet);
}

void Interpreter::declCst(const string identifier, const int value, const Type type, Memory* mem){
        Quadruplet* quadruplet = new Quadruplet(identifier, value, CST, type);
        mem->getStack()->push(quadruplet);
}



void Interpreter::identVal(string identifier,Type type, Memory* mem,int addr){
    cout << identifier<<endl;
    Quadruplet* quadruplet;
    if (addr == 0){
        int value = mem->getStack()->top()->getValue();
        mem->getStack()->pop();
        quadruplet = new Quadruplet(identifier, value, VAR, type);
        mem->getStack()->push(quadruplet);
    }else{
        quadruplet = new Quadruplet(mem->getStack()->top());
        mem->getStack()->pop();
        identVal(identifier, type, mem, addr-1);
        mem->getStack()->push(quadruplet);
    }
}

int Interpreter::val(const std::string identifier, Memory* mem){
    if(mem->getStack()->getLength() > 0){
        if(identifier == mem->getStack()->top()->getIdentifier()){
            return mem->getStack()->top()->getValue();
        }
        else{
            Quadruplet* quadruplet = new Quadruplet(mem->getStack()->top());
            mem->getStack()->pop();
            int ret = Interpreter::val(identifier, mem);
            mem->getStack()->push(quadruplet);
            return ret;
        }
    }else{
        stringstream error;
        error << "In function Interpreter::val(const std::string identifier, Memory* mem) : " << identifier << " was not declared in this scope.";
        die(error.str());
        return -1;
    }
}

void Interpreter::declMeth(string identifier, MethodNode* method, Type type, Memory* mem){
    Quadruplet* quadruplet = new Quadruplet(identifier, method, METH, type);
    mem->getStack()->push(quadruplet);
}

void Interpreter::declMethJJC(string identifier, int value, Type type, Memory* mem){
    Quadruplet* quadruplet = new Quadruplet(identifier, value, METH, type);
    mem->getStack()->push(quadruplet);
}

void Interpreter::declTab(const string identifier, const int size, const Type type, Memory* mem){
    int addressArray = mem->getHeap()->creerTas(size, type);
	Quadruplet* quadruplet = new Quadruplet(identifier, addressArray, ARRAY, type);
	mem->getStack()->push(quadruplet);
}

int Interpreter::valT(const string identifier, const int index, Memory* mem){
    int value;
    if(mem->getStack()->getLength() != 0){
        if(identifier == mem->getStack()->top()->getIdentifier()){
            int address = mem->getStack()->top()->getValue();
            value = mem->getHeap()->valeurTas(address, index);
        }else{
            Quadruplet* topElement = new Quadruplet(mem->getStack()->top());
            mem->getStack()->pop();
            value = Interpreter::valT(identifier, index, mem);
            mem->getStack()->push(topElement);
        }
    }else{
        stringstream error;
        error << "In function Interpreter::valT(const string identifier, const int value, Memory* mem) : " << identifier << " was not declared in this scope.";
        die(error.str());
        return -1;
    }
    return value;
}

Node* Interpreter::parametre(const string methodName, Memory* mem){
    Node* headers = NULL;
    if(mem->getStack()->getLength() > 0){
        Quadruplet* topElement = new Quadruplet(mem->getStack()->top());
        if(topElement->getIdentifier() != methodName){
            mem->getStack()->pop();
            headers = Interpreter::parametre(methodName, mem);
            mem->getStack()->push(topElement);
        }else if(topElement->getKind() != METH){
            stringstream error;
            error << "In function Interpreter::parametre(const string methodName, Memory* mem) : invalid use of " << methodName << " as a method.";
            die(error.str());
        }else{
            cout << "In function Interpreter::parametre(const string methodName, Memory* mem) : Algorithm not sure !" << endl;
            headers = topElement->getMethod()->getChildren()[2]; 
        }
    }else{ stringstream error;
        error << "In function Interpreter::parametre(const string methodName, Memory* mem) : method " << methodName << " was not declared in this scope.";
        die(error.str());
    }
    return headers;
}

void Interpreter::expParam(Node* expList, Node* headers, Memory* mem){
    if(expList->getLabel() != "" && headers != NULL && headers->getLabel() != ""){
        VisitInterp* v = new VisitInterp();
        int value = v->getValue(expList->getChildren()[0], mem);
        Node* le1 = expList->getChildren()[1];
        Type type = stringToType(headers->getChildren()[0]->getChildren()[0]->accept(v, mem));
        string identifier = headers->getChildren()[0]->getChildren()[1]->accept(v, mem);
        Interpreter::declVar(identifier, value, type, mem);
        Interpreter::expParam(le1, headers->getChildren()[1], mem);
        mem->getStack()->display();
    }
}

Node* Interpreter::declaration(const string identifier, Memory* mem){
    Node* dvs = NULL;
    if(mem->getStack()->getLength() != 0){
        Quadruplet* topElement = new Quadruplet(mem->getStack()->top());
        if(identifier != topElement->getIdentifier()){
            mem->getStack()->pop();
            dvs = Interpreter::declaration(identifier, mem);
            mem->getStack()->push(topElement);
        }else if(topElement->getKind() != METH){ 
            stringstream error;
            error << "In function Interpreter::declaration(const string identifier, Memory* mem) : invalid use of " << identifier << " as a method.";
            die(error.str());
        }else{
            cout << "In function Interpreter::declaration(const string identifier, Memory* mem) : Algorithm not sure !" << endl;
            dvs = topElement->getMethod()->getChildren()[3]; 
        }

    }else{
        stringstream error;
        error << "In function Interpreter::declaration(const string identifier, Memory* mem) : " << identifier << " was not declared in this scope.";
        die(error.str());
    }
    return dvs;
}

Node* Interpreter::corps(const string identifier, Memory* mem){
    Node* iss = NULL;
    if(mem->getStack()->getLength() != 0){
        Quadruplet* topElement = new Quadruplet(mem->getStack()->top());
        if(identifier != topElement->getIdentifier()){
            mem->getStack()->pop();
            iss = Interpreter::corps(identifier, mem);
            mem->getStack()->push(topElement);
        }else if(topElement->getKind() != METH){ 
            stringstream error;
            error << "In function Interpreter::corps(const string identifier, Memory* mem) : invalid use of " << identifier << " as a method.";
            die(error.str());
        }else{
            cout << "In function Interpreter::corps(const string identifier, Memory* mem) : Algorithm not sure !" << endl;
            iss = topElement->getMethod()->getChildren()[4]; 
        }
    }else{
        stringstream error;
        error << "In function Interpreter::corps(const string identifier, Memory* mem) : " << identifier << " was not declared in this scope.";
        die(error.str());
    }
    return iss;
}

const string Interpreter::variableClasse(Memory* mem){
    string variableClasse = "";
    int stackLength = mem->getStack()->getLength();
    if(stackLength == 1){
        variableClasse = mem->getStack()->top()->getIdentifier();
    }else if(stackLength > 1){
        Quadruplet* topElement = new Quadruplet(mem->getStack()->top());
        mem->getStack()->pop();
        variableClasse = Interpreter::variableClasse(mem);
        mem->getStack()->push(topElement);
    }else{
        stringstream error;
        error << "In function const string Interpreter::variableClasse(Memory* mem) : class variable was not declared.";
        die(error.str());
    }

    return variableClasse;
}


void Interpreter::retirerDecl(const string identifier, Memory* mem){
    if(mem->getStack()->getLength() > 0){
        Quadruplet* topElement = new Quadruplet(mem->getStack()->top());
        if(identifier == topElement->getIdentifier()){
            if(topElement->getKind() == ARRAY){
                mem->getHeap()->retirerTas(topElement->getValue());
                mem->getStack()->pop();
                delete topElement;
            }else{
                mem->getStack()->pop();
                delete topElement;
            }
        }else{
            mem->getStack()->pop();
            Interpreter::retirerDecl(identifier, mem);
            mem->getStack()->push(topElement);
        }
    }else{
        stringstream error;
        error << "In function void Interpreter::retirerDecl(const string identifier, Memory* mem) : " << identifier << " was already removed from the stack." << endl;
        die(error.str());
    }
}
