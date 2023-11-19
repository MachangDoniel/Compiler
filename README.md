
# Compiler
In this project, we'll learn how to build a compiler.



# Installation
Download those tools.
1. [VS code](https://code.visualstudio.com/download) or any Editor
2. [Flex](https://en.freedownloadmanager.org/Windows-PC/Flex-Windows-Lex-and-Yacc-FREE.html)


## How to run

1. Clone the project in your local repository.
```bash
git clone https://github.com/MachangDoniel/Compiler.git
```
2. Open the copied project folder in your code editor ([VS code](https://code.visualstudio.com/download)).
3. Open a terminal on [VS code](https://code.visualstudio.com/download) or command prompt(cmd) to your folder.


## Flex
Check your [Flex](https://en.freedownloadmanager.org/Windows-PC/Flex-Windows-Lex-and-Yacc-FREE.html) version
```bash
flex --version
```

Tokenize your source file. ( replace "1907121.l" with your source file name), it'll create a lex.yy.c file
```bash
flex 1907121.l
```

Compile the C program. ( replace "output" with any literal you want to run the program)
```bash
gcc lex.yy.c -o output
```
For cpp Program
```bash
g++ lex.yy.c -o output
```
Run the program 
###### in command prompt
```bash
output
```
###### in VS code terminal
```bash
./output
```
#### ShortCut:
```bash
flex 1907121.l
g++ lex.yy.c -o output
./output
```

## Bison
Check your [Bison](https://gnuwin32.sourceforge.net/packages/bison.htm) version
```bash
bison --version
```
$Create Lexical Analyzer: $ Run flex on the Flex file to generate a C source file:
```bash
flex 1907121.l
```

$ Create Parser: $ Run bison on the Bison file to generate a C source file
```bash
bison -d 1907121.y
```

Compile the C program. ( replace "output" with any literal you want to run the program)
```bash
gcc 1907121.tab.c lex.yy.c -o output
```
For cpp Program
```bash
g++ 1907121.tab.c lex.yy.c -o output
```
Run the program 
###### in command prompt
```bash
output
```
###### in VS code terminal
```bash
./output
```

Shortcut:
```bash
flex 1907121.l
bison -d 1907121.y
g++ 1907121.tab.c lex.yy.c -o output
./output
```
