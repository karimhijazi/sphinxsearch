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
     TOK_AS = 267,
     TOK_ASC = 268,
     TOK_ATTACH = 269,
     TOK_AVG = 270,
     TOK_BEGIN = 271,
     TOK_BETWEEN = 272,
     TOK_BY = 273,
     TOK_CALL = 274,
     TOK_COLLATION = 275,
     TOK_COMMIT = 276,
     TOK_COMMITTED = 277,
     TOK_COUNT = 278,
     TOK_CREATE = 279,
     TOK_DELETE = 280,
     TOK_DESC = 281,
     TOK_DESCRIBE = 282,
     TOK_DISTINCT = 283,
     TOK_DIV = 284,
     TOK_DROP = 285,
     TOK_FALSE = 286,
     TOK_FLOAT = 287,
     TOK_FLUSH = 288,
     TOK_FROM = 289,
     TOK_FUNCTION = 290,
     TOK_GLOBAL = 291,
     TOK_GROUP = 292,
     TOK_ID = 293,
     TOK_IN = 294,
     TOK_INDEX = 295,
     TOK_INSERT = 296,
     TOK_INT = 297,
     TOK_INTO = 298,
     TOK_ISOLATION = 299,
     TOK_LEVEL = 300,
     TOK_LIMIT = 301,
     TOK_MATCH = 302,
     TOK_MAX = 303,
     TOK_META = 304,
     TOK_MIN = 305,
     TOK_MOD = 306,
     TOK_NAMES = 307,
     TOK_NULL = 308,
     TOK_OPTION = 309,
     TOK_ORDER = 310,
     TOK_RAND = 311,
     TOK_READ = 312,
     TOK_REPEATABLE = 313,
     TOK_REPLACE = 314,
     TOK_RETURNS = 315,
     TOK_ROLLBACK = 316,
     TOK_RTINDEX = 317,
     TOK_SELECT = 318,
     TOK_SERIALIZABLE = 319,
     TOK_SET = 320,
     TOK_SESSION = 321,
     TOK_SHOW = 322,
     TOK_SONAME = 323,
     TOK_START = 324,
     TOK_STATUS = 325,
     TOK_SUM = 326,
     TOK_TABLES = 327,
     TOK_TO = 328,
     TOK_TRANSACTION = 329,
     TOK_TRUE = 330,
     TOK_UNCOMMITTED = 331,
     TOK_UPDATE = 332,
     TOK_VALUES = 333,
     TOK_VARIABLES = 334,
     TOK_WARNINGS = 335,
     TOK_WEIGHT = 336,
     TOK_WHERE = 337,
     TOK_WITHIN = 338,
     TOK_OR = 339,
     TOK_AND = 340,
     TOK_NE = 341,
     TOK_GTE = 342,
     TOK_LTE = 343,
     TOK_NOT = 344,
     TOK_NEG = 345
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
#define TOK_AS 267
#define TOK_ASC 268
#define TOK_ATTACH 269
#define TOK_AVG 270
#define TOK_BEGIN 271
#define TOK_BETWEEN 272
#define TOK_BY 273
#define TOK_CALL 274
#define TOK_COLLATION 275
#define TOK_COMMIT 276
#define TOK_COMMITTED 277
#define TOK_COUNT 278
#define TOK_CREATE 279
#define TOK_DELETE 280
#define TOK_DESC 281
#define TOK_DESCRIBE 282
#define TOK_DISTINCT 283
#define TOK_DIV 284
#define TOK_DROP 285
#define TOK_FALSE 286
#define TOK_FLOAT 287
#define TOK_FLUSH 288
#define TOK_FROM 289
#define TOK_FUNCTION 290
#define TOK_GLOBAL 291
#define TOK_GROUP 292
#define TOK_ID 293
#define TOK_IN 294
#define TOK_INDEX 295
#define TOK_INSERT 296
#define TOK_INT 297
#define TOK_INTO 298
#define TOK_ISOLATION 299
#define TOK_LEVEL 300
#define TOK_LIMIT 301
#define TOK_MATCH 302
#define TOK_MAX 303
#define TOK_META 304
#define TOK_MIN 305
#define TOK_MOD 306
#define TOK_NAMES 307
#define TOK_NULL 308
#define TOK_OPTION 309
#define TOK_ORDER 310
#define TOK_RAND 311
#define TOK_READ 312
#define TOK_REPEATABLE 313
#define TOK_REPLACE 314
#define TOK_RETURNS 315
#define TOK_ROLLBACK 316
#define TOK_RTINDEX 317
#define TOK_SELECT 318
#define TOK_SERIALIZABLE 319
#define TOK_SET 320
#define TOK_SESSION 321
#define TOK_SHOW 322
#define TOK_SONAME 323
#define TOK_START 324
#define TOK_STATUS 325
#define TOK_SUM 326
#define TOK_TABLES 327
#define TOK_TO 328
#define TOK_TRANSACTION 329
#define TOK_TRUE 330
#define TOK_UNCOMMITTED 331
#define TOK_UPDATE 332
#define TOK_VALUES 333
#define TOK_VARIABLES 334
#define TOK_WARNINGS 335
#define TOK_WEIGHT 336
#define TOK_WHERE 337
#define TOK_WITHIN 338
#define TOK_OR 339
#define TOK_AND 340
#define TOK_NE 341
#define TOK_GTE 342
#define TOK_LTE 343
#define TOK_NOT 344
#define TOK_NEG 345




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
#define YYLAST   774

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  105
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  84
/* YYNRULES -- Number of rules. */
#define YYNRULES  237
/* YYNRULES -- Number of states. */
#define YYNSTATES  439

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   345

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    98,    87,     2,
     103,   104,    96,    94,   102,    95,     2,    97,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   101,
      90,    88,    91,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    86,     2,     2,     2,     2,     2,
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
      85,    89,    92,    93,    99,   100
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
     138,   142,   146,   150,   154,   159,   163,   167,   173,   180,
     184,   189,   195,   199,   203,   207,   211,   213,   219,   223,
     227,   229,   231,   236,   240,   242,   244,   247,   249,   252,
     254,   258,   259,   261,   265,   266,   268,   274,   275,   277,
     281,   287,   289,   293,   295,   298,   301,   302,   304,   307,
     312,   313,   315,   318,   320,   324,   328,   332,   338,   345,
     349,   351,   355,   359,   361,   363,   365,   367,   369,   371,
     374,   377,   381,   385,   389,   393,   397,   401,   405,   409,
     413,   417,   421,   425,   429,   433,   437,   441,   445,   449,
     451,   456,   461,   465,   472,   479,   481,   485,   487,   489,
     492,   494,   496,   498,   500,   502,   504,   506,   508,   513,
     518,   523,   527,   532,   540,   546,   548,   550,   552,   554,
     556,   558,   560,   562,   564,   567,   574,   576,   578,   579,
     583,   585,   589,   591,   595,   599,   601,   605,   607,   609,
     611,   615,   618,   626,   636,   643,   645,   649,   651,   655,
     657,   661,   662,   665,   667,   671,   675,   676,   678,   680,
     682,   685,   687,   689,   692,   698,   700,   704,   708,   712,
     718,   723,   727,   730,   737,   738,   740,   742,   745,   748,
     751,   753,   761,   763,   765,   769,   776,   780
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     106,     0,    -1,   107,    -1,   108,    -1,   108,   101,    -1,
     154,    -1,   162,    -1,   148,    -1,   149,    -1,   152,    -1,
     163,    -1,   172,    -1,   174,    -1,   175,    -1,   178,    -1,
     179,    -1,   183,    -1,   185,    -1,   186,    -1,   187,    -1,
     180,    -1,   188,    -1,   109,    -1,   108,   101,   109,    -1,
     110,    -1,   145,    -1,    63,   111,    34,   115,   116,   125,
     127,   129,   133,   135,    -1,   112,    -1,   111,   102,   112,
      -1,    96,    -1,   114,   113,    -1,    -1,     3,    -1,    12,
       3,    -1,   141,    -1,    15,   103,   141,   104,    -1,    48,
     103,   141,   104,    -1,    50,   103,   141,   104,    -1,    71,
     103,   141,   104,    -1,    23,   103,    96,   104,    -1,    81,
     103,   104,    -1,    23,   103,    28,     3,   104,    -1,     3,
      -1,   115,   102,     3,    -1,    -1,   117,    -1,    82,   118,
      -1,   120,    -1,   118,    85,   120,    -1,    -1,   121,    88,
     123,    -1,   121,    89,   123,    -1,   121,    91,   123,    -1,
     121,    90,   123,    -1,    47,   103,     8,   104,    -1,   121,
      88,   122,    -1,   121,    89,   122,    -1,   121,    39,   103,
     124,   104,    -1,   121,    99,    39,   103,   124,   104,    -1,
     121,    39,     9,    -1,   121,    99,    39,     9,    -1,   121,
      17,   122,    85,   122,    -1,   121,    91,   122,    -1,   121,
      90,   122,    -1,   121,    92,   122,    -1,   121,    93,   122,
      -1,   119,    -1,   121,    17,   123,    85,   123,    -1,   121,
      92,   123,    -1,   121,    93,   123,    -1,     3,    -1,     4,
      -1,    23,   103,    96,   104,    -1,    81,   103,   104,    -1,
      38,    -1,     5,    -1,    95,     5,    -1,     6,    -1,    95,
       6,    -1,   122,    -1,   124,   102,   122,    -1,    -1,   126,
      -1,    37,    18,   121,    -1,    -1,   128,    -1,    83,    37,
      55,    18,   131,    -1,    -1,   130,    -1,    55,    18,   131,
      -1,    55,    18,    56,   103,   104,    -1,   132,    -1,   131,
     102,   132,    -1,   121,    -1,   121,    13,    -1,   121,    26,
      -1,    -1,   134,    -1,    46,     5,    -1,    46,     5,   102,
       5,    -1,    -1,   136,    -1,    54,   137,    -1,   138,    -1,
     137,   102,   138,    -1,     3,    88,     3,    -1,     3,    88,
       5,    -1,     3,    88,   103,   139,   104,    -1,     3,    88,
       3,   103,     8,   104,    -1,     3,    88,     8,    -1,   140,
      -1,   139,   102,   140,    -1,     3,    88,   122,    -1,     3,
      -1,     4,    -1,    38,    -1,     5,    -1,     6,    -1,     9,
      -1,    95,   141,    -1,    99,   141,    -1,   141,    94,   141,
      -1,   141,    95,   141,    -1,   141,    96,   141,    -1,   141,
      97,   141,    -1,   141,    90,   141,    -1,   141,    91,   141,
      -1,   141,    87,   141,    -1,   141,    86,   141,    -1,   141,
      98,   141,    -1,   141,    29,   141,    -1,   141,    51,   141,
      -1,   141,    93,   141,    -1,   141,    92,   141,    -1,   141,
      88,   141,    -1,   141,    89,   141,    -1,   141,    85,   141,
      -1,   141,    84,   141,    -1,   103,   141,   104,    -1,   142,
      -1,     3,   103,   143,   104,    -1,    39,   103,   143,   104,
      -1,     3,   103,   104,    -1,    50,   103,   141,   102,   141,
     104,    -1,    48,   103,   141,   102,   141,   104,    -1,   144,
      -1,   143,   102,   144,    -1,   141,    -1,     8,    -1,    67,
     146,    -1,    80,    -1,    70,    -1,    49,    -1,     3,    -1,
      53,    -1,     8,    -1,     5,    -1,     6,    -1,    65,     3,
      88,   151,    -1,    65,     3,    88,   150,    -1,    65,     3,
      88,    53,    -1,    65,    52,   147,    -1,    65,    10,    88,
     147,    -1,    65,    36,     9,    88,   103,   124,   104,    -1,
      65,    36,     3,    88,   150,    -1,     3,    -1,     8,    -1,
      75,    -1,    31,    -1,   122,    -1,    21,    -1,    61,    -1,
     153,    -1,    16,    -1,    69,    74,    -1,   155,    43,     3,
     156,    78,   158,    -1,    41,    -1,    59,    -1,    -1,   103,
     157,   104,    -1,   121,    -1,   157,   102,   121,    -1,   159,
      -1,   158,   102,   159,    -1,   103,   160,   104,    -1,   161,
      -1,   160,   102,   161,    -1,   122,    -1,   123,    -1,     8,
      -1,   103,   124,   104,    -1,   103,   104,    -1,    25,    34,
       3,    82,    38,    88,   122,    -1,    25,    34,     3,    82,
      38,    39,   103,   124,   104,    -1,    19,     3,   103,   164,
     167,   104,    -1,   165,    -1,   164,   102,   165,    -1,   161,
      -1,   103,   166,   104,    -1,     8,    -1,   166,   102,     8,
      -1,    -1,   102,   168,    -1,   169,    -1,   168,   102,   169,
      -1,   161,   170,   171,    -1,    -1,    12,    -1,     3,    -1,
      46,    -1,   173,     3,    -1,    27,    -1,    26,    -1,    67,
      72,    -1,    77,   115,    65,   176,   117,    -1,   177,    -1,
     176,   102,   177,    -1,     3,    88,   122,    -1,     3,    88,
     123,    -1,     3,    88,   103,   124,   104,    -1,     3,    88,
     103,   104,    -1,    67,   181,    79,    -1,    67,    20,    -1,
      65,   181,    74,    44,    45,   182,    -1,    -1,    36,    -1,
      66,    -1,    57,    76,    -1,    57,    22,    -1,    58,    57,
      -1,    64,    -1,    24,    35,     3,    60,   184,    68,     8,
      -1,    42,    -1,    32,    -1,    30,    35,     3,    -1,    14,
      40,     3,    73,    62,     3,    -1,    33,    62,     3,    -1,
      63,    10,   133,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   119,   119,   120,   121,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   147,   148,   152,   153,   157,   172,   173,   177,
     178,   181,   183,   184,   188,   189,   190,   191,   192,   193,
     194,   195,   199,   200,   203,   205,   209,   213,   214,   217,
     218,   219,   220,   221,   225,   230,   237,   245,   253,   262,
     267,   272,   277,   282,   287,   292,   297,   302,   307,   312,
     320,   321,   326,   332,   338,   347,   348,   359,   360,   364,
     370,   376,   378,   382,   388,   390,   394,   400,   402,   406,
     410,   417,   418,   422,   423,   424,   427,   429,   433,   438,
     445,   447,   451,   455,   456,   460,   465,   470,   476,   481,
     489,   494,   501,   511,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     541,   542,   543,   544,   545,   549,   550,   554,   555,   561,
     565,   566,   567,   573,   574,   575,   576,   577,   581,   586,
     591,   596,   597,   601,   606,   614,   615,   619,   620,   621,
     635,   636,   637,   641,   642,   648,   656,   657,   660,   662,
     666,   667,   671,   672,   676,   680,   681,   685,   686,   687,
     688,   689,   695,   701,   713,   721,   725,   732,   733,   740,
     750,   756,   758,   762,   767,   771,   778,   780,   784,   785,
     791,   799,   800,   806,   812,   820,   821,   825,   829,   833,
     837,   847,   854,   861,   867,   868,   869,   873,   874,   875,
     876,   882,   893,   894,   898,   909,   921,   932
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
  "TOK_AS", "TOK_ASC", "TOK_ATTACH", "TOK_AVG", "TOK_BEGIN", 
  "TOK_BETWEEN", "TOK_BY", "TOK_CALL", "TOK_COLLATION", "TOK_COMMIT", 
  "TOK_COMMITTED", "TOK_COUNT", "TOK_CREATE", "TOK_DELETE", "TOK_DESC", 
  "TOK_DESCRIBE", "TOK_DISTINCT", "TOK_DIV", "TOK_DROP", "TOK_FALSE", 
  "TOK_FLOAT", "TOK_FLUSH", "TOK_FROM", "TOK_FUNCTION", "TOK_GLOBAL", 
  "TOK_GROUP", "TOK_ID", "TOK_IN", "TOK_INDEX", "TOK_INSERT", "TOK_INT", 
  "TOK_INTO", "TOK_ISOLATION", "TOK_LEVEL", "TOK_LIMIT", "TOK_MATCH", 
  "TOK_MAX", "TOK_META", "TOK_MIN", "TOK_MOD", "TOK_NAMES", "TOK_NULL", 
  "TOK_OPTION", "TOK_ORDER", "TOK_RAND", "TOK_READ", "TOK_REPEATABLE", 
  "TOK_REPLACE", "TOK_RETURNS", "TOK_ROLLBACK", "TOK_RTINDEX", 
  "TOK_SELECT", "TOK_SERIALIZABLE", "TOK_SET", "TOK_SESSION", "TOK_SHOW", 
  "TOK_SONAME", "TOK_START", "TOK_STATUS", "TOK_SUM", "TOK_TABLES", 
  "TOK_TO", "TOK_TRANSACTION", "TOK_TRUE", "TOK_UNCOMMITTED", 
  "TOK_UPDATE", "TOK_VALUES", "TOK_VARIABLES", "TOK_WARNINGS", 
  "TOK_WEIGHT", "TOK_WHERE", "TOK_WITHIN", "TOK_OR", "TOK_AND", "'|'", 
  "'&'", "'='", "TOK_NE", "'<'", "'>'", "TOK_GTE", "TOK_LTE", "'+'", 
  "'-'", "'*'", "'/'", "'%'", "TOK_NOT", "TOK_NEG", "';'", "','", "'('", 
  "')'", "$accept", "request", "statement", "multi_stmt_list", 
  "multi_stmt", "select_from", "select_items_list", "select_item", 
  "opt_alias", "select_expr", "ident_list", "opt_where_clause", 
  "where_clause", "where_expr", "expr_float_unhandled", "where_item", 
  "expr_ident", "const_int", "const_float", "const_list", 
  "opt_group_clause", "group_clause", "opt_group_order_clause", 
  "group_order_clause", "opt_order_clause", "order_clause", 
  "order_items_list", "order_item", "opt_limit_clause", "limit_clause", 
  "opt_option_clause", "option_clause", "option_list", "option_item", 
  "named_const_list", "named_const", "expr", "function", "arglist", "arg", 
  "show_stmt", "show_variable", "set_value", "set_stmt", 
  "set_global_stmt", "set_string_value", "boolean_value", "transact_op", 
  "start_transaction", "insert_into", "insert_or_replace", 
  "opt_column_list", "column_list", "insert_rows_list", "insert_row", 
  "insert_vals_list", "insert_val", "delete_from", "call_proc", 
  "call_args_list", "call_arg", "const_string_list", "opt_call_opts_list", 
  "call_opts_list", "call_opt", "opt_as", "call_opt_name", "describe", 
  "describe_tok", "show_tables", "update", "update_items_list", 
  "update_item", "show_variables", "show_collation", "set_transaction", 
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
     335,   336,   337,   338,   339,   340,   124,    38,    61,   341,
      60,    62,   342,   343,    43,    45,    42,    47,    37,   344,
     345,    59,    44,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,   105,   106,   106,   106,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   108,   108,   109,   109,   110,   111,   111,   112,
     112,   113,   113,   113,   114,   114,   114,   114,   114,   114,
     114,   114,   115,   115,   116,   116,   117,   118,   118,   119,
     119,   119,   119,   119,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     121,   121,   121,   121,   121,   122,   122,   123,   123,   124,
     124,   125,   125,   126,   127,   127,   128,   129,   129,   130,
     130,   131,   131,   132,   132,   132,   133,   133,   134,   134,
     135,   135,   136,   137,   137,   138,   138,   138,   138,   138,
     139,   139,   140,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     142,   142,   142,   142,   142,   143,   143,   144,   144,   145,
     146,   146,   146,   147,   147,   147,   147,   147,   148,   148,
     148,   148,   148,   149,   149,   150,   150,   151,   151,   151,
     152,   152,   152,   153,   153,   154,   155,   155,   156,   156,
     157,   157,   158,   158,   159,   160,   160,   161,   161,   161,
     161,   161,   162,   162,   163,   164,   164,   165,   165,   166,
     166,   167,   167,   168,   168,   169,   170,   170,   171,   171,
     172,   173,   173,   174,   175,   176,   176,   177,   177,   177,
     177,   178,   179,   180,   181,   181,   181,   182,   182,   182,
     182,   183,   184,   184,   185,   186,   187,   188
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,    10,     1,     3,     1,
       2,     0,     1,     2,     1,     4,     4,     4,     4,     4,
       3,     5,     1,     3,     0,     1,     2,     1,     3,     0,
       3,     3,     3,     3,     4,     3,     3,     5,     6,     3,
       4,     5,     3,     3,     3,     3,     1,     5,     3,     3,
       1,     1,     4,     3,     1,     1,     2,     1,     2,     1,
       3,     0,     1,     3,     0,     1,     5,     0,     1,     3,
       5,     1,     3,     1,     2,     2,     0,     1,     2,     4,
       0,     1,     2,     1,     3,     3,     3,     5,     6,     3,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       4,     4,     3,     6,     6,     1,     3,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     3,     4,     7,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     6,     1,     1,     0,     3,
       1,     3,     1,     3,     3,     1,     3,     1,     1,     1,
       3,     2,     7,     9,     6,     1,     3,     1,     3,     1,
       3,     0,     2,     1,     3,     3,     0,     1,     1,     1,
       2,     1,     1,     2,     5,     1,     3,     3,     3,     5,
       4,     3,     2,     6,     0,     1,     1,     2,     2,     2,
       1,     7,     1,     1,     3,     6,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,     0,   173,     0,   170,     0,     0,   212,   211,     0,
       0,   176,   177,   171,     0,   224,   224,     0,     0,     0,
       2,     3,    22,    24,    25,     7,     8,     9,   172,     5,
       0,     6,    10,    11,     0,    12,    13,    14,    15,    20,
      16,    17,    18,    19,    21,     0,     0,     0,     0,     0,
       0,   113,   114,   116,   117,   118,    96,     0,     0,   115,
       0,     0,     0,     0,     0,     0,    29,     0,     0,     0,
      27,    31,    34,   139,     0,     0,   225,     0,   226,     0,
     222,   225,   152,   151,   213,   150,   149,     0,   174,    42,
       0,     1,     4,     0,   210,     0,     0,     0,     0,   234,
     236,     0,     0,   237,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,    32,
       0,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   153,   156,   157,   155,   154,   161,     0,
     221,     0,     0,     0,     0,    23,   178,     0,    75,    77,
     189,     0,     0,   187,   188,   197,   201,   195,     0,     0,
     148,   142,   147,     0,   145,    98,     0,     0,     0,     0,
       0,     0,     0,    40,     0,     0,   138,    44,    28,    33,
     130,   131,   137,   136,   128,   127,   134,   135,   125,   126,
     133,   132,   121,   122,   123,   124,   129,   165,   166,   168,
     160,   167,     0,   169,   159,   158,   162,     0,     0,     0,
       0,     0,   215,    43,     0,     0,     0,    76,    78,   199,
     191,    79,     0,     0,     0,     0,   233,   232,     0,     0,
       0,   140,     0,    35,     0,    39,   141,     0,    36,     0,
      37,    38,     0,     0,    49,    81,    45,   164,     0,     0,
       0,     0,   214,    70,    71,     0,    74,     0,   180,     0,
       0,   235,     0,   190,     0,   198,   197,   196,   202,   203,
     194,     0,     0,     0,   146,    99,    41,     0,     0,     0,
      46,    66,    47,     0,     0,    84,    82,     0,     0,     0,
     230,   223,     0,   217,   218,   216,     0,     0,     0,   179,
       0,   175,   182,    80,   200,   207,     0,     0,   231,     0,
     192,   144,   143,     0,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,    85,   163,   228,
     227,   229,   220,     0,     0,    73,   181,     0,     0,   185,
       0,   208,   209,   205,   206,   204,     0,     0,    48,     0,
       0,    59,     0,    55,    50,    56,    51,    63,    53,    62,
      52,    64,    68,    65,    69,     0,    83,     0,     0,    96,
      88,   219,    72,     0,   184,   183,   193,    54,     0,     0,
       0,    60,     0,     0,     0,   100,   186,    61,     0,    67,
      57,     0,     0,     0,    93,    89,    91,     0,    26,   101,
      58,    86,     0,    94,    95,     0,     0,   102,   103,    90,
      92,     0,     0,   105,   106,   109,     0,   104,     0,     0,
       0,   110,     0,     0,     0,   107,   108,   112,   111
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,    19,    20,    21,    22,    23,    69,    70,   121,    71,
      90,   255,   256,   290,   291,   292,   404,   231,   164,   232,
     295,   296,   336,   337,   379,   380,   405,   406,   103,   104,
     408,   409,   417,   418,   430,   431,    72,    73,   173,   174,
      24,    86,   148,    25,    26,   214,   215,    27,    28,    29,
      30,   225,   269,   311,   312,   348,   165,    31,    32,   166,
     167,   233,   235,   278,   279,   316,   353,    33,    34,    35,
      36,   221,   222,    37,    38,    39,    79,   301,    40,   238,
      41,    42,    43,    44
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -243
static const short yypact[] =
{
     697,   -15,  -243,    79,  -243,    -4,    18,  -243,  -243,   122,
      99,  -243,  -243,  -243,   110,   239,   679,    98,   172,   179,
    -243,    82,  -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,
     152,  -243,  -243,  -243,   199,  -243,  -243,  -243,  -243,  -243,
    -243,  -243,  -243,  -243,  -243,   200,   104,   209,   221,   225,
     234,   140,  -243,  -243,  -243,  -243,   201,   145,   168,  -243,
     169,   176,   204,   208,   211,   251,  -243,   251,   251,    -8,
    -243,   127,   490,  -243,   193,   215,   137,   162,  -243,   230,
    -243,  -243,  -243,  -243,  -243,  -243,  -243,   236,  -243,  -243,
      43,  -243,   -44,   315,  -243,   246,     9,   260,   240,  -243,
    -243,    93,   320,  -243,  -243,   251,    -1,   214,   251,   251,
     251,   222,   224,   226,  -243,  -243,   322,   172,   235,  -243,
     325,  -243,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   151,
     162,   244,   245,  -243,  -243,  -243,  -243,  -243,  -243,   291,
    -243,   333,   336,   235,   -29,  -243,   237,   279,  -243,  -243,
    -243,   184,     5,  -243,  -243,  -243,   241,  -243,    92,   304,
    -243,  -243,   490,    51,  -243,   242,   343,   344,   248,    76,
     273,   294,   370,  -243,   251,   251,  -243,   -53,  -243,  -243,
    -243,  -243,   516,   539,   564,   587,   612,   612,   570,   570,
     570,   570,   -17,   -17,  -243,  -243,  -243,  -243,  -243,  -243,
    -243,  -243,   348,  -243,  -243,  -243,  -243,    50,   253,   303,
     261,   -52,  -243,  -243,   170,   296,   373,  -243,  -243,  -243,
    -243,  -243,    96,    97,     9,   289,  -243,  -243,   327,    17,
     214,  -243,   392,  -243,   297,  -243,  -243,   251,  -243,   251,
    -243,  -243,   442,   467,   274,   363,  -243,  -243,    28,   105,
      34,   333,  -243,  -243,  -243,   299,  -243,   300,  -243,   123,
     301,  -243,    28,  -243,   397,  -243,   139,  -243,   321,  -243,
    -243,   416,   339,    28,  -243,  -243,  -243,   393,   419,   340,
     360,  -243,  -243,   177,   407,   366,  -243,   157,     2,   389,
    -243,  -243,    23,  -243,  -243,  -243,   354,   347,   170,  -243,
      49,   350,  -243,  -243,  -243,  -243,   125,    49,  -243,    28,
    -243,  -243,  -243,   445,   274,    16,     0,    16,    16,    16,
      16,    16,    16,   430,   170,   435,   418,  -243,  -243,  -243,
    -243,  -243,  -243,   178,   371,  -243,  -243,    31,   182,  -243,
     301,  -243,  -243,  -243,   464,  -243,   191,   388,  -243,   409,
     410,  -243,    28,  -243,  -243,  -243,  -243,  -243,  -243,  -243,
    -243,  -243,  -243,  -243,  -243,     7,  -243,   443,   481,   201,
    -243,  -243,  -243,    49,  -243,  -243,  -243,  -243,    28,    -3,
     192,  -243,    28,   482,   207,   447,  -243,  -243,   496,  -243,
    -243,   196,   170,   417,    22,   420,  -243,   518,  -243,  -243,
    -243,   420,   421,  -243,  -243,   170,   436,   440,  -243,  -243,
    -243,     3,   518,   444,  -243,  -243,   540,  -243,   538,   460,
     206,  -243,   446,    28,   540,  -243,  -243,  -243,  -243
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -243,  -243,  -243,  -243,   457,  -243,  -243,   448,  -243,  -243,
     453,  -243,   351,  -243,  -243,   247,  -217,   -96,  -242,  -226,
    -243,  -243,  -243,  -243,  -243,  -243,   171,   174,   212,  -243,
    -243,  -243,  -243,   173,  -243,   158,   -63,  -243,   487,   356,
    -243,  -243,   458,  -243,  -243,   380,  -243,  -243,  -243,  -243,
    -243,  -243,  -243,  -243,   250,  -243,  -233,  -243,  -243,  -243,
     383,  -243,  -243,  -243,   302,  -243,  -243,  -243,  -243,  -243,
    -243,  -243,   357,  -243,  -243,  -243,   604,  -243,  -243,  -243,
    -243,  -243,  -243,  -243
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -207
static const short yytable[] =
{
     163,   276,   114,   159,   115,   116,   423,   268,   424,   361,
     158,   425,   122,   229,   158,   159,   391,   160,   304,   153,
      82,   158,   159,   154,   339,    45,   117,   177,   158,   254,
     254,    47,   297,   158,   123,   413,   158,   293,   172,   158,
     159,    83,   176,   213,   172,   180,   181,   182,   414,   152,
     261,    85,    48,   207,   158,   159,   282,   160,   208,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   343,   349,   340,   136,
     137,   138,    46,   360,   354,   364,   366,   368,   370,   372,
     374,   346,   398,   356,   118,   178,    51,    52,    53,    54,
     212,   170,    55,   362,   161,   283,   426,   293,   151,   230,
     392,   161,   162,    51,    52,    53,    54,   376,   212,    55,
      56,   252,   253,   212,   236,    57,   212,   342,   351,   161,
     119,    59,    60,    58,   237,   230,   390,   302,   163,   120,
     141,   112,  -206,   113,   161,   152,   142,   399,    59,    60,
     396,   315,   347,   240,   207,   241,   158,    49,    61,   208,
      62,    50,   298,   299,   303,   143,   401,   144,   145,   300,
     146,   352,    88,   263,   264,    89,   313,   172,   240,    91,
     246,    63,   209,    92,   287,  -206,   288,   320,    65,   227,
     228,    64,    67,   265,   325,    93,    68,   171,   272,   274,
     273,   275,    94,    95,   210,    65,    66,    96,   266,    67,
     263,   264,    97,    68,   163,   147,   326,    51,    52,    53,
      54,   163,   170,    55,    98,   308,   211,   309,    99,   359,
     265,   363,   365,   367,   369,   371,   373,   100,    51,    52,
      53,    54,    74,   101,    55,   266,   212,   102,   105,    75,
      57,   267,    59,    60,    51,    52,    53,    54,    58,   272,
      55,   338,   112,   403,   113,   327,   328,   329,   330,   331,
     332,   106,   107,    59,    60,    76,   333,   263,   264,   108,
     272,   139,   381,    61,   383,    62,   384,   163,   267,    59,
      60,    77,   397,   272,   272,   386,   400,   265,   272,   112,
     410,   113,   122,   140,   149,    78,    63,   109,   434,    65,
     435,   110,   266,    67,   111,   150,    64,    68,   156,   157,
     168,   289,   169,   122,   123,   175,   183,   184,   189,   185,
      65,    66,   217,   218,    67,   219,   220,   437,    68,   223,
     224,   226,   239,   234,   242,   123,    65,   244,   259,   260,
      67,   122,   245,   227,    68,   267,   258,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   122,   123,   270,   247,   271,   248,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   280,   123,   281,   249,   285,   250,   122,
     294,   286,   306,   307,   310,   314,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   123,   122,   317,   318,   334,   186,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   319,   323,   123,   324,   341,   243,   122,   335,
     344,   345,   350,   357,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   375,
     123,   122,   377,   378,   251,   382,   315,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   387,   123,   388,   389,   122,   321,   393,   394,
     402,   407,   228,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   123,   122,
     412,   416,   415,   322,   421,   419,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   123,   422,   429,   247,   122,   432,   428,   433,   155,
     436,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   188,   123,   122,   249,
     187,   358,   262,   411,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   420,
     123,   395,   438,   122,   179,   427,   284,   257,   216,   122,
     385,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   123,   122,   277,   305,   355,
      87,   123,     0,     0,     0,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   123,     0,
       0,   122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   123,   134,   135,   136,   137,   138,     0,
       0,     0,     0,     0,     0,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
       0,     0,   130,   131,   132,   133,   134,   135,   136,   137,
     138,     1,     0,     2,     0,    81,     3,     0,     4,     0,
       0,     5,     6,     7,     8,     0,     0,     9,    82,     0,
      10,     0,     0,     0,     0,     0,     0,     0,    11,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,    83,
       0,    84,     0,     0,     0,     0,    12,     0,    13,    85,
      14,     0,    15,     0,    16,     0,    17,     0,     0,     0,
       0,     0,     0,     0,    18
};

static const short yycheck[] =
{
      96,   234,    65,     6,    67,    68,     3,   224,     5,     9,
       5,     8,    29,     8,     5,     6,     9,     8,   260,    63,
      49,     5,     6,    67,    22,    40,    34,    28,     5,    82,
      82,    35,   258,     5,    51,    13,     5,   254,   101,     5,
       6,    70,   105,   139,   107,   108,   109,   110,    26,   102,
     102,    80,    34,     3,     5,     6,    39,     8,     8,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   302,   310,    76,    96,
      97,    98,     3,   325,   317,   327,   328,   329,   330,   331,
     332,   308,    95,   319,   102,    96,     3,     4,     5,     6,
      95,     8,     9,   103,    95,    88,   103,   324,    65,   104,
     103,    95,   103,     3,     4,     5,     6,   334,    95,     9,
      10,   184,   185,    95,    32,    15,    95,   104,     3,    95,
       3,    38,    39,    23,    42,   104,   362,   103,   234,    12,
       3,    48,     3,    50,    95,   102,     9,   389,    38,    39,
     383,    12,   103,   102,     3,   104,     5,    35,    48,     8,
      50,    62,    57,    58,   260,     3,   392,     5,     6,    64,
       8,    46,    74,     3,     4,     3,   272,   240,   102,     0,
     104,    71,    31,   101,   247,    46,   249,   283,    95,     5,
       6,    81,    99,    23,    17,    43,   103,   104,   102,   102,
     104,   104,     3,     3,    53,    95,    96,   103,    38,    99,
       3,     4,     3,   103,   310,    53,    39,     3,     4,     5,
       6,   317,     8,     9,     3,   102,    75,   104,     3,   325,
      23,   327,   328,   329,   330,   331,   332,     3,     3,     4,
       5,     6,     3,   103,     9,    38,    95,    46,   103,    10,
      15,    81,    38,    39,     3,     4,     5,     6,    23,   102,
       9,   104,    48,    56,    50,    88,    89,    90,    91,    92,
      93,   103,   103,    38,    39,    36,    99,     3,     4,   103,
     102,    88,   104,    48,   102,    50,   104,   383,    81,    38,
      39,    52,   388,   102,   102,   104,   104,    23,   102,    48,
     104,    50,    29,    88,    74,    66,    71,   103,   102,    95,
     104,   103,    38,    99,   103,    79,    81,   103,     3,    73,
      60,    47,    82,    29,    51,     5,   104,   103,     3,   103,
      95,    96,    88,    88,    99,    44,     3,   433,   103,     3,
     103,    62,    38,   102,   102,    51,    95,     3,    45,    88,
      99,    29,   104,     5,   103,    81,   103,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    29,    51,    78,   102,     3,   104,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,   104,    51,    68,   102,     5,   104,    29,
      37,   104,   103,   103,   103,     8,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    51,    29,   102,     8,    18,   104,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   103,   103,    51,    85,    57,   104,    29,    83,
      96,   104,   102,     8,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    39,
      51,    29,    37,    55,   104,   104,    12,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   104,    51,    85,    85,    29,   104,    55,    18,
      18,    54,     6,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    51,    29,
     103,     3,   102,   104,    88,   104,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    51,   102,     3,   102,    29,     8,   103,    88,    92,
     104,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   118,    51,    29,   102,
     117,   324,   221,   402,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   415,
      51,   379,   434,    29,   107,   422,   240,   217,   140,    29,
     350,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    51,    29,   234,   261,   317,
      16,    51,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    51,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    51,    94,    95,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    14,    -1,    16,    -1,    36,    19,    -1,    21,    -1,
      -1,    24,    25,    26,    27,    -1,    -1,    30,    49,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    -1,    -1,    59,    -1,    61,    80,
      63,    -1,    65,    -1,    67,    -1,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    14,    16,    19,    21,    24,    25,    26,    27,    30,
      33,    41,    59,    61,    63,    65,    67,    69,    77,   106,
     107,   108,   109,   110,   145,   148,   149,   152,   153,   154,
     155,   162,   163,   172,   173,   174,   175,   178,   179,   180,
     183,   185,   186,   187,   188,    40,     3,    35,    34,    35,
      62,     3,     4,     5,     6,     9,    10,    15,    23,    38,
      39,    48,    50,    71,    81,    95,    96,    99,   103,   111,
     112,   114,   141,   142,     3,    10,    36,    52,    66,   181,
      20,    36,    49,    70,    72,    80,   146,   181,    74,     3,
     115,     0,   101,    43,     3,     3,   103,     3,     3,     3,
       3,   103,    46,   133,   134,   103,   103,   103,   103,   103,
     103,   103,    48,    50,   141,   141,   141,    34,   102,     3,
      12,   113,    29,    51,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    88,
      88,     3,     9,     3,     5,     6,     8,    53,   147,    74,
      79,    65,   102,    63,    67,   109,     3,    73,     5,     6,
       8,    95,   103,   122,   123,   161,   164,   165,    60,    82,
       8,   104,   141,   143,   144,     5,   141,    28,    96,   143,
     141,   141,   141,   104,   103,   103,   104,   115,   112,     3,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,     3,     8,    31,
      53,    75,    95,   122,   150,   151,   147,    88,    88,    44,
       3,   176,   177,     3,   103,   156,    62,     5,     6,     8,
     104,   122,   124,   166,   102,   167,    32,    42,   184,    38,
     102,   104,   102,   104,     3,   104,   104,   102,   104,   102,
     104,   104,   141,   141,    82,   116,   117,   150,   103,    45,
      88,   102,   117,     3,     4,    23,    38,    81,   121,   157,
      78,     3,   102,   104,   102,   104,   161,   165,   168,   169,
     104,    68,    39,    88,   144,     5,   104,   141,   141,    47,
     118,   119,   120,   121,    37,   125,   126,   124,    57,    58,
      64,   182,   103,   122,   123,   177,   103,   103,   102,   104,
     103,   158,   159,   122,     8,    12,   170,   102,     8,   103,
     122,   104,   104,   103,    85,    17,    39,    88,    89,    90,
      91,    92,    93,    99,    18,    83,   127,   128,   104,    22,
      76,    57,   104,   124,    96,   104,   121,   103,   160,   161,
     102,     3,    46,   171,   161,   169,   124,     8,   120,   122,
     123,     9,   103,   122,   123,   122,   123,   122,   123,   122,
     123,   122,   123,   122,   123,    39,   121,    37,    55,   129,
     130,   104,   104,   102,   104,   159,   104,   104,    85,    85,
     124,     9,   103,    55,    18,   133,   161,   122,    95,   123,
     104,   124,    18,    56,   121,   131,   132,    54,   135,   136,
     104,   131,   103,    13,    26,   102,     3,   137,   138,   104,
     132,    88,   102,     3,     5,     8,   103,   138,   103,     3,
     139,   140,     8,    88,   102,   104,   104,   122,   140
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
			pFilter->m_dValues.Sort();
		;}
    break;

  case 58:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-5] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues = *yyvsp[-1].m_pValues.Ptr();
			pFilter->m_bExclude = true;
			pFilter->m_dValues.Sort();
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
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_fValue, FLT_MAX ) )
				YYERROR;
		;}
    break;

  case 69:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, -FLT_MAX, yyvsp[0].m_fValue ) )
				YYERROR;
		;}
    break;

  case 71:

    {
			if ( !pParser->SetOldSyntax() )
				YYERROR;
		;}
    break;

  case 72:

    {
			yyval.m_sValue = "@count";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 73:

    {
			yyval.m_sValue = "@weight";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 74:

    {
			yyval.m_sValue = "@id";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 75:

    { yyval.m_iInstype = TOK_CONST_INT; yyval.m_iValue = yyvsp[0].m_iValue; ;}
    break;

  case 76:

    {
			yyval.m_iInstype = TOK_CONST_INT;
			if ( (uint64_t)yyvsp[0].m_iValue > (uint64_t)LLONG_MAX )
				yyval.m_iValue = LLONG_MIN;
			else
				yyval.m_iValue = -yyvsp[0].m_iValue;
		;}
    break;

  case 77:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; ;}
    break;

  case 78:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = -yyvsp[0].m_fValue; ;}
    break;

  case 79:

    {
			assert ( !yyval.m_pValues.Ptr() );
			yyval.m_pValues = new RefcountedVector_c<SphAttr_t> ();
			yyval.m_pValues->Add ( yyvsp[0].m_iValue ); 
		;}
    break;

  case 80:

    {
			yyval.m_pValues->Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 83:

    {
			pParser->SetGroupBy ( yyvsp[0].m_sValue );
		;}
    break;

  case 86:

    {
			pParser->m_pQuery->m_sSortBy.SetBinary ( pParser->m_pBuf+yyvsp[0].m_iStart, yyvsp[0].m_iEnd-yyvsp[0].m_iStart );
		;}
    break;

  case 89:

    {
			pParser->m_pQuery->m_sOrderBy.SetBinary ( pParser->m_pBuf+yyvsp[0].m_iStart, yyvsp[0].m_iEnd-yyvsp[0].m_iStart );
		;}
    break;

  case 90:

    {
			pParser->m_pQuery->m_sOrderBy = "@random";
		;}
    break;

  case 92:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 94:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 95:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 98:

    {
			pParser->m_pQuery->m_iOffset = 0;
			pParser->m_pQuery->m_iLimit = yyvsp[0].m_iValue;
		;}
    break;

  case 99:

    {
			pParser->m_pQuery->m_iOffset = yyvsp[-2].m_iValue;
			pParser->m_pQuery->m_iLimit = yyvsp[0].m_iValue;
		;}
    break;

  case 105:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 106:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 107:

    {
			if ( !pParser->AddOption ( yyvsp[-4], pParser->GetNamedVec ( yyvsp[-1].m_iValue ) ) )
				YYERROR;
			pParser->FreeNamedVec ( yyvsp[-1].m_iValue );
		;}
    break;

  case 108:

    {
			if ( !pParser->AddOption ( yyvsp[-5], yyvsp[-2], yyvsp[-1].m_sValue ) )
				YYERROR;
		;}
    break;

  case 109:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 110:

    {
			yyval.m_iValue = pParser->AllocNamedVec ();
			pParser->AddConst ( yyval.m_iValue, yyvsp[0] );
		;}
    break;

  case 111:

    {
			pParser->AddConst( yyval.m_iValue, yyvsp[0] );
		;}
    break;

  case 112:

    {
			yyval.m_sValue = yyvsp[-2].m_sValue;
			yyval.m_iValue = yyvsp[0].m_iValue;
		;}
    break;

  case 114:

    { if ( !pParser->SetOldSyntax() ) YYERROR; ;}
    break;

  case 115:

    { if ( !pParser->SetNewSyntax() ) YYERROR; ;}
    break;

  case 119:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 120:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 121:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 122:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
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

  case 140:

    { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 141:

    { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 142:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 143:

    { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 144:

    { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 150:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_WARNINGS; ;}
    break;

  case 151:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_STATUS; ;}
    break;

  case 152:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_META; ;}
    break;

  case 158:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_iSetValue = yyvsp[0].m_iValue;
		;}
    break;

  case 159:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_sSetValue = yyvsp[0].m_sValue;
		;}
    break;

  case 160:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_bSetNull = true;
		;}
    break;

  case 161:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 162:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 163:

    {
			pParser->SetStatement ( yyvsp[-4], SET_GLOBAL_UVAR );
			pParser->m_pStmt->m_dSetValues = *yyvsp[-1].m_pValues.Ptr();
		;}
    break;

  case 164:

    {
			pParser->SetStatement ( yyvsp[-2], SET_GLOBAL_SVAR );
			pParser->m_pStmt->m_sSetValue = yyvsp[0].m_sValue;
		;}
    break;

  case 167:

    { yyval.m_iValue = 1; ;}
    break;

  case 168:

    { yyval.m_iValue = 0; ;}
    break;

  case 169:

    {
			yyval.m_iValue = yyvsp[0].m_iValue;
			if ( yyval.m_iValue!=0 && yyval.m_iValue!=1 )
			{
				yyerror ( pParser, "only 0 and 1 could be used as boolean values" );
				YYERROR;
			}
		;}
    break;

  case 170:

    { pParser->m_pStmt->m_eStmt = STMT_COMMIT; ;}
    break;

  case 171:

    { pParser->m_pStmt->m_eStmt = STMT_ROLLBACK; ;}
    break;

  case 172:

    { pParser->m_pStmt->m_eStmt = STMT_BEGIN; ;}
    break;

  case 175:

    {
			// everything else is pushed directly into parser within the rules
			pParser->m_pStmt->m_sIndex = yyvsp[-3].m_sValue;
		;}
    break;

  case 176:

    { pParser->m_pStmt->m_eStmt = STMT_INSERT; ;}
    break;

  case 177:

    { pParser->m_pStmt->m_eStmt = STMT_REPLACE; ;}
    break;

  case 180:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 181:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 184:

    { if ( !pParser->m_pStmt->CheckInsertIntegrity() ) { yyerror ( pParser, "wrong number of values here" ); YYERROR; } ;}
    break;

  case 185:

    { AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 186:

    { AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 187:

    { yyval.m_iInstype = TOK_CONST_INT; yyval.m_iValue = yyvsp[0].m_iValue; ;}
    break;

  case 188:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; ;}
    break;

  case 189:

    { yyval.m_iInstype = TOK_QUOTED_STRING; yyval.m_sValue = yyvsp[0].m_sValue; ;}
    break;

  case 190:

    { yyval.m_iInstype = TOK_CONST_MVA; yyval.m_pValues = yyvsp[-1].m_pValues; ;}
    break;

  case 191:

    { yyval.m_iInstype = TOK_CONST_MVA; ;}
    break;

  case 192:

    {
			pParser->m_pStmt->m_eStmt = STMT_DELETE;
			pParser->m_pStmt->m_sIndex = yyvsp[-4].m_sValue;
			pParser->m_pStmt->m_dDeleteIds.Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 193:

    {
			pParser->m_pStmt->m_eStmt = STMT_DELETE;
			pParser->m_pStmt->m_sIndex = yyvsp[-6].m_sValue;
			for ( int i=0; i<yyvsp[-1].m_pValues.Ptr()->GetLength(); i++ )
				pParser->m_pStmt->m_dDeleteIds.Add ( (*yyvsp[-1].m_pValues.Ptr())[i] );
		;}
    break;

  case 194:

    {
			pParser->m_pStmt->m_eStmt = STMT_CALL;
			pParser->m_pStmt->m_sCallProc = yyvsp[-4].m_sValue;
		;}
    break;

  case 195:

    {
			AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] );
		;}
    break;

  case 196:

    {
			AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] );
		;}
    break;

  case 198:

    {
			yyval.m_iInstype = TOK_CONST_STRINGS;
		;}
    break;

  case 199:

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

  case 200:

    {
			pParser->m_pStmt->m_dCallStrings.Add ( yyvsp[0].m_sValue );
		;}
    break;

  case 203:

    {
			assert ( pParser->m_pStmt->m_dCallOptNames.GetLength()==1 );
			assert ( pParser->m_pStmt->m_dCallOptValues.GetLength()==1 );
		;}
    break;

  case 205:

    {
			pParser->m_pStmt->m_dCallOptNames.Add ( yyvsp[0].m_sValue );
			AddInsval ( pParser->m_pStmt->m_dCallOptValues, yyvsp[-2] );
		;}
    break;

  case 209:

    { yyval.m_sValue = "limit"; ;}
    break;

  case 210:

    {
			pParser->m_pStmt->m_eStmt = STMT_DESC;
			pParser->m_pStmt->m_sIndex = yyvsp[0].m_sValue;
		;}
    break;

  case 213:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_TABLES; ;}
    break;

  case 214:

    {
			if ( !pParser->UpdateStatement ( &yyvsp[-3] ) )
				YYERROR;
		;}
    break;

  case 217:

    {
			pParser->UpdateAttr ( yyvsp[-2].m_sValue, &yyvsp[0] );
		;}
    break;

  case 218:

    {
			pParser->UpdateAttr ( yyvsp[-2].m_sValue, &yyvsp[0], SPH_ATTR_FLOAT);
		;}
    break;

  case 219:

    {
			pParser->UpdateMVAAttr ( yyvsp[-4].m_sValue, yyvsp[-1] );
		;}
    break;

  case 220:

    {
			SqlNode_t tNoValues;
			pParser->UpdateMVAAttr ( yyvsp[-3].m_sValue, tNoValues );
		;}
    break;

  case 221:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_VARIABLES;
		;}
    break;

  case 222:

    {
			pParser->m_pStmt->m_eStmt = STMT_DUMMY;
		;}
    break;

  case 223:

    {
			pParser->m_pStmt->m_eStmt = STMT_DUMMY;
		;}
    break;

  case 231:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_CREATE_FUNC;
			tStmt.m_sUdfName = yyvsp[-4].m_sValue;
			tStmt.m_sUdfLib = yyvsp[0].m_sValue;
			tStmt.m_eUdfType = (ESphAttr) yyvsp[-2].m_iValue;
		;}
    break;

  case 232:

    { yyval.m_iValue = SPH_ATTR_INTEGER; ;}
    break;

  case 233:

    { yyval.m_iValue = SPH_ATTR_FLOAT; ;}
    break;

  case 234:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_DROP_FUNC;
			tStmt.m_sUdfName = yyvsp[0].m_sValue;
		;}
    break;

  case 235:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ATTACH_INDEX;
			tStmt.m_sIndex = yyvsp[-3].m_sValue;
			tStmt.m_sSetName = yyvsp[0].m_sValue;
		;}
    break;

  case 236:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_RTINDEX;
			tStmt.m_sIndex = yyvsp[0].m_sValue;
		;}
    break;

  case 237:

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

