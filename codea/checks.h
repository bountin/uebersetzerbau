#include "table.h"

#ifndef CHECKS_H
#define CHECKS_H

void check_label(char *name, symbol *labels);
void check_variable(char *name, symbol *params, symbol *vars);
void check_duplicates(symbol *vars, symbol *params, symbol *labels);

#endif
