%{
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>

using namespace std;

// ... (rest of your Bison rules remain the same)

int yylex(void);
void yyerror(const char *);

#define YYSTYPE double
%}

%token NUMBER PLUS MINUS GUN VAG NEWLINE LP RP
%left PLUS MINUS
%left GUN VAG
%right EXPONEN

%%

start: /* empty */
    | start line
    ;
line: NEWLINE
    | exp NEWLINE {printf("\t%.10g\n", $1);}
    ;
exp: exp PLUS term {$$ = $1 + $3;}
    | exp MINUS term {$$ = $1 - $3;}
    | term {$$ = $1;}
    ;
term: term GUN factor {$$ = $1 * $3;}
    | term VAG factor {$$ = $1 / $3;}
    | factor {$$ = $1;}
    ;
factor: LP exp RP {$$ = $2;}
    | NUMBER {$$ = $1;}
    ;

%%

int main() {
    yyparse();
    return 0;
}

void yyerror(const char *s) {
    cout << s;
    // You might want to exit or handle the error in a different way here
}