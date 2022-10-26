/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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

#line 163 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
