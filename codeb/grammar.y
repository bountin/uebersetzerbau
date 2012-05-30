%{

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "table.h"
#include "checks.h"
#include "code_gen.h"

#define YYERROR_VERBOSE

int yyerror(const char *msg) { /** Grammar errors **/
	fprintf(stderr, "Error: %s\n", msg);
	exit(2);
}
int yywrap() { return 1; }
main() { yyparse(); }
%}

%token T_PLUS T_MINUS T_MULT
%token T_CMP_LE
%token T_RETURN T_IF T_THEN T_GOTO T_VAR
%token T_END T_NOT T_AND
%token T_NUM
%token T_IDENTIFIER

/** Distribute tables by default **/
@autoinh params vars labels func_name

@attributes {int val;} 		T_NUM
@attributes {char *name;} 	T_IDENTIFIER

@attributes {struct symbol *labels_out, *labels_in, *labels_own_in, *labels_own; char* func_name;}					labeldefinition
@attributes {struct symbol *labels_out, *params, *vars_in, *labels_in, *vars_out, *vars, *labels; char* func_name;}	stats
@attributes {struct symbol *params_out, *params_in;}					parameters
@attributes {struct symbol *params, *vars_in, *vars_out, *labels_in, *labels_out, *vars, *labels; struct code_ptr *code; char* func_name;} 		stat

@attributes {struct symbol *params, *vars, *labels; struct code_ptr *code; }	expression add_expr mult_expr and_expr unary term
@attributes {struct symbol *params, *vars, *labels; }	call_parameters

/** Test used variables and labels **/
@traversal @preorder t

/** Generate ASM **/
@traversal @preorder asm

%%

program:
	functions
		@{	@asm printf(".text\n");
		@}
	;

functions:
	function functions
	|
	;

function:
	  T_IDENTIFIER '(' parameters ')' stats T_END ';'
		@{	@i @stats.labels_in@ = NULL;
			@i @stats.labels@ = @stats.labels_out@;

			@i @parameters.params_in@ = NULL;
			@i @stats.params@ = gen_para_regs(@parameters.params_out@, @stats.vars@);
			
			@i @stats.vars_in@ = NULL;
			@i @stats.vars@ = @stats.vars_out@;

			@i @stats.func_name@ = @T_IDENTIFIER.name@;
			
			@asm asm_func_head(@T_IDENTIFIER.name@);
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
		@{	@i  @parameters.params_out@ = @parameters.params_in@;
		@}
	;

stats:	
	  labeldefinition stat ';' stats
		@{
			@i @labeldefinition.labels_in@ = @stats.labels_in@;
			@i @stat.labels_in@ = @labeldefinition.labels_out@;
			@i @stats.1.labels_in@ = @stat.labels_out@;
			@i @stats.0.labels_out@ = @stats.1.labels_out@;
			
			@i @stat.vars_in@ = @stats.vars_in@;
			@i @stats.1.vars_in@ = @stat.vars_out@;
			@i @stats.0.vars_out@ = @stats.1.vars_out@;
			
			@i @labeldefinition.labels_own_in@ = NULL;

			@t check_duplicates(@stats.vars@, @stats.params@, @stats.labels@);

			@asm asm_labeldefinitions(@labeldefinition.func_name@, @labeldefinition.labels_own@);
			@asm execute_iburg(@stat.code@);
		@}
	| stat ';' stats
		@{
			@i @stat.labels_in@ = @stats.labels_in@;
			@i @stats.1.labels_in@ = @stat.labels_out@;
			@i @stats.0.labels_out@ = @stats.1.labels_out@;
			
			@i @stat.vars_in@ = @stats.vars_in@;
			@i @stats.1.vars_in@ = @stat.vars_out@;
			@i @stats.vars_out@ = @stats.1.vars_out@;

			@t check_duplicates(@stats.vars@, @stats.params@, @stats.labels@);
			@asm execute_iburg(@stat.code@);
		@}
	|
		@{
			@i @stats.labels_out@ = @stats.labels_in@;
			@i @stats.vars_out@ = @stats.vars_in@;

			@t check_duplicates(@stats.vars@, @stats.params@, @stats.labels@);
		@}
	;

labeldefinition:
	  labeldefinition T_IDENTIFIER ':'
		@{ 
			@i @labeldefinition.1.labels_in@ = @labeldefinition.0.labels_in@;
			@i @labeldefinition.0.labels_out@ = tbl_add_symbol(@labeldefinition.1.labels_out@, @T_IDENTIFIER.name@);

			@i @labeldefinition.1.labels_own_in@ = @labeldefinition.0.labels_own_in@;
			@i @labeldefinition.0.labels_own@ = tbl_add_symbol(@labeldefinition.1.labels_own@, @T_IDENTIFIER.name@);
		@}
	| T_IDENTIFIER ':'
		@{ 	
			@i @labeldefinition.labels_out@ = tbl_add_symbol(@labeldefinition.labels_in@, @T_IDENTIFIER.name@);
			@i @labeldefinition.labels_own@ = tbl_add_symbol(@labeldefinition.labels_own_in@, @T_IDENTIFIER.name@);
		@}
	;

stat:
	  T_RETURN expression
		@{	@i @stat.vars_out@ =  @stat.vars_in@;
			@i @stat.labels_out@ = @stat.labels_in@;

			@i @stat.code@ = create_code(TT_RETURN, @expression.code@, (code_ptr *)NULL);
		@}
	| T_GOTO T_IDENTIFIER
		@{ 	@i @stat.labels_out@ = @stat.labels_in@;
			@i @stat.vars_out@ =  @stat.vars_in@;

			@t check_label(@T_IDENTIFIER.name@, @stat.labels@);

			@i @stat.code@ = create_code_goto(@stat.func_name@, @T_IDENTIFIER.name@);
		@}
	| T_IF expression T_THEN stats T_END
		@{	@i @stat.vars_out@ = @stat.vars_in@;
			@i @stats.vars_in@ = @stat.vars@;
			@i @stats.vars@ = @stats.vars_out@;

			@i @stats.labels_in@ = @stat.labels_in@;
			@i @stat.labels_out@ = @stats.labels_out@;

			@i @stat.code@ = create_code_if(@expression.code@, get_if_id());

			@asm @revorder(1) printf("if_%li:\n", @stat.code@->val);
		@}
	| T_VAR T_IDENTIFIER '=' expression 	/* variable initialization */
		@{	@i @stat.vars_out@ = tbl_add_symbol(@stat.vars_in@, @T_IDENTIFIER.name@);
			@i @stat.labels_out@ = @stat.labels_in@;

			@i @stat.code@ = create_code_assign(@T_IDENTIFIER.name@, @expression.code@, @stat.vars@);
		@}
	| T_IDENTIFIER '=' expression		/* writing to variable */
		@{	@i @stat.vars_out@ =  @stat.vars_in@;
			@i @stat.labels_out@ = @stat.labels_in@;

			@t check_variable(@T_IDENTIFIER.name@, @stat.params@, @stat.vars@);

			@i @stat.code@ = create_code_assign(@T_IDENTIFIER.name@, @expression.code@, @stat.vars@);
		@}
	| T_MULT unary '=' expression		/* writing to memory */
		@{	@i @stat.vars_out@ =  @stat.vars_in@;
			@i @stat.labels_out@ = @stat.labels_in@;

			@i @stat.code@ = create_code(TT_MEM_WRITE, @unary.code@, @expression.code@);
		@}
	| term
		@{	@i @stat.vars_out@ =  @stat.vars_in@;
			@i @stat.labels_out@ = @stat.labels_in@;

			@i @stat.code@ = @term.code@;
		@}
	;

expression:
	  unary
		@{	@i @expression.code@ = @unary.code@;
		@}
	| add_expr
		@{	@i @expression.code@ = @add_expr.code@;
		@}
	| mult_expr
		@{	@i @expression.code@ = @mult_expr.code@;
		@}
	| and_expr
		@{	@i @expression.code@ = @and_expr.code@;
		@}
	| term T_CMP_LE term
		@{	@i @expression.code@ = create_code(TT_CMP_LE, @term.code@, @term.1.code@);
		@}
	| term '#' term
		@{	@i @expression.code@ = create_code(TT_CMP_NE, @term.code@, @term.1.code@);
		@}
	;

add_expr:
	  term T_PLUS term
		@{	@i @add_expr.code@ = create_code(TT_ADD, @term.code@, @term.1.code@);
 			@}
	| add_expr T_PLUS term
		@{	@i @add_expr.code@ = create_code(TT_ADD, @term.code@, @add_expr.1.code@);
		@}
	;

mult_expr:
	  term T_MULT term
		@{	@i @mult_expr.code@ = create_code(TT_MULT, @term.code@, @term.1.code@);
		@}
	| mult_expr T_MULT term
		@{	@i @mult_expr.code@ = create_code(TT_MULT, @term.code@, @mult_expr.1.code@);
		@}
	;

and_expr:
	  term T_AND term
		@{	@i @and_expr.code@ = create_code(TT_AND, @term.code@, @term.1.code@);
		@}
	| and_expr T_AND term
		@{	@i @and_expr.code@ = create_code(TT_AND, @term.code@, @and_expr.1.code@);
		@}
	;

unary:
	  T_NOT unary
		@{	@i @unary.code@ = create_code(TT_NOT, @unary.1.code@, (code_ptr *)NULL);
		@}
	| T_MINUS unary
		@{	@i @unary.code@ = create_code(TT_MINUS, @unary.1.code@, (code_ptr *)NULL);
		@}
	| T_MULT unary		/* reading from memory */
		@{	@i @unary.code@ = create_code(TT_READ, @unary.1.code@, (code_ptr *)NULL);
		@}
	| term
		@{	@i @unary.code@ = @term.code@;
		@}
	;

term:
	  '(' expression ')'
		@{	@i @term.code@ = @expression.code@;
		@}
	| T_NUM
		@{	@i @term.code@ = create_code_num(@T_NUM.val@);
		@}	
	| T_IDENTIFIER		/* reading from variable */
		@{	@i @term.code@ = create_code_var(@T_IDENTIFIER.name@, @term.params@, @term.vars@);
		@}
	| T_IDENTIFIER '(' call_parameters ')'
		@{	@i @term.code@ = (code_ptr *)NULL;
			@t not_supported("Function call");
		@}
	;

call_parameters:
	  expression ',' call_parameters
	| expression
	| 
	;
