	/***** Definition section *****/
id		[_a-zA-Z][_0-9a-zA-Z]*
hexnum		[0-9][0-9a-fA-F]+
decnum		&[0-9]+
whitespace	[ \t\n]
special		[;(),:=*-+#]|=<
comment		"(*"([^*]+|\*[^)*])*\*+")"

%%	/***** Rules section *****/

"end"    |
"return" |
"goto"   |
"if"     |
"then"   |
"var"    |
"not"    |
"and"    |
{special}	{ printf("%s\n", yytext); }

{id}		{ printf("ident %s\n", yytext); }

{hexnum}	{ printf("num %.li\n", strtol(yytext,NULL,16) ); }
{decnum}	{ printf("num %.li\n", strtol(yytext + sizeof(char) ,NULL,10) ); }

{whitespace} |
{comment}	{ /** Do nothing **/}

.		{ printf("Lexical error.\n"); exit(1); }

%%	/***** Code section *****/
