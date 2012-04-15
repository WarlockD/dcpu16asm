
/*  A Bison parser, made from dcpu16.bison with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	NUMBER	258
#define	STRING	259
#define	LABEL	260
#define	SET	261
#define	ADD	262
#define	SUB	263
#define	MUL	264
#define	DIV	265
#define	MOD	266
#define	SHL	267
#define	SHR	268
#define	AND	269
#define	BOR	270
#define	XOR	271
#define	IFE	272
#define	IFN	273
#define	IFG	274
#define	IFB	275
#define	JSR	276
#define	ORGIN	277
#define	WORD	278
#define	BYTE	279
#define	EQU	280
#define	REG_A	281
#define	REG_B	282
#define	REG_C	283
#define	REG_X	284
#define	REG_Y	285
#define	REG_Z	286
#define	REG_I	287
#define	REG_J	288
#define	REG_SP	289
#define	REG_O	290
#define	REG_PEEK	291
#define	REG_POP	292
#define	REG_PUSH	293
#define	REG_PC	294
#define	EOL	295
#define	WRONGTOKEN	296
#define	ERROR	297
#define	PRINT	298
#define	UNARYMINUS	299
#define	UNARYNOT	300

#line 1 "dcpu16.bison"

	#include "dcpu16asm.h"
	#define YY_NO_UNISTD_H 
	#define YYDEBUG 1

#line 6 "dcpu16.bison"
typedef union{
	int num;
	t_symbol* ident;
	char* str;
	t_operand operand;
	unsigned short opcode;
} YYSTYPE;

#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#ifndef YYDEBUG
#define YYDEBUG 1
#endif

#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		149
#define	YYFLAG		-32768
#define	YYNTBASE	61

#define YYTRANSLATE(x) ((unsigned)(x) <= 300 ? yytranslate[x] : 73)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    53,     2,     2,     2,    49,    52,     2,    57,
    58,    47,    45,    55,    46,     2,    48,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,    56,     2,     2,
    44,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
    59,     2,    60,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,    51,     2,     2,     2,     2,     2,     2,
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
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    50,    54
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     5,     7,    11,    14,    17,    21,    25,    27,
    31,    34,    35,    39,    40,    44,    47,    49,    50,    52,
    56,    57,    59,    63,    65,    68,    71,    73,    75,    79,
    83,    87,    91,    95,    99,   103,   107,   110,   113,   115,
   117,   119,   121,   123,   125,   127,   129,   131,   135,   141,
   143,   145,   147,   149,   151,   153,   157,   159,   164,   169,
   174,   179,   184,   189,   194,   199,   204,   209,   214,   219,
   224,   229,   234
};

static const short yyrhs[] = {    62,
     0,    61,    62,     0,    40,     0,    43,     5,    40,     0,
    63,    40,     0,     1,    40,     0,    68,    44,    69,     0,
    68,    25,    69,     0,    68,     0,    68,    22,    69,     0,
    22,    69,     0,     0,    23,    64,    67,     0,     0,    24,
    65,    66,     0,    68,    72,     0,    72,     0,     0,    69,
     0,    66,    55,    69,     0,     0,    69,     0,    67,    55,
    69,     0,     5,     0,    56,     5,     0,     5,    56,     0,
     3,     0,     5,     0,    69,    45,    69,     0,    69,    46,
    69,     0,    69,    47,    69,     0,    69,    48,    69,     0,
    69,    49,    69,     0,    69,    52,    69,     0,    69,    51,
    69,     0,    57,    69,    58,     0,    46,    69,     0,    53,
    69,     0,    26,     0,    27,     0,    28,     0,    29,     0,
    30,     0,    31,     0,    32,     0,    33,     0,    70,     0,
    59,    70,    60,     0,    59,    69,    45,    70,    60,     0,
    37,     0,    36,     0,    38,     0,    34,     0,    39,     0,
    35,     0,    59,    69,    60,     0,    69,     0,     6,    71,
    55,    71,     0,     7,    71,    55,    71,     0,     8,    71,
    55,    71,     0,     9,    71,    55,    71,     0,    10,    71,
    55,    71,     0,    11,    71,    55,    71,     0,    12,    71,
    55,    71,     0,    13,    71,    55,    71,     0,    14,    71,
    55,    71,     0,    15,    71,    55,    71,     0,    16,    71,
    55,    71,     0,    17,    71,    55,    71,     0,    18,    71,
    55,    71,     0,    19,    71,    55,    71,     0,    20,    71,
    55,    71,     0,    21,    71,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    42,    43,    46,    47,    48,    49,    52,    53,    54,    55,
    56,    57,    57,    58,    58,    59,    60,    63,    64,    65,
    68,    69,    70,    73,    74,    75,    78,    79,    80,    81,
    82,    83,    84,    85,    86,    87,    88,    89,    93,    94,
    95,    96,    97,    98,    99,   100,   104,   105,   106,   107,
   108,   109,   110,   111,   112,   113,   114,   129,   130,   131,
   132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
   142,   143,   144
};

static const char * const yytname[] = {   "$","error","$undefined.","NUMBER",
"STRING","LABEL","SET","ADD","SUB","MUL","DIV","MOD","SHL","SHR","AND","BOR",
"XOR","IFE","IFN","IFG","IFB","JSR","ORGIN","WORD","BYTE","EQU","REG_A","REG_B",
"REG_C","REG_X","REG_Y","REG_Z","REG_I","REG_J","REG_SP","REG_O","REG_PEEK",
"REG_POP","REG_PUSH","REG_PC","EOL","WRONGTOKEN","ERROR","PRINT","'='","'+'",
"'-'","'*'","'/'","'%'","UNARYMINUS","'|'","'&'","'!'","UNARYNOT","','","':'",
"'('","')'","'['","']'","lines","line","rest","@1","@2","byteseq","wordseq",
"label","expr","operand_regester","operand_expr","opcode_expr",""
};
#endif

static const short yyr1[] = {     0,
    61,    61,    62,    62,    62,    62,    63,    63,    63,    63,
    63,    64,    63,    65,    63,    63,    63,    66,    66,    66,
    67,    67,    67,    68,    68,    68,    69,    69,    69,    69,
    69,    69,    69,    69,    69,    69,    69,    69,    70,    70,
    70,    70,    70,    70,    70,    70,    71,    71,    71,    71,
    71,    71,    71,    71,    71,    71,    71,    72,    72,    72,
    72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
    72,    72,    72
};

static const short yyr2[] = {     0,
     1,     2,     1,     3,     2,     2,     3,     3,     1,     3,
     2,     0,     3,     0,     3,     2,     1,     0,     1,     3,
     0,     1,     3,     1,     2,     2,     1,     1,     3,     3,
     3,     3,     3,     3,     3,     3,     2,     2,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     3,     5,     1,
     1,     1,     1,     1,     1,     3,     1,     4,     4,     4,
     4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
     4,     4,     2
};

static const short yydefact[] = {     0,
     0,    24,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
    14,     3,     0,     0,     0,     1,     0,     9,    17,     6,
    26,    27,    28,    39,    40,    41,    42,    43,    44,    45,
    46,    53,    55,    51,    50,    52,    54,     0,     0,     0,
     0,    57,    47,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    73,    11,
    21,    18,     0,    25,     2,     5,     0,     0,     0,    16,
    37,    38,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    13,    22,    15,
    19,     4,    10,     8,     7,    36,     0,    56,    48,    29,
    30,    31,    32,    33,    35,    34,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,     0,     0,     0,    23,    20,    49,     0,     0
};

static const short yydefgoto[] = {    25,
    26,    27,    71,    72,   110,   108,    28,    52,    53,    54,
    29
};

static const short yypact[] = {   206,
   -38,   -50,   151,   151,   151,   151,   151,   151,   151,   151,
   151,   151,   151,   151,   151,   151,   151,   151,    -2,-32768,
-32768,-32768,     2,     4,   120,-32768,   -15,    70,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,    -2,    -2,    -2,
   228,   119,-32768,   -29,   -28,   -27,   -17,    -8,    -5,    -1,
     1,     7,     8,     9,    10,    11,    20,    38,-32768,   119,
    -2,    -2,    17,-32768,-32768,-32768,    -2,    -2,    -2,-32768,
   -47,-32768,   100,   -12,   -11,    -2,    -2,    -2,    -2,    -2,
    -2,    -2,   151,   151,   151,   151,   151,   151,   151,   151,
   151,   151,   151,   151,   151,   151,   151,    39,   119,    41,
   119,-32768,   119,   119,   119,-32768,   228,-32768,-32768,    -6,
    -6,   -47,   -47,   -47,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,    -2,    -2,    37,   119,   119,-32768,    61,-32768
};

static const short yypgoto[] = {-32768,
    90,-32768,-32768,-32768,-32768,-32768,-32768,   -19,   -43,     6,
    88
};


#define	YYLAST		285


static const short yytable[] = {    70,
    32,    30,    33,    91,    92,    31,    73,    85,    74,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    76,    93,    94,    95,    81,    82,
    83,    84,   117,    87,    88,    89,    90,    96,    91,    92,
    88,    89,    90,    48,    91,    92,    97,   118,   119,    98,
    49,   109,   111,    99,    50,   100,   112,   113,   114,   115,
   149,   101,   102,   103,   104,   105,   120,   121,   122,   123,
   124,   125,   126,   144,   106,     3,     4,     5,     6,     7,
     8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
    18,    77,   107,   142,    78,   143,   147,   120,   127,   128,
   129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
   139,   140,   141,    79,    75,    80,     0,     0,     0,   148,
     1,     0,   145,   146,     2,     3,     4,     5,     6,     7,
     8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    86,    87,    88,    89,    90,     0,
    91,    92,     0,    32,     0,    33,     0,   116,     0,    22,
     0,     0,    23,    86,    87,    88,    89,    90,     0,    91,
    92,     0,     0,     0,     0,    24,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
     0,     0,     0,     0,     0,     0,    48,     0,     0,     0,
     0,     0,     0,    49,     0,     0,     1,    50,     0,    51,
     2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
    12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
    32,     0,    33,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    22,     0,     0,    23,     0,
     0,     0,     0,    34,    35,    36,    37,    38,    39,    40,
    41,    24,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    48,     0,     0,     0,     0,     0,     0,
    49,     0,     0,     0,    50
};

static const short yycheck[] = {    19,
     3,    40,     5,    51,    52,    56,     5,    51,     5,     4,
     5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
    15,    16,    17,    18,    40,    55,    55,    55,    48,    49,
    50,    51,    45,    46,    47,    48,    49,    55,    51,    52,
    47,    48,    49,    46,    51,    52,    55,    60,    60,    55,
    53,    71,    72,    55,    57,    55,    40,    77,    78,    79,
     0,    55,    55,    55,    55,    55,    86,    87,    88,    89,
    90,    91,    92,   117,    55,     6,     7,     8,     9,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    55,    55,    25,    55,    60,   117,    93,    94,
    95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
   105,   106,   107,    44,    25,    28,    -1,    -1,    -1,     0,
     1,    -1,   142,   143,     5,     6,     7,     8,     9,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    45,    46,    47,    48,    49,    -1,
    51,    52,    -1,     3,    -1,     5,    -1,    58,    -1,    40,
    -1,    -1,    43,    45,    46,    47,    48,    49,    -1,    51,
    52,    -1,    -1,    -1,    -1,    56,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,
    -1,    -1,    -1,    53,    -1,    -1,     1,    57,    -1,    59,
     5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
     3,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,
    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,    32,
    33,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
    53,    -1,    -1,    -1,    57
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

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
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 192 "bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#else
#define YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#endif

int
yyparse(YYPARSE_PARAM)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 42 "dcpu16.bison"
{  ;
    break;}
case 2:
#line 43 "dcpu16.bison"
{  ;
    break;}
case 4:
#line 47 "dcpu16.bison"
{ printf("(%s:=%i)\n", yyvsp[-1].ident->name, yyvsp[-1].ident->val); fflush(stdout); ;
    break;}
case 5:
#line 48 "dcpu16.bison"
{;
    break;}
case 6:
#line 49 "dcpu16.bison"
{ yyerrok; ;
    break;}
case 7:
#line 52 "dcpu16.bison"
{ yyvsp[-2].ident->val = yyvsp[0].num;		 ;
    break;}
case 8:
#line 53 "dcpu16.bison"
{ yyvsp[-2].ident->val = yyvsp[0].num;	 	 ;
    break;}
case 9:
#line 54 "dcpu16.bison"
{ yyvsp[0].ident->val = emit_pc();  ;
    break;}
case 10:
#line 55 "dcpu16.bison"
{ emit_origin(yyvsp[0].num); yyvsp[-2].ident->val = emit_pc();	 ;
    break;}
case 11:
#line 56 "dcpu16.bison"
{ emit_origin(yyvsp[0].num);	 ;
    break;}
case 12:
#line 57 "dcpu16.bison"
{ emit_raw_start(); ;
    break;}
case 13:
#line 57 "dcpu16.bison"
{  ;
    break;}
case 14:
#line 58 "dcpu16.bison"
{ emit_raw_start();	 ;
    break;}
case 15:
#line 58 "dcpu16.bison"
{  ;
    break;}
case 16:
#line 59 "dcpu16.bison"
{ yyvsp[-1].ident->val = emit_pc(); yyval.opcode = 0;	 ;
    break;}
case 17:
#line 60 "dcpu16.bison"
{ yyval.opcode = 0;			 ;
    break;}
case 19:
#line 64 "dcpu16.bison"
{ emit_byte(yyvsp[0].num);	;
    break;}
case 20:
#line 65 "dcpu16.bison"
{ emit_byte(yyvsp[0].num);	;
    break;}
case 22:
#line 69 "dcpu16.bison"
{ emit_word(yyvsp[0].num);	;
    break;}
case 23:
#line 70 "dcpu16.bison"
{ emit_word(yyvsp[0].num);	;
    break;}
case 24:
#line 73 "dcpu16.bison"
{ yyval.ident = yyvsp[0].ident; ;
    break;}
case 25:
#line 74 "dcpu16.bison"
{ yyval.ident = yyvsp[0].ident; ;
    break;}
case 26:
#line 75 "dcpu16.bison"
{ yyval.ident = yyvsp[-1].ident; ;
    break;}
case 27:
#line 78 "dcpu16.bison"
{ yyval.num = yyvsp[0].num; ;
    break;}
case 28:
#line 79 "dcpu16.bison"
{ yyval.num = yyvsp[0].ident->val; ;
    break;}
case 29:
#line 80 "dcpu16.bison"
{ yyval.num = yyvsp[-2].num + yyvsp[0].num; ;
    break;}
case 30:
#line 81 "dcpu16.bison"
{ yyval.num = yyvsp[-2].num - yyvsp[0].num; ;
    break;}
case 31:
#line 82 "dcpu16.bison"
{ yyval.num = yyvsp[-2].num * yyvsp[0].num; ;
    break;}
case 32:
#line 83 "dcpu16.bison"
{ yyval.num = yyvsp[-2].num / yyvsp[0].num; ;
    break;}
case 33:
#line 84 "dcpu16.bison"
{ yyval.num = yyvsp[-2].num % yyvsp[0].num; ;
    break;}
case 34:
#line 85 "dcpu16.bison"
{ yyval.num = yyvsp[-2].num & yyvsp[0].num; ;
    break;}
case 35:
#line 86 "dcpu16.bison"
{ yyval.num = yyvsp[-2].num | yyvsp[0].num; ;
    break;}
case 36:
#line 87 "dcpu16.bison"
{ yyval.num = yyvsp[-1].num; ;
    break;}
case 37:
#line 88 "dcpu16.bison"
{ yyval.num = -yyvsp[0].num; ;
    break;}
case 38:
#line 89 "dcpu16.bison"
{ yyval.num = !yyvsp[0].num; ;
    break;}
case 39:
#line 93 "dcpu16.bison"
{ yyval.operand.code =  0; ;
    break;}
case 40:
#line 94 "dcpu16.bison"
{ yyval.operand.code  = 1; ;
    break;}
case 41:
#line 95 "dcpu16.bison"
{ yyval.operand.code  = 2; ;
    break;}
case 42:
#line 96 "dcpu16.bison"
{ yyval.operand.code  = 3; ;
    break;}
case 43:
#line 97 "dcpu16.bison"
{ yyval.operand.code  = 4; ;
    break;}
case 44:
#line 98 "dcpu16.bison"
{ yyval.operand.code  = 5; ;
    break;}
case 45:
#line 99 "dcpu16.bison"
{ yyval.operand.code  = 6; ;
    break;}
case 46:
#line 100 "dcpu16.bison"
{ yyval.operand.code  = 7; ;
    break;}
case 47:
#line 104 "dcpu16.bison"
{ yyval.operand.code  = yyvsp[0].operand.code;		yyval.operand.offset = -1;		;
    break;}
case 48:
#line 105 "dcpu16.bison"
{ yyval.operand.code  = yyvsp[-1].operand.code + 8;	yyval.operand.offset = -1;		;
    break;}
case 49:
#line 106 "dcpu16.bison"
{ yyval.operand.code  = yyvsp[-1].operand.code + 16;	yyval.operand.offset = yyvsp[-3].num;		;
    break;}
case 50:
#line 107 "dcpu16.bison"
{ yyval.operand.code  = 0x18;			yyval.operand.offset = -1;		;
    break;}
case 51:
#line 108 "dcpu16.bison"
{ yyval.operand.code  = 0x19;			yyval.operand.offset = -1;		;
    break;}
case 52:
#line 109 "dcpu16.bison"
{ yyval.operand.code  = 0x1a;			yyval.operand.offset = -1;		;
    break;}
case 53:
#line 110 "dcpu16.bison"
{ yyval.operand.code  = 0x1b;			yyval.operand.offset = -1;		;
    break;}
case 54:
#line 111 "dcpu16.bison"
{ yyval.operand.code  = 0x1c;			yyval.operand.offset = -1;		;
    break;}
case 55:
#line 112 "dcpu16.bison"
{ yyval.operand.code  = 0x1d;			yyval.operand.offset = -1;		;
    break;}
case 56:
#line 113 "dcpu16.bison"
{ yyval.operand.code  = 0x1e;			yyval.operand.offset = yyvsp[-1].num;		;
    break;}
case 57:
#line 115 "dcpu16.bison"
{ 
				if(yyvsp[0].num < 0x20)
				{
					yyval.operand.code  = yyvsp[0].num + 0x20;
					yyval.operand.offset = -1;	
				}
				else
				{
					yyval.operand.code  = 0x1f;
					yyval.operand.offset = yyvsp[0].num;	
				}	
			;
    break;}
case 58:
#line 129 "dcpu16.bison"
{ emit_std_opcode(0x1, yyvsp[-2].operand, yyvsp[0].operand); ;
    break;}
case 59:
#line 130 "dcpu16.bison"
{ emit_std_opcode(0x2, yyvsp[-2].operand, yyvsp[0].operand); ;
    break;}
case 60:
#line 131 "dcpu16.bison"
{ emit_std_opcode(0x3, yyvsp[-2].operand, yyvsp[0].operand); ;
    break;}
case 61:
#line 132 "dcpu16.bison"
{ emit_std_opcode(0x4, yyvsp[-2].operand, yyvsp[0].operand); ;
    break;}
case 62:
#line 133 "dcpu16.bison"
{ emit_std_opcode(0x5, yyvsp[-2].operand, yyvsp[0].operand); ;
    break;}
case 63:
#line 134 "dcpu16.bison"
{ emit_std_opcode(0x6, yyvsp[-2].operand, yyvsp[0].operand); ;
    break;}
case 64:
#line 135 "dcpu16.bison"
{ emit_std_opcode(0x7, yyvsp[-2].operand, yyvsp[0].operand); ;
    break;}
case 65:
#line 136 "dcpu16.bison"
{ emit_std_opcode(0x8, yyvsp[-2].operand, yyvsp[0].operand); ;
    break;}
case 66:
#line 137 "dcpu16.bison"
{ emit_std_opcode(0x9, yyvsp[-2].operand, yyvsp[0].operand); ;
    break;}
case 67:
#line 138 "dcpu16.bison"
{ emit_std_opcode(0xa, yyvsp[-2].operand, yyvsp[0].operand); ;
    break;}
case 68:
#line 139 "dcpu16.bison"
{ emit_std_opcode(0xb, yyvsp[-2].operand, yyvsp[0].operand); ;
    break;}
case 69:
#line 140 "dcpu16.bison"
{ emit_std_opcode(0xc, yyvsp[-2].operand, yyvsp[0].operand); ;
    break;}
case 70:
#line 141 "dcpu16.bison"
{ emit_std_opcode(0xd, yyvsp[-2].operand, yyvsp[0].operand); ;
    break;}
case 71:
#line 142 "dcpu16.bison"
{ emit_std_opcode(0xe, yyvsp[-2].operand, yyvsp[0].operand); ;
    break;}
case 72:
#line 143 "dcpu16.bison"
{ emit_std_opcode(0xf, yyvsp[-2].operand, yyvsp[0].operand); ;
    break;}
case 73:
#line 144 "dcpu16.bison"
{ emit_ext_opcode(0x1,yyvsp[0].operand);		;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 487 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 145 "dcpu16.bison"
