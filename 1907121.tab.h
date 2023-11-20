
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 52 "1907121.y"

    double var;
    char* varString;



/* Line 1676 of yacc.c  */
#line 110 "1907121.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


