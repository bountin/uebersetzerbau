/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_PLUS = 258,
     T_MINUS = 259,
     T_MULT = 260,
     T_CMP_LE = 261,
     T_RETURN = 262,
     T_IF = 263,
     T_THEN = 264,
     T_GOTO = 265,
     T_VAR = 266,
     T_END = 267,
     T_NOT = 268,
     T_AND = 269,
     T_NUM = 270,
     T_IDENTIFIER = 271
   };
#endif
/* Tokens.  */
#define T_PLUS 258
#define T_MINUS 259
#define T_MULT 260
#define T_CMP_LE 261
#define T_RETURN 262
#define T_IF 263
#define T_THEN 264
#define T_GOTO 265
#define T_VAR 266
#define T_END 267
#define T_NOT 268
#define T_AND 269
#define T_NUM 270
#define T_IDENTIFIER 271




/* Copy the first part of user declarations.  */
#line 2 "oxout.y"

#line 4 "oxout.y"


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
#line 47 "oxout.y"



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


#line 121 "oxout.y"

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


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 262 "oxout.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   92

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  24
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  44
/* YYNRULES -- Number of states.  */
#define YYNSTATES  84

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   271

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    23,     2,     2,     2,     2,
      17,    18,     2,     2,    20,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    21,    19,
       2,    22,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    11,    19,    23,    25,
      26,    31,    35,    36,    40,    43,    46,    49,    55,    60,
      64,    69,    71,    73,    75,    77,    79,    83,    87,    91,
      95,    99,   103,   107,   111,   114,   117,   120,   122,   126,
     128,   130,   135,   139,   141
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      25,     0,    -1,    -1,    26,    27,    -1,    28,    27,    -1,
      -1,    16,    17,    29,    18,    30,    12,    19,    -1,    16,
      20,    29,    -1,    16,    -1,    -1,    31,    32,    19,    30,
      -1,    32,    19,    30,    -1,    -1,    31,    16,    21,    -1,
      16,    21,    -1,     7,    33,    -1,    10,    16,    -1,     8,
      33,     9,    30,    12,    -1,    11,    16,    22,    33,    -1,
      16,    22,    33,    -1,     5,    37,    22,    33,    -1,    38,
      -1,    37,    -1,    34,    -1,    35,    -1,    36,    -1,    38,
       6,    38,    -1,    38,    23,    38,    -1,    38,     3,    38,
      -1,    38,     3,    34,    -1,    38,     5,    38,    -1,    38,
       5,    35,    -1,    38,    14,    38,    -1,    38,    14,    36,
      -1,    13,    37,    -1,     4,    37,    -1,     5,    37,    -1,
      38,    -1,    17,    33,    18,    -1,    15,    -1,    16,    -1,
      16,    17,    39,    18,    -1,    33,    20,    39,    -1,    33,
      -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   156,   156,   156,   168,   173,   179,   190,   195,   201,
     208,   213,   219,   226,   231,   239,   244,   249,   254,   259,
     264,   269,   277,   281,   285,   289,   293,   297,   304,   308,
     315,   319,   326,   330,   337,   341,   345,   349,   356,   360,
     364,   369,   376,   380,   385
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_PLUS", "T_MINUS", "T_MULT",
  "T_CMP_LE", "T_RETURN", "T_IF", "T_THEN", "T_GOTO", "T_VAR", "T_END",
  "T_NOT", "T_AND", "T_NUM", "T_IDENTIFIER", "'('", "')'", "';'", "','",
  "':'", "'='", "'#'", "$accept", "yyyAugNonterm", "@1", "program",
  "function", "parameters", "stats", "labeldefinition", "stat",
  "expression", "add_expr", "mult_expr", "and_expr", "unary", "term",
  "call_parameters", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    40,    41,    59,
      44,    58,    61,    35
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    24,    26,    25,    27,    27,    28,    29,    29,    29,
      30,    30,    30,    31,    31,    32,    32,    32,    32,    32,
      32,    32,    33,    33,    33,    33,    33,    33,    34,    34,
      35,    35,    36,    36,    37,    37,    37,    37,    38,    38,
      38,    38,    39,    39,    39
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     0,     7,     3,     1,     0,
       4,     3,     0,     3,     2,     2,     2,     5,     4,     3,
       4,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     1,     3,     1,
       1,     4,     3,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     5,     1,     0,     3,     5,     9,     4,     8,
       0,     9,    12,     7,     0,     0,     0,     0,     0,    39,
      40,     0,     0,     0,     0,    21,     0,     0,     0,    40,
       0,    37,    15,    23,    24,    25,    22,    37,     0,    16,
       0,    44,    14,     0,     0,     0,    40,     0,    12,    35,
      36,    34,     0,     0,     0,     0,     0,     0,    12,     0,
      43,     0,    19,    38,     6,    13,    12,    11,    20,    29,
      28,    31,    30,    26,    33,    32,    27,     0,    18,    44,
      41,    10,    17,    42
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     5,     6,    10,    22,    23,    24,    60,
      33,    34,    35,    36,    37,    61
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -39
static const yytype_int8 yypact[] =
{
     -39,     1,   -13,   -39,   -10,   -39,   -13,   -11,   -39,   -16,
       9,   -11,    59,   -39,    46,    46,    46,    19,    21,   -39,
       8,    46,    12,    72,    28,   -39,    46,    46,    46,    31,
      30,   -39,   -39,   -39,   -39,   -39,   -39,     3,    44,   -39,
      33,    46,   -39,    46,    39,    41,    17,    49,    59,   -39,
     -39,   -39,    46,     6,     6,     6,     6,     6,    59,    46,
      38,    47,   -39,   -39,   -39,   -39,    59,   -39,   -39,   -39,
      68,   -39,    67,   -39,   -39,    64,   -39,    61,   -39,    46,
     -39,   -39,   -39,   -39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -39,   -39,   -39,    75,   -39,    73,   -38,   -39,    62,    -3,
      37,    32,    35,     5,   -12,    13
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      25,     3,    31,     4,    11,     9,    53,     7,    54,    55,
      67,    25,    32,    38,    31,    31,    31,    56,    44,    30,
      77,    19,    29,    21,    45,    41,    57,    12,    81,    42,
      43,    49,    50,    51,    41,    39,    25,    40,    65,    43,
      62,    70,    72,    73,    75,    76,    25,    48,    41,    68,
      26,    27,    52,    58,    25,    59,    78,    63,    79,    28,
      64,    19,    29,    21,    14,    80,    15,    16,    66,    17,
      18,    53,    54,    82,    19,    20,    21,    14,    56,    15,
      16,     8,    17,    18,    13,    47,    71,    19,    46,    21,
      69,    74,    83
};

static const yytype_uint8 yycheck[] =
{
      12,     0,    14,    16,    20,    16,     3,    17,     5,     6,
      48,    23,    15,    16,    26,    27,    28,    14,    21,    14,
      58,    15,    16,    17,    12,    17,    23,    18,    66,    21,
      22,    26,    27,    28,    17,    16,    48,    16,    21,    22,
      43,    53,    54,    55,    56,    57,    58,    19,    17,    52,
       4,     5,    22,     9,    66,    22,    59,    18,    20,    13,
      19,    15,    16,    17,     5,    18,     7,     8,    19,    10,
      11,     3,     5,    12,    15,    16,    17,     5,    14,     7,
       8,     6,    10,    11,    11,    23,    54,    15,    16,    17,
      53,    56,    79
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,    26,     0,    16,    27,    28,    17,    27,    16,
      29,    20,    18,    29,     5,     7,     8,    10,    11,    15,
      16,    17,    30,    31,    32,    38,     4,     5,    13,    16,
      37,    38,    33,    34,    35,    36,    37,    38,    33,    16,
      16,    17,    21,    22,    33,    12,    16,    32,    19,    37,
      37,    37,    22,     3,     5,     6,    14,    23,     9,    22,
      33,    39,    33,    18,    19,    21,    19,    30,    33,    34,
      38,    35,    38,    38,    36,    38,    38,    30,    33,    20,
      18,    30,    12,    39
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 156 "oxout.y"
    {if (!yyyInitDone) 
		    {yyyYoxInit(); 
		     yyyInitDone = 1;
		    }
		 yyyYoxReset();
		;}
    break;

  case 3:
#line 163 "oxout.y"
    {
		 yyyDecorate(); yyyExecuteRRsection();
		;}
    break;

  case 4:
#line 169 "oxout.y"
    {if(yyyYok){
yyyRSU(1,2,0,0);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+0,yyyRCIL+0);/*yyyPrune(1);*/};}
    break;

  case 5:
#line 173 "oxout.y"
    {if(yyyYok){
yyyRSU(2,0,0,0);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+0,yyyRCIL+0);};}
    break;

  case 6:
#line 180 "oxout.y"
    {if(yyyYok){
yyyRSU(3,7,0,0);
yyyGenIntNode();
 (((yyyP4)(((char *)((yyySTN->cL)[4]))+yyyGNSz))->labels_in) = NULL;
			 (((yyyP5)(((char *)((yyySTN->cL)[2]))+yyyGNSz))->params_in) = NULL;
			 (((yyyP4)(((char *)((yyySTN->cL)[4]))+yyyGNSz))->vars_in) = NULL;
			yyyAdjustINRC(yyyRCIL+0,yyyRCIL+18);/*yyyPrune(3);*/};}
    break;

  case 7:
#line 191 "oxout.y"
    {if(yyyYok){
yyyRSU(4,3,2,5);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+18,yyyRCIL+24);};}
    break;

  case 8:
#line 196 "oxout.y"
    {if(yyyYok){
yyyRSU(5,1,2,5);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+24,yyyRCIL+27);};}
    break;

  case 9:
#line 201 "oxout.y"
    {if(yyyYok){
yyyRSU(6,0,2,5);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+27,yyyRCIL+30);};}
    break;

  case 10:
#line 209 "oxout.y"
    {if(yyyYok){
yyyRSU(7,4,7,4);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+30,yyyRCIL+69);};}
    break;

  case 11:
#line 214 "oxout.y"
    {if(yyyYok){
yyyRSU(8,3,7,4);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+69,yyyRCIL+105);};}
    break;

  case 12:
#line 219 "oxout.y"
    {if(yyyYok){
yyyRSU(9,0,7,4);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+105,yyyRCIL+111);};}
    break;

  case 13:
#line 227 "oxout.y"
    {if(yyyYok){
yyyRSU(10,3,2,3);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+111,yyyRCIL+117);};}
    break;

  case 14:
#line 232 "oxout.y"
    {if(yyyYok){
yyyRSU(11,2,2,3);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+117,yyyRCIL+120);};}
    break;

  case 15:
#line 240 "oxout.y"
    {if(yyyYok){
yyyRSU(12,2,7,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+120,yyyRCIL+135);};}
    break;

  case 16:
#line 245 "oxout.y"
    {if(yyyYok){
yyyRSU(13,2,7,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+135,yyyRCIL+141);/*yyyPrune(13);*/};}
    break;

  case 17:
#line 250 "oxout.y"
    {if(yyyYok){
yyyRSU(14,5,7,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+141,yyyRCIL+171);};}
    break;

  case 18:
#line 255 "oxout.y"
    {if(yyyYok){
yyyRSU(15,4,7,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+171,yyyRCIL+186);};}
    break;

  case 19:
#line 260 "oxout.y"
    {if(yyyYok){
yyyRSU(16,3,7,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+186,yyyRCIL+201);};}
    break;

  case 20:
#line 265 "oxout.y"
    {if(yyyYok){
yyyRSU(17,4,7,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+201,yyyRCIL+225);};}
    break;

  case 21:
#line 270 "oxout.y"
    {if(yyyYok){
yyyRSU(18,1,7,6);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+225,yyyRCIL+240);};}
    break;

  case 22:
#line 278 "oxout.y"
    {if(yyyYok){
yyyRSU(19,1,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+240,yyyRCIL+249);};}
    break;

  case 23:
#line 282 "oxout.y"
    {if(yyyYok){
yyyRSU(20,1,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+249,yyyRCIL+258);};}
    break;

  case 24:
#line 286 "oxout.y"
    {if(yyyYok){
yyyRSU(21,1,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+258,yyyRCIL+267);};}
    break;

  case 25:
#line 290 "oxout.y"
    {if(yyyYok){
yyyRSU(22,1,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+267,yyyRCIL+276);};}
    break;

  case 26:
#line 294 "oxout.y"
    {if(yyyYok){
yyyRSU(23,3,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+276,yyyRCIL+294);};}
    break;

  case 27:
#line 298 "oxout.y"
    {if(yyyYok){
yyyRSU(24,3,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+294,yyyRCIL+312);};}
    break;

  case 28:
#line 305 "oxout.y"
    {if(yyyYok){
yyyRSU(25,3,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+312,yyyRCIL+330);};}
    break;

  case 29:
#line 309 "oxout.y"
    {if(yyyYok){
yyyRSU(26,3,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+330,yyyRCIL+348);};}
    break;

  case 30:
#line 316 "oxout.y"
    {if(yyyYok){
yyyRSU(27,3,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+348,yyyRCIL+366);};}
    break;

  case 31:
#line 320 "oxout.y"
    {if(yyyYok){
yyyRSU(28,3,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+366,yyyRCIL+384);};}
    break;

  case 32:
#line 327 "oxout.y"
    {if(yyyYok){
yyyRSU(29,3,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+384,yyyRCIL+402);};}
    break;

  case 33:
#line 331 "oxout.y"
    {if(yyyYok){
yyyRSU(30,3,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+402,yyyRCIL+420);};}
    break;

  case 34:
#line 338 "oxout.y"
    {if(yyyYok){
yyyRSU(31,2,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+420,yyyRCIL+429);};}
    break;

  case 35:
#line 342 "oxout.y"
    {if(yyyYok){
yyyRSU(32,2,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+429,yyyRCIL+438);};}
    break;

  case 36:
#line 346 "oxout.y"
    {if(yyyYok){
yyyRSU(33,2,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+438,yyyRCIL+447);};}
    break;

  case 37:
#line 350 "oxout.y"
    {if(yyyYok){
yyyRSU(34,1,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+447,yyyRCIL+456);};}
    break;

  case 38:
#line 357 "oxout.y"
    {if(yyyYok){
yyyRSU(35,3,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+456,yyyRCIL+465);};}
    break;

  case 39:
#line 361 "oxout.y"
    {if(yyyYok){
yyyRSU(36,1,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+465,yyyRCIL+465);/*yyyPrune(36);*/};}
    break;

  case 40:
#line 365 "oxout.y"
    {if(yyyYok){
yyyRSU(37,1,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+465,yyyRCIL+465);/*yyyPrune(37);*/};}
    break;

  case 41:
#line 370 "oxout.y"
    {if(yyyYok){
yyyRSU(38,4,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+465,yyyRCIL+474);};}
    break;

  case 42:
#line 377 "oxout.y"
    {if(yyyYok){
yyyRSU(39,3,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+474,yyyRCIL+492);};}
    break;

  case 43:
#line 381 "oxout.y"
    {if(yyyYok){
yyyRSU(40,1,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+492,yyyRCIL+501);};}
    break;

  case 44:
#line 385 "oxout.y"
    {if(yyyYok){
yyyRSU(41,0,3,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+501,yyyRCIL+501);};}
    break;


/* Line 1267 of yacc.c.  */
#line 1872 "oxout.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 390 "oxout.y"

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




