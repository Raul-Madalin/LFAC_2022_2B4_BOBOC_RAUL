/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "limbaj.y"

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "imp.h"

extern FILE* yyin;
extern char* yytext;
extern int yylineno;

char expression[100];
int count_functii=0;
int count_parametri=0;
int valoare=0;
int count_apel=0;
char functie_curenta[100];

#line 91 "limbaj.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "limbaj.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BGIN_MAIN = 3,                  /* BGIN_MAIN  */
  YYSYMBOL_END_MAIN = 4,                   /* END_MAIN  */
  YYSYMBOL_ASSIGN = 5,                     /* ASSIGN  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_ELSE = 7,                       /* ELSE  */
  YYSYMBOL_WHILE = 8,                      /* WHILE  */
  YYSYMBOL_FOR = 9,                        /* FOR  */
  YYSYMBOL_GEQ = 10,                       /* GEQ  */
  YYSYMBOL_LEQ = 11,                       /* LEQ  */
  YYSYMBOL_EQ = 12,                        /* EQ  */
  YYSYMBOL_NEQ = 13,                       /* NEQ  */
  YYSYMBOL_VERIFY = 14,                    /* VERIFY  */
  YYSYMBOL_MAIN = 15,                      /* MAIN  */
  YYSYMBOL_RETURN = 16,                    /* RETURN  */
  YYSYMBOL_PLUS = 17,                      /* PLUS  */
  YYSYMBOL_MINUS = 18,                     /* MINUS  */
  YYSYMBOL_OPERATIONS = 19,                /* OPERATIONS  */
  YYSYMBOL_CONST = 20,                     /* CONST  */
  YYSYMBOL_BGIN_GLOBAL = 21,               /* BGIN_GLOBAL  */
  YYSYMBOL_BGIN_FUNCTIE = 22,              /* BGIN_FUNCTIE  */
  YYSYMBOL_END_GLOBAL = 23,                /* END_GLOBAL  */
  YYSYMBOL_END_FUNCTIE = 24,               /* END_FUNCTIE  */
  YYSYMBOL_TIP_NOU = 25,                   /* TIP_NOU  */
  YYSYMBOL_PRINT = 26,                     /* PRINT  */
  YYSYMBOL_TIP = 27,                       /* TIP  */
  YYSYMBOL_TIP_VOID = 28,                  /* TIP_VOID  */
  YYSYMBOL_ID = 29,                        /* ID  */
  YYSYMBOL_NR = 30,                        /* NR  */
  YYSYMBOL_NR_R = 31,                      /* NR_R  */
  YYSYMBOL_TRUE = 32,                      /* TRUE  */
  YYSYMBOL_FALSE = 33,                     /* FALSE  */
  YYSYMBOL_LISTA_CUVINTE = 34,             /* LISTA_CUVINTE  */
  YYSYMBOL_MATH = 35,                      /* MATH  */
  YYSYMBOL_36_ = 36,                       /* ';'  */
  YYSYMBOL_37_ = 37,                       /* '['  */
  YYSYMBOL_38_ = 38,                       /* ']'  */
  YYSYMBOL_39_ = 39,                       /* ','  */
  YYSYMBOL_40_ = 40,                       /* '('  */
  YYSYMBOL_41_ = 41,                       /* ')'  */
  YYSYMBOL_42_ = 42,                       /* '{'  */
  YYSYMBOL_43_ = 43,                       /* '}'  */
  YYSYMBOL_44_ = 44,                       /* '.'  */
  YYSYMBOL_45_ = 45,                       /* '+'  */
  YYSYMBOL_46_ = 46,                       /* '-'  */
  YYSYMBOL_47_ = 47,                       /* '*'  */
  YYSYMBOL_48_ = 48,                       /* '/'  */
  YYSYMBOL_49_ = 49,                       /* '|'  */
  YYSYMBOL_50_ = 50,                       /* '&'  */
  YYSYMBOL_YYACCEPT = 51,                  /* $accept  */
  YYSYMBOL_progr = 52,                     /* progr  */
  YYSYMBOL_declaratii = 53,                /* declaratii  */
  YYSYMBOL_declaratie = 54,                /* declaratie  */
  YYSYMBOL_lista_param = 55,               /* lista_param  */
  YYSYMBOL_param = 56,                     /* param  */
  YYSYMBOL_functie = 57,                   /* functie  */
  YYSYMBOL_lista_functii = 58,             /* lista_functii  */
  YYSYMBOL_bloc_main = 59,                 /* bloc_main  */
  YYSYMBOL_bloc_global = 60,               /* bloc_global  */
  YYSYMBOL_bloc_functie = 61,              /* bloc_functie  */
  YYSYMBOL_list = 62,                      /* list  */
  YYSYMBOL_statement = 63,                 /* statement  */
  YYSYMBOL_lista_apel = 64,                /* lista_apel  */
  YYSYMBOL_my_expression = 65,             /* my_expression  */
  YYSYMBOL_condition = 66,                 /* condition  */
  YYSYMBOL_if = 67,                        /* if  */
  YYSYMBOL_while = 68,                     /* while  */
  YYSYMBOL_for = 69,                       /* for  */
  YYSYMBOL_new_type = 70                   /* new_type  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   375

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  262

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   290


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    50,     2,
      40,    41,    47,    45,    39,    46,    44,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    36,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    37,     2,    38,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,    49,    43,     2,     2,     2,     2,
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
      35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    45,    45,    48,    49,    51,    65,    79,    93,    94,
      96,    97,    99,   108,   117,   125,   133,   143,   144,   146,
     153,   160,   168,   169,   173,   186,   203,   204,   218,   232,
     233,   236,   237,   238,   243,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   269,   285,   303,
     304,   305,   306,   307,   308,   309,   316,   323,   324,   328,
     329,   330,   331,   332,   333,   334,   335,   342,   343,   344,
     345,   346,   347,   348,   351,   352,   353,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   370,
     371,   373,   375,   376,   378
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "BGIN_MAIN",
  "END_MAIN", "ASSIGN", "IF", "ELSE", "WHILE", "FOR", "GEQ", "LEQ", "EQ",
  "NEQ", "VERIFY", "MAIN", "RETURN", "PLUS", "MINUS", "OPERATIONS",
  "CONST", "BGIN_GLOBAL", "BGIN_FUNCTIE", "END_GLOBAL", "END_FUNCTIE",
  "TIP_NOU", "PRINT", "TIP", "TIP_VOID", "ID", "NR", "NR_R", "TRUE",
  "FALSE", "LISTA_CUVINTE", "MATH", "';'", "'['", "']'", "','", "'('",
  "')'", "'{'", "'}'", "'.'", "'+'", "'-'", "'*'", "'/'", "'|'", "'&'",
  "$accept", "progr", "declaratii", "declaratie", "lista_param", "param",
  "functie", "lista_functii", "bloc_main", "bloc_global", "bloc_functie",
  "list", "statement", "lista_apel", "my_expression", "condition", "if",
  "while", "for", "new_type", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,    59,    91,    93,    44,
      40,    41,   123,   125,    46,    43,    45,    42,    47,   124,
      38
};
#endif

#define YYPACT_NINF (-96)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,   138,    20,    16,   -18,    24,    27,   248,    52,   -96,
     -96,   132,    59,    40,    26,    58,   -96,    71,   -96,    92,
      96,   -96,    37,    73,   -96,   -96,   -96,   138,    99,   -96,
     130,   150,   -96,   132,   162,   164,   179,   190,     3,   138,
     240,   144,   -96,   -96,   -96,    -1,   187,   -20,    17,   -96,
      54,    54,   205,   209,   247,   228,   142,   252,   -96,   253,
     -96,   -96,   -96,   271,   259,   140,   -96,   260,   173,   289,
     290,   264,   266,   301,   269,    -3,   290,   -96,   -96,   -96,
     -96,   -96,   272,   273,   -96,   -96,   -13,   174,   -96,   304,
     -96,   -96,    73,   284,   270,    73,   274,   165,   169,   275,
     276,   285,    98,   291,   309,    56,     9,    -5,   102,   163,
     -96,    75,    51,   -96,    73,    83,    73,   234,   236,   238,
     241,    73,    73,   283,   -12,    -9,   279,   282,   286,   221,
     -96,   185,   263,   292,   142,   -96,   296,   -96,   287,   287,
     287,   287,   288,   -96,   -96,   -96,   289,   290,   -96,   -96,
     -96,   126,   -96,   148,   277,   280,   293,   294,   297,   295,
     298,   299,   158,   180,    54,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   300,   302,   303,   201,    77,   307,   310,
     311,   312,    90,   -96,   -96,    54,    54,    54,    54,    54,
      54,    54,    54,   322,   -96,   314,   142,   -96,    29,    33,
     305,   142,   -96,   -96,   -96,   -96,   -96,   -96,   218,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   313,   308,   222,
     265,   -96,   267,   -96,   316,   223,   -96,    73,   281,   315,
     317,   318,   -19,   319,   320,   321,   202,   323,   324,   -96,
     142,   -96,   306,   -96,   -96,   -96,   -96,   -96,   325,   326,
     233,   328,    73,    73,   329,   330,   212,   227,   -96,   -96,
     -96,   -96
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       1,     0,     0,     0,     0,     5,    20,     0,     3,     0,
       0,    17,     0,     0,     2,     6,     9,     0,     0,     4,
       0,     0,    21,     0,     0,     0,     0,     0,     0,    38,
       0,     0,    35,    36,    37,     0,     0,     0,     0,    18,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
      22,    94,     7,     0,     0,     0,    10,     0,     0,     0,
       0,     0,     0,     0,     0,    24,    25,    26,    27,    28,
      33,    32,     0,    48,    47,    49,     0,     0,    50,     0,
      23,    12,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,     0,     0,    11,     0,     0,     0,    77,    79,    80,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,     0,     0,     0,     0,    67,     0,    66,     0,     0,
       0,     0,    52,    51,    53,    54,    40,    39,    42,    41,
      14,     0,    16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    44,    43,    46,    45,    29,
      31,    30,    56,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    13,    15,     0,     0,     0,     0,     0,
       0,     0,     0,    89,    91,     0,     0,    60,     0,     0,
       0,     0,    59,    73,    74,    75,    76,    57,     0,    82,
      86,    84,    88,    81,    85,    83,    87,     0,     0,     0,
       0,    68,     0,    65,     0,     0,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    64,
       0,    72,     0,    63,    61,    71,    62,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    70,    69,
      92,    93
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -96,   -96,    14,     6,   327,   239,   336,   -96,   -96,   -96,
     -96,   -91,   -40,   -95,   -74,   -48,   -96,   -96,   -96,   -96
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    39,     8,    65,    66,    21,    22,    24,     3,
      12,    40,    41,    87,    88,    71,    42,    43,    44,     9
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      59,   112,    97,    72,   115,    98,    81,    63,    54,    13,
     131,    97,   108,    17,   136,     7,   106,   107,   242,     4,
      10,    64,   243,   151,     5,   153,     6,    86,   132,   165,
     162,   163,   166,     1,   103,   145,   137,   148,    11,   176,
      55,    45,    61,    56,    63,    17,   133,    57,   220,   134,
     135,    17,   222,    14,   127,    26,    15,    34,    67,    35,
      36,    32,    23,   149,   178,   179,   180,   181,    27,    25,
     221,     4,    59,    33,   223,    59,     5,    37,     6,    34,
      38,    35,    36,    69,    70,    83,    84,   208,    18,    34,
      85,    35,    36,     4,   150,    28,    86,   130,     5,    37,
       6,   219,    38,     4,   146,   147,   225,    29,     5,    37,
       6,    59,    38,    59,   200,    86,   195,   201,   202,    83,
      84,    30,    59,    59,    85,    31,   152,   124,   125,    46,
      86,   207,    34,   126,    35,    36,   236,   209,   210,   211,
     212,   213,   214,   215,   216,   250,     4,   138,   139,   140,
     141,     5,    37,     6,    34,    38,    35,    36,     4,    19,
      20,   256,   257,     5,    34,     6,    35,    36,     4,   183,
      47,    83,    84,     5,    37,     6,    85,    38,     4,    93,
      60,    94,    86,     5,    37,     6,    34,    38,    35,    36,
      48,   184,   142,   143,   117,   118,    59,   144,   119,   120,
       4,   193,    50,    86,    51,     5,    37,     6,    34,    38,
      35,    36,    93,   109,    96,   110,    59,    59,    34,    52,
      35,    36,     4,   194,   109,    62,   172,     5,    37,     6,
      53,    38,     4,    34,    73,    35,    36,     5,    37,     6,
     109,    38,   199,    74,    58,   247,    34,     4,    35,    36,
     170,   171,     5,    37,     6,   260,    38,   109,    82,   226,
       4,   109,   109,   229,   235,     5,    37,     6,     4,    38,
     261,    16,   109,     5,   254,     6,    75,    76,    77,    78,
      79,    89,    80,   154,   155,   156,   157,   158,   159,    90,
     160,   161,   173,   174,   230,   231,   232,   233,   237,   238,
      91,    92,    95,    97,    98,    99,   101,   100,   102,   111,
     104,    63,   114,   105,   129,   123,   116,   121,   122,   164,
     167,   128,   175,   168,   169,   177,   185,    86,   182,   217,
     186,     0,   113,     0,     0,   224,   251,   228,     0,     0,
     196,   198,   187,   197,   188,   190,   189,   191,   203,   192,
     218,   204,   205,   206,   234,   227,   239,   240,     0,   241,
     244,   245,   246,     0,   248,   249,   255,   252,   253,    49,
     258,   259,     0,     0,     0,    68
};

static const yytype_int16 yycheck[] =
{
      40,    92,    14,    51,    95,    14,    54,    27,     5,    27,
     105,    14,    86,     7,    19,     1,    29,    30,    37,    20,
       0,    41,    41,   114,    25,   116,    27,    40,    19,    41,
     121,   122,    41,    21,    37,   109,    41,   111,    22,   134,
      37,    27,    43,    40,    27,    39,    37,    44,    19,    40,
      41,    45,    19,    29,   102,    29,    29,     6,    41,     8,
       9,    24,     3,   111,   138,   139,   140,   141,    42,    29,
      41,    20,   112,    36,    41,   115,    25,    26,    27,     6,
      29,     8,     9,    29,    30,    29,    30,   182,    36,     6,
      34,     8,     9,    20,    43,    37,    40,    41,    25,    26,
      27,   196,    29,    20,    29,    30,   201,    36,    25,    26,
      27,   151,    29,   153,    37,    40,   164,    40,    41,    29,
      30,    29,   162,   163,    34,    29,    43,    29,    30,    30,
      40,    41,     6,    35,     8,     9,   227,   185,   186,   187,
     188,   189,   190,   191,   192,   240,    20,    45,    46,    47,
      48,    25,    26,    27,     6,    29,     8,     9,    20,    27,
      28,   252,   253,    25,     6,    27,     8,     9,    20,    43,
      40,    29,    30,    25,    26,    27,    34,    29,    20,    39,
      36,    41,    40,    25,    26,    27,     6,    29,     8,     9,
      40,    43,    29,    30,    29,    30,   236,    34,    29,    30,
      20,    43,    40,    40,    40,    25,    26,    27,     6,    29,
       8,     9,    39,    39,    41,    41,   256,   257,     6,    40,
       8,     9,    20,    43,    39,    38,    41,    25,    26,    27,
      40,    29,    20,     6,    29,     8,     9,    25,    26,    27,
      39,    29,    41,    34,     4,    43,     6,    20,     8,     9,
      29,    30,    25,    26,    27,    43,    29,    39,    30,    41,
      20,    39,    39,    41,    41,    25,    26,    27,    20,    29,
      43,    23,    39,    25,    41,    27,    29,    30,    31,    32,
      33,    29,    35,    49,    50,    49,    50,    49,    50,    36,
      49,    50,    29,    30,    29,    30,    29,    30,    17,    18,
      29,    42,    42,    14,    14,    41,     5,    41,    39,     5,
      38,    27,    42,    40,     5,    30,    42,    42,    42,    36,
      41,    30,    30,    41,    38,    29,    49,    40,    40,     7,
      50,    -1,    93,    -1,    -1,    30,    30,    29,    -1,    -1,
      40,    38,    49,    41,    50,    50,    49,    49,    41,    50,
      36,    41,    41,    41,    38,    42,    41,    40,    -1,    41,
      41,    41,    41,    -1,    41,    41,    38,    42,    42,    33,
      41,    41,    -1,    -1,    -1,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    21,    52,    60,    20,    25,    27,    53,    54,    70,
       0,    22,    61,    27,    29,    29,    23,    54,    36,    27,
      28,    57,    58,     3,    59,    29,    29,    42,    37,    36,
      29,    29,    24,    36,     6,     8,     9,    26,    29,    53,
      62,    63,    67,    68,    69,    53,    30,    40,    40,    57,
      40,    40,    40,    40,     5,    37,    40,    44,     4,    63,
      36,    43,    38,    27,    41,    55,    56,    41,    55,    29,
      30,    66,    66,    29,    34,    29,    30,    31,    32,    33,
      35,    66,    30,    29,    30,    34,    40,    64,    65,    29,
      36,    29,    42,    39,    41,    42,    41,    14,    14,    41,
      41,     5,    39,    37,    38,    40,    29,    30,    65,    39,
      41,     5,    62,    56,    42,    62,    42,    29,    30,    29,
      30,    42,    42,    30,    29,    30,    35,    66,    30,     5,
      41,    64,    19,    37,    40,    41,    19,    41,    45,    46,
      47,    48,    29,    30,    34,    65,    29,    30,    65,    66,
      43,    62,    43,    62,    49,    50,    49,    50,    49,    50,
      49,    50,    62,    62,    36,    41,    41,    41,    41,    38,
      29,    30,    41,    29,    30,    30,    64,    29,    65,    65,
      65,    65,    40,    43,    43,    49,    50,    49,    50,    49,
      50,    49,    50,    43,    43,    66,    40,    41,    38,    41,
      37,    40,    41,    41,    41,    41,    41,    41,    64,    66,
      66,    66,    66,    66,    66,    66,    66,     7,    36,    64,
      19,    41,    19,    41,    30,    64,    41,    42,    29,    41,
      29,    30,    29,    30,    38,    41,    62,    17,    18,    41,
      40,    41,    37,    41,    41,    41,    41,    43,    41,    41,
      64,    30,    42,    42,    41,    38,    62,    62,    41,    41,
      43,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    53,    53,    54,    54,    54,    54,    54,
      55,    55,    56,    57,    57,    57,    57,    58,    58,    59,
      60,    61,    62,    62,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    67,
      67,    68,    69,    69,    70
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     3,     2,     3,     5,     1,     3,
       1,     3,     2,     8,     7,     8,     7,     1,     3,     3,
       3,     3,     2,     3,     3,     3,     3,     3,     3,     6,
       6,     6,     3,     3,     4,     1,     1,     1,     1,     5,
       5,     5,     5,     6,     6,     6,     6,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     4,     5,     6,     5,
       5,     8,     8,     8,     8,     6,     3,     3,     6,    11,
      11,     8,     8,     5,     5,     5,     5,     3,     3,     3,
       3,     6,     6,     6,     6,     6,     6,     6,     6,     7,
      11,     7,    14,    14,     5
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* progr: bloc_global bloc_functie bloc_main  */
#line 45 "limbaj.y"
                                          {printf("program corect sintactic\n");}
#line 1328 "limbaj.tab.c"
    break;

  case 5: /* declaratie: TIP ID  */
#line 51 "limbaj.y"
                    {
                    //printf("sunt aci\n");
                    if((var=insert_variabila((yyvsp[0].strval),(yyvsp[-1].strval)))!=0)
                    {
                         if(var==-1)
                         {
                              printf("Eroare la linia %d, variabila %s a fost deja declarata global sau main!\n",yylineno,(yyvsp[0].strval));
                         }
                         else
                         {
                              printf("Eroare la linia %d, variabila %s a fost deja declarata deja local!\n",yylineno,(yyvsp[0].strval));
                         }
                    }           
               }
#line 1347 "limbaj.tab.c"
    break;

  case 6: /* declaratie: CONST TIP ID  */
#line 65 "limbaj.y"
                          {
               if((var=insert_const((yyvsp[-1].strval),(yyvsp[0].strval)))!=0)
               {
                    if(var==-1)
                    {
                         printf("Eroare la linia %d, variabila %s a fost deja declarata global sau main!\n",yylineno,(yyvsp[0].strval));
                    }
                    else
                    {
                         printf("Eroare la linia %d, variabila %s a fost deja declarata deja local!\n",yylineno,(yyvsp[0].strval));
                    }

               }
           }
#line 1366 "limbaj.tab.c"
    break;

  case 7: /* declaratie: TIP ID '[' NR ']'  */
#line 79 "limbaj.y"
                               {
               if((var=adaugaVector((yyvsp[-4].strval),(yyvsp[-3].strval),(yyvsp[-1].intval)))!=0)
               {
                    if(var==-1)
                    {
                         printf("Eroare la linia %d, vectorul %s a fost deja declarat global sau main!\n",yylineno,(yyvsp[-3].strval));
                    }
                    else
                    {
                         printf("Eroare la linia %d, vectorul %s a fost deja declarat global sau main!\n",yylineno,(yyvsp[-3].strval));
                    }
               }

           }
#line 1385 "limbaj.tab.c"
    break;

  case 12: /* param: TIP ID  */
#line 99 "limbaj.y"
               {
          //printf("%s  |  %s  \n",$1,$2);
          
          //printf("nr de param este %d\n",count_parametri);
          adauga_param(count_functii,(yyvsp[0].strval),(yyvsp[-1].strval),count_parametri);
          count_parametri++;
     }
#line 1397 "limbaj.tab.c"
    break;

  case 13: /* functie: TIP ID '(' lista_param ')' '{' list '}'  */
#line 108 "limbaj.y"
                                                  {
             count_functii++;
             if(adauga_functie1((yyvsp[-6].strval),(yyvsp[-7].strval),count_parametri)==-1)
             {
                  printf("Eroare la linia %d, functia %s a mai fost declarata deja!\n",yylineno,(yyvsp[-6].strval));
             }
             count_parametri=0;
             
          }
#line 1411 "limbaj.tab.c"
    break;

  case 14: /* functie: TIP ID '(' ')' '{' list '}'  */
#line 117 "limbaj.y"
                                      {
             count_functii++;
             if(adauga_functie1((yyvsp[-5].strval),(yyvsp[-6].strval),count_parametri)==-1)
             {
                  printf("Eroare la linia %d, functia %s a mai fost declarata deja!\n",yylineno,(yyvsp[-5].strval));
             }
             count_parametri=0;
        }
#line 1424 "limbaj.tab.c"
    break;

  case 15: /* functie: TIP_VOID ID '(' lista_param ')' '{' list '}'  */
#line 125 "limbaj.y"
                                                       {
             count_functii++;
             if(adauga_functie1((yyvsp[-6].strval),(yyvsp[-7].strval),count_parametri)==-1)
             {
                  printf("Eroare la linia %d, functia %s a mai fost declarata deja!\n",yylineno,(yyvsp[-6].strval));
             }
             count_parametri=0;
        }
#line 1437 "limbaj.tab.c"
    break;

  case 16: /* functie: TIP_VOID ID '(' ')' '{' list '}'  */
#line 133 "limbaj.y"
                                           {
             count_functii++;
             if(adauga_functie1((yyvsp[-5].strval),(yyvsp[-6].strval),count_parametri)==-1)
             {
                  printf("Eroare la linia %d, functia %s a mai fost declarata deja!\n",yylineno,(yyvsp[-5].strval));
             }
             count_parametri=0;
        }
#line 1450 "limbaj.tab.c"
    break;

  case 19: /* bloc_main: BGIN_MAIN list END_MAIN  */
#line 146 "limbaj.y"
                                    {
          var_m=0;
          var_g=0;
          var_l=0;
          }
#line 1460 "limbaj.tab.c"
    break;

  case 20: /* bloc_global: BGIN_GLOBAL declaratii END_GLOBAL  */
#line 153 "limbaj.y"
                                               {
            var_g=0;
            var_l=1;
            var_m=0;
            }
#line 1470 "limbaj.tab.c"
    break;

  case 21: /* bloc_functie: BGIN_FUNCTIE lista_functii END_FUNCTIE  */
#line 160 "limbaj.y"
                                                     {
            var_g=0;
            var_l=0;
            var_m=1;
          }
#line 1480 "limbaj.tab.c"
    break;

  case 24: /* statement: ID ASSIGN ID  */
#line 173 "limbaj.y"
                        {
               if(strcmp((yyvsp[0].strval),"true")!=0 || strcmp((yyvsp[0].strval),"false")!=0)
               
                    if((este_declarata((yyvsp[-2].strval))!=0 || este_declarata((yyvsp[0].strval))!=0) )
                    {
                         printf("Eroare la linia %d, cel putin una dintre variabile nu este declarata!\n",yylineno);
                    }
                    if( strcmp(getType((yyvsp[-2].strval)),getType((yyvsp[0].strval))) != 0 )
                    {
                         printf("Eroare la linia %d, variabilele %s si %s nu au acelasi tip!\n",yylineno,(yyvsp[-2].strval),(yyvsp[0].strval));
                    }
               }
#line 1497 "limbaj.tab.c"
    break;

  case 25: /* statement: ID ASSIGN NR  */
#line 186 "limbaj.y"
                         {
              if(este_declarata((yyvsp[-2].strval))!=0)
              {
                   printf("Eroare la linia %d, variabila %s nu este declarata\n",yylineno,(yyvsp[-2].strval));
              }
              else
              {
                   if(strcmp(getType((yyvsp[-2].strval)),"int")!=0)
                   {
                       printf("Eroare la linia %d, variabila %s nu este de tip int\n",yylineno,(yyvsp[-2].strval)); 
                   }
                   else
                   {
                        update_val((yyvsp[-2].strval),(yyvsp[0].intval));
                   }
              }
         }
#line 1519 "limbaj.tab.c"
    break;

  case 27: /* statement: ID ASSIGN TRUE  */
#line 204 "limbaj.y"
                          {
              if((var=este_declarata((yyvsp[-2].strval)))==1)
              {
                   printf("Eroare la linia %d, variabila %s nu este declarata\n",yylineno,(yyvsp[-2].strval));
              }
              else
              {
                   if(strcmp(getType((yyvsp[-2].strval)),"bool")!=0)
                   {
                        printf("Eroare la linia %d, variabila %s nu este de tip bool!\n",yylineno,(yyvsp[-2].strval));
                   }

              }
         }
#line 1538 "limbaj.tab.c"
    break;

  case 28: /* statement: ID ASSIGN FALSE  */
#line 218 "limbaj.y"
                           {
              if(este_declarata((yyvsp[-2].strval))==1)
              {
                   printf("Eroare la linia %d, variabila %s nu este declarata\n",yylineno,(yyvsp[-2].strval));
              }
              else
              {
                   if(strcmp(getType((yyvsp[-2].strval)),"bool")!=0)
                   {
                        printf("Eroare la linia %d, variabila %s nu este de tip bool!\n",yylineno,(yyvsp[-2].strval));
                   }

              }
         }
#line 1557 "limbaj.tab.c"
    break;

  case 30: /* statement: ID '[' NR ']' ASSIGN NR  */
#line 233 "limbaj.y"
                                 {
              
         }
#line 1565 "limbaj.tab.c"
    break;

  case 33: /* statement: ID ASSIGN MATH  */
#line 238 "limbaj.y"
                          {
              valoare=solution((yyvsp[0].str_l));
              printf("Valoarea expresiei %s este %d \n", (yyvsp[0].str_l) ,valoare);
              update_val((yyvsp[-2].strval),valoare);
         }
#line 1575 "limbaj.tab.c"
    break;

  case 34: /* statement: ID '(' lista_apel ')'  */
#line 243 "limbaj.y"
                                 {
              count_apel=0;
              if(exista_functie((yyvsp[-3].strval))==0)
              {
                   printf("Eroare la linia %d, functia %s nu a fost declarata!\n",yylineno,(yyvsp[-3].strval));
              }
              strcpy(functie_curenta,(yyvsp[-3].strval));
              //printf("Functie curenta: %s\n",functie_curenta);

         }
#line 1590 "limbaj.tab.c"
    break;

  case 46: /* statement: PRINT '(' LISTA_CUVINTE ',' MATH ')'  */
#line 264 "limbaj.y"
                                                {
              printf(" %s %d \n", (yyvsp[-3].str_l) ,solution((yyvsp[-1].str_l)));
         }
#line 1598 "limbaj.tab.c"
    break;

  case 47: /* lista_apel: NR  */
#line 269 "limbaj.y"
                {
               count_apel++;
               //printf("Count apel: %d\n",count_apel);
               for(int i=0;i<nr_functii;i++)
               {
                    //printf("Functie curenta: %s\n",functie_curenta);
                    if(strcmp(functii[i].nume,functie_curenta)==0)
                    {
                         if(strcmp(functii[i].parametri[count_apel].tip,"int")!=0)
                         {
                             printf("Eroare la linia %d, parametrii dati sunt gresiti!\n",yylineno); 
                         }
                    }
               }

           }
#line 1619 "limbaj.tab.c"
    break;

  case 48: /* lista_apel: ID  */
#line 285 "limbaj.y"
                {
               if(exista_id((yyvsp[0].strval))==1)
               {
                    count_apel++;
                    //printf("Count apel: %d\n",count_apel);
                    for(int i=0;i<nr_functii;i++)
                    {
                         //printf("Functie curenta: %s\n",functie_curenta);
                         if(strcmp(functii[i].nume,functie_curenta)==0)
                         {
                              if(strcmp(functii[i].parametri[count_apel].tip,getType((yyvsp[0].strval)))!=0)
                              {
                              printf("Eroare la linia %d, parametrii dati sunt gresiti!\n",yylineno); 
                              }
                         }
                    }
               }
           }
#line 1642 "limbaj.tab.c"
    break;

  case 55: /* lista_apel: ID '(' ')'  */
#line 309 "limbaj.y"
                        {
                printf("INtru aici\n");
                if(exista_functie((yyvsp[-2].strval))==0)
                {
                     printf("Eroare la linia %d, functia %s nu a fost declarata!\n",yylineno,(yyvsp[-2].strval));
                }
           }
#line 1654 "limbaj.tab.c"
    break;

  case 56: /* lista_apel: ID '(' lista_apel ')'  */
#line 316 "limbaj.y"
                                   {
                printf("INtru aici\n");
                if(exista_functie((yyvsp[-3].strval))==0)
                {
                     printf("Eroare la linia %d, functia %s nu a fost declarata!\n",yylineno,(yyvsp[-3].strval));
                }
           }
#line 1666 "limbaj.tab.c"
    break;

  case 66: /* my_expression: '(' NR ')'  */
#line 335 "limbaj.y"
                            {
                    add_expression(expression, '(');
                    add_expression(expression, ' ');
                    add_expression_number(expression, (yyvsp[-1].intval));
                    add_expression(expression, ' ');
                    add_expression(expression, ')');
               }
#line 1678 "limbaj.tab.c"
    break;

  case 73: /* my_expression: '(' my_expression '+' my_expression ')'  */
#line 348 "limbaj.y"
                                                         {
                    
               }
#line 1686 "limbaj.tab.c"
    break;


#line 1690 "limbaj.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 379 "limbaj.y"

void yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv)
{
     yyin=fopen(argv[1],"r");

     yyparse();
     f1=fopen("symbol_table.txt","w");
     fprintf(f1,"%s\n","VARIABILE");
     fprintf(f1,"%s  \n","nume |tip |scop |valoare ");

     printf("var total ete : %d\n",total);
     for(int i=0;i<total;i++)
     {
          fprintf(f1,"%s   |%s   |%s   |%s   \n",var_total[i].nume,var_total[i].tip,var_total[i].scop,var_total[i].valoare);
     }
     fprintf(f1,"%s\n","VECTORI");
     fprintf(f1,"%s\n","nume  |tip  |scop  |nr_max  ");
     for(int i=0;i<nr_vectori;i++)
     {
          fprintf(f1,"%s   |%s   |%s   |%d   \n",vectori[i].nume,vectori[i].tip,vectori[i].scop,vectori[i].nr_max);
     }


     f2=fopen("symbol_table_functions.txt","w");
     fprintf(f2,"%s\n","FUNCTII");
     fprintf(f2,"%s  \n","nume |tip | Nr param | Parametri ");
     for(int i=0;i<nr_functii;i++)
     {
          fprintf(f2,"%s  |%s  |%d   |", functii[i].nume,functii[i].tip,functii[i].nr_param);
          for(int j=0;j<functii[i].nr_param;j++)
          {
               fprintf(f2,"%s:%s ,",functii[i].parametri[j].nume,functii[i].parametri[j].tip);
          }
          fprintf(f2,"\n");

     }
     


} 
