
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 33 "../src/TP4.y"

   struct mytruct{
        int tipo, entero;
        float real;
        char* cadena;
        char caracter;
   } mystruct;



/* Line 1676 of yacc.c  */
#line 93 "TP4.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


