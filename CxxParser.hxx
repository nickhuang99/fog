/* A Bison parser, made by GNU Bison 3.8.2.9-6571.  */

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

#ifndef YY_YY_CXXPARSER_HXX_INCLUDED
# define YY_YY_CXXPARSER_HXX_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    ARROW = 258,                   /* ARROW  */
    ARROW_STAR = 259,              /* ARROW_STAR  */
    DEC = 260,                     /* DEC  */
    EQ = 261,                      /* EQ  */
    GE = 262,                      /* GE  */
    INC = 263,                     /* INC  */
    LE = 264,                      /* LE  */
    LOG_AND = 265,                 /* LOG_AND  */
    LOG_OR = 266,                  /* LOG_OR  */
    NE = 267,                      /* NE  */
    SHL = 268,                     /* SHL  */
    SHR = 269,                     /* SHR  */
    ASS_ADD = 270,                 /* ASS_ADD  */
    ASS_AND = 271,                 /* ASS_AND  */
    ASS_DIV = 272,                 /* ASS_DIV  */
    ASS_MOD = 273,                 /* ASS_MOD  */
    ASS_MUL = 274,                 /* ASS_MUL  */
    ASS_OR = 275,                  /* ASS_OR  */
    ASS_SHL = 276,                 /* ASS_SHL  */
    ASS_SHR = 277,                 /* ASS_SHR  */
    ASS_SUB = 278,                 /* ASS_SUB  */
    ASS_XOR = 279,                 /* ASS_XOR  */
    DOT_STAR = 280,                /* DOT_STAR  */
    ELLIPSIS = 281,                /* ELLIPSIS  */
    SCOPE = 282,                   /* SCOPE  */
    PRIVATE = 283,                 /* PRIVATE  */
    PROTECTED = 284,               /* PROTECTED  */
    PUBLIC = 285,                  /* PUBLIC  */
    BOOL = 286,                    /* BOOL  */
    CHAR = 287,                    /* CHAR  */
    DOUBLE = 288,                  /* DOUBLE  */
    FLOAT = 289,                   /* FLOAT  */
    INT = 290,                     /* INT  */
    LONG = 291,                    /* LONG  */
    SHORT = 292,                   /* SHORT  */
    SIGNED = 293,                  /* SIGNED  */
    UNSIGNED = 294,                /* UNSIGNED  */
    VOID = 295,                    /* VOID  */
    WCHAR_T = 296,                 /* WCHAR_T  */
    CLASS = 297,                   /* CLASS  */
    ENUM = 298,                    /* ENUM  */
    NAMESPACE = 299,               /* NAMESPACE  */
    STRUCT = 300,                  /* STRUCT  */
    TYPENAME = 301,                /* TYPENAME  */
    UNION = 302,                   /* UNION  */
    CONST = 303,                   /* CONST  */
    VOLATILE = 304,                /* VOLATILE  */
    AUTO = 305,                    /* AUTO  */
    EXPLICIT = 306,                /* EXPLICIT  */
    EXPORT = 307,                  /* EXPORT  */
    EXTERN = 308,                  /* EXTERN  */
    FRIEND = 309,                  /* FRIEND  */
    INLINE = 310,                  /* INLINE  */
    MUTABLE = 311,                 /* MUTABLE  */
    REGISTER = 312,                /* REGISTER  */
    STATIC = 313,                  /* STATIC  */
    TEMPLATE = 314,                /* TEMPLATE  */
    TYPEDEF = 315,                 /* TYPEDEF  */
    USING = 316,                   /* USING  */
    VIRTUAL = 317,                 /* VIRTUAL  */
    ASM = 318,                     /* ASM  */
    BREAK = 319,                   /* BREAK  */
    CASE = 320,                    /* CASE  */
    CATCH = 321,                   /* CATCH  */
    CONST_CAST = 322,              /* CONST_CAST  */
    CONTINUE = 323,                /* CONTINUE  */
    DEFAULT = 324,                 /* DEFAULT  */
    DELETE = 325,                  /* DELETE  */
    DO = 326,                      /* DO  */
    DYNAMIC_CAST = 327,            /* DYNAMIC_CAST  */
    ELSE = 328,                    /* ELSE  */
    FALSE = 329,                   /* FALSE  */
    FOR = 330,                     /* FOR  */
    GOTO = 331,                    /* GOTO  */
    IF = 332,                      /* IF  */
    NEW = 333,                     /* NEW  */
    OPERATOR = 334,                /* OPERATOR  */
    REINTERPRET_CAST = 335,        /* REINTERPRET_CAST  */
    RETURN = 336,                  /* RETURN  */
    SIZEOF = 337,                  /* SIZEOF  */
    STATIC_CAST = 338,             /* STATIC_CAST  */
    SWITCH = 339,                  /* SWITCH  */
    THIS = 340,                    /* THIS  */
    THROW = 341,                   /* THROW  */
    TRUE = 342,                    /* TRUE  */
    TRY = 343,                     /* TRY  */
    TYPEID = 344,                  /* TYPEID  */
    WHILE = 345,                   /* WHILE  */
    CharacterLiteral = 346,        /* CharacterLiteral  */
    FloatingLiteral = 347,         /* FloatingLiteral  */
    Identifier = 348,              /* Identifier  */
    IntegerLiteral = 349,          /* IntegerLiteral  */
    NumberLiteral = 350,           /* NumberLiteral  */
    StringLiteral = 351,           /* StringLiteral  */
    SHIFT_THERE = 352,             /* SHIFT_THERE  */
    REDUCE_HERE_MOSTLY = 353       /* REDUCE_HERE_MOSTLY  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_CXXPARSER_HXX_INCLUDED  */
