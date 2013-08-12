/* A Bison parser, made by GNU Bison 1.875.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOK_IDENT = 258,
     TOK_ATIDENT = 259,
     TOK_CONST_INT = 260,
     TOK_CONST_FLOAT = 261,
     TOK_CONST_MVA = 262,
     TOK_QUOTED_STRING = 263,
     TOK_USERVAR = 264,
     TOK_SYSVAR = 265,
     TOK_CONST_STRINGS = 266,
     TOK_BAD_NUMERIC = 267,
     TOK_AS = 268,
     TOK_ASC = 269,
     TOK_ATTACH = 270,
     TOK_AVG = 271,
     TOK_BEGIN = 272,
     TOK_BETWEEN = 273,
     TOK_BIGINT = 274,
     TOK_BY = 275,
     TOK_CALL = 276,
     TOK_COLLATION = 277,
     TOK_COMMIT = 278,
     TOK_COMMITTED = 279,
     TOK_COUNT = 280,
     TOK_CREATE = 281,
     TOK_DELETE = 282,
     TOK_DESC = 283,
     TOK_DESCRIBE = 284,
     TOK_DISTINCT = 285,
     TOK_DIV = 286,
     TOK_DROP = 287,
     TOK_FALSE = 288,
     TOK_FLOAT = 289,
     TOK_FLUSH = 290,
     TOK_FROM = 291,
     TOK_FUNCTION = 292,
     TOK_GLOBAL = 293,
     TOK_GROUP = 294,
     TOK_ID = 295,
     TOK_IN = 296,
     TOK_INDEX = 297,
     TOK_INSERT = 298,
     TOK_INT = 299,
     TOK_INTO = 300,
     TOK_ISOLATION = 301,
     TOK_LEVEL = 302,
     TOK_LIMIT = 303,
     TOK_MATCH = 304,
     TOK_MAX = 305,
     TOK_META = 306,
     TOK_MIN = 307,
     TOK_MOD = 308,
     TOK_NAMES = 309,
     TOK_NULL = 310,
     TOK_OPTION = 311,
     TOK_ORDER = 312,
     TOK_RAND = 313,
     TOK_READ = 314,
     TOK_REPEATABLE = 315,
     TOK_REPLACE = 316,
     TOK_RETURNS = 317,
     TOK_ROLLBACK = 318,
     TOK_RTINDEX = 319,
     TOK_SELECT = 320,
     TOK_SERIALIZABLE = 321,
     TOK_SET = 322,
     TOK_SESSION = 323,
     TOK_SHOW = 324,
     TOK_SONAME = 325,
     TOK_START = 326,
     TOK_STATUS = 327,
     TOK_SUM = 328,
     TOK_TABLES = 329,
     TOK_TO = 330,
     TOK_TRANSACTION = 331,
     TOK_TRUE = 332,
     TOK_UNCOMMITTED = 333,
     TOK_UPDATE = 334,
     TOK_VALUES = 335,
     TOK_VARIABLES = 336,
     TOK_WARNINGS = 337,
     TOK_WEIGHT = 338,
     TOK_WHERE = 339,
     TOK_WITHIN = 340,
     TOK_OR = 341,
     TOK_AND = 342,
     TOK_NE = 343,
     TOK_GTE = 344,
     TOK_LTE = 345,
     TOK_NOT = 346,
     TOK_NEG = 347
   };
#endif
#define TOK_IDENT 258
#define TOK_ATIDENT 259
#define TOK_CONST_INT 260
#define TOK_CONST_FLOAT 261
#define TOK_CONST_MVA 262
#define TOK_QUOTED_STRING 263
#define TOK_USERVAR 264
#define TOK_SYSVAR 265
#define TOK_CONST_STRINGS 266
#define TOK_BAD_NUMERIC 267
#define TOK_AS 268
#define TOK_ASC 269
#define TOK_ATTACH 270
#define TOK_AVG 271
#define TOK_BEGIN 272
#define TOK_BETWEEN 273
#define TOK_BIGINT 274
#define TOK_BY 275
#define TOK_CALL 276
#define TOK_COLLATION 277
#define TOK_COMMIT 278
#define TOK_COMMITTED 279
#define TOK_COUNT 280
#define TOK_CREATE 281
#define TOK_DELETE 282
#define TOK_DESC 283
#define TOK_DESCRIBE 284
#define TOK_DISTINCT 285
#define TOK_DIV 286
#define TOK_DROP 287
#define TOK_FALSE 288
#define TOK_FLOAT 289
#define TOK_FLUSH 290
#define TOK_FROM 291
#define TOK_FUNCTION 292
#define TOK_GLOBAL 293
#define TOK_GROUP 294
#define TOK_ID 295
#define TOK_IN 296
#define TOK_INDEX 297
#define TOK_INSERT 298
#define TOK_INT 299
#define TOK_INTO 300
#define TOK_ISOLATION 301
#define TOK_LEVEL 302
#define TOK_LIMIT 303
#define TOK_MATCH 304
#define TOK_MAX 305
#define TOK_META 306
#define TOK_MIN 307
#define TOK_MOD 308
#define TOK_NAMES 309
#define TOK_NULL 310
#define TOK_OPTION 311
#define TOK_ORDER 312
#define TOK_RAND 313
#define TOK_READ 314
#define TOK_REPEATABLE 315
#define TOK_REPLACE 316
#define TOK_RETURNS 317
#define TOK_ROLLBACK 318
#define TOK_RTINDEX 319
#define TOK_SELECT 320
#define TOK_SERIALIZABLE 321
#define TOK_SET 322
#define TOK_SESSION 323
#define TOK_SHOW 324
#define TOK_SONAME 325
#define TOK_START 326
#define TOK_STATUS 327
#define TOK_SUM 328
#define TOK_TABLES 329
#define TOK_TO 330
#define TOK_TRANSACTION 331
#define TOK_TRUE 332
#define TOK_UNCOMMITTED 333
#define TOK_UPDATE 334
#define TOK_VALUES 335
#define TOK_VARIABLES 336
#define TOK_WARNINGS 337
#define TOK_WEIGHT 338
#define TOK_WHERE 339
#define TOK_WITHIN 340
#define TOK_OR 341
#define TOK_AND 342
#define TOK_NE 343
#define TOK_GTE 344
#define TOK_LTE 345
#define TOK_NOT 346
#define TOK_NEG 347




/* Copy the first part of user declarations.  */


#if USE_WINDOWS
#pragma warning(push,1)
#pragma warning(disable:4702) // unreachable code
#endif


// some helpers
#include <float.h> // for FLT_MAX



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */


#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
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
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  91
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   786

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  89
/* YYNRULES -- Number of rules. */
#define YYNRULES  248
/* YYNRULES -- Number of states. */
#define YYNSTATES  457

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   347

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   100,    89,     2,
     105,   106,    98,    96,   104,    97,     2,    99,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   103,
      92,    90,    93,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    88,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    91,    94,    95,   101,   102
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    46,    50,    52,    54,    65,    67,    71,
      73,    76,    77,    79,    82,    84,    89,    94,    99,   104,
     109,   113,   119,   121,   125,   126,   128,   131,   133,   137,
     141,   145,   149,   153,   157,   162,   166,   170,   176,   183,
     187,   192,   198,   202,   206,   210,   214,   216,   222,   228,
     234,   238,   242,   244,   246,   251,   255,   257,   259,   262,
     264,   267,   269,   273,   274,   276,   280,   281,   283,   289,
     290,   292,   296,   302,   304,   308,   310,   313,   316,   317,
     319,   322,   327,   328,   330,   333,   335,   339,   343,   347,
     353,   360,   364,   366,   370,   374,   376,   378,   380,   382,
     384,   386,   389,   392,   396,   400,   404,   408,   412,   416,
     420,   424,   428,   432,   436,   440,   444,   448,   452,   456,
     460,   464,   466,   471,   476,   480,   487,   494,   496,   500,
     502,   504,   507,   509,   511,   513,   515,   517,   519,   521,
     523,   525,   529,   534,   539,   544,   548,   553,   561,   567,
     569,   571,   573,   575,   577,   579,   581,   583,   585,   588,
     595,   597,   599,   600,   604,   606,   610,   612,   616,   620,
     622,   626,   628,   630,   632,   636,   639,   647,   657,   664,
     666,   670,   672,   676,   678,   682,   683,   686,   688,   692,
     696,   697,   699,   701,   703,   706,   708,   710,   713,   719,
     721,   725,   729,   733,   739,   744,   749,   750,   752,   755,
     757,   761,   765,   768,   775,   776,   778,   780,   783,   786,
     789,   791,   799,   801,   803,   805,   809,   816,   820
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     108,     0,    -1,   109,    -1,   110,    -1,   110,   103,    -1,
     157,    -1,   165,    -1,   151,    -1,   152,    -1,   155,    -1,
     166,    -1,   175,    -1,   177,    -1,   178,    -1,   181,    -1,
     186,    -1,   190,    -1,   192,    -1,   193,    -1,   194,    -1,
     187,    -1,   195,    -1,   111,    -1,   110,   103,   111,    -1,
     112,    -1,   147,    -1,    65,   113,    36,   117,   118,   127,
     129,   131,   135,   137,    -1,   114,    -1,   113,   104,   114,
      -1,    98,    -1,   116,   115,    -1,    -1,     3,    -1,    13,
       3,    -1,   143,    -1,    16,   105,   143,   106,    -1,    50,
     105,   143,   106,    -1,    52,   105,   143,   106,    -1,    73,
     105,   143,   106,    -1,    25,   105,    98,   106,    -1,    83,
     105,   106,    -1,    25,   105,    30,     3,   106,    -1,     3,
      -1,   117,   104,     3,    -1,    -1,   119,    -1,    84,   120,
      -1,   122,    -1,   120,    87,   120,    -1,   105,   120,   106,
      -1,   123,    90,   125,    -1,   123,    91,   125,    -1,   123,
      93,   125,    -1,   123,    92,   125,    -1,    49,   105,     8,
     106,    -1,   123,    90,   124,    -1,   123,    91,   124,    -1,
     123,    41,   105,   126,   106,    -1,   123,   101,    41,   105,
     126,   106,    -1,   123,    41,     9,    -1,   123,   101,    41,
       9,    -1,   123,    18,   124,    87,   124,    -1,   123,    93,
     124,    -1,   123,    92,   124,    -1,   123,    94,   124,    -1,
     123,    95,   124,    -1,   121,    -1,   123,    18,   125,    87,
     125,    -1,   123,    18,   124,    87,   125,    -1,   123,    18,
     125,    87,   124,    -1,   123,    94,   125,    -1,   123,    95,
     125,    -1,     3,    -1,     4,    -1,    25,   105,    98,   106,
      -1,    83,   105,   106,    -1,    40,    -1,     5,    -1,    97,
       5,    -1,     6,    -1,    97,     6,    -1,   124,    -1,   126,
     104,   124,    -1,    -1,   128,    -1,    39,    20,   123,    -1,
      -1,   130,    -1,    85,    39,    57,    20,   133,    -1,    -1,
     132,    -1,    57,    20,   133,    -1,    57,    20,    58,   105,
     106,    -1,   134,    -1,   133,   104,   134,    -1,   123,    -1,
     123,    14,    -1,   123,    28,    -1,    -1,   136,    -1,    48,
       5,    -1,    48,     5,   104,     5,    -1,    -1,   138,    -1,
      56,   139,    -1,   140,    -1,   139,   104,   140,    -1,     3,
      90,     3,    -1,     3,    90,     5,    -1,     3,    90,   105,
     141,   106,    -1,     3,    90,     3,   105,     8,   106,    -1,
       3,    90,     8,    -1,   142,    -1,   141,   104,   142,    -1,
       3,    90,   124,    -1,     3,    -1,     4,    -1,    40,    -1,
       5,    -1,     6,    -1,     9,    -1,    97,   143,    -1,   101,
     143,    -1,   143,    96,   143,    -1,   143,    97,   143,    -1,
     143,    98,   143,    -1,   143,    99,   143,    -1,   143,    92,
     143,    -1,   143,    93,   143,    -1,   143,    89,   143,    -1,
     143,    88,   143,    -1,   143,   100,   143,    -1,   143,    31,
     143,    -1,   143,    53,   143,    -1,   143,    95,   143,    -1,
     143,    94,   143,    -1,   143,    90,   143,    -1,   143,    91,
     143,    -1,   143,    87,   143,    -1,   143,    86,   143,    -1,
     105,   143,   106,    -1,   144,    -1,     3,   105,   145,   106,
      -1,    41,   105,   145,   106,    -1,     3,   105,   106,    -1,
      52,   105,   143,   104,   143,   106,    -1,    50,   105,   143,
     104,   143,   106,    -1,   146,    -1,   145,   104,   146,    -1,
     143,    -1,     8,    -1,    69,   148,    -1,    82,    -1,    72,
      -1,    51,    -1,     3,    -1,    55,    -1,     8,    -1,     5,
      -1,     6,    -1,   149,    -1,   150,    97,   149,    -1,    67,
       3,    90,   154,    -1,    67,     3,    90,   153,    -1,    67,
       3,    90,    55,    -1,    67,    54,   150,    -1,    67,    10,
      90,   150,    -1,    67,    38,     9,    90,   105,   126,   106,
      -1,    67,    38,     3,    90,   153,    -1,     3,    -1,     8,
      -1,    77,    -1,    33,    -1,   124,    -1,    23,    -1,    63,
      -1,   156,    -1,    17,    -1,    71,    76,    -1,   158,    45,
       3,   159,    80,   161,    -1,    43,    -1,    61,    -1,    -1,
     105,   160,   106,    -1,   123,    -1,   160,   104,   123,    -1,
     162,    -1,   161,   104,   162,    -1,   105,   163,   106,    -1,
     164,    -1,   163,   104,   164,    -1,   124,    -1,   125,    -1,
       8,    -1,   105,   126,   106,    -1,   105,   106,    -1,    27,
      36,     3,    84,    40,    90,   124,    -1,    27,    36,     3,
      84,    40,    41,   105,   126,   106,    -1,    21,     3,   105,
     167,   170,   106,    -1,   168,    -1,   167,   104,   168,    -1,
     164,    -1,   105,   169,   106,    -1,     8,    -1,   169,   104,
       8,    -1,    -1,   104,   171,    -1,   172,    -1,   171,   104,
     172,    -1,   164,   173,   174,    -1,    -1,    13,    -1,     3,
      -1,    48,    -1,   176,     3,    -1,    29,    -1,    28,    -1,
      69,    74,    -1,    79,   117,    67,   179,   119,    -1,   180,
      -1,   179,   104,   180,    -1,     3,    90,   124,    -1,     3,
      90,   125,    -1,     3,    90,   105,   126,   106,    -1,     3,
      90,   105,   106,    -1,    69,   188,    81,   182,    -1,    -1,
     183,    -1,    84,   184,    -1,   185,    -1,   184,    86,   185,
      -1,     3,    90,     8,    -1,    69,    22,    -1,    67,   188,
      76,    46,    47,   189,    -1,    -1,    38,    -1,    68,    -1,
      59,    78,    -1,    59,    24,    -1,    60,    59,    -1,    66,
      -1,    26,    37,     3,    62,   191,    70,     8,    -1,    44,
      -1,    19,    -1,    34,    -1,    32,    37,     3,    -1,    15,
      42,     3,    75,    64,     3,    -1,    35,    64,     3,    -1,
      65,    10,   135,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   121,   121,   122,   123,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   149,   150,   154,   155,   159,   174,   175,   179,
     180,   183,   185,   186,   190,   191,   192,   193,   194,   195,
     196,   197,   201,   202,   205,   207,   211,   215,   216,   217,
     221,   222,   223,   224,   228,   233,   240,   248,   256,   265,
     270,   275,   280,   285,   290,   295,   300,   305,   310,   315,
     320,   325,   333,   334,   339,   345,   351,   360,   361,   372,
     373,   377,   383,   389,   391,   395,   401,   403,   407,   413,
     415,   419,   423,   430,   431,   435,   436,   437,   440,   442,
     446,   451,   458,   460,   464,   468,   469,   473,   478,   483,
     489,   494,   502,   507,   514,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   554,   555,   556,   557,   558,   562,   563,   567,
     568,   574,   578,   579,   580,   586,   587,   588,   589,   590,
     594,   595,   599,   604,   609,   614,   615,   619,   624,   632,
     633,   637,   638,   639,   653,   654,   655,   659,   660,   666,
     674,   675,   678,   680,   684,   685,   689,   690,   694,   698,
     699,   703,   704,   705,   706,   707,   713,   719,   731,   739,
     743,   750,   751,   758,   768,   774,   776,   780,   785,   789,
     796,   798,   802,   803,   809,   817,   818,   824,   830,   838,
     839,   843,   847,   851,   855,   865,   871,   872,   876,   880,
     881,   885,   889,   896,   902,   903,   904,   908,   909,   910,
     911,   917,   928,   929,   930,   934,   945,   957,   968
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_IDENT", "TOK_ATIDENT", 
  "TOK_CONST_INT", "TOK_CONST_FLOAT", "TOK_CONST_MVA", 
  "TOK_QUOTED_STRING", "TOK_USERVAR", "TOK_SYSVAR", "TOK_CONST_STRINGS", 
  "TOK_BAD_NUMERIC", "TOK_AS", "TOK_ASC", "TOK_ATTACH", "TOK_AVG", 
  "TOK_BEGIN", "TOK_BETWEEN", "TOK_BIGINT", "TOK_BY", "TOK_CALL", 
  "TOK_COLLATION", "TOK_COMMIT", "TOK_COMMITTED", "TOK_COUNT", 
  "TOK_CREATE", "TOK_DELETE", "TOK_DESC", "TOK_DESCRIBE", "TOK_DISTINCT", 
  "TOK_DIV", "TOK_DROP", "TOK_FALSE", "TOK_FLOAT", "TOK_FLUSH", 
  "TOK_FROM", "TOK_FUNCTION", "TOK_GLOBAL", "TOK_GROUP", "TOK_ID", 
  "TOK_IN", "TOK_INDEX", "TOK_INSERT", "TOK_INT", "TOK_INTO", 
  "TOK_ISOLATION", "TOK_LEVEL", "TOK_LIMIT", "TOK_MATCH", "TOK_MAX", 
  "TOK_META", "TOK_MIN", "TOK_MOD", "TOK_NAMES", "TOK_NULL", "TOK_OPTION", 
  "TOK_ORDER", "TOK_RAND", "TOK_READ", "TOK_REPEATABLE", "TOK_REPLACE", 
  "TOK_RETURNS", "TOK_ROLLBACK", "TOK_RTINDEX", "TOK_SELECT", 
  "TOK_SERIALIZABLE", "TOK_SET", "TOK_SESSION", "TOK_SHOW", "TOK_SONAME", 
  "TOK_START", "TOK_STATUS", "TOK_SUM", "TOK_TABLES", "TOK_TO", 
  "TOK_TRANSACTION", "TOK_TRUE", "TOK_UNCOMMITTED", "TOK_UPDATE", 
  "TOK_VALUES", "TOK_VARIABLES", "TOK_WARNINGS", "TOK_WEIGHT", 
  "TOK_WHERE", "TOK_WITHIN", "TOK_OR", "TOK_AND", "'|'", "'&'", "'='", 
  "TOK_NE", "'<'", "'>'", "TOK_GTE", "TOK_LTE", "'+'", "'-'", "'*'", 
  "'/'", "'%'", "TOK_NOT", "TOK_NEG", "';'", "','", "'('", "')'", 
  "$accept", "request", "statement", "multi_stmt_list", "multi_stmt", 
  "select_from", "select_items_list", "select_item", "opt_alias", 
  "select_expr", "ident_list", "opt_where_clause", "where_clause", 
  "where_expr", "expr_float_unhandled", "where_item", "expr_ident", 
  "const_int", "const_float", "const_list", "opt_group_clause", 
  "group_clause", "opt_group_order_clause", "group_order_clause", 
  "opt_order_clause", "order_clause", "order_items_list", "order_item", 
  "opt_limit_clause", "limit_clause", "opt_option_clause", 
  "option_clause", "option_list", "option_item", "named_const_list", 
  "named_const", "expr", "function", "arglist", "arg", "show_stmt", 
  "show_what", "simple_set_value", "set_value", "set_stmt", 
  "set_global_stmt", "set_string_value", "boolean_value", "transact_op", 
  "start_transaction", "insert_into", "insert_or_replace", 
  "opt_column_list", "column_list", "insert_rows_list", "insert_row", 
  "insert_vals_list", "insert_val", "delete_from", "call_proc", 
  "call_args_list", "call_arg", "const_string_list", "opt_call_opts_list", 
  "call_opts_list", "call_opt", "opt_as", "call_opt_name", "describe", 
  "describe_tok", "show_tables", "update", "update_items_list", 
  "update_item", "show_variables", "opt_show_variables_where", 
  "show_variables_where", "show_variables_where_list", 
  "show_variables_where_entry", "show_collation", "set_transaction", 
  "opt_scope", "isolation_level", "create_function", "udf_type", 
  "drop_function", "attach_index", "flush_rtindex", "select_sysvar", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   124,    38,
      61,   343,    60,    62,   344,   345,    43,    45,    42,    47,
      37,   346,   347,    59,    44,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,   107,   108,   108,   108,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   110,   110,   111,   111,   112,   113,   113,   114,
     114,   115,   115,   115,   116,   116,   116,   116,   116,   116,
     116,   116,   117,   117,   118,   118,   119,   120,   120,   120,
     121,   121,   121,   121,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   123,   123,   123,   123,   123,   124,   124,   125,
     125,   126,   126,   127,   127,   128,   129,   129,   130,   131,
     131,   132,   132,   133,   133,   134,   134,   134,   135,   135,
     136,   136,   137,   137,   138,   139,   139,   140,   140,   140,
     140,   140,   141,   141,   142,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   144,   144,   144,   144,   144,   145,   145,   146,
     146,   147,   148,   148,   148,   149,   149,   149,   149,   149,
     150,   150,   151,   151,   151,   151,   151,   152,   152,   153,
     153,   154,   154,   154,   155,   155,   155,   156,   156,   157,
     158,   158,   159,   159,   160,   160,   161,   161,   162,   163,
     163,   164,   164,   164,   164,   164,   165,   165,   166,   167,
     167,   168,   168,   169,   169,   170,   170,   171,   171,   172,
     173,   173,   174,   174,   175,   176,   176,   177,   178,   179,
     179,   180,   180,   180,   180,   181,   182,   182,   183,   184,
     184,   185,   186,   187,   188,   188,   188,   189,   189,   189,
     189,   190,   191,   191,   191,   192,   193,   194,   195
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,    10,     1,     3,     1,
       2,     0,     1,     2,     1,     4,     4,     4,     4,     4,
       3,     5,     1,     3,     0,     1,     2,     1,     3,     3,
       3,     3,     3,     3,     4,     3,     3,     5,     6,     3,
       4,     5,     3,     3,     3,     3,     1,     5,     5,     5,
       3,     3,     1,     1,     4,     3,     1,     1,     2,     1,
       2,     1,     3,     0,     1,     3,     0,     1,     5,     0,
       1,     3,     5,     1,     3,     1,     2,     2,     0,     1,
       2,     4,     0,     1,     2,     1,     3,     3,     3,     5,
       6,     3,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     4,     4,     3,     6,     6,     1,     3,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     4,     4,     3,     4,     7,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     6,
       1,     1,     0,     3,     1,     3,     1,     3,     3,     1,
       3,     1,     1,     1,     3,     2,     7,     9,     6,     1,
       3,     1,     3,     1,     3,     0,     2,     1,     3,     3,
       0,     1,     1,     1,     2,     1,     1,     2,     5,     1,
       3,     3,     3,     5,     4,     4,     0,     1,     2,     1,
       3,     3,     2,     6,     0,     1,     1,     2,     2,     2,
       1,     7,     1,     1,     1,     3,     6,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,     0,   177,     0,   174,     0,     0,   216,   215,     0,
       0,   180,   181,   175,     0,   234,   234,     0,     0,     0,
       2,     3,    22,    24,    25,     7,     8,     9,   176,     5,
       0,     6,    10,    11,     0,    12,    13,    14,    15,    20,
      16,    17,    18,    19,    21,     0,     0,     0,     0,     0,
       0,   115,   116,   118,   119,   120,    98,     0,     0,   117,
       0,     0,     0,     0,     0,     0,    29,     0,     0,     0,
      27,    31,    34,   141,     0,     0,   235,     0,   236,     0,
     232,   235,   154,   153,   217,   152,   151,     0,   178,    42,
       0,     1,     4,     0,   214,     0,     0,     0,     0,   245,
     247,     0,     0,   248,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   121,   122,     0,     0,     0,    32,
       0,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   155,   158,   159,   157,   156,   160,   165,
       0,   226,     0,     0,     0,     0,    23,   182,     0,    77,
      79,   193,     0,     0,   191,   192,   201,   205,   199,     0,
       0,   150,   144,   149,     0,   147,   100,     0,     0,     0,
       0,     0,     0,     0,    40,     0,     0,   140,    44,    28,
      33,   132,   133,   139,   138,   130,   129,   136,   137,   127,
     128,   135,   134,   123,   124,   125,   126,   131,   169,   170,
     172,   164,   171,     0,   173,   163,   162,   166,     0,     0,
       0,     0,     0,   225,   227,     0,     0,   219,    43,     0,
       0,     0,    78,    80,   203,   195,    81,     0,     0,     0,
       0,   243,   244,   242,     0,     0,     0,   142,     0,    35,
       0,    39,   143,     0,    36,     0,    37,    38,     0,     0,
       0,    83,    45,   168,     0,   161,     0,     0,   228,   229,
       0,     0,   218,    72,    73,     0,    76,     0,   184,     0,
       0,   246,     0,   194,     0,   202,   201,   200,   206,   207,
     198,     0,     0,     0,   148,   101,    41,     0,     0,     0,
       0,    46,    66,    47,     0,     0,    86,    84,     0,     0,
       0,   240,   233,     0,     0,     0,   221,   222,   220,     0,
       0,     0,   183,     0,   179,   186,    82,   204,   211,     0,
       0,   241,     0,   196,   146,   145,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      89,    87,   167,   238,   237,   239,   231,   230,   224,     0,
       0,    75,   185,     0,     0,   189,     0,   212,   213,   209,
     210,   208,     0,     0,    49,    48,     0,     0,    59,     0,
      55,    50,    56,    51,    63,    53,    62,    52,    64,    70,
      65,    71,     0,    85,     0,     0,    98,    90,   223,    74,
       0,   188,   187,   197,    54,     0,     0,     0,    60,     0,
       0,     0,   102,   190,    61,    68,    69,    67,    57,     0,
       0,     0,    95,    91,    93,     0,    26,   103,    58,    88,
       0,    96,    97,     0,     0,   104,   105,    92,    94,     0,
       0,   107,   108,   111,     0,   106,     0,     0,     0,   112,
       0,     0,     0,   109,   110,   114,   113
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,    19,    20,    21,    22,    23,    69,    70,   121,    71,
      90,   261,   262,   301,   302,   303,   304,   236,   165,   237,
     306,   307,   350,   351,   396,   397,   423,   424,   103,   104,
     426,   427,   435,   436,   448,   449,    72,    73,   174,   175,
      24,    86,   148,   149,    25,    26,   215,   216,    27,    28,
      29,    30,   230,   279,   324,   325,   364,   166,    31,    32,
     167,   168,   238,   240,   288,   289,   329,   369,    33,    34,
      35,    36,   226,   227,    37,   223,   224,   268,   269,    38,
      39,    79,   312,    40,   244,    41,    42,    43,    44
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -294
static const short yypact[] =
{
     707,     2,  -294,     8,  -294,    10,    44,  -294,  -294,    51,
      28,  -294,  -294,  -294,   128,   146,   687,    47,   149,   139,
    -294,    55,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,
     140,  -294,  -294,  -294,   179,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,   206,    94,   207,   212,   225,
     241,   156,  -294,  -294,  -294,  -294,   203,   163,   171,  -294,
     172,   180,   188,   198,   200,   232,  -294,   232,   232,   -21,
    -294,    21,   499,  -294,   211,   216,    23,    30,  -294,   231,
    -294,  -294,  -294,  -294,  -294,  -294,  -294,   227,  -294,  -294,
     -42,  -294,    26,   313,  -294,   242,   155,   256,   236,  -294,
    -294,    49,   322,  -294,  -294,   232,   -12,   107,   232,   232,
     232,   222,   229,   234,  -294,  -294,   331,   149,   214,  -294,
     327,  -294,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   266,
      30,   250,   251,  -294,  -294,  -294,  -294,  -294,  -294,   235,
     285,   258,   341,   343,   214,   181,  -294,   248,   290,  -294,
    -294,  -294,   197,    11,  -294,  -294,  -294,   252,  -294,   187,
     319,  -294,  -294,   499,    75,  -294,   260,   354,   357,   259,
      84,   283,   304,   380,  -294,   232,   232,  -294,   -64,  -294,
    -294,  -294,  -294,   525,   548,   573,   596,   621,   621,   226,
     226,   226,   226,   314,   314,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,   356,  -294,  -294,  -294,   235,    20,   261,
      30,   321,   383,  -294,  -294,   298,   -63,  -294,  -294,    57,
     325,   406,  -294,  -294,  -294,  -294,  -294,    85,    89,   155,
     300,  -294,  -294,  -294,   345,   -31,   107,  -294,   411,  -294,
     326,  -294,  -294,   232,  -294,   232,  -294,  -294,   451,   476,
     173,   396,  -294,  -294,    32,  -294,    76,   346,   352,  -294,
     119,   341,  -294,  -294,  -294,   334,  -294,   350,  -294,   136,
     353,  -294,    32,  -294,   449,  -294,   159,  -294,   358,  -294,
    -294,   453,   359,    32,  -294,  -294,  -294,   403,   428,   360,
     173,   376,  -294,  -294,   257,   463,   399,  -294,   161,   -22,
     426,  -294,  -294,   479,   383,    22,  -294,  -294,  -294,   390,
     400,    57,  -294,   165,   401,  -294,  -294,  -294,  -294,    36,
     165,  -294,    32,  -294,  -294,  -294,   500,    35,   173,    -1,
       4,    -1,    -1,    -1,    -1,    -1,    -1,   469,    57,   472,
     455,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,   177,
     407,  -294,  -294,    24,   182,  -294,   353,  -294,  -294,  -294,
     518,  -294,   185,   427,  -294,  -294,   445,   448,  -294,    32,
    -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,    13,  -294,   496,   516,   203,  -294,  -294,  -294,
     165,  -294,  -294,  -294,  -294,    -1,    -1,   186,  -294,    32,
     534,   255,   501,  -294,  -294,  -294,  -294,  -294,  -294,   190,
      57,   454,   137,   456,  -294,   555,  -294,  -294,  -294,   456,
     471,  -294,  -294,    57,   491,   457,  -294,  -294,  -294,     9,
     555,   477,  -294,  -294,   580,  -294,   576,   510,   196,  -294,
     497,    32,   580,  -294,  -294,  -294,  -294
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -294,  -294,  -294,  -294,   513,  -294,  -294,   484,  -294,  -294,
     489,  -294,   381,  -293,  -294,  -294,  -228,   -96,  -239,  -234,
    -294,  -294,  -294,  -294,  -294,  -294,   189,   175,   215,  -294,
    -294,  -294,  -294,   170,  -294,   176,   -59,  -294,   522,   384,
    -294,  -294,   412,   493,  -294,  -294,   413,  -294,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,   268,  -294,  -236,  -294,  -294,
    -294,   414,  -294,  -294,  -294,   305,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,   379,  -294,  -294,  -294,  -294,   337,  -294,
    -294,   638,  -294,  -294,  -294,  -294,  -294,  -294,  -294
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -211
static const short yytable[] =
{
     164,   278,   353,   286,   159,   160,   114,   337,   115,   116,
     292,    46,   441,   378,   442,   117,   159,   443,   178,   234,
     260,   260,   408,   208,   119,   152,   141,   159,   209,   159,
     308,   317,   142,   143,   120,   144,   145,   159,   146,   367,
     153,   271,   173,   214,    45,   375,   177,    47,   173,   181,
     182,   183,    51,    52,    53,    54,   354,   171,    55,   293,
     273,   274,   153,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
      48,   359,   275,   118,   368,   147,   179,   365,    49,    59,
      60,   154,    50,   362,   370,   155,   162,   276,   372,   112,
     377,   113,   381,   383,   385,   387,   389,   391,   213,   379,
      51,    52,    53,    54,   444,   171,    55,   235,   409,   213,
     393,   213,   338,    88,   159,   160,   258,   259,   358,   213,
     235,    51,    52,    53,    54,   309,   310,    55,    56,    91,
     277,   374,   311,   164,    57,   407,    65,    59,    60,    74,
      67,   431,    89,    58,    68,   172,    75,   112,    92,   113,
     159,   160,  -210,   161,   413,   432,   415,   417,    59,    60,
     159,   160,   328,   161,   316,   419,   273,   274,    61,   246,
      62,   247,    94,   422,    76,    93,   326,   173,   246,   282,
     252,   283,   422,   284,   297,   285,   298,   333,   275,    96,
      77,    63,   232,   233,    65,   422,   241,  -210,    67,    95,
      97,    64,    68,   276,    78,    98,   162,    51,    52,    53,
      54,   242,   299,    55,   315,    65,    66,   164,    99,    67,
      57,   243,    82,    68,   164,    51,    52,    53,    54,    58,
     321,    55,   322,   376,   100,   380,   382,   384,   386,   388,
     390,   102,   162,    83,    59,    60,   277,   122,   273,   274,
     163,   101,   162,    85,    61,   282,    62,   352,   105,   208,
     363,   159,    59,    60,   209,   339,   106,   107,   300,   123,
     275,   282,   112,   398,   113,   108,   400,    63,   401,   282,
     282,   403,   418,   109,   282,   276,   428,    64,   340,   210,
     452,   139,   453,   110,   164,   111,   140,   150,   151,   414,
     416,    65,    66,   421,   122,    67,   157,   158,   169,    68,
     170,   211,   134,   135,   136,   137,   138,   176,   184,    65,
     190,   221,   220,    67,   185,   122,   123,    68,   277,   186,
     218,   219,   222,   212,   225,   122,   228,   341,   342,   343,
     344,   345,   346,   229,   231,   455,   239,   123,   347,   245,
     250,   232,   122,   213,   248,   251,   264,   123,   266,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   123,   122,   267,   253,   270,   254,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   280,   290,   123,   255,   281,
     256,   122,   136,   137,   138,   291,   295,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   296,   123,   122,   305,   313,   187,   314,   319,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   320,   123,   327,   323,   122,
     249,   331,   330,   338,   332,   336,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   123,   122,   348,   349,   355,   257,   356,   360,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   123,   366,   361,   122,   373,   334,
     392,   394,   395,   399,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   123,
     122,   328,   405,   404,   335,   406,   411,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   123,   410,   420,   253,   122,   425,   434,   430,
     433,   440,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   437,   123,   122,
     255,   439,   446,   447,   450,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     451,   123,   189,   454,   122,   156,   188,   272,   438,   429,
     445,   412,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   123,   122,   456,   180,
     294,   263,   265,   217,   402,   371,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   123,
     318,   357,   122,   287,    87,     0,     0,     0,     0,     0,
       0,     0,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   123,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
       0,     0,     0,   130,   131,   132,   133,   134,   135,   136,
     137,   138,     1,     0,     2,    81,     0,     0,     3,     0,
       4,     0,     0,     5,     6,     7,     8,     0,    82,     9,
       0,     0,    10,     0,     0,     0,     0,     0,     0,     0,
      11,     0,     0,     0,     0,    78,     0,     0,     0,    83,
       0,    84,     0,     0,     0,     0,     0,     0,    12,    85,
      13,     0,    14,     0,    15,     0,    16,     0,    17,     0,
       0,     0,     0,     0,     0,     0,    18
};

static const short yycheck[] =
{
      96,   229,    24,   239,     5,     6,    65,   300,    67,    68,
      41,     3,     3,     9,     5,    36,     5,     8,    30,     8,
      84,    84,     9,     3,     3,    67,     3,     5,     8,     5,
     264,   270,     9,     3,    13,     5,     6,     5,     8,     3,
     104,   104,   101,   139,    42,   338,   105,    37,   107,   108,
     109,   110,     3,     4,     5,     6,    78,     8,     9,    90,
       3,     4,   104,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      36,   315,    25,   104,    48,    55,    98,   323,    37,    40,
      41,    65,    64,   321,   330,    69,    97,    40,   332,    50,
     339,    52,   341,   342,   343,   344,   345,   346,    97,   105,
       3,     4,     5,     6,   105,     8,     9,   106,   105,    97,
     348,    97,    87,    76,     5,     6,   185,   186,   106,    97,
     106,     3,     4,     5,     6,    59,    60,     9,    10,     0,
      83,   106,    66,   239,    16,   379,    97,    40,    41,     3,
     101,    14,     3,    25,   105,   106,    10,    50,   103,    52,
       5,     6,     3,     8,   400,    28,   405,   406,    40,    41,
       5,     6,    13,     8,   270,   409,     3,     4,    50,   104,
      52,   106,     3,   411,    38,    45,   282,   246,   104,   104,
     106,   106,   420,   104,   253,   106,   255,   293,    25,   105,
      54,    73,     5,     6,    97,   433,    19,    48,   101,     3,
       3,    83,   105,    40,    68,     3,    97,     3,     4,     5,
       6,    34,    49,     9,   105,    97,    98,   323,     3,   101,
      16,    44,    51,   105,   330,     3,     4,     5,     6,    25,
     104,     9,   106,   339,     3,   341,   342,   343,   344,   345,
     346,    48,    97,    72,    40,    41,    83,    31,     3,     4,
     105,   105,    97,    82,    50,   104,    52,   106,   105,     3,
     105,     5,    40,    41,     8,    18,   105,   105,   105,    53,
      25,   104,    50,   106,    52,   105,   104,    73,   106,   104,
     104,   106,   106,   105,   104,    40,   106,    83,    41,    33,
     104,    90,   106,   105,   400,   105,    90,    76,    81,   405,
     406,    97,    98,    58,    31,   101,     3,    75,    62,   105,
      84,    55,    96,    97,    98,    99,   100,     5,   106,    97,
       3,    46,    97,   101,   105,    31,    53,   105,    83,   105,
      90,    90,    84,    77,     3,    31,     3,    90,    91,    92,
      93,    94,    95,   105,    64,   451,   104,    53,   101,    40,
       3,     5,    31,    97,   104,   106,   105,    53,    47,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,    53,    31,     3,   104,    90,   106,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    80,   106,    53,   104,     3,
     106,    31,    98,    99,   100,    70,     5,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   106,    53,    31,    39,    90,   106,    86,   105,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   105,    53,     8,   105,    31,
     106,     8,   104,    87,   105,   105,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    53,    31,    20,    85,    59,   106,     8,    98,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,    53,   104,   106,    31,     8,   106,
      41,    39,    57,   106,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    53,
      31,    13,    87,   106,   106,    87,    20,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,    53,    57,    20,   104,    31,    56,     3,   105,
     104,   104,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   106,    53,    31,
     104,    90,   105,     3,     8,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
      90,    53,   118,   106,    31,    92,   117,   226,   433,   420,
     440,   396,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,    53,    31,   452,   107,
     246,   218,   220,   140,   366,   330,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    53,
     271,   314,    31,   239,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,   100,    15,    -1,    17,    38,    -1,    -1,    21,    -1,
      23,    -1,    -1,    26,    27,    28,    29,    -1,    51,    32,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    72,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    61,    82,
      63,    -1,    65,    -1,    67,    -1,    69,    -1,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    15,    17,    21,    23,    26,    27,    28,    29,    32,
      35,    43,    61,    63,    65,    67,    69,    71,    79,   108,
     109,   110,   111,   112,   147,   151,   152,   155,   156,   157,
     158,   165,   166,   175,   176,   177,   178,   181,   186,   187,
     190,   192,   193,   194,   195,    42,     3,    37,    36,    37,
      64,     3,     4,     5,     6,     9,    10,    16,    25,    40,
      41,    50,    52,    73,    83,    97,    98,   101,   105,   113,
     114,   116,   143,   144,     3,    10,    38,    54,    68,   188,
      22,    38,    51,    72,    74,    82,   148,   188,    76,     3,
     117,     0,   103,    45,     3,     3,   105,     3,     3,     3,
       3,   105,    48,   135,   136,   105,   105,   105,   105,   105,
     105,   105,    50,    52,   143,   143,   143,    36,   104,     3,
      13,   115,    31,    53,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    90,
      90,     3,     9,     3,     5,     6,     8,    55,   149,   150,
      76,    81,    67,   104,    65,    69,   111,     3,    75,     5,
       6,     8,    97,   105,   124,   125,   164,   167,   168,    62,
      84,     8,   106,   143,   145,   146,     5,   143,    30,    98,
     145,   143,   143,   143,   106,   105,   105,   106,   117,   114,
       3,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,     3,     8,
      33,    55,    77,    97,   124,   153,   154,   150,    90,    90,
      97,    46,    84,   182,   183,     3,   179,   180,     3,   105,
     159,    64,     5,     6,     8,   106,   124,   126,   169,   104,
     170,    19,    34,    44,   191,    40,   104,   106,   104,   106,
       3,   106,   106,   104,   106,   104,   106,   106,   143,   143,
      84,   118,   119,   153,   105,   149,    47,     3,   184,   185,
      90,   104,   119,     3,     4,    25,    40,    83,   123,   160,
      80,     3,   104,   106,   104,   106,   164,   168,   171,   172,
     106,    70,    41,    90,   146,     5,   106,   143,   143,    49,
     105,   120,   121,   122,   123,    39,   127,   128,   126,    59,
      60,    66,   189,    90,    86,   105,   124,   125,   180,   105,
     105,   104,   106,   105,   161,   162,   124,     8,    13,   173,
     104,     8,   105,   124,   106,   106,   105,   120,    87,    18,
      41,    90,    91,    92,    93,    94,    95,   101,    20,    85,
     129,   130,   106,    24,    78,    59,     8,   185,   106,   126,
      98,   106,   123,   105,   163,   164,   104,     3,    48,   174,
     164,   172,   126,     8,   106,   120,   124,   125,     9,   105,
     124,   125,   124,   125,   124,   125,   124,   125,   124,   125,
     124,   125,    41,   123,    39,    57,   131,   132,   106,   106,
     104,   106,   162,   106,   106,    87,    87,   126,     9,   105,
      57,    20,   135,   164,   124,   125,   124,   125,   106,   126,
      20,    58,   123,   133,   134,    56,   137,   138,   106,   133,
     105,    14,    28,   104,     3,   139,   140,   106,   134,    90,
     104,     3,     5,     8,   105,   140,   105,     3,   141,   142,
       8,    90,   104,   106,   106,   124,   142
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1

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
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror (pParser, "syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, pParser)
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
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylineno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylineno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
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
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse ( SqlParser_c * pParser );
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse ( SqlParser_c * pParser )
#else
int
yyparse (pParser)
     SqlParser_c * pParser ;
#endif
#endif
{
  /* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

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
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
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

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
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

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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

    { pParser->PushQuery(); ;}
    break;

  case 22:

    { pParser->PushQuery(); ;}
    break;

  case 23:

    { pParser->PushQuery(); ;}
    break;

  case 26:

    {
			pParser->m_pStmt->m_eStmt = STMT_SELECT;
			pParser->m_pQuery->m_sIndexes.SetBinary ( pParser->m_pBuf+yyvsp[-6].m_iStart, yyvsp[-6].m_iEnd-yyvsp[-6].m_iStart );
		;}
    break;

  case 29:

    { pParser->AddItem ( &yyvsp[0] ); ;}
    break;

  case 32:

    { pParser->AliasLastItem ( &yyvsp[0] ); ;}
    break;

  case 33:

    { pParser->AliasLastItem ( &yyvsp[0] ); ;}
    break;

  case 34:

    { pParser->AddItem ( &yyvsp[0] ); ;}
    break;

  case 35:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_AVG, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 36:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_MAX, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 37:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_MIN, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 38:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_SUM, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 39:

    { if ( !pParser->AddItem ( "count(*)", &yyvsp[-3], &yyvsp[0] ) ) YYERROR; ;}
    break;

  case 40:

    { if ( !pParser->AddItem ( "weight()", &yyvsp[-2], &yyvsp[0] ) ) YYERROR; ;}
    break;

  case 41:

    { if ( !pParser->AddDistinct ( &yyvsp[-1], &yyvsp[-4], &yyvsp[0] ) ) YYERROR; ;}
    break;

  case 43:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 54:

    {
			if ( !pParser->SetMatch(yyvsp[-1]) )
				YYERROR;
		;}
    break;

  case 55:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-2] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues.Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 56:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-2] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues.Add ( yyvsp[0].m_iValue );
			pFilter->m_bExclude = true;
		;}
    break;

  case 57:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-4] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues = *yyvsp[-1].m_pValues.Ptr();
			pFilter->m_dValues.Uniq();
		;}
    break;

  case 58:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-5] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues = *yyvsp[-1].m_pValues.Ptr();
			pFilter->m_bExclude = true;
			pFilter->m_dValues.Uniq();
		;}
    break;

  case 59:

    {
			if ( !pParser->AddUservarFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_sValue, false ) )
				YYERROR;
		;}
    break;

  case 60:

    {
			if ( !pParser->AddUservarFilter ( yyvsp[-3].m_sValue, yyvsp[0].m_sValue, true ) )
				YYERROR;
		;}
    break;

  case 61:

    {
			if ( !pParser->AddIntRangeFilter ( yyvsp[-4].m_sValue, yyvsp[-2].m_iValue, yyvsp[0].m_iValue ) )
				YYERROR;
		;}
    break;

  case 62:

    {
			if ( !pParser->AddIntFilterGTE ( yyvsp[-2].m_sValue, yyvsp[0].m_iValue+1 ) )
				YYERROR;
		;}
    break;

  case 63:

    {
			if ( !pParser->AddIntFilterLTE ( yyvsp[-2].m_sValue, yyvsp[0].m_iValue-1 ) )
				YYERROR;
		;}
    break;

  case 64:

    {
			if ( !pParser->AddIntFilterGTE ( yyvsp[-2].m_sValue, yyvsp[0].m_iValue ) )
				YYERROR;
		;}
    break;

  case 65:

    {
			if ( !pParser->AddIntFilterLTE ( yyvsp[-2].m_sValue, yyvsp[0].m_iValue ) )
				YYERROR;
		;}
    break;

  case 66:

    {
			yyerror ( pParser, "only >=, <=, and BETWEEN floating-point filter types are supported in this version" );
			YYERROR;
		;}
    break;

  case 67:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-4].m_sValue, yyvsp[-2].m_fValue, yyvsp[0].m_fValue ) )
				YYERROR;
		;}
    break;

  case 68:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-4].m_sValue, yyvsp[-2].m_iValue, yyvsp[0].m_fValue ) )
				YYERROR;
		;}
    break;

  case 69:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-4].m_sValue, yyvsp[-2].m_fValue, yyvsp[0].m_iValue ) )
				YYERROR;
		;}
    break;

  case 70:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_fValue, FLT_MAX ) )
				YYERROR;
		;}
    break;

  case 71:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, -FLT_MAX, yyvsp[0].m_fValue ) )
				YYERROR;
		;}
    break;

  case 73:

    {
			if ( !pParser->SetOldSyntax() )
				YYERROR;
		;}
    break;

  case 74:

    {
			yyval.m_sValue = "@count";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 75:

    {
			yyval.m_sValue = "@weight";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 76:

    {
			yyval.m_sValue = "@id";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 77:

    { yyval.m_iInstype = TOK_CONST_INT; yyval.m_iValue = yyvsp[0].m_iValue; ;}
    break;

  case 78:

    {
			yyval.m_iInstype = TOK_CONST_INT;
			if ( (uint64_t)yyvsp[0].m_iValue > (uint64_t)LLONG_MAX )
				yyval.m_iValue = LLONG_MIN;
			else
				yyval.m_iValue = -yyvsp[0].m_iValue;
		;}
    break;

  case 79:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; ;}
    break;

  case 80:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = -yyvsp[0].m_fValue; ;}
    break;

  case 81:

    {
			assert ( !yyval.m_pValues.Ptr() );
			yyval.m_pValues = new RefcountedVector_c<SphAttr_t> ();
			yyval.m_pValues->Add ( yyvsp[0].m_iValue ); 
		;}
    break;

  case 82:

    {
			yyval.m_pValues->Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 85:

    {
			pParser->SetGroupBy ( yyvsp[0].m_sValue );
		;}
    break;

  case 88:

    {
			pParser->m_pQuery->m_sSortBy.SetBinary ( pParser->m_pBuf+yyvsp[0].m_iStart, yyvsp[0].m_iEnd-yyvsp[0].m_iStart );
		;}
    break;

  case 91:

    {
			pParser->m_pQuery->m_sOrderBy.SetBinary ( pParser->m_pBuf+yyvsp[0].m_iStart, yyvsp[0].m_iEnd-yyvsp[0].m_iStart );
		;}
    break;

  case 92:

    {
			pParser->m_pQuery->m_sOrderBy = "@random";
		;}
    break;

  case 94:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 96:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 97:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 100:

    {
			pParser->m_pQuery->m_iOffset = 0;
			pParser->m_pQuery->m_iLimit = yyvsp[0].m_iValue;
		;}
    break;

  case 101:

    {
			pParser->m_pQuery->m_iOffset = yyvsp[-2].m_iValue;
			pParser->m_pQuery->m_iLimit = yyvsp[0].m_iValue;
		;}
    break;

  case 107:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 108:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 109:

    {
			if ( !pParser->AddOption ( yyvsp[-4], pParser->GetNamedVec ( yyvsp[-1].m_iValue ) ) )
				YYERROR;
			pParser->FreeNamedVec ( yyvsp[-1].m_iValue );
		;}
    break;

  case 110:

    {
			if ( !pParser->AddOption ( yyvsp[-5], yyvsp[-2], yyvsp[-1].m_sValue ) )
				YYERROR;
		;}
    break;

  case 111:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 112:

    {
			yyval.m_iValue = pParser->AllocNamedVec ();
			pParser->AddConst ( yyval.m_iValue, yyvsp[0] );
		;}
    break;

  case 113:

    {
			pParser->AddConst( yyval.m_iValue, yyvsp[0] );
		;}
    break;

  case 114:

    {
			yyval.m_sValue = yyvsp[-2].m_sValue;
			yyval.m_iValue = yyvsp[0].m_iValue;
		;}
    break;

  case 116:

    { if ( !pParser->SetOldSyntax() ) YYERROR; ;}
    break;

  case 117:

    { if ( !pParser->SetNewSyntax() ) YYERROR; ;}
    break;

  case 121:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 122:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 123:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 124:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 125:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 126:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 127:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 128:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 129:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 130:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 131:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 132:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 133:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 134:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 135:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 136:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 137:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 138:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 139:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 140:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 142:

    { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 143:

    { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 144:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 145:

    { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 146:

    { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 152:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_WARNINGS; ;}
    break;

  case 153:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_STATUS; ;}
    break;

  case 154:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_META; ;}
    break;

  case 162:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_iSetValue = yyvsp[0].m_iValue;
		;}
    break;

  case 163:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_sSetValue = yyvsp[0].m_sValue;
		;}
    break;

  case 164:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_bSetNull = true;
		;}
    break;

  case 165:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 166:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 167:

    {
			pParser->SetStatement ( yyvsp[-4], SET_GLOBAL_UVAR );
			pParser->m_pStmt->m_dSetValues = *yyvsp[-1].m_pValues.Ptr();
		;}
    break;

  case 168:

    {
			pParser->SetStatement ( yyvsp[-2], SET_GLOBAL_SVAR );
			pParser->m_pStmt->m_sSetValue = yyvsp[0].m_sValue;
		;}
    break;

  case 171:

    { yyval.m_iValue = 1; ;}
    break;

  case 172:

    { yyval.m_iValue = 0; ;}
    break;

  case 173:

    {
			yyval.m_iValue = yyvsp[0].m_iValue;
			if ( yyval.m_iValue!=0 && yyval.m_iValue!=1 )
			{
				yyerror ( pParser, "only 0 and 1 could be used as boolean values" );
				YYERROR;
			}
		;}
    break;

  case 174:

    { pParser->m_pStmt->m_eStmt = STMT_COMMIT; ;}
    break;

  case 175:

    { pParser->m_pStmt->m_eStmt = STMT_ROLLBACK; ;}
    break;

  case 176:

    { pParser->m_pStmt->m_eStmt = STMT_BEGIN; ;}
    break;

  case 179:

    {
			// everything else is pushed directly into parser within the rules
			pParser->m_pStmt->m_sIndex = yyvsp[-3].m_sValue;
		;}
    break;

  case 180:

    { pParser->m_pStmt->m_eStmt = STMT_INSERT; ;}
    break;

  case 181:

    { pParser->m_pStmt->m_eStmt = STMT_REPLACE; ;}
    break;

  case 184:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 185:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 188:

    { if ( !pParser->m_pStmt->CheckInsertIntegrity() ) { yyerror ( pParser, "wrong number of values here" ); YYERROR; } ;}
    break;

  case 189:

    { AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 190:

    { AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 191:

    { yyval.m_iInstype = TOK_CONST_INT; yyval.m_iValue = yyvsp[0].m_iValue; ;}
    break;

  case 192:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; ;}
    break;

  case 193:

    { yyval.m_iInstype = TOK_QUOTED_STRING; yyval.m_sValue = yyvsp[0].m_sValue; ;}
    break;

  case 194:

    { yyval.m_iInstype = TOK_CONST_MVA; yyval.m_pValues = yyvsp[-1].m_pValues; ;}
    break;

  case 195:

    { yyval.m_iInstype = TOK_CONST_MVA; ;}
    break;

  case 196:

    {
			pParser->m_pStmt->m_eStmt = STMT_DELETE;
			pParser->m_pStmt->m_sIndex = yyvsp[-4].m_sValue;
			pParser->m_pStmt->m_dDeleteIds.Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 197:

    {
			pParser->m_pStmt->m_eStmt = STMT_DELETE;
			pParser->m_pStmt->m_sIndex = yyvsp[-6].m_sValue;
			for ( int i=0; i<yyvsp[-1].m_pValues.Ptr()->GetLength(); i++ )
				pParser->m_pStmt->m_dDeleteIds.Add ( (*yyvsp[-1].m_pValues.Ptr())[i] );
		;}
    break;

  case 198:

    {
			pParser->m_pStmt->m_eStmt = STMT_CALL;
			pParser->m_pStmt->m_sCallProc = yyvsp[-4].m_sValue;
		;}
    break;

  case 199:

    {
			AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] );
		;}
    break;

  case 200:

    {
			AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] );
		;}
    break;

  case 202:

    {
			yyval.m_iInstype = TOK_CONST_STRINGS;
		;}
    break;

  case 203:

    {
			// FIXME? for now, one such array per CALL statement, tops
			if ( pParser->m_pStmt->m_dCallStrings.GetLength() )
			{
				yyerror ( pParser, "unexpected constant string list" );
				YYERROR;
			}
			pParser->m_pStmt->m_dCallStrings.Add ( yyvsp[0].m_sValue );
		;}
    break;

  case 204:

    {
			pParser->m_pStmt->m_dCallStrings.Add ( yyvsp[0].m_sValue );
		;}
    break;

  case 207:

    {
			assert ( pParser->m_pStmt->m_dCallOptNames.GetLength()==1 );
			assert ( pParser->m_pStmt->m_dCallOptValues.GetLength()==1 );
		;}
    break;

  case 209:

    {
			pParser->m_pStmt->m_dCallOptNames.Add ( yyvsp[0].m_sValue );
			AddInsval ( pParser->m_pStmt->m_dCallOptValues, yyvsp[-2] );
		;}
    break;

  case 213:

    { yyval.m_sValue = "limit"; ;}
    break;

  case 214:

    {
			pParser->m_pStmt->m_eStmt = STMT_DESC;
			pParser->m_pStmt->m_sIndex = yyvsp[0].m_sValue;
		;}
    break;

  case 217:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_TABLES; ;}
    break;

  case 218:

    {
			if ( !pParser->UpdateStatement ( &yyvsp[-3] ) )
				YYERROR;
		;}
    break;

  case 221:

    {
			pParser->UpdateAttr ( yyvsp[-2].m_sValue, &yyvsp[0] );
		;}
    break;

  case 222:

    {
			pParser->UpdateAttr ( yyvsp[-2].m_sValue, &yyvsp[0], SPH_ATTR_FLOAT);
		;}
    break;

  case 223:

    {
			pParser->UpdateMVAAttr ( yyvsp[-4].m_sValue, yyvsp[-1] );
		;}
    break;

  case 224:

    {
			SqlNode_t tNoValues;
			pParser->UpdateMVAAttr ( yyvsp[-3].m_sValue, tNoValues );
		;}
    break;

  case 225:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_VARIABLES;
		;}
    break;

  case 232:

    {
			pParser->m_pStmt->m_eStmt = STMT_DUMMY;
		;}
    break;

  case 233:

    {
			pParser->m_pStmt->m_eStmt = STMT_DUMMY;
		;}
    break;

  case 241:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_CREATE_FUNC;
			tStmt.m_sUdfName = yyvsp[-4].m_sValue;
			tStmt.m_sUdfLib = yyvsp[0].m_sValue;
			tStmt.m_eUdfType = (ESphAttr) yyvsp[-2].m_iValue;
		;}
    break;

  case 242:

    { yyval.m_iValue = SPH_ATTR_INTEGER; ;}
    break;

  case 243:

    { yyval.m_iValue = SPH_ATTR_BIGINT; ;}
    break;

  case 244:

    { yyval.m_iValue = SPH_ATTR_FLOAT; ;}
    break;

  case 245:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_DROP_FUNC;
			tStmt.m_sUdfName = yyvsp[0].m_sValue;
		;}
    break;

  case 246:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ATTACH_INDEX;
			tStmt.m_sIndex = yyvsp[-3].m_sValue;
			tStmt.m_sSetName = yyvsp[0].m_sValue;
		;}
    break;

  case 247:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_RTINDEX;
			tStmt.m_sIndex = yyvsp[0].m_sValue;
		;}
    break;

  case 248:

    {
			pParser->m_pStmt->m_eStmt = STMT_DUMMY;
		;}
    break;


    }

/* Line 991 of yacc.c.  */


  yyvsp -= yylen;
  yyssp -= yylen;


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
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("syntax error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 4)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      else
		{
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			snprintf (yyp, (int)(yysize - (yyp - yymsg)), ", expecting %s (or %d other tokens)", yytname[yyx], yycount - 1);
			while (*yyp++);
			break;
		      }
		}

	      yyerror (pParser, yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror (pParser, "syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (pParser, "syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab2;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:

  /* Suppress GCC warning that yyerrlab1 is unused when no action
     invokes YYERROR.  */
#if defined (__GNUC_MINOR__) && 2093 <= (__GNUC__ * 1000 + __GNUC_MINOR__)
//  __attribute__ ((__unused__))
#endif


  goto yyerrlab2;


/*---------------------------------------------------------------.
| yyerrlab2 -- pop states until the error token can be shifted.  |
`---------------------------------------------------------------*/
yyerrlab2:
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

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


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
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror (pParser, "parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}





#if USE_WINDOWS
#pragma warning(pop)
#endif

