%{
    #include <cstdio>
    #include <iostream>
    #include <sstream>
    #include <string>
    #include <cstring>
    #include "AllNodes.h"
    #include "MJJProgram.h"

    #define YYDEBUG 1

    extern "C" int yylex();
    extern "C" int yyparse();
    extern "C" FILE *yyin;

    using namespace std;

    void yyerror(const char *s);

%}

%union{
    int ival;
    const char* sval;
    Node* nval;
    ClassNode* cnval;
}

%token CLASS FINAL MAIN IF ELSE WHILE TRUE FALSE RETURN
%token VOID INT BOOLEAN OTHER
%token EQUAL PLUS_EQUAL INC NOT AND OR EQUAL_EQUAL GREATER PLUS MINUS TIMES DIV
%token O_C_BRACE C_C_BRACE SEMICOLON O_S_BRACKET C_S_BRACKET O_BRACKET C_BRACKET COMMA
%token <sval> IDENTIFIER NUMBER

%type <nval> ident decls decl vars var vexp methode
%type <nval> methmain entetes entete instrs instr listexp
%type <nval> exp exp1 exp2 terme fact ident1 typemeth type
%type <cnval> classe


%%

start:
        classe {
                cout << "Génération de l'arbre de syntaxe abstraite terminée." << endl;
                cout << "Appel à la fonction de callback..." << endl;
                MJJProgram::onAbstractSyntaxTreeCompleted($1);
        }
    ;

classe:
        CLASS ident O_C_BRACE decls methmain C_C_BRACE {
            cout << "Génération de l'arbre de syntaxe abstraite..." << endl;
            ClassNode* cn = new ClassNode($2, $4, $5);
            $$ = cn;
        }
    ;

ident:
        IDENTIFIER {
            LeafNode* ln = new LeafNode($1);
            IdentNode* in = new IdentNode(ln);
            $$ = in;
        }
    ;

decls:
        decl SEMICOLON decls {
            DeclsNode* dsn = new DeclsNode($1, $3);
            $$ = dsn;
        }
    |   {
            LeafNode* ln = new LeafNode("");
            $$ = ln;
        }
    ; 

decl:
        var {$$ = $1;}
    |   methode {$$ = $1;}
    ;

vars:
        var SEMICOLON vars {
            VarsNode* vsn = new VarsNode($1, $3);
            $$ = vsn;
        }
    |   {
            LeafNode* ln = new LeafNode("");
            $$ = ln;
        }
    ;

var:
        typemeth ident vexp {
            VarNode* vn = new VarNode($1, $2, $3);
            $$ = vn;
        }
    |   typemeth ident O_S_BRACKET exp C_S_BRACKET {
            TernaryArrayNode* tan = new TernaryArrayNode($1, $2, $4);
            $$ = tan;
        }
    |   FINAL type ident vexp {
            CstNode* cstn = new CstNode($2, $3, $4);
            $$ = cstn;
        }
    ;

vexp:
        EQUAL exp {$$ = $2;}
    |   {
            LeafNode* ln = new LeafNode("");
            $$ = ln;
        }
    ;

methode:
        typemeth ident O_BRACKET entetes C_BRACKET O_C_BRACE vars instrs C_C_BRACE {
            MethodNode* mdn = new MethodNode($1, $2, $4, $7, $8);
            $$ = mdn;
        }
    ;

methmain:
        MAIN O_C_BRACE vars instrs C_C_BRACE {
            MainNode* mn = new MainNode($3, $4);
            $$ = mn;
        }
    ;

entetes:
        entete COMMA entetes {
            HeadersNode* hsn = new HeadersNode($1, $3);
            $$ = hsn;
        }
    |   entete {
            LeafNode* ln = new LeafNode("");
            HeadersNode* hsn = new HeadersNode($1, ln);
            $$ = hsn;
        }
    |   {
            LeafNode* ln = new LeafNode("");
            $$ = ln;
        }
    ;

entete:
        type ident {
            HeaderNode* hn = new HeaderNode($1, $2);
            $$ = hn;
        }
    ;

instrs:
        instr SEMICOLON instrs {
            InstrsNode* insn = new InstrsNode($1, $3);
            $$ = insn;
        }
    |   {
            LeafNode* ln = new LeafNode("");
            $$ = ln;
        }
    ;

instr:
        ident1 EQUAL exp {
            AssignmentNode* an = new AssignmentNode($1, $3);
            $$ = an;
        }
    |   ident1 PLUS_EQUAL exp {
            SumNode* sn = new SumNode($1, $3);
            $$ = sn;
        }
    |   ident1 INC {
            IncrementNode* incn = new IncrementNode($1);
            $$ = incn;
        }
    |   ident O_BRACKET listexp C_BRACKET {
            CallINode* cin = new CallINode($1, $3);
            $$ = cin;
        }
    |   RETURN exp {
            ReturnNode* rn = new ReturnNode($2);
            $$ = rn;
        }
    |   IF exp O_C_BRACE instrs C_C_BRACE ELSE O_C_BRACE instrs C_C_BRACE {
            IfElseNode* ifn = new IfElseNode($2, $4, $8);
            $$ = ifn;
        }
    |   IF exp O_C_BRACE instrs C_C_BRACE {
            IfNode* ifn = new IfNode($2, $4);
            $$ = ifn;
        }
    |   WHILE O_BRACKET exp C_BRACKET O_C_BRACE instrs C_C_BRACE {
            WhileNode* wn = new WhileNode($3, $6);
            $$ = wn;
        }
    ;

listexp:
        exp COMMA listexp {
            ExpListNode* eln = new ExpListNode($1, $3);
            $$ = eln;
        }
    |   exp {
            LeafNode* ln = new LeafNode("");
            ExpListNode* eln = new ExpListNode($1, ln);
            $$ = eln;
        }
    |   {
            LeafNode* ln = new LeafNode("");
            $$ = ln;
        }
    ;

exp:
        NOT exp1 {
            NotNode* nn = new NotNode($2);
            $$ = nn;
        }
    |   exp AND exp1 {
            AndNode* andn = new AndNode($1, $3);
            $$ = andn;
        }
    |   exp OR exp1 {
            OrNode* on = new OrNode($1, $3);
            $$ = on;
        }
    |   exp1 {$$ = $1;}
    ;

exp1:
        exp1 EQUAL_EQUAL exp2 {
            EqualityNode* en = new EqualityNode($1, $3);
            $$ = en;
        }
    |   exp1 GREATER exp2 {
            GreaterThanNode* gtn = new GreaterThanNode($1, $3);
            $$ = gtn;
        }
    |   exp2 {$$ = $1;}
    ;

exp2:
        exp2 PLUS terme {
            PlusNode* pn = new PlusNode($1, $3);
            $$ = pn;
        }
    |   exp2 MINUS terme {
            BinaryMinusNode* bmn = new BinaryMinusNode($1, $3);
            $$ = bmn;
        }
    |   MINUS terme {
            UnaryMinusNode* umn = new UnaryMinusNode($2);
            $$ = umn;
        }
    |   terme {$$ = $1;}
    ;

terme:
        terme TIMES fact {
            TimesNode* tn = new TimesNode($1, $3);
            $$ = tn;
        }
    |   terme DIV fact {
            DivideNode* dn = new DivideNode($1, $3);
            $$ = dn;
        }
    |   fact {$$ = $1;}
    ;

fact:
        ident1 {$$ = $1;}
    |   ident O_BRACKET listexp C_BRACKET {
            CallENode* cen = new CallENode($1, $3);
            $$ = cen;
        }
    |   TRUE {
            LeafNode* ln = new LeafNode("true");
            $$ = ln;
        }
    |   FALSE {
            LeafNode* ln = new LeafNode("false");
            $$ = ln;
        }
    |   NUMBER {
            LeafNode* ln = new LeafNode($1);
            NumberNode* nn = new NumberNode(ln);
            $$ = nn;
        }
    |   O_BRACKET exp C_BRACKET {$$ = $2;}

ident1:
        ident {$$ = $1;}
    |   ident O_S_BRACKET exp C_S_BRACKET {
            BinaryArrayNode* ban = new BinaryArrayNode($1, $3);
            $$ = ban;
        }
    ;

typemeth:
        VOID {
            LeafNode* ln = new LeafNode("void");
            $$ = ln;
        }
    |   type {$$ = $1;}
    ;

type:
        INT {
            LeafNode* ln = new LeafNode("int");
            $$ = ln;
        }
    |   BOOLEAN {
            LeafNode* ln = new LeafNode("boolean");
            $$ = ln;
        }
    ;

%%
