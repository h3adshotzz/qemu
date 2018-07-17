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
#define YYLSP_NEEDED 1



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DT_V1 = 258,
     DT_PLUGIN = 259,
     DT_MEMRESERVE = 260,
     DT_LSHIFT = 261,
     DT_RSHIFT = 262,
     DT_LE = 263,
     DT_GE = 264,
     DT_EQ = 265,
     DT_NE = 266,
     DT_AND = 267,
     DT_OR = 268,
     DT_BITS = 269,
     DT_DEL_PROP = 270,
     DT_DEL_NODE = 271,
     DT_PROPNODENAME = 272,
     DT_LITERAL = 273,
     DT_CHAR_LITERAL = 274,
     DT_BYTE = 275,
     DT_STRING = 276,
     DT_LABEL = 277,
     DT_REF = 278,
     DT_INCBIN = 279
   };
#endif
/* Tokens.  */
#define DT_V1 258
#define DT_PLUGIN 259
#define DT_MEMRESERVE 260
#define DT_LSHIFT 261
#define DT_RSHIFT 262
#define DT_LE 263
#define DT_GE 264
#define DT_EQ 265
#define DT_NE 266
#define DT_AND 267
#define DT_OR 268
#define DT_BITS 269
#define DT_DEL_PROP 270
#define DT_DEL_NODE 271
#define DT_PROPNODENAME 272
#define DT_LITERAL 273
#define DT_CHAR_LITERAL 274
#define DT_BYTE 275
#define DT_STRING 276
#define DT_LABEL 277
#define DT_REF 278
#define DT_INCBIN 279




/* Copy the first part of user declarations.  */
#line 20 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"

#include <stdio.h>
#include <inttypes.h>

#include "dtc.h"
#include "srcpos.h"

extern int yylex(void);
extern void yyerror(char const *s);
#define ERROR(loc, ...) \
	do { \
		srcpos_error((loc), "Error", __VA_ARGS__); \
		treesource_error = true; \
	} while (0)

extern struct dt_info *parser_output;
extern bool treesource_error;


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
typedef union YYSTYPE
#line 39 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
{
	char *propnodename;
	char *labelref;
	uint8_t byte;
	struct data data;

	struct {
		struct data	data;
		int		bits;
	} array;

	struct property *prop;
	struct property *proplist;
	struct node *node;
	struct node *nodelist;
	struct reserve_info *re;
	uint64_t integer;
	unsigned int flags;
}
/* Line 193 of yacc.c.  */
#line 183 "dtc-parser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 208 "dtc-parser.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   140

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNRULES -- Number of states.  */
#define YYNSTATES  151

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   279

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,     2,     2,    45,    41,     2,
      33,    35,    44,    42,    34,    43,     2,    26,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    38,    25,
      36,    29,    30,    37,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    31,     2,    32,    40,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    27,    39,    28,    46,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    10,    15,    17,    20,    21,    24,
      29,    32,    35,    39,    42,    47,    51,    56,    62,    63,
      66,    71,    74,    78,    81,    84,    88,    93,    96,   106,
     112,   115,   116,   119,   122,   126,   128,   131,   134,   137,
     139,   141,   145,   147,   149,   155,   157,   161,   163,   167,
     169,   173,   175,   179,   181,   185,   187,   191,   195,   197,
     201,   205,   209,   213,   217,   221,   223,   227,   231,   233,
     237,   241,   245,   247,   249,   252,   255,   258,   259,   262,
     265,   266,   269,   272,   275,   279
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,    51,    52,    54,    -1,     3,    25,    -1,
       3,    25,     4,    25,    -1,    50,    -1,    50,    51,    -1,
      -1,    53,    52,    -1,     5,    61,    61,    25,    -1,    22,
      53,    -1,    26,    55,    -1,    54,    26,    55,    -1,    23,
      55,    -1,    54,    22,    23,    55,    -1,    54,    23,    55,
      -1,    54,    16,    23,    25,    -1,    27,    56,    76,    28,
      25,    -1,    -1,    56,    57,    -1,    17,    29,    58,    25,
      -1,    17,    25,    -1,    15,    17,    25,    -1,    22,    57,
      -1,    59,    21,    -1,    59,    60,    30,    -1,    59,    31,
      75,    32,    -1,    59,    23,    -1,    59,    24,    33,    21,
      34,    61,    34,    61,    35,    -1,    59,    24,    33,    21,
      35,    -1,    58,    22,    -1,    -1,    58,    34,    -1,    59,
      22,    -1,    14,    18,    36,    -1,    36,    -1,    60,    61,
      -1,    60,    23,    -1,    60,    22,    -1,    18,    -1,    19,
      -1,    33,    62,    35,    -1,    63,    -1,    64,    -1,    64,
      37,    62,    38,    63,    -1,    65,    -1,    64,    13,    65,
      -1,    66,    -1,    65,    12,    66,    -1,    67,    -1,    66,
      39,    67,    -1,    68,    -1,    67,    40,    68,    -1,    69,
      -1,    68,    41,    69,    -1,    70,    -1,    69,    10,    70,
      -1,    69,    11,    70,    -1,    71,    -1,    70,    36,    71,
      -1,    70,    30,    71,    -1,    70,     8,    71,    -1,    70,
       9,    71,    -1,    71,     6,    72,    -1,    71,     7,    72,
      -1,    72,    -1,    72,    42,    73,    -1,    72,    43,    73,
      -1,    73,    -1,    73,    44,    74,    -1,    73,    26,    74,
      -1,    73,    45,    74,    -1,    74,    -1,    61,    -1,    43,
      74,    -1,    46,    74,    -1,    47,    74,    -1,    -1,    75,
      20,    -1,    75,    22,    -1,    -1,    77,    76,    -1,    77,
      57,    -1,    17,    55,    -1,    16,    17,    25,    -1,    22,
      77,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   109,   109,   117,   121,   128,   129,   139,   142,   149,
     153,   161,   165,   169,   180,   191,   210,   225,   233,   236,
     243,   247,   251,   255,   263,   267,   271,   275,   279,   295,
     305,   313,   316,   320,   327,   343,   348,   367,   381,   388,
     389,   390,   397,   401,   402,   406,   407,   411,   412,   416,
     417,   421,   422,   426,   427,   431,   432,   433,   437,   438,
     439,   440,   441,   445,   446,   447,   451,   452,   453,   457,
     458,   467,   476,   480,   481,   482,   483,   488,   491,   495,
     503,   506,   510,   518,   522,   526
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DT_V1", "DT_PLUGIN", "DT_MEMRESERVE",
  "DT_LSHIFT", "DT_RSHIFT", "DT_LE", "DT_GE", "DT_EQ", "DT_NE", "DT_AND",
  "DT_OR", "DT_BITS", "DT_DEL_PROP", "DT_DEL_NODE", "DT_PROPNODENAME",
  "DT_LITERAL", "DT_CHAR_LITERAL", "DT_BYTE", "DT_STRING", "DT_LABEL",
  "DT_REF", "DT_INCBIN", "';'", "'/'", "'{'", "'}'", "'='", "'>'", "'['",
  "']'", "'('", "','", "')'", "'<'", "'?'", "':'", "'|'", "'^'", "'&'",
  "'+'", "'-'", "'*'", "'%'", "'~'", "'!'", "$accept", "sourcefile",
  "header", "headers", "memreserves", "memreserve", "devicetree",
  "nodedef", "proplist", "propdef", "propdata", "propdataprefix",
  "arrayprefix", "integer_prim", "integer_expr", "integer_trinary",
  "integer_or", "integer_and", "integer_bitor", "integer_bitxor",
  "integer_bitand", "integer_eq", "integer_rela", "integer_shift",
  "integer_add", "integer_mul", "integer_unary", "bytestring", "subnodes",
  "subnode", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,    59,    47,   123,   125,    61,
      62,    91,    93,    40,    44,    41,    60,    63,    58,   124,
      94,    38,    43,    45,    42,    37,   126,    33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    52,    52,    53,
      53,    54,    54,    54,    54,    54,    54,    55,    56,    56,
      57,    57,    57,    57,    58,    58,    58,    58,    58,    58,
      58,    59,    59,    59,    60,    60,    60,    60,    60,    61,
      61,    61,    62,    63,    63,    64,    64,    65,    65,    66,
      66,    67,    67,    68,    68,    69,    69,    69,    70,    70,
      70,    70,    70,    71,    71,    71,    72,    72,    72,    73,
      73,    73,    73,    74,    74,    74,    74,    75,    75,    75,
      76,    76,    76,    77,    77,    77
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     4,     1,     2,     0,     2,     4,
       2,     2,     3,     2,     4,     3,     4,     5,     0,     2,
       4,     2,     3,     2,     2,     3,     4,     2,     9,     5,
       2,     0,     2,     2,     3,     1,     2,     2,     2,     1,
       1,     3,     1,     1,     5,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     1,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     5,     7,     3,     1,     6,     0,     0,
       0,     7,     0,    39,    40,     0,     0,    10,     0,     0,
       2,     8,     4,     0,     0,     0,    73,     0,    42,    43,
      45,    47,    49,    51,    53,    55,    58,    65,    68,    72,
       0,    18,    13,    11,     0,     0,     0,     0,    74,    75,
      76,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    80,     0,     0,    15,    12,    46,     0,    48,
      50,    52,    54,    56,    57,    61,    62,    60,    59,    63,
      64,    66,    67,    70,    69,    71,     0,     0,     0,     0,
      19,     0,    80,    16,    14,     0,     0,     0,    21,    31,
      83,    23,    85,     0,    82,    81,    44,    22,    84,     0,
       0,    17,    30,    20,    32,     0,    24,    33,    27,     0,
      77,    35,     0,     0,     0,     0,    38,    37,    25,    36,
      34,     0,    78,    79,    26,     0,    29,     0,     0,     0,
      28
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    10,    11,    20,    42,    72,   100,
     119,   120,   132,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,   135,   101,   102
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -81
static const yytype_int8 yypact[] =
{
      11,    17,    23,    11,    10,    56,   -81,   -81,    21,    10,
      -5,    10,    39,   -81,   -81,   -13,    21,   -81,    44,    44,
      43,   -81,   -81,   -13,   -13,   -13,   -81,    38,   -81,    -2,
      67,    53,    55,    57,    41,     1,    75,    42,   -19,   -81,
      58,   -81,   -81,   -81,    73,    74,    44,    44,   -81,   -81,
     -81,   -81,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -81,    46,    76,    44,   -81,   -81,    67,    61,    53,
      55,    57,    41,     1,     1,    75,    75,    75,    75,    42,
      42,   -19,   -19,   -81,   -81,   -81,    83,    85,    45,    46,
     -81,    77,    46,   -81,   -81,   -13,    78,    79,   -81,   -81,
     -81,   -81,   -81,    81,   -81,   -81,   -81,   -81,   -81,    16,
      22,   -81,   -81,   -81,   -81,    89,   -81,   -81,   -81,    80,
     -81,   -81,    -6,    72,    88,    35,   -81,   -81,   -81,   -81,
     -81,    52,   -81,   -81,   -81,    21,   -81,    82,    21,    84,
     -81
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -81,   -81,   -81,   107,   100,   103,   -81,   -18,   -81,   -80,
     -81,   -81,   -81,    -8,    62,     9,   -81,    65,    64,    66,
      69,    63,    30,    15,    26,    27,   -21,   -81,    20,    24
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      16,    43,    48,    49,    50,    13,    14,    68,    40,    60,
      61,    52,    13,    14,     1,     8,   136,   137,    18,   111,
      15,    19,   114,     6,   138,    69,    70,    15,    75,    76,
      23,    62,     9,    24,    25,    53,   125,    63,   122,    13,
      14,   123,     5,   126,   127,   128,   129,    93,    94,    95,
     124,    58,    59,   130,    15,   142,   104,   143,   131,    44,
      12,    96,    97,    98,    22,    45,    46,   144,    99,    47,
     108,    41,    41,    51,   109,    85,    86,    87,    88,    54,
     110,    64,    65,    71,    66,    67,   145,   146,    83,    84,
      89,    90,    55,    91,    92,    56,    73,    74,    57,   105,
     106,   103,   107,   117,   118,   113,   121,   133,   140,   141,
       7,    21,    17,   134,   116,    78,   148,    77,    79,   150,
      82,    80,   115,   112,   139,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   147,     0,     0,
     149
};

static const yytype_int16 yycheck[] =
{
       8,    19,    23,    24,    25,    18,    19,    26,    16,     8,
       9,    13,    18,    19,     3,     5,    22,    23,    23,    99,
      33,    26,   102,     0,    30,    44,    45,    33,    46,    47,
      43,    30,    22,    46,    47,    37,    14,    36,    22,    18,
      19,    25,    25,    21,    22,    23,    24,    68,    69,    70,
      34,    10,    11,    31,    33,    20,    74,    22,    36,    16,
       4,    15,    16,    17,    25,    22,    23,    32,    22,    26,
      25,    27,    27,    35,    29,    60,    61,    62,    63,    12,
      98,     6,     7,    25,    42,    43,    34,    35,    58,    59,
      64,    65,    39,    66,    67,    40,    23,    23,    41,    38,
      17,    25,    17,    25,    25,    28,    25,    18,    36,    21,
       3,    11,     9,    33,   105,    53,    34,    52,    54,    35,
      57,    55,   102,    99,   132,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,
     148
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    49,    50,    51,    25,     0,    51,     5,    22,
      52,    53,     4,    18,    19,    33,    61,    53,    23,    26,
      54,    52,    25,    43,    46,    47,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      61,    27,    55,    55,    16,    22,    23,    26,    74,    74,
      74,    35,    13,    37,    12,    39,    40,    41,    10,    11,
       8,     9,    30,    36,     6,     7,    42,    43,    26,    44,
      45,    25,    56,    23,    23,    55,    55,    65,    62,    66,
      67,    68,    69,    70,    70,    71,    71,    71,    71,    72,
      72,    73,    73,    74,    74,    74,    15,    16,    17,    22,
      57,    76,    77,    25,    55,    38,    17,    17,    25,    29,
      55,    57,    77,    28,    57,    76,    63,    25,    25,    58,
      59,    25,    22,    25,    34,    14,    21,    22,    23,    24,
      31,    36,    60,    18,    33,    75,    22,    23,    30,    61,
      36,    21,    20,    22,    32,    34,    35,    61,    34,    61,
      35
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;



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

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

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
  yylsp = yyls;
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 110 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			parser_output = build_dt_info((yyvsp[(1) - (3)].flags), (yyvsp[(2) - (3)].re), (yyvsp[(3) - (3)].node),
			                              guess_boot_cpuid((yyvsp[(3) - (3)].node)));
		;}
    break;

  case 3:
#line 118 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.flags) = DTSF_V1;
		;}
    break;

  case 4:
#line 122 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.flags) = DTSF_V1 | DTSF_PLUGIN;
		;}
    break;

  case 6:
#line 130 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			if ((yyvsp[(2) - (2)].flags) != (yyvsp[(1) - (2)].flags))
				ERROR(&(yylsp[(2) - (2)]), "Header flags don't match earlier ones");
			(yyval.flags) = (yyvsp[(1) - (2)].flags);
		;}
    break;

  case 7:
#line 139 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.re) = NULL;
		;}
    break;

  case 8:
#line 143 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.re) = chain_reserve_entry((yyvsp[(1) - (2)].re), (yyvsp[(2) - (2)].re));
		;}
    break;

  case 9:
#line 150 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.re) = build_reserve_entry((yyvsp[(2) - (4)].integer), (yyvsp[(3) - (4)].integer));
		;}
    break;

  case 10:
#line 154 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			add_label(&(yyvsp[(2) - (2)].re)->labels, (yyvsp[(1) - (2)].labelref));
			(yyval.re) = (yyvsp[(2) - (2)].re);
		;}
    break;

  case 11:
#line 162 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.node) = name_node((yyvsp[(2) - (2)].node), "");
		;}
    break;

  case 12:
#line 166 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.node) = merge_nodes((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		;}
    break;

  case 13:
#line 170 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			/*
			 * We rely on the rule being always:
			 *   versioninfo plugindecl memreserves devicetree
			 * so $-1 is what we want (plugindecl)
			 */
			if (!((yyvsp[(-1) - (2)].flags) & DTSF_PLUGIN))
				ERROR(&(yylsp[(2) - (2)]), "Label or path %s not found", (yyvsp[(1) - (2)].labelref));
			(yyval.node) = add_orphan_node(name_node(build_node(NULL, NULL), ""), (yyvsp[(2) - (2)].node), (yyvsp[(1) - (2)].labelref));
		;}
    break;

  case 14:
#line 181 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			struct node *target = get_node_by_ref((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].labelref));

			if (target) {
				add_label(&target->labels, (yyvsp[(2) - (4)].labelref));
				merge_nodes(target, (yyvsp[(4) - (4)].node));
			} else
				ERROR(&(yylsp[(3) - (4)]), "Label or path %s not found", (yyvsp[(3) - (4)].labelref));
			(yyval.node) = (yyvsp[(1) - (4)].node);
		;}
    break;

  case 15:
#line 192 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			struct node *target = get_node_by_ref((yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].labelref));

			if (target) {
				merge_nodes(target, (yyvsp[(3) - (3)].node));
			} else {
				/*
				 * We rely on the rule being always:
				 *   versioninfo plugindecl memreserves devicetree
				 * so $-1 is what we want (plugindecl)
				 */
				if ((yyvsp[(-1) - (3)].flags) & DTSF_PLUGIN)
					add_orphan_node((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), (yyvsp[(2) - (3)].labelref));
				else
					ERROR(&(yylsp[(2) - (3)]), "Label or path %s not found", (yyvsp[(2) - (3)].labelref));
			}
			(yyval.node) = (yyvsp[(1) - (3)].node);
		;}
    break;

  case 16:
#line 211 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			struct node *target = get_node_by_ref((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].labelref));

			if (target)
				delete_node(target);
			else
				ERROR(&(yylsp[(3) - (4)]), "Label or path %s not found", (yyvsp[(3) - (4)].labelref));


			(yyval.node) = (yyvsp[(1) - (4)].node);
		;}
    break;

  case 17:
#line 226 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.node) = build_node((yyvsp[(2) - (5)].proplist), (yyvsp[(3) - (5)].nodelist));
		;}
    break;

  case 18:
#line 233 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.proplist) = NULL;
		;}
    break;

  case 19:
#line 237 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.proplist) = chain_property((yyvsp[(2) - (2)].prop), (yyvsp[(1) - (2)].proplist));
		;}
    break;

  case 20:
#line 244 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.prop) = build_property((yyvsp[(1) - (4)].propnodename), (yyvsp[(3) - (4)].data));
		;}
    break;

  case 21:
#line 248 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.prop) = build_property((yyvsp[(1) - (2)].propnodename), empty_data);
		;}
    break;

  case 22:
#line 252 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.prop) = build_property_delete((yyvsp[(2) - (3)].propnodename));
		;}
    break;

  case 23:
#line 256 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			add_label(&(yyvsp[(2) - (2)].prop)->labels, (yyvsp[(1) - (2)].labelref));
			(yyval.prop) = (yyvsp[(2) - (2)].prop);
		;}
    break;

  case 24:
#line 264 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.data) = data_merge((yyvsp[(1) - (2)].data), (yyvsp[(2) - (2)].data));
		;}
    break;

  case 25:
#line 268 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.data) = data_merge((yyvsp[(1) - (3)].data), (yyvsp[(2) - (3)].array).data);
		;}
    break;

  case 26:
#line 272 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.data) = data_merge((yyvsp[(1) - (4)].data), (yyvsp[(3) - (4)].data));
		;}
    break;

  case 27:
#line 276 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.data) = data_add_marker((yyvsp[(1) - (2)].data), REF_PATH, (yyvsp[(2) - (2)].labelref));
		;}
    break;

  case 28:
#line 280 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			FILE *f = srcfile_relative_open((yyvsp[(4) - (9)].data).val, NULL);
			struct data d;

			if ((yyvsp[(6) - (9)].integer) != 0)
				if (fseek(f, (yyvsp[(6) - (9)].integer), SEEK_SET) != 0)
					die("Couldn't seek to offset %llu in \"%s\": %s",
					    (unsigned long long)(yyvsp[(6) - (9)].integer), (yyvsp[(4) - (9)].data).val,
					    strerror(errno));

			d = data_copy_file(f, (yyvsp[(8) - (9)].integer));

			(yyval.data) = data_merge((yyvsp[(1) - (9)].data), d);
			fclose(f);
		;}
    break;

  case 29:
#line 296 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			FILE *f = srcfile_relative_open((yyvsp[(4) - (5)].data).val, NULL);
			struct data d = empty_data;

			d = data_copy_file(f, -1);

			(yyval.data) = data_merge((yyvsp[(1) - (5)].data), d);
			fclose(f);
		;}
    break;

  case 30:
#line 306 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.data) = data_add_marker((yyvsp[(1) - (2)].data), LABEL, (yyvsp[(2) - (2)].labelref));
		;}
    break;

  case 31:
#line 313 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.data) = empty_data;
		;}
    break;

  case 32:
#line 317 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.data) = (yyvsp[(1) - (2)].data);
		;}
    break;

  case 33:
#line 321 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.data) = data_add_marker((yyvsp[(1) - (2)].data), LABEL, (yyvsp[(2) - (2)].labelref));
		;}
    break;

  case 34:
#line 328 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			unsigned long long bits;

			bits = (yyvsp[(2) - (3)].integer);

			if ((bits !=  8) && (bits != 16) &&
			    (bits != 32) && (bits != 64)) {
				ERROR(&(yylsp[(2) - (3)]), "Array elements must be"
				      " 8, 16, 32 or 64-bits");
				bits = 32;
			}

			(yyval.array).data = empty_data;
			(yyval.array).bits = bits;
		;}
    break;

  case 35:
#line 344 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.array).data = empty_data;
			(yyval.array).bits = 32;
		;}
    break;

  case 36:
#line 349 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			if ((yyvsp[(1) - (2)].array).bits < 64) {
				uint64_t mask = (1ULL << (yyvsp[(1) - (2)].array).bits) - 1;
				/*
				 * Bits above mask must either be all zero
				 * (positive within range of mask) or all one
				 * (negative and sign-extended). The second
				 * condition is true if when we set all bits
				 * within the mask to one (i.e. | in the
				 * mask), all bits are one.
				 */
				if (((yyvsp[(2) - (2)].integer) > mask) && (((yyvsp[(2) - (2)].integer) | mask) != -1ULL))
					ERROR(&(yylsp[(2) - (2)]), "Value out of range for"
					      " %d-bit array element", (yyvsp[(1) - (2)].array).bits);
			}

			(yyval.array).data = data_append_integer((yyvsp[(1) - (2)].array).data, (yyvsp[(2) - (2)].integer), (yyvsp[(1) - (2)].array).bits);
		;}
    break;

  case 37:
#line 368 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			uint64_t val = ~0ULL >> (64 - (yyvsp[(1) - (2)].array).bits);

			if ((yyvsp[(1) - (2)].array).bits == 32)
				(yyvsp[(1) - (2)].array).data = data_add_marker((yyvsp[(1) - (2)].array).data,
							  REF_PHANDLE,
							  (yyvsp[(2) - (2)].labelref));
			else
				ERROR(&(yylsp[(2) - (2)]), "References are only allowed in "
					    "arrays with 32-bit elements.");

			(yyval.array).data = data_append_integer((yyvsp[(1) - (2)].array).data, val, (yyvsp[(1) - (2)].array).bits);
		;}
    break;

  case 38:
#line 382 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.array).data = data_add_marker((yyvsp[(1) - (2)].array).data, LABEL, (yyvsp[(2) - (2)].labelref));
		;}
    break;

  case 41:
#line 391 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.integer) = (yyvsp[(2) - (3)].integer);
		;}
    break;

  case 44:
#line 402 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    { (yyval.integer) = (yyvsp[(1) - (5)].integer) ? (yyvsp[(3) - (5)].integer) : (yyvsp[(5) - (5)].integer); ;}
    break;

  case 46:
#line 407 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) || (yyvsp[(3) - (3)].integer); ;}
    break;

  case 48:
#line 412 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) && (yyvsp[(3) - (3)].integer); ;}
    break;

  case 50:
#line 417 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) | (yyvsp[(3) - (3)].integer); ;}
    break;

  case 52:
#line 422 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) ^ (yyvsp[(3) - (3)].integer); ;}
    break;

  case 54:
#line 427 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) & (yyvsp[(3) - (3)].integer); ;}
    break;

  case 56:
#line 432 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) == (yyvsp[(3) - (3)].integer); ;}
    break;

  case 57:
#line 433 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) != (yyvsp[(3) - (3)].integer); ;}
    break;

  case 59:
#line 438 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) < (yyvsp[(3) - (3)].integer); ;}
    break;

  case 60:
#line 439 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) > (yyvsp[(3) - (3)].integer); ;}
    break;

  case 61:
#line 440 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) <= (yyvsp[(3) - (3)].integer); ;}
    break;

  case 62:
#line 441 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) >= (yyvsp[(3) - (3)].integer); ;}
    break;

  case 63:
#line 445 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) << (yyvsp[(3) - (3)].integer); ;}
    break;

  case 64:
#line 446 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) >> (yyvsp[(3) - (3)].integer); ;}
    break;

  case 66:
#line 451 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) + (yyvsp[(3) - (3)].integer); ;}
    break;

  case 67:
#line 452 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) - (yyvsp[(3) - (3)].integer); ;}
    break;

  case 69:
#line 457 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) * (yyvsp[(3) - (3)].integer); ;}
    break;

  case 70:
#line 459 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			if ((yyvsp[(3) - (3)].integer) != 0) {
				(yyval.integer) = (yyvsp[(1) - (3)].integer) / (yyvsp[(3) - (3)].integer);
			} else {
				ERROR(&(yyloc), "Division by zero");
				(yyval.integer) = 0;
			}
		;}
    break;

  case 71:
#line 468 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			if ((yyvsp[(3) - (3)].integer) != 0) {
				(yyval.integer) = (yyvsp[(1) - (3)].integer) % (yyvsp[(3) - (3)].integer);
			} else {
				ERROR(&(yyloc), "Division by zero");
				(yyval.integer) = 0;
			}
		;}
    break;

  case 74:
#line 481 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    { (yyval.integer) = -(yyvsp[(2) - (2)].integer); ;}
    break;

  case 75:
#line 482 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    { (yyval.integer) = ~(yyvsp[(2) - (2)].integer); ;}
    break;

  case 76:
#line 483 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    { (yyval.integer) = !(yyvsp[(2) - (2)].integer); ;}
    break;

  case 77:
#line 488 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.data) = empty_data;
		;}
    break;

  case 78:
#line 492 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.data) = data_append_byte((yyvsp[(1) - (2)].data), (yyvsp[(2) - (2)].byte));
		;}
    break;

  case 79:
#line 496 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.data) = data_add_marker((yyvsp[(1) - (2)].data), LABEL, (yyvsp[(2) - (2)].labelref));
		;}
    break;

  case 80:
#line 503 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.nodelist) = NULL;
		;}
    break;

  case 81:
#line 507 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.nodelist) = chain_node((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].nodelist));
		;}
    break;

  case 82:
#line 511 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			ERROR(&(yylsp[(2) - (2)]), "Properties must precede subnodes");
			YYERROR;
		;}
    break;

  case 83:
#line 519 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.node) = name_node((yyvsp[(2) - (2)].node), (yyvsp[(1) - (2)].propnodename));
		;}
    break;

  case 84:
#line 523 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			(yyval.node) = name_node(build_node_delete(), (yyvsp[(2) - (3)].propnodename));
		;}
    break;

  case 85:
#line 527 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"
    {
			add_label(&(yyvsp[(2) - (2)].node)->labels, (yyvsp[(1) - (2)].labelref));
			(yyval.node) = (yyvsp[(2) - (2)].node);
		;}
    break;


/* Line 1267 of yacc.c.  */
#line 2112 "dtc-parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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

  yyerror_range[0] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[0] = yylsp[1-yylen];
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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


#line 533 "/Users/h3adsh0tzz/Desktop/ViOS/qemu/dtc/dtc-parser.y"


void yyerror(char const *s)
{
	ERROR(&yylloc, "%s", s);
}

