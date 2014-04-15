/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "parser.y"

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

    int errorsCounter = 0;



/* Line 268 of yacc.c  */
#line 95 "parser.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CLASS = 258,
     FINAL = 259,
     MAIN = 260,
     IF = 261,
     ELSE = 262,
     WHILE = 263,
     TRUE = 264,
     FALSE = 265,
     RETURN = 266,
     VOID = 267,
     INT = 268,
     BOOLEAN = 269,
     OTHER = 270,
     EQUAL = 271,
     PLUS_EQUAL = 272,
     INC = 273,
     NOT = 274,
     AND = 275,
     OR = 276,
     EQUAL_EQUAL = 277,
     GREATER = 278,
     PLUS = 279,
     MINUS = 280,
     TIMES = 281,
     DIV = 282,
     O_C_BRACE = 283,
     C_C_BRACE = 284,
     SEMICOLON = 285,
     O_S_BRACKET = 286,
     C_S_BRACKET = 287,
     O_BRACKET = 288,
     C_BRACKET = 289,
     COMMA = 290,
     IDENTIFIER = 291,
     NUMBER = 292
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 24 "parser.y"

    int ival;
    const char* sval;
    Node* nval;
    ClassNode* cnval;



/* Line 293 of yacc.c  */
#line 177 "parser.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 189 "parser.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   152

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNRULES -- Number of states.  */
#define YYNSTATES  128

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,    12,    13,    15,    19,    20,    22,
      24,    25,    29,    30,    34,    40,    45,    48,    49,    59,
      65,    66,    70,    72,    73,    76,    80,    81,    85,    89,
      92,    93,    94,   101,   104,   114,   120,   128,   129,   133,
     135,   136,   139,   143,   147,   149,   153,   157,   159,   163,
     167,   170,   172,   176,   180,   182,   184,   189,   191,   193,
     195,   199,   201,   206,   208,   210,   212
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      39,     0,    -1,    40,    -1,     3,    41,    28,    42,    48,
      29,    -1,    -1,    36,    -1,    43,    30,    42,    -1,    -1,
      45,    -1,    47,    -1,    -1,    45,    30,    44,    -1,    -1,
      62,    41,    46,    -1,    62,    41,    31,    56,    32,    -1,
       4,    63,    41,    46,    -1,    16,    56,    -1,    -1,    62,
      41,    33,    49,    34,    28,    44,    51,    29,    -1,     5,
      28,    44,    51,    29,    -1,    -1,    50,    35,    49,    -1,
      50,    -1,    -1,    63,    41,    -1,    52,    30,    51,    -1,
      -1,    61,    16,    56,    -1,    61,    17,    56,    -1,    61,
      18,    -1,    -1,    -1,    41,    33,    53,    55,    54,    34,
      -1,    11,    56,    -1,     6,    56,    28,    51,    29,     7,
      28,    51,    29,    -1,     6,    56,    28,    51,    29,    -1,
       8,    33,    56,    34,    28,    51,    29,    -1,    -1,    56,
      35,    55,    -1,    56,    -1,    -1,    19,    57,    -1,    56,
      20,    57,    -1,    56,    21,    57,    -1,    57,    -1,    57,
      22,    58,    -1,    57,    23,    58,    -1,    58,    -1,    58,
      24,    59,    -1,    58,    25,    59,    -1,    25,    59,    -1,
      59,    -1,    59,    26,    60,    -1,    59,    27,    60,    -1,
      60,    -1,    61,    -1,    41,    33,    55,    34,    -1,     9,
      -1,    10,    -1,    37,    -1,    33,    56,    34,    -1,    41,
      -1,    41,    31,    56,    32,    -1,    12,    -1,    63,    -1,
      13,    -1,    14,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    46,    46,    55,    60,    67,    75,    79,    86,    87,
      88,    95,    99,   106,   110,   114,   121,   122,   129,   136,
     140,   147,   151,   156,   163,   170,   174,   181,   185,   189,
     193,   193,   193,   197,   201,   205,   209,   213,   220,   224,
     229,   236,   240,   244,   248,   252,   256,   260,   264,   268,
     272,   276,   280,   284,   288,   292,   293,   297,   301,   305,
     310,   314,   315,   322,   326,   330,   334
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CLASS", "FINAL", "MAIN", "IF", "ELSE",
  "WHILE", "TRUE", "FALSE", "RETURN", "VOID", "INT", "BOOLEAN", "OTHER",
  "EQUAL", "PLUS_EQUAL", "INC", "NOT", "AND", "OR", "EQUAL_EQUAL",
  "GREATER", "PLUS", "MINUS", "TIMES", "DIV", "O_C_BRACE", "C_C_BRACE",
  "SEMICOLON", "O_S_BRACKET", "C_S_BRACKET", "O_BRACKET", "C_BRACKET",
  "COMMA", "IDENTIFIER", "NUMBER", "$accept", "start", "classe", "ident",
  "decls", "decl", "vars", "var", "vexp", "methode", "methmain", "entetes",
  "entete", "instrs", "instr", "$@1", "$@2", "listexp", "exp", "exp1",
  "exp2", "terme", "fact", "ident1", "typemeth", "type", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    38,    39,    40,    40,    41,    42,    42,    43,    43,
      43,    44,    44,    45,    45,    45,    46,    46,    47,    48,
      48,    49,    49,    49,    50,    51,    51,    52,    52,    52,
      53,    54,    52,    52,    52,    52,    52,    52,    55,    55,
      55,    56,    56,    56,    56,    57,    57,    57,    58,    58,
      58,    58,    59,    59,    59,    60,    60,    60,    60,    60,
      60,    61,    61,    62,    62,    63,    63
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     6,     0,     1,     3,     0,     1,     1,
       0,     3,     0,     3,     5,     4,     2,     0,     9,     5,
       0,     3,     1,     0,     2,     3,     0,     3,     3,     2,
       0,     0,     6,     2,     9,     5,     7,     0,     3,     1,
       0,     2,     3,     3,     1,     3,     3,     1,     3,     3,
       2,     1,     3,     3,     1,     1,     4,     1,     1,     1,
       3,     1,     4,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     2,     5,     0,     1,     7,     0,    63,
      65,    66,    20,     0,     8,     9,     0,    64,     0,     0,
       0,     7,    17,    17,    12,     3,     6,     0,     0,    23,
      13,    15,    26,     0,     0,    57,    58,     0,     0,     0,
      59,    61,    16,    44,    47,    51,    54,    55,     0,     0,
      22,     0,     0,     0,     0,    61,     0,     0,     0,    12,
      17,    41,    50,     0,     0,    40,     0,     0,     0,     0,
       0,     0,     0,     0,    14,     0,    23,    24,     0,     0,
      33,    30,    19,    26,     0,     0,    29,    11,    60,     0,
       0,    39,    42,    43,    45,    46,    48,    49,    52,    53,
      12,    21,    26,     0,    40,    25,    27,    28,    62,    56,
      40,    26,     0,     0,    31,    38,     0,    35,    26,     0,
      18,     0,     0,    32,    26,    36,     0,    34
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    41,    12,    13,    32,    33,    30,    15,
      20,    49,    50,    56,    57,   104,   119,    90,    91,    43,
      44,    45,    46,    47,    34,    17
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -89
static const yytype_int16 yypact[] =
{
      63,    43,    83,   -89,   -89,    84,   -89,    90,    34,   -89,
     -89,   -89,   111,    61,   -89,   -89,    43,   -89,    43,    91,
      98,    90,    -7,   116,   101,   -89,   -89,    48,    48,    34,
     -89,   -89,    19,   103,    43,   -89,   -89,    53,    59,    48,
     -89,     6,    33,    99,    75,    82,   -89,   -89,    56,   100,
     102,    43,    48,   105,    48,    41,   106,   109,   108,   101,
     -10,    99,    82,    22,    48,    48,    53,    53,    53,    53,
      59,    59,    59,    59,   -89,   112,    34,   -89,    -8,    48,
      33,   -89,   -89,    19,    48,    48,   -89,   -89,   -89,    86,
     107,    40,    99,    99,    75,    75,    82,    82,   -89,   -89,
     101,   -89,    19,    77,    48,   -89,    33,    33,   -89,   -89,
      48,    19,   113,   115,   -89,   -89,   117,   129,    19,   110,
     -89,   119,   120,   -89,    19,   -89,   121,   -89
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -89,   -89,   -89,    -1,   124,   -89,   -54,    -3,   125,   -89,
     -89,    76,   -89,   -73,   -89,   -89,   -89,   -88,   -20,   -26,
      60,   -35,    58,   -31,     7,    -6
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -38
static const yytype_int8 yytable[] =
{
       5,    58,    18,    62,    14,    87,    27,    42,    48,    27,
     105,    61,    66,    67,    16,    22,   114,    23,    14,    63,
     102,    28,   115,    51,    28,    52,    29,    53,    16,   112,
      54,    55,    78,    60,    80,    96,    97,    64,   116,    65,
      92,    93,    66,    67,    89,   122,   111,    10,    11,   -37,
      77,   126,    58,    66,    67,     4,    88,    35,    36,   103,
      66,    67,    35,    36,   106,   107,     1,    37,    35,    36,
      51,    58,    64,    38,    81,   110,    66,    67,    38,     4,
      58,    39,    55,     6,     4,    40,    39,    58,    74,     4,
      40,    21,    39,    58,     8,     4,    40,    66,    67,    70,
      71,    55,     9,    10,    11,     8,    66,    67,    72,    73,
      55,   113,     7,     9,    10,    11,    19,    55,   108,    24,
     -10,    68,    69,    55,    84,    85,    86,    25,    94,    95,
      98,    99,    27,    59,    75,    82,   121,    76,    79,    83,
     100,   109,   117,   118,   123,    26,   120,   124,    31,   125,
     127,     0,   101
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-89))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
       1,    32,     8,    38,     7,    59,    16,    27,    28,    16,
      83,    37,    20,    21,     7,    16,   104,    18,    21,    39,
      28,    31,   110,    29,    31,     6,    33,     8,    21,   102,
      11,    32,    52,    34,    54,    70,    71,    31,   111,    33,
      66,    67,    20,    21,    64,   118,   100,    13,    14,    30,
      51,   124,    83,    20,    21,    36,    34,     9,    10,    79,
      20,    21,     9,    10,    84,    85,     3,    19,     9,    10,
      76,   102,    31,    25,    33,    35,    20,    21,    25,    36,
     111,    33,    83,     0,    36,    37,    33,   118,    32,    36,
      37,    30,    33,   124,     4,    36,    37,    20,    21,    24,
      25,   102,    12,    13,    14,     4,    20,    21,    26,    27,
     111,    34,    28,    12,    13,    14,     5,   118,    32,    28,
      30,    22,    23,   124,    16,    17,    18,    29,    68,    69,
      72,    73,    16,    30,    34,    29,     7,    35,    33,    30,
      28,    34,    29,    28,    34,    21,    29,    28,    23,    29,
      29,    -1,    76
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    39,    40,    36,    41,     0,    28,     4,    12,
      13,    14,    42,    43,    45,    47,    62,    63,    63,     5,
      48,    30,    41,    41,    28,    29,    42,    16,    31,    33,
      46,    46,    44,    45,    62,     9,    10,    19,    25,    33,
      37,    41,    56,    57,    58,    59,    60,    61,    56,    49,
      50,    63,     6,     8,    11,    41,    51,    52,    61,    30,
      41,    57,    59,    56,    31,    33,    20,    21,    22,    23,
      24,    25,    26,    27,    32,    34,    35,    41,    56,    33,
      56,    33,    29,    30,    16,    17,    18,    44,    34,    56,
      55,    56,    57,    57,    58,    58,    59,    59,    60,    60,
      28,    49,    28,    56,    53,    51,    56,    56,    32,    34,
      35,    44,    51,    34,    55,    55,    51,    29,    28,    54,
      29,     7,    51,    34,    28,    29,    51,    29
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 46 "parser.y"
    {
                cout << "Compte des erreurs : " << errorsCounter << endl;
                cout << "Génération de l'arbre de syntaxe abstraite terminée." << endl;
                cout << "Appel à la fonction de callback..." << endl;
                MJJProgram::onAbstractSyntaxTreeCompleted((yyvsp[(1) - (1)].cnval));
        }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 55 "parser.y"
    {
            cout << "Génération de l'arbre de syntaxe abstraite..." << endl;
            ClassNode* cn = new ClassNode((yyvsp[(2) - (6)].nval), (yyvsp[(4) - (6)].nval), (yyvsp[(5) - (6)].nval));
            (yyval.cnval) = cn;
        }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 60 "parser.y"
    {
            yyerror("La déclaration d'une classe était attendue ici.");
            (yyval.cnval) = NULL;
        }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 67 "parser.y"
    {
            LeafNode* ln = new LeafNode((yyvsp[(1) - (1)].sval));
            IdentNode* in = new IdentNode(ln);
            (yyval.nval) = in;
        }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 75 "parser.y"
    {
            DeclsNode* dsn = new DeclsNode((yyvsp[(1) - (3)].nval), (yyvsp[(3) - (3)].nval));
            (yyval.nval) = dsn;
        }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 79 "parser.y"
    {
            LeafNode* ln = new LeafNode("");
            (yyval.nval) = ln;
        }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 86 "parser.y"
    {(yyval.nval) = (yyvsp[(1) - (1)].nval);}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 87 "parser.y"
    {(yyval.nval) = (yyvsp[(1) - (1)].nval);}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 88 "parser.y"
    {
            yyerror("Une déclaration était attendue ici.");
            (yyval.nval) = NULL;
        }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 95 "parser.y"
    {
            VarsNode* vsn = new VarsNode((yyvsp[(1) - (3)].nval), (yyvsp[(3) - (3)].nval));
            (yyval.nval) = vsn;
        }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 99 "parser.y"
    {
            LeafNode* ln = new LeafNode("");
            (yyval.nval) = ln;
        }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 106 "parser.y"
    {
            VarNode* vn = new VarNode((yyvsp[(1) - (3)].nval), (yyvsp[(2) - (3)].nval), (yyvsp[(3) - (3)].nval));
            (yyval.nval) = vn;
        }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 110 "parser.y"
    {
            TernaryArrayNode* tan = new TernaryArrayNode((yyvsp[(1) - (5)].nval), (yyvsp[(2) - (5)].nval), (yyvsp[(4) - (5)].nval));
            (yyval.nval) = tan;
        }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 114 "parser.y"
    {
            CstNode* cstn = new CstNode((yyvsp[(2) - (4)].nval), (yyvsp[(3) - (4)].nval), (yyvsp[(4) - (4)].nval));
            (yyval.nval) = cstn;
        }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 121 "parser.y"
    {(yyval.nval) = (yyvsp[(2) - (2)].nval);}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 122 "parser.y"
    {
            LeafNode* ln = new LeafNode("");
            (yyval.nval) = ln;
        }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 129 "parser.y"
    {
            MethodNode* mdn = new MethodNode((yyvsp[(1) - (9)].nval), (yyvsp[(2) - (9)].nval), (yyvsp[(4) - (9)].nval), (yyvsp[(7) - (9)].nval), (yyvsp[(8) - (9)].nval));
            (yyval.nval) = mdn;
        }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 136 "parser.y"
    {
            MainNode* mn = new MainNode((yyvsp[(3) - (5)].nval), (yyvsp[(4) - (5)].nval));
            (yyval.nval) = mn;
        }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 140 "parser.y"
    {
            yyerror("La méthode main n'a pas été déclarée dans la classe.");
            (yyval.nval) = NULL;
        }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 147 "parser.y"
    {
            HeadersNode* hsn = new HeadersNode((yyvsp[(1) - (3)].nval), (yyvsp[(3) - (3)].nval));
            (yyval.nval) = hsn;
        }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 151 "parser.y"
    {
            LeafNode* ln = new LeafNode("");
            HeadersNode* hsn = new HeadersNode((yyvsp[(1) - (1)].nval), ln);
            (yyval.nval) = hsn;
        }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 156 "parser.y"
    {
            LeafNode* ln = new LeafNode("");
            (yyval.nval) = ln;
        }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 163 "parser.y"
    {
            HeaderNode* hn = new HeaderNode((yyvsp[(1) - (2)].nval), (yyvsp[(2) - (2)].nval));
            (yyval.nval) = hn;
        }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 170 "parser.y"
    {
            InstrsNode* insn = new InstrsNode((yyvsp[(1) - (3)].nval), (yyvsp[(3) - (3)].nval));
            (yyval.nval) = insn;
        }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 174 "parser.y"
    {
            LeafNode* ln = new LeafNode("");
            (yyval.nval) = ln;
        }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 181 "parser.y"
    {
            AssignmentNode* an = new AssignmentNode((yyvsp[(1) - (3)].nval), (yyvsp[(3) - (3)].nval));
            (yyval.nval) = an;
        }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 185 "parser.y"
    {
            SumNode* sn = new SumNode((yyvsp[(1) - (3)].nval), (yyvsp[(3) - (3)].nval));
            (yyval.nval) = sn;
        }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 189 "parser.y"
    {
            IncrementNode* incn = new IncrementNode((yyvsp[(1) - (2)].nval));
            (yyval.nval) = incn;
        }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 193 "parser.y"
    {cout << "OK" << endl;}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 193 "parser.y"
    {cout << "DONE" << endl;}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 193 "parser.y"
    {
            CallINode* cin = new CallINode((yyvsp[(1) - (6)].nval), (yyvsp[(4) - (6)].nval));
            (yyval.nval) = cin;
        }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 197 "parser.y"
    {
            ReturnNode* rn = new ReturnNode((yyvsp[(2) - (2)].nval));
            (yyval.nval) = rn;
        }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 201 "parser.y"
    {
            IfElseNode* ifn = new IfElseNode((yyvsp[(2) - (9)].nval), (yyvsp[(4) - (9)].nval), (yyvsp[(8) - (9)].nval));
            (yyval.nval) = ifn;
        }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 205 "parser.y"
    {
            IfNode* ifn = new IfNode((yyvsp[(2) - (5)].nval), (yyvsp[(4) - (5)].nval));
            (yyval.nval) = ifn;
        }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 209 "parser.y"
    {
            WhileNode* wn = new WhileNode((yyvsp[(3) - (7)].nval), (yyvsp[(6) - (7)].nval));
            (yyval.nval) = wn;
        }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 213 "parser.y"
    {
            yyerror("Une instruction était attendue ici.");
            (yyval.nval) = NULL;
        }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 220 "parser.y"
    {
            ExpListNode* eln = new ExpListNode((yyvsp[(1) - (3)].nval), (yyvsp[(3) - (3)].nval));
            (yyval.nval) = eln;
        }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 224 "parser.y"
    {
            LeafNode* ln = new LeafNode("");
            ExpListNode* eln = new ExpListNode((yyvsp[(1) - (1)].nval), ln);
            (yyval.nval) = eln;
        }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 229 "parser.y"
    {
            LeafNode* ln = new LeafNode("");
            (yyval.nval) = ln;
        }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 236 "parser.y"
    {
            NotNode* nn = new NotNode((yyvsp[(2) - (2)].nval));
            (yyval.nval) = nn;
        }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 240 "parser.y"
    {
            AndNode* andn = new AndNode((yyvsp[(1) - (3)].nval), (yyvsp[(3) - (3)].nval));
            (yyval.nval) = andn;
        }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 244 "parser.y"
    {
            OrNode* on = new OrNode((yyvsp[(1) - (3)].nval), (yyvsp[(3) - (3)].nval));
            (yyval.nval) = on;
        }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 248 "parser.y"
    {(yyval.nval) = (yyvsp[(1) - (1)].nval);}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 252 "parser.y"
    {
            EqualityNode* en = new EqualityNode((yyvsp[(1) - (3)].nval), (yyvsp[(3) - (3)].nval));
            (yyval.nval) = en;
        }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 256 "parser.y"
    {
            GreaterThanNode* gtn = new GreaterThanNode((yyvsp[(1) - (3)].nval), (yyvsp[(3) - (3)].nval));
            (yyval.nval) = gtn;
        }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 260 "parser.y"
    {(yyval.nval) = (yyvsp[(1) - (1)].nval);}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 264 "parser.y"
    {
            PlusNode* pn = new PlusNode((yyvsp[(1) - (3)].nval), (yyvsp[(3) - (3)].nval));
            (yyval.nval) = pn;
        }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 268 "parser.y"
    {
            BinaryMinusNode* bmn = new BinaryMinusNode((yyvsp[(1) - (3)].nval), (yyvsp[(3) - (3)].nval));
            (yyval.nval) = bmn;
        }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 272 "parser.y"
    {
            UnaryMinusNode* umn = new UnaryMinusNode((yyvsp[(2) - (2)].nval));
            (yyval.nval) = umn;
        }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 276 "parser.y"
    {(yyval.nval) = (yyvsp[(1) - (1)].nval);}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 280 "parser.y"
    {
            TimesNode* tn = new TimesNode((yyvsp[(1) - (3)].nval), (yyvsp[(3) - (3)].nval));
            (yyval.nval) = tn;
        }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 284 "parser.y"
    {
            DivideNode* dn = new DivideNode((yyvsp[(1) - (3)].nval), (yyvsp[(3) - (3)].nval));
            (yyval.nval) = dn;
        }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 288 "parser.y"
    {(yyval.nval) = (yyvsp[(1) - (1)].nval);}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 292 "parser.y"
    {(yyval.nval) = (yyvsp[(1) - (1)].nval);}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 293 "parser.y"
    {
            CallENode* cen = new CallENode((yyvsp[(1) - (4)].nval), (yyvsp[(3) - (4)].nval));
            (yyval.nval) = cen;
        }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 297 "parser.y"
    {
            LeafNode* ln = new LeafNode("true");
            (yyval.nval) = ln;
        }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 301 "parser.y"
    {
            LeafNode* ln = new LeafNode("false");
            (yyval.nval) = ln;
        }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 305 "parser.y"
    {
            LeafNode* ln = new LeafNode((yyvsp[(1) - (1)].sval));
            NumberNode* nn = new NumberNode(ln);
            (yyval.nval) = nn;
        }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 310 "parser.y"
    {(yyval.nval) = (yyvsp[(2) - (3)].nval);}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 314 "parser.y"
    {(yyval.nval) = (yyvsp[(1) - (1)].nval);}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 315 "parser.y"
    {
            BinaryArrayNode* ban = new BinaryArrayNode((yyvsp[(1) - (4)].nval), (yyvsp[(3) - (4)].nval));
            (yyval.nval) = ban;
        }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 322 "parser.y"
    {
            LeafNode* ln = new LeafNode("void");
            (yyval.nval) = ln;
        }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 326 "parser.y"
    {(yyval.nval) = (yyvsp[(1) - (1)].nval);}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 330 "parser.y"
    {
            LeafNode* ln = new LeafNode("int");
            (yyval.nval) = ln;
        }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 334 "parser.y"
    {
            LeafNode* ln = new LeafNode("boolean");
            (yyval.nval) = ln;
        }
    break;



/* Line 1806 of yacc.c  */
#line 2145 "parser.cpp"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 340 "parser.y"


