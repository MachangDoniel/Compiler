%{
#include <bits/stdc++.h>
#include "1907121.tab.h"
using namespace std;
extern YYSTYPE yylval; 
%}

%option noyywrap

delim	[ \t]
white	{delim}+
num	[0-9]
number	{num}*[.]?{num}+

%%

{number}	{sscanf(yytext,"%lf",&yylval); 
		return NUMBER;}
"+"	{return PLUS;}
"-"	{return MINUS;}
"/"	{return VAG;}
"*"	{return GUN;}
"("	{return LP;}
")"	{return RP;}
"\n"	{return NEWLINE;}
{white}	{}
%%
