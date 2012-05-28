%{	/***** Definition section *****/

	#include "oxout.tab.h"
%}

ID		[_a-zA-Z][_0-9a-zA-Z]*
HEXNUM		[0-9][0-9a-fA-F]*
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
"goto"		return T_GOTO;
"if"		return T_IF;
"then"		return T_THEN;
"var"		return T_VAR;

"and"	return T_AND;
"not"	return T_NOT;

{ID}		return T_IDENTIFIER;	@{ @T_IDENTIFIER.name@ = strdup(yytext); @}

{HEXNUM}	return T_NUM;		@{ @T_NUM.val@ = strtol(yytext, NULL, 16); @}
{DECNUM}	return T_NUM;		@{ @T_NUM.val@ = strtol(yytext + sizeof(char), NULL, 10); @}

{WHITESPACE} |
{COMMENT}	/** Do nothing **/

.		printf("Lexical error.\n"); exit(1);

%%	/***** Code section *****/
