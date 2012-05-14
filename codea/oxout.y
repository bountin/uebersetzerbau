/* output from Ox version G1.04 */
%{
%}
%{

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "table.h"
#include "checks.h"

#define YYERROR_VERBOSE

int yyerror(const char *msg) { /** Grammar errors **/
	fprintf(stderr, "Error: %s\n", msg);
	exit(2);
}
int yywrap() { return 1; }
main() { yyparse(); }
%}

%token T_PLUS T_MINUS T_MULT
%token T_CMP_LE
%token T_RETURN T_IF T_THEN T_GOTO T_VAR
%token T_END T_NOT T_AND
%token T_NUM
%token T_IDENTIFIER

/** Distribute tables by default **/
  

 		
 	

					
	
					
 		

	      

/** Test used variables and labels **/



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

%{
#include <stdio.h>

int yyyYok = 1;
int yyyInitDone = 0;
char *yyySTsn;
yyyGNT *yyySTN;
int yyyGNSz = sizeof(yyyGNT);
int yyyProdNum,yyyRHSlength,yyyNattrbs,yyyTypeNum; 

extern yyyFT yyyRCIL[];

void yyyExecuteRRsection();
void yyyYoxInit();
void yyyYoxReset();
void yyyDecorate();
void yyyGenIntNode();
void yyyAdjustINRC();
void yyyPrune();
void yyyUnsolvedInstSearchTrav();
void yyyUnsolvedInstSearchTravAux();
void yyyerror();
void yyyShift();



#define yyyRSU(NUM1,NUM2,NUM3,NUM4) \
   yyyProdNum=NUM1;yyyRHSlength=NUM2;yyyNattrbs=NUM3;yyyTypeNum=NUM4;\
   if ((yychar <= 0) && (!yyyTermBuffer.isEmpty)) yyyShift(); 
%}


%%

yyyAugNonterm 
	:	{if (!yyyInitDone) 
		    {yyyYoxInit(); 
		     yyyInitDone = 1;
		    }
		 yyyYoxReset();
		}
		program
		{
		 yyyDecorate(); yyyExecuteRRsection();
		}
	;
program:
	function program
	{if(yyyYok){
yyyRSU(1,2,0,0);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+0,yyyRCIL+0);/*yyyPrune(1);*/}}| 
	{if(yyyYok){
yyyRSU(2,0,0,0);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+0,yyyRCIL+0);}};

function:
	  T_IDENTIFIER '(' parameters ')' stats T_END ';'
		{if(yyyYok){
yyyRSU(3,7,0,0);
yyyGenIntNode();
 (((yyyP4)(((char *)((yyySTN->cL)[4]))+yyyGNSz))->labels_in) = NULL;
			 (((yyyP5)(((char *)((yyySTN->cL)[2]))+yyyGNSz))->params_in) = NULL;
			 (((yyyP4)(((char *)((yyySTN->cL)[4]))+yyyGNSz))->vars_in) = NULL;
			yyyAdjustINRC(yyyRCIL+0,yyyRCIL+18);/*yyyPrune(3);*/}}
	;

parameters:
	  T_IDENTIFIER ',' parameters
		{if(yyyYok){
yyyRSU(4,3,2,5);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+18,yyyRCIL+24);}}
	| T_IDENTIFIER
		{if(yyyYok){
yyyRSU(5,1,2,5);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+24,yyyRCIL+27);}}
	|
		{if(yyyYok){
yyyRSU(6,0,2,5);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+27,yyyRCIL+30);}}
	;

stats:	
	  labeldefinition stat ';' stats
		{if(yyyYok){
yyyRSU(7,4,7,4);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+30,yyyRCIL+69);}}
	| stat ';' stats
		{if(yyyYok){
yyyRSU(8,3,7,4);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+69,yyyRCIL+105);}}
	|
		{if(yyyYok){
yyyRSU(9,0,7,4);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+105,yyyRCIL+111);}}
	;

labeldefinition:
	  labeldefinition T_IDENTIFIER ':'
		{if(yyyYok){
yyyRSU(10,3,2,3);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+111,yyyRCIL+117);}}
	| T_IDENTIFIER ':'
		{if(yyyYok){
yyyRSU(11,2,2,3);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+117,yyyRCIL+120);}}
	;

stat:
	  T_RETURN expression
		{if(yyyYok){
yyyRSU(12,2,7,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+120,yyyRCIL+135);}}
	| T_GOTO T_IDENTIFIER
		{if(yyyYok){
yyyRSU(13,2,7,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+135,yyyRCIL+141);/*yyyPrune(13);*/}}
	| T_IF expression T_THEN stats T_END
		{if(yyyYok){
yyyRSU(14,5,7,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+141,yyyRCIL+171);}}
	| T_VAR T_IDENTIFIER '=' expression 	/* variable initialization */
		{if(yyyYok){
yyyRSU(15,4,7,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+171,yyyRCIL+186);}}
	| T_IDENTIFIER '=' expression		/* writing to variable */
		{if(yyyYok){
yyyRSU(16,3,7,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+186,yyyRCIL+201);}}
	| T_MULT unary '=' expression		/* writing to memory */
		{if(yyyYok){
yyyRSU(17,4,7,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+201,yyyRCIL+225);}}
	| term
		{if(yyyYok){
yyyRSU(18,1,7,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+225,yyyRCIL+240);}}
	;

expression:
	  unary
	{if(yyyYok){
yyyRSU(19,1,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+240,yyyRCIL+249);}}| add_expr
	{if(yyyYok){
yyyRSU(20,1,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+249,yyyRCIL+258);}}| mult_expr
	{if(yyyYok){
yyyRSU(21,1,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+258,yyyRCIL+267);}}| and_expr
	{if(yyyYok){
yyyRSU(22,1,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+267,yyyRCIL+276);}}| term T_CMP_LE term
	{if(yyyYok){
yyyRSU(23,3,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+276,yyyRCIL+294);}}| term '#' term
	{if(yyyYok){
yyyRSU(24,3,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+294,yyyRCIL+312);}};

add_expr:
	  term T_PLUS term
	{if(yyyYok){
yyyRSU(25,3,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+312,yyyRCIL+330);}}| term T_PLUS add_expr
	{if(yyyYok){
yyyRSU(26,3,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+330,yyyRCIL+348);}};

mult_expr:
	  term T_MULT term
	{if(yyyYok){
yyyRSU(27,3,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+348,yyyRCIL+366);}}| term T_MULT mult_expr
	{if(yyyYok){
yyyRSU(28,3,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+366,yyyRCIL+384);}};

and_expr:
	  term T_AND term
	{if(yyyYok){
yyyRSU(29,3,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+384,yyyRCIL+402);}}| term T_AND and_expr
	{if(yyyYok){
yyyRSU(30,3,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+402,yyyRCIL+420);}};

unary:
	  T_NOT unary
	{if(yyyYok){
yyyRSU(31,2,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+420,yyyRCIL+429);}}| T_MINUS unary
	{if(yyyYok){
yyyRSU(32,2,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+429,yyyRCIL+438);}}| T_MULT unary		/* reading from memory */
	{if(yyyYok){
yyyRSU(33,2,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+438,yyyRCIL+447);}}| term
	{if(yyyYok){
yyyRSU(34,1,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+447,yyyRCIL+456);}};

term:
	  '(' expression ')'
	{if(yyyYok){
yyyRSU(35,3,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+456,yyyRCIL+465);}}| T_NUM
	{if(yyyYok){
yyyRSU(36,1,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+465,yyyRCIL+465);/*yyyPrune(36);*/}}| T_IDENTIFIER		/* reading from variable */
		{if(yyyYok){
yyyRSU(37,1,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+465,yyyRCIL+465);/*yyyPrune(37);*/}}
	| T_IDENTIFIER '(' call_parameters ')'
	{if(yyyYok){
yyyRSU(38,4,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+465,yyyRCIL+474);}};

call_parameters:
	  expression ',' call_parameters
	{if(yyyYok){
yyyRSU(39,3,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+474,yyyRCIL+492);}}| expression
	{if(yyyYok){
yyyRSU(40,1,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+492,yyyRCIL+501);}}| 
	{if(yyyYok){
yyyRSU(41,0,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+501,yyyRCIL+501);}};

%%
                                                      /*custom*/  
long yyyMaxNbytesNodeStg = 2000000; 
long yyyMaxNrefCounts =    500000; 
long yyyMaxNchildren =     60000; 
long yyyMaxStackSize =     2000; 
long yyySSALspaceSize =    20000; 
long yyyRSmaxSize =        1000; 
long yyyTravStackMaxSize = 2000; 


struct yyyTB yyyTermBuffer; 

char *yyyNodeAndStackSpace; 

char *yyyNodeSpace;
char *yyyNextNodeSpace; 
char *yyyAfterNodeSpace; 


 
struct yyyGenNode **yyyChildListSpace;  
struct yyyGenNode **yyyNextCLspace; 
struct yyyGenNode **yyyAfterChildListSpace; 



yyyRCT *yyyRefCountListSpace;
yyyRCT *yyyNextRCLspace;  
yyyRCT *yyyAfterRefCountListSpace;   



struct yyySolvedSAlistCell {yyyWAT attrbNum; 
                            long next; 
                           }; 
#define yyyLambdaSSAL 0 
long yyySSALCfreeList = yyyLambdaSSAL; 
long yyyNewSSALC = 1; 
 
struct yyySolvedSAlistCell *yyySSALspace; 


 
struct yyyStackItem {struct yyyGenNode *node; 
                     long solvedSAlist; 
                     struct yyyGenNode *oldestNode; 
                    };  

long yyyNbytesStackStg; 
struct yyyStackItem *yyyStack; 
struct yyyStackItem *yyyAfterStack; 
struct yyyStackItem *yyyStackTop; 



struct yyyRSitem {yyyGNT *node; 
                  yyyWST whichSym; 
                  yyyWAT wa;  
                 };  

struct yyyRSitem *yyyRS;  
struct yyyRSitem *yyyRSTop;  
struct yyyRSitem *yyyAfterRS;  
 





yyyFT yyyRCIL[] = {
2,1,0, 4,1,1, 4,2,0, 4,3,0, 4,5,1, 4,6,1, 
yyyR,0,1, 2,1,1, yyyR,0,1, yyyR,0,1, yyyR,0,1, yyyR,4,1, 
0,1,1, 1,0,1, 1,1,1, 1,3,1, 1,5,1, 1,6,1, 
3,1,1, 3,2,1, 3,3,1, 3,5,1, 3,6,1, yyyR,0,1, 
yyyR,4,1, 0,0,1, 0,1,1, 0,3,1, 0,5,1, 0,6,1, 
2,1,1, 2,2,1, 2,3,1, 2,5,1, 2,6,1, yyyR,0,1, 
yyyR,4,1, yyyR,0,1, 0,1,1, yyyR,0,1, yyyR,2,1, yyyR,4,1, 
1,0,1, 1,1,1, 1,2,1, yyyR,2,1, yyyR,4,1, yyyR,2,1, 
yyyR,4,1, 1,0,1, 1,1,1, 1,2,1, 3,1,1, 3,2,1, 
3,3,1, 3,5,1, 3,6,1, yyyR,2,1, yyyR,4,1, 3,0,1, 
3,1,1, 3,2,1, yyyR,2,1, yyyR,4,1, 2,0,1, 2,1,1, 
2,2,1, yyyR,2,1, yyyR,4,1, 1,0,1, 1,1,1, 1,2,1, 
3,0,1, 3,1,1, 3,2,1, yyyR,2,1, yyyR,4,1, 0,0,1, 
0,1,1, 0,2,1, 0,0,1, 0,1,1, 0,2,1, 0,0,1, 
0,1,1, 0,2,1, 0,0,1, 0,1,1, 0,2,1, 0,0,1, 
0,1,1, 0,2,1, 0,0,1, 0,1,1, 0,2,1, 2,0,1, 
2,1,1, 2,2,1, 0,0,1, 0,1,1, 0,2,1, 2,0,1, 
2,1,1, 2,2,1, 0,0,1, 0,1,1, 0,2,1, 2,0,1, 
2,1,1, 2,2,1, 0,0,1, 0,1,1, 0,2,1, 2,0,1, 
2,1,1, 2,2,1, 0,0,1, 0,1,1, 0,2,1, 2,0,1, 
2,1,1, 2,2,1, 0,0,1, 0,1,1, 0,2,1, 2,0,1, 
2,1,1, 2,2,1, 0,0,1, 0,1,1, 0,2,1, 2,0,1, 
2,1,1, 2,2,1, 0,0,1, 0,1,1, 0,2,1, 2,0,1, 
2,1,1, 2,2,1, 1,0,1, 1,1,1, 1,2,1, 1,0,1, 
1,1,1, 1,2,1, 1,0,1, 1,1,1, 1,2,1, 0,0,1, 
0,1,1, 0,2,1, 1,0,1, 1,1,1, 1,2,1, 2,0,1, 
2,1,1, 2,2,1, 0,0,1, 0,1,1, 0,2,1, 2,0,1, 
2,1,1, 2,2,1, 0,0,1, 0,1,1, 0,2,1, 
};

short yyyIIIEL[] = {0,
0,3,4,12,16,18,19,24,28,29,
33,36,39,42,48,53,57,62,64,66,
68,70,72,76,80,84,88,92,96,100,
104,107,110,113,115,119,121,123,128,132,
134,
};

long yyyIIEL[] = {
0,0,0,0,0,0,1,1,3,3,10,10,
10,12,13,13,15,17,18,20,27,29,36,36,
43,50,57,57,64,71,73,75,76,76,78,79,
79,86,86,89,96,96,97,104,104,107,107,114,
114,121,121,122,122,125,132,133,133,136,143,143,
146,146,149,156,159,162,165,168,171,174,177,180,
183,186,189,189,192,195,198,198,201,204,207,207,
210,213,216,216,219,222,225,225,228,231,234,234,
237,240,243,243,246,249,252,252,255,258,258,261,
264,264,267,270,270,273,276,279,282,282,285,285,
288,289,292,293,296,297,297,300,300,303,306,306,
309,312,315,
};

long yyyIEL[] = {
0,0,2,2,4,4,4,4,
6,6,6,6,8,10,12,12,
12,14,16,16,18,18,22,24,
26,26,30,34,36,36,36,36,
38,38,40,40,40,42,42,42,
42,44,44,44,44,48,50,52,
52,56,60,60,60,62,62,64,
64,64,66,66,66,66,68,68,
68,68,68,70,72,72,72,72,
72,74,76,76,78,78,80,82,
84,86,86,88,88,90,92,92,
92,92,92,94,94,96,96,96,
96,96,100,102,102,104,104,108,
112,112,112,112,114,114,114,114,
116,116,116,118,120,120,122,122,
124,126,128,128,128,128,130,132,
132,134,134,136,138,138,138,138,
138,142,144,144,146,146,150,154,
154,154,154,154,154,154,156,158,
158,160,160,162,164,164,164,164,
166,168,170,170,170,170,172,174,
176,176,176,176,178,180,182,182,
182,182,184,186,188,188,188,188,
192,196,200,200,200,200,200,200,
200,204,208,212,212,212,212,212,
212,212,216,220,224,224,224,224,
224,224,224,228,232,236,236,236,
236,236,236,236,240,244,248,248,
248,248,248,248,248,252,256,260,
260,260,260,260,260,260,264,268,
272,272,272,272,272,272,272,276,
280,284,284,284,284,284,284,284,
286,288,290,290,290,290,292,294,
296,296,296,296,298,300,302,302,
302,302,304,306,308,308,308,308,
310,312,314,314,314,314,314,314,
314,314,314,314,314,314,316,318,
320,320,320,320,320,324,328,332,
332,332,332,332,332,332,334,336,
338,338,338,338,338,338,338,
};

yyyFT yyyEntL[] = {
5,1,5,6,5,5,3,1,0,0,0,0,0,0,0,0,
0,0,4,1,2,0,2,1,1,1,4,5,2,5,4,6,
2,6,2,3,4,2,4,3,0,0,0,4,3,1,1,0,
1,1,1,3,3,5,1,5,3,6,1,6,3,2,3,3,
0,0,0,4,0,4,0,0,1,1,0,0,0,0,0,0,
0,0,2,0,0,2,0,4,2,1,2,2,0,2,0,4,
4,1,2,0,0,2,4,3,2,1,4,2,4,6,2,2,
0,4,4,5,4,0,0,2,0,4,4,1,4,2,0,2,
3,0,0,2,0,4,3,1,3,2,4,0,2,0,0,2,
0,4,4,1,2,1,4,2,2,2,1,0,0,2,0,4,
1,1,1,2,1,0,1,1,1,2,1,0,1,1,1,2,
1,0,1,1,1,2,1,0,1,1,1,2,3,0,1,0,
3,1,1,1,3,2,1,2,3,0,1,0,3,1,1,1,
3,2,1,2,3,0,1,0,3,1,1,1,3,2,1,2,
3,0,1,0,3,1,1,1,3,2,1,2,3,0,1,0,
3,1,1,1,3,2,1,2,3,0,1,0,3,1,1,1,
3,2,1,2,3,0,1,0,3,1,1,1,3,2,1,2,
3,0,1,0,3,1,1,1,3,2,1,2,2,0,2,1,
2,2,2,0,2,1,2,2,2,0,2,1,2,2,1,0,
1,1,1,2,2,0,2,1,2,2,3,0,3,1,3,2,
3,0,1,0,3,1,1,1,3,2,1,2,1,0,1,1,
1,2,
};

#define yyyPermitUserAlloc  0 


void yyyfatal(msg)
  char *msg; 
{fprintf(stderr,msg);exit(-1);} 



#define yyyNSof   'n' 
#define yyyRCof   'r' 
#define yyyCLof   'c' 
#define yyySof    's' 
#define yyySSALof 'S' 
#define yyyRSof   'q' 
#define yyyTSof   't' 



void yyyHandleOverflow(which) 
  char which; 
  {char *msg1,*msg2; 
   long  oldSize,newSize; 
   switch(which) 
     {
      case yyyNSof   : 
           msg1 = "node storage overflow: ";
           oldSize = yyyMaxNbytesNodeStg; 
           break; 
      case yyyRCof   : 
           msg1 = "dependee count overflow: ";
           oldSize = yyyMaxNrefCounts; 
           break; 
      case yyyCLof   : 
           msg1 = "child list overflow: ";
           oldSize = yyyMaxNchildren; 
           break; 
      case yyySof    : 
           msg1 = "parse-tree stack overflow: ";
           oldSize = yyyMaxStackSize; 
           break; 
      case yyySSALof : 
           msg1 = "SSAL overflow: ";
           oldSize = yyySSALspaceSize; 
           break; 
      case yyyRSof   : 
           msg1 = "ready set overflow: ";
           oldSize = yyyRSmaxSize; 
           break; 
      case yyyTSof   : 
           msg1 = "traversal stack overflow: ";
           oldSize = yyyTravStackMaxSize; 
           break; 
      default        :;  
     }
   newSize = (3*oldSize)/2; 
   if (newSize < 100) newSize = 100; 
   fprintf(stderr,msg1); 
   fprintf(stderr,"size was %d.\n",oldSize); 
   if (yyyPermitUserAlloc) 
      msg2 = "     Try -Y%c%d option.\n"; 
      else 
      msg2 = "     Have to modify evaluator:  -Y%c%d.\n"; 
   fprintf(stderr,msg2,which,newSize); 
   exit(-1); 
  }



void yyySignalEnts(node,startP,stopP) 
  register yyyGNT *node; 
  register yyyFT *startP,*stopP;  
  {register yyyGNT *dumNode; 

   while (startP < stopP)  
     {
      if (!(*startP)) dumNode = node;  
         else dumNode = (node->cL)[(*startP)-1];   
      if (!(--((dumNode->refCountList)[*(startP+1)]
              ) 
           )
         ) 
         { 
          if (++yyyRSTop == yyyAfterRS) 
             {yyyHandleOverflow(yyyRSof); 
              break; 
             }
          yyyRSTop->node = dumNode; 
          yyyRSTop->whichSym = *startP;  
          yyyRSTop->wa = *(startP+1);  
         }  
      startP += 2;  
     }  
  } 




#define yyyCeiling(num,inc) (((inc) * ((num)/(inc))) + (((num)%(inc))?(inc):0)) 



int yyyAlignSize = 8;
int yyyNdSz[8];

int yyyNdPrSz[8];

typedef int yyyCopyType;

int yyyNdCopySz[8];
long yyyBiggestNodeSize = 0;

void yyyNodeSizeCalc()
  {int i;
   yyyGNSz = yyyCeiling(yyyGNSz,yyyAlignSize); 
   yyyNdSz[0] = 0;
   yyyNdSz[1] = sizeof(struct yyyT1);
   yyyNdSz[2] = sizeof(struct yyyT2);
   yyyNdSz[3] = sizeof(struct yyyT3);
   yyyNdSz[4] = sizeof(struct yyyT4);
   yyyNdSz[5] = sizeof(struct yyyT5);
   yyyNdSz[6] = sizeof(struct yyyT6);
   yyyNdSz[7] = sizeof(struct yyyT7);
   for (i=0;i<8;i++) 
       {yyyNdSz[i] = yyyCeiling(yyyNdSz[i],yyyAlignSize); 
        yyyNdPrSz[i] = yyyNdSz[i] + yyyGNSz;
        if (yyyBiggestNodeSize < yyyNdSz[i])
           yyyBiggestNodeSize = yyyNdSz[i];
        yyyNdCopySz[i] = yyyCeiling(yyyNdSz[i],sizeof(yyyCopyType)) / 
                         sizeof(yyyCopyType); 
       }
  }




void yyySolveAndSignal() {
register long yyyiDum,*yyypL;
register int yyyws,yyywa;
register yyyGNT *yyyRSTopN,*yyyRefN; 
register void *yyyRSTopNp; 


yyyRSTopNp = (yyyRSTopN = yyyRSTop->node)->parent;
yyyRefN= (yyyws = (yyyRSTop->whichSym))?((yyyGNT *)yyyRSTopNp):yyyRSTopN;
yyywa = yyyRSTop->wa; 
yyyRSTop--;
switch(yyyRefN->prodNum) {
case 1:  /***yacc rule 1***/
  switch (yyyws) {
  }
break;
case 2:  /***yacc rule 2***/
  switch (yyyws) {
  }
break;
case 3:  /***yacc rule 3***/
  switch (yyyws) {
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    }
  break;
  case 5:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP5)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->params_out);
			
			    break;
    case 5:
 (((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP4)(((char *)((yyyRefN->cL)[4]))+yyyGNSz))->vars_out);
		    break;
    case 6:
 (((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP4)(((char *)((yyyRefN->cL)[4]))+yyyGNSz))->labels_out);

			    break;
    }
  break;
  }
break;
case 4:  /***yacc rule 4***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP5)(((char *)yyyRSTopN)+yyyGNSz))->params_out) = tbl_add_symbol((((yyyP5)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->params_out), (((yyyP2)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->name));
		    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP5)(((char *)yyyRSTopN)+yyyGNSz))->params_in) = (((yyyP5)(((char *)yyyRefN)+yyyGNSz))->params_in);
			    break;
    }
  break;
  }
break;
case 5:  /***yacc rule 5***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP5)(((char *)yyyRSTopN)+yyyGNSz))->params_out) = tbl_add_symbol((((yyyP5)(((char *)yyyRefN)+yyyGNSz))->params_in), (((yyyP2)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->name));
		    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 6:  /***yacc rule 6***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 0:
  (((yyyP5)(((char *)yyyRSTopN)+yyyGNSz))->params_out) = (((yyyP5)(((char *)yyyRefN)+yyyGNSz))->params_in);
		    break;
    }
  break;
  }
break;
case 7:  /***yacc rule 7***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->labels_out) = (((yyyP4)(((char *)((yyyRefN->cL)[3]))+yyyGNSz))->labels_out);
			
			    break;
    case 4:
 (((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->vars_out) = (((yyyP4)(((char *)((yyyRefN->cL)[3]))+yyyGNSz))->vars_out);

			    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP3)(((char *)yyyRSTopN)+yyyGNSz))->labels_in) = (((yyyP4)(((char *)yyyRefN)+yyyGNSz))->labels_in);
			    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP4)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->vars_in) = (((yyyP4)(((char *)yyyRefN)+yyyGNSz))->vars_in);
			    break;
    case 3:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->labels_in) = (((yyyP3)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->labels_out);
			    break;
    case 5:
(((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP4)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 6:
(((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP4)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 1:
(((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP4)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 2:
 (((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->vars_in) = (((yyyP6)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->vars_out);
			    break;
    case 3:
 (((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->labels_in) = (((yyyP6)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->labels_out);
			    break;
    case 5:
(((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP4)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 6:
(((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP4)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 8:  /***yacc rule 8***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->labels_out) = (((yyyP4)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->labels_out);
			
			    break;
    case 4:
 (((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->vars_out) = (((yyyP4)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->vars_out);

			    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP4)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->vars_in) = (((yyyP4)(((char *)yyyRefN)+yyyGNSz))->vars_in);
			    break;
    case 3:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->labels_in) = (((yyyP4)(((char *)yyyRefN)+yyyGNSz))->labels_in);
			    break;
    case 5:
(((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP4)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 6:
(((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP4)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 1:
(((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP4)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 2:
 (((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->vars_in) = (((yyyP6)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->vars_out);
			    break;
    case 3:
 (((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->labels_in) = (((yyyP6)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->labels_out);
			    break;
    case 5:
(((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP4)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 6:
(((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP4)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 9:  /***yacc rule 9***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->labels_out) = (((yyyP4)(((char *)yyyRefN)+yyyGNSz))->labels_in);
			    break;
    case 4:
 (((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->vars_out) = (((yyyP4)(((char *)yyyRefN)+yyyGNSz))->vars_in);

			    break;
    }
  break;
  }
break;
case 10:  /***yacc rule 10***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP3)(((char *)yyyRSTopN)+yyyGNSz))->labels_out) = tbl_add_symbol((((yyyP3)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->labels_out), (((yyyP2)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->name));
		    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP3)(((char *)yyyRSTopN)+yyyGNSz))->labels_in) = (((yyyP3)(((char *)yyyRefN)+yyyGNSz))->labels_in);
			    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 11:  /***yacc rule 11***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP3)(((char *)yyyRSTopN)+yyyGNSz))->labels_out) = tbl_add_symbol((((yyyP3)(((char *)yyyRefN)+yyyGNSz))->labels_in), (((yyyP2)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->name));
		    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 12:  /***yacc rule 12***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 2:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->vars_out) =  (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->vars_in);
			    break;
    case 4:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->labels_out) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->labels_in);
		    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 13:  /***yacc rule 13***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 2:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->vars_out) =  (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->vars_in);

			    break;
    case 4:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->labels_out) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->labels_in);
			    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 14:  /***yacc rule 14***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 2:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->vars_out) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->vars_in);
			    break;
    case 4:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->labels_out) = (((yyyP4)(((char *)((yyyRefN->cL)[3]))+yyyGNSz))->labels_out);
		    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 1:
(((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 2:
 (((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->vars_in) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->vars);
			    break;
    case 3:
 (((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->labels_in) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->labels_in);
			    break;
    case 5:
 (((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP4)(((char *)((yyyRefN->cL)[3]))+yyyGNSz))->vars_out);

			    break;
    case 6:
(((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 15:  /***yacc rule 15***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 2:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->vars_out) = tbl_add_symbol((((yyyP6)(((char *)yyyRefN)+yyyGNSz))->vars_in), (((yyyP2)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->name));
			    break;
    case 4:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->labels_out) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->labels_in);
		    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 16:  /***yacc rule 16***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 2:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->vars_out) =  (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->vars_in);
			    break;
    case 4:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->labels_out) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->labels_in);

			    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 17:  /***yacc rule 17***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 2:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->vars_out) =  (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->vars_in);
			    break;
    case 4:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->labels_out) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->labels_in);
		    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 18:  /***yacc rule 18***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 2:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->vars_out) =  (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->vars_in);
			    break;
    case 4:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->labels_out) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->labels_in);
		    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 19:  /***yacc rule 19***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 20:  /***yacc rule 20***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 21:  /***yacc rule 21***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 22:  /***yacc rule 22***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 23:  /***yacc rule 23***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 24:  /***yacc rule 24***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 25:  /***yacc rule 25***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 26:  /***yacc rule 26***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 27:  /***yacc rule 27***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 28:  /***yacc rule 28***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 29:  /***yacc rule 29***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 30:  /***yacc rule 30***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 31:  /***yacc rule 31***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 32:  /***yacc rule 32***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 33:  /***yacc rule 33***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 34:  /***yacc rule 34***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 35:  /***yacc rule 35***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 36:  /***yacc rule 36***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 37:  /***yacc rule 37***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 38:  /***yacc rule 38***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 39:  /***yacc rule 39***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 40:  /***yacc rule 40***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->params) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->params);
    break;
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->vars) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->vars);
    break;
    case 2:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->labels) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->labels);
    break;
    }
  break;
  }
break;
case 41:  /***yacc rule 41***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
} /* switch */ 

if (yyyws)  /* the just-solved instance was inherited. */ 
   {if (yyyRSTopN->prodNum) 
       {yyyiDum = yyyIIEL[yyyIIIEL[yyyRSTopN->prodNum]] + yyywa;
        yyySignalEnts(yyyRSTopN,yyyEntL + yyyIEL[yyyiDum],
                                yyyEntL + yyyIEL[yyyiDum+1]
                     );
       }
   } 
   else     /* the just-solved instance was synthesized. */ 
   {if ((char *)yyyRSTopNp >= yyyNodeSpace) /* node has a parent. */ 
       {yyyiDum = yyyIIEL[yyyIIIEL[((yyyGNT *)yyyRSTopNp)->prodNum] + 
                          yyyRSTopN->whichSym 
                         ] + 
                  yyywa;
        yyySignalEnts((yyyGNT *)yyyRSTopNp,
                      yyyEntL + yyyIEL[yyyiDum],
                      yyyEntL + yyyIEL[yyyiDum+1] 
                     );
       } 
       else   /* node is still on the stack--it has no parent yet. */ 
       {yyypL = &(((struct yyyStackItem *)yyyRSTopNp)->solvedSAlist); 
        if (yyySSALCfreeList == yyyLambdaSSAL) 
           {yyySSALspace[yyyNewSSALC].next = *yyypL; 
            if ((*yyypL = yyyNewSSALC++) == yyySSALspaceSize) 
               yyyHandleOverflow(yyySSALof); 
           }  
           else
           {yyyiDum = yyySSALCfreeList; 
            yyySSALCfreeList = yyySSALspace[yyySSALCfreeList].next; 
            yyySSALspace[yyyiDum].next = *yyypL; 
            *yyypL = yyyiDum;  
           } 
        yyySSALspace[*yyypL].attrbNum = yyywa; 
       } 
   }

} /* yyySolveAndSignal */ 






#define condStg unsigned int conds;
#define yyyClearConds {yyyTST->conds = 0;}
#define yyySetCond(n) {yyyTST->conds += (1<<(n));}
#define yyyCond(n) ((yyyTST->conds & (1<<(n)))?1:0)



struct yyyTravStackItem {yyyGNT *node; 
                         char isReady;
                         condStg
                        };



void yyyDoTraversals()
{struct yyyTravStackItem *yyyTravStack,*yyyTST,*yyyAfterTravStack;
 register yyyGNT *yyyTSTn,**yyyCLptr1,**yyyCLptr2; 
 register int yyyi,yyyRL,yyyPass;

 if (!yyyYok) return;
 if ((yyyTravStack = 
                 ((struct yyyTravStackItem *) 
                  malloc((yyyTravStackMaxSize * 
                                  sizeof(struct yyyTravStackItem)
                                 )
                        )
                 )
     )
     == 
     (struct yyyTravStackItem *)NULL
    ) 
    {fprintf(stderr,"malloc error in traversal stack allocation\n"); 
     exit(-1); 
    } 

yyyAfterTravStack = yyyTravStack + yyyTravStackMaxSize; 
yyyTravStack++; 


for (yyyi=0; yyyi<1; yyyi++) {
yyyTST = yyyTravStack; 
yyyTST->node = yyyStack->node;
yyyTST->isReady = 0;
yyyClearConds

while(yyyTST >= yyyTravStack)
  {yyyTSTn = yyyTST->node;
   if (yyyTST->isReady)  
      {yyyPass = 1;
       goto yyyTravSwitch;
yyyTpop:
       yyyTST--;
      } 
      else 
      {yyyPass = 0;
       goto yyyTravSwitch;
yyyTpush:
       yyyTST->isReady = 1;  
       if (yyyTSTn->prodNum)
          if (yyyRL)
             {yyyCLptr2 = yyyTSTn->cL; 
              while 
                ((yyyCLptr2 != yyyNextCLspace)
                 &&
                 ((*yyyCLptr2)->parent == yyyTSTn) 
                )  
                {if (++yyyTST == yyyAfterTravStack)
                    yyyHandleOverflow(yyyTSof);
                    else
                    {yyyTST->node = *yyyCLptr2; 
                     yyyTST->isReady = 0; 
                     yyyClearConds
                    }
                 yyyCLptr2++; 
                } 
             } /* right to left */
             else  /* left to right */
             {yyyCLptr1 = yyyCLptr2 = yyyTSTn->cL; 
              while 
                ((yyyCLptr2 != yyyNextCLspace)
                 &&
                 ((*yyyCLptr2)->parent == yyyTSTn) 
                )  
                yyyCLptr2++; 
              while (yyyCLptr2-- > yyyCLptr1)
                if (++yyyTST == yyyAfterTravStack)
                   yyyHandleOverflow(yyyTSof);
                   else
                   {yyyTST->node = *yyyCLptr2; 
                    yyyTST->isReady = 0; 
                    yyyClearConds
                   }
             } /* left to right */
      } /* else */
   continue;
yyyTravSwitch:
				switch(yyyTSTn->prodNum)	{
case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 4:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 5:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 6:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 7:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { check_duplicates((((yyyP4)(((char *)yyyTSTn)+yyyGNSz))->vars), (((yyyP4)(((char *)yyyTSTn)+yyyGNSz))->params), (((yyyP4)(((char *)yyyTSTn)+yyyGNSz))->labels));
		}
				break;
					}

break;
case 8:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { check_duplicates((((yyyP4)(((char *)yyyTSTn)+yyyGNSz))->vars), (((yyyP4)(((char *)yyyTSTn)+yyyGNSz))->params), (((yyyP4)(((char *)yyyTSTn)+yyyGNSz))->labels));
		}
				break;
					}

break;
case 9:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { check_duplicates((((yyyP4)(((char *)yyyTSTn)+yyyGNSz))->vars), (((yyyP4)(((char *)yyyTSTn)+yyyGNSz))->params), (((yyyP4)(((char *)yyyTSTn)+yyyGNSz))->labels));
		}
				break;
					}

break;
case 10:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 11:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 12:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 13:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { check_label((((yyyP2)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->name), (((yyyP6)(((char *)yyyTSTn)+yyyGNSz))->labels));
		}
				break;
					}

break;
case 14:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 15:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 16:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { check_variable((((yyyP2)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->name), (((yyyP6)(((char *)yyyTSTn)+yyyGNSz))->params), (((yyyP6)(((char *)yyyTSTn)+yyyGNSz))->vars));
		}
				break;
					}

break;
case 17:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 18:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 19:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 20:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 21:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 22:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 23:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 24:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 25:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 26:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 27:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 28:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 29:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 30:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 31:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 32:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 33:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 34:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 35:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 36:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 37:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { check_variable((((yyyP2)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->name), (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->params), (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->vars));
		}
				break;
					}

break;
case 38:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 39:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 40:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
case 41:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}

break;
								} /* switch */ 
   if (yyyPass) goto yyyTpop; else goto yyyTpush; 
  } /* while */ 
 } /* for */ 
} /* yyyDoTraversals */ 

void yyyExecuteRRsection()  {
   int yyyi; 
   long yyynRefCounts; 
   long cycleSum = 0;
   long nNZrc = 0;

   if (!yyyYok) return; 
   yyynRefCounts = yyyNextRCLspace - yyyRefCountListSpace; 
   for (yyyi=0;yyyi<yyynRefCounts;yyyi++) 
     if (yyyRefCountListSpace[yyyi])
        {cycleSum += yyyRefCountListSpace[yyyi]; nNZrc++;} 
   if (nNZrc) 
      {
       fprintf(stderr,"\n\n\n**********\n");
       fprintf(stderr,
               "cycle detected in completed parse tree");
       fprintf(stderr,
               " after decoration.\n");
       fprintf(stderr,
         "searching parse tree for %d unsolved instances:\n",
               nNZrc
              );
       yyyUnsolvedInstSearchTravAux(yyyStackTop->node);
      }
   yyyDoTraversals();
} /* yyyExecuteRRsection */ 



yyyWAT yyyLRCIL[2] = {0,0,
};



void yyyYoxInit()                                  /*stock*/  
  { 

   yyyNodeSizeCalc(); 

   if ((yyyTermBuffer.snBufPtr = 
        (char *) malloc((yyyBiggestNodeSize + sizeof(yyyCopyType)))
       )  
       == 
       ((char *) NULL) 
      )   
      yyyfatal("malloc error in yyyTermBuffer allocation\n");  
  
  
   yyyNbytesStackStg = yyyMaxStackSize*sizeof(struct yyyStackItem); 
   yyyNbytesStackStg = ((yyyNbytesStackStg/yyyAlignSize)+1)*yyyAlignSize;  
   if ((yyyNodeAndStackSpace = 
        (char *) malloc((yyyNbytesStackStg + 
                                 yyyMaxNbytesNodeStg + 
                                 yyyGNSz + 
                                 yyyBiggestNodeSize + 
                                 sizeof(yyyCopyType) 
                                )
                       )
       )  
       == 
       ((char *) NULL) 
      )   
      yyyfatal("malloc error in ox node and stack space allocation\n");
   yyyStack = (struct yyyStackItem *) yyyNodeAndStackSpace; 
   yyyAfterStack = yyyStack + yyyMaxStackSize;  
   yyyNodeSpace = yyyNodeAndStackSpace + yyyNbytesStackStg;
   yyyAfterNodeSpace = yyyNodeSpace + yyyMaxNbytesNodeStg;
 
 
   if ((yyyRS = (struct yyyRSitem *) 
         malloc(((yyyRSmaxSize+1)*sizeof(struct yyyRSitem)))
       )  
       == 
       ((struct yyyRSitem *) NULL) 
      )   
      yyyfatal("malloc error in ox ready set space allocation\n");  
   yyyRS++; 
   yyyAfterRS = yyyRS + yyyRSmaxSize; 

 
   if ((yyyChildListSpace = 
        (yyyGNT **) malloc((yyyMaxNchildren*sizeof(yyyGNT *)))
       )  
       == 
       ((yyyGNT **) NULL) 
      )   
      yyyfatal("malloc error in ox child list space allocation\n");  
   yyyAfterChildListSpace = yyyChildListSpace + yyyMaxNchildren; 

 
   if ((yyyRefCountListSpace = 
        (yyyRCT *) malloc((yyyMaxNrefCounts * sizeof(yyyRCT)))
       )  
       == 
       ((yyyRCT *) NULL) 
      )   
      yyyfatal("malloc error in ox reference count list space allocation\n");  
   yyyAfterRefCountListSpace = yyyRefCountListSpace + yyyMaxNrefCounts;  
  
 
   if ((yyySSALspace = (struct yyySolvedSAlistCell *) 
          malloc(((yyySSALspaceSize+1) * 
                          sizeof(struct yyySolvedSAlistCell))
                         ) 
       ) 
       == 
       ((struct yyySolvedSAlistCell *) NULL) 
      ) 
      yyyfatal("malloc error in stack solved list space allocation\n"); 
  } /* yyyYoxInit */ 



void yyyYoxReset() 
  { 
   yyyTermBuffer.isEmpty = 1; 
   yyyStackTop = yyyStack; 
   while (yyyStackTop != yyyAfterStack) 
     (yyyStackTop++)->solvedSAlist = yyyLambdaSSAL; 
   yyyStackTop = yyyStack - 1; 
   yyyNextNodeSpace = yyyNodeSpace; 
   yyyRSTop = yyyRS - 1; 
   yyyNextCLspace = yyyChildListSpace;
   yyyNextRCLspace = yyyRefCountListSpace; 
  }  



void yyyDecorate() 
  { 
   while (yyyRSTop >= yyyRS) 
      yyySolveAndSignal();  
  } 



void yyyShift() 
  {yyyRCT *rcPdum; 
   register yyyCopyType *CTp1,*CTp2,*CTp3; 
   register yyyWAT *startP,*stopP;  

   if ((++yyyStackTop) == yyyAfterStack) 
      yyyHandleOverflow(yyySof);
   CTp2 = (yyyCopyType *)(yyyStackTop->oldestNode = 
                          yyyStackTop->node = 
                          (yyyGNT *)yyyNextNodeSpace 
                         ); 
   yyyTermBuffer.isEmpty = 1;
   ((yyyGNT *)CTp2)->parent = (void *)yyyStackTop; 
   ((yyyGNT *)CTp2)->cL = yyyNextCLspace;  
   rcPdum = ((yyyGNT *)CTp2)->refCountList = yyyNextRCLspace;  
   ((yyyGNT *)CTp2)->prodNum = 0; 
   if ((yyyNextRCLspace += yyyTermBuffer.nAttrbs) 
       > 
       yyyAfterRefCountListSpace 
      ) 
      yyyHandleOverflow(yyyRCof); 
   startP = yyyTermBuffer.startP;  
   stopP = yyyTermBuffer.stopP;  
   while (startP < stopP) rcPdum[*(startP++)] = 0; 
   if ((yyyNextNodeSpace += yyyNdPrSz[yyyTermBuffer.typeNum]) 
       > 
       yyyAfterNodeSpace 
      ) 
      yyyHandleOverflow(yyyNSof);  
   CTp1 = (yyyCopyType *)(yyyTermBuffer.snBufPtr); 
   CTp2 = (yyyCopyType *)(((char *)CTp2) + yyyGNSz); 
   CTp3 = CTp2 + yyyNdCopySz[yyyTermBuffer.typeNum]; 
   while (CTp2 < CTp3) *CTp2++ = *CTp1++; 
  } 



void yyyGenIntNode() 
  {register yyyWST i;
   register struct yyyStackItem *stDum;  
   register yyyGNT *gnpDum; 

   if ((stDum = (yyyStackTop -= (yyyRHSlength-1))) >= yyyAfterStack) 
      yyyHandleOverflow(yyySof);
   yyySTsn = ((char *)(yyySTN = (yyyGNT *)yyyNextNodeSpace)) + yyyGNSz; 
   yyySTN->parent       =  (void *)yyyStackTop;  
   yyySTN->cL           =  yyyNextCLspace; 
   yyySTN->refCountList =  yyyNextRCLspace; 
   yyySTN->prodNum      =  yyyProdNum; 
   if ((yyyNextCLspace+yyyRHSlength) > yyyAfterChildListSpace) 
      yyyHandleOverflow(yyyCLof); 
   for (i=1;i<=yyyRHSlength;i++) 
     {gnpDum = *(yyyNextCLspace++) = (stDum++)->node;  
      gnpDum->whichSym = i;  
      gnpDum->parent = (void *)yyyNextNodeSpace; 
     } 
   if ((yyyNextRCLspace += yyyNattrbs) > yyyAfterRefCountListSpace) 
      yyyHandleOverflow(yyyRCof); 
   if ((yyyNextNodeSpace += yyyNdPrSz[yyyTypeNum]) > yyyAfterNodeSpace) 
      yyyHandleOverflow(yyyNSof);  
  } 



#define yyyDECORfREQ 50 



void yyyAdjustINRC(startP,stopP) 
  register yyyFT *startP,*stopP;
  {yyyWST i;
   long SSALptr,SSALptrHead,*cPtrPtr; 
   long *pL; 
   struct yyyStackItem *stDum;  
   yyyGNT *gnpDum; 
   long iTemp;
   register yyyFT *nextP;
   static unsigned short intNodeCount = yyyDECORfREQ;

   nextP = startP;
   while (nextP < stopP) 
     {if ((*nextP) == yyyR)  
         {(yyySTN->refCountList)[*(nextP+1)] = *(nextP+2);
         } 
         else 
         {(((yyySTN->cL)[*nextP])->refCountList)[*(nextP+1)] = *(nextP+2);
         } 
      nextP += 3;  
     }
   pL = yyyIIEL + yyyIIIEL[yyyProdNum]; 
   stDum = yyyStackTop;  
   for (i=1;i<=yyyRHSlength;i++) 
     {pL++; 
      SSALptrHead = SSALptr = *(cPtrPtr = &((stDum++)->solvedSAlist)); 
      if (SSALptr != yyyLambdaSSAL) 
         {*cPtrPtr = yyyLambdaSSAL; 
          do 
            {
             iTemp = (*pL+yyySSALspace[SSALptr].attrbNum);
             yyySignalEnts(yyySTN,
                           yyyEntL + yyyIEL[iTemp],
                           yyyEntL + yyyIEL[iTemp+1]
                          );  
             SSALptr = *(cPtrPtr = &(yyySSALspace[SSALptr].next)); 
            } 
            while (SSALptr != yyyLambdaSSAL);  
          *cPtrPtr = yyySSALCfreeList;  
          yyySSALCfreeList = SSALptrHead;  
         } 
     } 
   nextP = startP + 2;
   while (nextP < stopP) 
     {if (!(*nextP))
         {if ((*(nextP-2)) == yyyR)  
             {pL = &(yyyStackTop->solvedSAlist); 
              if (yyySSALCfreeList == yyyLambdaSSAL) 
                 {yyySSALspace[yyyNewSSALC].next = *pL; 
                  if ((*pL = yyyNewSSALC++) == yyySSALspaceSize) 
                     yyyHandleOverflow(yyySSALof); 
                 }  
                 else
                 {iTemp = yyySSALCfreeList; 
                  yyySSALCfreeList = yyySSALspace[yyySSALCfreeList].next; 
                  yyySSALspace[iTemp].next = *pL; 
                  *pL = iTemp;  
                 } 
              yyySSALspace[*pL].attrbNum = *(nextP-1); 
             } 
             else 
             {if ((gnpDum = (yyySTN->cL)[*(nextP-2)])->prodNum != 0)
                 {
                  iTemp = yyyIIEL[yyyIIIEL[gnpDum->prodNum]] + *(nextP-1);
                  yyySignalEnts(gnpDum, 
                                yyyEntL + yyyIEL[iTemp],  
                                yyyEntL + yyyIEL[iTemp+1] 
                               );    
                 }  
             } 
         } 
      nextP += 3; 
     } 
   yyyStackTop->node = yyySTN;
   if (!yyyRHSlength) yyyStackTop->oldestNode = yyySTN; 
   if (!--intNodeCount) 
      {intNodeCount = yyyDECORfREQ; 
       yyyDecorate(); 
      } 
  } 



void yyyPrune(prodNum) 
  long prodNum;
  {  
   int i,n; 
   register char *cp1,*cp2;  
   register yyyRCT *rcp1,*rcp2,*rcp3;  
   long cycleSum = 0;
   long nNZrc = 0;
   yyyRCT *tempNextRCLspace;
   
   yyyDecorate();
   tempNextRCLspace = yyyNextRCLspace;
   yyyNextRCLspace = 
     (rcp1 = rcp2 = (yyyStackTop->oldestNode)->refCountList) + yyyNattrbs;
   rcp3 = (yyyStackTop->node)->refCountList; 
   while (rcp2 < rcp3) 
     if (*rcp2++) {cycleSum += *(rcp2 - 1); nNZrc++;} 
   if (nNZrc) 
      {
       fprintf(stderr,"\n\n\n----------\n");
       fprintf(stderr,
         "cycle detected during pruning of a subtree\n");
       fprintf(stderr,
         "  at whose root production %d is applied.\n",prodNum);
       yyyNextRCLspace = tempNextRCLspace; 
       fprintf(stderr,
         "prune aborted: searching subtree for %d unsolved instances:\n",
               nNZrc
              );
       yyyUnsolvedInstSearchTrav(yyyStackTop->node);
       return; 
      }
   for (i=0;i<yyyNattrbs;i++) rcp1[i] = rcp3[i]; 
   yyyNextCLspace = (yyyStackTop->oldestNode)->cL; 
   yyyNextNodeSpace = (char *)(yyyStackTop->oldestNode) + 
                      (n = yyyNdPrSz[yyyTypeNum]);
   cp1 = (char *)yyyStackTop->oldestNode; 
   cp2 = (char *)yyyStackTop->node; 
   for (i=0;i<n;i++) *cp1++ = *cp2++; 
   yyyStackTop->node = yyyStackTop->oldestNode; 
   (yyyStackTop->node)->refCountList = rcp1; 
   (yyyStackTop->node)->cL = yyyNextCLspace; 
  } 



void yyyGenLeaf(nAttrbs,typeNum,startP,stopP) 
  int nAttrbs,typeNum; 
  yyyWAT *startP,*stopP; 
  {
   if  (!(yyyTermBuffer.isEmpty)) yyyShift(); 
   yyyTermBuffer.isEmpty = 0;
   yyyTermBuffer.typeNum = typeNum; 
   yyyTermBuffer.nAttrbs = nAttrbs; 
   yyyTermBuffer.startP = startP; 
   yyyTermBuffer.stopP = stopP; 
   
  } 



void yyyerror()
  {yyyYok = 0; 
  } 



/* read the command line for changes in sizes of 
                  the evaluator's data structures */
void yyyCheckForResizes(argc,argv) 
  int argc; 
  char *argv[]; 
  {int i; 
   long dum; 
 
   if (!yyyPermitUserAlloc) return; 
   for (i=1;i<argc;i++) 
     { 
      if ((argv[i][0] != '-') || (argv[i][1] != 'Y')) continue; 
      if (strlen(argv[i]) < 4) goto yyyErrO1; 
      if (sscanf(argv[i]+3,"%d",&dum) != 1) goto yyyErrO1;
      if (dum < 2) dum = 2;
      switch (argv[i][2]) 
        {case yyyNSof:   yyyMaxNbytesNodeStg = dum; break; 
         case yyyRCof:   yyyMaxNrefCounts    = dum; break; 
         case yyyCLof:   yyyMaxNchildren     = dum; break; 
         case yyySof:    yyyMaxStackSize     = dum; break; 
         case yyySSALof: yyySSALspaceSize    = dum; break; 
         case yyyRSof:   yyyRSmaxSize        = dum; break; 
         case yyyTSof:   yyyTravStackMaxSize = dum; break; 
         default : goto yyyErrO1; 
        }
      continue;  
   yyyErrO1 : fprintf(stderr,"invalid command line option: %s\n",
                             argv[i] 
                     ); 
     } 
  } 
   
   
   


#define yyyLastProdNum 41


#define yyyNsorts 7


int yyyProdsInd[] = {
   0,
   0,   3,   4,  12,  16,  18,  19,  24,  28,  29,
  33,  36,  39,  42,  48,  53,  57,  62,  64,  66,
  68,  70,  72,  76,  80,  84,  88,  92,  96, 100,
 104, 107, 110, 113, 115, 119, 121, 123, 128, 132,
 134,
 135,
};


int yyyProds[][2] = {
{1045,   0},{ 906,   0},{1045,   0},{1045,   0},{ 906,   0},
{ 809,   2},{ 396,   0},{ 153,   5},{ 404,   0},{  95,   4},
{ 821,   0},{ 548,   0},{ 153,   5},{ 809,   2},{ 428,   0},
{ 153,   5},{ 153,   5},{ 809,   2},{ 153,   5},{  95,   4},
{ 759,   3},{ 278,   6},{ 548,   0},{  95,   4},{  95,   4},
{ 278,   6},{ 548,   0},{  95,   4},{  95,   4},{ 759,   3},
{ 759,   3},{ 809,   2},{ 540,   0},{ 759,   3},{ 809,   2},
{ 540,   0},{ 278,   6},{1050,   0},{ 931,   7},{ 278,   6},
{ 905,   0},{ 809,   2},{ 278,   6},{ 850,   0},{ 931,   7},
{ 547,   0},{  95,   4},{ 821,   0},{ 278,   6},{1216,   0},
{ 809,   2},{ 564,   0},{ 931,   7},{ 278,   6},{ 809,   2},
{ 564,   0},{ 931,   7},{ 278,   6},{ 822,   0},{ 640,   7},
{ 564,   0},{ 931,   7},{ 278,   6},{1029,   7},{ 931,   7},
{ 640,   7},{ 931,   7},{ 302,   7},{ 931,   7},{ 451,   7},
{ 931,   7},{ 382,   7},{ 931,   7},{1029,   7},{1095,   0},
{1029,   7},{ 931,   7},{1029,   7},{ 356,   0},{1029,   7},
{ 302,   7},{1029,   7},{ 442,   0},{1029,   7},{ 302,   7},
{1029,   7},{ 442,   0},{ 302,   7},{ 451,   7},{1029,   7},
{ 822,   0},{1029,   7},{ 451,   7},{1029,   7},{ 822,   0},
{ 451,   7},{ 382,   7},{1029,   7},{ 823,   0},{1029,   7},
{ 382,   7},{1029,   7},{ 823,   0},{ 382,   7},{ 640,   7},
{1126,   0},{ 640,   7},{ 640,   7},{ 443,   0},{ 640,   7},
{ 640,   7},{ 822,   0},{ 640,   7},{ 640,   7},{1029,   7},
{1029,   7},{ 396,   0},{ 931,   7},{ 404,   0},{1029,   7},
{  57,   1},{1029,   7},{ 809,   2},{1029,   7},{ 809,   2},
{ 396,   0},{ 144,   7},{ 404,   0},{ 144,   7},{ 931,   7},
{ 428,   0},{ 144,   7},{ 144,   7},{ 931,   7},{ 144,   7},
};


int yyySortsInd[] = {
  0,
  0,  1,  2,  4, 11, 13, 20,
 23,
};


int yyySorts[] = {
  423,  381,  517,  143,  517,   50,  151,  143,  525,  152,
  765,  521,  147,   50,  151,  525,  143,  517,  152,  765,
   50,  152,  765,
};



char *yyyStringTab[] = {
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"char",0,
0,0,0,0,0,
0,0,0,0,0,
"params",0,0,0,0,
0,0,"T_NUM",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"stats",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"t",0,0,
0,0,"y",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"labels_in","call_parameters",
0,0,"params_in",0,0,
0,"vars_in","vars","parameters",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"NULL",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"stat",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"add_expr",0,0,
0,0,0,0,"sizeof",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"'#'",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"name","and_expr",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"'('",0,0,0,
0,0,0,0,"')'",
0,0,0,0,0,
0,0,0,0,0,
0,"strdup",0,0,0,
0,0,0,"val",0,
"label",0,0,"','","tbl",
0,0,0,0,0,
0,0,0,0,0,
0,0,"T_PLUS","T_MINUS",0,
0,0,0,0,0,
0,"mult_expr",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"labels_out",0,0,
0,"params_out",0,0,0,
"vars_out",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"':'",0,0,0,0,
0,0,"T_THEN","';'",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"'='",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"check",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"unary",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"labeldefinition",
0,0,0,0,0,
"labels",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"strtol",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"T_IDENTIFIER",
0,0,0,0,0,
0,0,0,0,0,
0,"T_END","T_MULT","T_AND","symbol",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"T_IF",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"T_GOTO","function",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"expression",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"yytext",0,
0,0,0,0,"term",
"duplicates",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"program",0,0,0,0,
"T_RETURN",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"T_CMP_LE",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"variable",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"T_NOT",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"add",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"T_VAR",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,
};



#define yyySizeofProd(num) (yyyProdsInd[(num)+1] - yyyProdsInd[(num)])

#define yyyGSoccurStr(prodNum,symPos) \
   (yyyStringTab[yyyProds[yyyProdsInd[(prodNum)] + (symPos)][0]])

#define yyySizeofSort(num) (yyySortsInd[(num)+1] - yyySortsInd[(num)])

#define yyySortOf(prodNum,symPos) \
  (yyyProds[yyyProdsInd[(prodNum)] + (symPos)][1]) 

#define yyyAttrbStr(prodNum,symPos,attrbNum)                      \
  (yyyStringTab[yyySorts[yyySortsInd[yyySortOf(prodNum,symPos)] + \
                         (attrbNum)                               \
                        ]                                         \
               ]                                                  \
  )



void yyyShowProd(i)
  int i;
  {int j,nSyms;

   nSyms = yyySizeofProd(i);
   for (j=0; j<nSyms; j++)
     {
      fprintf(stderr,"%s",yyyGSoccurStr(i,j));
      if (j == 0) fprintf(stderr," : "); else fprintf(stderr," ");
     }
   fprintf(stderr,";\n");
  }



void yyyShowProds()
  {int i; for (i=1; i<=yyyLastProdNum; i++) yyyShowProd(i);}



void yyyShowSymsAndSorts()
  {int i; 

   for (i=1; i<=yyyLastProdNum; i++) 
     {int j, nSyms;

      fprintf(stderr,
              "\n\n\n---------------------------------- %3.1d\n",i);
      /* yyyShowProd(i); */ 
      nSyms = yyySizeofProd(i); 
      for (j=0; j<nSyms; j++) 
        {int k, sortSize;

         fprintf(stderr,"%s\n",yyyGSoccurStr(i,j));
         sortSize = yyySizeofSort(yyySortOf(i,j));
         for (k=0; k<sortSize; k++) 
            fprintf(stderr,"  %s\n",yyyAttrbStr(i,j,k));
         if (j == 0) fprintf(stderr,"->\n"); 
              else 
              fprintf(stderr,"\n"); 
        }
     }
  }



void yyyCheckNodeInstancesSolved(np)
  yyyGNT *np;
  {int mysort,sortSize,i,prodNum,symPos,inTerminalNode;
   int nUnsolvedInsts = 0;

   if (np->prodNum != 0)
     {inTerminalNode = 0;
      prodNum = np->prodNum;
      symPos = 0;
     }
   else
     {inTerminalNode = 1;
      prodNum = ((yyyGNT *)(np->parent))->prodNum;
      symPos = np->whichSym;
     }
   mysort = yyySortOf(prodNum,symPos);
   sortSize = yyySizeofSort(mysort);
   for (i=0; i<sortSize; i++)
     if ((np->refCountList)[i] != 0) nUnsolvedInsts += 1;
   if (nUnsolvedInsts)
     {fprintf(stderr,
      "\nFound node that has %d unsolved attribute instance(s).\n",
              nUnsolvedInsts
             );
      fprintf(stderr,"Node is labeled \"%s\".\n",
             yyyGSoccurStr(prodNum,symPos));
      if (inTerminalNode)
        {fprintf(stderr,
                 "Node is terminal.  Its parent production is:\n  ");
         yyyShowProd(prodNum);
        }
      else
        {fprintf(stderr,"Node is nonterminal.  ");
         if (((char *)(np->parent)) >= yyyNodeSpace)
           {fprintf(stderr,
                    "Node is %dth child in its parent production:\n  ",
                   np->whichSym
                  );
            yyyShowProd(((yyyGNT *)(np->parent))->prodNum);
           }
         fprintf(stderr,
                 "Node is on left hand side of this production:\n  ");
         yyyShowProd(np->prodNum);
        }
      fprintf(stderr,"The following instances are unsolved:\n");
      for (i=0; i<sortSize; i++)
        if ((np->refCountList)[i] != 0)
          fprintf(stderr,"     %-16s still has %1d dependencies.\n",
                  yyyAttrbStr(prodNum,symPos,i),(np->refCountList)[i]);
     }
  }



void yyyUnsolvedInstSearchTravAux(pNode)
  yyyGNT *pNode;
  {yyyGNT **yyyCLpdum;
   int i;
  
   yyyCheckNodeInstancesSolved(pNode); 
   yyyCLpdum = pNode->cL;
   while
     ((yyyCLpdum != yyyNextCLspace) && ((*yyyCLpdum)->parent == pNode))
     {
      yyyUnsolvedInstSearchTravAux(*yyyCLpdum);
      yyyCLpdum++;
     }
  }



void yyyUnsolvedInstSearchTrav(pNode)
  yyyGNT *pNode;
  {yyyGNT **yyyCLpdum;
   int i;
  
   yyyCLpdum = pNode->cL;
   while
     ((yyyCLpdum != yyyNextCLspace) && ((*yyyCLpdum)->parent == pNode))
     {
      yyyUnsolvedInstSearchTravAux(*yyyCLpdum);
      yyyCLpdum++;
     }
  }



