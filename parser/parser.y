%{

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int yyerror(const char *msg) {
	fprintf(stderr, "Error: %s\n", msg);
	exit(2);
}

int yywrap() {
	return 1;
}

main()
{
	yyparse();
}

#define YYERROR_VERBOSE 

%}

%token T_PLUS T_MINUS T_MULT
%token T_SEMICOLON
%token T_CMP_LE

%token T_RETURN
%token T_END T_NOT T_AND


%token T_NUM
%token T_IDENTIFIER

%%

program:
	  funcdef ';'
	;

funcdef:
	  T_IDENTIFIER '(' params ')' stats T_END
	;

params:
	  param
	;

param:	  T_IDENTIFIER ','
	;

stats:	  T_RETURN expr
	;

expr:	  unary
	| term T_PLUS term 	{ $$ = $1 + $3 }
	| term T_MULT term	{ $$ = $1 * $3 }
	| term T_AND  term	{ }
	;

unary:
	  T_MINUS unary
	| term
	;

term:
	  '(' expr ')' 		{ $$ = $2; }
	| T_NUM 		{ $$ = $1; }
	| T_IDENTIFIER
	| T_IDENTIFIER '(' expr ')'
	;
