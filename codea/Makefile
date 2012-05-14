codea: y.tab.c lex.yy.c table.c table.h checks.c checks.h
	gcc *.c -lfl -o codea

oxout.y oxout.l: grammar.y scanner.flex
	ox grammar.y scanner.flex

y.tab.c y.tab.h: oxout.y
	bison -vd oxout.y

lex.yy.c: oxout.l
	flex oxout.l

code.c: code.bfe
	bfe < code.bfe | iburg > code.c

clean:
	rm -f codea oxout.* lex.yy.c code.c

test: codea
	/usr/ftp/pub/ubvl/test12/codea/test
