
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
     NSIN = 278,
     COS = 279,
     NCOS = 280,
     TAN = 281,
     NTAN = 282,
     LOG2 = 283,
     LOG10 = 284,
     FACTOR = 285,
     PRIME = 286,
     OUTPUT = 287,
     FOR = 288,
     TO = 289,
     INC = 290,
     DEC = 291,
     MAX = 292,
     MIN = 293,
     ID = 294,
     NUM = 295,
     PLUS = 296,
     MINUS = 297,
     MULTI = 298,
     DIVI = 299,
     EQUALS = 300,
     NOTEQUAL = 301,
     GT = 302,
     GTE = 303,
     LT = 304,
     LTE = 305
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 54 "1907121.y"

    double var;
    char* varString;



/* Line 1676 of yacc.c  */
#line 109 "1907121.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


