#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "code_gen.h"

long if_id = 0;

long get_if_id() {
	return ++if_id;
}

void execute_iburg(code_ptr* code) {
	burm_label(code); burm_reduce(code, 1);
}

void not_supported(char* production) {
	printf("Tried to compile an unsupported command: %s\n", production);
	exit(3);
}

code_ptr *create_code(int type, code_ptr* left_child, code_ptr* right_child) {
	code_ptr *c = (code_ptr *)malloc(sizeof(code_ptr));

	OP_LABEL(c) = type;
	LEFT_CHILD(c) = left_child;
	RIGHT_CHILD(c) = right_child;

	return c;
}

code_ptr *create_code_num(long number) {
	code_ptr *c = create_code(TT_NUM, (code_ptr *)NULL, (code_ptr *)NULL);
	c->val = number;
	return c;
}

code_ptr* create_code_var(char* name, symbol* params, symbol* vars) {
	char* reg;
	code_ptr* c;

	check_variable(name, params, vars);

	// First look for params
	reg = tbl_find_reg(name, params);

	if (reg == NULL) {
		// 'name' not found @params, look @vars
		reg = tbl_find_reg(name, vars);
		if (reg == NULL) {
			printf("THIS SHOULD NEVER HAPPEN: create_code_var(%s)\n", name);
			tbl_print(params);
			tbl_print(vars);
			exit(3);
		}
	} 
	c = create_code(TT_VARIABLE, (code_ptr *)NULL, (code_ptr *)NULL);
	c->name = strdup(name);
	c->reg = reg;
	return c;	
}

code_ptr* create_code_goto(char* func_name, char* label_name) {
	code_ptr* c = create_code(TT_GOTO, (code_ptr *)NULL, (code_ptr *)NULL);
	char* asm_lbl;

	asm_lbl = strdup(func_name);
	strcat(asm_lbl, "_");
	strcat(asm_lbl, label_name);

	c->name = asm_lbl;
	return c;		
}

code_ptr* create_code_if(code_ptr* expr, long id) {
	code_ptr* c = create_code(TT_IF, expr, NULL);
	
	c->val = id;
	return c;
}

code_ptr* create_code_assign(char* variable, code_ptr* child) {
	code_ptr* c = create_code(TT_ASSIGN, child, NULL);
	code_print(c);
	c->name = strdup(variable);
	return c;
}

symbol* gen_para_regs(symbol* parameters) {
	char *registers[6] = {"rdi", "rsi", "rdx", "rcx", "r8", "r9"};
	int i = 0;
	symbol 	*para_start = parameters;

	while (parameters != (symbol *)NULL) {
		if (i > 5) {
			not_supported("more than 6 function parameters");
		}
		parameters->reg = strdup(registers[i++]);
		parameters = parameters->next;
	}

	#ifdef MY_DEBUG
	printf("#-- ASSIGNING PARAMETER REGISTERS\n");
	tbl_print(para_start);
	printf("\n");
	#endif

	return para_start;
}

void code_print(code_ptr* c) {
	printf("# - CODE INFO\n");
	printf("#  op: %i\n#  val: %li\n#  name: %s\n#  reg: %s\n#  LC: %p\n#  RC: %p\n", c->op, c->val, c->name, c->reg, LEFT_CHILD(c), RIGHT_CHILD(c));
}
