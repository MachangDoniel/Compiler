%{
	#include<bits/stdc++.h>
	using namespace std;
%}

ID 								[a-zA-Z][a-zA-Z0-9]*
STRING 							[a-zA-Z]
DIGIT 							[0-9]
HEADER							"TW"[ ]++[^\n]+[.h][\n]

%%
{HEADER}						{ printf("IMPORT HEADER\n"); }
"RANG"          				{ printf("DATA_TYPE_INT\n"); }
"PAIS"          				{ printf("DATA_TYPE_FLOAT\n"); }
"KOK"        					{ printf("DATA_TYPE_STRING\n"); }
"GHUR"          				{ printf("FOR\n"); }
"GHURAI"          				{ printf("WHILE\n"); }
"ONG"           				{ printf("IF\n"); }
"ONGYA"         				{ printf("ELSE IF\n"); }
"ONGYAKHAI"         			{ printf("ELSE\n"); }
"FUNU"        					{ printf("PRINT\n"); }
"JA"        					{ printf("RETURN\n"); }
"AJOL"          				{ printf("MAIN\n"); }
[=]             				{ printf("ASSIGNMENT\n"); }
[+]             				{ printf("PLUS\n"); }
[-]             				{ printf("MINUS\n"); }
[*]             				{ printf("MULTIPLICATION\n"); }
[/]             				{ printf("DIVISION\n"); }
[%]             				{ printf("MOD\n"); }
"^"             				{ printf("TO_THE_POWER\n"); }
\"[^\"]*\"						{ printf("LITERAL\n"); }
{ID}   							{ printf("IDENTIFIER\n"); }
[+-]?{DIGIT}+            		{ printf("INTEGER\n"); }
[+-]?{DIGIT}+[.]{DIGIT}+		{ printf("FLOAT\n"); }
[ \t\n]+        
"//"(.)*"\n"     				{ printf("SINGLE_LINE_COMMENT\n"); }
[/][*](.*|\n)*[*][/] 			{ printf("MULTI_LINE_COMMENT\n"); }
[.]             				{ printf("END_OF_STATEMENT\n"); }
[,]             				{ printf("MORE_STATEMENT\n"); }
"("             				{ printf("PARENTHESIS_START\n"); }
")"								{ printf("PARENTHESIS_END\n"); }
"{"            					{ printf("BRACES_START\n"); }
"}"            					{ printf("BRACES_END\n"); }
[<]             				{ printf("LESS_THAN\n"); }
[>]             				{ printf("GREATER_THAN\n"); }
[=][=]            				{ printf("EQUALS\n"); }
[!][=]            				{ printf("NOT EQUALS\n"); }
[<][=]          				{ printf("LESS_THAN_OR_EQUAL\n"); }
[>][=]          				{ printf("GREATER_THAN_OR_EQUAL\n"); }
[&][&]             				{ printf("LOGICAL AND\n"); }
[|][|]             				{ printf("LOGICAL OR\n"); }
[!]             				{ printf("LOGICAL NOT\n"); }
[&]             				{ printf("BITWISE AND\n"); }
[|]             				{ printf("BITWISE OR\n"); }
.               				{ printf("INVALID_CHARACTER: %s\n", yytext); }

%%

int yywrap(){
	return 1;
}

int main(){
	yyin=fopen("input.txt","r");
	yylex();
	return 0;
}