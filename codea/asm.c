#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "asm.h"

void asm_func_head(char* func_name) {
	printf(".globl %1$s\n.type %1$s, @function\n%1$s:\n", func_name);
}

void asm_mov(char* src, char* dest) {
	printf("\tmovq %%%s, %%%s\n", src, dest);
}

void asm_ret() {
	printf("\tret\n");
}
