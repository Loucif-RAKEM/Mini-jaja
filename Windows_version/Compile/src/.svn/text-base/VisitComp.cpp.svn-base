#include "VisitComp.h"
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

VisitComp::VisitComp(): ligneCourante(1), nbHeaders(0){}

VisitComp::~VisitComp(){}

void VisitComp::visitAll(ClassNode* root, string filename){
    string res;

    res = root->accept(this);
    filename += ".jjc";
    ofstream file(filename.c_str(), ofstream::trunc);
    file << res;
    file.close();

    root->display();
}



string VisitComp::visit(AndNode* an, int flag) {
    string temp;
    if(flag==0){
        temp += an->getChildren()[0]->accept(this);
        temp += an->getChildren()[1]->accept(this);
        temp += "and\n";
        ligneCourante++;
    }else if(flag==2){
        temp += an->getChildren()[0]->accept(this, 2);
        temp += an->getChildren()[1]->accept(this, 2);
        temp += "1";
    }
    return temp;

}

string VisitComp::visit(AssignmentNode* assign, int flag) {
    string temp;
    if(flag==0){
        temp = "";
        if(assign->getChildren()[0]->getLabel() == "binaryarray") {
            temp += assign->getChildren()[0]->getChildren()[1]->accept(this);
            temp += assign->getChildren()[1]->accept(this);
            temp += "astore(";
            temp += assign->getChildren()[0]->getChildren()[0]->getChildren()[0]->getLabel() + ")\n";
        } else {
            temp += assign->getChildren()[1]->accept(this);
            temp += "store(";
            temp += assign->getChildren()[0]->getChildren()[0]->getLabel() + ")\n";
        }
        ligneCourante++;
    }else if(flag==2){
        if(assign->getChildren()[0]->getLabel() == "binaryarray") {
            temp += assign->getChildren()[0]->getChildren()[1]->accept(this, 2);
            temp += assign->getChildren()[1]->accept(this, 2);
            temp += "1";
        } else {
            temp += assign->getChildren()[1]->accept(this, 2);
            temp += "1";
        }
    }
    return temp;
}

string VisitComp::visit(BinaryArrayNode* ban, int flag) {
    string temp;
    if(flag==0){
        temp += ban->getChildren()[1]->accept(this);
        temp += "aload(";
        temp += ban->getChildren()[0]->getChildren()[0]->getLabel() + ")\n";
        ligneCourante++;
    }else if(flag==2){
        temp += ban->getChildren()[1]->accept(this, 2);
        temp += "1";
    }
    return temp;
}

string VisitComp::visit(BinaryMinusNode* bmn, int flag) {
    string temp;
    if(flag==0){
        temp += bmn->getChildren()[0]->accept(this);
        temp += bmn->getChildren()[1]->accept(this);
        temp += "sub\n";
        ligneCourante++;
    }else if(flag==2){
        temp += bmn->getChildren()[0]->accept(this, 2);
        temp += bmn->getChildren()[1]->accept(this, 2);
        temp += "1";
    }
    return temp;
}

string VisitComp::visit(CallENode* cen, int flag) {
    string temp;
    if(flag==0) {
    	temp += cen->getChildren()[1]->accept(this);
    	temp += "invoke(" + cen->getChildren()[0]->getChildren()[0]->getLabel();
    	temp += ")\n";
    	ligneCourante++;
    	temp += cen->getChildren()[1]->accept(this, 1);
    } else if(flag==2) {
        temp += "1";
        temp += cen->getChildren()[1]->accept(this, 2);
        temp += cen->getChildren()[1]->accept(this, 3);
    }
    return temp;
}

string VisitComp::visit(CallINode* cin, int flag) {
    string temp;
    if(flag==0) {
    	temp += cin->getChildren()[1]->accept(this);
    	temp += "invoke(" + cin->getChildren()[0]->getChildren()[0]->getLabel();
    	temp += ")\n";
    	ligneCourante++;
    	temp += cin->getChildren()[1]->accept(this, 1);
    	temp += "pop\n";
    	ligneCourante++;
    } else if(flag==2) {
    temp += "11";
    temp += cin->getChildren()[1]->accept(this, 2);
    temp += cin->getChildren()[1]->accept(this, 3);
    }
    return temp;  	
}

string VisitComp::visit(ClassNode* c, int flag) {
    string temp;
    temp += "init\n";
    ligneCourante++;
    temp += c->getChildren()[1]->accept(this);
    temp += c->getChildren()[2]->accept(this);

    //retrait dss
    temp += c->getChildren()[1]->accept(this, 1);
    //retrait du main et stop
    temp += "jcstop\n";
    ligneCourante++;
    return temp;
}

string VisitComp::visit(CstNode* cn, int flag) {
    string temp;
    if(flag == 0){
        if(cn->getChildren()[2]->getChildren() != NULL){
            temp+=cn->getChildren()[2]->accept(this);
            temp += "new(";
            temp += cn->getChildren()[1]->getChildren()[0]->getLabel() + ",";
            temp += cn->getChildren()[0]->accept(this) + ",";
            temp += "cst,";
            temp += "0)\n";
            ligneCourante++;
        }else{
            temp += "push(0)\n";
            ligneCourante++;
            temp += "new(";
            temp += cn->getChildren()[1]->getChildren()[0]->getLabel() + ",";
            temp += cn->getChildren()[0]->accept(this) + ",";
            temp += "vcst,";
            temp += "0)\n";
            ligneCourante++;
        }
    }else if(flag == 1){
        //retrait
        temp = "swap\npop\n";
        ligneCourante++;
        ligneCourante++;
    }else if(flag == 2){
        if(cn->getChildren()[2]->getChildren() != NULL){
            temp+=cn->getChildren()[2]->accept(this, 2);
            temp+=cn->getChildren()[0]->accept(this, 2);
            temp+="1";
        }else{
            temp+=cn->getChildren()[0]->accept(this, 2);
            temp+="11";
        }
    }else if(flag == 3){
        temp +="11";
    }
    return temp;
}

string VisitComp::visit(DeclsNode* decls, int flag) {
    string temp;
    if(flag == 0){
        if(decls->getLabel() != ""){
            temp += decls->getChildren()[0]->accept(this);
            temp += decls->getChildren()[1]->accept(this);
        }
    }else if(flag == 1){
        if(decls->getLabel() != ""){
            temp = "swap\npop\n";
            ligneCourante++;
            ligneCourante++;
            temp += decls->getChildren()[1]->accept(this, 1);
        }
    }else if(flag==2){
        temp += decls->getChildren()[1]->accept(this, 2);
        temp += "1";
    }else if(flag == 3){
        temp += "11";
        temp += decls->getChildren()[1]->accept(this, 3);
    }
    return temp;
}

string VisitComp::visit(DivideNode* dn, int flag) {
    string temp;
    if(flag == 0){
        temp += dn->getChildren()[0]->accept(this);
        temp += dn->getChildren()[1]->accept(this);
        temp += "div\n";
        ligneCourante++;
    }else if(flag==2){
        temp += dn->getChildren()[0]->accept(this, 2);
        temp += dn->getChildren()[1]->accept(this, 2);
        temp += "1";
    }
    return temp;
}

string VisitComp::visit(EqualityNode* eqn, int flag) {
    string temp;
    if(flag == 0){
        temp += eqn->getChildren()[0]->accept(this);
        temp += eqn->getChildren()[1]->accept(this);
        temp += "cmp\n";
        ligneCourante++;
    }else if(flag==2){
        temp += eqn->getChildren()[0]->accept(this, 2);
        temp += eqn->getChildren()[1]->accept(this, 2);
        temp += "1";
    }
    return temp;
}

string VisitComp::visit(ExpListNode* expl, int flag) {
	string temp;
	if(flag == 0){
		temp += expl->getChildren()[0]->accept(this);
        if(expl->getChildren()[1] != NULL){
            temp += expl->getChildren()[1]->accept(this);
        }
    }else if(flag == 1){
        temp += "swap\npop\n";
        ligneCourante++;
        ligneCourante++;
        if(expl->getChildren()[1] != NULL){
        	temp += expl->getChildren()[1]->accept(this, 1);
        }
    }else if(flag==2){
        temp += expl->getChildren()[0]->accept(this, 2);
        if(expl->getChildren()[1] != NULL){
        	temp += expl->getChildren()[1]->accept(this, 2);
        }
    }else if(flag == 3){
        temp += expl->getChildren()[0]->accept(this, 3);
        if(expl->getChildren()[1] != NULL){
        	temp += expl->getChildren()[1]->accept(this, 3);
        }
        temp +="11";
	}
	return temp;
}

string VisitComp::visit(GreaterThanNode* c, int flag) {
    string temp;
    if(flag == 0){
        temp += c->getChildren()[0]->accept(this);
        temp += c->getChildren()[1]->accept(this);
        temp += "sup\n";
        ligneCourante++;
    }else if(flag==2){
        temp += c->getChildren()[0]->accept(this, 2);
        temp += c->getChildren()[1]->accept(this, 2);
        temp += "1";
    }
    return temp;
}

string VisitComp::visit(HeaderNode* c, int flag) {
    string temp;
    string result;
    if(flag == 0){
       /* //NEWMODIF
        temp += "swap\n";
        ligneCourante++;
        //FINNEWMODIF*/
        
        ostringstream convert;
        convert << nbHeaders;
        result = convert.str();
        
        temp += "new(";
        temp += c->getChildren()[1]->getChildren()[0]->getLabel() + ",";
        temp += c->getChildren()[0]->accept(this) + ",";
        temp += "var,";
        temp +=  result+")\n";
        nbHeaders--;
        ligneCourante++;
    }else if(flag == 1){
        temp += "swap\npop\n";
        ligneCourante++;
        ligneCourante++;
    }else if(flag==2){
        temp += "1";
       /* //NEWMODIF
        temp += "1";
        //FINNEWMODIF*/
    }else if(flag == 3){
        temp += "11";
    }
    
    return temp;
}

string VisitComp::visit(HeadersNode* hn, int flag) {
	string temp;
	
	if(flag == 0){
        //A L ENDROIT POUR RECUP LES PUSH DE EXPLIST
        temp += hn->getChildren()[0]->accept(this);
        if(hn->getChildren()[1] != NULL){
            temp += hn->getChildren()[1]->accept(this);
        }
		

    }else if(flag == 1){
        temp += "swap\npop\n";
        ligneCourante++;
        ligneCourante++;
        if(hn->getChildren()[1] != NULL){
        	temp += hn->getChildren()[1]->accept(this, 1);
        }
    }else if(flag==2){
        temp += hn->getChildren()[0]->accept(this, 2);
        if(hn->getChildren()[1] != NULL){
        	temp += hn->getChildren()[1]->accept(this, 2);
        }
    }else if(flag == 3){
        temp += hn->getChildren()[0]->accept(this, 3);
        if(hn->getChildren()[1] != NULL){
        	temp += hn->getChildren()[1]->accept(this, 3);
        }
    }
	return temp;
}

string VisitComp::visit(IdentNode* in, int flag) {
    string temp="";
    if(flag == 0){
        temp = "load(" + in->getChildren()[0]->accept(this) + ")\n";
        ligneCourante++;
    }else if(flag==2){
        temp += "1";
    }
    return temp;
}

string VisitComp::visit(IfElseNode* in, int flag) {
    string temp;
    int res = 0;
    int nbLigne;
    if(flag == 0){
        //conditions du if
        temp +=in->getChildren()[0]->accept(this);
        nbLigne=ligneCourante + 2 + in->getChildren()[2]->accept(this, 2).size();

        string result;
        ostringstream convert;
        convert << nbLigne;
        result = convert.str();

        temp += "if("+result;
        temp += ")\n";
        ligneCourante++;
        //nb de lignes dans instructions
        res = in->getChildren()[1]->accept(this, 2).size(); // ou legnth
        nbLigne = nbLigne+res;
        string result2;

        //else
        temp += in->getChildren()[2]->accept(this);

        //goto
        ostringstream convert2;
        convert2 << nbLigne;
        result2 = convert2.str();
        temp += "goto("+result2;
        temp += ")\n";
        ligneCourante++;
        //instructions du if
        temp += in->getChildren()[1]->accept(this);
    }else if(flag == 1){
        temp += in->getChildren()[1]->accept(this, 1);
        temp += in->getChildren()[2]->accept(this, 1);
    }else if(flag == 2){
        temp+="11";
        temp += in->getChildren()[0]->accept(this, 2);
        temp += in->getChildren()[1]->accept(this, 2);
        temp += in->getChildren()[2]->accept(this, 2);
    }

    return temp;
}

string VisitComp::visit(IfNode* in, int flag) {
    string temp;
    int res = 0;
    int nbLigne;
    if(flag == 0){
        //conditions
        temp +=in->getChildren()[0]->accept(this);
        nbLigne=ligneCourante+2;

        string result;

        ostringstream convert;
        convert << nbLigne;
        result = convert.str();

        temp += "if("+result;
        temp += ")\n";
        ligneCourante++;
        //nb de lignes dans instructions
        res = in->getChildren()[1]->accept(this, 2).size(); // ou legnth
        nbLigne = nbLigne+res;
        string result2;

        ostringstream convert2;
        convert2 << nbLigne;
        result2 = convert2.str();
        temp += "goto("+result2;
        temp += ")\n";
        ligneCourante++;
        //instructions
        temp += in->getChildren()[1]->accept(this);
    }else if(flag == 1){
        temp += in->getChildren()[1]->accept(this, 1);
    }else if(flag == 2){
        temp+="11";
        temp += in->getChildren()[0]->accept(this, 2);
        temp += in->getChildren()[1]->accept(this, 2);
    }

    return temp;
}

string VisitComp::visit(IncrementNode* in, int flag) {
    string temp;
    if(flag == 0){
        if(in->getChildren()[0]->getLabel() == "binaryarray") {
            temp += in->getChildren()[0]->getChildren()[1]->accept(this);
            temp += "push(1)\n";
            ligneCourante++;
            temp += "ainc(";
            temp += in->getChildren()[0]->getChildren()[0]->getChildren()[0]->getLabel() + ")\n";
            ligneCourante++;
        }else{
            temp += "push(1)\n";
            ligneCourante++;
            temp += "inc("+in->getChildren()[0]->getChildren()[0]->getLabel();
            temp += ")\n";
            ligneCourante++;
        }
    }else if(flag==2){
        temp += "11";
    }
    return temp;
}

string VisitComp::visit(InstrsNode* iss, int flag) {
    string temp;
    if(flag == 0){
        temp += iss->getChildren()[0]->accept(this);
        temp += iss->getChildren()[1]->accept(this);
    }else if(flag==2){
        temp += iss->getChildren()[0]->accept(this, 2);
        temp += iss->getChildren()[1]->accept(this, 2);
    }
    return temp;
}

string VisitComp::visit(LeafNode* leaf, int flag) {
    if(leaf->getLabel()== "true" || leaf->getLabel()== "false" ){
        return "push("+leaf->getLabel()+")\n";
    }else{
        return leaf->getLabel();
    }
}

string VisitComp::visit(MainNode* main, int flag) {
    string temp;
    if(flag == 0){
        temp += main->getChildren()[0]->accept(this);
        temp += main->getChildren()[1]->accept(this);
        //push(0) void methode
        temp += "push(0)\n";
        ligneCourante++;

        //retrait dss
        temp += main->getChildren()[0]->accept(this, 1);
        //retrait du main : pop
        temp += "pop\n";
        ligneCourante++;
    }else if(flag==2){
        temp += main->getChildren()[0]->accept(this, 2);
        temp += main->getChildren()[1]->accept(this, 2);
        //1 de plus pour le push(0)
        temp += "1";
        //compte les swap pop avec le flag =3
        temp += main->getChildren()[0]->accept(this, 3);
        temp += main->getChildren()[1]->accept(this, 3);
        //pop de la fin
        temp+="1";
    }
    return temp;
}

string VisitComp::visit(MethodNode* mn, int flag) {
	string temp;
	int nbLigne=ligneCourante;
	if(flag == 0){
		nbLigne=nbLigne+3;
		string result;
        ostringstream convert;
        convert << nbLigne;
        result = convert.str();
		temp += "push("+result+")\n";
		ligneCourante++;
		temp += "new("+mn->getChildren()[1]->getChildren()[0]->getLabel()+",";
		temp += mn->getChildren()[0]->getLabel()+",meth,0)\n";
		ligneCourante++;
		//goto
		nbLigne=ligneCourante;
		int res = mn->getChildren()[2]->accept(this, 2).size();
		res += mn->getChildren()[3]->accept(this, 2).size();
		res += mn->getChildren()[4]->accept(this, 2).size();
		res += mn->getChildren()[3]->accept(this, 3).size();
		nbLigne += res + 3;
		
		if(mn->getChildren()[0]->getLabel() == "void") {
			nbLigne++;
		}
		
		string result2;
        ostringstream convert2;
        convert2 << nbLigne;
        result2 = convert2.str();
		temp += "goto("+ result2 +")\n";
		ligneCourante++;
		//entete
		nbHeaders = mn->getChildren()[2]->accept(this, 2).size();
		temp += mn->getChildren()[2]->accept(this);
		//vars
		temp += mn->getChildren()[3]->accept(this);
		//instrs
		temp += mn->getChildren()[4]->accept(this);
		// push 0 si void
		if(mn->getChildren()[0]->getLabel() == "void") {
			temp += "push(0)\n";
			ligneCourante++;
		}
		//retrait vars
		temp += mn->getChildren()[3]->accept(this,1);
		//swap
		temp += "swap\n";
		ligneCourante++;
		//return
		temp += "return\n";
		ligneCourante++;
	}else if(flag == 1){
	//retrait
        temp += "swap\npop\n";
        ligneCourante +=2;
	}else if(flag == 2){
	//compte les instructions
			//entete
		temp += mn->getChildren()[2]->accept(this, 2);
		//vars
		temp += mn->getChildren()[3]->accept(this, 2);
		//instrs
		temp += mn->getChildren()[4]->accept(this, 2);
		//retrait vars
		temp += mn->getChildren()[3]->accept(this, 3);
	}else if(flag == 3){
	//compter les swap pop
        temp += "11";
	}
	return temp;
}

string VisitComp::visit(NotNode* nn, int flag) {
    string temp;
    if(flag==0){
        temp += nn->getChildren()[0]->accept(this);
        temp += "not\n";
        ligneCourante++;
    }else if(flag==2){
        temp += nn->getChildren()[0]->accept(this, 2);
        temp += "1";
    }
    return temp;
}

string VisitComp::visit(NumberNode* num, int flag) {
    string temp;
    if(flag == 0){
        temp += "push("+num->getChildren()[0]->accept(this) +")\n";
        ligneCourante++;
    }else if(flag==2){
        temp += "1";
    }
    return temp;
}

string VisitComp::visit(OrNode* on, int flag) {
    string temp;
    if(flag == 0){
        temp += on->getChildren()[0]->accept(this);
        temp += on->getChildren()[1]->accept(this);
        temp += "or\n";
        ligneCourante++;
    }else if(flag==2){
        temp += on->getChildren()[0]->accept(this, 2);
        temp += on->getChildren()[1]->accept(this, 2);
        temp += "1";
    }
    return temp;
}

string VisitComp::visit(PlusNode* pn, int flag) {
    string temp;
    if(flag == 0){
        temp += pn->getChildren()[0]->accept(this);
        temp += pn->getChildren()[1]->accept(this);
        temp += "add\n";
        ligneCourante++;
    }else if(flag==2){
        temp += pn->getChildren()[0]->accept(this, 2);
        temp += pn->getChildren()[1]->accept(this, 2);
        temp += "1";
    }
    return temp;
}

string VisitComp::visit(ReturnNode* rn, int flag) {
    string temp;
    
    if(flag == 0) {
    	temp += rn->getChildren()[0]->accept(this);
    } else if (flag == 2) {
    	temp += rn->getChildren()[0]->accept(this, 2);
    }
    
    return temp;
}

string VisitComp::visit(SumNode* sn, int flag) {
    string temp;
    if(flag == 0){
        if(sn->getChildren()[0]->getLabel() == "binaryarray") {
            temp += sn->getChildren()[0]->getChildren()[1]->accept(this);
            temp += sn->getChildren()[1]->accept(this);
            temp += "ainc(";
            temp += sn->getChildren()[0]->getChildren()[0]->getChildren()[0]->getLabel() + ")\n";
        } else {
            temp += sn->getChildren()[1]->accept(this);
            temp += "inc(";
            temp += sn->getChildren()[0]->getChildren()[0]->getLabel() + ")\n";
        }
        ligneCourante++;
    }else if(flag==2){
        if(sn->getChildren()[0]->getLabel() == "binaryarray") {
            temp += sn->getChildren()[0]->getChildren()[1]->accept(this, 2);
            temp += sn->getChildren()[1]->accept(this, 2);
            temp += "1";
        } else {
            temp += sn->getChildren()[1]->accept(this, 2);
            temp += "1";
        }
    }
    return temp;
}

string VisitComp::visit(TernaryArrayNode* tan, int flag) {
    string temp;
    if(flag == 0) {
        temp += tan->getChildren()[2]->accept(this);
        temp += "newarray(" + tan->getChildren()[1]->getChildren()[0]->getLabel() + ",";
        temp += tan->getChildren()[0]->accept(this, 0) + ")\n";
        ligneCourante++;
    }else if(flag ==1){
        temp += "swap\npop\n";
        ligneCourante++;
        ligneCourante++;
    }else if(flag == 2) {
        temp += tan->getChildren()[2]->accept(this, 2);
        temp += "1";
    }else if(flag == 3){
        temp += "11";
    }
    return temp;
}

string VisitComp::visit(TimesNode* tn, int flag) {
    string temp;
    if(flag == 0){
        temp += tn->getChildren()[0]->accept(this);
        temp += tn->getChildren()[1]->accept(this);
        temp += "mul\n";
        ligneCourante++;
    }else if(flag==2){
        temp += tn->getChildren()[0]->accept(this, 2);
        temp += tn->getChildren()[1]->accept(this, 2);
        temp += "1";
    }
    return temp;
}

string VisitComp::visit(UnaryMinusNode* umn, int flag) {
    string temp;
    if(flag == 0){
        temp += umn->getChildren()[0]->accept(this);
        temp += "neg\n";
        ligneCourante++;
    }else if(flag==2){
        temp += umn->getChildren()[0]->accept(this, 2);
        temp += "1";
    }
    return temp;
}

string VisitComp::visit(VarNode* v, int flag) {
    string temp;
    if(flag == 0){
        if(v->getChildren()[2]->getChildren() != NULL){
            temp+=v->getChildren()[2]->accept(this);
            //ANCIENNE VERSION temp+="push("+v->getChildren()[2]->getChildren()[0]->accept(this)+")\n";
        }else{
            temp += "push(0)\n";
            ligneCourante++;
        }
        temp += "new(";
        temp += v->getChildren()[1]->getChildren()[0]->getLabel() + ",";
        temp += v->getChildren()[0]->accept(this) + ",";
        temp += "var,";
        temp += "0)\n";
        ligneCourante++;
    }else if(flag == 1){
        temp += "swap\npop\n";
        ligneCourante++;
        ligneCourante++;
    }else if(flag==2){
        if(v->getChildren()[2]->getChildren() != NULL){
            temp += v->getChildren()[2]->accept(this, 2);
        } else {
            temp += "1";
        }
        temp += "1";
    }else if(flag == 3){
        temp += "11";
    }
    return temp;
}

string VisitComp::visit(VarsNode* v, int flag) {
    string temp;
    if(flag == 0){
        if(v->getLabel() != ""){
            temp = v->getChildren()[0]->accept(this);
            temp += v->getChildren()[1]->accept(this);
        }
    }else if(flag == 1){
        temp += v->getChildren()[0]->accept(this, 1);
        temp += v->getChildren()[1]->accept(this, 1);
    }else if(flag==2){
        temp += v->getChildren()[0]->accept(this, 2);
        temp += v->getChildren()[1]->accept(this, 2);
    }else if(flag == 3){
        temp += v->getChildren()[0]->accept(this, 3);
        temp += v->getChildren()[1]->accept(this, 3);
    }
    return temp;
}

string VisitComp::visit(WhileNode* wn, int flag) {
    string temp;
    int nbLigne;
    int res;
    int begin = ligneCourante;
    if(flag == 0) {
        temp += wn->getChildren()[0]->accept(this);
        temp += "not\n";
        ligneCourante++;

        nbLigne=ligneCourante;
        res = wn->getChildren()[1]->accept(this, 2).size();
        res+=2;
        nbLigne += res;

        string result;
        ostringstream convert;
        convert << nbLigne;
        result = convert.str();

        temp += "if("+result;
        temp += ")\n";
        ligneCourante++;

        temp += wn->getChildren()[1]->accept(this);

        string result2;
        ostringstream convert2;
        convert2 << begin;
        result2 = convert2.str();
        temp += "goto(" + result2;
        temp += ")\n";
        ligneCourante++;

    }else if(flag ==2){
        temp += "111";
        temp += wn->getChildren()[0]->accept(this, 2);
        temp += wn->getChildren()[1]->accept(this, 2);
    }
    return temp;
}
