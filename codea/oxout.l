/* output from Ox version G1.04 */
%{	/***** Definition section *****/

	#include "oxout.tab.h"
%}

ID		[_a-zA-Z][_0-9a-zA-Z]*
HEXNUM		[0-9][0-9a-fA-F]*
DECNUM		&[0-9]+
WHITESPACE	[ \t\n]
COMMENT		"(*"([^*]+|\*[^)*])*\*+")"



%{


struct yyyT1 {int val;}; 
typedef struct yyyT1 *yyyP1; 


struct yyyT2 {char *name;}; 
typedef struct yyyT2 *yyyP2; 


struct yyyT3 {struct symbol *labels_out, *labels_in;}; 
typedef struct yyyT3 *yyyP3; 


struct yyyT4 {struct symbol *labels_out, *params, *vars_in, *labels_in, *vars_out, *vars, *labels;}; 
typedef struct yyyT4 *yyyP4; 


struct yyyT5 {struct symbol *params_out, *params_in;}; 
typedef struct yyyT5 *yyyP5; 


struct yyyT6 {struct symbol *params, *vars_in, *vars_out, *labels_in, *labels_out, *vars, *labels;}; 
typedef struct yyyT6 *yyyP6; 


struct yyyT7 {struct symbol *params, *vars, *labels; }; 
typedef struct yyyT7 *yyyP7; 
                                                      /*custom*/  
typedef unsigned char yyyWAT; 
typedef unsigned char yyyRCT; 
typedef unsigned short yyyPNT; 
typedef unsigned char yyyWST; 

#include <limits.h>
#define yyyR UCHAR_MAX  

 /* funny type; as wide as the widest of yyyWAT,yyyWST,yyyRCT  */ 
typedef unsigned short yyyFT;

                                                      /*stock*/  




struct yyyGenNode {void *parent;  
                   struct yyyGenNode **cL; /* child list */ 
                   yyyRCT *refCountList; 
                   yyyPNT prodNum;                      
                   yyyWST whichSym; /* which child of parent? */ 
                  }; 

typedef struct yyyGenNode yyyGNT; 



struct yyyTB {int isEmpty; 
              int typeNum; 
              int nAttrbs; 
              char *snBufPtr; 
              yyyWAT *startP,*stopP; 
             };  




extern struct yyyTB yyyTermBuffer; 
extern yyyWAT yyyLRCIL[]; 
extern void yyyGenLeaf(); 


%}
%%	/***** Rules section *****/

"+"	{yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return T_PLUS;}
"-"	{yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return T_MINUS;}
"*"	{yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return T_MULT;}

","	{yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return ',';}
";"	{yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return ';';}
":"	{yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return ':';}
"="	{yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return '=';}
"#"	{yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return '#';}

"=<"	{yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return T_CMP_LE;}

"("	{yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return '(';}
")"	{yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return ')';}

"end"		{yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return T_END;}
"return" 	{yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return T_RETURN;}
"goto"		{yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return T_GOTO;}
"if"		{yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return T_IF;}
"then"		{yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return T_THEN;}
"var"		{yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return T_VAR;}

"and"	{yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return T_AND;}
"not"	{yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return T_NOT;}

{ID}		{yyyGenLeaf(1,2,yyyLRCIL+0,yyyLRCIL+1); (((yyyP2)(yyyTermBuffer.snBufPtr))->name) = strdup(yytext); return T_IDENTIFIER;}	

{HEXNUM}	{yyyGenLeaf(1,1,yyyLRCIL+1,yyyLRCIL+2); (((yyyP1)(yyyTermBuffer.snBufPtr))->val) = strtol(yytext, NULL, 16); return T_NUM;}		
{DECNUM}	{yyyGenLeaf(1,1,yyyLRCIL+1,yyyLRCIL+2); (((yyyP1)(yyyTermBuffer.snBufPtr))->val) = strtol(yytext + sizeof(char), NULL, 10); return T_NUM;}		

{WHITESPACE} |
{COMMENT}	/** Do nothing **/

.		printf("Lexical error.\n"); exit(1);

%%	/***** Code section *****/
