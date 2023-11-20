
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
#line 1 "1907121.y"

#include <bits/stdc++.h>
using namespace std;
#include <string>
#include <fstream>
#include <ctime>
#include <cmath>
#include <vector>

// Global variables
std::ifstream input;
std::ofstream output;

int yylex(void);
void yyerror(const char* s);

int totVars = 0;

struct varStruct {
    std::string varName;
    std::string cvar;
    int ivar;
    float fvar;
    double dvar;
    int varDataType;
};

std::vector<varStruct> vars(50);

// Finding index of a given variable
int findVarIndex(const std::string& name) {
    for (int i = 0; i < totVars; ++i) {
        if (vars[i].varName == name) {
            return i;
        }
    }
    return -1;
}

// Set data type of a var from the struct structure
void setDataType(int type) {
    for (int i = 0; i < totVars; ++i) {
        if (vars[i].varDataType == -9) {
            vars[i].varDataType = type;
        }
    }
}

    


/* Line 189 of yacc.c  */
#line 125 "1907121.tab.c"

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
     STRING = 261,
     FLOAT = 262,
     DOUBLE = 263,
     SWITCH = 264,
     CASE = 265,
     DEFAULT = 266,
     SORT = 267,
     SWAP = 268,
     COMBINATION = 269,
     PERMUTATION = 270,
     POW = 271,
     RANDOM = 272,
     SCAN = 273,
     IF = 274,
     ELIF = 275,
     ELSE = 276,
     WHILE = 277,
     SIN = 278,
     NSIN = 279,
     COS = 280,
     NCOS = 281,
     TAN = 282,
     NTAN = 283,
     LOG2 = 284,
     LOG10 = 285,
     FACTOR = 286,
     PRIME = 287,
     OUTPUT = 288,
     FOR = 289,
     TO = 290,
     INC = 291,
     DEC = 292,
     MAX = 293,
     MIN = 294,
     ID = 295,
     NUM = 296,
     PLUS = 297,
     MINUS = 298,
     MULTI = 299,
     DIVI = 300,
     EQUALS = 301,
     NOTEQUAL = 302,
     GT = 303,
     GTE = 304,
     LT = 305,
     LTE = 306
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 52 "1907121.y"

    double var;
    char* varString;



/* Line 214 of yacc.c  */
#line 219 "1907121.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 231 "1907121.tab.c"

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
#define YYLAST   236

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNRULES -- Number of states.  */
#define YYNSTATES  255

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      52,    53,     2,     2,    56,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    54,
       2,    58,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,    57,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,     9,    12,    15,    18,    21,    24,
      27,    30,    33,    36,    39,    42,    45,    48,    51,    54,
      57,    60,    63,    69,    75,    88,   101,   114,   115,   128,
     138,   147,   148,   153,   154,   158,   162,   166,   170,   174,
     178,   187,   194,   195,   200,   208,   214,   220,   228,   236,
     244,   258,   266,   272,   280,   288,   292,   294,   296,   298,
     300,   304,   306,   311,   313,   317,   321,   325,   329,   333,
     335,   338,   341,   344,   347,   350,   353,   356,   359
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      60,     0,    -1,     3,    52,    61,    53,    -1,    -1,    83,
      61,    -1,    86,    61,    -1,    65,    61,    -1,    64,    61,
      -1,    69,    61,    -1,    80,    61,    -1,    62,    61,    -1,
      63,    61,    -1,    79,    61,    -1,    72,    61,    -1,    74,
      61,    -1,    73,    61,    -1,    82,    61,    -1,    81,    61,
      -1,    75,    61,    -1,    76,    61,    -1,    77,    61,    -1,
      78,    61,    -1,    18,    52,    40,    53,    54,    -1,    22,
      52,    41,    53,    54,    -1,    34,    55,    41,    56,    41,
      56,    36,    41,    57,    52,    61,    53,    -1,    34,    55,
      41,    56,    41,    56,    41,    36,    57,    52,    61,    53,
      -1,    34,    55,    41,    56,    41,    56,    37,    41,    57,
      52,    61,    53,    -1,    -1,    34,    55,    41,    56,    41,
      56,    41,    37,    57,    52,    61,    53,    -1,    19,    52,
      68,    53,    52,    61,    53,    66,    67,    -1,    20,    52,
      68,    53,    52,    61,    53,    66,    -1,    -1,    21,    52,
      61,    53,    -1,    -1,    87,    46,    87,    -1,    87,    47,
      87,    -1,    87,    48,    87,    -1,    87,    49,    87,    -1,
      87,    50,    87,    -1,    87,    51,    87,    -1,     9,    52,
      40,    53,    55,    70,    71,    57,    -1,    10,    41,    55,
      61,    57,    70,    -1,    -1,    11,    55,    61,    57,    -1,
      17,    52,    41,    56,    41,    53,    54,    -1,    32,    52,
      41,    53,    54,    -1,    31,    52,    41,    53,    54,    -1,
      14,    52,    41,    56,    41,    53,    54,    -1,    15,    52,
      41,    56,    41,    53,    54,    -1,    13,    52,    41,    56,
      41,    53,    54,    -1,    12,    52,    41,    56,    41,    56,
      41,    56,    41,    56,    41,    53,    54,    -1,    16,    52,
      41,    56,    41,    53,    54,    -1,    33,    52,    40,    53,
      54,    -1,    38,    52,    40,    56,    40,    53,    54,    -1,
      39,    52,    40,    56,    40,    53,    54,    -1,    84,    85,
      54,    -1,     5,    -1,     7,    -1,     4,    -1,     8,    -1,
      85,    56,    40,    -1,    40,    -1,    40,    58,    87,    54,
      -1,    88,    -1,    88,    42,    88,    -1,    88,    43,    88,
      -1,    88,    44,    88,    -1,    88,    45,    88,    -1,    52,
      88,    53,    -1,    41,    -1,    23,    88,    -1,    24,    88,
      -1,    25,    88,    -1,    26,    88,    -1,    27,    88,    -1,
      28,    88,    -1,    29,    88,    -1,    30,    88,    -1,    40,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    99,   107,   119,   132,   145,   157,   157,   173,
     184,   194,   196,   199,   205,   213,   221,   229,   237,   245,
     255,   260,   263,   265,   277,   285,   304,   321,   337,   350,
     359,   387,   397,   417,   449,   489,   494,   495,   496,   497,
     500,   506,   517,   539,   541,   542,   543,   544,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   564
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "START", "INT", "CHAR", "STRING",
  "FLOAT", "DOUBLE", "SWITCH", "CASE", "DEFAULT", "SORT", "SWAP",
  "COMBINATION", "PERMUTATION", "POW", "RANDOM", "SCAN", "IF", "ELIF",
  "ELSE", "WHILE", "SIN", "NSIN", "COS", "NCOS", "TAN", "NTAN", "LOG2",
  "LOG10", "FACTOR", "PRIME", "OUTPUT", "FOR", "TO", "INC", "DEC", "MAX",
  "MIN", "ID", "NUM", "PLUS", "MINUS", "MULTI", "DIVI", "EQUALS",
  "NOTEQUAL", "GT", "GTE", "LT", "LTE", "'('", "')'", "';'", "'{'", "','",
  "'}'", "'='", "$accept", "program", "statement", "scanFunc", "whileFunc",
  "forLoop", "condition", "elif", "lastElse", "boolianExpr", "switchCase",
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
     305,   306,    40,    41,    59,   123,    44,   125,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    62,    63,    64,    64,    64,    64,    64,    65,
      66,    66,    67,    67,    68,    68,    68,    68,    68,    68,
      69,    70,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    84,    84,    84,
      85,    85,    86,    87,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     5,     5,    12,    12,    12,     0,    12,     9,
       8,     0,     4,     0,     3,     3,     3,     3,     3,     3,
       8,     6,     0,     4,     7,     5,     5,     7,     7,     7,
      13,     7,     5,     7,     7,     3,     1,     1,     1,     1,
       3,     1,     4,     1,     3,     3,     3,     3,     3,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     1,    58,    56,    57,    59,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,    10,    11,     7,     6,     8,    13,
      15,    14,    18,    19,    20,    21,    12,     9,    17,    16,
       4,    61,     0,     5,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    69,     0,     0,     0,    63,     0,     0,     0,     0,
       0,     0,     0,     0,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,    60,    42,     0,     0,     0,     0,     0,     0,
      22,    68,     3,    34,    35,    36,    37,    38,    39,    64,
      65,    66,    67,    23,    46,    45,    52,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,    47,    48,    51,
      44,    31,     0,     0,     0,    53,    54,     3,     3,    40,
       0,     0,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,     0,     0,     0,     0,    42,    43,     0,
       0,     3,     3,     3,     3,     3,    41,     0,     0,     0,
       0,     0,     0,     0,     0,     3,    32,    24,    26,    25,
      28,    50,     0,    31,    30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    26,    27,    28,    29,    30,   212,   222,   103,
      31,   181,   194,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    82,    45,   104,   105
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -118
static const yytype_int16 yypact[] =
{
      40,     1,    59,    23,  -118,  -118,  -118,  -118,  -118,     8,
      12,    13,    14,    34,    35,    36,    47,    48,    49,    51,
      52,    53,    22,    54,    60,    56,    62,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,    23,
      23,    23,    23,    23,    73,    23,    76,    77,    78,    79,
      80,    81,    82,    84,    55,    85,    86,    87,    89,    90,
      92,    93,    55,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,  -118,   -10,  -118,    64,    69,    74,    83,    88,    91,
      94,    95,    55,    55,    55,    55,    55,    55,    55,    55,
    -118,  -118,    55,    96,    25,    66,    98,    99,   100,   101,
     102,   103,   104,   107,  -118,    97,   108,   105,   114,   115,
     116,   121,   123,   111,    66,    66,    66,    66,    66,    66,
      66,    66,     5,   117,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,   112,   113,   118,   119,   127,   130,
     131,  -118,  -118,   124,   120,   122,   125,   126,   129,   132,
    -118,  -118,    23,  -118,  -118,  -118,  -118,  -118,  -118,   -11,
     -11,  -118,  -118,  -118,  -118,  -118,  -118,   128,   133,   134,
     136,   163,   142,   135,   137,   138,   139,   140,   143,    61,
     141,   144,   145,   146,   152,   147,  -118,  -118,  -118,  -118,
    -118,   168,   149,   156,    15,  -118,  -118,    23,    23,  -118,
     158,   150,   189,   154,   155,   157,   159,   160,   162,   164,
      55,   161,  -118,   169,   170,   171,   172,   124,  -118,   174,
     173,    23,    23,    23,    23,    23,  -118,   175,   177,   178,
     179,   180,   181,   182,   176,    23,  -118,  -118,  -118,  -118,
    -118,  -118,   183,   168,  -118
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -118,  -118,   -27,  -118,  -118,  -118,  -118,  -117,  -118,   -82,
    -118,   -87,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,   -45,   -73
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,   113,    83,   124,
     125,   126,   127,   128,   129,   130,   131,     5,     6,   132,
       7,     8,     9,   142,   143,    10,    11,    12,    13,    14,
      15,    16,    17,     1,   114,    18,   115,   140,   141,   142,
     143,   215,   216,     3,    19,    20,    21,    22,   161,     4,
      46,    23,    24,    25,    47,    48,    49,   169,   170,   171,
     172,   134,   135,   136,   137,   138,   139,    59,    92,    93,
      94,    95,    96,    97,    98,    99,    50,    51,    52,   163,
     164,   165,   166,   167,   168,   100,   101,   202,   203,    53,
      54,    55,   204,    56,    57,    58,    60,   102,   140,   141,
     142,   143,    61,    81,    62,    63,    84,   116,    85,    86,
      87,    88,    89,    90,    91,   117,   106,   107,   108,   109,
     118,   110,   111,   112,   180,   188,   254,   152,   230,   119,
     236,     0,     0,     0,   120,     0,   154,   121,   123,   133,
     122,   144,   145,   146,   147,   155,   156,   157,   148,   149,
     150,   151,   158,   153,   159,   160,   173,   174,   177,   162,
     178,   179,   175,   176,   193,   183,   182,   192,   184,   185,
     217,   218,   186,   195,   189,   187,   190,   191,   211,   196,
     213,   197,   198,   199,   200,   205,   201,   214,   206,   219,
     207,   208,   220,   210,   239,   240,   241,   242,   243,   209,
     221,   223,   224,   231,   225,   237,   226,   227,   252,   228,
     229,   232,   233,   234,   235,     0,   238,     0,   244,   245,
     251,   246,   247,   248,   249,   250,   253
};

static const yytype_int16 yycheck[] =
{
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    62,    45,    92,
      93,    94,    95,    96,    97,    98,    99,     4,     5,   102,
       7,     8,     9,    44,    45,    12,    13,    14,    15,    16,
      17,    18,    19,     3,    54,    22,    56,    42,    43,    44,
      45,    36,    37,    52,    31,    32,    33,    34,    53,     0,
      52,    38,    39,    40,    52,    52,    52,   140,   141,   142,
     143,    46,    47,    48,    49,    50,    51,    55,    23,    24,
      25,    26,    27,    28,    29,    30,    52,    52,    52,   134,
     135,   136,   137,   138,   139,    40,    41,    36,    37,    52,
      52,    52,    41,    52,    52,    52,    52,    52,    42,    43,
      44,    45,    52,    40,    58,    53,    40,    53,    41,    41,
      41,    41,    41,    41,    40,    56,    41,    41,    41,    40,
      56,    41,    40,    40,    10,   162,   253,    40,   220,    56,
     227,    -1,    -1,    -1,    56,    -1,    41,    56,    53,    53,
      56,    53,    53,    53,    53,    41,    41,    41,    56,    56,
      56,    54,    41,    55,    41,    54,    54,    54,    41,    52,
      40,    40,    54,    54,    11,    53,    56,    41,    53,    53,
     207,   208,    53,    41,    56,    53,    53,    53,    20,    54,
      41,    54,    54,    54,    54,    54,    53,    41,    54,    41,
      55,    55,    52,    56,   231,   232,   233,   234,   235,    57,
      21,    57,    57,    52,    57,    41,    57,    57,   245,    57,
      56,    52,    52,    52,    52,    -1,    53,    -1,    53,    52,
      54,    53,    53,    53,    53,    53,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    60,    52,     0,     4,     5,     7,     8,     9,
      12,    13,    14,    15,    16,    17,    18,    19,    22,    31,
      32,    33,    34,    38,    39,    40,    61,    62,    63,    64,
      65,    69,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    86,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    55,
      52,    52,    58,    53,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    40,    85,    61,    40,    41,    41,    41,    41,    41,
      41,    40,    23,    24,    25,    26,    27,    28,    29,    30,
      40,    41,    52,    68,    87,    88,    41,    41,    41,    40,
      41,    40,    40,    87,    54,    56,    53,    56,    56,    56,
      56,    56,    56,    53,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    53,    46,    47,    48,    49,    50,    51,
      42,    43,    44,    45,    53,    53,    53,    53,    56,    56,
      56,    54,    40,    55,    41,    41,    41,    41,    41,    41,
      54,    53,    52,    87,    87,    87,    87,    87,    87,    88,
      88,    88,    88,    54,    54,    54,    54,    41,    40,    40,
      10,    70,    56,    53,    53,    53,    53,    53,    61,    56,
      53,    53,    41,    11,    71,    41,    54,    54,    54,    54,
      54,    53,    36,    37,    41,    54,    54,    55,    55,    57,
      56,    20,    66,    41,    41,    36,    37,    61,    61,    41,
      52,    21,    67,    57,    57,    57,    57,    57,    57,    56,
      68,    52,    52,    52,    52,    52,    70,    41,    53,    61,
      61,    61,    61,    61,    53,    52,    53,    53,    53,    53,
      53,    54,    61,    53,    66
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
#line 73 "1907121.y"
    {printf("\nProgram detected correctly\n");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 99 "1907121.y"
    {
	int i = findVarIndex((yyvsp[(3) - (5)].varString));
	printf("\nThis function reads the variable %s\n",vars[i].varName);
    ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 107 "1907121.y"
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
#line 119 "1907121.y"
    {
	printf("\nINCREMENTING FOR LOOP: \n");
	int i = (yyvsp[(3) - (12)].var);
	int j = (yyvsp[(5) - (12)].var);
	int inc = (yyvsp[(8) - (12)].var);
	int k;
    printf("for %d to %d: \n",i,j);
	for(k=i; k<=j; k=k+inc){
		printf("%d ", k);
	}
    
		
;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 132 "1907121.y"
    {
	printf("\nINCREMENTING FOR LOOP: \n");
	int i = (yyvsp[(3) - (12)].var);
	int j = (yyvsp[(5) - (12)].var);
	int inc = (yyvsp[(7) - (12)].var);
	int k;
    printf("for %d to %d: \n",i,j);
	for(k=i; k<=j; k=k+inc){
		printf("%d ", k);
	}
    
		
;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 145 "1907121.y"
    {
	printf("\nDECREMENTING FOR LOOP: \n");
	int i = (yyvsp[(3) - (12)].var);
	int j = (yyvsp[(5) - (12)].var);
	int dec = (yyvsp[(8) - (12)].var);
	int k;
    printf("for %d to %d: \n",i,j);
	for(k=i; k>=j; k=k-dec){
		printf("%d ", k);
	}
;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 157 "1907121.y"
    {
	printf("\nDECREMENTING FOR LOOP: \n");
	int i = (yyvsp[(3) - (12)].var);
	int j = (yyvsp[(5) - (12)].var);
	int dec = (yyvsp[(7) - (12)].var);
	int k;
    printf("for %d to %d: \n",i,j);
	for(k=i; k>=j; k=k-dec){
		printf("%d ", k);
	}
    
;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 173 "1907121.y"
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

  case 30:

/* Line 1455 of yacc.c  */
#line 184 "1907121.y"
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

  case 32:

/* Line 1455 of yacc.c  */
#line 196 "1907121.y"
    {
	printf("\nELSE CONDITION:");
;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 205 "1907121.y"
    {
	if((yyvsp[(1) - (3)].var)==(yyvsp[(3) - (3)].var)){
		(yyval.var) = 1;
	}
	else{
		(yyval.var) = 0;
	}
;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 213 "1907121.y"
    {
	if((yyvsp[(1) - (3)].var)!=(yyvsp[(3) - (3)].var)){
		(yyval.var) = 1;
	}
	else{
		(yyval.var) = 0;
	}
;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 221 "1907121.y"
    {
	if((yyvsp[(1) - (3)].var)>(yyvsp[(3) - (3)].var)){
		(yyval.var) = 1;
	}
	else{
		(yyval.var) = 0;
	}
;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 229 "1907121.y"
    {
	if((yyvsp[(1) - (3)].var)>=(yyvsp[(3) - (3)].var)){
		(yyval.var) = 1;
	}
	else{
		(yyval.var) = 0;
	}
;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 237 "1907121.y"
    {
	if((yyvsp[(1) - (3)].var)<(yyvsp[(3) - (3)].var)){
		(yyval.var) = 1;
	}
	else{
		(yyval.var) = 0;
	}
;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 245 "1907121.y"
    {
	if((yyvsp[(1) - (3)].var)<=(yyvsp[(3) - (3)].var)){
		(yyval.var) = 1;
	}
	else{
		(yyval.var) = 0;
	}
;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 255 "1907121.y"
    {
	printf("\nSwitch Case demo.\n");
;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 260 "1907121.y"
    {
	printf("\nCase no: %d\n", (yyvsp[(2) - (6)].var));
;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 266 "1907121.y"
    {
    printf("\nDefault executed\n");
;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 277 "1907121.y"
    {		
    srand(time(NULL));
	int x = rand();
	printf("\nRandom value = %d ", x);
    ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 285 "1907121.y"
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

  case 46:

/* Line 1455 of yacc.c  */
#line 304 "1907121.y"
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

  case 47:

/* Line 1455 of yacc.c  */
#line 321 "1907121.y"
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

  case 48:

/* Line 1455 of yacc.c  */
#line 337 "1907121.y"
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

  case 49:

/* Line 1455 of yacc.c  */
#line 350 "1907121.y"
    {
    int x=(yyvsp[(3) - (7)].var),y=(yyvsp[(5) - (7)].var),temp;
    temp = x;
    x = y;
    y = temp;
    printf("\nSwapped Numbers= (%d,%d)\n",x,y);
;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 360 "1907121.y"
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

  case 51:

/* Line 1455 of yacc.c  */
#line 387 "1907121.y"
    {		
	int x = pow((yyvsp[(3) - (7)].var), (yyvsp[(5) - (7)].var));
	printf("\nPower value is %d ", x);
    ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 397 "1907121.y"
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

  case 53:

/* Line 1455 of yacc.c  */
#line 417 "1907121.y"
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

  case 54:

/* Line 1455 of yacc.c  */
#line 449 "1907121.y"
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

  case 55:

/* Line 1455 of yacc.c  */
#line 489 "1907121.y"
    {
	setDataType((yyvsp[(1) - (3)].var));
;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 494 "1907121.y"
    {(yyval.var) = 0; printf("\nCharacter variable");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 495 "1907121.y"
    {(yyval.var) = 2; printf("\nFloat variable");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 496 "1907121.y"
    {(yyval.var) = 1; printf("\nInteger variable");;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 497 "1907121.y"
    {(yyval.var) = 3; printf("\nDouble variable");;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 500 "1907121.y"
    {
		strcpy(vars[totVars].varName, (yyvsp[(3) - (3)].varString));
		printf("\nThe variable is %s", (yyvsp[(3) - (3)].varString));
		vars[totVars].varDataType =  -9;
		totVars = totVars + 1;
	;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 506 "1907121.y"
    {
		strcpy(vars[totVars].varName, (yyvsp[(1) - (1)].varString));
		printf("\nThe variable is %s", (yyvsp[(1) - (1)].varString));
		vars[totVars].varDataType =  -9;
		totVars = totVars + 1;
	    strcpy((yyval.varString), (yyvsp[(1) - (1)].varString));
    ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 517 "1907121.y"
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

  case 63:

/* Line 1455 of yacc.c  */
#line 539 "1907121.y"
    {(yyval.var) = (yyvsp[(1) - (1)].var);;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 541 "1907121.y"
    {(yyval.var) = (yyvsp[(1) - (3)].var) + (yyvsp[(3) - (3)].var); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 542 "1907121.y"
    {(yyval.var) = (yyvsp[(1) - (3)].var) - (yyvsp[(3) - (3)].var);;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 543 "1907121.y"
    {(yyval.var) = (yyvsp[(1) - (3)].var) * (yyvsp[(3) - (3)].var);;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 545 "1907121.y"
    {if((yyvsp[(3) - (3)].var) != 0)
	    {
		(yyval.var) = (yyvsp[(1) - (3)].var) / (yyvsp[(3) - (3)].var);
	    }
	    else{
		printf("\nDivision not possible. Logical Error");
    	}
        ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 553 "1907121.y"
    {(yyval.var) = (yyvsp[(2) - (3)].var);;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 554 "1907121.y"
    {(yyval.var) = (yyvsp[(1) - (1)].var);;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 555 "1907121.y"
    {printf("\nsin(%lf)= %lf\n",(yyvsp[(2) - (2)].var),sin((yyvsp[(2) - (2)].var)*3.1416/180)); (yyval.var)=sin((yyvsp[(2) - (2)].var)*3.1416/180);;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 556 "1907121.y"
    {printf("\n nsin(%lf)= %lf degree\n",(yyvsp[(2) - (2)].var), ceil((asin((yyvsp[(2) - (2)].var)) * 180) / 3.1416)); (yyval.var)=ceil((asin((yyvsp[(2) - (2)].var)) * 180) / 3.1416);;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 557 "1907121.y"
    {printf("\ncos(%lf)= %lf\n",(yyvsp[(2) - (2)].var),cos((yyvsp[(2) - (2)].var)*3.1416/180)); (yyval.var)=cos((yyvsp[(2) - (2)].var)*3.1416/180);;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 558 "1907121.y"
    {printf("\n ncos(%lf)= %lf degree\n",(yyvsp[(2) - (2)].var), ceil((acos((yyvsp[(2) - (2)].var)) * 180) / 3.1416)); (yyval.var)=ceil((acos((yyvsp[(2) - (2)].var)) * 180) / 3.1416);;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 559 "1907121.y"
    {printf("\ntan(%lf)= %lf\n",(yyvsp[(2) - (2)].var),tan((yyvsp[(2) - (2)].var)*3.1416/180)); (yyval.var)=tan((yyvsp[(2) - (2)].var)*3.1416/180);;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 560 "1907121.y"
    {printf("\n ntan(%lf)= %lf degree\n",(yyvsp[(2) - (2)].var), ceil((atan((yyvsp[(2) - (2)].var)) * 180) / 3.1416)); (yyval.var)=ceil((atan((yyvsp[(2) - (2)].var)) * 180) / 3.1416);;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 561 "1907121.y"
    {printf("\nlog2(%lf)= %lf\n",(yyvsp[(2) - (2)].var),(log((yyvsp[(2) - (2)].var)*1.0)/log(2.0))); (yyval.var)=(log((yyvsp[(2) - (2)].var)*1.0)/log(2.0));;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 562 "1907121.y"
    {printf("\nlog10(%lf)= %lf\n",(yyvsp[(2) - (2)].var),(log((yyvsp[(2) - (2)].var)*1.0)/log(10.0))); (yyval.var)=(log((yyvsp[(2) - (2)].var)*1.0)/log(10.0));;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 564 "1907121.y"
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
#line 2329 "1907121.tab.c"
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
#line 584 "1907121.y"





void yyerror(const char* s) {
    cerr << s << endl;
}
int main() {
    input.open("input.txt"); // Open input file
    // output.open("output.txt"); // Open output file

    yyparse();

    input.close();
    // output.close();
    return 0;
}
