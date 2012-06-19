#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "asm.h"
#include "reg_management.h"

char * caller_saved[] = {"rax", "rcx", "rdx", "rsi", "rdi", "r8", "r9", "r10", "r11"};

void asm_func_head(char* func_name) {
	printf(".globl %1$s\n.type %1$s, @function\n%1$s:\n", func_name);
}

void asm_labeldefinitions(char* func_name, symbol* labels) {
	symbol* label = labels;
	while (label != NULL) {
		printf("%s_%s:\n", func_name, label->name);
		label = label->next;
	}
}

void asm_mov(char* src, char* dest) {
	#ifdef MY_DEBUG
	printf("\t# asm_mov(%s, %s)\n", src, dest);
	#endif

	if (strcmp(src, dest)) {
		printf("\tmovq %%%s, %%%s\n", src, dest);
	}
}

char* asm_add(char* p1, char* p2) {
	char* r;

	#ifdef MY_DEBUG
	printf("\t# asm_add(%s, %s)\n", p1, p2);
	printf("\t# p1: %i, p2: %i\n", reg_is_param(p1), reg_is_param(p2));
	#endif

	if (reg_is_param(p1) && reg_is_param(p2)) {
		// Both operands are parameters
		r = newreg();
		printf("\tmovq %%%s, %%%s\n", p1, r);
		printf("\taddq %%%s, %%%s\n", p2, r);
	} else if (reg_is_tmp(p1) && reg_is_tmp(p2)) {
		// Both operands are from tmp registers
		printf("\taddq %%%s, %%%s\n", p2, p1);
		r = p1;
		freereg(p2);
	} else if (reg_is_tmp(p1) && reg_is_param(p2)) {
		// p1: tmp, p2: param
		printf("\taddq %%%s, %%%s\n", p2, p1);
		r = p1;
	} else if (reg_is_param(p1) && reg_is_tmp(p2)) {
		// p1: param, p2: tmp
		printf("\taddq %%%s, %%%s\n", p1, p2);
		r = p2;
	}
	
	return r;
}

char* asm_mult(char* p1, char* p2) {
	char* r;

	#ifdef MY_DEBUG
	printf("\t# asm_mult(%s, %s)\n", p1, p2);
	printf("\t# p1: %i, p2: %i\n", reg_is_param(p1), reg_is_param(p2));
	#endif

        if (reg_is_param(p1) && reg_is_param(p2)) {
                // Both operands are parameters
		r = newreg();
		asm_mov(p1, r);
		printf("\timul %%%s, %%%s\n", p2, r);
        } else if (reg_is_tmp(p1) && reg_is_tmp(p2)) {
                // Both operands are from tmp registers
                r = p1;
                freereg(p2);
		printf("\timul %%%s, %%%s\n", p2, p1);
        } else if (reg_is_tmp(p1) && reg_is_param(p2)) {
                // p1: tmp, p2: param
                r = p1;
		printf("\timul %%%s, %%%s\n", p2, p1);
        } else if (reg_is_param(p1) && reg_is_tmp(p2)) {
                // p1: param, p2: tmp
                r = p2;
		printf("\timul %%%s, %%%s\n", p1, p2);
        }

	return r;
}

char* asm_and(char* p1, char* p2) {
	char* r;

	#ifdef MY_DEBUG
        printf("\t# asm_and(%s, %s)\n", p1, p2);
        printf("\t# p1: %i, p2: %i\n", reg_is_param(p1), reg_is_param(p2));
        #endif

        if (reg_is_param(p1) && reg_is_param(p2)) {
                // Both operands are parameters
                r = newreg();
                printf("\tmovq %%%s, %%%s\n", p1, r);
                printf("\tandq %%%s, %%%s\n", p2, r);
        } else if (reg_is_tmp(p1) && reg_is_tmp(p2)) {
                // Both operands are from tmp registers
                printf("\tandq %%%s, %%%s\n", p2, p1);
                r = p1;
                freereg(p2);
        } else if (reg_is_tmp(p1) && reg_is_param(p2)) {
                // p1: tmp, p2: param
                printf("\tandq %%%s, %%%s\n", p2, p1);
                r = p1;
        } else if (reg_is_param(p1) && reg_is_tmp(p2)) {
                // p1: param, p2: tmp
                printf("\tandq %%%s, %%%s\n", p1, p2);
                r = p2;
        }

        return r;
}

char* asm_cmp_le(char* p1, char* p2) {
        char* r;

        #ifdef MY_DEBUG
        printf("\t# asm_cmp_le(%s, %s)\n", p1, p2);
        printf("\t# p1: %i, p2: %i\n", reg_is_param(p1), reg_is_param(p2));
        #endif

        if (reg_is_tmp(p1)) {
                r = p1;
                if (reg_is_tmp(p2)) {
                        freereg(p2);
                }
        } else if (reg_is_tmp(p2)) {
                r = p2;
        } else {
                r = newreg();
        }

        printf("\tcmp %%%s, %%%s\n", p1, p2);
        printf("\tsetge %%%s\n", get_8reg(r));
        printf("\tand $1, %%%s\n", r);
        return r;	
}

char* asm_cmp_ne(char* p1, char* p2) {
	char* r;

	#ifdef MY_DEBUG
        printf("\t# asm_cmp_ne(%s, %s)\n", p1, p2);
	printf("\t# p1: %i, p2: %i\n", reg_is_param(p1), reg_is_param(p2));
        #endif

	if (reg_is_tmp(p1)) {
		r = p1;
		if (reg_is_tmp(p2)) {
			freereg(p2);
		}
	} else if (reg_is_tmp(p2)) {
		r = p2;
	} else {
		r = newreg();
	}
	printf("\tcmp %%%s, %%%s\n", p1, p2);
	printf("\tsetnz %%%s\n", get_8reg(r));
	printf("\tand $1, %%%s\n", r);
	return r;
}

char* asm_not(char* p1) {
	char* r = p1;

	#ifdef MY_DEBUG
	printf("\t# asm_not(%s)\n", p1);
	printf("\t# p1: %i\n", reg_is_param(p1));
	#endif 

	if (reg_is_param(p1)) {
		r = newreg();
		asm_mov(p1, r);
	}
	printf("\tnot %%%s\n", r);
	return r;
}

char* asm_minus(char* p1) {
	char* r = p1;

	#ifdef MY_DEBUG
	printf("\t# asm_minus(%s)\n", p1);
	printf("\t# p1: %i\n", reg_is_param(p1));
	#endif

	if (reg_is_param(p1)) {
		r = newreg();
		asm_mov(p1, r);
	}
	printf("\tneg %%%s\n", r);
	return r;
}

char* asm_load(char* p1) {
	char* r = p1;

        #ifdef MY_DEBUG
        printf("\t# asm_load(%s)\n", p1);
        printf("\t# p1: %i\n", reg_is_param(p1));
        #endif

        if (reg_is_param(p1)) {
                r = newreg();
        }
        printf("\tmov (%%%s), %%%s\n", p1, r);
        return r;
}

char * asm_func_call(code_ptr * bnode) {
	char * ret_reg = newreg();
	int i, offset;
	char * argument_register[] = {"rdi", "rsi", "rdx", "rcx", "r8", "r9"};
	code_ptr * bnode_start = bnode;
	char * reg;

	// Save caller saved registers
	#ifdef MY_DEBUG
	printf("# Saving caller saved registers\n");
	#endif
	for (i=0; i<9; i++) {
		if (strcmp(ret_reg, caller_saved[i])==0) {
			continue;
		}
		printf("\tpushq %%%s\n", caller_saved[i]);
	}

	// Prepare parameters
	i = 0;
	bnode = LEFT_CHILD(bnode_start); // bnode_start is a TT_FUNC!! Haz a TT_FUNC_PARAM as LC
	#ifdef MY_DEBUG
	printf("# Cp'ing params to right registers\n");
	#endif
	while(bnode != NULL) {
		if (bnode->op == TT_FUNC_PARAM) {
			reg = LC_REG(bnode);
		} else {
			reg = bnode->reg;
		}
		offset = callersaved_to_offset(reg);
		if (offset <= 32 && offset != -1) {
			printf("\tmovq %i(%%rsp), %%%s\n", offset, argument_register[i]);
		} else {
			printf("\tmovq %%%s, %%%s\n", reg, argument_register[i]);
		}
	
		bnode = RIGHT_CHILD(bnode);
		i++;
	}

	// Call and save result
	printf("\tcall %s\n", bnode_start->name);
	asm_mov("rax", ret_reg);

	// Load caller saved registers
	#ifdef MY_DEBUG
	printf("# Loading caller saved registers\n");
	#endif
	for(i=9-1; i>=0; i--) {
		if (strcmp(ret_reg, caller_saved[i])==0) {
			continue;
		}
		printf("\tpopq %%%s\n", caller_saved[i]);
	}

	return ret_reg;
}

int callersaved_to_offset(char * reg) {
	int i;

	for (i=0; i<9; i++ ) {
		if (strcmp(reg, caller_saved[8-i])==0) {
			return i * 8;
		}
	}

	return -1;
}

void asm_ret() {
	printf("\tret\n");
}
