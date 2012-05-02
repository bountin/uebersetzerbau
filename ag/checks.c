#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "checks.h"

void check_label(char *name, symbol *labels) {
	if (!table_has_symbol(labels, name)) {
		printf("Label %s not found.\n", name);
		exit(3);
	}
}

void check_variable(char *name, symbol *params, symbol *vars) {
	if (table_has_symbol(params, name) || table_has_symbol(vars, name)) {
		return;
	} else {
		printf("Variable '%s' not found.\n", name);
		exit(3);
	}
}
