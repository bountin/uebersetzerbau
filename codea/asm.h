#ifndef ASM_H
#define ASM_H

void asm_func_head(char* func_name);

void asm_mov(char* src, char* dest);

char* asm_add(char* p1, char* p2);
char* asm_mult(char* p1, char* p2);
char* asm_and(char* p1, char* p2);

char* asm_cmp_le(char* p1, char* p2);
char* asm_cmp_ne(char* p1, char* p2);

char* asm_not(char* p1);
char* asm_minus(char* p1);
char* asm_load(char* p1);

void asm_ret();

#endif
