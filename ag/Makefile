ag: y.tab.c lex.yy.c table.c table.h checks.c checks.h
	gcc *.c -lfl -o ag

oxout.y oxout.l: grammar.y scanner.flex
	ox grammar.y scanner.flex

y.tab.c y.tab.h: oxout.y
	bison -vd oxout.y

lex.yy.c: oxout.l
	flex oxout.l


clean:
	rm -f ag oxout.* lex.yy.c

test2: ag
	echo "f(a,b,c,d,e) x: y: var x = 1; z: goto x; end; g() var x = 2; end;" | ./ag


test: ag
	/usr/ftp/pub/ubvl/test12/ag/test
