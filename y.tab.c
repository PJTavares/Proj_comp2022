/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "jucompiler.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "y.tab.h"
#include "ast.h"

//Pedro João Frazão Curado Silva Tavares 2018280907
extern int yylineno, ncol, yyleng, line_error, col_error;
extern char* yytext;
int yylex(void);
void yyerror (char *s);
bool erro_yacc = false;
struct n* root;



#line 90 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    SEMICOLON = 258,               /* SEMICOLON  */
    BLANKID = 259,                 /* BLANKID  */
    PACKAGE = 260,                 /* PACKAGE  */
    RETURN = 261,                  /* RETURN  */
    AND = 262,                     /* AND  */
    ASSIGN = 263,                  /* ASSIGN  */
    STAR = 264,                    /* STAR  */
    COMMA = 265,                   /* COMMA  */
    DIV = 266,                     /* DIV  */
    EQ = 267,                      /* EQ  */
    GE = 268,                      /* GE  */
    GT = 269,                      /* GT  */
    LBRACE = 270,                  /* LBRACE  */
    LE = 271,                      /* LE  */
    LPAR = 272,                    /* LPAR  */
    LSQ = 273,                     /* LSQ  */
    LT = 274,                      /* LT  */
    MINUS = 275,                   /* MINUS  */
    MOD = 276,                     /* MOD  */
    NE = 277,                      /* NE  */
    NOT = 278,                     /* NOT  */
    OR = 279,                      /* OR  */
    PLUS = 280,                    /* PLUS  */
    RBRACE = 281,                  /* RBRACE  */
    RPAR = 282,                    /* RPAR  */
    RSQ = 283,                     /* RSQ  */
    ELSE = 284,                    /* ELSE  */
    FOR = 285,                     /* FOR  */
    IF = 286,                      /* IF  */
    VAR = 287,                     /* VAR  */
    INT = 288,                     /* INT  */
    FLOAT32 = 289,                 /* FLOAT32  */
    BOOL = 290,                    /* BOOL  */
    STRING = 291,                  /* STRING  */
    PRINT = 292,                   /* PRINT  */
    PARSEINT = 293,                /* PARSEINT  */
    FUNC = 294,                    /* FUNC  */
    CMDARGS = 295,                 /* CMDARGS  */
    RESERVED = 296,                /* RESERVED  */
    INTLIT = 297,                  /* INTLIT  */
    REALLIT = 298,                 /* REALLIT  */
    ID = 299,                      /* ID  */
    STR = 300                      /* STR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define SEMICOLON 258
#define BLANKID 259
#define PACKAGE 260
#define RETURN 261
#define AND 262
#define ASSIGN 263
#define STAR 264
#define COMMA 265
#define DIV 266
#define EQ 267
#define GE 268
#define GT 269
#define LBRACE 270
#define LE 271
#define LPAR 272
#define LSQ 273
#define LT 274
#define MINUS 275
#define MOD 276
#define NE 277
#define NOT 278
#define OR 279
#define PLUS 280
#define RBRACE 281
#define RPAR 282
#define RSQ 283
#define ELSE 284
#define FOR 285
#define IF 286
#define VAR 287
#define INT 288
#define FLOAT32 289
#define BOOL 290
#define STRING 291
#define PRINT 292
#define PARSEINT 293
#define FUNC 294
#define CMDARGS 295
#define RESERVED 296
#define INTLIT 297
#define REALLIT 298
#define ID 299
#define STR 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "jucompiler.y"

	char* token_lex;
	struct n* no;
	char* type;

#line 239 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_SEMICOLON = 3,                  /* SEMICOLON  */
  YYSYMBOL_BLANKID = 4,                    /* BLANKID  */
  YYSYMBOL_PACKAGE = 5,                    /* PACKAGE  */
  YYSYMBOL_RETURN = 6,                     /* RETURN  */
  YYSYMBOL_AND = 7,                        /* AND  */
  YYSYMBOL_ASSIGN = 8,                     /* ASSIGN  */
  YYSYMBOL_STAR = 9,                       /* STAR  */
  YYSYMBOL_COMMA = 10,                     /* COMMA  */
  YYSYMBOL_DIV = 11,                       /* DIV  */
  YYSYMBOL_EQ = 12,                        /* EQ  */
  YYSYMBOL_GE = 13,                        /* GE  */
  YYSYMBOL_GT = 14,                        /* GT  */
  YYSYMBOL_LBRACE = 15,                    /* LBRACE  */
  YYSYMBOL_LE = 16,                        /* LE  */
  YYSYMBOL_LPAR = 17,                      /* LPAR  */
  YYSYMBOL_LSQ = 18,                       /* LSQ  */
  YYSYMBOL_LT = 19,                        /* LT  */
  YYSYMBOL_MINUS = 20,                     /* MINUS  */
  YYSYMBOL_MOD = 21,                       /* MOD  */
  YYSYMBOL_NE = 22,                        /* NE  */
  YYSYMBOL_NOT = 23,                       /* NOT  */
  YYSYMBOL_OR = 24,                        /* OR  */
  YYSYMBOL_PLUS = 25,                      /* PLUS  */
  YYSYMBOL_RBRACE = 26,                    /* RBRACE  */
  YYSYMBOL_RPAR = 27,                      /* RPAR  */
  YYSYMBOL_RSQ = 28,                       /* RSQ  */
  YYSYMBOL_ELSE = 29,                      /* ELSE  */
  YYSYMBOL_FOR = 30,                       /* FOR  */
  YYSYMBOL_IF = 31,                        /* IF  */
  YYSYMBOL_VAR = 32,                       /* VAR  */
  YYSYMBOL_INT = 33,                       /* INT  */
  YYSYMBOL_FLOAT32 = 34,                   /* FLOAT32  */
  YYSYMBOL_BOOL = 35,                      /* BOOL  */
  YYSYMBOL_STRING = 36,                    /* STRING  */
  YYSYMBOL_PRINT = 37,                     /* PRINT  */
  YYSYMBOL_PARSEINT = 38,                  /* PARSEINT  */
  YYSYMBOL_FUNC = 39,                      /* FUNC  */
  YYSYMBOL_CMDARGS = 40,                   /* CMDARGS  */
  YYSYMBOL_RESERVED = 41,                  /* RESERVED  */
  YYSYMBOL_INTLIT = 42,                    /* INTLIT  */
  YYSYMBOL_REALLIT = 43,                   /* REALLIT  */
  YYSYMBOL_ID = 44,                        /* ID  */
  YYSYMBOL_STR = 45,                       /* STR  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_Program = 47,                   /* Program  */
  YYSYMBOL_Declarations = 48,              /* Declarations  */
  YYSYMBOL_VarDeclaration = 49,            /* VarDeclaration  */
  YYSYMBOL_VarSpecList = 50,               /* VarSpecList  */
  YYSYMBOL_VarSpec = 51,                   /* VarSpec  */
  YYSYMBOL_Type = 52,                      /* Type  */
  YYSYMBOL_FuncDeclaration = 53,           /* FuncDeclaration  */
  YYSYMBOL_Parameters = 54,                /* Parameters  */
  YYSYMBOL_FuncBody = 55,                  /* FuncBody  */
  YYSYMBOL_VarsAndStatements = 56,         /* VarsAndStatements  */
  YYSYMBOL_StatementList = 57,             /* StatementList  */
  YYSYMBOL_Statement = 58,                 /* Statement  */
  YYSYMBOL_ParseArgs = 59,                 /* ParseArgs  */
  YYSYMBOL_FuncInvocationList = 60,        /* FuncInvocationList  */
  YYSYMBOL_FuncInvocation = 61,            /* FuncInvocation  */
  YYSYMBOL_Expr = 62                       /* Expr  */
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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_uint8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   363

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  149

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    80,    80,    82,    83,    84,    87,    91,    97,    98,
     101,   104,   105,   106,   107,   110,   113,   117,   122,   127,
     128,   131,   134,   135,   136,   137,   140,   141,   144,   145,
     147,   150,   154,   155,   156,   157,   158,   159,   160,   161,
     163,   166,   168,   171,   172,   175,   176,   177,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201
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
  "\"end of file\"", "error", "\"invalid token\"", "SEMICOLON", "BLANKID",
  "PACKAGE", "RETURN", "AND", "ASSIGN", "STAR", "COMMA", "DIV", "EQ", "GE",
  "GT", "LBRACE", "LE", "LPAR", "LSQ", "LT", "MINUS", "MOD", "NE", "NOT",
  "OR", "PLUS", "RBRACE", "RPAR", "RSQ", "ELSE", "FOR", "IF", "VAR", "INT",
  "FLOAT32", "BOOL", "STRING", "PRINT", "PARSEINT", "FUNC", "CMDARGS",
  "RESERVED", "INTLIT", "REALLIT", "ID", "STR", "$accept", "Program",
  "Declarations", "VarDeclaration", "VarSpecList", "VarSpec", "Type",
  "FuncDeclaration", "Parameters", "FuncBody", "VarsAndStatements",
  "StatementList", "Statement", "ParseArgs", "FuncInvocationList",
  "FuncInvocation", "Expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-66)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,   -34,    26,    53,   -66,   -66,   -11,   -13,    13,    62,
      63,    27,   -66,   175,   -66,    61,   -66,   -66,    79,    39,
     -66,   -66,   -66,   -66,   -66,   -22,    64,   -66,    34,   126,
      -4,   -66,   -66,    81,   -66,   -66,    50,    34,    49,   -66,
     126,    81,   -66,   -66,   -66,   170,   -66,   -66,   163,   170,
      86,    43,    98,   103,   -66,   -66,   -66,   -66,    88,   170,
     170,   170,   -66,   -66,    90,   -66,   304,    84,   -66,   266,
     285,   156,   170,   105,    75,   -66,   -66,    85,   228,   -66,
     -66,   -66,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   -66,   113,   119,   -66,   -66,
      96,   247,   304,   116,    99,   -66,     5,   304,   -66,   -66,
     338,   -66,   -66,    52,    52,    52,    52,    52,     9,   -66,
      52,   323,     9,   -66,   -66,   121,   138,   -66,   -66,    91,
     -66,   170,   -66,   -66,   104,   118,   304,   122,     8,   -66,
     111,   124,   140,   -66,   170,   -66,   208,   127,   -66
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     2,     0,     0,     0,
       0,     0,     8,     0,     6,     0,     4,     5,     0,     0,
      11,    12,    13,    14,    10,     0,     0,     9,     0,     0,
       0,     7,    22,     0,    15,    19,     0,     0,     0,    17,
       0,     0,    16,    40,    23,    34,    26,    21,     0,     0,
       0,     0,     0,     0,    37,    36,    20,    18,     0,     0,
       0,     0,    64,    65,    66,    67,    35,     0,    26,     0,
       0,     0,     0,     0,     0,    24,    25,     0,     0,    62,
      61,    63,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,     0,     0,    26,    26,
       0,     0,    28,     0,     0,    45,     0,    43,    69,    68,
      49,    58,    59,    52,    55,    51,    54,    50,    57,    60,
      53,    48,    56,    27,    32,     0,     0,    39,    38,     0,
      47,     0,    46,    33,    30,     0,    44,     0,     0,    26,
       0,     0,     0,    42,     0,    31,     0,     0,    41
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -66,   -66,   -66,   102,   -66,   132,   -21,   -66,   -66,    21,
     -66,   -65,   110,   -66,   -66,   -38,   -47
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     6,     9,    13,    14,    24,    10,    30,    34,
      38,    67,    96,    54,   106,    65,    66
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      55,    69,    70,    97,    11,    28,    36,    33,    35,   140,
       3,    78,    79,    80,    81,   131,    41,     1,    83,    56,
      84,     7,    29,    37,   101,   102,     4,   107,     8,    55,
      91,    12,   132,   125,   126,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   141,    32,
      43,    72,    44,    73,    39,    45,     5,    15,    42,    55,
      74,    83,    57,    84,    46,    16,    17,    20,    21,    22,
      23,    12,    90,    91,   142,    47,   104,    94,    25,    48,
      49,     7,    26,    27,   136,    43,    50,    55,    55,    77,
      45,    31,    58,    51,    40,    59,    32,   146,    60,    46,
      61,    75,   105,    71,    55,    58,    76,    74,    59,   103,
      95,    60,   108,    61,    48,    49,   123,    62,    63,    64,
      43,    50,    43,   127,   129,    45,   130,    45,    51,   135,
      62,    63,    64,   137,    46,   138,    46,   139,   143,    43,
      52,    43,   144,    18,    45,   124,    45,   133,    53,    48,
      49,    48,    49,    46,   148,    46,    50,     0,    50,    20,
      21,    22,    23,    51,   134,    51,   145,     0,    48,    49,
      48,    49,     0,    58,     0,    50,    59,    50,    68,    60,
      58,    61,    51,    59,    51,    19,    60,    58,    61,     0,
      59,     0,     0,    60,     0,    61,     0,     0,    62,    63,
      64,   100,     0,     0,     0,    62,    63,    64,    20,    21,
      22,    23,    62,    63,    64,    82,     0,    83,     0,    84,
      85,    86,    87,     0,    88,     0,     0,    89,    90,    91,
      92,     0,    93,    94,     0,    82,   147,    83,     0,    84,
      85,    86,    87,     0,    88,     0,     0,    89,    90,    91,
      92,     0,    93,    94,    82,   109,    83,     0,    84,    85,
      86,    87,     0,    88,     0,     0,    89,    90,    91,    92,
       0,    93,    94,    82,   128,    83,     0,    84,    85,    86,
      87,    98,    88,     0,     0,    89,    90,    91,    92,     0,
      93,    94,    82,     0,    83,     0,    84,    85,    86,    87,
      99,    88,     0,     0,    89,    90,    91,    92,     0,    93,
      94,    82,     0,    83,     0,    84,    85,    86,    87,     0,
      88,     0,     0,    89,    90,    91,    92,     0,    93,    94,
      82,     0,    83,     0,    84,    85,    86,    87,     0,    88,
       0,     0,    89,    90,    91,    92,     0,    83,    94,    84,
      85,    86,    87,     0,    88,     0,     0,    89,    90,    91,
      92,     0,     0,    94
};

static const yytype_int16 yycheck[] =
{
      38,    48,    49,    68,    17,    27,    10,    28,    29,     1,
      44,    58,    59,    60,    61,    10,    37,     5,     9,    40,
      11,    32,    44,    27,    71,    72,     0,    74,    39,    67,
      21,    44,    27,    98,    99,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    40,    15,
       1,     8,     3,    10,    33,     6,     3,    44,    37,    97,
      17,     9,    41,    11,    15,     3,     3,    33,    34,    35,
      36,    44,    20,    21,   139,    26,     1,    25,    17,    30,
      31,    32,     3,    44,   131,     1,    37,   125,   126,     1,
       6,    27,    17,    44,    44,    20,    15,   144,    23,    15,
      25,     3,    27,    17,   142,    17,     3,    17,    20,     4,
      26,    23,    27,    25,    30,    31,     3,    42,    43,    44,
       1,    37,     1,    27,     8,     6,    27,     6,    44,    38,
      42,    43,    44,    29,    15,    17,    15,    15,    27,     1,
      38,     1,    18,    11,     6,    26,     6,    26,    38,    30,
      31,    30,    31,    15,    27,    15,    37,    -1,    37,    33,
      34,    35,    36,    44,    26,    44,    26,    -1,    30,    31,
      30,    31,    -1,    17,    -1,    37,    20,    37,    15,    23,
      17,    25,    44,    20,    44,    10,    23,    17,    25,    -1,
      20,    -1,    -1,    23,    -1,    25,    -1,    -1,    42,    43,
      44,    45,    -1,    -1,    -1,    42,    43,    44,    33,    34,
      35,    36,    42,    43,    44,     7,    -1,     9,    -1,    11,
      12,    13,    14,    -1,    16,    -1,    -1,    19,    20,    21,
      22,    -1,    24,    25,    -1,     7,    28,     9,    -1,    11,
      12,    13,    14,    -1,    16,    -1,    -1,    19,    20,    21,
      22,    -1,    24,    25,     7,    27,     9,    -1,    11,    12,
      13,    14,    -1,    16,    -1,    -1,    19,    20,    21,    22,
      -1,    24,    25,     7,    27,     9,    -1,    11,    12,    13,
      14,    15,    16,    -1,    -1,    19,    20,    21,    22,    -1,
      24,    25,     7,    -1,     9,    -1,    11,    12,    13,    14,
      15,    16,    -1,    -1,    19,    20,    21,    22,    -1,    24,
      25,     7,    -1,     9,    -1,    11,    12,    13,    14,    -1,
      16,    -1,    -1,    19,    20,    21,    22,    -1,    24,    25,
       7,    -1,     9,    -1,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    19,    20,    21,    22,    -1,     9,    25,    11,
      12,    13,    14,    -1,    16,    -1,    -1,    19,    20,    21,
      22,    -1,    -1,    25
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    47,    44,     0,     3,    48,    32,    39,    49,
      53,    17,    44,    50,    51,    44,     3,     3,    51,    10,
      33,    34,    35,    36,    52,    17,     3,    44,    27,    44,
      54,    27,    15,    52,    55,    52,    10,    27,    56,    55,
      44,    52,    55,     1,     3,     6,    15,    26,    30,    31,
      37,    44,    49,    58,    59,    61,    52,    55,    17,    20,
      23,    25,    42,    43,    44,    61,    62,    57,    15,    62,
      62,    17,     8,    10,    17,     3,     3,     1,    62,    62,
      62,    62,     7,     9,    11,    12,    13,    14,    16,    19,
      20,    21,    22,    24,    25,    26,    58,    57,    15,    15,
      45,    62,    62,     4,     1,    27,    60,    62,    27,    27,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,     3,    26,    57,    57,    27,    27,     8,
      27,    10,    27,    26,    26,    38,    62,    29,    17,    15,
       1,    40,    57,    27,    18,    26,    62,    28,    27
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    48,    49,    49,    50,    50,
      51,    52,    52,    52,    52,    53,    53,    53,    53,    54,
      54,    55,    56,    56,    56,    56,    57,    57,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    59,    59,    60,    60,    61,    61,    61,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     0,     3,     3,     2,     5,     1,     3,
       2,     1,     1,     1,     1,     5,     6,     6,     7,     2,
       4,     3,     0,     2,     3,     3,     0,     3,     3,     3,
       5,     9,     4,     5,     1,     2,     1,     1,     4,     4,
       1,    11,     8,     1,     3,     3,     4,     4,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     1,     1,     1,     1,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* Program: PACKAGE ID SEMICOLON Declarations  */
#line 80 "jucompiler.y"
                                                                                                                        {root = create_node("Program"); add_child(root, (yyvsp[0].no)); (yyval.no) = root;}
#line 1413 "y.tab.c"
    break;

  case 3: /* Declarations: %empty  */
#line 82 "jucompiler.y"
                                                                                                                                                {(yyval.no) = NULL;}
#line 1419 "y.tab.c"
    break;

  case 4: /* Declarations: Declarations VarDeclaration SEMICOLON  */
#line 83 "jucompiler.y"
                                                                                                                        {if ((yyvsp[-2].no) != NULL){(yyval.no) = (yyvsp[-2].no); add_sibling((yyvsp[-2].no), (yyvsp[-1].no));} else {(yyval.no) = (yyvsp[-1].no);}}
#line 1425 "y.tab.c"
    break;

  case 5: /* Declarations: Declarations FuncDeclaration SEMICOLON  */
#line 84 "jucompiler.y"
                                                                                                                        {if ((yyvsp[-2].no) != NULL){(yyval.no) = (yyvsp[-2].no); add_sibling((yyvsp[-2].no), (yyvsp[-1].no));} else {(yyval.no) = (yyvsp[-1].no);}}
#line 1431 "y.tab.c"
    break;

  case 6: /* VarDeclaration: VAR VarSpec  */
#line 87 "jucompiler.y"
                                                                                                                                {(yyval.no) = create_node("VarDecl");add_child((yyval.no), (yyvsp[0].no));node* temp = (yyvsp[0].no)->siblings->siblings; 
																				(yyvsp[0].no)->siblings->siblings = NULL;while (temp != NULL){ node* vardecl = create_node("VarDecl");
																			 	add_child(vardecl, create_node((yyvsp[0].no)->token)); add_child(vardecl, temp); add_sibling((yyval.no), vardecl);
																				node* ant = temp; temp = temp->siblings; ant->siblings = NULL;}}
#line 1440 "y.tab.c"
    break;

  case 7: /* VarDeclaration: VAR LPAR VarSpec SEMICOLON RPAR  */
#line 91 "jucompiler.y"
                                                                                                                                {(yyval.no) = create_node("VarDecl"); add_child((yyval.no), (yyvsp[-2].no)); node* temp = (yyvsp[-2].no)->siblings->siblings; 
																				(yyvsp[-2].no)->siblings->siblings = NULL; while (temp != NULL){ node* vardecl = create_node("VarDecl");
																				add_child(vardecl, create_node((yyvsp[-2].no)->token)); add_child(vardecl, temp); add_sibling((yyval.no), vardecl);
																				node* ant = temp; temp = temp->siblings; ant->siblings = NULL;}}
#line 1449 "y.tab.c"
    break;

  case 8: /* VarSpecList: ID  */
#line 97 "jucompiler.y"
                                                                                                                                                {(yyval.no) = new_id((yyvsp[0].token_lex));}
#line 1455 "y.tab.c"
    break;

  case 9: /* VarSpecList: VarSpecList COMMA ID  */
#line 98 "jucompiler.y"
                                                                                                                                        {(yyval.no) = (yyvsp[-2].no); add_sibling((yyval.no), new_id((yyvsp[0].token_lex)));}
#line 1461 "y.tab.c"
    break;

  case 10: /* VarSpec: VarSpecList Type  */
#line 101 "jucompiler.y"
                                                                                                                                        {(yyval.no) = create_node((yyvsp[0].type)); add_sibling((yyval.no), (yyvsp[-1].no));}
#line 1467 "y.tab.c"
    break;

  case 11: /* Type: INT  */
#line 104 "jucompiler.y"
                                                                                                                                                        {(yyval.type) = "Int";}
#line 1473 "y.tab.c"
    break;

  case 12: /* Type: FLOAT32  */
#line 105 "jucompiler.y"
                                                                                                                                                        {(yyval.type) = "Float32";}
#line 1479 "y.tab.c"
    break;

  case 13: /* Type: BOOL  */
#line 106 "jucompiler.y"
                                                                                                                                                        {(yyval.type) = "Bool";}
#line 1485 "y.tab.c"
    break;

  case 14: /* Type: STRING  */
#line 107 "jucompiler.y"
                                                                                                                                                        {(yyval.type) = "String";}
#line 1491 "y.tab.c"
    break;

  case 15: /* FuncDeclaration: FUNC ID LPAR RPAR FuncBody  */
#line 110 "jucompiler.y"
                                                                                                                {(yyval.no) = create_node("FuncDecl");
																				node* funcheader = create_node("FuncHeader"); add_child((yyval.no), funcheader); add_child(funcheader, new_id((yyvsp[-3].token_lex)));
																				node* funcparam = create_node("FuncParams"); add_child(funcheader, funcparam); add_child((yyval.no), (yyvsp[0].no));}
#line 1499 "y.tab.c"
    break;

  case 16: /* FuncDeclaration: FUNC ID LPAR Parameters RPAR FuncBody  */
#line 113 "jucompiler.y"
                                                                                                                        {(yyval.no) = create_node("FuncDecl");
																				node* funcheader = create_node("FuncHeader"); add_child((yyval.no), funcheader); add_child(funcheader, new_id((yyvsp[-4].token_lex)));
																				node* funcparam = create_node("FuncParams"); add_child(funcheader, funcparam); add_child(funcparam, (yyvsp[-2].no));
																				add_child((yyval.no), (yyvsp[0].no));}
#line 1508 "y.tab.c"
    break;

  case 17: /* FuncDeclaration: FUNC ID LPAR RPAR Type FuncBody  */
#line 117 "jucompiler.y"
                                                                                                                                {(yyval.no) = create_node("FuncDecl");
																				node* funcheader = create_node("FuncHeader"); add_child((yyval.no), funcheader); add_child(funcheader, new_id((yyvsp[-4].token_lex))); 
																				add_child(funcheader, create_node((yyvsp[-1].type)));node* funcparam = create_node("FuncParams"); 
																				add_child(funcheader, funcparam); add_child((yyval.no), (yyvsp[0].no));}
#line 1517 "y.tab.c"
    break;

  case 18: /* FuncDeclaration: FUNC ID LPAR Parameters RPAR Type FuncBody  */
#line 122 "jucompiler.y"
                                                                                                                {(yyval.no) = create_node("FuncDecl");
																				node* funcheader = create_node("FuncHeader"); add_child((yyval.no), funcheader); add_child(funcheader, new_id((yyvsp[-5].token_lex))); 
																				add_child(funcheader, create_node((yyvsp[-1].type)));node* funcparam = create_node("FuncParams"); 
																				add_child(funcheader, funcparam); add_child(funcparam, (yyvsp[-3].no)); add_child((yyval.no), (yyvsp[0].no));}
#line 1526 "y.tab.c"
    break;

  case 19: /* Parameters: ID Type  */
#line 127 "jucompiler.y"
                                                                                                                                        {(yyval.no) = create_node("ParamDecl"); add_child((yyval.no), create_node((yyvsp[0].type))); add_child((yyval.no), new_id((yyvsp[-1].token_lex)));}
#line 1532 "y.tab.c"
    break;

  case 20: /* Parameters: Parameters COMMA ID Type  */
#line 128 "jucompiler.y"
                                                                                                                                        {(yyval.no) = (yyvsp[-3].no); node* paramdecl = create_node("ParamDecl"); add_child(paramdecl, create_node((yyvsp[0].type))); 
																				add_child(paramdecl, new_id((yyvsp[-1].token_lex))); add_sibling((yyval.no), paramdecl);}
#line 1539 "y.tab.c"
    break;

  case 21: /* FuncBody: LBRACE VarsAndStatements RBRACE  */
#line 131 "jucompiler.y"
                                                                                                                        {(yyval.no) = create_node("FuncBody"); add_child((yyval.no), (yyvsp[-1].no));}
#line 1545 "y.tab.c"
    break;

  case 22: /* VarsAndStatements: %empty  */
#line 134 "jucompiler.y"
                                                                                                                                        {(yyval.no) = NULL;}
#line 1551 "y.tab.c"
    break;

  case 23: /* VarsAndStatements: VarsAndStatements SEMICOLON  */
#line 135 "jucompiler.y"
                                                                                                                                {(yyval.no) = (yyvsp[-1].no);}
#line 1557 "y.tab.c"
    break;

  case 24: /* VarsAndStatements: VarsAndStatements VarDeclaration SEMICOLON  */
#line 136 "jucompiler.y"
                                                                                                                {if ((yyvsp[-2].no) != NULL) {(yyval.no) = (yyvsp[-2].no); add_sibling((yyvsp[-2].no), (yyvsp[-1].no));} else {(yyval.no) = (yyvsp[-1].no);}}
#line 1563 "y.tab.c"
    break;

  case 25: /* VarsAndStatements: VarsAndStatements Statement SEMICOLON  */
#line 137 "jucompiler.y"
                                                                                                                        {if ((yyvsp[-2].no) != NULL) {(yyval.no) = (yyvsp[-2].no); add_sibling((yyvsp[-2].no), (yyvsp[-1].no));} else {(yyval.no) = (yyvsp[-1].no);}}
#line 1569 "y.tab.c"
    break;

  case 26: /* StatementList: %empty  */
#line 140 "jucompiler.y"
                                                                                                                                                {(yyval.no) = NULL;}
#line 1575 "y.tab.c"
    break;

  case 27: /* StatementList: StatementList Statement SEMICOLON  */
#line 141 "jucompiler.y"
                                                                                                                        {if ((yyvsp[-2].no) != NULL) {(yyval.no) = (yyvsp[-2].no); add_sibling((yyvsp[-2].no), (yyvsp[-1].no));} else {(yyval.no) = (yyvsp[-1].no);}}
#line 1581 "y.tab.c"
    break;

  case 28: /* Statement: ID ASSIGN Expr  */
#line 144 "jucompiler.y"
                                                                                                                                        {(yyval.no) = create_node("Assign"); add_child((yyval.no), new_id((yyvsp[-2].token_lex))); add_child((yyval.no), (yyvsp[0].no));}
#line 1587 "y.tab.c"
    break;

  case 29: /* Statement: LBRACE StatementList RBRACE  */
#line 145 "jucompiler.y"
                                                                                                                                {if ((yyvsp[-1].no) == NULL){ (yyval.no) = NULL; } else if (nullBlock((yyvsp[-1].no))){ (yyval.no) = create_node("Block"); add_child((yyval.no), (yyvsp[-1].no));}
																				else {(yyval.no) = (yyvsp[-1].no);}}
#line 1594 "y.tab.c"
    break;

  case 30: /* Statement: IF Expr LBRACE StatementList RBRACE  */
#line 147 "jucompiler.y"
                                                                                                                        {(yyval.no) = create_node("If"); add_child((yyval.no), (yyvsp[-3].no));
																				node* block = create_node("Block"); add_child(block, (yyvsp[-1].no)); add_child((yyval.no), block);
																				add_child((yyval.no), create_node("Block"));}
#line 1602 "y.tab.c"
    break;

  case 31: /* Statement: IF Expr LBRACE StatementList RBRACE ELSE LBRACE StatementList RBRACE  */
#line 151 "jucompiler.y"
                                                                                                                                {(yyval.no) = create_node("If"); add_child((yyval.no), (yyvsp[-7].no));
																				node* block = create_node("Block"); add_child(block, (yyvsp[-5].no)); add_child((yyval.no), block);
																				node* block2 = create_node("Block"); add_child(block2, (yyvsp[-1].no)); add_child((yyval.no), block2);}
#line 1610 "y.tab.c"
    break;

  case 32: /* Statement: FOR LBRACE StatementList RBRACE  */
#line 154 "jucompiler.y"
                                                                                                                                {(yyval.no) = create_node("For"); node* block = create_node("Block"); add_child(block, (yyvsp[-1].no)); add_child((yyval.no), block);}
#line 1616 "y.tab.c"
    break;

  case 33: /* Statement: FOR Expr LBRACE StatementList RBRACE  */
#line 155 "jucompiler.y"
                                                                                                                        {(yyval.no) = create_node("For"); add_child((yyval.no), (yyvsp[-3].no)); node* block = create_node("Block"); add_child(block, (yyvsp[-1].no)); add_child((yyval.no), block);}
#line 1622 "y.tab.c"
    break;

  case 34: /* Statement: RETURN  */
#line 156 "jucompiler.y"
                                                                                                                                                        {(yyval.no) = create_node("Return");}
#line 1628 "y.tab.c"
    break;

  case 35: /* Statement: RETURN Expr  */
#line 157 "jucompiler.y"
                                                                                                                                                {(yyval.no) = create_node("Return"); add_child((yyval.no), (yyvsp[0].no));}
#line 1634 "y.tab.c"
    break;

  case 36: /* Statement: FuncInvocation  */
#line 158 "jucompiler.y"
                                                                                                                                                {(yyval.no) = (yyvsp[0].no);}
#line 1640 "y.tab.c"
    break;

  case 37: /* Statement: ParseArgs  */
#line 159 "jucompiler.y"
                                                                                                                                                {(yyval.no) = (yyvsp[0].no);}
#line 1646 "y.tab.c"
    break;

  case 38: /* Statement: PRINT LPAR Expr RPAR  */
#line 160 "jucompiler.y"
                                                                                                                                        {(yyval.no) = create_node("Print"); add_child((yyval.no), (yyvsp[-1].no));}
#line 1652 "y.tab.c"
    break;

  case 39: /* Statement: PRINT LPAR STR RPAR  */
#line 161 "jucompiler.y"
                                                                                                                                        {node* temp = create_node("Printds"); char arr[1000]; sprintf(arr, "StrLit(%s)", (yyvsp[-1].token_lex)); 
																				node* str = create_node(arr); add_child(temp, str); (yyval.no) = temp;}
#line 1659 "y.tab.c"
    break;

  case 40: /* Statement: error  */
#line 163 "jucompiler.y"
                                                                                                                                                        {(yyval.no) = NULL;}
#line 1665 "y.tab.c"
    break;

  case 41: /* ParseArgs: ID COMMA BLANKID ASSIGN PARSEINT LPAR CMDARGS LSQ Expr RSQ RPAR  */
#line 166 "jucompiler.y"
                                                                                        {node* temp = create_node("ParseArgs"); char str[1000]; sprintf(str, "Id(%s)", (yyvsp[-10].token_lex)); node* id = create_node(str);
																				add_child(temp, id); add_child(temp, (yyvsp[-2].no)); (yyval.no) = temp;}
#line 1672 "y.tab.c"
    break;

  case 42: /* ParseArgs: ID COMMA BLANKID ASSIGN PARSEINT LPAR error RPAR  */
#line 168 "jucompiler.y"
                                                                                                                {(yyval.no) = NULL;}
#line 1678 "y.tab.c"
    break;

  case 43: /* FuncInvocationList: Expr  */
#line 171 "jucompiler.y"
                                                                                                                                        {(yyval.no) = (yyvsp[0].no);}
#line 1684 "y.tab.c"
    break;

  case 44: /* FuncInvocationList: FuncInvocationList COMMA Expr  */
#line 172 "jucompiler.y"
                                                                                                                                {(yyval.no) = (yyvsp[-2].no); add_sibling((yyvsp[-2].no), (yyvsp[0].no));}
#line 1690 "y.tab.c"
    break;

  case 45: /* FuncInvocation: ID LPAR RPAR  */
#line 175 "jucompiler.y"
                                                                                                                                {(yyval.no) = create_node("Call"); add_child((yyval.no), new_id((yyvsp[-2].token_lex)));}
#line 1696 "y.tab.c"
    break;

  case 46: /* FuncInvocation: ID LPAR FuncInvocationList RPAR  */
#line 176 "jucompiler.y"
                                                                                                                                {(yyval.no) = create_node("Call"); add_child((yyval.no), new_id((yyvsp[-3].token_lex))); add_child((yyval.no), (yyvsp[-1].no));}
#line 1702 "y.tab.c"
    break;

  case 47: /* FuncInvocation: ID LPAR error RPAR  */
#line 177 "jucompiler.y"
                                                                                                                                        {(yyval.no) = NULL;}
#line 1708 "y.tab.c"
    break;

  case 48: /* Expr: Expr OR Expr  */
#line 180 "jucompiler.y"
                                                                                                                                                {node* or = create_node("Or"); add_child(or, (yyvsp[-2].no)); add_child(or, (yyvsp[0].no)); (yyval.no) = or;}
#line 1714 "y.tab.c"
    break;

  case 49: /* Expr: Expr AND Expr  */
#line 181 "jucompiler.y"
                                                                                                                                                {node* and = create_node("And"); add_child(and, (yyvsp[-2].no)); add_child(and, (yyvsp[0].no)); (yyval.no) = and;}
#line 1720 "y.tab.c"
    break;

  case 50: /* Expr: Expr LT Expr  */
#line 182 "jucompiler.y"
                                                                                                                                                {node* lt = create_node("Lt"); add_child(lt, (yyvsp[-2].no)); add_child(lt, (yyvsp[0].no)); (yyval.no) = lt;}
#line 1726 "y.tab.c"
    break;

  case 51: /* Expr: Expr GT Expr  */
#line 183 "jucompiler.y"
                                                                                                                                                {node* gt = create_node("Gt"); add_child(gt, (yyvsp[-2].no)); add_child(gt, (yyvsp[0].no)); (yyval.no) = gt;}
#line 1732 "y.tab.c"
    break;

  case 52: /* Expr: Expr EQ Expr  */
#line 184 "jucompiler.y"
                                                                                                                                                {node* eq = create_node("Eq"); add_child(eq, (yyvsp[-2].no)); add_child(eq, (yyvsp[0].no)); (yyval.no) = eq;}
#line 1738 "y.tab.c"
    break;

  case 53: /* Expr: Expr NE Expr  */
#line 185 "jucompiler.y"
                                                                                                                                                {node* ne = create_node("Ne"); add_child(ne, (yyvsp[-2].no)); add_child(ne, (yyvsp[0].no)); (yyval.no) = ne;}
#line 1744 "y.tab.c"
    break;

  case 54: /* Expr: Expr LE Expr  */
#line 186 "jucompiler.y"
                                                                                                                                                {node* le = create_node("Le"); add_child(le, (yyvsp[-2].no)); add_child(le, (yyvsp[0].no)); (yyval.no) = le;}
#line 1750 "y.tab.c"
    break;

  case 55: /* Expr: Expr GE Expr  */
#line 187 "jucompiler.y"
                                                                                                                                                {node* ge = create_node("Ge"); add_child(ge, (yyvsp[-2].no)); add_child(ge, (yyvsp[0].no)); (yyval.no) = ge;}
#line 1756 "y.tab.c"
    break;

  case 56: /* Expr: Expr PLUS Expr  */
#line 188 "jucompiler.y"
                                                                                                                                                {node* add = create_node("Add"); add_child(add, (yyvsp[-2].no)); add_child(add, (yyvsp[0].no)); (yyval.no) = add;}
#line 1762 "y.tab.c"
    break;

  case 57: /* Expr: Expr MINUS Expr  */
#line 189 "jucompiler.y"
                                                                                                                                                {node* sub = create_node("Sub"); add_child(sub, (yyvsp[-2].no)); add_child(sub, (yyvsp[0].no)); (yyval.no) = sub;}
#line 1768 "y.tab.c"
    break;

  case 58: /* Expr: Expr STAR Expr  */
#line 190 "jucompiler.y"
                                                                                                                                                {node* mul = create_node("Mul"); add_child(mul, (yyvsp[-2].no)); add_child(mul, (yyvsp[0].no)); (yyval.no) = mul;}
#line 1774 "y.tab.c"
    break;

  case 59: /* Expr: Expr DIV Expr  */
#line 191 "jucompiler.y"
                                                                                                                                                {node* div = create_node("Div"); add_child(div, (yyvsp[-2].no)); add_child(div, (yyvsp[0].no)); (yyval.no) = div;}
#line 1780 "y.tab.c"
    break;

  case 60: /* Expr: Expr MOD Expr  */
#line 192 "jucompiler.y"
                                                                                                                                                {node* mod = create_node("Mod"); add_child(mod, (yyvsp[-2].no)); add_child(mod, (yyvsp[0].no)); (yyval.no) = mod;}
#line 1786 "y.tab.c"
    break;

  case 61: /* Expr: NOT Expr  */
#line 193 "jucompiler.y"
                                                                                                                                                {node* not = create_node("Not"); add_child(not, (yyvsp[0].no)); (yyval.no) = not;}
#line 1792 "y.tab.c"
    break;

  case 62: /* Expr: MINUS Expr  */
#line 194 "jucompiler.y"
                                                                                                                                        {node* minus = create_node("Minus"); add_child(minus, (yyvsp[0].no)); (yyval.no) = minus;}
#line 1798 "y.tab.c"
    break;

  case 63: /* Expr: PLUS Expr  */
#line 195 "jucompiler.y"
                                                                                                                                        {node* plus = create_node("Plus"); add_child(plus, (yyvsp[0].no)); (yyval.no) = plus;}
#line 1804 "y.tab.c"
    break;

  case 64: /* Expr: INTLIT  */
#line 196 "jucompiler.y"
                                                                                                                                                        {char str[1000]; sprintf(str, "IntLit(%s)", (yyvsp[0].token_lex)); (yyval.no) = create_node(str);}
#line 1810 "y.tab.c"
    break;

  case 65: /* Expr: REALLIT  */
#line 197 "jucompiler.y"
                                                                                                                                                        {char str[1000]; sprintf(str, "RealLit(%s)", (yyvsp[0].token_lex)); (yyval.no) = create_node(str);}
#line 1816 "y.tab.c"
    break;

  case 66: /* Expr: ID  */
#line 198 "jucompiler.y"
                                                                                                                                                        {char str[1000]; sprintf(str, "Id(%s)", (yyvsp[0].token_lex)); (yyval.no) = create_node(str);}
#line 1822 "y.tab.c"
    break;

  case 67: /* Expr: FuncInvocation  */
#line 199 "jucompiler.y"
                                                                                                                                                {(yyval.no) = (yyvsp[0].no);}
#line 1828 "y.tab.c"
    break;

  case 68: /* Expr: LPAR Expr RPAR  */
#line 200 "jucompiler.y"
                                                                                                                                                {(yyval.no) = (yyvsp[-1].no);}
#line 1834 "y.tab.c"
    break;

  case 69: /* Expr: LPAR error RPAR  */
#line 201 "jucompiler.y"
                                                                                                                                                {(yyval.no) = NULL;}
#line 1840 "y.tab.c"
    break;


#line 1844 "y.tab.c"

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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 204 "jucompiler.y"


void yyerror (char *s){
	erro_yacc = true;
	printf("Line %d, column %d: %s: %s\n",yylineno,ncol,s,yytext);
}
