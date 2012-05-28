codeb: y.tab.c lex.yy.c table.c table.h checks.c checks.h code.c code_gen.c code_gen.h asm.c asm.h reg_management.h reg_management.c
	gcc *.c -lfl -o codeb

oxout.y oxout.l: grammar.y scanner.flex
	ox grammar.y scanner.flex

y.tab.c y.tab.h: oxout.y
	bison -vd oxout.y

lex.yy.c: oxout.l
	flex oxout.l

code.c: code.bfe
	bfe < code.bfe | iburg > code.c

clean:
	rm -f codeb oxout.* lex.yy.c code.c

test: codeb
	/usr/ftp/pub/ubvl/test12/codeb/test

test2: codeb
	echo  "f() return &12 + &42; end;" | ./codeb
