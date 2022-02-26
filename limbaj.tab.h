/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_LIMBAJ_TAB_H_INCLUDED
# define YY_YY_LIMBAJ_TAB_H_INCLUDED
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
    BGIN_MAIN = 258,               /* BGIN_MAIN  */
    END_MAIN = 259,                /* END_MAIN  */
    ASSIGN = 260,                  /* ASSIGN  */
    IF = 261,                      /* IF  */
    ELSE = 262,                    /* ELSE  */
    WHILE = 263,                   /* WHILE  */
    FOR = 264,                     /* FOR  */
    GEQ = 265,                     /* GEQ  */
    LEQ = 266,                     /* LEQ  */
    EQ = 267,                      /* EQ  */
    NEQ = 268,                     /* NEQ  */
    VERIFY = 269,                  /* VERIFY  */
    MAIN = 270,                    /* MAIN  */
    RETURN = 271,                  /* RETURN  */
    PLUS = 272,                    /* PLUS  */
    MINUS = 273,                   /* MINUS  */
    OPERATIONS = 274,              /* OPERATIONS  */
    CONST = 275,                   /* CONST  */
    BGIN_GLOBAL = 276,             /* BGIN_GLOBAL  */
    BGIN_FUNCTIE = 277,            /* BGIN_FUNCTIE  */
    END_GLOBAL = 278,              /* END_GLOBAL  */
    END_FUNCTIE = 279,             /* END_FUNCTIE  */
    TIP_NOU = 280,                 /* TIP_NOU  */
    PRINT = 281,                   /* PRINT  */
    TIP = 282,                     /* TIP  */
    TIP_VOID = 283,                /* TIP_VOID  */
    ID = 284,                      /* ID  */
    NR = 285,                      /* NR  */
    NR_R = 286,                    /* NR_R  */
    TRUE = 287,                    /* TRUE  */
    FALSE = 288,                   /* FALSE  */
    LISTA_CUVINTE = 289,           /* LISTA_CUVINTE  */
    MATH = 290                     /* MATH  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "limbaj.y"

int intval;
char* strval;
char* str_l;
float f_value;
int boolval;


#line 108 "limbaj.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_LIMBAJ_TAB_H_INCLUDED  */
