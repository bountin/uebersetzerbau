all:
	flex parser.flex
	bison -vd parser.y
	gcc *.c -lfl -o parser

clean:
	rm -f *.c *.h parser

test:
	/usr/ftp/pub/ubvl/test12/parser/test
