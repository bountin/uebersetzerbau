#ifndef CODE_GEN_H
#define CODE_GEN_H

#include "table.h"

enum {
	TT_RETURN=1,
	TT_NUM,
	TT_IDENTIFIER,
	TT_ADD,
	TT_MULT,
	TT_MINUS,
	TT_VARIABLE,
	TT_AND,
	TT_CMP_LE,
	TT_CMP_NE,
	TT_NOT,
	TT_READ
};

#ifndef CODE
	typedef struct burm_state *STATEPTR_TYPE;
#endif

/** code tree for iburg **/
struct code_ptr {
	int op;
	struct code_ptr *kids[2];
	STATEPTR_TYPE state;
	long val;
	char *name;
	char *reg;
};
typedef struct code_ptr code_ptr;

/** iburg macros **/
#define OP_LABEL(p) ((p)->op)
#define LEFT_CHILD(p) ((p)->kids[0])
#define RIGHT_CHILD(p) ((p)->kids[1])
#define STATE_LABEL(p) ((p)->state)
#define PANIC printf
#define NODEPTR_TYPE code_ptr*

#define    REG(p) ((p)->reg)
#define LC_REG(p) (LEFT_CHILD(p)->reg)
#define RC_REG(p) (RIGHT_CHILD(p)->reg)

void execute_iburg(code_ptr* code);
void not_supported(char* production);

code_ptr* create_code(int type, code_ptr* left_child, code_ptr* right_child);
code_ptr* create_code_num(long number);
code_ptr* create_code_var(char* name, symbol* params, symbol* vars);

symbol* gen_para_regs(symbol* parameters);

void code_print(code_ptr* code);

#endif
