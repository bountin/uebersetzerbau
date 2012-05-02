%{

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "table.h"
#include "checks.h"

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

%{
	struct symbol 	*labels = NULL;
%}

@autoinh params

@attributes {int val;} 		T_NUM
@attributes {char *name;} 	T_IDENTIFIER
@attributes {struct symbol *labels_out, *labels_in;}	labeldefinition
@attributes {struct symbol *labels_out, *params, *vars_in, *vars_out;}	stats
@attributes {struct symbol *labels_out, *params_out, *vars_out;}	function
@attributes {struct symbol *params_out, *params_in;}	parameters

@attributes {struct symbol *params, *vars_in, *vars_out;} stat
@attributes {struct symbol *params; }	expression add_expr mult_expr and_expr unary term call_parameters

@traversal @preorder t
%%

program:
	function program
	| 
	;

function:
	  T_IDENTIFIER '(' parameters ')' stats T_END ';'
		@{
			@i @function.labels_out@ = @stats.labels_out@;

			@i @parameters.params_in@ = NULL;
			@i @function.params_out@ = @parameters.params_out@;
			@i @stats.params@ = @parameters.params_out@;
			
			@i @stats.vars_in@ = NULL;
			@i @function.vars_out@ = @stats.vars_out@;

			@t labels = @function.labels_out@;
		@}
	;

parameters:
	  T_IDENTIFIER ',' parameters
		@{	@i @parameters.1.params_in@ = @parameters.0.params_in@;
			@i @parameters.0.params_out@ = tbl_add_symbol(@parameters.1.params_out@, @T_IDENTIFIER.name@);
		@}
	| T_IDENTIFIER
		@{ 	@i @parameters.params_out@ = tbl_add_symbol(@parameters.params_in@, @T_IDENTIFIER.name@);
		@}
	|
		@{	@i  @parameters.params_out@ = NULL;
		@}
	;

stats:	
	  labeldefinition stat ';' stats
		@{
			@i @labeldefinition.labels_in@ = (symbol *)NULL;
			@i @stats.0.labels_out@ = tbl_merge(@labeldefinition.labels_out@, @stats.1.labels_out@);
			
			@i @stats.1.params@ = @stats.params@;
			@i @stat.params@ = @stats.params@;

			@i @stat.vars_in@ = @stats.vars_in@;
			@i @stats.1.vars_in@ = @stat.vars_out@;
			@i @stats.0.vars_out@ = @stats.1.vars_out@;
		@}
	| stat ';' stats
		@{
			@i @stats.0.labels_out@ = @stats.1.labels_out@;
			
			@i @stats.1.params@ = @stats.params@;
			@i @stat.params@ = @stats.params@;

			@i @stat.vars_in@ = @stats.vars_in@;
			@i @stats.1.vars_in@ = @stat.vars_out@;
			@i @stats.vars_out@ = @stats.1.vars_out@;
		@}
	|
		@{
			@i @stats.labels_out@ = NULL;
			@i @stats.vars_out@ = @stats.vars_in@;
		@}
	;

labeldefinition:
	  labeldefinition T_IDENTIFIER ':'
		@{ 	@i @labeldefinition.1.labels_in@ = @labeldefinition.0.labels_in@;
			@i @labeldefinition.0.labels_out@ = tbl_add_symbol(@labeldefinition.1.labels_out@, @T_IDENTIFIER.name@);
		@}
	| T_IDENTIFIER ':'
		@{ 	@i @labeldefinition.labels_out@ = tbl_add_symbol(@labeldefinition.labels_in@, @T_IDENTIFIER.name@);
		@}
	;

stat:
	  T_RETURN expression
		@{	@i @stat.vars_out@ =  @stat.vars_in@;
		@}
	| T_GOTO T_IDENTIFIER
		@{ 	@t check_label(@T_IDENTIFIER.name@, labels);
			@i @stat.vars_out@ =  @stat.vars_in@;
		@}
	| T_IF expression T_THEN stats T_END
		@{	@i @stat.vars_out@ =  @stat.vars_in@;
			@i @stats.vars_in@ = NULL;
		@}
	| T_VAR T_IDENTIFIER '=' expression 	/* variable initialization */
		@{	@i @stat.vars_out@ = tbl_add_symbol(@stat.vars_in@, @T_IDENTIFIER.name@);
		@}
	| T_IDENTIFIER '=' expression		/* writing to variable */
		@{	@i @stat.vars_out@ =  @stat.vars_in@;
		@}
	| T_MULT unary '=' expression		/* writing to memory */
		@{	@i @stat.vars_out@ =  @stat.vars_in@;
		@}
	| term
		@{	@i @stat.vars_out@ =  @stat.vars_in@;
		@}
	;

expression:
	  unary
	| add_expr
	| mult_expr
	| and_expr
	| term T_CMP_LE term
	| term '#' term
	;

add_expr:
	  term T_PLUS term
	| term T_PLUS add_expr
	;

mult_expr:
	  term T_MULT term
	| term T_MULT mult_expr
	;

and_expr:
	  term T_AND term
	| term T_AND and_expr
	;

unary:
	  T_NOT unary
	| T_MINUS unary
	| T_MULT unary		/* reading from memory */
	| term
	;

term:
	  '(' expression ')'
	| T_NUM
	| T_IDENTIFIER
		@{
		@}
	| T_IDENTIFIER '(' call_parameters ')'
	;

call_parameters:
	  expression ',' call_parameters
	| expression
	| 
	;
