#ifndef REG_MANAGEMENT_H
#define REG_MANAGEMENT_H

#include "table.h"

#define REG_MAX 8

char*	reg[REG_MAX];
int	reg_usage[REG_MAX];

char* get_8reg(char* r);

void reg_init(symbol* params);
symbol * var_init_if(symbol * vars, symbol * vars_to_ignore);
char *newreg();
void freereg(char* reg);

int reg_is_tmp(char* r);
int reg_is_param(char* r);

#endif
