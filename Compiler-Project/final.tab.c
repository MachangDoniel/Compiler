
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

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

/* Line 189 of yacc.c  */
#line 1 "final.y"

	#include<stdio.h>
	#include<stdlib.h>
    #include<time.h>
	#include<math.h>
	#include<string.h>
	FILE *input, *output;

	int yylex(void);
	void yyerror(char *s);

    int totVars=0;
	//variable info;
	struct varStruct{
		char varName[25];
        char *cvar;
		int ivar;
		float fvar;
        double dvar;
        int varDataType;
	}vars[50];   

    //Finding index of a given variable

    int findVarIndex(char name[25]){
		int i;
		for(i=0; i<totVars; i++){
			if(!strcmp(vars[i].varName, name))  /// strcmp ret val 0 when strings equal
            {
				return i;
			}
		}
		return -1;
	}
    
    // Set data type of a var
    //from the struct structure

	void setDataType(int type){
		int i;
		for(i=0; i<totVars; i++){
			if(vars[i].varDataType == -9){
				vars[i].varDataType = type;
			}
		}
	}

    


/* Line 189 of yacc.c  */
#line 124 "final.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
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
     START = 258,
     INT = 259,
     CHAR = 260,
     FLOAT = 261,
     DOUBLE = 262,
     SWITCH = 263,
     CASE = 264,
     DEFAULT = 265,
     SORT = 266,
     SWAP = 267,
     COMBINATION = 268,
     PERMUTATION = 269,
     POW = 270,
     RANDOM = 271,
     SCAN = 272,
     IF = 273,
     ELIF = 274,
     ELSE = 275,
     WHILE = 276,
     SIN = 277,
     BACKS = 278,
     COS = 279,
     BACKC = 280,
     TAN = 281,
     BACKT = 282,
     LOG10 = 283,
     FACTOR = 284,
     ISPRIME = 285,
     OUTPUT = 286,
     REPEAT = 287,
     TO = 288,
     INC = 289,
     DEC = 290,
     MAX = 291,
     MIN = 292,
     ID = 293,
     NUM = 294,
     PLUS = 295,
     MINUS = 296,
     MULTI = 297,
     DIVI = 298,
     EQUALS = 299,
     NOTEQUAL = 300,
     GT = 301,
     GOE = 302,
     LT = 303,
     LOE = 304
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 51 "final.y"

    double var;
    char* varString;



/* Line 214 of yacc.c  */
#line 216 "final.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 228 "final.tab.c"

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
# if YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   222

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNRULES -- Number of states.  */
#define YYNSTATES  240

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      50,    51,     2,     2,    54,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    52,
       2,    56,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,     2,    55,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,     9,    12,    15,    18,    21,    24,
      27,    30,    33,    36,    39,    42,    45,    48,    51,    54,
      57,    60,    63,    69,    75,    87,    99,   109,   118,   119,
     124,   125,   129,   133,   137,   141,   145,   149,   158,   165,
     166,   171,   179,   185,   191,   199,   207,   215,   229,   237,
     243,   251,   259,   263,   265,   267,   269,   271,   275,   277,
     282,   284,   288,   292,   296,   300,   304,   306,   309,   312,
     315,   318,   321,   324,   327
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      58,     0,    -1,     3,    50,    59,    51,    -1,    -1,    81,
      59,    -1,    84,    59,    -1,    63,    59,    -1,    62,    59,
      -1,    67,    59,    -1,    78,    59,    -1,    60,    59,    -1,
      61,    59,    -1,    77,    59,    -1,    70,    59,    -1,    72,
      59,    -1,    71,    59,    -1,    80,    59,    -1,    79,    59,
      -1,    73,    59,    -1,    74,    59,    -1,    75,    59,    -1,
      76,    59,    -1,    17,    50,    38,    51,    52,    -1,    21,
      50,    39,    51,    52,    -1,    32,    53,    39,    54,    39,
      55,    34,    39,    50,    59,    51,    -1,    32,    53,    39,
      54,    39,    55,    35,    39,    50,    59,    51,    -1,    18,
      50,    66,    51,    50,    59,    51,    64,    65,    -1,    19,
      50,    66,    51,    50,    59,    51,    64,    -1,    -1,    20,
      50,    59,    51,    -1,    -1,    85,    44,    85,    -1,    85,
      45,    85,    -1,    85,    46,    85,    -1,    85,    47,    85,
      -1,    85,    48,    85,    -1,    85,    49,    85,    -1,     8,
      50,    38,    51,    53,    68,    69,    55,    -1,     9,    39,
      53,    59,    55,    68,    -1,    -1,    10,    53,    59,    55,
      -1,    16,    50,    39,    54,    39,    51,    52,    -1,    30,
      50,    39,    51,    52,    -1,    29,    50,    39,    51,    52,
      -1,    13,    50,    39,    54,    39,    51,    52,    -1,    14,
      50,    39,    54,    39,    51,    52,    -1,    12,    50,    39,
      54,    39,    51,    52,    -1,    11,    50,    39,    54,    39,
      54,    39,    54,    39,    54,    39,    51,    52,    -1,    15,
      50,    39,    54,    39,    51,    52,    -1,    31,    50,    38,
      51,    52,    -1,    36,    50,    38,    54,    38,    51,    52,
      -1,    37,    50,    38,    54,    38,    51,    52,    -1,    82,
      83,    52,    -1,     5,    -1,     6,    -1,     4,    -1,     7,
      -1,    83,    54,    38,    -1,    38,    -1,    38,    56,    85,
      52,    -1,    86,    -1,    86,    40,    86,    -1,    86,    41,
      86,    -1,    86,    42,    86,    -1,    86,    43,    86,    -1,
      50,    86,    51,    -1,    39,    -1,    22,    86,    -1,    23,
      86,    -1,    24,    86,    -1,    25,    86,    -1,    26,    86,
      -1,    27,    86,    -1,    28,    86,    -1,    38,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    72,    72,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    98,   106,   118,   131,   147,   158,   168,   170,
     173,   179,   187,   195,   203,   211,   219,   229,   234,   237,
     239,   251,   259,   278,   295,   311,   324,   333,   361,   371,
     391,   423,   463,   468,   469,   470,   471,   474,   480,   491,
     513,   515,   516,   517,   518,   527,   528,   529,   530,   531,
     532,   533,   534,   535,   537
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "START", "INT", "CHAR", "FLOAT",
  "DOUBLE", "SWITCH", "CASE", "DEFAULT", "SORT", "SWAP", "COMBINATION",
  "PERMUTATION", "POW", "RANDOM", "SCAN", "IF", "ELIF", "ELSE", "WHILE",
  "SIN", "BACKS", "COS", "BACKC", "TAN", "BACKT", "LOG10", "FACTOR",
  "ISPRIME", "OUTPUT", "REPEAT", "TO", "INC", "DEC", "MAX", "MIN", "ID",
  "NUM", "PLUS", "MINUS", "MULTI", "DIVI", "EQUALS", "NOTEQUAL", "GT",
  "GOE", "LT", "LOE", "'('", "')'", "';'", "'{'", "','", "'}'", "'='",
  "$accept", "program", "statement", "scanFunc", "whileFunc", "forLoop",
  "condition", "elif", "lastElse", "boolianExpr", "switchCase",
  "caseNumber", "defaultOption", "randFunc", "primeFunc", "factorialFunc",
  "combfuncn", "perfuncn", "swap", "sort", "powerFunc", "printFunc",
  "maxFunc", "minFunc", "declaration", "TYPE", "ID1", "assignation",
  "expression", "e", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
      40,    41,    59,   123,    44,   125,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    60,    61,    62,    62,    63,    64,    64,    65,
      65,    66,    66,    66,    66,    66,    66,    67,    68,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    82,    82,    82,    83,    83,    84,
      85,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     5,     5,    11,    11,     9,     8,     0,     4,
       0,     3,     3,     3,     3,     3,     3,     8,     6,     0,
       4,     7,     5,     5,     7,     7,     7,    13,     7,     5,
       7,     7,     3,     1,     1,     1,     1,     3,     1,     4,
       1,     3,     3,     3,     3,     3,     1,     2,     2,     2,
       2,     2,     2,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     1,    55,    53,    54,    56,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,    10,    11,     7,     6,     8,    13,
      15,    14,    18,    19,    20,    21,    12,     9,    17,    16,
       4,    58,     0,     5,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
      66,     0,     0,     0,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    52,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,    72,    73,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
      57,    39,     0,     0,     0,     0,     0,     0,    22,    65,
       3,    31,    32,    33,    34,    35,    36,    61,    62,    63,
      64,    23,    43,    42,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46,    44,    45,    48,    41,    28,
       0,     0,    50,    51,     3,     3,    37,     0,     0,    30,
       0,     0,     0,     0,     0,     0,     0,    26,     3,     3,
      39,    40,     0,     0,     3,     0,     0,    38,     0,     0,
       0,    24,    25,     0,     3,    29,    47,     0,    28,    27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    26,    27,    28,    29,    30,   209,   217,   102,
      31,   179,   192,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    82,    45,   103,   104
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -104
static const yytype_int16 yypact[] =
{
      41,    -5,    52,    25,  -104,  -104,  -104,  -104,  -104,     9,
      10,    14,    33,    34,    48,    49,    50,    51,    54,    55,
      56,    57,    29,    58,    59,    46,    60,    25,    25,    25,
      25,    25,    25,    25,    25,    25,    25,    25,    25,    25,
      25,    25,    25,    25,    65,    25,    72,    73,    74,    75,
      76,    77,    78,    80,    47,    81,    82,    83,    85,    86,
      88,    89,    47,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,    -1,  -104,    68,    70,    84,    87,    90,    91,
      92,    79,    47,    47,    47,    47,    47,    47,    47,  -104,
    -104,    47,    96,    32,    53,    97,    98,    99,   100,   101,
     102,   103,   106,  -104,    93,   107,    95,   104,   113,   114,
     115,   120,   109,    53,    53,    53,    53,    53,    53,    53,
       7,   112,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,   111,   116,   117,   118,   125,    94,   127,  -104,
    -104,   119,   121,   122,   123,   128,   129,   130,  -104,  -104,
      25,  -104,  -104,  -104,  -104,  -104,  -104,   -16,   -16,  -104,
    -104,  -104,  -104,  -104,  -104,   131,   132,   133,   137,   126,
     143,   135,   136,   138,   141,   142,   134,     0,   144,   146,
     147,   148,   140,   145,  -104,  -104,  -104,  -104,  -104,   110,
     150,   163,  -104,  -104,    25,    25,  -104,   164,   154,   151,
     155,   156,   153,   157,   159,    47,   160,  -104,    25,    25,
     119,  -104,   170,   165,    25,   166,   167,  -104,   168,   161,
     169,  -104,  -104,   162,    25,  -104,  -104,   171,   110,  -104
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -104,  -104,   -27,  -104,  -104,  -104,  -104,  -103,  -104,   -78,
    -104,   -81,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,   -45,   -73
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,   112,    83,   123,
     124,   125,   126,   127,   128,   129,   140,   141,   130,     5,
       6,     7,     8,     9,   200,   201,    10,    11,    12,    13,
      14,    15,    16,    17,     1,     3,    18,   138,   139,   140,
     141,   113,     4,   114,    19,    20,    21,    22,   159,    46,
      47,    23,    24,    25,    48,   167,   168,   169,   170,    92,
      93,    94,    95,    96,    97,    98,   132,   133,   134,   135,
     136,   137,    59,    49,    50,    99,   100,   161,   162,   163,
     164,   165,   166,   138,   139,   140,   141,   101,    51,    52,
      53,    54,    62,    81,    55,    56,    57,    58,    60,    61,
      84,    63,    85,    86,    87,    88,    89,    90,    91,   115,
     105,   106,   107,   108,   116,   109,   110,   111,   178,   208,
     122,   150,   176,   186,   152,   239,   191,   223,   117,   227,
       0,   118,     0,   153,   119,   120,   121,   131,   142,   143,
     144,   145,   154,   155,   156,   146,   147,   148,   149,   157,
     151,   158,   160,   171,   175,   177,     0,     0,   172,   173,
     174,   216,     0,   181,   182,   180,   190,   212,   213,   183,
     184,   185,   193,   188,   189,   199,   187,   194,   195,   210,
     196,   225,   226,   197,   198,   206,   202,   230,   203,   207,
     204,   205,   211,   214,   215,   218,   219,   237,   220,   228,
     224,   234,   221,   222,   236,     0,   229,   231,   232,   233,
     235,     0,   238
};

static const yytype_int16 yycheck[] =
{
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    62,    45,    92,
      93,    94,    95,    96,    97,    98,    42,    43,   101,     4,
       5,     6,     7,     8,    34,    35,    11,    12,    13,    14,
      15,    16,    17,    18,     3,    50,    21,    40,    41,    42,
      43,    52,     0,    54,    29,    30,    31,    32,    51,    50,
      50,    36,    37,    38,    50,   138,   139,   140,   141,    22,
      23,    24,    25,    26,    27,    28,    44,    45,    46,    47,
      48,    49,    53,    50,    50,    38,    39,   132,   133,   134,
     135,   136,   137,    40,    41,    42,    43,    50,    50,    50,
      50,    50,    56,    38,    50,    50,    50,    50,    50,    50,
      38,    51,    39,    39,    39,    39,    39,    39,    38,    51,
      39,    39,    39,    38,    54,    39,    38,    38,     9,    19,
      51,    38,    38,   160,    39,   238,    10,   215,    54,   220,
      -1,    54,    -1,    39,    54,    54,    54,    51,    51,    51,
      51,    51,    39,    39,    39,    54,    54,    54,    52,    39,
      53,    52,    50,    52,    39,    38,    -1,    -1,    52,    52,
      52,    20,    -1,    51,    51,    54,    39,   204,   205,    51,
      51,    51,    39,    51,    51,    51,    55,    52,    52,    39,
      52,   218,   219,    52,    52,    55,    52,   224,    52,    54,
      53,    53,    39,    39,    50,    50,    50,   234,    55,    39,
      50,    50,    55,    54,    52,    -1,    51,    51,    51,    51,
      51,    -1,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    58,    50,     0,     4,     5,     6,     7,     8,
      11,    12,    13,    14,    15,    16,    17,    18,    21,    29,
      30,    31,    32,    36,    37,    38,    59,    60,    61,    62,
      63,    67,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    84,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    53,
      50,    50,    56,    51,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    38,    83,    59,    38,    39,    39,    39,    39,    39,
      39,    38,    22,    23,    24,    25,    26,    27,    28,    38,
      39,    50,    66,    85,    86,    39,    39,    39,    38,    39,
      38,    38,    85,    52,    54,    51,    54,    54,    54,    54,
      54,    54,    51,    86,    86,    86,    86,    86,    86,    86,
      86,    51,    44,    45,    46,    47,    48,    49,    40,    41,
      42,    43,    51,    51,    51,    51,    54,    54,    54,    52,
      38,    53,    39,    39,    39,    39,    39,    39,    52,    51,
      50,    85,    85,    85,    85,    85,    85,    86,    86,    86,
      86,    52,    52,    52,    52,    39,    38,    38,     9,    68,
      54,    51,    51,    51,    51,    51,    59,    55,    51,    51,
      39,    10,    69,    39,    52,    52,    52,    52,    52,    51,
      34,    35,    52,    52,    53,    53,    55,    54,    19,    64,
      39,    39,    59,    59,    39,    50,    20,    65,    50,    50,
      55,    55,    54,    66,    50,    59,    59,    68,    39,    51,
      59,    51,    51,    51,    50,    51,    52,    59,    51,    64
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

/* Line 1455 of yacc.c  */
#line 72 "final.y"
    {printf("\nProgram detected correctly\n");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 98 "final.y"
    {
	int i = findVarIndex((yyvsp[(3) - (5)].varString));
	printf("\nThis function reads the variable %s\n",vars[i].varName);
    ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 106 "final.y"
    {
	int i = (yyvsp[(3) - (5)].var);
    printf("\n\nWHILE LOOP from %d to 1 :\n",i);
	while(i>0){
		printf("%d ", i);
        i=i-1;
	}
;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 118 "final.y"
    {
	printf("\nINCREMENTING FOR LOOP: \n");
	int i = (yyvsp[(3) - (11)].var);
	int j = (yyvsp[(5) - (11)].var);
	int inc = (yyvsp[(8) - (11)].var);
	int k;
    printf("for %d to %d: \n",i,j);
	for(k=i; k<=j; k=k+inc){
		printf("%d ", k);
	}
    
		
;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 131 "final.y"
    {
	printf("\nDECREMENTING FOR LOOP: \n");
	int i = (yyvsp[(3) - (11)].var);
	int j = (yyvsp[(5) - (11)].var);
	int dec = (yyvsp[(8) - (11)].var);
	int k;
    printf("for %d to %d: \n",i,j);
	for(k=i; k>=j; k=k-dec){
		printf("%d ", k);
	}
    
;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 147 "final.y"
    {
	printf("\nIF CONDITION:");
	int i = (yyvsp[(3) - (9)].var);
	if(i==1){
		printf("\nTRUE");
	}
	else{
		printf("\nFALSE");
	}
;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 158 "final.y"
    {
	printf("\nELSE IF CONDITION:");
	int i = (yyvsp[(3) - (8)].var);
	if(i==1){
		printf("\nTRUE");
	}
	else{
		printf("\nFALSE");
	}
;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 170 "final.y"
    {
	printf("\nELSE CONDITION:");
;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 179 "final.y"
    {
	if((yyvsp[(1) - (3)].var)==(yyvsp[(3) - (3)].var)){
		(yyval.var) = 1;
	}
	else{
		(yyval.var) = 0;
	}
;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 187 "final.y"
    {
	if((yyvsp[(1) - (3)].var)!=(yyvsp[(3) - (3)].var)){
		(yyval.var) = 1;
	}
	else{
		(yyval.var) = 0;
	}
;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 195 "final.y"
    {
	if((yyvsp[(1) - (3)].var)>(yyvsp[(3) - (3)].var)){
		(yyval.var) = 1;
	}
	else{
		(yyval.var) = 0;
	}
;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 203 "final.y"
    {
	if((yyvsp[(1) - (3)].var)>=(yyvsp[(3) - (3)].var)){
		(yyval.var) = 1;
	}
	else{
		(yyval.var) = 0;
	}
;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 211 "final.y"
    {
	if((yyvsp[(1) - (3)].var)<(yyvsp[(3) - (3)].var)){
		(yyval.var) = 1;
	}
	else{
		(yyval.var) = 0;
	}
;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 219 "final.y"
    {
	if((yyvsp[(1) - (3)].var)<=(yyvsp[(3) - (3)].var)){
		(yyval.var) = 1;
	}
	else{
		(yyval.var) = 0;
	}
;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 229 "final.y"
    {
	printf("\nSwitch Case demo.\n");
;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 234 "final.y"
    {
	printf("\nCase no: %d\n", (yyvsp[(2) - (6)].var));
;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 240 "final.y"
    {
    printf("\nDefault executed\n");
;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 251 "final.y"
    {		
    srand(time(NULL));
	int x = rand();
	printf("\nRandom value = %d ", x);
    ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 259 "final.y"
    {
	int i, fl = 0;
	int n = (yyvsp[(3) - (5)].var);
	for (i = 2; i <=n-1; i++) {
		if (n % i == 0) {
			fl = 1;
			break;
		}
	}
    if(fl)
        printf("\nThe number %d is not prime\n", n);
    else
        printf("\nThe number %d is prime\n", n);

    ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 278 "final.y"
    {
	int j=(yyvsp[(3) - (5)].var), fact = 1;
	    if(j==0){
		    printf("\nFactorial of %d is %d", j, fact);
	    }
	    else{
            int i;
		    for(i = 1; i <= j; i++){
			    fact = fact*i;
		    }
		    printf("\nFactorial of %d is %d", j, fact);
	    }
	
    ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 295 "final.y"
    {
    int i,n=(yyvsp[(3) - (7)].var) , r=(yyvsp[(5) - (7)].var), factn=1, factr=1, factrn =1,res;
    for(i = 1; i <= n; i++){
			    factn = factn*i;
		    }
    for(i = 1; i <= r; i++){
			    factr = factr*i;
		    }
    for(i = 1; i <= n-r; i++){
			    factrn = factrn*i;
		    }
    res = factn/(factr*factrn);
    printf("\nPombination result= %d\n",res);
;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 311 "final.y"
    {
    int i,n=(yyvsp[(3) - (7)].var) , r=(yyvsp[(5) - (7)].var), factn=1, factrn =1,res;
    for(i = 1; i <= n; i++){
			    factn = factn*i;
		    }
    for(i = 1; i <= n-r; i++){
			    factrn = factrn*i;
		    }
    res = factn/factrn;
    printf("\nPermutation result= %d\n",res);
;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 324 "final.y"
    {
    int x=(yyvsp[(3) - (7)].var),y=(yyvsp[(5) - (7)].var),temp;
    temp = x;
    x = y;
    y = temp;
    printf("\nSwapped Numbers= (%d,%d)\n",x,y);
;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 334 "final.y"
    {int arr[] = {(yyvsp[(3) - (13)].var), (yyvsp[(5) - (13)].var), (yyvsp[(7) - (13)].var), (yyvsp[(9) - (13)].var), (yyvsp[(11) - (13)].var)};     
    int temp = 0;    
           
    int length = sizeof(arr)/sizeof(arr[0]);    
              
        
    //Sort the array in ascending order    
    for (int i = 0; i < length; i++) {     
        for (int j = i+1; j < length; j++) {     
           if(arr[i] > arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    }    
        
    printf("\n");    
        
    //Displaying elements of array after sorting    
    printf("Elements of array sorted in ascending order: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);    
    };}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 361 "final.y"
    {		
	int x = pow((yyvsp[(3) - (7)].var), (yyvsp[(5) - (7)].var));
	printf("\nPower value is %d ", x);
    ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 371 "final.y"
    {
	int i = findVarIndex((yyvsp[(3) - (5)].varString));
	if(vars[i].varDataType == 1){
		printf("\n %s has value %d", vars[i].varName, vars[i].ivar);
	}
	else if(vars[i].varDataType == 2){
		printf("\n%s has value %f", vars[i].varName, vars[i].fvar);
	}
	else if(vars[i].varDataType == 0){
		printf("\n%s has value %c", vars[i].varName, vars[i].cvar);
	}
    else if(vars[i].varDataType == 3){
		printf("\n%s has value %lf", vars[i].varName, vars[i].dvar);
	} 
;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 391 "final.y"
    {
	int i = findVarIndex((yyvsp[(3) - (7)].varString));
	int j = findVarIndex((yyvsp[(5) - (7)].varString));
	int k,l;
	if((vars[i].varDataType == 1) &&(vars[j].varDataType == 1) ){
		k = vars[i].ivar;
		l = vars[j].ivar;
		if(l>k){
			printf("\nMaximum value is %d", l);
		}
		else{
			printf("\nMaximum value is %d", k);
		}
	}
	else if((vars[i].varDataType == 2) &&(vars[j].varDataType == 2) ){
		k = vars[i].fvar;
		l = vars[j].fvar;
		if(l>k){
			printf("\nMaximum value is %f", l);
		}
		else{
			printf("\nMaximum value is %f", k);
		}
	}
	else{
		printf("\nThe values can not be compared");
	}
;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 423 "final.y"
    {
	int i = findVarIndex((yyvsp[(3) - (7)].varString));
	int j = findVarIndex((yyvsp[(5) - (7)].varString));
	int k,l;
	if((vars[i].varDataType == 1) &&(vars[j].varDataType == 1) ){
		k = vars[i].ivar;
		l = vars[j].ivar;
		if(l<k){
			printf("\nMinimum value is %d", l);
		}
		else{
			printf("\nMinimum value is %d", k);
		}
	}
	else if((vars[i].varDataType == 2) &&(vars[j].varDataType == 2) ){
		k = vars[i].fvar;
		l = vars[j].fvar;
		if(l<k){
			printf("\nMinimum value is %f", l);
		}
		else{
			printf("\nMinimum value is %f", k);
		}
	}
	else{
		printf("\nThe values can not be compared");
	}
;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 463 "final.y"
    {
	setDataType((yyvsp[(1) - (3)].var));
;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 468 "final.y"
    {(yyval.var) = 0; printf("\nCharacter variable");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 469 "final.y"
    {(yyval.var) = 2; printf("\nFloat variable");;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 470 "final.y"
    {(yyval.var) = 1; printf("\nInteger variable");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 471 "final.y"
    {(yyval.var) = 3; printf("\nDouble variable");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 474 "final.y"
    {
		strcpy(vars[totVars].varName, (yyvsp[(3) - (3)].varString));
		printf("\nThe variable is %s", (yyvsp[(3) - (3)].varString));
		vars[totVars].varDataType =  -9;
		totVars = totVars + 1;
	;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 480 "final.y"
    {
		strcpy(vars[totVars].varName, (yyvsp[(1) - (1)].varString));
		printf("\nThe variable is %s", (yyvsp[(1) - (1)].varString));
		vars[totVars].varDataType =  -9;
		totVars = totVars + 1;
	    strcpy((yyval.varString), (yyvsp[(1) - (1)].varString));
    ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 491 "final.y"
    {
	(yyval.var) = (yyvsp[(3) - (4)].var);
		int i = findVarIndex((yyvsp[(1) - (4)].varString));
		if(vars[i].varDataType==0){
			vars[i].cvar = (char*)&(yyvsp[(3) - (4)].var) - 'a' ;
			printf("\nASSIGNATION: \nThe variable is %s\n", vars[i].cvar);
		}
		else if(vars[i].varDataType==1){
			vars[i].ivar = (yyvsp[(3) - (4)].var);
			printf("\nASSIGNATION: \nThe variable is %d\n", vars[i].ivar);
		}
		else if(vars[i].varDataType==2){
			vars[i].fvar = (float)(yyvsp[(3) - (4)].var);
			printf("\nASSIGNATION: \nThe variable is %f\n", vars[i].fvar);
		}
        else if(vars[i].varDataType==3){
			vars[i].dvar = (double)(yyvsp[(3) - (4)].var);
			printf("\nASSIGNATION: \nThe variable is %lf\n", vars[i].dvar);
		}
    ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 513 "final.y"
    {(yyval.var) = (yyvsp[(1) - (1)].var);;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 515 "final.y"
    {(yyval.var) = (yyvsp[(1) - (3)].var) + (yyvsp[(3) - (3)].var); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 516 "final.y"
    {(yyval.var) = (yyvsp[(1) - (3)].var) - (yyvsp[(3) - (3)].var);;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 517 "final.y"
    {(yyval.var) = (yyvsp[(1) - (3)].var) * (yyvsp[(3) - (3)].var);;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 519 "final.y"
    {if((yyvsp[(3) - (3)].var) != 0)
	    {
		(yyval.var) = (yyvsp[(1) - (3)].var) / (yyvsp[(3) - (3)].var);
	    }
	    else{
		printf("\nDivision not possible. Logical Error");
    	}
        ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 527 "final.y"
    {(yyval.var) = (yyvsp[(2) - (3)].var);;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 528 "final.y"
    {(yyval.var) = (yyvsp[(1) - (1)].var);;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 529 "final.y"
    {printf("\nsin(%lf)= %lf\n",(yyvsp[(2) - (2)].var),sin((yyvsp[(2) - (2)].var)*3.1416/180)); (yyval.var)=sin((yyvsp[(2) - (2)].var)*3.1416/180);;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 530 "final.y"
    {printf("\n backsin(%lf)= %lf degree\n",(yyvsp[(2) - (2)].var), ceil((asin((yyvsp[(2) - (2)].var)) * 180) / 3.1416)); (yyval.var)=ceil((asin((yyvsp[(2) - (2)].var)) * 180) / 3.1416);;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 531 "final.y"
    {printf("\ncos(%lf)= %lf\n",(yyvsp[(2) - (2)].var),cos((yyvsp[(2) - (2)].var)*3.1416/180)); (yyval.var)=cos((yyvsp[(2) - (2)].var)*3.1416/180);;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 532 "final.y"
    {printf("\n backcos(%lf)= %lf degree\n",(yyvsp[(2) - (2)].var), ceil((acos((yyvsp[(2) - (2)].var)) * 180) / 3.1416)); (yyval.var)=ceil((acos((yyvsp[(2) - (2)].var)) * 180) / 3.1416);;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 533 "final.y"
    {printf("\ntan(%lf)= %lf\n",(yyvsp[(2) - (2)].var),tan((yyvsp[(2) - (2)].var)*3.1416/180)); (yyval.var)=tan((yyvsp[(2) - (2)].var)*3.1416/180);;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 534 "final.y"
    {printf("\n backtan(%lf)= %lf degree\n",(yyvsp[(2) - (2)].var), ceil((atan((yyvsp[(2) - (2)].var)) * 180) / 3.1416)); (yyval.var)=ceil((atan((yyvsp[(2) - (2)].var)) * 180) / 3.1416);;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 535 "final.y"
    {printf("\nlog10(%lf)= %lf\n",(yyvsp[(2) - (2)].var),(log((yyvsp[(2) - (2)].var)*1.0)/log(10.0))); (yyval.var)=(log((yyvsp[(2) - (2)].var)*1.0)/log(10.0));;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 537 "final.y"
    {
	    int indexOfVar = findVarIndex((yyvsp[(1) - (1)].varString));
	    if(indexOfVar == -9)
	    {
		yyerror("Invalid variable mentioned");
        }
	    else
	    {
		if(vars[indexOfVar].varDataType == 1)
		{
			(yyval.var) = vars[indexOfVar].ivar;
		}
		else if(vars[indexOfVar].varDataType == 2)
		{
			(yyval.var) = vars[indexOfVar].fvar;
		}
	}
    ;}
    break;



/* Line 1455 of yacc.c  */
#line 2271 "final.tab.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
      if (yyn != YYPACT_NINF)
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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



/* Line 1675 of yacc.c  */
#line 557 "final.y"





void yyerror(char *s)
{
	fprintf(stderr, "\n%s", s);
}

int main(){

	input = freopen("input.txt", "r", stdin); /// taking input
	output = freopen("output.txt", "w", stdout); // output in file
	yyparse();
	return 0;
}