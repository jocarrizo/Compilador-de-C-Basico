
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "../src/TP4.y"

#include <stdio.h>
#include <string.h>
#include "funciones.c"

FILE* yyin;
int yylineno;

int yylex();
int yywrap(){
	return(1);
}
void yyerror (char const *s) {
   // printf ("%s\n", s); 
   // Borramos el mensaje de "syntax error".
}

// VARIABLES GLOBALES AUXILIARES
char* descripcionSentencia;
nodoVariable* listaIDS = NULL;
nodoParametro* parametros = NULL;
int cantidad_parametros = 0;

// TABLA DE SIMBOLOS
nodoErrorLexico*     lista_errores_lexicos = NULL;
nodoErrorSemantico*  lista_errores_semanticos = NULL;
nodoVariable*        lista_Variables = NULL;
nodoSentencia*       lista_sentencias = NULL;
nodoFuncion*         lista_Funciones = NULL;



/* Line 189 of yacc.c  */
#line 106 "TP4.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUM_ENTERO = 258,
     NUM_REAL = 259,
     CHAR = 260,
     ERROR_LEXICO = 261,
     ID = 262,
     LIT_CADENA = 263,
     TIPO_DATO = 264,
     IF = 265,
     DEFAULT = 266,
     ELSE = 267,
     WHILE = 268,
     DO = 269,
     SWITCH = 270,
     BREAK = 271,
     CASE = 272,
     FOR = 273,
     GOTO = 274,
     CONTINUE = 275,
     RETURN = 276,
     IGUALDAD = 277,
     ASIGNACION_INCREMENTO = 278,
     AND = 279,
     OR = 280,
     DISTINTO = 281,
     MAYOR_IGUAL = 282,
     MENOR_IGUAL = 283,
     INCREMENTO = 284,
     DECREMENTO = 285
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 33 "../src/TP4.y"

   struct mytruct{
        int tipo, entero;
        float real;
        char* cadena;
        char caracter;
   } mystruct;



/* Line 214 of yacc.c  */
#line 183 "TP4.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 195 "TP4.tab.c"

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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   347

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNRULES -- Number of states.  */
#define YYNSTATES  172

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    44,     2,     2,
      36,    37,    33,    31,    38,    32,     2,    34,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    40,    45,
      43,    41,    42,    39,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    35,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,    47,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    19,
      21,    25,    27,    33,    35,    37,    39,    43,    45,    49,
      51,    55,    59,    61,    65,    67,    69,    71,    73,    75,
      79,    83,    85,    89,    93,    97,    99,   102,   105,   108,
     111,   113,   115,   117,   119,   121,   125,   127,   129,   131,
     133,   135,   137,   139,   141,   145,   148,   150,   153,   157,
     161,   166,   172,   180,   186,   192,   200,   210,   215,   219,
     223,   226,   229,   233,   237,   239,   242,   248,   249,   251,
     255,   259,   266,   273,   275,   279,   281,   285,   286,   288,
     292,   295,   297
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,    -1,    49,    50,    -1,     6,    -1,    64,
      -1,     1,    -1,    52,    -1,    51,    38,    52,    -1,    53,
      -1,     7,    54,    55,    -1,    55,    -1,    55,    39,    51,
      40,    53,    -1,    41,    -1,    23,    -1,    56,    -1,    55,
      25,    56,    -1,    57,    -1,    56,    24,    57,    -1,    58,
      -1,    57,    22,    58,    -1,    57,    26,    58,    -1,    60,
      -1,    58,    59,    60,    -1,    42,    -1,    43,    -1,    27,
      -1,    28,    -1,    61,    -1,    60,    31,    61,    -1,    60,
      32,    61,    -1,    62,    -1,    61,    34,    62,    -1,    61,
      33,    62,    -1,    61,    44,    62,    -1,    63,    -1,    29,
      62,    -1,    30,    62,    -1,    62,    29,    -1,    62,    30,
      -1,     7,    -1,     3,    -1,     4,    -1,     8,    -1,     5,
      -1,    36,    51,    37,    -1,    74,    -1,    72,    -1,    65,
      -1,    66,    -1,    67,    -1,    68,    -1,    69,    -1,    70,
      -1,    64,    45,    64,    -1,    51,    45,    -1,    45,    -1,
      46,    47,    -1,    46,    79,    47,    -1,    46,    71,    47,
      -1,    46,    79,    71,    47,    -1,    10,    36,    53,    37,
      64,    -1,    10,    36,    53,    37,    64,    12,    64,    -1,
      15,    36,    53,    37,    64,    -1,    13,    36,    53,    37,
      64,    -1,    14,    64,    13,    36,    53,    37,    45,    -1,
      18,    36,    74,    45,    53,    45,    62,    37,    64,    -1,
      17,    53,    40,    64,    -1,    11,    40,    64,    -1,     7,
      40,    64,    -1,    20,    45,    -1,    16,    45,    -1,    21,
      51,    45,    -1,    19,     7,    45,    -1,    64,    -1,    71,
      64,    -1,     7,    36,    73,    37,    45,    -1,    -1,    63,
      -1,    63,    38,    73,    -1,     9,    75,    45,    -1,     9,
       7,    36,    77,    37,    45,    -1,     9,     7,    36,    77,
      37,    66,    -1,    76,    -1,    76,    38,    75,    -1,     7,
      -1,     7,    41,    60,    -1,    -1,    78,    -1,    78,    38,
      77,    -1,     9,     7,    -1,    74,    -1,    74,    79,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    56,    56,    57,    60,    61,    62,    67,    68,    71,
      72,    75,    76,    79,    79,    82,    83,    86,    87,    90,
      91,    92,    95,    96,   121,   121,   121,   121,   124,   125,
     126,   129,   130,   131,   132,   135,   136,   137,   138,   139,
     142,   143,   144,   145,   146,   147,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   163,   164,   167,   168,   169,
     170,   173,   174,   175,   178,   179,   180,   183,   184,   185,
     188,   189,   190,   191,   194,   195,   198,   204,   205,   206,
     211,   217,   218,   221,   222,   225,   231,   239,   240,   241,
     244,   247,   248
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM_ENTERO", "NUM_REAL", "CHAR",
  "ERROR_LEXICO", "ID", "LIT_CADENA", "TIPO_DATO", "IF", "DEFAULT", "ELSE",
  "WHILE", "DO", "SWITCH", "BREAK", "CASE", "FOR", "GOTO", "CONTINUE",
  "RETURN", "IGUALDAD", "ASIGNACION_INCREMENTO", "AND", "OR", "DISTINTO",
  "MAYOR_IGUAL", "MENOR_IGUAL", "INCREMENTO", "DECREMENTO", "'+'", "'-'",
  "'*'", "'/'", "'^'", "'('", "')'", "','", "'?'", "':'", "'='", "'>'",
  "'<'", "'%'", "';'", "'{'", "'}'", "$accept", "input", "line",
  "expresion", "expAsignacion", "expCondicional", "opAsignacion", "expOr",
  "expAnd", "expIgualdad", "expRelacional", "opRelacional", "expAditiva",
  "expMultiplicativa", "expUnaria", "expPrimaria", "sentencia",
  "sentencia_expresion", "sentencia_compuesta", "sentencia_seleccion",
  "sentencia_iteracion", "sentencia_etiquetada", "sentencia_de_salto",
  "lista_de_sentencias", "sentencia_invocacion", "lista_expPrimaria",
  "declaracion", "listaIdentificadores", "identificador",
  "listaParametros", "parametro", "lista_de_declaraciones", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,    43,    45,    42,    47,    94,    40,    41,    44,    63,
      58,    61,    62,    60,    37,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    49,    50,    50,    50,    51,    51,    52,
      52,    53,    53,    54,    54,    55,    55,    56,    56,    57,
      57,    57,    58,    58,    59,    59,    59,    59,    60,    60,
      60,    61,    61,    61,    61,    62,    62,    62,    62,    62,
      63,    63,    63,    63,    63,    63,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    65,    65,    66,    66,    66,
      66,    67,    67,    67,    68,    68,    68,    69,    69,    69,
      70,    70,    70,    70,    71,    71,    72,    73,    73,    73,
      74,    74,    74,    75,    75,    76,    76,    77,    77,    77,
      78,    79,    79
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     3,     1,
       3,     1,     5,     1,     1,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     1,     1,     1,     1,     1,     3,
       3,     1,     3,     3,     3,     1,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     1,     2,     3,     3,
       4,     5,     7,     5,     5,     7,     9,     4,     3,     3,
       2,     2,     3,     3,     1,     2,     5,     0,     1,     3,
       3,     6,     6,     1,     3,     1,     3,     0,     1,     3,
       2,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     6,    41,    42,    44,     4,    40,    43,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    56,     0,     3,     0,     7,
       9,    11,    15,    17,    19,    22,    28,    31,    35,     5,
      48,    49,    50,    51,    52,    53,    47,    46,    14,    77,
       0,    13,     0,    85,     0,    83,     0,     0,     0,     0,
       0,    71,    40,     0,     0,     0,    70,    40,     0,    36,
      37,     0,    57,    74,     0,    46,     0,     0,    55,     0,
       0,     0,     0,     0,    26,    27,    24,    25,     0,     0,
       0,     0,     0,     0,    38,    39,     0,    78,     0,    69,
      10,    87,     0,    80,     0,     0,    68,     0,     0,     0,
       0,     0,    73,    72,    45,    59,    75,    91,    92,    58,
       0,     8,    16,     0,    18,    20,    21,    23,    29,    30,
      33,    32,    34,    54,    77,     0,     0,     0,    88,    86,
      85,    84,     0,     0,     0,     0,    67,     0,    60,     0,
      79,    76,    90,     0,    87,    61,    64,     0,    63,     0,
      12,    81,    82,    89,     0,     0,     0,    62,    65,     0,
       0,    66
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    27,    28,    29,    30,    52,    31,    32,    33,
      34,    88,    35,    36,    37,    38,    73,    40,    41,    42,
      43,    44,    45,    74,    46,    98,    47,    54,    55,   137,
     138,   118
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -58
static const yytype_int16 yypact[] =
{
     -58,   107,   -58,   -58,   -58,   -58,   -58,   -58,    44,   -58,
       0,    12,    17,    42,   292,    46,    47,    58,    68,   122,
      95,   311,    58,    58,   311,   -58,     7,   -58,    41,   -58,
     -58,    16,   124,    55,    32,     3,    -4,    67,   -58,   104,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,    98,
     292,   -58,    58,    -3,   105,   113,    58,   292,    58,     6,
      58,   -58,   -58,   114,   146,   111,   -58,     9,    45,    67,
      67,    61,   -58,   104,   157,   146,   202,   311,   -58,    58,
     311,    58,    58,    58,   -58,   -58,   -58,   -58,    58,    58,
      58,    58,    58,    58,   -58,   -58,   292,   119,   121,   104,
     134,   170,    58,   -58,   173,   144,   104,   145,   147,   148,
     292,   139,   -58,   -58,   -58,   -58,   104,   146,   -58,   -58,
     247,   -58,   124,    53,    55,    32,    32,     3,    -4,    -4,
      67,    67,    67,   104,    98,   143,   182,   153,   154,     3,
     150,   -58,   292,   292,    58,   292,   104,    58,   -58,    58,
     -58,   -58,   -58,    86,   170,    -6,   104,   158,   104,   149,
     -58,   -58,   -58,   -58,   292,   151,    58,   104,   -58,    39,
     292,   104
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -58,   -58,   -58,   -16,   120,   -14,   -58,   156,   135,   117,
      56,   -58,   -57,    57,   -21,   -45,    -1,   -58,    48,   -58,
     -58,   -58,   -58,   123,   -58,    66,   -17,   125,   -58,    70,
     -58,   199
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      39,    69,    70,    63,    97,    68,   164,    53,    71,    75,
       4,     5,     6,    59,     8,     9,    10,    11,    12,   108,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    91,
      92,   127,    48,   101,    89,    90,    22,    23,   102,    96,
      93,    79,   105,    24,   107,   139,   109,   111,    56,    99,
      51,    96,    25,    26,    72,    80,   106,    57,   117,    84,
      85,     4,     5,     6,   123,    62,     9,    48,    94,    95,
     130,   131,   132,   116,    86,    87,   170,    82,    58,    77,
      49,    83,    60,    77,    50,    51,    78,    22,    23,    97,
     113,    77,    61,   149,    24,   133,    94,    95,   114,    77,
     117,     4,     5,     6,    64,    62,     9,     2,     3,   146,
       4,     5,     6,     7,     8,     9,    10,    11,    12,   116,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    65,
     157,   161,    26,   159,    24,   160,    22,    23,   125,   126,
      66,   155,   156,    24,   158,   169,   128,   129,    81,    96,
     103,   104,    25,    26,   110,    10,   112,   134,   135,    79,
       4,     5,     6,   167,     8,     9,    10,    11,    12,   171,
      13,    14,    15,    16,    17,    18,    19,    20,    21,   136,
     140,   142,   143,   144,   147,   145,    22,    23,   151,   152,
     153,   102,   154,    24,   166,   165,   168,   121,   124,   120,
     150,   162,    25,    26,   115,     4,     5,     6,   100,     8,
       9,    10,    11,    12,   122,    13,    14,    15,    16,    17,
      18,    19,    20,    21,   163,    76,     0,     0,     0,   141,
       0,    22,    23,     0,     0,     0,     0,     0,    24,     0,
       0,     0,     0,     0,     0,     0,     0,    25,    26,   119,
       4,     5,     6,     0,     8,     9,    10,    11,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,    22,    23,     0,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,     0,    25,    26,   148,     4,     5,     6,     0,     8,
       9,    10,    11,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     4,     5,     6,     0,    67,     9,
       0,    22,    23,     0,     0,     0,     0,     0,    24,     0,
       0,     0,     0,     0,     0,     0,     0,    25,    26,     0,
      22,    23,     0,     0,     0,     0,     0,    24
};

static const yytype_int16 yycheck[] =
{
       1,    22,    23,    17,    49,    21,    12,     7,    24,    26,
       3,     4,     5,    14,     7,     8,     9,    10,    11,    13,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    33,
      34,    88,    23,    36,    31,    32,    29,    30,    41,    45,
      44,    25,    56,    36,    58,   102,    60,    64,    36,    50,
      41,    45,    45,    46,    47,    39,    57,    40,    75,    27,
      28,     3,     4,     5,    80,     7,     8,    23,    29,    30,
      91,    92,    93,    74,    42,    43,    37,    22,    36,    38,
      36,    26,    36,    38,    40,    41,    45,    29,    30,   134,
      45,    38,    45,    40,    36,    96,    29,    30,    37,    38,
     117,     3,     4,     5,    36,     7,     8,     0,     1,   110,
       3,     4,     5,     6,     7,     8,     9,    10,    11,   120,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     7,
     144,    45,    46,   147,    36,   149,    29,    30,    82,    83,
      45,   142,   143,    36,   145,   166,    89,    90,    24,    45,
      45,    38,    45,    46,    40,     9,    45,    38,    37,    25,
       3,     4,     5,   164,     7,     8,     9,    10,    11,   170,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     9,
       7,    37,    37,    36,    45,    37,    29,    30,    45,     7,
      37,    41,    38,    36,    45,    37,    45,    77,    81,    76,
     134,   153,    45,    46,    47,     3,     4,     5,    52,     7,
       8,     9,    10,    11,    79,    13,    14,    15,    16,    17,
      18,    19,    20,    21,   154,    26,    -1,    -1,    -1,   104,
      -1,    29,    30,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     3,     4,     5,    -1,     7,     8,
      -1,    29,    30,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      29,    30,    -1,    -1,    -1,    -1,    -1,    36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    49,     0,     1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    29,    30,    36,    45,    46,    50,    51,    52,
      53,    55,    56,    57,    58,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    72,    74,    23,    36,
      40,    41,    54,     7,    75,    76,    36,    40,    36,    64,
      36,    45,     7,    53,    36,     7,    45,     7,    51,    62,
      62,    51,    47,    64,    71,    74,    79,    38,    45,    25,
      39,    24,    22,    26,    27,    28,    42,    43,    59,    31,
      32,    33,    34,    44,    29,    30,    45,    63,    73,    64,
      55,    36,    41,    45,    38,    53,    64,    53,    13,    53,
      40,    74,    45,    45,    37,    47,    64,    74,    79,    47,
      71,    52,    56,    51,    57,    58,    58,    60,    61,    61,
      62,    62,    62,    64,    38,    37,     9,    77,    78,    60,
       7,    75,    37,    37,    36,    37,    64,    45,    47,    40,
      73,    45,     7,    37,    38,    64,    64,    53,    64,    53,
      53,    45,    66,    77,    12,    37,    45,    64,    45,    62,
      37,    64
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
        case 4:

/* Line 1455 of yacc.c  */
#line 60 "../src/TP4.y"
    { insertarErrorLexico(&lista_errores_lexicos, (yyvsp[(1) - (1)].mystruct.cadena), yylineno);;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 62 "../src/TP4.y"
    { printf("Error en linea %d.\n", yylineno);;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 96 "../src/TP4.y"
    { 
                           
                           if( (yyvsp[(1) - (3)].mystruct.tipo) == 262 && (yyvsp[(3) - (3)].mystruct.tipo) == 262 ){             // Caso donde alguno de los dos sea una variable, checkea en TS su tipo.
                              char* primerTipo  = obtenerTipoVariable(&lista_Variables, (yyvsp[(1) - (3)].mystruct.cadena));
                              char* segundoTipo = obtenerTipoVariable(&lista_Variables, (yyvsp[(3) - (3)].mystruct.cadena));
                              
                              // TODO: no funciona para casos de var-const. 
                              // AVISO: el goto es usado para que no salgan multiples errores para una misma linea.

                              if( strcmp("",primerTipo)==0 || strcmp("",segundoTipo)==0 ){         // Alguno de ellos no esta en la TS.
                                 insertarErrorSemantico(&lista_errores_semanticos, "Variable no declarada.\t\t\t", yylineno);
                                 goto jump;
                              }                              
                              if( controlDeTiposVar(primerTipo, segundoTipo) == 1 ){               // Checkea que ambos posean el mismo tipo.
                                 insertarErrorSemantico(&lista_errores_semanticos, "Error de tipos.\t\t\t\t", yylineno);
                                 goto jump;
                              }
                           }
                           if( controlDeTiposNum((yyvsp[(1) - (3)].mystruct.tipo), (yyvsp[(3) - (3)].mystruct.tipo))==1 ){
                              insertarErrorSemantico(&lista_errores_semanticos, "Error de tipos.\t\t\t\t", yylineno);
                           }
                           jump: 
                        ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 135 "../src/TP4.y"
    {(yyval.mystruct.cadena)= strdup((yyvsp[(1) - (1)].mystruct.cadena));;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 155 "../src/TP4.y"
    { insertarSentencia(&lista_sentencias, "Compuesta", "-", yylineno); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 156 "../src/TP4.y"
    { insertarSentencia(&lista_sentencias, "Seleccion", descripcionSentencia, yylineno);;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 157 "../src/TP4.y"
    { insertarSentencia(&lista_sentencias, "Iteracion", descripcionSentencia, yylineno);;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 158 "../src/TP4.y"
    { insertarSentencia(&lista_sentencias, "Etiquetado", descripcionSentencia, yylineno);;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 159 "../src/TP4.y"
    { insertarSentencia(&lista_sentencias, "Salto", descripcionSentencia, yylineno);;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 173 "../src/TP4.y"
    {descripcionSentencia = strdup("if");;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 174 "../src/TP4.y"
    {descripcionSentencia = strdup("if else");;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 175 "../src/TP4.y"
    {descripcionSentencia = strdup("switch");;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 178 "../src/TP4.y"
    {descripcionSentencia = strdup("while");;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 179 "../src/TP4.y"
    {descripcionSentencia = strdup("do while");;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 180 "../src/TP4.y"
    {descripcionSentencia = strdup("for");;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 183 "../src/TP4.y"
    {descripcionSentencia = strdup("case");;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 184 "../src/TP4.y"
    {descripcionSentencia = strdup("default");;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 185 "../src/TP4.y"
    {descripcionSentencia = strdup("id");;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 188 "../src/TP4.y"
    {descripcionSentencia = strdup("continue");;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 189 "../src/TP4.y"
    {descripcionSentencia = strdup("break");;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 190 "../src/TP4.y"
    {descripcionSentencia = strdup("return");;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 191 "../src/TP4.y"
    {descripcionSentencia = strdup("goto");;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 198 "../src/TP4.y"
    { 
                           rutinaInvocacion(&lista_Funciones, &parametros, &lista_errores_semanticos, (yyvsp[(1) - (5)].mystruct.cadena), cantidad_parametros, yylineno);
                           cantidad_parametros = 0; parametros = NULL;  //Reinicio de valores.
                           ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 204 "../src/TP4.y"
    { cantidad_parametros++; insertarParametro(&parametros, "no posee"); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 205 "../src/TP4.y"
    { cantidad_parametros++; insertarParametro(&parametros, (yyvsp[(1) - (1)].mystruct.cadena)); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 206 "../src/TP4.y"
    { cantidad_parametros++; insertarParametro(&parametros, (yyvsp[(1) - (3)].mystruct.cadena)); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 211 "../src/TP4.y"
    {
                              while(listaIDS != NULL){ // union de ambas listas
                                 insertarVariable(&lista_Variables,listaIDS->nombre,(yyvsp[(1) - (3)].mystruct.cadena), listaIDS->linea);
                                 listaIDS = listaIDS->siguiente;
                              }
                           ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 217 "../src/TP4.y"
    { insertarFuncion(&lista_Funciones, (yyvsp[(2) - (6)].mystruct.cadena), (yyvsp[(1) - (6)].mystruct.cadena) ,cantidad_parametros, parametros, yylineno); cantidad_parametros = 0; parametros = NULL; ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 218 "../src/TP4.y"
    { insertarFuncion(&lista_Funciones, (yyvsp[(2) - (6)].mystruct.cadena), (yyvsp[(1) - (6)].mystruct.cadena) ,cantidad_parametros, parametros, yylineno); cantidad_parametros = 0; parametros = NULL; ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 225 "../src/TP4.y"
    { if(chequeoDobleDeclaracion(&lista_Variables, (yyvsp[(1) - (1)].mystruct.cadena)) == 1){
                                                   insertarErrorSemantico(&lista_errores_semanticos, "Error de doble declaracion\t\t", yylineno);
                                                } else{
                                                   insertarVariable(&listaIDS, (yyvsp[(1) - (1)].mystruct.cadena), "-", yylineno); 
                                                }
                                             ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 231 "../src/TP4.y"
    { if(chequeoDobleDeclaracion(&lista_Variables, (yyvsp[(1) - (3)].mystruct.cadena)) == 1){
                                                   insertarErrorSemantico(&lista_errores_semanticos, "Error de doble declaracion\t\t", yylineno);
                                                } else{
                                                   insertarVariable(&listaIDS, (yyvsp[(1) - (3)].mystruct.cadena), "-", yylineno); 
                                                }
                                             ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 240 "../src/TP4.y"
    { insertarParametro(&parametros, (yyvsp[(1) - (1)].mystruct.cadena)); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 241 "../src/TP4.y"
    { insertarParametro(&parametros, (yyvsp[(1) - (3)].mystruct.cadena)); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 244 "../src/TP4.y"
    { cantidad_parametros++; (yyval.mystruct.cadena)= strdup((yyvsp[(1) - (2)].mystruct.cadena));;}
    break;



/* Line 1455 of yacc.c  */
#line 1860 "TP4.tab.c"
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
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 251 "../src/TP4.y"


int main(){
   yyin = fopen("ArchivoFuente.c","r");
   // Presentacion listado de errores sintacticos
   printf("\n********\t\tLISTADO ERRORES SINTACTICOS\t\t********\n\n");  
   yyparse();
   fclose(yyin);

   // INFORME
   mostrarErroresLexicos(&lista_errores_lexicos);
   mostrarErroresSemanticos(&lista_errores_semanticos);
   mostrarVariables(&lista_Variables);
   mostrarSentencias(&lista_sentencias);
   mostrarFunciones(&lista_Funciones);

   return 0;
}
