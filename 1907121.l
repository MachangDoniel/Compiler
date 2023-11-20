%{
	#include <bits/stdc++.h>
	using namespace std;
	#include <string>
	#include "1907121.tab.h"


	char* strdup(const char* str) {
    	size_t len = std::strlen(str) + 1;
    	char* newStr = new char[len];
    	std::strcpy(newStr, str);
    	return newStr;
	}
	void yyerror(string s) {
    	std::cerr << s << std::endl;
	}

%}


HEADER	"tw"[ ]+[^\n]+[.h][ ]*
VARIABLE	[a-zA-Z][a-zA-Z0-9]*
DIGIT [0-9]
NUMBER	[-]?{DIGIT}+[.]?{DIGIT}*
SingleComment		[ ]*[/][/][a-zA-Z0-9@$%^&*(){}_+-,.:\|?>< ]*
MultiComment		[ ]*[/][*][a-zA-Z0-9@$*(){}_+-,.:\|?><\n\t ]*[*][/]	

%%


[ \t]+
"hem()" return(START);
"rem"	return(INT);
"kokthai"	return(CHAR);
"kok"	return(STRING);
"suk"	return(FLOAT);
"dsuk"	return(DOUBLE);
"switch"	return(SWITCH);
"case"	return(CASE);
"default"	return(DEFAULT);
"xchange" return(SWAP);
"C" return(COMBINATION);
"P" return(PERMUTATION);
"power"	return(POW);
"random" return(RANDOM);
"la"	return(SCAN);
"funu"	return(OUTPUT);
"khaitong" return(WHILE);
"sin" return(SIN);
"nsin" return(NSIN);
"cos" return(COS);
"ncos" return(NCOS);
"tan" return(TAN);
"ntan" return(NTAN);
"log2" return(LOG2);
"log10" return(LOG10);
"!"	 return(FACTOR);
"prime"	return(PRIME);


"imo"	return(IF);
"imoya"	return(ELIF);
"imoyakhai"	return(ELSE);
"ongkhai"	return(FOR);
"to"	return(TO);
"++"	return(INC);
"--"	return(DEC);
"max"	return(MAX);
"min"	return(MIN);
">"		return(GT);
">="	return(GTE);
"<"		return(LT);
"<="	return(LTE);
"+"		return(PLUS);
"-"		return(MINUS);
"*"		return(MULTI);
"/"		return(DIVI);
"=="	return(EQUALS);
"!="	return(NOTEQUAL);

{SingleComment} 	{printf("\n A single line comment\n");}

{MultiComment} 	{printf("\n A multi line comment\n");}

{HEADER}	printf("Header file has been included.\n");
{VARIABLE}	{yylval.varString = strdup(yytext); return(ID);}
{NUMBER}	{	int len = strlen(yytext);
			int i = 0;
			while(i<len){
				if(yytext[i]=='.'){
					yylval.var = atof(yytext); 
					return(NUM);
				}
				i++;
			}
			yylval.var = atoi(yytext); 
			return(NUM);
		}

[=,;{}()_^]	{yylval.varString = strdup(yytext); return *yytext;}

.		yyerror("Error! Invalid character inserted");

[\n]	{}

%% 

int yywrap(void){
	return 1;
}