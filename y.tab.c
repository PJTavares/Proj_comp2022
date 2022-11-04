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
extern bool flagl,flagt,flag_print;
extern char* yytext;
bool erro_yacc = false;
int yylex(void);
void yyerror (char *s);
no root;
no aux;


#line 91 "y.tab.c"

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
    AND = 258,                     /* AND  */
    ASSIGN = 259,                  /* ASSIGN  */
    STAR = 260,                    /* STAR  */
    COMMA = 261,                   /* COMMA  */
    DIV = 262,                     /* DIV  */
    EQ = 263,                      /* EQ  */
    GE = 264,                      /* GE  */
    GT = 265,                      /* GT  */
    LBRACE = 266,                  /* LBRACE  */
    LE = 267,                      /* LE  */
    LPAR = 268,                    /* LPAR  */
    LSQ = 269,                     /* LSQ  */
    LT = 270,                      /* LT  */
    MINUS = 271,                   /* MINUS  */
    MOD = 272,                     /* MOD  */
    NE = 273,                      /* NE  */
    NOT = 274,                     /* NOT  */
    OR = 275,                      /* OR  */
    PLUS = 276,                    /* PLUS  */
    RBRACE = 277,                  /* RBRACE  */
    RPAR = 278,                    /* RPAR  */
    RSQ = 279,                     /* RSQ  */
    SEMICOLON = 280,               /* SEMICOLON  */
    ARROW = 281,                   /* ARROW  */
    LSHIFT = 282,                  /* LSHIFT  */
    RSHIFT = 283,                  /* RSHIFT  */
    XOR = 284,                     /* XOR  */
    BOOL = 285,                    /* BOOL  */
    CLASS = 286,                   /* CLASS  */
    DOTLENGTH = 287,               /* DOTLENGTH  */
    DOUBLE = 288,                  /* DOUBLE  */
    ELSE = 289,                    /* ELSE  */
    IF = 290,                      /* IF  */
    INT = 291,                     /* INT  */
    PRINT = 292,                   /* PRINT  */
    PARSEINT = 293,                /* PARSEINT  */
    PUBLIC = 294,                  /* PUBLIC  */
    RETURN = 295,                  /* RETURN  */
    STATIC = 296,                  /* STATIC  */
    STRING = 297,                  /* STRING  */
    VOID = 298,                    /* VOID  */
    WHILE = 299,                   /* WHILE  */
    RESERVED = 300,                /* RESERVED  */
    ID = 301,                      /* ID  */
    INTLIT = 302,                  /* INTLIT  */
    STRLIT = 303,                  /* STRLIT  */
    REALLIT = 304,                 /* REALLIT  */
    BOOLLIT = 305                  /* BOOLLIT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define AND 258
#define ASSIGN 259
#define STAR 260
#define COMMA 261
#define DIV 262
#define EQ 263
#define GE 264
#define GT 265
#define LBRACE 266
#define LE 267
#define LPAR 268
#define LSQ 269
#define LT 270
#define MINUS 271
#define MOD 272
#define NE 273
#define NOT 274
#define OR 275
#define PLUS 276
#define RBRACE 277
#define RPAR 278
#define RSQ 279
#define SEMICOLON 280
#define ARROW 281
#define LSHIFT 282
#define RSHIFT 283
#define XOR 284
#define BOOL 285
#define CLASS 286
#define DOTLENGTH 287
#define DOUBLE 288
#define ELSE 289
#define IF 290
#define INT 291
#define PRINT 292
#define PARSEINT 293
#define PUBLIC 294
#define RETURN 295
#define STATIC 296
#define STRING 297
#define VOID 298
#define WHILE 299
#define RESERVED 300
#define ID 301
#define INTLIT 302
#define STRLIT 303
#define REALLIT 304
#define BOOLLIT 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "jucompiler.y"

	struct node* node;
	char* token_lex;

#line 249 "y.tab.c"

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
  YYSYMBOL_AND = 3,                        /* AND  */
  YYSYMBOL_ASSIGN = 4,                     /* ASSIGN  */
  YYSYMBOL_STAR = 5,                       /* STAR  */
  YYSYMBOL_COMMA = 6,                      /* COMMA  */
  YYSYMBOL_DIV = 7,                        /* DIV  */
  YYSYMBOL_EQ = 8,                         /* EQ  */
  YYSYMBOL_GE = 9,                         /* GE  */
  YYSYMBOL_GT = 10,                        /* GT  */
  YYSYMBOL_LBRACE = 11,                    /* LBRACE  */
  YYSYMBOL_LE = 12,                        /* LE  */
  YYSYMBOL_LPAR = 13,                      /* LPAR  */
  YYSYMBOL_LSQ = 14,                       /* LSQ  */
  YYSYMBOL_LT = 15,                        /* LT  */
  YYSYMBOL_MINUS = 16,                     /* MINUS  */
  YYSYMBOL_MOD = 17,                       /* MOD  */
  YYSYMBOL_NE = 18,                        /* NE  */
  YYSYMBOL_NOT = 19,                       /* NOT  */
  YYSYMBOL_OR = 20,                        /* OR  */
  YYSYMBOL_PLUS = 21,                      /* PLUS  */
  YYSYMBOL_RBRACE = 22,                    /* RBRACE  */
  YYSYMBOL_RPAR = 23,                      /* RPAR  */
  YYSYMBOL_RSQ = 24,                       /* RSQ  */
  YYSYMBOL_SEMICOLON = 25,                 /* SEMICOLON  */
  YYSYMBOL_ARROW = 26,                     /* ARROW  */
  YYSYMBOL_LSHIFT = 27,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 28,                    /* RSHIFT  */
  YYSYMBOL_XOR = 29,                       /* XOR  */
  YYSYMBOL_BOOL = 30,                      /* BOOL  */
  YYSYMBOL_CLASS = 31,                     /* CLASS  */
  YYSYMBOL_DOTLENGTH = 32,                 /* DOTLENGTH  */
  YYSYMBOL_DOUBLE = 33,                    /* DOUBLE  */
  YYSYMBOL_ELSE = 34,                      /* ELSE  */
  YYSYMBOL_IF = 35,                        /* IF  */
  YYSYMBOL_INT = 36,                       /* INT  */
  YYSYMBOL_PRINT = 37,                     /* PRINT  */
  YYSYMBOL_PARSEINT = 38,                  /* PARSEINT  */
  YYSYMBOL_PUBLIC = 39,                    /* PUBLIC  */
  YYSYMBOL_RETURN = 40,                    /* RETURN  */
  YYSYMBOL_STATIC = 41,                    /* STATIC  */
  YYSYMBOL_STRING = 42,                    /* STRING  */
  YYSYMBOL_VOID = 43,                      /* VOID  */
  YYSYMBOL_WHILE = 44,                     /* WHILE  */
  YYSYMBOL_RESERVED = 45,                  /* RESERVED  */
  YYSYMBOL_ID = 46,                        /* ID  */
  YYSYMBOL_INTLIT = 47,                    /* INTLIT  */
  YYSYMBOL_STRLIT = 48,                    /* STRLIT  */
  YYSYMBOL_REALLIT = 49,                   /* REALLIT  */
  YYSYMBOL_BOOLLIT = 50,                   /* BOOLLIT  */
  YYSYMBOL_YYACCEPT = 51,                  /* $accept  */
  YYSYMBOL_Program = 52,                   /* Program  */
  YYSYMBOL_Program_Aux = 53,               /* Program_Aux  */
  YYSYMBOL_MethodDecl = 54,                /* MethodDecl  */
  YYSYMBOL_FieldDecl = 55,                 /* FieldDecl  */
  YYSYMBOL_FieldDecl_aux = 56,             /* FieldDecl_aux  */
  YYSYMBOL_Type = 57,                      /* Type  */
  YYSYMBOL_MethodHeader = 58,              /* MethodHeader  */
  YYSYMBOL_MethodHeader_aux = 59,          /* MethodHeader_aux  */
  YYSYMBOL_FormalParams = 60,              /* FormalParams  */
  YYSYMBOL_FormalParams_aux = 61,          /* FormalParams_aux  */
  YYSYMBOL_MethodBody = 62,                /* MethodBody  */
  YYSYMBOL_MethodBody_aux = 63,            /* MethodBody_aux  */
  YYSYMBOL_VarDecl = 64,                   /* VarDecl  */
  YYSYMBOL_VarDecl_aux = 65,               /* VarDecl_aux  */
  YYSYMBOL_Statement = 66,                 /* Statement  */
  YYSYMBOL_Statement_aux = 67,             /* Statement_aux  */
  YYSYMBOL_Expr_aux = 68,                  /* Expr_aux  */
  YYSYMBOL_Statement_aux2 = 69,            /* Statement_aux2  */
  YYSYMBOL_StatementPrint = 70,            /* StatementPrint  */
  YYSYMBOL_MethodInvocation = 71,          /* MethodInvocation  */
  YYSYMBOL_MethodInvocation_aux = 72,      /* MethodInvocation_aux  */
  YYSYMBOL_MethodInvocationExpr = 73,      /* MethodInvocationExpr  */
  YYSYMBOL_Assignment = 74,                /* Assignment  */
  YYSYMBOL_ParseArgs = 75,                 /* ParseArgs  */
  YYSYMBOL_Expr = 76,                      /* Expr  */
  YYSYMBOL_ExprOperations = 77,            /* ExprOperations  */
  YYSYMBOL_Expr_aux2 = 78,                 /* Expr_aux2  */
  YYSYMBOL_Exprlit = 79                    /* Exprlit  */
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
#define YYLAST   386

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  176

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    93,    93,   102,   103,   104,   105,   108,   112,   126,
     129,   130,   134,   135,   136,   139,   144,   153,   154,   157,
     163,   169,   170,   177,   181,   182,   190,   192,   208,   209,
     213,   222,   233,   259,   270,   273,   274,   276,   279,   280,
     288,   289,   292,   293,   294,   295,   298,   299,   302,   307,
     310,   311,   314,   315,   324,   330,   335,   338,   339,   342,
     346,   350,   354,   358,   362,   366,   370,   374,   378,   382,
     386,   390,   394,   398,   402,   406,   409,   412,   415,   417,
     419,   420,   421,   424,   427,   428,   431,   432,   433
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
  "\"end of file\"", "error", "\"invalid token\"", "AND", "ASSIGN",
  "STAR", "COMMA", "DIV", "EQ", "GE", "GT", "LBRACE", "LE", "LPAR", "LSQ",
  "LT", "MINUS", "MOD", "NE", "NOT", "OR", "PLUS", "RBRACE", "RPAR", "RSQ",
  "SEMICOLON", "ARROW", "LSHIFT", "RSHIFT", "XOR", "BOOL", "CLASS",
  "DOTLENGTH", "DOUBLE", "ELSE", "IF", "INT", "PRINT", "PARSEINT",
  "PUBLIC", "RETURN", "STATIC", "STRING", "VOID", "WHILE", "RESERVED",
  "ID", "INTLIT", "STRLIT", "REALLIT", "BOOLLIT", "$accept", "Program",
  "Program_Aux", "MethodDecl", "FieldDecl", "FieldDecl_aux", "Type",
  "MethodHeader", "MethodHeader_aux", "FormalParams", "FormalParams_aux",
  "MethodBody", "MethodBody_aux", "VarDecl", "VarDecl_aux", "Statement",
  "Statement_aux", "Expr_aux", "Statement_aux2", "StatementPrint",
  "MethodInvocation", "MethodInvocation_aux", "MethodInvocationExpr",
  "Assignment", "ParseArgs", "Expr", "ExprOperations", "Expr_aux2",
  "Exprlit", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-39)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-51)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -25,   -38,    10,     4,   -39,    73,   -13,    73,   -10,    17,
      73,    73,   -39,   -39,    23,   -39,   -39,   -39,   -39,   -39,
     -39,    -2,    12,    43,    48,    34,    27,   -39,   179,    22,
     179,    45,    51,   144,    64,    65,    83,   186,    84,    42,
      55,    81,    27,    27,    82,   -39,   -39,   -39,    95,    69,
      88,   -39,   110,   112,   -39,   -39,   144,   111,   186,   170,
       2,   118,   209,   209,   209,     1,   -39,   -39,   -39,   115,
     -39,   -39,   -39,   -39,   257,   -39,   -39,   186,   186,   104,
     135,   -39,   -39,   -39,   -39,   123,   137,   -39,   -39,   -39,
     -39,   -39,   126,   -39,   129,   -39,   134,   146,   147,   149,
      13,   -39,   -39,   -39,   -39,   -39,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   150,   -39,   151,   153,   169,   131,   133,   132,
      39,   -39,   160,   155,   -39,   186,   -39,   -39,   309,   -39,
     -39,   358,   222,   222,   222,   222,   119,   -39,   358,   284,
     119,    97,    97,   334,   160,   -39,   -39,   186,   -39,   135,
     -39,   -39,   141,   158,   -39,   172,   -39,   169,   -39,   137,
     160,   171,   -39,   -39,   -39,   -39
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     9,     6,     0,     2,     4,     5,    12,    14,
      13,     0,     0,     0,     0,    10,     0,     7,    17,     0,
      17,     0,     0,     0,     0,     0,     0,    40,     0,     0,
       0,     0,     0,     0,     0,    43,    44,    45,     0,     0,
       0,    18,    10,     0,     8,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    81,    86,    87,    88,     0,
      84,    57,    85,    41,    58,    80,    83,     0,     0,     0,
      28,    23,    26,    25,    35,     0,    21,    16,    11,    15,
      39,    30,     0,    47,     0,    46,     0,     0,     0,     0,
      81,    76,    77,    75,    82,    34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,     0,     0,    52,     0,     0,     0,
       0,    19,     0,     0,    56,     0,    79,    78,    64,    61,
      62,    69,    70,    71,    72,    73,    60,    63,    74,    65,
      59,    67,    68,    66,     0,    49,    48,     0,    51,    28,
      27,    20,     0,    31,    36,     0,    33,    52,    29,    21,
       0,     0,    53,    22,    32,    55
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -39,   -39,   152,   -39,   -39,   159,    -1,   -39,   163,   -39,
      32,   -39,     8,   -39,    44,   -32,   154,   -39,   -39,   -39,
     -26,   -39,    46,   -24,   -22,   -36,   -27,   -39,   -39
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     9,    10,    11,    31,    40,    23,    50,    51,
     131,    27,    41,    42,   128,    43,    57,    69,    44,    94,
      70,   125,   158,    71,    72,    73,    74,    75,    76
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,    56,    46,    96,    47,    78,     1,    45,     3,    46,
       4,    47,    12,    22,    79,     5,    45,    45,    46,    46,
      47,    47,    92,    95,    56,    99,    79,    49,    32,    49,
      45,    14,    46,   104,    47,   101,   102,   103,    33,    15,
      29,   122,   123,   126,    24,   104,    78,    30,    97,   -24,
      82,    83,   -42,    18,    26,    79,    19,    18,    25,    20,
      19,    28,    34,    20,    35,    36,    21,    37,    52,    18,
      54,    38,    19,    39,     6,    20,    55,    58,    59,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,    -3,    60,    77,     7,   165,
     163,    80,   107,    81,   108,   124,    45,    84,    46,    85,
      47,    87,     8,   114,   115,    86,    29,    61,   118,    98,
      62,   167,   166,    63,   107,    64,   108,   -50,    45,   162,
      46,    61,    47,    91,    62,    89,   115,    63,   174,    64,
     105,   127,    36,   130,    45,    32,    46,   129,    47,   132,
      65,    66,   133,    67,    68,    33,    36,   134,   160,    13,
     135,    32,    16,    17,    65,    66,   -38,    67,    68,   -42,
     136,    33,   137,   154,   155,   157,   156,   159,   161,    34,
     164,    35,    36,    61,    37,   -42,    62,   169,    38,    63,
      39,    64,   170,    53,   175,    34,   171,    35,    36,    61,
      37,   173,    62,   168,    38,    63,    39,    64,    36,    18,
      90,    88,    19,   172,     0,    20,    65,    66,    93,    67,
      68,    48,    61,     0,    36,    62,     0,   107,    63,   108,
      64,     0,    65,    66,     0,    67,    68,     0,   114,   115,
       0,     0,     0,   118,     0,     0,     0,    36,     0,   119,
     120,     0,     0,     0,     0,   100,    66,     0,    67,    68,
     106,     0,   107,     0,   108,   109,   110,   111,     0,   112,
       0,     0,   113,   114,   115,   116,     0,   117,   118,     0,
       0,     0,     0,     0,   119,   120,   121,   106,     0,   107,
       0,   108,   109,   110,   111,     0,   112,     0,     0,   113,
     114,   115,   116,     0,     0,   118,     0,     0,     0,     0,
       0,   119,   120,   121,   107,     0,   108,   109,   110,   111,
       0,   112,     0,     0,   113,   114,   115,   116,     0,     0,
     118,     0,     0,     0,     0,     0,   119,   120,   121,   107,
       0,   108,   109,   110,   111,     0,   112,     0,     0,   113,
     114,   115,   116,     0,     0,   118,     0,     0,     0,     0,
       0,   119,   120,   107,     0,   108,     0,   110,   111,     0,
     112,     0,     0,   113,   114,   115,     0,     0,     0,   118,
       0,     0,     0,     0,     0,   119,   120
};

static const yytype_int16 yycheck[] =
{
      26,    33,    26,     1,    26,     4,    31,    33,    46,    33,
       0,    33,    25,    14,    13,    11,    42,    43,    42,    43,
      42,    43,    58,    59,    56,    61,    13,    28,     1,    30,
      56,    41,    56,    32,    56,    62,    63,    64,    11,    22,
       6,    77,    78,    79,    46,    32,     4,    13,    46,    22,
      42,    43,    25,    30,    11,    13,    33,    30,    46,    36,
      33,    13,    35,    36,    37,    38,    43,    40,    46,    30,
      25,    44,    33,    46,     1,    36,    25,    13,    13,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,    22,    13,    13,    25,   135,
     132,    46,     5,    22,     7,     1,   132,    25,   132,    14,
     132,    23,    39,    16,    17,    46,     6,    13,    21,     1,
      16,   157,   154,    19,     5,    21,     7,    23,   154,   130,
     154,    13,   154,    22,    16,    23,    17,    19,   170,    21,
      25,     6,    38,     6,   170,     1,   170,    24,   170,    23,
      46,    47,    23,    49,    50,    11,    38,    23,    25,     7,
      14,     1,    10,    11,    46,    47,    22,    49,    50,    25,
      23,    11,    23,    23,    23,     6,    23,    46,    46,    35,
      25,    37,    38,    13,    40,    25,    16,    46,    44,    19,
      46,    21,    34,    30,    23,    35,    24,    37,    38,    13,
      40,   169,    16,   159,    44,    19,    46,    21,    38,    30,
      56,    52,    33,   167,    -1,    36,    46,    47,    48,    49,
      50,    42,    13,    -1,    38,    16,    -1,     5,    19,     7,
      21,    -1,    46,    47,    -1,    49,    50,    -1,    16,    17,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    38,    -1,    27,
      28,    -1,    -1,    -1,    -1,    46,    47,    -1,    49,    50,
       3,    -1,     5,    -1,     7,     8,     9,    10,    -1,    12,
      -1,    -1,    15,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,     3,    -1,     5,
      -1,     7,     8,     9,    10,    -1,    12,    -1,    -1,    15,
      16,    17,    18,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,     5,    -1,     7,     8,     9,    10,
      -1,    12,    -1,    -1,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,     5,
      -1,     7,     8,     9,    10,    -1,    12,    -1,    -1,    15,
      16,    17,    18,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    27,    28,     5,    -1,     7,    -1,     9,    10,    -1,
      12,    -1,    -1,    15,    16,    17,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    27,    28
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    31,    52,    46,     0,    11,     1,    25,    39,    53,
      54,    55,    25,    53,    41,    22,    53,    53,    30,    33,
      36,    43,    57,    58,    46,    46,    11,    62,    13,     6,
      13,    56,     1,    11,    35,    37,    38,    40,    44,    46,
      57,    63,    64,    66,    69,    71,    74,    75,    42,    57,
      59,    60,    46,    59,    25,    25,    66,    67,    13,    13,
      13,    13,    16,    19,    21,    46,    47,    49,    50,    68,
      71,    74,    75,    76,    77,    78,    79,    13,     4,    13,
      46,    22,    63,    63,    25,    14,    46,    23,    56,    23,
      67,    22,    76,    48,    70,    76,     1,    46,     1,    76,
      46,    77,    77,    77,    32,    25,     3,     5,     7,     8,
       9,    10,    12,    15,    16,    17,    18,    20,    21,    27,
      28,    29,    76,    76,     1,    72,    76,     6,    65,    24,
       6,    61,    23,    23,    23,    14,    23,    23,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    23,    23,    23,     6,    73,    46,
      25,    46,    57,    66,    25,    76,    66,    76,    65,    46,
      34,    24,    73,    61,    66,    23
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    53,    53,    53,    53,    54,    55,    55,
      56,    56,    57,    57,    57,    58,    58,    59,    59,    60,
      60,    61,    61,    62,    63,    63,    63,    64,    65,    65,
      66,    66,    66,    66,    66,    66,    66,    66,    67,    67,
      68,    68,    69,    69,    69,    69,    70,    70,    71,    71,
      72,    72,    73,    73,    74,    75,    75,    76,    76,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    78,    78,    79,    79,    79
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     0,     2,     2,     2,     4,     6,     2,
       0,     3,     1,     1,     1,     5,     5,     0,     1,     3,
       4,     0,     4,     3,     0,     2,     2,     4,     0,     3,
       3,     5,     7,     5,     3,     2,     5,     2,     0,     2,
       0,     1,     0,     1,     1,     1,     1,     1,     4,     4,
       0,     2,     0,     3,     3,     7,     4,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     3,     3,
       1,     1,     2,     1,     1,     1,     1,     1,     1
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
  case 2: /* Program: CLASS ID LBRACE Program_Aux RBRACE  */
#line 93 "jucompiler.y"
                                                        {root = create_node(raiz,"","Program");
												aux = create_node(id,(yyvsp[-3].token_lex),"Id");
												add_node(root,aux);add_sibling(aux,(yyvsp[-1].node));
												(yyval.node) = root;
												if(flagt == true && erro_yacc == false && flag_print == true){
													print_ast((yyval.node),0);
												}}
#line 1471 "y.tab.c"
    break;

  case 3: /* Program_Aux: %empty  */
#line 102 "jucompiler.y"
                                                                        {(yyval.node) = NULL;}
#line 1477 "y.tab.c"
    break;

  case 4: /* Program_Aux: MethodDecl Program_Aux  */
#line 103 "jucompiler.y"
                                                                {(yyval.node) = (yyvsp[-1].node); add_sibling((yyval.node),(yyvsp[0].node));}
#line 1483 "y.tab.c"
    break;

  case 5: /* Program_Aux: FieldDecl Program_Aux  */
#line 104 "jucompiler.y"
                                                                {(yyval.node) = (yyvsp[-1].node); add_sibling((yyval.node),(yyvsp[0].node));}
#line 1489 "y.tab.c"
    break;

  case 6: /* Program_Aux: SEMICOLON Program_Aux  */
#line 105 "jucompiler.y"
                                                                {(yyval.node) = (yyvsp[0].node);}
#line 1495 "y.tab.c"
    break;

  case 7: /* MethodDecl: PUBLIC STATIC MethodHeader MethodBody  */
#line 108 "jucompiler.y"
                                                        {(yyval.node) = create_node(metodos,"","MethodDecl");
													add_node((yyval.node),(yyvsp[-1].node));add_sibling((yyvsp[-1].node),(yyvsp[0].node));}
#line 1502 "y.tab.c"
    break;

  case 8: /* FieldDecl: PUBLIC STATIC Type ID FieldDecl_aux SEMICOLON  */
#line 112 "jucompiler.y"
                                                                        {(yyval.node) = create_node(var,"","FieldDecl");
																add_node((yyval.node),(yyvsp[-3].node));
																add_sibling((yyvsp[-3].node),create_node(id,(yyvsp[-2].token_lex),"Id"));
																if((yyvsp[-1].node) != NULL){
																	aux = (yyvsp[-1].node);
																	while(aux != NULL){
																		no aux1 = create_node(var,"","FieldDecl");
																		no aux2 = create_node((yyvsp[-3].node)->type,(yyvsp[-3].node)->valor,(yyvsp[-3].node)->s_type);
																		add_node(aux1,aux2);
																		add_sibling(aux2,create_node(id,aux->valor,"Id"));
																		add_sibling((yyval.node),aux1);
																		aux = aux->siblings;
																	}
																	free(aux);}}
#line 1521 "y.tab.c"
    break;

  case 9: /* FieldDecl: error SEMICOLON  */
#line 126 "jucompiler.y"
                                                {(yyval.node) = NULL;erro_yacc = true;}
#line 1527 "y.tab.c"
    break;

  case 10: /* FieldDecl_aux: %empty  */
#line 129 "jucompiler.y"
                                                                        {(yyval.node) = NULL;}
#line 1533 "y.tab.c"
    break;

  case 11: /* FieldDecl_aux: COMMA ID FieldDecl_aux  */
#line 130 "jucompiler.y"
                                                                {(yyval.node) = create_node(id,(yyvsp[-1].token_lex),"Id");
											add_sibling((yyval.node),(yyvsp[0].node));}
#line 1540 "y.tab.c"
    break;

  case 12: /* Type: BOOL  */
#line 134 "jucompiler.y"
                        {(yyval.node) = create_node(terminais,"","Bool");}
#line 1546 "y.tab.c"
    break;

  case 13: /* Type: INT  */
#line 135 "jucompiler.y"
                                        {(yyval.node) = create_node(terminais,"","Int");}
#line 1552 "y.tab.c"
    break;

  case 14: /* Type: DOUBLE  */
#line 136 "jucompiler.y"
                                {(yyval.node) = create_node(terminais,"","Double");}
#line 1558 "y.tab.c"
    break;

  case 15: /* MethodHeader: Type ID LPAR MethodHeader_aux RPAR  */
#line 139 "jucompiler.y"
                                                                {(yyval.node) = create_node(metodos,"","MethodHeader");
														add_node((yyval.node),(yyvsp[-4].node));add_sibling((yyvsp[-4].node),create_node(id,(yyvsp[-3].token_lex),"Id"));
														aux = create_node(metodos,"","MethodParams");
														add_sibling((yyvsp[-4].node),aux);add_node(aux,(yyvsp[-1].node));}
#line 1567 "y.tab.c"
    break;

  case 16: /* MethodHeader: VOID ID LPAR MethodHeader_aux RPAR  */
#line 144 "jucompiler.y"
                                                                                {(yyval.node) = create_node(metodos, "", "MethodHeader");
														aux = create_node(terminais, "", "Void");
														add_node((yyval.node), aux);
														add_sibling(aux, create_node(id, (yyvsp[-3].token_lex), "Id"));
														no aux2 = create_node(metodos, "", "MethodParams");
														add_sibling(aux, aux2);
														add_node(aux2, (yyvsp[-1].node));}
#line 1579 "y.tab.c"
    break;

  case 17: /* MethodHeader_aux: %empty  */
#line 153 "jucompiler.y"
                                                                {(yyval.node) = NULL;}
#line 1585 "y.tab.c"
    break;

  case 18: /* MethodHeader_aux: FormalParams  */
#line 154 "jucompiler.y"
                                                                {(yyval.node) = (yyvsp[0].node);}
#line 1591 "y.tab.c"
    break;

  case 19: /* FormalParams: Type ID FormalParams_aux  */
#line 157 "jucompiler.y"
                                                        {(yyval.node) = create_node(metodos, "", "ParamDecl");
												add_node((yyval.node), (yyvsp[-2].node));
												aux = create_node(id, (yyvsp[-1].token_lex), "Id");
												add_sibling((yyvsp[-2].node), aux);
												add_sibling((yyval.node), (yyvsp[0].node));}
#line 1601 "y.tab.c"
    break;

  case 20: /* FormalParams: STRING LSQ RSQ ID  */
#line 163 "jucompiler.y"
                                                                                {(yyval.node) = create_node(metodos, "", "ParamDecl");
												aux = create_node(metodos, "", "StringArray");
												add_node((yyval.node), aux);
												add_sibling(aux, create_node(id, (yyvsp[0].token_lex), "Id"));}
#line 1610 "y.tab.c"
    break;

  case 21: /* FormalParams_aux: %empty  */
#line 169 "jucompiler.y"
                                                                                                {(yyval.node) = NULL;}
#line 1616 "y.tab.c"
    break;

  case 22: /* FormalParams_aux: COMMA Type ID FormalParams_aux  */
#line 170 "jucompiler.y"
                                                                                {(yyval.node) = create_node(metodos, "", "ParamDecl");
														aux = create_node(id, (yyvsp[-1].token_lex), "Id");
														add_node((yyval.node), (yyvsp[-2].node));
														add_sibling((yyvsp[-2].node), aux);
														add_sibling((yyval.node), (yyvsp[0].node));}
#line 1626 "y.tab.c"
    break;

  case 23: /* MethodBody: LBRACE MethodBody_aux RBRACE  */
#line 177 "jucompiler.y"
                                                        {(yyval.node) = create_node(metodos, "", "MethodBody");
												add_node((yyval.node), (yyvsp[-1].node));}
#line 1633 "y.tab.c"
    break;

  case 24: /* MethodBody_aux: %empty  */
#line 181 "jucompiler.y"
                                                                                {(yyval.node) = NULL;}
#line 1639 "y.tab.c"
    break;

  case 25: /* MethodBody_aux: Statement MethodBody_aux  */
#line 182 "jucompiler.y"
                                                                        {if ((yyvsp[-1].node) != NULL){
													(yyval.node) = (yyvsp[-1].node);
													add_sibling((yyval.node),(yyvsp[0].node));
												}
												else{
													(yyval.node) = (yyvsp[0].node);	
												}}
#line 1651 "y.tab.c"
    break;

  case 26: /* MethodBody_aux: VarDecl MethodBody_aux  */
#line 190 "jucompiler.y"
                                                                        {(yyval.node) = (yyvsp[-1].node);add_sibling((yyval.node),(yyvsp[0].node));}
#line 1657 "y.tab.c"
    break;

  case 27: /* VarDecl: Type ID VarDecl_aux SEMICOLON  */
#line 192 "jucompiler.y"
                                                        {(yyval.node) = create_node(metodos, "", "VarDecl");
												add_node((yyval.node), (yyvsp[-3].node));add_sibling((yyvsp[-3].node), create_node(id, (yyvsp[-2].token_lex), "Id"));
												if ((yyvsp[-1].node) != NULL){
													aux = (yyvsp[-1].node);
													while (aux != NULL) {
														no aux1 = create_node(metodos, "", "VarDecl");
														no aux2 = create_node((yyvsp[-3].node)->type, (yyvsp[-3].node)->valor, (yyvsp[-3].node)->s_type);
														add_node(aux1, aux2);
														add_sibling(aux2, create_node(id, aux->valor, "Id"));
														add_sibling((yyval.node), aux1);
														aux = aux->siblings;
													}
													free(aux);
												}}
#line 1676 "y.tab.c"
    break;

  case 28: /* VarDecl_aux: %empty  */
#line 208 "jucompiler.y"
                                                        {(yyval.node) = NULL;}
#line 1682 "y.tab.c"
    break;

  case 29: /* VarDecl_aux: COMMA ID VarDecl_aux  */
#line 209 "jucompiler.y"
                                                {(yyval.node) = create_node(id,(yyvsp[-1].token_lex),"Id");
									add_sibling((yyval.node),(yyvsp[0].node));}
#line 1689 "y.tab.c"
    break;

  case 30: /* Statement: LBRACE Statement_aux RBRACE  */
#line 213 "jucompiler.y"
                                                                        {if (count_siblings((yyvsp[-1].node)) > 1){
															aux = create_node(statements, "", "Block");
															(yyval.node) = aux;
															add_node(aux, (yyvsp[-1].node));
														}
														else{
															(yyval.node) = (yyvsp[-1].node);
														}}
#line 1702 "y.tab.c"
    break;

  case 31: /* Statement: IF LPAR Expr RPAR Statement  */
#line 222 "jucompiler.y"
                                                                        {(yyval.node) = create_node(statements, "", "If");
														add_node((yyval.node),(yyvsp[-2].node));
														aux = create_node(statements, "", "Block");
														if (count_siblings((yyvsp[0].node)) == 1 && (yyvsp[0].node) != NULL){
															add_sibling((yyvsp[-2].node), (yyvsp[0].node));add_sibling((yyvsp[0].node), aux);
														}
														else{
															add_sibling((yyvsp[-2].node), aux);add_node(aux, (yyvsp[0].node));
															add_sibling(aux, create_node(statements, "", "Block"));
														}}
#line 1717 "y.tab.c"
    break;

  case 32: /* Statement: IF LPAR Expr RPAR Statement ELSE Statement  */
#line 233 "jucompiler.y"
                                                                        {(yyval.node) = create_node(statements, "", "If");
														add_node((yyval.node),(yyvsp[-4].node));
														aux = create_node(statements, "", "Block");
														if (count_siblings((yyvsp[-2].node)) == 1 && (yyvsp[-2].node) != NULL){
															add_sibling((yyvsp[-4].node), (yyvsp[-2].node));
															if (count_siblings((yyvsp[0].node)) == 1 && (yyvsp[0].node) != NULL) {
																add_sibling((yyvsp[-2].node), (yyvsp[0].node));
															}
															else {
																add_sibling((yyvsp[-2].node), aux);
																add_node(aux, (yyvsp[0].node));
															}
														}
														else{
															add_sibling((yyvsp[-4].node), aux);
															add_node(aux, (yyvsp[-2].node));
															if (count_siblings((yyvsp[0].node)) == 1 && (yyvsp[0].node) != NULL) {
																add_sibling(aux, (yyvsp[0].node));
															}
															else {
																no aux2 = create_node(statements, "", "Block");
																add_sibling(aux, aux2);
																add_node(aux2, (yyvsp[0].node));
															}
														}}
#line 1747 "y.tab.c"
    break;

  case 33: /* Statement: WHILE LPAR Expr RPAR Statement  */
#line 259 "jucompiler.y"
                                                                                {(yyval.node) = create_node(statements, "", "While");
														add_node((yyval.node), (yyvsp[-2].node));
														if (count_siblings((yyvsp[0].node)) == 1 && (yyvsp[0].node) != NULL) {
															add_sibling((yyvsp[-2].node), (yyvsp[0].node));
														}
														else {
															aux = create_node(statements, "", "Block");
															add_sibling((yyvsp[-2].node), aux);
															add_node(aux, (yyvsp[0].node));
														}}
#line 1762 "y.tab.c"
    break;

  case 34: /* Statement: RETURN Expr_aux SEMICOLON  */
#line 270 "jucompiler.y"
                                                                                        {(yyval.node) = create_node(statements,"","Return");
														add_node((yyval.node),(yyvsp[-1].node));}
#line 1769 "y.tab.c"
    break;

  case 35: /* Statement: Statement_aux2 SEMICOLON  */
#line 273 "jucompiler.y"
                                                                                        {(yyval.node) = (yyvsp[-1].node);}
#line 1775 "y.tab.c"
    break;

  case 36: /* Statement: PRINT LPAR StatementPrint RPAR SEMICOLON  */
#line 274 "jucompiler.y"
                                                                        {(yyval.node) = create_node(statements,"","Print");
														add_node((yyval.node),(yyvsp[-2].node));}
#line 1782 "y.tab.c"
    break;

  case 37: /* Statement: error SEMICOLON  */
#line 276 "jucompiler.y"
                                                                                                {(yyval.node) = NULL;erro_yacc = true;}
#line 1788 "y.tab.c"
    break;

  case 38: /* Statement_aux: %empty  */
#line 279 "jucompiler.y"
                                                                        {(yyval.node) = NULL;}
#line 1794 "y.tab.c"
    break;

  case 39: /* Statement_aux: Statement Statement_aux  */
#line 280 "jucompiler.y"
                                                                {if ((yyvsp[-1].node) != NULL) {
												(yyval.node) = (yyvsp[-1].node);
												add_sibling((yyval.node), (yyvsp[0].node));
											}
											else {
												(yyval.node) = (yyvsp[0].node);
											}}
#line 1806 "y.tab.c"
    break;

  case 40: /* Expr_aux: %empty  */
#line 288 "jucompiler.y"
                                {(yyval.node) = NULL;}
#line 1812 "y.tab.c"
    break;

  case 41: /* Expr_aux: Expr  */
#line 289 "jucompiler.y"
                                {(yyval.node) = (yyvsp[0].node);}
#line 1818 "y.tab.c"
    break;

  case 42: /* Statement_aux2: %empty  */
#line 292 "jucompiler.y"
                                                        {(yyval.node) = NULL;}
#line 1824 "y.tab.c"
    break;

  case 43: /* Statement_aux2: MethodInvocation  */
#line 293 "jucompiler.y"
                                                        {(yyval.node) = (yyvsp[0].node);}
#line 1830 "y.tab.c"
    break;

  case 44: /* Statement_aux2: Assignment  */
#line 294 "jucompiler.y"
                                                                {(yyval.node) = (yyvsp[0].node);}
#line 1836 "y.tab.c"
    break;

  case 45: /* Statement_aux2: ParseArgs  */
#line 295 "jucompiler.y"
                                                                {(yyval.node) = (yyvsp[0].node);}
#line 1842 "y.tab.c"
    break;

  case 46: /* StatementPrint: Expr  */
#line 298 "jucompiler.y"
                                {(yyval.node) = (yyvsp[0].node);}
#line 1848 "y.tab.c"
    break;

  case 47: /* StatementPrint: STRLIT  */
#line 299 "jucompiler.y"
                                                {(yyval.node) = create_node(terminais,(yyvsp[0].token_lex),"StrLit");}
#line 1854 "y.tab.c"
    break;

  case 48: /* MethodInvocation: ID LPAR MethodInvocation_aux RPAR  */
#line 302 "jucompiler.y"
                                                                {(yyval.node) = create_node(operators, "", "Call");
														aux = create_node(id, (yyvsp[-3].token_lex), "Id");
														add_node((yyval.node), aux);
														add_sibling(aux, (yyvsp[-1].node));}
#line 1863 "y.tab.c"
    break;

  case 49: /* MethodInvocation: ID LPAR error RPAR  */
#line 307 "jucompiler.y"
                                                                                                {(yyval.node) = NULL; erro_yacc = true;}
#line 1869 "y.tab.c"
    break;

  case 50: /* MethodInvocation_aux: %empty  */
#line 310 "jucompiler.y"
                                                                                {(yyval.node) = NULL;}
#line 1875 "y.tab.c"
    break;

  case 51: /* MethodInvocation_aux: Expr MethodInvocationExpr  */
#line 311 "jucompiler.y"
                                                                                {(yyval.node) = (yyvsp[-1].node); add_sibling((yyval.node),(yyvsp[0].node));}
#line 1881 "y.tab.c"
    break;

  case 52: /* MethodInvocationExpr: %empty  */
#line 314 "jucompiler.y"
                                                                                {(yyval.node) = NULL;}
#line 1887 "y.tab.c"
    break;

  case 53: /* MethodInvocationExpr: COMMA Expr MethodInvocationExpr  */
#line 315 "jucompiler.y"
                                                                        {if((yyvsp[-1].node)!=NULL) {
														(yyval.node)=(yyvsp[-1].node);
														add_sibling((yyval.node), (yyvsp[0].node));
													}
													else {
														(yyval.node)=(yyvsp[-1].node);
													}}
#line 1899 "y.tab.c"
    break;

  case 54: /* Assignment: ID ASSIGN Expr  */
#line 324 "jucompiler.y"
                                                {(yyval.node) = create_node(operators, "", "Assign");
									aux = create_node(id, (yyvsp[-2].token_lex), "Id");
									add_node((yyval.node), aux);
									add_sibling(aux, (yyvsp[0].node));}
#line 1908 "y.tab.c"
    break;

  case 55: /* ParseArgs: PARSEINT LPAR ID LSQ Expr RSQ RPAR  */
#line 330 "jucompiler.y"
                                                                {(yyval.node) = create_node(operators, "", "ParseArgs");
													aux = create_node(id, (yyvsp[-4].token_lex), "Id");
													add_node((yyval.node), aux);
													add_sibling(aux, (yyvsp[-2].node));}
#line 1917 "y.tab.c"
    break;

  case 56: /* ParseArgs: PARSEINT LPAR error RPAR  */
#line 335 "jucompiler.y"
                                                                                {(yyval.node) = NULL; erro_yacc = true;}
#line 1923 "y.tab.c"
    break;

  case 57: /* Expr: Assignment  */
#line 338 "jucompiler.y"
                                {(yyval.node) = (yyvsp[0].node);}
#line 1929 "y.tab.c"
    break;

  case 58: /* Expr: ExprOperations  */
#line 339 "jucompiler.y"
                                {(yyval.node) = (yyvsp[0].node);}
#line 1935 "y.tab.c"
    break;

  case 59: /* ExprOperations: ExprOperations PLUS ExprOperations  */
#line 342 "jucompiler.y"
                                                                {(yyval.node) = create_node(operators, "", "Add");
														add_node((yyval.node), (yyvsp[-2].node));
														add_sibling((yyvsp[-2].node), (yyvsp[0].node));}
#line 1943 "y.tab.c"
    break;

  case 60: /* ExprOperations: ExprOperations MINUS ExprOperations  */
#line 346 "jucompiler.y"
                                                                                {(yyval.node) = create_node(operators, "", "Sub");
														add_node((yyval.node), (yyvsp[-2].node));
														add_sibling((yyvsp[-2].node), (yyvsp[0].node));}
#line 1951 "y.tab.c"
    break;

  case 61: /* ExprOperations: ExprOperations STAR ExprOperations  */
#line 350 "jucompiler.y"
                                                                                {(yyval.node) = create_node(operators, "", "Mul");
														add_node((yyval.node), (yyvsp[-2].node));
														add_sibling((yyvsp[-2].node), (yyvsp[0].node));}
#line 1959 "y.tab.c"
    break;

  case 62: /* ExprOperations: ExprOperations DIV ExprOperations  */
#line 354 "jucompiler.y"
                                                                                {(yyval.node) = create_node(operators, "", "Div");
														add_node((yyval.node), (yyvsp[-2].node));
														add_sibling((yyvsp[-2].node), (yyvsp[0].node));}
#line 1967 "y.tab.c"
    break;

  case 63: /* ExprOperations: ExprOperations MOD ExprOperations  */
#line 358 "jucompiler.y"
                                                                                {(yyval.node) = create_node(operators, "", "Mod");
														add_node((yyval.node), (yyvsp[-2].node));
														add_sibling((yyvsp[-2].node), (yyvsp[0].node));}
#line 1975 "y.tab.c"
    break;

  case 64: /* ExprOperations: ExprOperations AND ExprOperations  */
#line 362 "jucompiler.y"
                                                                                {(yyval.node) = create_node(operators, "", "And");
														add_node((yyval.node), (yyvsp[-2].node));
														add_sibling((yyvsp[-2].node), (yyvsp[0].node));}
#line 1983 "y.tab.c"
    break;

  case 65: /* ExprOperations: ExprOperations OR ExprOperations  */
#line 366 "jucompiler.y"
                                                                                {(yyval.node) = create_node(operators, "", "Or");
														add_node((yyval.node), (yyvsp[-2].node));
														add_sibling((yyvsp[-2].node), (yyvsp[0].node));}
#line 1991 "y.tab.c"
    break;

  case 66: /* ExprOperations: ExprOperations XOR ExprOperations  */
#line 370 "jucompiler.y"
                                                                                {(yyval.node) = create_node(operators, "", "Xor");
														add_node((yyval.node), (yyvsp[-2].node));
														add_sibling((yyvsp[-2].node), (yyvsp[0].node));}
#line 1999 "y.tab.c"
    break;

  case 67: /* ExprOperations: ExprOperations LSHIFT ExprOperations  */
#line 374 "jucompiler.y"
                                                                        {(yyval.node) = create_node(operators, "", "Lshift");
														add_node((yyval.node), (yyvsp[-2].node));
														add_sibling((yyvsp[-2].node), (yyvsp[0].node));}
#line 2007 "y.tab.c"
    break;

  case 68: /* ExprOperations: ExprOperations RSHIFT ExprOperations  */
#line 378 "jucompiler.y"
                                                                        {(yyval.node) = create_node(operators, "", "Rshift");
														add_node((yyval.node), (yyvsp[-2].node));
														add_sibling((yyvsp[-2].node), (yyvsp[0].node));}
#line 2015 "y.tab.c"
    break;

  case 69: /* ExprOperations: ExprOperations EQ ExprOperations  */
#line 382 "jucompiler.y"
                                                                                {(yyval.node) = create_node(operators, "", "Eq");
														add_node((yyval.node), (yyvsp[-2].node));
														add_sibling((yyvsp[-2].node), (yyvsp[0].node));}
#line 2023 "y.tab.c"
    break;

  case 70: /* ExprOperations: ExprOperations GE ExprOperations  */
#line 386 "jucompiler.y"
                                                                                {(yyval.node) = create_node(operators, "", "Ge");
														add_node((yyval.node), (yyvsp[-2].node));
														add_sibling((yyvsp[-2].node), (yyvsp[0].node));}
#line 2031 "y.tab.c"
    break;

  case 71: /* ExprOperations: ExprOperations GT ExprOperations  */
#line 390 "jucompiler.y"
                                                                                {(yyval.node) = create_node(operators, "", "Gt");
														add_node((yyval.node), (yyvsp[-2].node));
														add_sibling((yyvsp[-2].node), (yyvsp[0].node));}
#line 2039 "y.tab.c"
    break;

  case 72: /* ExprOperations: ExprOperations LE ExprOperations  */
#line 394 "jucompiler.y"
                                                                                {(yyval.node) = create_node(operators, "", "Le");
														add_node((yyval.node), (yyvsp[-2].node));
														add_sibling((yyvsp[-2].node), (yyvsp[0].node));}
#line 2047 "y.tab.c"
    break;

  case 73: /* ExprOperations: ExprOperations LT ExprOperations  */
#line 398 "jucompiler.y"
                                                                                {(yyval.node) = create_node(operators, "", "Lt");
														add_node((yyval.node), (yyvsp[-2].node));
														add_sibling((yyvsp[-2].node), (yyvsp[0].node));}
#line 2055 "y.tab.c"
    break;

  case 74: /* ExprOperations: ExprOperations NE ExprOperations  */
#line 402 "jucompiler.y"
                                                                                {(yyval.node) = create_node(operators, "", "Ne");
														add_node((yyval.node), (yyvsp[-2].node));
														add_sibling((yyvsp[-2].node), (yyvsp[0].node));}
#line 2063 "y.tab.c"
    break;

  case 75: /* ExprOperations: PLUS ExprOperations  */
#line 406 "jucompiler.y"
                                                                                {(yyval.node) = create_node(operators, "", "Plus");
														add_node((yyval.node), (yyvsp[0].node));}
#line 2070 "y.tab.c"
    break;

  case 76: /* ExprOperations: MINUS ExprOperations  */
#line 409 "jucompiler.y"
                                                                                {(yyval.node) = create_node(operators, "", "Minus");
														add_node((yyval.node), (yyvsp[0].node));}
#line 2077 "y.tab.c"
    break;

  case 77: /* ExprOperations: NOT ExprOperations  */
#line 412 "jucompiler.y"
                                                                                                {(yyval.node) = create_node(operators, "", "Not");
														add_node((yyval.node), (yyvsp[0].node));}
#line 2084 "y.tab.c"
    break;

  case 78: /* ExprOperations: LPAR Expr RPAR  */
#line 415 "jucompiler.y"
                                                                                                {(yyval.node) = (yyvsp[-1].node);}
#line 2090 "y.tab.c"
    break;

  case 79: /* ExprOperations: LPAR error RPAR  */
#line 417 "jucompiler.y"
                                                                                                {(yyval.node) = NULL; erro_yacc = true;}
#line 2096 "y.tab.c"
    break;

  case 80: /* ExprOperations: Expr_aux2  */
#line 419 "jucompiler.y"
                                                                                                        {(yyval.node) = (yyvsp[0].node);}
#line 2102 "y.tab.c"
    break;

  case 81: /* ExprOperations: ID  */
#line 420 "jucompiler.y"
                                                                                                                {(yyval.node) = create_node(id,(yyvsp[0].token_lex),"Id");}
#line 2108 "y.tab.c"
    break;

  case 82: /* ExprOperations: ID DOTLENGTH  */
#line 421 "jucompiler.y"
                                                                                                {(yyval.node) = create_node(operators,"","Length");
														add_node((yyval.node),create_node(id,(yyvsp[-1].token_lex),"Id"));}
#line 2115 "y.tab.c"
    break;

  case 83: /* ExprOperations: Exprlit  */
#line 424 "jucompiler.y"
                                                                                                        {(yyval.node) = (yyvsp[0].node);}
#line 2121 "y.tab.c"
    break;

  case 84: /* Expr_aux2: MethodInvocation  */
#line 427 "jucompiler.y"
                                                        {(yyval.node) = (yyvsp[0].node);}
#line 2127 "y.tab.c"
    break;

  case 85: /* Expr_aux2: ParseArgs  */
#line 428 "jucompiler.y"
                                                                        {(yyval.node) = (yyvsp[0].node);}
#line 2133 "y.tab.c"
    break;

  case 86: /* Exprlit: INTLIT  */
#line 431 "jucompiler.y"
                                        {(yyval.node) = create_node(terminais,(yyvsp[0].token_lex),"DecLit");}
#line 2139 "y.tab.c"
    break;

  case 87: /* Exprlit: REALLIT  */
#line 432 "jucompiler.y"
                                                {(yyval.node) = create_node(terminais,(yyvsp[0].token_lex),"RealLit");}
#line 2145 "y.tab.c"
    break;

  case 88: /* Exprlit: BOOLLIT  */
#line 433 "jucompiler.y"
                                                {(yyval.node) = create_node(terminais,(yyvsp[0].token_lex),"BoolLit");}
#line 2151 "y.tab.c"
    break;


#line 2155 "y.tab.c"

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

#line 436 "jucompiler.y"

