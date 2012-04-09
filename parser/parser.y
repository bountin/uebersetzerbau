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
%token T_CMP_LE

%token T_RETURN T_IF T_THEN T_GOTO T_VAR
%token T_END T_NOT T_AND


%token T_NUM
%token T_IDENTIFIER

%%

program:
	function program
	| 
	;

function:
	  T_IDENTIFIER '(' parameters ')' stats T_END ';'
	;

parameters:
	  T_IDENTIFIER ',' parameters
	| T_IDENTIFIER
	|
	;

stats:	
	  labeldefinition stat ';' stats
	| stat ';' stats
	|
	;

labeldefinition:
	  T_IDENTIFIER ':'
	;

stat:
	  T_RETURN expression
	| T_GOTO T_IDENTIFIER
	| T_IF expression T_THEN stats T_END
	| T_VAR T_IDENTIFIER '=' expression 	/* variable initialization */
	| T_IDENTIFIER '=' expression		/* writing to variable */
	| T_MULT unary '=' expression		/* writing to memory */
	| term
	;

expression:
	  unary
	| term T_PLUS term 	{ $$ = $1 + $3 }
	| term T_MULT term	{ $$ = $1 * $3 }
	| term T_AND  term
	| term T_CMP_LE term
	| term '#' term
	;

unary:
	  T_NOT unary
	| T_MINUS unary
	| T_MULT unary		/* reading from memory */
	| term
	;

term:
	  '(' expression ')'	{ $$ = $2; }
	| T_NUM 		{ $$ = $1; }
	| T_IDENTIFIER
	| T_IDENTIFIER '(' call_parameters ')'
	;

call_parameters:
	  expression ',' call_parameters
	| expression
	| 
	;
