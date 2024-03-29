%{
#include <bits/stdc++.h>
using namespace std;
#include <string>
#include <fstream>
#include <ctime>
#include <cmath>
#include <vector>

// Global variables
FILE *input, *output;


int yylex(void);
void yyerror(const char* s);

int variable=0, keyword=0, statement=0;
map<string,int>mp;
bool variableInitializeCheckflag=false, headerInitializeCheckflag=false, mainFunctionInitializeCheckflag=false;

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
    for (int i = 0; i < variable; ++i) {
        if (vars[i].varName == name) {
            return i;
        }
    }
    return -1;
}

// Set data type of a var from the struct structure
void setDataType(int type) {
    for (int i = 0; i < variable; ++i) {
        if (vars[i].varDataType == -9) {
            vars[i].varDataType = type;
        }
    }
}

    
%}

%union{
    double var;
    char* varString;
}

//Mentioning tokens and associativity

%error-verbose
%token START INT CHAR STRING FLOAT DOUBLE SWITCH CASE DEFAULT SWAP COMBINATION PERMUTATION POW RANDOM SCAN IF ELIF ELSE WHILE SIN NSIN COS NCOS TAN NTAN LOG2 LOG10 FACTOR PRIME OUTPUT FOR TO INC DEC MAX MIN ID NUM LITERAL LLITERAL PLUS MINUS MULTI DIVI EQUALS NOTEQUAL GT GTE LT LTE 
%left PLUS MINUS
%left MULTI DIVI

// Mentioning type of token

%type<varString> ID1 ID
%type<var>whileFunc factorialFunc caseNumber primeFunc defaultOption switchCase e expression elif lastElse boolianExpr powerFunc randFunc minFunc maxFunc declaration assignation condition forLoop printFunc swap combfuncn perfuncn scanFunc program statement TYPE START INT CHAR FLOAT DOUBLE SWITCH CASE DEFAULT SWAP COMBINATION PERMUTATION POW RANDOM SCAN WHILE SIN NSIN COS NCOS TAN NTAN LOG2 LOG10 FACTOR PRIME  OUTPUT IF ELIF ELSE FOR TO INC DEC MAX MIN NUM LITERAL LLITERAL PLUS MINUS MULTI DIVI EQUALS NOTEQUAL GT GTE LT LTE 


    // Grammar Rules Declarations
%%

program: START '(' statement ')'	{printf("\nProgram detected correctly\n");}
		;

statement:
    | declaration statement
	| assignation statement
	| condition statement
	| forLoop statement
	| switchCase statement
	| printFunc statement
	| scanFunc statement
	| whileFunc statement
	| powerFunc statement
	| randFunc statement
	| factorialFunc statement
	| primeFunc statement
	| minFunc statement
	| maxFunc statement
    | combfuncn statement
    | perfuncn statement
    | swap statement
	;

//Reading a variable

scanFunc: SCAN'(' ID ')'';'{
	int i = findVarIndex($3);
	printf("\nThis function reads the variable %s\n",vars[i].varName);
    }
	;

//WHILE LOOP

whileFunc: WHILE'(' NUM ')'';' {
	int i = $3;
    printf("\n\nWHILE LOOP from %d to 1 :\n",i);
	while(i>0){
		printf("%d ", i);
        i=i-1;
	}
}
;

//FOR LOOP

forLoop: FOR '{' NUM ',' NUM ',' INC NUM '}' '(' statement ')' {
	printf("\nINCREMENTING FOR LOOP: \n");
	int i = $3;
	int j = $5;
	int inc = $8;
	int k;
    printf("for %d to %d: \n",i,j);
	for(k=i; k<=j; k=k+inc){
		printf("%d ", k);
	}
    
		
}
	| FOR '{' NUM ',' NUM ',' NUM INC '}' '(' statement ')' {
	printf("\nINCREMENTING FOR LOOP: \n");
	int i = $3;
	int j = $5;
	int inc = $7;
	int k;
    printf("for %d to %d: \n",i,j);
	for(k=i; k<=j; k=k+inc){
		printf("%d ", k);
	}
    
		
}
	| FOR '{' NUM ',' NUM ',' DEC NUM '}' '(' statement ')' {
	printf("\nDECREMENTING FOR LOOP: \n");
	int i = $3;
	int j = $5;
	int dec = $8;
	int k;
    printf("for %d to %d: \n",i,j);
	for(k=i; k>=j; k=k-dec){
		printf("%d ", k);
	}
}

	| | FOR '{' NUM ',' NUM ',' NUM DEC '}' '(' statement ')' {
	printf("\nDECREMENTING FOR LOOP: \n");
	int i = $3;
	int j = $5;
	int dec = $7;
	int k;
    printf("for %d to %d: \n",i,j);
	for(k=i; k>=j; k=k-dec){
		printf("%d ", k);
	}
    
}
;

//IF ELSE IF ELSE LOOP
	
condition: IF'(' boolianExpr ')''('statement')' elif lastElse {
	printf("\nIF CONDITION:");
	int i = $3;
	if(i==1){
		printf("\nTRUE");
	}
	else{
		printf("\nFALSE");
	}
}
	;
elif: ELIF '(' boolianExpr ')''(' statement ')' elif {
	printf("\nELSE IF CONDITION:");
	int i = $3;
	if(i==1){
		printf("\nTRUE");
	}
	else{
		printf("\nFALSE");
	}
}
	|
	;
lastElse: ELSE '(' statement ')' {
	printf("\nELSE CONDITION:");
}
	|

;

//Boolian expressions

boolianExpr: expression EQUALS expression {
	if($1==$3){
		$$ = 1;
	}
	else{
		$$ = 0;
	}
}
	| expression NOTEQUAL expression {
	if($1!=$3){
		$$ = 1;
	}
	else{
		$$ = 0;
	}
}
	| expression GT expression {
	if($1>$3){
		$$ = 1;
	}
	else{
		$$ = 0;
	}
}
	| expression GTE expression {
	if($1>=$3){
		$$ = 1;
	}
	else{
		$$ = 0;
	}
}
	| expression LT expression {
	if($1<$3){
		$$ = 1;
	}
	else{
		$$ = 0;
	}
}
	| expression LTE expression {
	if($1<=$3){
		$$ = 1;
	}
	else{
		$$ = 0;
	}
}
;
//SWITCH-CASE
switchCase: SWITCH '(' ID ')' '{' caseNumber defaultOption '}' {
	printf("\nSwitch Case demo.\n");
}
	;

caseNumber: CASE NUM '{' statement '}' caseNumber {
	printf("\nCase no: %d\n", $2);
}
	|
	;
defaultOption: DEFAULT '{' statement '}'
{
    printf("\nDefault executed\n");
}
	;


//SOME FUNCTIONS


//RETURNING RANDOM VALUE

randFunc: RANDOM '(' NUM ',' NUM ')'';'	{		
    srand(time(NULL));
	int x = rand();
	printf("\nRandom value = %d ", x);
    }
; 
//PRIME CHECKING

primeFunc: PRIME '(' NUM ')' ';'  {
	int i, fl = 0;
	int n = $3;
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

    }
    ;  

//FACTORIAL FUNCTION

factorialFunc: FACTOR '(' NUM ')' ';'	{
	int j=$3, fact = 1;
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
	
    }
;

//COMBINATION FUNCTION
combfuncn: COMBINATION '(' NUM ',' NUM ')' ';'{
    int i,n=$3 , r=$5, factn=1, factr=1, factrn =1,res;
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
}

//PERMUTATION FUNCTION
perfuncn: PERMUTATION '(' NUM ',' NUM ')' ';'{
    int i,n=$3 , r=$5, factn=1, factrn =1,res;
    for(i = 1; i <= n; i++){
			    factn = factn*i;
		    }
    for(i = 1; i <= n-r; i++){
			    factrn = factrn*i;
		    }
    res = factn/factrn;
    printf("\nPermutation result= %d\n",res);
}

//SWAP FUNCTION
swap: SWAP '(' NUM ',' NUM ')' ';'{
    int x=$3,y=$5,temp;
    temp = x;
    x = y;
    y = temp;
    printf("\nSwapped Numbers= (%d,%d)\n",x,y);
}  
        

// POWER FUNCTION

    powerFunc: POW '(' NUM ',' NUM ')'';'	{		
	int x = pow($3, $5);
	printf("\nPower value is %d ", x);
    }
;
	


//Show() function to output something

printFunc: OUTPUT '(' ID ')'';'{
	int i = findVarIndex($3);
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
}
	;


//MAXIMUM DETECTION

maxFunc: MAX '(' ID ',' ID')'';'{
	int i = findVarIndex($3);
	int j = findVarIndex($5);
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
}
	;
	
//MINIMUM DETECTION

minFunc: MIN '(' ID ',' ID')'';'{
	int i = findVarIndex($3);
	int j = findVarIndex($5);
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
}
	;
	





	


// Variable declarations

declaration: TYPE ID1 ';' {
    if (mp.find($2) != mp.end()) {
        printf("\nError: Duplicate variable '%s' declared\n", $2);
    } else {
        mp[$2] = $1;
        setDataType($1);
        printf("\nThe variable %s is declared successfully\n", $2);
    }
}
;

TYPE: CHAR	{$$ = 0; printf("\nCharacter variable");}
	| FLOAT	{$$ = 2; printf("\nFloat variable");}
    | INT	{$$ = 1; printf("\nInteger variable");}
    | DOUBLE	{$$ = 3; printf("\nDouble variable");}
	;

ID1: ID1 ',' ID {
		
		vars[variable].varName=$3;
		printf("\nThe variable is %s", $3);
		vars[variable].varDataType =  -9;
		variable = variable + 1;

	}
	| ID {
		vars[variable].varName= $1;
		printf("\nThe variable is %s", $1);
		vars[variable].varDataType =  -9;
		variable = variable + 1;
	    strcpy($$, $1);
    }
	;
	
// Value Assignment to variable

assignation: ID '=' expression ';' {
	$$ = $3;
		int i = findVarIndex($1);
		if(vars[i].varDataType==0){
			vars[i].cvar = (char*)&$3 - 'a' ;
			printf("\nASSIGNATION: \nThe variable is %s\n", vars[i].cvar);
		}
		else if(vars[i].varDataType==1){
			vars[i].ivar = $3;
			printf("\nASSIGNATION: \nThe variable is %d\n", vars[i].ivar);
		}
		else if(vars[i].varDataType==2){
			vars[i].fvar = (float)$3;
			printf("\nASSIGNATION: \nThe variable is %f\n", vars[i].fvar);
		}
        else if(vars[i].varDataType==3){
			vars[i].dvar = (double)$3;
			printf("\nASSIGNATION: \nThe variable is %lf\n", vars[i].dvar);
		}
    }
	;

expression: e {$$ = $1;}
	;
e: e PLUS e {$$ = $1 + $3; }
	| e MINUS e {$$ = $1 - $3;}
	| e MULTI e {$$ = $1 * $3;}
	| e DIVI e 
	    {if($3 != 0)
	    {
		$$ = $1 / $3;
	    }
	    else{
		printf("\nDivision not possible. Logical Error");
    	}
        }
	| '(' e ')' {$$ = $2;}
    | NUM  {$$ = $1;}
    | SIN e 			{printf("\nsin(%lf)= %lf\n",$2,sin($2*3.1416/180)); $$=sin($2*3.1416/180);}
    | NSIN e   {printf("\n nsin(%lf)= %lf degree\n",$2, ceil((asin($2) * 180) / 3.1416)); $$=ceil((asin($2) * 180) / 3.1416);}
	| COS e			{printf("\ncos(%lf)= %lf\n",$2,cos($2*3.1416/180)); $$=cos($2*3.1416/180);}
    | NCOS e   {printf("\n ncos(%lf)= %lf degree\n",$2, ceil((acos($2) * 180) / 3.1416)); $$=ceil((acos($2) * 180) / 3.1416);}
    | TAN e 			{printf("\ntan(%lf)= %lf\n",$2,tan($2*3.1416/180)); $$=tan($2*3.1416/180);}
    | NTAN e   {printf("\n ntan(%lf)= %lf degree\n",$2, ceil((atan($2) * 180) / 3.1416)); $$=ceil((atan($2) * 180) / 3.1416);}
	| LOG2 e 			{printf("\nlog2(%lf)= %lf\n",$2,(log($2*1.0)/log(2.0))); $$=(log($2*1.0)/log(2.0));}
    | LOG10 e 			{printf("\nlog10(%lf)= %lf\n",$2,(log($2*1.0)/log(10.0))); $$=(log($2*1.0)/log(10.0));}
    
    | ID {
	    int indexOfVar = findVarIndex($1);
	    if(indexOfVar == -9)
	    {
		yyerror("Invalid variable mentioned");
        }
	    else
	    {
		if(vars[indexOfVar].varDataType == 1)
		{
			$$ = vars[indexOfVar].ivar;
		}
		else if(vars[indexOfVar].varDataType == 2)
		{
			$$ = vars[indexOfVar].fvar;
		}
	}
    }
	;

%%




void yyerror(const char* s) {
    cerr << s << endl;
}
int main() {
    input = freopen("input.txt", "r", stdin); /// taking input
	// output = freopen("output.txt", "w", stdout); // output in file
	yyparse();
	return 0;
}