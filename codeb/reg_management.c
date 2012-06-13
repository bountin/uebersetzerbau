#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "reg_management.h"

char *  callee_saved_avail[] = {"rbx", "r12", "r13", "r14", "r15"};

int get_reg_number(char *r) {
	int i=0;
	for(;i<REG_MAX;i++) {
		if (strcmp(reg[i], r) == 0) {
			return i;
		}
	}
	
	printf("D'oh! register not found: %s\n", r);
	exit(3); 
}

char* get_8reg(char* r) {
	if (strcmp(r, "rax") == 0) {
		return "al";
	} else if (strcmp(r, "r11") == 0) {
		return "r11b";
	} else if (strcmp(r, "rdi") == 0) {
		return "dil";
	} else if (strcmp(r, "rsi") == 0) {
		return "sil";
	} else if (strcmp(r, "rdx") == 0) {
		return "dl";
	} else if (strcmp(r, "rcx") == 0) {
		return "cl";
	} else if (strcmp(r, "r8") == 0) {
		return "r8b";
	} else if (strcmp(r, "r9") == 0) {
		return "r9b";
	} else {
		printf("Unknown register: get_8reg(%s)\n", r);
	}
}

void reg_init(symbol* paras) {
	// XXX add stack management
	// XXX add support for callee saved registers if necessary

	// The first 6 may be used by parameters
	char *arg_regs[] = {"rdi", "rsi", "rdx", "rcx", "r8", "r9"};
	char *other_regs[] = {"rax", "r11"};
	int i = 0, j=0;

	while(paras != (symbol *)NULL) {
		i++;
		paras = paras->next;
	}

	for (;j < REG_MAX; j++) {
		reg[j] = NULL;
		reg_usage[j] = 0;
	} 
	
	reg[0] = "rax";
	reg[1] = "r11";

	j = 2;
	while (i < 6) {
		reg[j++] = arg_regs[i++];
	}
}

void var_init(symbol* vars) {
	int i;
	char* r = "";

	while(vars != NULL) {
		// Get a register from top of reg
		
		for(i=REG_MAX-1;i>=0;i--) {
			if (reg[i] != NULL) {
				r = reg[i];
				break;
			}
		}

		if (strcmp(r, "")==0) {
			printf("No register free @var_init()\n");
			exit(3);
		}

		#ifdef MY_DEBUG
		printf("# - Reserving %s for var \n", r);
		#endif

		vars->reg = strdup(r);
		reg[i] = NULL;
		r = NULL;
		vars = vars->next;
	}
}

symbol * var_init_if(symbol * vars, symbol * vars_to_ignore, symbol * fake) {
	symbol * start = vars;
	
	while(vars != NULL) {
		if (vars->reg == NULL && !table_has_symbol(vars_to_ignore, vars->name)) {
			 vars->reg = newreg();
			#ifdef MY_DEBUG
			printf("# - IF: Reserving %s for var %s\n", vars->reg, vars->name);
			#endif
		}
		vars = vars->next;
	}

	return start;
}

char *newreg() {
	int i, j;
	for (i=0; i < REG_MAX; i++) {
		if (reg[i] == NULL) { break; }
		if (reg_usage[i] == 0) {
			reg_usage[i] = 1;
			return reg[i];
		}
	}

	for (j=0; j < CALLEE_MAX; j++) {
		if (callee_saved[j] == NULL) {
			#ifdef MY_DEBUG
			printf("# - pushing callee saved %s to stack\n", callee_saved_avail[j]);
			#endif
			printf("\tpush %%%s\n", callee_saved_avail[j]);
			callee_saved[j] = callee_saved_avail[j];
			return callee_saved[j];
		}
	}

	printf("\nNo more registers available :(\n");
	exit(3);
}

void freereg(char* r) {
	int nr = get_reg_number(r);
	reg_usage[nr]--;
}

void increg(char* r) {
	int nr = get_reg_number(r);
	reg_usage[nr]++;
}

int reg_is_tmp(char* r) {
	int i;
	for (i=0; i<REG_MAX;i++) {
		if (reg[i] == NULL) { return 0; }
		if (strcmp(reg[i], r) == 0) {
			return 1;
		}
	}
	return 0;
}

int reg_is_param(char* r) {
	return !reg_is_tmp(r);
}

void cleanup_callee() {
	int i = CALLEE_MAX-1;
	for (; i>=0; i--) {
		if (callee_saved[i] != NULL) {
			printf("\tpop %%%s\n", callee_saved[i]);
			callee_saved[i] = NULL;
		}
	}
}
