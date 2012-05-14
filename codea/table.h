#ifndef TABLE_H
#define TABLE_H

struct symbol {
	struct symbol *next;
	char *name;
};
typedef struct symbol symbol;

symbol *tbl_add_symbol(symbol *table, char *name);
int table_has_symbol(symbol *table, char *name);
symbol *tbl_merge(symbol *A, symbol *B);
void tbl_print(symbol *table);

#endif
