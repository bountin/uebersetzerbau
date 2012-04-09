%{	/***** Definition section *****/

	#include "parser.tab.h"
%}

ID		[_a-zA-Z][_0-9a-zA-Z]*
HEXNUM		[0-9][0-9a-fA-F]+
DECNUM		&[0-9]+
WHITESPACE	[ \t\n]
COMMENT		"(*"([^*]+|\*[^)*])*\*+")"


%%	/***** Rules section *****/

"+"	return T_PLUS;
"-"	return T_MINUS;
"*"	return T_MULT;

","	return ',';
";"	return ';';
":"	return ':';
"="	return '=';
"#"	return '#';

"=<"	return T_CMP_LE;

"("	return '(';
")"	return ')';

"end"		return T_END;
"return" 	return T_RETURN;

"and"	return T_AND;
"not"	return T_NOT;

"goto"   |
"if"     |
"then"   |
"var"  		printf("%s\n", yytext);

{ID}		{ /*yylval = strdup(yytext); */ return T_IDENTIFIER; }

{HEXNUM}	{ yylval = strtol(yytext, NULL, 16); return T_NUM; }
{DECNUM}	{ yylval = strtol(yytext + sizeof(char), NULL, 10); return T_NUM; }

{WHITESPACE} |
{COMMENT}	/** Do nothing **/

.		printf("Lexical error.\n"); exit(1);

%%	/***** Code section *****/
