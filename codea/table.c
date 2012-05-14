#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "table.h"

symbol *tbl_add_symbol(symbol *table, char *name) {
	symbol *s = (symbol *)malloc(sizeof(symbol));

	if (table_has_symbol(table, name)) {
		printf("AG ERROR: Tried to declare a symbol twice.\n");
		exit(3);
	}

	s->name = name;
	s->next = table;

	return s;
}

int table_has_symbol(symbol *table, char *name) {
	symbol *s = table;

	if (s == (symbol *)NULL) { return 0; /* empty tbl haz no symbol */ }
	if (strcmp(s->name, name) == 0) { return 1; }

	while (s->next != (symbol *)NULL) {
		s = s->next;
		if (strcmp(s->name, name) == 0) { return 1; }
	}

	return 0;
}

symbol *tbl_merge(symbol *A, symbol *B) {
	symbol *s = B;
	symbol *R = A;

	if (B == (symbol *)NULL) { return A; /* B haz no elementz */ }
	R = tbl_add_symbol(R, B->name);
	
	while (s->next != (symbol *)NULL) {
		s = s->next;
		R = tbl_add_symbol(R, s->name);
	}

	return R;
}

void tbl_print(symbol *table) {
	symbol *s = table;
	
	printf("Tbl dump:\n");

	if (table == (symbol *)NULL) { printf("Empty\n\n"); return; }

	while (s->next != (symbol *)NULL) {
		printf("%s\n", s->name);
		s = s->next;
	}
	printf("%s\n\n", s->name);
}
