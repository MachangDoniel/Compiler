
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

/* Line 1676 of yacc.c  */
#line 51 "final.y"

    double var;
    char* varString;



/* Line 1676 of yacc.c  */
#line 108 "final.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


