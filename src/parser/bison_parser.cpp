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
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         HSQL_STYPE
#define YYLTYPE         HSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         hsql_parse
#define yylex           hsql_lex
#define yyerror         hsql_error
#define yydebug         hsql_debug
#define yynerrs         hsql_nerrs

/* First part of user prologue.  */
#line 1 "bison_parser.y"

/**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 *
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

#include "bison_parser.h"
#include "flex_lexer.h"

#include <stdio.h>
#include <string.h>

using namespace hsql;

int yyerror(YYLTYPE* llocp, SQLParserResult* result, yyscan_t scanner, const char *msg) {
	result->setIsValid(false);
	result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
	return 0;
}


#line 107 "bison_parser.cpp"

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

#include "bison_parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_FLOATVAL = 5,                   /* FLOATVAL  */
  YYSYMBOL_INTVAL = 6,                     /* INTVAL  */
  YYSYMBOL_DEALLOCATE = 7,                 /* DEALLOCATE  */
  YYSYMBOL_PARAMETERS = 8,                 /* PARAMETERS  */
  YYSYMBOL_INTERSECT = 9,                  /* INTERSECT  */
  YYSYMBOL_TEMPORARY = 10,                 /* TEMPORARY  */
  YYSYMBOL_TIMESTAMP = 11,                 /* TIMESTAMP  */
  YYSYMBOL_DISTINCT = 12,                  /* DISTINCT  */
  YYSYMBOL_NVARCHAR = 13,                  /* NVARCHAR  */
  YYSYMBOL_RESTRICT = 14,                  /* RESTRICT  */
  YYSYMBOL_TRUNCATE = 15,                  /* TRUNCATE  */
  YYSYMBOL_ANALYZE = 16,                   /* ANALYZE  */
  YYSYMBOL_BETWEEN = 17,                   /* BETWEEN  */
  YYSYMBOL_CASCADE = 18,                   /* CASCADE  */
  YYSYMBOL_COLUMNS = 19,                   /* COLUMNS  */
  YYSYMBOL_CONTROL = 20,                   /* CONTROL  */
  YYSYMBOL_DEFAULT = 21,                   /* DEFAULT  */
  YYSYMBOL_EXECUTE = 22,                   /* EXECUTE  */
  YYSYMBOL_EXPLAIN = 23,                   /* EXPLAIN  */
  YYSYMBOL_HISTORY = 24,                   /* HISTORY  */
  YYSYMBOL_INTEGER = 25,                   /* INTEGER  */
  YYSYMBOL_NATURAL = 26,                   /* NATURAL  */
  YYSYMBOL_PREPARE = 27,                   /* PREPARE  */
  YYSYMBOL_PRIMARY = 28,                   /* PRIMARY  */
  YYSYMBOL_SCHEMAS = 29,                   /* SCHEMAS  */
  YYSYMBOL_SPATIAL = 30,                   /* SPATIAL  */
  YYSYMBOL_VARCHAR = 31,                   /* VARCHAR  */
  YYSYMBOL_VIRTUAL = 32,                   /* VIRTUAL  */
  YYSYMBOL_BEFORE = 33,                    /* BEFORE  */
  YYSYMBOL_COLUMN = 34,                    /* COLUMN  */
  YYSYMBOL_CREATE = 35,                    /* CREATE  */
  YYSYMBOL_DELETE = 36,                    /* DELETE  */
  YYSYMBOL_DIRECT = 37,                    /* DIRECT  */
  YYSYMBOL_DOUBLE = 38,                    /* DOUBLE  */
  YYSYMBOL_ESCAPE = 39,                    /* ESCAPE  */
  YYSYMBOL_EXCEPT = 40,                    /* EXCEPT  */
  YYSYMBOL_EXISTS = 41,                    /* EXISTS  */
  YYSYMBOL_EXTRACT = 42,                   /* EXTRACT  */
  YYSYMBOL_GLOBAL = 43,                    /* GLOBAL  */
  YYSYMBOL_HAVING = 44,                    /* HAVING  */
  YYSYMBOL_IMPORT = 45,                    /* IMPORT  */
  YYSYMBOL_INSERT = 46,                    /* INSERT  */
  YYSYMBOL_ISNULL = 47,                    /* ISNULL  */
  YYSYMBOL_OFFSET = 48,                    /* OFFSET  */
  YYSYMBOL_RENAME = 49,                    /* RENAME  */
  YYSYMBOL_SCHEMA = 50,                    /* SCHEMA  */
  YYSYMBOL_SELECT = 51,                    /* SELECT  */
  YYSYMBOL_SORTED = 52,                    /* SORTED  */
  YYSYMBOL_TABLES = 53,                    /* TABLES  */
  YYSYMBOL_UNIQUE = 54,                    /* UNIQUE  */
  YYSYMBOL_UNLOAD = 55,                    /* UNLOAD  */
  YYSYMBOL_UPDATE = 56,                    /* UPDATE  */
  YYSYMBOL_VALUES = 57,                    /* VALUES  */
  YYSYMBOL_AFTER = 58,                     /* AFTER  */
  YYSYMBOL_ALTER = 59,                     /* ALTER  */
  YYSYMBOL_CROSS = 60,                     /* CROSS  */
  YYSYMBOL_FLOAT = 61,                     /* FLOAT  */
  YYSYMBOL_GROUP = 62,                     /* GROUP  */
  YYSYMBOL_INDEX = 63,                     /* INDEX  */
  YYSYMBOL_INNER = 64,                     /* INNER  */
  YYSYMBOL_LIMIT = 65,                     /* LIMIT  */
  YYSYMBOL_LOCAL = 66,                     /* LOCAL  */
  YYSYMBOL_MERGE = 67,                     /* MERGE  */
  YYSYMBOL_MINUS = 68,                     /* MINUS  */
  YYSYMBOL_ORDER = 69,                     /* ORDER  */
  YYSYMBOL_OUTER = 70,                     /* OUTER  */
  YYSYMBOL_RIGHT = 71,                     /* RIGHT  */
  YYSYMBOL_TABLE = 72,                     /* TABLE  */
  YYSYMBOL_UNION = 73,                     /* UNION  */
  YYSYMBOL_USING = 74,                     /* USING  */
  YYSYMBOL_WHERE = 75,                     /* WHERE  */
  YYSYMBOL_CALL = 76,                      /* CALL  */
  YYSYMBOL_CASE = 77,                      /* CASE  */
  YYSYMBOL_CHAR = 78,                      /* CHAR  */
  YYSYMBOL_DATE = 79,                      /* DATE  */
  YYSYMBOL_DESC = 80,                      /* DESC  */
  YYSYMBOL_DROP = 81,                      /* DROP  */
  YYSYMBOL_ELSE = 82,                      /* ELSE  */
  YYSYMBOL_FILE = 83,                      /* FILE  */
  YYSYMBOL_FROM = 84,                      /* FROM  */
  YYSYMBOL_FULL = 85,                      /* FULL  */
  YYSYMBOL_HASH = 86,                      /* HASH  */
  YYSYMBOL_HINT = 87,                      /* HINT  */
  YYSYMBOL_INTO = 88,                      /* INTO  */
  YYSYMBOL_JOIN = 89,                      /* JOIN  */
  YYSYMBOL_LEFT = 90,                      /* LEFT  */
  YYSYMBOL_LIKE = 91,                      /* LIKE  */
  YYSYMBOL_LOAD = 92,                      /* LOAD  */
  YYSYMBOL_LONG = 93,                      /* LONG  */
  YYSYMBOL_NULL = 94,                      /* NULL  */
  YYSYMBOL_PLAN = 95,                      /* PLAN  */
  YYSYMBOL_SHOW = 96,                      /* SHOW  */
  YYSYMBOL_TEXT = 97,                      /* TEXT  */
  YYSYMBOL_THEN = 98,                      /* THEN  */
  YYSYMBOL_TIME = 99,                      /* TIME  */
  YYSYMBOL_VIEW = 100,                     /* VIEW  */
  YYSYMBOL_WHEN = 101,                     /* WHEN  */
  YYSYMBOL_WITH = 102,                     /* WITH  */
  YYSYMBOL_LOW_PRIORITY = 103,             /* LOW_PRIORITY  */
  YYSYMBOL_DELAYED = 104,                  /* DELAYED  */
  YYSYMBOL_HIGH_PRIORITY = 105,            /* HIGH_PRIORITY  */
  YYSYMBOL_QUICK = 106,                    /* QUICK  */
  YYSYMBOL_IGNORE = 107,                   /* IGNORE  */
  YYSYMBOL_DATABASES = 108,                /* DATABASES  */
  YYSYMBOL_DATABASE = 109,                 /* DATABASE  */
  YYSYMBOL_CHARACTER = 110,                /* CHARACTER  */
  YYSYMBOL_ADD = 111,                      /* ADD  */
  YYSYMBOL_ALL = 112,                      /* ALL  */
  YYSYMBOL_AND = 113,                      /* AND  */
  YYSYMBOL_ASC = 114,                      /* ASC  */
  YYSYMBOL_CSV = 115,                      /* CSV  */
  YYSYMBOL_END = 116,                      /* END  */
  YYSYMBOL_FOR = 117,                      /* FOR  */
  YYSYMBOL_INT = 118,                      /* INT  */
  YYSYMBOL_KEY = 119,                      /* KEY  */
  YYSYMBOL_NOT = 120,                      /* NOT  */
  YYSYMBOL_OFF = 121,                      /* OFF  */
  YYSYMBOL_SET = 122,                      /* SET  */
  YYSYMBOL_TBL = 123,                      /* TBL  */
  YYSYMBOL_TOP = 124,                      /* TOP  */
  YYSYMBOL_AS = 125,                       /* AS  */
  YYSYMBOL_BY = 126,                       /* BY  */
  YYSYMBOL_IF = 127,                       /* IF  */
  YYSYMBOL_IN = 128,                       /* IN  */
  YYSYMBOL_IS = 129,                       /* IS  */
  YYSYMBOL_OF = 130,                       /* OF  */
  YYSYMBOL_ON = 131,                       /* ON  */
  YYSYMBOL_OR = 132,                       /* OR  */
  YYSYMBOL_TO = 133,                       /* TO  */
  YYSYMBOL_ARRAY = 134,                    /* ARRAY  */
  YYSYMBOL_CONCAT = 135,                   /* CONCAT  */
  YYSYMBOL_ILIKE = 136,                    /* ILIKE  */
  YYSYMBOL_SECOND = 137,                   /* SECOND  */
  YYSYMBOL_MINUTE = 138,                   /* MINUTE  */
  YYSYMBOL_HOUR = 139,                     /* HOUR  */
  YYSYMBOL_DAY = 140,                      /* DAY  */
  YYSYMBOL_MONTH = 141,                    /* MONTH  */
  YYSYMBOL_YEAR = 142,                     /* YEAR  */
  YYSYMBOL_TRUE = 143,                     /* TRUE  */
  YYSYMBOL_FALSE = 144,                    /* FALSE  */
  YYSYMBOL_ESCAPED = 145,                  /* ESCAPED  */
  YYSYMBOL_DATA = 146,                     /* DATA  */
  YYSYMBOL_INFILE = 147,                   /* INFILE  */
  YYSYMBOL_CONCURRENT = 148,               /* CONCURRENT  */
  YYSYMBOL_REPLACE = 149,                  /* REPLACE  */
  YYSYMBOL_PARTITION = 150,                /* PARTITION  */
  YYSYMBOL_FIELDS = 151,                   /* FIELDS  */
  YYSYMBOL_TERMINATED = 152,               /* TERMINATED  */
  YYSYMBOL_OPTIONALLY = 153,               /* OPTIONALLY  */
  YYSYMBOL_ENCLOSED = 154,                 /* ENCLOSED  */
  YYSYMBOL_LINES = 155,                    /* LINES  */
  YYSYMBOL_ROWS = 156,                     /* ROWS  */
  YYSYMBOL_STARTING = 157,                 /* STARTING  */
  YYSYMBOL_158_ = 158,                     /* '='  */
  YYSYMBOL_EQUALS = 159,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 160,                /* NOTEQUALS  */
  YYSYMBOL_161_ = 161,                     /* '<'  */
  YYSYMBOL_162_ = 162,                     /* '>'  */
  YYSYMBOL_LESS = 163,                     /* LESS  */
  YYSYMBOL_GREATER = 164,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 165,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 166,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 167,                  /* NOTNULL  */
  YYSYMBOL_168_ = 168,                     /* '+'  */
  YYSYMBOL_169_ = 169,                     /* '-'  */
  YYSYMBOL_170_ = 170,                     /* '*'  */
  YYSYMBOL_171_ = 171,                     /* '/'  */
  YYSYMBOL_172_ = 172,                     /* '%'  */
  YYSYMBOL_173_ = 173,                     /* '^'  */
  YYSYMBOL_UMINUS = 174,                   /* UMINUS  */
  YYSYMBOL_175_ = 175,                     /* '['  */
  YYSYMBOL_176_ = 176,                     /* ']'  */
  YYSYMBOL_177_ = 177,                     /* '('  */
  YYSYMBOL_178_ = 178,                     /* ')'  */
  YYSYMBOL_179_ = 179,                     /* '.'  */
  YYSYMBOL_180_ = 180,                     /* ';'  */
  YYSYMBOL_181_ = 181,                     /* ','  */
  YYSYMBOL_182_ = 182,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 183,                 /* $accept  */
  YYSYMBOL_input = 184,                    /* input  */
  YYSYMBOL_statement_list = 185,           /* statement_list  */
  YYSYMBOL_statement = 186,                /* statement  */
  YYSYMBOL_preparable_statement = 187,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 188,                /* opt_hints  */
  YYSYMBOL_hint_list = 189,                /* hint_list  */
  YYSYMBOL_hint = 190,                     /* hint  */
  YYSYMBOL_prepare_statement = 191,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 192,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 193,        /* execute_statement  */
  YYSYMBOL_import_statement = 194,         /* import_statement  */
  YYSYMBOL_import_file_type = 195,         /* import_file_type  */
  YYSYMBOL_file_path = 196,                /* file_path  */
  YYSYMBOL_load_statement = 197,           /* load_statement  */
  YYSYMBOL_opt_low_priority_or_concurrent = 198, /* opt_low_priority_or_concurrent  */
  YYSYMBOL_opt_replace_or_ignore = 199,    /* opt_replace_or_ignore  */
  YYSYMBOL_opt_local = 200,                /* opt_local  */
  YYSYMBOL_opt_fields_or_columns = 201,    /* opt_fields_or_columns  */
  YYSYMBOL_opt_lines = 202,                /* opt_lines  */
  YYSYMBOL_opt_ignore_lines_rows = 203,    /* opt_ignore_lines_rows  */
  YYSYMBOL_show_statement = 204,           /* show_statement  */
  YYSYMBOL_create_statement = 205,         /* create_statement  */
  YYSYMBOL_opt_temporary = 206,            /* opt_temporary  */
  YYSYMBOL_opt_not_exists = 207,           /* opt_not_exists  */
  YYSYMBOL_column_def_commalist = 208,     /* column_def_commalist  */
  YYSYMBOL_column_def = 209,               /* column_def  */
  YYSYMBOL_column_type = 210,              /* column_type  */
  YYSYMBOL_opt_column_nullable = 211,      /* opt_column_nullable  */
  YYSYMBOL_drop_statement = 212,           /* drop_statement  */
  YYSYMBOL_opt_exists = 213,               /* opt_exists  */
  YYSYMBOL_delete_statement = 214,         /* delete_statement  */
  YYSYMBOL_opt_low_priority = 215,         /* opt_low_priority  */
  YYSYMBOL_opt_quick = 216,                /* opt_quick  */
  YYSYMBOL_opt_ignore = 217,               /* opt_ignore  */
  YYSYMBOL_truncate_statement = 218,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 219,         /* insert_statement  */
  YYSYMBOL_opt_priority = 220,             /* opt_priority  */
  YYSYMBOL_opt_column_list = 221,          /* opt_column_list  */
  YYSYMBOL_update_statement = 222,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 223,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 224,            /* update_clause  */
  YYSYMBOL_alter_statement = 225,          /* alter_statement  */
  YYSYMBOL_opt_default = 226,              /* opt_default  */
  YYSYMBOL_opt_equal = 227,                /* opt_equal  */
  YYSYMBOL_select_statement = 228,         /* select_statement  */
  YYSYMBOL_select_with_paren = 229,        /* select_with_paren  */
  YYSYMBOL_select_paren_or_clause = 230,   /* select_paren_or_clause  */
  YYSYMBOL_select_no_paren = 231,          /* select_no_paren  */
  YYSYMBOL_set_operator = 232,             /* set_operator  */
  YYSYMBOL_set_type = 233,                 /* set_type  */
  YYSYMBOL_opt_all = 234,                  /* opt_all  */
  YYSYMBOL_select_clause = 235,            /* select_clause  */
  YYSYMBOL_opt_distinct = 236,             /* opt_distinct  */
  YYSYMBOL_select_list = 237,              /* select_list  */
  YYSYMBOL_opt_from_clause = 238,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 239,              /* from_clause  */
  YYSYMBOL_opt_where = 240,                /* opt_where  */
  YYSYMBOL_opt_group = 241,                /* opt_group  */
  YYSYMBOL_opt_having = 242,               /* opt_having  */
  YYSYMBOL_opt_order = 243,                /* opt_order  */
  YYSYMBOL_order_list = 244,               /* order_list  */
  YYSYMBOL_order_desc = 245,               /* order_desc  */
  YYSYMBOL_opt_order_type = 246,           /* opt_order_type  */
  YYSYMBOL_opt_top = 247,                  /* opt_top  */
  YYSYMBOL_opt_limit = 248,                /* opt_limit  */
  YYSYMBOL_expr_list = 249,                /* expr_list  */
  YYSYMBOL_opt_literal_list = 250,         /* opt_literal_list  */
  YYSYMBOL_literal_list = 251,             /* literal_list  */
  YYSYMBOL_expr_alias = 252,               /* expr_alias  */
  YYSYMBOL_expr = 253,                     /* expr  */
  YYSYMBOL_operand = 254,                  /* operand  */
  YYSYMBOL_scalar_expr = 255,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 256,               /* unary_expr  */
  YYSYMBOL_binary_expr = 257,              /* binary_expr  */
  YYSYMBOL_logic_expr = 258,               /* logic_expr  */
  YYSYMBOL_in_expr = 259,                  /* in_expr  */
  YYSYMBOL_case_expr = 260,                /* case_expr  */
  YYSYMBOL_case_list = 261,                /* case_list  */
  YYSYMBOL_exists_expr = 262,              /* exists_expr  */
  YYSYMBOL_comp_expr = 263,                /* comp_expr  */
  YYSYMBOL_function_expr = 264,            /* function_expr  */
  YYSYMBOL_extract_expr = 265,             /* extract_expr  */
  YYSYMBOL_datetime_field = 266,           /* datetime_field  */
  YYSYMBOL_array_expr = 267,               /* array_expr  */
  YYSYMBOL_array_index = 268,              /* array_index  */
  YYSYMBOL_between_expr = 269,             /* between_expr  */
  YYSYMBOL_column_name = 270,              /* column_name  */
  YYSYMBOL_literal = 271,                  /* literal  */
  YYSYMBOL_string_literal = 272,           /* string_literal  */
  YYSYMBOL_bool_literal = 273,             /* bool_literal  */
  YYSYMBOL_num_literal = 274,              /* num_literal  */
  YYSYMBOL_int_literal = 275,              /* int_literal  */
  YYSYMBOL_null_literal = 276,             /* null_literal  */
  YYSYMBOL_param_expr = 277,               /* param_expr  */
  YYSYMBOL_table_ref = 278,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 279,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 280, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 281,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 282,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 283,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 284,               /* table_name  */
  YYSYMBOL_db_name = 285,                  /* db_name  */
  YYSYMBOL_table_alias = 286,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 287,          /* opt_table_alias  */
  YYSYMBOL_alias = 288,                    /* alias  */
  YYSYMBOL_opt_alias = 289,                /* opt_alias  */
  YYSYMBOL_join_clause = 290,              /* join_clause  */
  YYSYMBOL_opt_join_type = 291,            /* opt_join_type  */
  YYSYMBOL_join_condition = 292,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 293,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 294           /* ident_commalist  */
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

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL \
             && defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  68
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   662

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  183
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  112
/* YYNRULES -- Number of rules.  */
#define YYNRULES  283
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  519

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   420


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   172,     2,     2,
     177,   178,   170,   168,   181,   169,   179,   171,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   180,
     161,   158,   162,   182,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   175,     2,   176,   173,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   159,   160,   163,   164,   165,   166,   167,
     174
};

#if HSQL_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   280,   280,   301,   307,   316,   320,   324,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   350,
     351,   356,   357,   361,   365,   377,   384,   387,   391,   403,
     412,   416,   425,   434,   435,   436,   440,   441,   442,   446,
     447,   451,   452,   453,   457,   458,   459,   463,   464,   465,
     475,   478,   481,   496,   504,   512,   520,   525,   533,   534,
     538,   539,   543,   544,   548,   554,   555,   556,   557,   558,
     559,   560,   561,   565,   566,   567,   578,   584,   590,   595,
     603,   604,   613,   625,   626,   630,   631,   635,   636,   640,
     653,   662,   675,   676,   677,   678,   682,   683,   693,   704,
     705,   709,   724,   731,   738,   746,   747,   751,   752,   762,
     763,   764,   781,   782,   786,   787,   791,   801,   818,   822,
     823,   824,   828,   829,   833,   845,   846,   850,   854,   855,
     858,   863,   864,   868,   873,   877,   878,   881,   882,   886,
     887,   891,   895,   896,   897,   903,   904,   908,   909,   910,
     911,   912,   913,   914,   915,   922,   923,   927,   928,   932,
     933,   937,   947,   948,   949,   950,   951,   955,   956,   957,
     958,   959,   960,   961,   962,   963,   964,   968,   969,   973,
     974,   975,   976,   977,   981,   982,   983,   984,   985,   986,
     987,   988,   989,   990,   991,   995,   996,  1000,  1001,  1002,
    1003,  1009,  1010,  1011,  1012,  1016,  1017,  1021,  1022,  1026,
    1027,  1028,  1029,  1030,  1031,  1032,  1036,  1037,  1041,  1045,
    1046,  1047,  1048,  1049,  1050,  1053,  1057,  1061,  1065,  1066,
    1067,  1068,  1072,  1073,  1074,  1075,  1076,  1080,  1084,  1085,
    1089,  1090,  1094,  1098,  1102,  1114,  1115,  1125,  1126,  1130,
    1131,  1140,  1141,  1146,  1157,  1166,  1167,  1172,  1177,  1178,
    1183,  1184,  1188,  1189,  1194,  1195,  1203,  1211,  1221,  1240,
    1241,  1242,  1243,  1244,  1245,  1246,  1247,  1248,  1249,  1254,
    1263,  1264,  1269,  1270
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "STRING",
  "FLOATVAL", "INTVAL", "DEALLOCATE", "PARAMETERS", "INTERSECT",
  "TEMPORARY", "TIMESTAMP", "DISTINCT", "NVARCHAR", "RESTRICT", "TRUNCATE",
  "ANALYZE", "BETWEEN", "CASCADE", "COLUMNS", "CONTROL", "DEFAULT",
  "EXECUTE", "EXPLAIN", "HISTORY", "INTEGER", "NATURAL", "PREPARE",
  "PRIMARY", "SCHEMAS", "SPATIAL", "VARCHAR", "VIRTUAL", "BEFORE",
  "COLUMN", "CREATE", "DELETE", "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT",
  "EXISTS", "EXTRACT", "GLOBAL", "HAVING", "IMPORT", "INSERT", "ISNULL",
  "OFFSET", "RENAME", "SCHEMA", "SELECT", "SORTED", "TABLES", "UNIQUE",
  "UNLOAD", "UPDATE", "VALUES", "AFTER", "ALTER", "CROSS", "FLOAT",
  "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL", "MERGE", "MINUS", "ORDER",
  "OUTER", "RIGHT", "TABLE", "UNION", "USING", "WHERE", "CALL", "CASE",
  "CHAR", "DATE", "DESC", "DROP", "ELSE", "FILE", "FROM", "FULL", "HASH",
  "HINT", "INTO", "JOIN", "LEFT", "LIKE", "LOAD", "LONG", "NULL", "PLAN",
  "SHOW", "TEXT", "THEN", "TIME", "VIEW", "WHEN", "WITH", "LOW_PRIORITY",
  "DELAYED", "HIGH_PRIORITY", "QUICK", "IGNORE", "DATABASES", "DATABASE",
  "CHARACTER", "ADD", "ALL", "AND", "ASC", "CSV", "END", "FOR", "INT",
  "KEY", "NOT", "OFF", "SET", "TBL", "TOP", "AS", "BY", "IF", "IN", "IS",
  "OF", "ON", "OR", "TO", "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE",
  "HOUR", "DAY", "MONTH", "YEAR", "TRUE", "FALSE", "ESCAPED", "DATA",
  "INFILE", "CONCURRENT", "REPLACE", "PARTITION", "FIELDS", "TERMINATED",
  "OPTIONALLY", "ENCLOSED", "LINES", "ROWS", "STARTING", "'='", "EQUALS",
  "NOTEQUALS", "'<'", "'>'", "LESS", "GREATER", "LESSEQ", "GREATEREQ",
  "NOTNULL", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "UMINUS", "'['",
  "']'", "'('", "')'", "'.'", "';'", "','", "'?'", "$accept", "input",
  "statement_list", "statement", "preparable_statement", "opt_hints",
  "hint_list", "hint", "prepare_statement", "prepare_target_query",
  "execute_statement", "import_statement", "import_file_type", "file_path",
  "load_statement", "opt_low_priority_or_concurrent",
  "opt_replace_or_ignore", "opt_local", "opt_fields_or_columns",
  "opt_lines", "opt_ignore_lines_rows", "show_statement",
  "create_statement", "opt_temporary", "opt_not_exists",
  "column_def_commalist", "column_def", "column_type",
  "opt_column_nullable", "drop_statement", "opt_exists",
  "delete_statement", "opt_low_priority", "opt_quick", "opt_ignore",
  "truncate_statement", "insert_statement", "opt_priority",
  "opt_column_list", "update_statement", "update_clause_commalist",
  "update_clause", "alter_statement", "opt_default", "opt_equal",
  "select_statement", "select_with_paren", "select_paren_or_clause",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "opt_distinct", "select_list", "opt_from_clause",
  "from_clause", "opt_where", "opt_group", "opt_having", "opt_order",
  "order_list", "order_desc", "opt_order_type", "opt_top", "opt_limit",
  "expr_list", "opt_literal_list", "literal_list", "expr_alias", "expr",
  "operand", "scalar_expr", "unary_expr", "binary_expr", "logic_expr",
  "in_expr", "case_expr", "case_list", "exists_expr", "comp_expr",
  "function_expr", "extract_expr", "datetime_field", "array_expr",
  "array_index", "between_expr", "column_name", "literal",
  "string_literal", "bool_literal", "num_literal", "int_literal",
  "null_literal", "param_expr", "table_ref", "table_ref_atomic",
  "nonjoin_table_ref_atomic", "table_ref_commalist", "table_ref_name",
  "table_ref_name_no_alias", "table_name", "db_name", "table_alias",
  "opt_table_alias", "alias", "opt_alias", "join_clause", "opt_join_type",
  "join_condition", "opt_semicolon", "ident_commalist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-352)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-279)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     379,    31,    62,    73,   113,    12,   -18,    71,   173,    44,
     -18,   -12,    82,    60,     0,   -25,   227,    68,  -352,   139,
     139,  -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,
    -352,  -352,  -352,    41,  -352,   152,   237,    80,  -352,    83,
     184,  -352,   172,   172,   172,   215,  -352,   220,   206,  -352,
    -352,  -352,   225,   321,   327,   225,   347,    62,   347,   234,
     234,   234,   -82,    62,  -352,  -352,   155,   185,  -352,   379,
    -352,   280,  -352,  -352,  -352,  -352,  -352,   -25,   256,   243,
     -25,   145,  -352,   367,    30,   368,   251,   347,    62,   347,
     172,  -352,   225,  -352,   290,  -352,   287,  -352,  -352,  -352,
     240,    62,  -352,   355,   267,   355,   340,    62,    62,   347,
    -352,  -352,   316,  -352,  -352,  -352,  -352,   208,  -352,   319,
    -352,  -352,  -352,   240,   319,   321,    10,  -352,  -352,  -352,
    -352,  -352,  -352,  -352,  -352,   211,   209,  -352,  -352,  -352,
    -352,  -352,  -352,  -352,  -352,  -352,   350,  -352,   218,  -352,
      62,   308,   394,    62,   161,   219,   222,   160,   259,   229,
     303,  -352,    26,   323,   224,  -352,    54,   330,  -352,  -352,
    -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,
    -352,  -352,  -352,   278,  -352,  -352,   298,   377,   302,  -352,
    -352,  -352,  -352,  -352,   266,   413,   145,   238,  -352,   110,
     145,  -352,   372,   378,   383,  -352,    30,  -352,   424,   307,
     -66,    62,   345,  -352,   218,     2,     6,   388,   217,   240,
     106,   134,   257,   303,   440,   240,   140,   264,   -90,     1,
     369,  -352,   240,  -352,   240,   442,   240,  -352,  -352,   303,
    -352,   303,   -64,   271,    77,   303,   303,   303,   303,   303,
     303,   303,   303,   303,   303,   303,   303,   303,   303,   303,
     321,   446,   329,   450,   332,   394,   284,   108,  -352,  -352,
     240,  -352,  -352,  -352,  -352,   321,   321,   321,  -352,  -352,
     115,   -25,   320,   450,   369,    62,    50,  -352,   240,  -352,
    -352,   277,  -352,  -352,  -352,  -352,  -352,  -352,   373,   107,
     154,   240,   240,  -352,   388,   376,  -127,  -352,  -352,   -25,
    -352,   162,  -352,   283,  -352,    34,  -352,   240,   406,  -352,
    -352,  -352,   356,   393,   487,   303,   293,    26,  -352,   380,
     304,   487,   487,   487,   487,   468,   468,   468,   468,   140,
     140,   -60,   -60,   -60,   -79,   310,   325,   -55,  -352,   335,
     156,  -352,   335,   -59,    30,  -352,   413,  -352,  -352,  -352,
    -352,  -352,   475,  -352,   411,   117,  -352,  -352,  -352,   331,
    -352,   142,  -352,   240,   240,   240,  -352,   153,   192,   326,
    -352,   333,   408,  -352,  -352,  -352,   437,   439,   444,   421,
       1,   509,  -352,  -352,  -352,    43,   390,  -352,   303,   487,
      26,   339,   144,  -352,  -352,   240,   446,  -352,  -352,   240,
    -352,   341,  -352,  -352,   342,  -352,  -352,  -352,    95,   240,
    -352,  -352,   432,   150,  -352,  -352,   394,  -352,   450,    30,
    -352,   -85,    43,   203,  -352,   240,  -352,    34,     1,  -352,
    -352,  -352,     1,   392,   344,   240,   440,   346,   163,  -352,
    -352,    43,  -352,    43,   517,   519,  -352,   433,  -352,    43,
     454,  -352,  -352,  -352,   170,  -352,  -352,    43,  -352,  -352,
      -1,   424,   -31,  -352,  -352,   352,   354,  -352,    62,  -352,
     358,   240,   171,   240,  -352,  -352,  -352,    -4,     7,    43,
    -352,  -352,    43,   381,   384,   382,   359,   361,   414,   415,
      61,   435,  -352,   539,   540,   419,   420,   541,   218,  -352,
    -352,   544,   545,  -104,  -352,  -352,  -352,  -352,  -352
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,     0,     0,     0,    59,    84,     0,    95,   146,
      84,     0,     0,     0,     0,     0,     0,   281,     3,    20,
      20,    18,     9,    10,     7,    11,    17,    13,    15,    12,
      16,    14,     8,   109,   110,   138,     0,   255,    89,    27,
       0,    58,    61,    61,    61,     0,    83,    86,     0,    92,
      93,    94,    88,     0,   126,    88,     0,     0,     0,    81,
      81,    81,    35,     0,    50,    51,     0,     0,     1,   280,
       2,     0,     6,     5,   120,   121,   119,     0,   123,     0,
       0,   154,    79,     0,   158,     0,     0,     0,     0,     0,
      61,    85,    88,    30,     0,    87,     0,   242,   145,   125,
       0,     0,   257,   106,     0,   106,     0,     0,     0,     0,
      33,    34,    40,    52,   113,   112,     4,     0,   114,   138,
     115,   122,   118,     0,   138,     0,     0,   116,   256,   237,
     240,   243,   238,   239,   244,     0,   157,   159,   232,   233,
     234,   241,   235,   236,    26,    25,     0,    57,    97,    56,
       0,     0,     0,     0,   228,     0,     0,     0,     0,     0,
       0,   230,     0,   129,   127,   155,   265,   162,   169,   170,
     171,   164,   166,   172,   165,   184,   173,   174,   175,   168,
     163,   177,   178,     0,   254,   105,     0,     0,     0,    80,
      76,    77,    78,    39,     0,     0,   154,   137,   139,   144,
     154,   149,   151,   150,   147,    28,     0,    60,     0,     0,
       0,     0,     0,    31,    97,   126,     0,     0,     0,     0,
       0,     0,     0,     0,   180,     0,   179,     0,     0,     0,
     132,   128,     0,   263,     0,     0,     0,   264,   161,     0,
     181,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    23,     0,    21,   111,
       0,   143,   142,   141,   117,     0,     0,     0,   160,   282,
       0,     0,     0,     0,   132,     0,     0,   216,     0,   229,
     231,     0,   219,   220,   221,   222,   223,   224,     0,     0,
       0,     0,     0,   203,     0,     0,     0,   176,   167,     0,
     130,   245,   247,     0,   249,   261,   248,     0,   134,   156,
     195,   262,   196,     0,   191,     0,     0,     0,   182,     0,
     194,   193,   209,   210,   211,   212,   213,   214,   215,   186,
     185,   188,   187,   189,   190,     0,     0,   132,    99,   108,
       0,   104,   108,    38,     0,    19,     0,   140,   153,   152,
     148,    96,     0,    55,     0,     0,    62,    82,    29,     0,
      91,     0,   207,     0,     0,     0,   201,     0,     0,     0,
     225,     0,     0,   277,   269,   275,   273,   276,   271,     0,
       0,     0,   260,   253,   258,   131,     0,   124,     0,   192,
       0,     0,     0,   183,   226,     0,     0,    98,   107,     0,
      66,     0,    69,    68,     0,    67,    72,    65,    75,     0,
      37,    36,     0,     0,    22,   283,     0,    54,     0,     0,
     217,     0,   205,     0,   204,     0,   208,   261,     0,   272,
     274,   270,     0,   246,   262,     0,   227,     0,     0,   199,
     197,   101,   100,   103,     0,     0,    73,     0,    64,   102,
       0,    24,    53,    63,     0,   218,   202,   206,   250,   266,
     278,     0,   136,   200,   198,     0,     0,    74,     0,    90,
       0,     0,     0,     0,   133,    70,    71,    43,     0,   279,
     267,   259,   135,     0,     0,    46,   228,     0,     0,     0,
       0,    49,   268,     0,     0,     0,     0,     0,    97,    42,
      41,     0,     0,     0,    32,    45,    44,    47,    48
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -352,  -352,  -352,   481,  -352,   537,  -352,   214,  -352,  -352,
    -352,  -352,  -352,  -254,  -352,  -352,  -352,  -352,  -352,  -352,
    -352,  -352,  -352,  -352,    39,  -352,  -271,  -352,  -352,  -352,
     138,  -352,   557,  -352,   -14,  -352,  -352,  -352,  -211,  -352,
    -352,   165,  -352,   467,   228,  -181,    18,   494,   -13,   542,
    -352,  -352,   285,   364,  -352,  -352,  -352,  -260,  -352,  -352,
     148,  -352,   311,  -352,  -352,   -38,  -217,  -352,  -337,   351,
    -117,  -114,  -352,  -352,  -352,  -352,  -352,  -352,   362,  -352,
    -352,  -352,  -352,  -352,  -352,  -352,  -352,    96,   -83,  -147,
    -352,  -352,   -46,  -352,  -352,  -352,  -351,   147,  -352,  -352,
    -352,    -2,   -15,  -352,   149,   422,  -352,  -352,  -352,  -352,
    -352,   116
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    16,    17,    18,    19,    72,   267,   268,    20,   145,
      21,    22,    94,   212,    23,   112,   422,   194,   495,   501,
     508,    24,    25,    45,    87,   365,   351,   418,   458,    26,
     107,    27,    47,    92,    96,    28,    29,    52,   209,    30,
     347,   348,    31,   186,   409,    32,    33,   119,    34,    77,
      78,   122,    35,   100,   163,   230,   231,   318,   397,   484,
      81,   197,   198,   273,    54,   127,   164,   135,   136,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   221,   174,
     175,   176,   177,   298,   178,   179,   180,   181,   182,   138,
     139,   140,   141,   142,   143,   310,   311,   312,   313,   314,
     183,   315,   103,   392,   393,   394,   238,   316,   389,   490,
      70,   280
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      38,   137,    67,   286,    37,   213,   199,    98,   306,   289,
     496,   353,   366,   483,    99,   493,    97,   423,   282,    63,
     317,   110,    41,   234,   367,   382,     9,   325,   234,   154,
     129,   130,    97,    66,   129,   130,    97,   233,    56,   443,
     220,   101,   236,   105,   224,   228,   226,   236,   420,   380,
      74,   517,   518,    64,   232,   104,   245,   233,    36,   383,
      57,   113,    42,   384,   326,    37,   111,   155,   156,   385,
     386,   371,   147,   480,   149,   245,    39,     9,   151,   201,
     204,    75,    88,    89,   387,    46,   148,   407,   308,   388,
     421,   470,   464,   465,   192,   118,   260,    58,   118,   184,
     363,     9,   299,   157,   202,   190,   191,   369,    65,   224,
     402,   283,    43,   259,    76,   260,    40,   320,   213,   322,
     131,    44,   203,   278,   131,   323,   406,   324,   381,   150,
     481,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   158,   494,   210,   227,
     232,   214,    15,   199,    59,    48,   234,   463,   269,   391,
     159,    74,   274,   154,   129,   130,    97,   234,    53,   132,
     133,   328,   462,   132,   133,   236,   290,   161,   309,   235,
     287,   410,    60,   448,   377,   378,   236,   411,   382,   456,
     271,    61,    75,   125,   412,   160,   161,   329,   108,   109,
     395,   155,   156,   162,   291,   374,    62,   219,   134,   284,
     126,   399,   134,   505,   345,   457,   301,   413,   506,   234,
     234,    79,   383,   234,   272,    76,   384,    68,   472,   358,
     359,   360,   385,   386,   414,   302,   375,   157,   236,   236,
      82,    71,   236,   154,   129,   130,    97,   387,    69,   415,
     303,  -278,   388,   416,   131,   302,   431,   432,   433,    83,
      84,   219,   154,   129,   130,    97,   234,   196,    85,   434,
     376,   137,   200,   370,   417,   245,    49,    50,    51,   213,
     158,   155,   156,   368,   446,   236,   355,    90,   451,   356,
     435,   379,   453,   361,   159,   427,   362,   514,   428,    86,
     222,   156,   459,   132,   133,   234,   154,   129,   130,    97,
     256,   257,   258,   259,   401,   260,   234,   157,   467,   466,
     430,    93,   450,   232,   236,   232,    91,    97,   461,   160,
     161,   206,    95,   114,   131,   236,   157,   162,   215,    99,
     216,   474,   134,  -251,   232,   156,   137,   239,   479,   491,
     102,   206,   362,   131,   292,   293,   294,   295,   296,   297,
     158,   106,   120,   115,   489,   120,   492,   117,   121,   123,
     128,   146,   144,   152,   159,   153,   185,   240,   187,   223,
     157,   189,   193,   132,   133,   195,     1,   447,    79,   205,
     206,   207,   211,   159,     2,   208,   217,   131,   129,   218,
     261,     3,   132,   133,   225,   232,     4,   229,   262,   160,
     161,   263,   264,   265,     5,     6,   266,   162,   382,   270,
     275,   241,   134,   223,     7,     8,   276,   279,   160,   161,
       9,   277,   281,   285,   304,    10,   162,   159,    11,     9,
     240,   134,   307,   364,   317,   321,   132,   133,   327,   346,
     242,   349,   383,   350,   352,   372,   384,   373,   243,   244,
      12,   354,   385,   386,   390,   245,   246,   325,   396,   234,
     400,    13,   160,   161,   403,    14,   487,   387,   425,   260,
     162,  -278,   388,   405,   241,   134,   404,   240,   247,   248,
     249,   250,   251,   408,   426,   252,   253,   438,   254,   255,
     256,   257,   258,   259,   436,   260,   398,   439,   429,   440,
     442,   437,   444,   305,   441,   240,   445,   449,   454,   455,
     460,   471,   244,   475,   473,   476,   478,   477,   245,   246,
     485,   241,   486,   498,   240,   488,   499,   500,   216,   502,
     503,   504,   507,   509,   510,   511,   512,   513,   515,   516,
     116,   247,   248,   249,   250,   251,    15,    73,   252,   253,
     305,   254,   255,   256,   257,   258,   259,    55,   260,   244,
     424,   452,   188,  -252,   124,   245,   246,    80,  -279,   288,
     419,   357,   300,   319,   497,   469,   468,   482,   237,     0,
       0,     0,     0,     0,     0,     0,     0,   244,   247,   248,
     249,   250,   251,   245,     0,   252,   253,     0,   254,   255,
     256,   257,   258,   259,     0,   260,   244,     0,     0,     0,
       0,     0,   245,  -279,     0,     0,     0,     0,     0,  -279,
    -279,     0,     0,  -279,  -279,     0,   254,   255,   256,   257,
     258,   259,     0,   260,     0,  -279,  -279,  -279,   250,   251,
       0,     0,   252,   253,     0,   254,   255,   256,   257,   258,
     259,     0,   260
};

static const yytype_int16 yycheck[] =
{
       2,    84,    15,   214,     3,   152,   123,    53,   225,     3,
       3,   265,   283,    44,    12,    19,     6,   354,    84,    19,
      75,   103,    10,   113,   284,    26,    51,    91,   113,     3,
       4,     5,     6,    15,     4,     5,     6,     3,    50,   390,
     157,    55,   132,    58,   158,   162,   160,   132,   107,   176,
       9,   155,   156,    53,   181,    57,   135,     3,    27,    60,
      72,    63,    50,    64,   128,     3,   148,    41,    42,    70,
      71,   288,    87,    74,    89,   135,     3,    51,    92,   125,
     126,    40,    43,    44,    85,   103,    88,   347,   178,    90,
     149,   442,   429,   178,   109,    77,   175,   109,    80,   101,
     281,    51,   219,    77,    94,   107,   108,    57,   108,   223,
     327,   177,   100,   173,    73,   175,     3,   234,   265,   236,
      94,   109,   112,   206,    94,   239,   181,   241,   309,    90,
     131,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   120,   151,   150,   162,
     181,   153,   177,   270,    72,    84,   113,   428,   196,   125,
     134,     9,   200,     3,     4,     5,     6,   113,   124,   143,
     144,    94,   426,   143,   144,   132,   170,   170,   177,   125,
     178,    25,   100,   400,   301,   302,   132,    31,    26,    94,
      80,   109,    40,    48,    38,   169,   170,   120,    60,    61,
     317,    41,    42,   177,   217,    98,   146,   101,   182,   211,
      65,   325,   182,   152,   260,   120,    82,    61,   157,   113,
     113,    69,    60,   113,   114,    73,    64,     0,   445,   275,
     276,   277,    70,    71,    78,   101,    82,    77,   132,   132,
       3,   102,   132,     3,     4,     5,     6,    85,   180,    93,
     116,    89,    90,    97,    94,   101,   373,   374,   375,   179,
     177,   101,     3,     4,     5,     6,   113,   119,    84,   116,
     116,   354,   124,   286,   118,   135,   103,   104,   105,   426,
     120,    41,    42,   285,   398,   132,   178,    72,   405,   181,
      98,   304,   409,   178,   134,   178,   181,   508,   181,   127,
      41,    42,   419,   143,   144,   113,     3,     4,     5,     6,
     170,   171,   172,   173,   327,   175,   113,    77,   435,   116,
     178,   115,   178,   181,   132,   181,   106,     6,   178,   169,
     170,   181,   107,   178,    94,   132,    77,   177,   177,    12,
     179,   178,   182,   181,   181,    42,   429,    17,   178,   178,
       3,   181,   181,    94,   137,   138,   139,   140,   141,   142,
     120,   127,    77,   178,   481,    80,   483,    87,   112,   126,
       3,   120,     4,    83,   134,    88,    21,    47,   111,   120,
      77,    41,    66,   143,   144,   177,     7,   400,    69,   178,
     181,    41,    84,   134,    15,   177,   177,    94,     4,   177,
     122,    22,   143,   144,   175,   181,    27,    84,   110,   169,
     170,    34,   110,   147,    35,    36,     3,   177,    26,   181,
      48,    91,   182,   120,    45,    46,    48,     3,   169,   170,
      51,    48,   125,    88,   177,    56,   177,   134,    59,    51,
      47,   182,   178,   123,    75,     3,   143,   144,   177,     3,
     120,   122,    60,     3,   122,   178,    64,    84,   128,   129,
      81,   177,    70,    71,   181,   135,   136,    91,    62,   113,
     177,    92,   169,   170,    94,    96,   478,    85,     3,   175,
     177,    89,    90,   158,    91,   182,   176,    47,   158,   159,
     160,   161,   162,   158,    83,   165,   166,    89,   168,   169,
     170,   171,   172,   173,   178,   175,   113,    70,   177,    70,
      89,   178,     3,   120,    70,    47,   126,   178,   177,   177,
      88,   177,   129,     6,   178,     6,    72,    94,   135,   136,
     178,    91,   178,   152,    47,   177,   152,   155,   179,   178,
     126,   126,   107,     4,     4,   126,   126,     6,     4,     4,
      69,   158,   159,   160,   161,   162,   177,    20,   165,   166,
     120,   168,   169,   170,   171,   172,   173,    10,   175,   129,
     356,   406,   105,   181,    80,   135,   136,    35,    91,   215,
     352,   270,   220,   232,   488,   438,   437,   471,   166,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   158,   159,
     160,   161,   162,   135,    -1,   165,   166,    -1,   168,   169,
     170,   171,   172,   173,    -1,   175,   129,    -1,    -1,    -1,
      -1,    -1,   135,   136,    -1,    -1,    -1,    -1,    -1,   161,
     162,    -1,    -1,   165,   166,    -1,   168,   169,   170,   171,
     172,   173,    -1,   175,    -1,   158,   159,   160,   161,   162,
      -1,    -1,   165,   166,    -1,   168,   169,   170,   171,   172,
     173,    -1,   175
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    27,    35,    36,    45,    46,    51,
      56,    59,    81,    92,    96,   177,   184,   185,   186,   187,
     191,   193,   194,   197,   204,   205,   212,   214,   218,   219,
     222,   225,   228,   229,   231,   235,    27,     3,   284,     3,
       3,    10,    50,   100,   109,   206,   103,   215,    84,   103,
     104,   105,   220,   124,   247,   215,    50,    72,   109,    72,
     100,   109,   146,    19,    53,   108,   229,   231,     0,   180,
     293,   102,   188,   188,     9,    40,    73,   232,   233,    69,
     232,   243,     3,   179,   177,    84,   127,   207,   207,   207,
      72,   106,   216,   115,   195,   107,   217,     6,   275,    12,
     236,   217,     3,   285,   284,   285,   127,   213,   213,   213,
     103,   148,   198,   284,   178,   178,   186,    87,   229,   230,
     235,   112,   234,   126,   230,    48,    65,   248,     3,     4,
       5,    94,   143,   144,   182,   250,   251,   271,   272,   273,
     274,   275,   276,   277,     4,   192,   120,   285,   284,   285,
     207,   217,    83,    88,     3,    41,    42,    77,   120,   134,
     169,   170,   177,   237,   249,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   262,   263,   264,   265,   267,   268,
     269,   270,   271,   283,   284,    21,   226,   111,   226,    41,
     284,   284,   285,    66,   200,   177,   243,   244,   245,   253,
     243,   275,    94,   112,   275,   178,   181,    41,   177,   221,
     284,    84,   196,   272,   284,   177,   179,   177,   177,   101,
     253,   261,    41,   120,   254,   175,   254,   231,   253,    84,
     238,   239,   181,     3,   113,   125,   132,   288,   289,    17,
      47,    91,   120,   128,   129,   135,   136,   158,   159,   160,
     161,   162,   165,   166,   168,   169,   170,   171,   172,   173,
     175,   122,   110,    34,   110,   147,     3,   189,   190,   248,
     181,    80,   114,   246,   248,    48,    48,    48,   271,     3,
     294,   125,    84,   177,   284,    88,   221,   178,   236,     3,
     170,   231,   137,   138,   139,   140,   141,   142,   266,   253,
     261,    82,   101,   116,   177,   120,   249,   178,   178,   177,
     278,   279,   280,   281,   282,   284,   290,    75,   240,   252,
     253,     3,   253,   254,   254,    91,   128,   177,    94,   120,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   275,     3,   223,   224,   122,
       3,   209,   122,   196,   177,   178,   181,   245,   275,   275,
     275,   178,   181,   228,   123,   208,   209,   240,   284,    57,
     231,   249,   178,    84,    98,    82,   116,   253,   253,   231,
     176,   228,    26,    60,    64,    70,    71,    85,    90,   291,
     181,   125,   286,   287,   288,   253,    62,   241,   113,   254,
     177,   231,   249,    94,   176,   158,   181,   240,   158,   227,
      25,    31,    38,    61,    78,    93,    97,   118,   210,   227,
     107,   149,   199,   251,   190,     3,    83,   178,   181,   177,
     178,   253,   253,   253,   116,    98,   178,   178,    89,    70,
      70,    70,    89,   279,     3,   126,   254,   231,   249,   178,
     178,   253,   224,   253,   177,   177,    94,   120,   211,   253,
      88,   178,   196,   209,   251,   178,   116,   253,   287,   280,
     279,   177,   249,   178,   178,     6,     6,    94,    72,   178,
      74,   131,   294,    44,   242,   178,   178,   284,   177,   253,
     292,   178,   253,    19,   151,   201,     3,   270,   152,   152,
     155,   202,   178,   126,   126,   152,   157,   107,   203,     4,
       4,   126,   126,     6,   221,     4,     4,   155,   156
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   183,   184,   185,   185,   186,   186,   186,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   188,
     188,   189,   189,   190,   190,   191,   192,   193,   193,   194,
     195,   196,   197,   198,   198,   198,   199,   199,   199,   200,
     200,   201,   201,   201,   202,   202,   202,   203,   203,   203,
     204,   204,   204,   205,   205,   205,   205,   205,   206,   206,
     207,   207,   208,   208,   209,   210,   210,   210,   210,   210,
     210,   210,   210,   211,   211,   211,   212,   212,   212,   212,
     213,   213,   214,   215,   215,   216,   216,   217,   217,   218,
     219,   219,   220,   220,   220,   220,   221,   221,   222,   223,
     223,   224,   225,   225,   225,   226,   226,   227,   227,   228,
     228,   228,   229,   229,   230,   230,   231,   231,   232,   233,
     233,   233,   234,   234,   235,   236,   236,   237,   238,   238,
     239,   240,   240,   241,   241,   242,   242,   243,   243,   244,
     244,   245,   246,   246,   246,   247,   247,   248,   248,   248,
     248,   248,   248,   248,   248,   249,   249,   250,   250,   251,
     251,   252,   253,   253,   253,   253,   253,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   255,   255,   256,
     256,   256,   256,   256,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   258,   258,   259,   259,   259,
     259,   260,   260,   260,   260,   261,   261,   262,   262,   263,
     263,   263,   263,   263,   263,   263,   264,   264,   265,   266,
     266,   266,   266,   266,   266,   267,   268,   269,   270,   270,
     270,   270,   271,   271,   271,   271,   271,   272,   273,   273,
     274,   274,   275,   276,   277,   278,   278,   279,   279,   280,
     280,   281,   281,   282,   283,   284,   284,   285,   286,   286,
     287,   287,   288,   288,   289,   289,   290,   290,   290,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   292,
     293,   293,   294,   294
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       0,     1,     3,     1,     4,     4,     1,     2,     5,     7,
       1,     1,    14,     1,     1,     0,     1,     1,     0,     1,
       0,     4,     4,     0,     4,     4,     0,     3,     3,     0,
       2,     2,     3,     9,     8,     7,     4,     4,     1,     0,
       3,     0,     1,     3,     3,     1,     1,     1,     1,     1,
       4,     4,     1,     1,     2,     0,     4,     4,     4,     3,
       2,     0,     7,     1,     0,     1,     0,     1,     0,     2,
      10,     7,     1,     1,     1,     0,     3,     0,     7,     1,
       3,     3,     8,     8,     6,     1,     0,     1,     0,     1,
       1,     5,     3,     3,     1,     1,     3,     5,     2,     1,
       1,     1,     1,     0,     7,     1,     0,     1,     1,     0,
       2,     2,     0,     4,     0,     2,     0,     3,     0,     1,
       3,     2,     1,     1,     0,     2,     0,     2,     4,     2,
       2,     2,     4,     4,     0,     1,     3,     1,     0,     1,
       3,     2,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     2,
       2,     2,     3,     4,     1,     3,     3,     3,     3,     3,
       3,     3,     4,     3,     3,     3,     3,     5,     6,     5,
       6,     4,     6,     3,     5,     4,     5,     4,     5,     3,
       3,     3,     3,     3,     3,     3,     3,     5,     6,     1,
       1,     1,     1,     1,     1,     4,     4,     5,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       4,     1,     3,     2,     1,     1,     3,     1,     1,     5,
       1,     0,     2,     1,     1,     0,     4,     6,     8,     1,
       2,     1,     2,     1,     2,     1,     1,     1,     0,     1,
       1,     0,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = SQL_HSQL_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == SQL_HSQL_EMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use SQL_HSQL_error or SQL_HSQL_UNDEF. */
#define YYERRCODE SQL_HSQL_UNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if HSQL_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (result);
  YY_USE (scanner);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, result, scanner);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, hsql::SQLParserResult* result, yyscan_t scanner)
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !HSQL_DEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !HSQL_DEBUG */


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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (result);
  YY_USE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_IDENTIFIER: /* IDENTIFIER  */
#line 146 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1937 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 146 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1943 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 143 "bison_parser.y"
            { }
#line 1949 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 143 "bison_parser.y"
            { }
#line 1955 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 164 "bison_parser.y"
            {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1968 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 1974 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 1980 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 164 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1993 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint_list: /* hint_list  */
#line 164 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2006 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2012 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 2018 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 146 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2024 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2030 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2036 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_file_type: /* import_file_type  */
#line 143 "bison_parser.y"
            { }
#line 2042 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 146 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2048 "bison_parser.cpp"
        break;

    case YYSYMBOL_load_statement: /* load_statement  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2054 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2060 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2066 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_temporary: /* opt_temporary  */
#line 143 "bison_parser.y"
            { }
#line 2072 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 143 "bison_parser.y"
            { }
#line 2078 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def_commalist: /* column_def_commalist  */
#line 164 "bison_parser.y"
            {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 2091 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2097 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 143 "bison_parser.y"
            { }
#line 2103 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_nullable: /* opt_column_nullable  */
#line 143 "bison_parser.y"
            { }
#line 2109 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2115 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 143 "bison_parser.y"
            { }
#line 2121 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2127 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_low_priority: /* opt_low_priority  */
#line 143 "bison_parser.y"
            { }
#line 2133 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_quick: /* opt_quick  */
#line 143 "bison_parser.y"
            { }
#line 2139 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_ignore: /* opt_ignore  */
#line 143 "bison_parser.y"
            { }
#line 2145 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2151 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2157 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_priority: /* opt_priority  */
#line 143 "bison_parser.y"
            { }
#line 2163 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 153 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			free(ptr);
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2176 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2182 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 164 "bison_parser.y"
            {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 2195 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2201 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).alter_stmt)); }
#line 2207 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_default: /* opt_default  */
#line 143 "bison_parser.y"
            { }
#line 2213 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_equal: /* opt_equal  */
#line 143 "bison_parser.y"
            { }
#line 2219 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2225 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2231 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_paren_or_clause: /* select_paren_or_clause  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2237 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2243 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2249 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 143 "bison_parser.y"
            { }
#line 2255 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 164 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2268 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2274 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2280 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2286 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2292 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2298 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 164 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2311 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 164 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2324 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2330 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 143 "bison_parser.y"
            { }
#line 2336 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2342 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2348 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 164 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2361 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_literal_list: /* opt_literal_list  */
#line 164 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2374 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal_list: /* literal_list  */
#line 164 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2387 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2393 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2399 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2405 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2411 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2417 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2423 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2429 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2435 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2441 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2447 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2453 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2459 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2465 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2471 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 143 "bison_parser.y"
            { }
#line 2477 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2483 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2489 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2495 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2501 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2507 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2513 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2519 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2525 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2531 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2537 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2543 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2549 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2555 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2561 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_commalist: /* table_ref_commalist  */
#line 164 "bison_parser.y"
            {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2574 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2580 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2586 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 144 "bison_parser.y"
            { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2592 "bison_parser.cpp"
        break;

    case YYSYMBOL_db_name: /* db_name  */
#line 145 "bison_parser.y"
            { free( (((*yyvaluep).db_name).name) ); }
#line 2598 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2604 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2610 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2616 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2622 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2628 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 143 "bison_parser.y"
            { }
#line 2634 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 172 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2640 "bison_parser.cpp"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 153 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			free(ptr);
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2653 "bison_parser.cpp"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (hsql::SQLParserResult* result, yyscan_t scanner)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = SQL_HSQL_EMPTY; /* Cause a token to be read.  */


/* User initialization code.  */
#line 73 "bison_parser.y"
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
	yylloc.total_column = 0;
	yylloc.string_length = 0;
}

#line 2761 "bison_parser.cpp"

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  if (yychar == SQL_HSQL_EMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= SQL_YYEOF)
    {
      yychar = SQL_YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == SQL_HSQL_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = SQL_HSQL_UNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = SQL_HSQL_EMPTY;
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* input: statement_list opt_semicolon  */
#line 280 "bison_parser.y"
                                             {
			for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
				// Transfers ownership of the statement.
				result->addStatement(stmt);
			}

			unsigned param_id = 0;
			for (void* param : yyloc.param_list) {
				if (param != nullptr) {
					Expr* expr = (Expr*) param;
					expr->ival = param_id;
					result->addParameter(expr);
					++param_id;
				}
			}
			delete (yyvsp[-1].stmt_vec);
		}
#line 2990 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 301 "bison_parser.y"
                          {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 3001 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 307 "bison_parser.y"
                                             {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 3012 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 316 "bison_parser.y"
                                            {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3021 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 320 "bison_parser.y"
                                               {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3030 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 324 "bison_parser.y"
                               {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 3038 "bison_parser.cpp"
    break;

  case 8: /* preparable_statement: select_statement  */
#line 331 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3044 "bison_parser.cpp"
    break;

  case 9: /* preparable_statement: import_statement  */
#line 332 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3050 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: load_statement  */
#line 333 "bison_parser.y"
                       { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3056 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 334 "bison_parser.y"
                         { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3062 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 335 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3068 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 336 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3074 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: alter_statement  */
#line 337 "bison_parser.y"
                                { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3080 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: truncate_statement  */
#line 338 "bison_parser.y"
                                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3086 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: update_statement  */
#line 339 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3092 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: drop_statement  */
#line 340 "bison_parser.y"
                               { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3098 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: execute_statement  */
#line 341 "bison_parser.y"
                                  { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3104 "bison_parser.cpp"
    break;

  case 19: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 350 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3110 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: %empty  */
#line 351 "bison_parser.y"
                { (yyval.expr_vec) = nullptr; }
#line 3116 "bison_parser.cpp"
    break;

  case 21: /* hint_list: hint  */
#line 356 "bison_parser.y"
               { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3122 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint_list ',' hint  */
#line 357 "bison_parser.y"
                             { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3128 "bison_parser.cpp"
    break;

  case 23: /* hint: IDENTIFIER  */
#line 361 "bison_parser.y"
                           {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 3137 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 365 "bison_parser.y"
                                          {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 3147 "bison_parser.cpp"
    break;

  case 25: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 377 "bison_parser.y"
                                                             {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 3157 "bison_parser.cpp"
    break;

  case 27: /* execute_statement: EXECUTE IDENTIFIER  */
#line 387 "bison_parser.y"
                                   {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 3166 "bison_parser.cpp"
    break;

  case 28: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 391 "bison_parser.y"
                                                            {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 3176 "bison_parser.cpp"
    break;

  case 29: /* import_statement: IMPORT FROM import_file_type FILE file_path INTO table_name  */
#line 403 "bison_parser.y"
                                                                            {
			(yyval.import_stmt) = new ImportStatement((ImportType) (yyvsp[-4].uval));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3187 "bison_parser.cpp"
    break;

  case 30: /* import_file_type: CSV  */
#line 412 "bison_parser.y"
                    { (yyval.uval) = kImportCSV; }
#line 3193 "bison_parser.cpp"
    break;

  case 31: /* file_path: string_literal  */
#line 416 "bison_parser.y"
                               { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 3199 "bison_parser.cpp"
    break;

  case 32: /* load_statement: LOAD DATA opt_low_priority_or_concurrent opt_local INFILE file_path opt_replace_or_ignore INTO TABLE table_name opt_fields_or_columns opt_lines opt_ignore_lines_rows opt_column_list  */
#line 425 "bison_parser.y"
                                                                                                                                                                                        {
			(yyval.import_stmt) = new ImportStatement(kImportCSV);
			(yyval.import_stmt)->filePath = (yyvsp[-8].sval);
			(yyval.import_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[-4].table_name).name;
		}
#line 3210 "bison_parser.cpp"
    break;

  case 50: /* show_statement: SHOW TABLES  */
#line 475 "bison_parser.y"
                            {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3218 "bison_parser.cpp"
    break;

  case 51: /* show_statement: SHOW DATABASES  */
#line 478 "bison_parser.y"
                               {
			(yyval.show_stmt) = new ShowStatement(kShowDatabases);
		}
#line 3226 "bison_parser.cpp"
    break;

  case 52: /* show_statement: SHOW COLUMNS table_name  */
#line 481 "bison_parser.y"
                                        {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3236 "bison_parser.cpp"
    break;

  case 53: /* create_statement: CREATE opt_temporary TABLE opt_not_exists table_name FROM TBL FILE file_path  */
#line 496 "bison_parser.y"
                                                                                             {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->temporary = (yyvsp[-7].bval);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 3249 "bison_parser.cpp"
    break;

  case 54: /* create_statement: CREATE opt_temporary TABLE opt_not_exists table_name '(' column_def_commalist ')'  */
#line 504 "bison_parser.y"
                                                                                                  {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->temporary = (yyvsp[-6].bval);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 3262 "bison_parser.cpp"
    break;

  case 55: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 512 "bison_parser.y"
                                                                                          {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3275 "bison_parser.cpp"
    break;

  case 56: /* create_statement: CREATE DATABASE opt_not_exists db_name  */
#line 520 "bison_parser.y"
                                                       {
			(yyval.create_stmt) = new CreateStatement(kCreateDatabase);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-1].bval);
			(yyval.create_stmt)->schema = (yyvsp[0].db_name).name;
		}
#line 3285 "bison_parser.cpp"
    break;

  case 57: /* create_statement: CREATE SCHEMA opt_not_exists db_name  */
#line 525 "bison_parser.y"
                                                     {
			(yyval.create_stmt) = new CreateStatement(kCreateDatabase);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-1].bval);
			(yyval.create_stmt)->schema = (yyvsp[0].db_name).name;
		}
#line 3295 "bison_parser.cpp"
    break;

  case 58: /* opt_temporary: TEMPORARY  */
#line 533 "bison_parser.y"
                          { (yyval.bval) = true; }
#line 3301 "bison_parser.cpp"
    break;

  case 59: /* opt_temporary: %empty  */
#line 534 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3307 "bison_parser.cpp"
    break;

  case 60: /* opt_not_exists: IF NOT EXISTS  */
#line 538 "bison_parser.y"
                              { (yyval.bval) = true; }
#line 3313 "bison_parser.cpp"
    break;

  case 61: /* opt_not_exists: %empty  */
#line 539 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3319 "bison_parser.cpp"
    break;

  case 62: /* column_def_commalist: column_def  */
#line 543 "bison_parser.y"
                           { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3325 "bison_parser.cpp"
    break;

  case 63: /* column_def_commalist: column_def_commalist ',' column_def  */
#line 544 "bison_parser.y"
                                                    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3331 "bison_parser.cpp"
    break;

  case 64: /* column_def: IDENTIFIER column_type opt_column_nullable  */
#line 548 "bison_parser.y"
                                                           {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 3339 "bison_parser.cpp"
    break;

  case 65: /* column_type: INT  */
#line 554 "bison_parser.y"
                    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3345 "bison_parser.cpp"
    break;

  case 66: /* column_type: INTEGER  */
#line 555 "bison_parser.y"
                        { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3351 "bison_parser.cpp"
    break;

  case 67: /* column_type: LONG  */
#line 556 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3357 "bison_parser.cpp"
    break;

  case 68: /* column_type: FLOAT  */
#line 557 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3363 "bison_parser.cpp"
    break;

  case 69: /* column_type: DOUBLE  */
#line 558 "bison_parser.y"
                       { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3369 "bison_parser.cpp"
    break;

  case 70: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 559 "bison_parser.y"
                                       { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3375 "bison_parser.cpp"
    break;

  case 71: /* column_type: CHAR '(' INTVAL ')'  */
#line 560 "bison_parser.y"
                                    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3381 "bison_parser.cpp"
    break;

  case 72: /* column_type: TEXT  */
#line 561 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3387 "bison_parser.cpp"
    break;

  case 73: /* opt_column_nullable: NULL  */
#line 565 "bison_parser.y"
                     { (yyval.bval) = true; }
#line 3393 "bison_parser.cpp"
    break;

  case 74: /* opt_column_nullable: NOT NULL  */
#line 566 "bison_parser.y"
                         { (yyval.bval) = false; }
#line 3399 "bison_parser.cpp"
    break;

  case 75: /* opt_column_nullable: %empty  */
#line 567 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3405 "bison_parser.cpp"
    break;

  case 76: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 578 "bison_parser.y"
                                                 {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3416 "bison_parser.cpp"
    break;

  case 77: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 584 "bison_parser.y"
                                                {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3427 "bison_parser.cpp"
    break;

  case 78: /* drop_statement: DROP DATABASE opt_exists db_name  */
#line 590 "bison_parser.y"
                                                 {
			(yyval.drop_stmt) = new DropStatement(kDropDatabase);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->name = (yyvsp[0].db_name).name;
		}
#line 3437 "bison_parser.cpp"
    break;

  case 79: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 595 "bison_parser.y"
                                              {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3447 "bison_parser.cpp"
    break;

  case 80: /* opt_exists: IF EXISTS  */
#line 603 "bison_parser.y"
                            { (yyval.bval) = true; }
#line 3453 "bison_parser.cpp"
    break;

  case 81: /* opt_exists: %empty  */
#line 604 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3459 "bison_parser.cpp"
    break;

  case 82: /* delete_statement: DELETE opt_low_priority opt_quick opt_ignore FROM table_name opt_where  */
#line 613 "bison_parser.y"
                                                                                       {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->low_priority = (yyvsp[-5].bval);
			(yyval.delete_stmt)->quick = (yyvsp[-4].bval);
			(yyval.delete_stmt)->ignore = (yyvsp[-3].bval);
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3473 "bison_parser.cpp"
    break;

  case 83: /* opt_low_priority: LOW_PRIORITY  */
#line 625 "bison_parser.y"
                               { (yyval.bval) = true; }
#line 3479 "bison_parser.cpp"
    break;

  case 84: /* opt_low_priority: %empty  */
#line 626 "bison_parser.y"
                               { (yyval.bval) = false; }
#line 3485 "bison_parser.cpp"
    break;

  case 85: /* opt_quick: QUICK  */
#line 630 "bison_parser.y"
                               { (yyval.bval) = true; }
#line 3491 "bison_parser.cpp"
    break;

  case 86: /* opt_quick: %empty  */
#line 631 "bison_parser.y"
                               { (yyval.bval) = false; }
#line 3497 "bison_parser.cpp"
    break;

  case 87: /* opt_ignore: IGNORE  */
#line 635 "bison_parser.y"
                               { (yyval.bval) = true; }
#line 3503 "bison_parser.cpp"
    break;

  case 88: /* opt_ignore: %empty  */
#line 636 "bison_parser.y"
                               { (yyval.bval) = false; }
#line 3509 "bison_parser.cpp"
    break;

  case 89: /* truncate_statement: TRUNCATE table_name  */
#line 640 "bison_parser.y"
                                    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3519 "bison_parser.cpp"
    break;

  case 90: /* insert_statement: INSERT opt_priority opt_ignore INTO table_name opt_column_list VALUES '(' literal_list ')'  */
#line 653 "bison_parser.y"
                                                                                                           {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->priority = (yyvsp[-8].bval);
			(yyval.insert_stmt)->ignore = (yyvsp[-7].bval);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3533 "bison_parser.cpp"
    break;

  case 91: /* insert_statement: INSERT opt_priority opt_ignore INTO table_name opt_column_list select_no_paren  */
#line 662 "bison_parser.y"
                                                                                               {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->priority = (yyvsp[-5].bval);
			(yyval.insert_stmt)->ignore = (yyvsp[-4].bval);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3547 "bison_parser.cpp"
    break;

  case 92: /* opt_priority: LOW_PRIORITY  */
#line 675 "bison_parser.y"
                                { (yyval.bval) = true; }
#line 3553 "bison_parser.cpp"
    break;

  case 93: /* opt_priority: DELAYED  */
#line 676 "bison_parser.y"
                                { (yyval.bval) = true; }
#line 3559 "bison_parser.cpp"
    break;

  case 94: /* opt_priority: HIGH_PRIORITY  */
#line 677 "bison_parser.y"
                                { (yyval.bval) = true; }
#line 3565 "bison_parser.cpp"
    break;

  case 95: /* opt_priority: %empty  */
#line 678 "bison_parser.y"
                                { (yyval.bval) = false; }
#line 3571 "bison_parser.cpp"
    break;

  case 96: /* opt_column_list: '(' ident_commalist ')'  */
#line 682 "bison_parser.y"
                                        { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3577 "bison_parser.cpp"
    break;

  case 97: /* opt_column_list: %empty  */
#line 683 "bison_parser.y"
                            { (yyval.str_vec) = nullptr; }
#line 3583 "bison_parser.cpp"
    break;

  case 98: /* update_statement: UPDATE opt_low_priority opt_ignore table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 693 "bison_parser.y"
                                                                                                         {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->low_priority = (yyvsp[-5].bval);
		(yyval.update_stmt)->ignore = (yyvsp[-4].bval);
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3596 "bison_parser.cpp"
    break;

  case 99: /* update_clause_commalist: update_clause  */
#line 704 "bison_parser.y"
                              { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3602 "bison_parser.cpp"
    break;

  case 100: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 705 "bison_parser.y"
                                                          { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3608 "bison_parser.cpp"
    break;

  case 101: /* update_clause: IDENTIFIER '=' expr  */
#line 709 "bison_parser.y"
                                    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3618 "bison_parser.cpp"
    break;

  case 102: /* alter_statement: ALTER DATABASE db_name opt_default CHARACTER SET opt_equal expr  */
#line 724 "bison_parser.y"
                                                                                {
			(yyval.alter_stmt) = new AlterStatement(kAlterDatabase);
			(yyval.alter_stmt)->schema = (yyvsp[-5].db_name).name;
			(yyval.alter_stmt)->dflt = (yyvsp[-4].bval);
			(yyval.alter_stmt)->equal = (yyvsp[-1].bval);
			(yyval.alter_stmt)->charsetName = (yyvsp[0].expr);
		}
#line 3630 "bison_parser.cpp"
    break;

  case 103: /* alter_statement: ALTER SCHEMA db_name opt_default CHARACTER SET opt_equal expr  */
#line 731 "bison_parser.y"
                                                                              {
			(yyval.alter_stmt) = new AlterStatement(kAlterSchema);
			(yyval.alter_stmt)->schema = (yyvsp[-5].db_name).name;
			(yyval.alter_stmt)->dflt = (yyvsp[-4].bval);
			(yyval.alter_stmt)->equal = (yyvsp[-1].bval);
			(yyval.alter_stmt)->charsetName = (yyvsp[0].expr);
		}
#line 3642 "bison_parser.cpp"
    break;

  case 104: /* alter_statement: ALTER TABLE table_name ADD COLUMN column_def  */
#line 738 "bison_parser.y"
                                                             {
			(yyval.alter_stmt) = new AlterStatement(kAlterTable);
			(yyval.alter_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.alter_stmt)->columns = (yyvsp[0].column_t);
		}
#line 3652 "bison_parser.cpp"
    break;

  case 105: /* opt_default: DEFAULT  */
#line 746 "bison_parser.y"
                             { (yyval.bval) = true; }
#line 3658 "bison_parser.cpp"
    break;

  case 106: /* opt_default: %empty  */
#line 747 "bison_parser.y"
                             { (yyval.bval) = false; }
#line 3664 "bison_parser.cpp"
    break;

  case 107: /* opt_equal: '='  */
#line 751 "bison_parser.y"
                             { (yyval.bval) = true; }
#line 3670 "bison_parser.cpp"
    break;

  case 108: /* opt_equal: %empty  */
#line 752 "bison_parser.y"
                             { (yyval.bval) = false; }
#line 3676 "bison_parser.cpp"
    break;

  case 111: /* select_statement: select_with_paren set_operator select_paren_or_clause opt_order opt_limit  */
#line 764 "bison_parser.y"
                                                                                          {
			// TODO: allow multiple unions (through linked list)
			// TODO: capture type of set_operator
			// TODO: might overwrite order and limit of first select here
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			(yyval.select_stmt)->unionSelect = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3695 "bison_parser.cpp"
    break;

  case 112: /* select_with_paren: '(' select_no_paren ')'  */
#line 781 "bison_parser.y"
                                        { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3701 "bison_parser.cpp"
    break;

  case 113: /* select_with_paren: '(' select_with_paren ')'  */
#line 782 "bison_parser.y"
                                          { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3707 "bison_parser.cpp"
    break;

  case 116: /* select_no_paren: select_clause opt_order opt_limit  */
#line 791 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3722 "bison_parser.cpp"
    break;

  case 117: /* select_no_paren: select_clause set_operator select_paren_or_clause opt_order opt_limit  */
#line 801 "bison_parser.y"
                                                                                      {
			// TODO: allow multiple unions (through linked list)
			// TODO: capture type of set_operator
			// TODO: might overwrite order and limit of first select here
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			(yyval.select_stmt)->unionSelect = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3741 "bison_parser.cpp"
    break;

  case 124: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 833 "bison_parser.y"
                                                                                            {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3755 "bison_parser.cpp"
    break;

  case 125: /* opt_distinct: DISTINCT  */
#line 845 "bison_parser.y"
                         { (yyval.bval) = true; }
#line 3761 "bison_parser.cpp"
    break;

  case 126: /* opt_distinct: %empty  */
#line 846 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3767 "bison_parser.cpp"
    break;

  case 128: /* opt_from_clause: from_clause  */
#line 854 "bison_parser.y"
                     { (yyval.table) = (yyvsp[0].table); }
#line 3773 "bison_parser.cpp"
    break;

  case 129: /* opt_from_clause: %empty  */
#line 855 "bison_parser.y"
                     { (yyval.table) = nullptr; }
#line 3779 "bison_parser.cpp"
    break;

  case 130: /* from_clause: FROM table_ref  */
#line 858 "bison_parser.y"
                               { (yyval.table) = (yyvsp[0].table); }
#line 3785 "bison_parser.cpp"
    break;

  case 131: /* opt_where: WHERE expr  */
#line 863 "bison_parser.y"
                           { (yyval.expr) = (yyvsp[0].expr); }
#line 3791 "bison_parser.cpp"
    break;

  case 132: /* opt_where: %empty  */
#line 864 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 3797 "bison_parser.cpp"
    break;

  case 133: /* opt_group: GROUP BY expr_list opt_having  */
#line 868 "bison_parser.y"
                                              {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3807 "bison_parser.cpp"
    break;

  case 134: /* opt_group: %empty  */
#line 873 "bison_parser.y"
                            { (yyval.group_t) = nullptr; }
#line 3813 "bison_parser.cpp"
    break;

  case 135: /* opt_having: HAVING expr  */
#line 877 "bison_parser.y"
                            { (yyval.expr) = (yyvsp[0].expr); }
#line 3819 "bison_parser.cpp"
    break;

  case 136: /* opt_having: %empty  */
#line 878 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 3825 "bison_parser.cpp"
    break;

  case 137: /* opt_order: ORDER BY order_list  */
#line 881 "bison_parser.y"
                                    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3831 "bison_parser.cpp"
    break;

  case 138: /* opt_order: %empty  */
#line 882 "bison_parser.y"
                            { (yyval.order_vec) = nullptr; }
#line 3837 "bison_parser.cpp"
    break;

  case 139: /* order_list: order_desc  */
#line 886 "bison_parser.y"
                           { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3843 "bison_parser.cpp"
    break;

  case 140: /* order_list: order_list ',' order_desc  */
#line 887 "bison_parser.y"
                                          { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3849 "bison_parser.cpp"
    break;

  case 141: /* order_desc: expr opt_order_type  */
#line 891 "bison_parser.y"
                                    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3855 "bison_parser.cpp"
    break;

  case 142: /* opt_order_type: ASC  */
#line 895 "bison_parser.y"
                    { (yyval.order_type) = kOrderAsc; }
#line 3861 "bison_parser.cpp"
    break;

  case 143: /* opt_order_type: DESC  */
#line 896 "bison_parser.y"
                     { (yyval.order_type) = kOrderDesc; }
#line 3867 "bison_parser.cpp"
    break;

  case 144: /* opt_order_type: %empty  */
#line 897 "bison_parser.y"
                            { (yyval.order_type) = kOrderAsc; }
#line 3873 "bison_parser.cpp"
    break;

  case 145: /* opt_top: TOP int_literal  */
#line 903 "bison_parser.y"
                                { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 3879 "bison_parser.cpp"
    break;

  case 146: /* opt_top: %empty  */
#line 904 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 3885 "bison_parser.cpp"
    break;

  case 147: /* opt_limit: LIMIT int_literal  */
#line 908 "bison_parser.y"
                                  { (yyval.limit) = new LimitDescription((yyvsp[0].expr)->ival, kNoOffset); delete (yyvsp[0].expr); }
#line 3891 "bison_parser.cpp"
    break;

  case 148: /* opt_limit: LIMIT int_literal OFFSET int_literal  */
#line 909 "bison_parser.y"
                                                     { (yyval.limit) = new LimitDescription((yyvsp[-2].expr)->ival, (yyvsp[0].expr)->ival); delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 3897 "bison_parser.cpp"
    break;

  case 149: /* opt_limit: OFFSET int_literal  */
#line 910 "bison_parser.y"
                                   { (yyval.limit) = new LimitDescription(kNoLimit, (yyvsp[0].expr)->ival); delete (yyvsp[0].expr); }
#line 3903 "bison_parser.cpp"
    break;

  case 150: /* opt_limit: LIMIT ALL  */
#line 911 "bison_parser.y"
                          { (yyval.limit) = nullptr; }
#line 3909 "bison_parser.cpp"
    break;

  case 151: /* opt_limit: LIMIT NULL  */
#line 912 "bison_parser.y"
                           { (yyval.limit) = nullptr;  }
#line 3915 "bison_parser.cpp"
    break;

  case 152: /* opt_limit: LIMIT ALL OFFSET int_literal  */
#line 913 "bison_parser.y"
                                             { (yyval.limit) = new LimitDescription(kNoLimit, (yyvsp[0].expr)->ival); delete (yyvsp[0].expr); }
#line 3921 "bison_parser.cpp"
    break;

  case 153: /* opt_limit: LIMIT NULL OFFSET int_literal  */
#line 914 "bison_parser.y"
                                              { (yyval.limit) = new LimitDescription(kNoLimit, (yyvsp[0].expr)->ival); delete (yyvsp[0].expr); }
#line 3927 "bison_parser.cpp"
    break;

  case 154: /* opt_limit: %empty  */
#line 915 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 3933 "bison_parser.cpp"
    break;

  case 155: /* expr_list: expr_alias  */
#line 922 "bison_parser.y"
                           { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3939 "bison_parser.cpp"
    break;

  case 156: /* expr_list: expr_list ',' expr_alias  */
#line 923 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3945 "bison_parser.cpp"
    break;

  case 157: /* opt_literal_list: literal_list  */
#line 927 "bison_parser.y"
                             { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 3951 "bison_parser.cpp"
    break;

  case 158: /* opt_literal_list: %empty  */
#line 928 "bison_parser.y"
                            { (yyval.expr_vec) = nullptr; }
#line 3957 "bison_parser.cpp"
    break;

  case 159: /* literal_list: literal  */
#line 932 "bison_parser.y"
                        { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3963 "bison_parser.cpp"
    break;

  case 160: /* literal_list: literal_list ',' literal  */
#line 933 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3969 "bison_parser.cpp"
    break;

  case 161: /* expr_alias: expr opt_alias  */
#line 937 "bison_parser.y"
                               {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 3981 "bison_parser.cpp"
    break;

  case 167: /* operand: '(' expr ')'  */
#line 955 "bison_parser.y"
                             { (yyval.expr) = (yyvsp[-1].expr); }
#line 3987 "bison_parser.cpp"
    break;

  case 176: /* operand: '(' select_no_paren ')'  */
#line 964 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3993 "bison_parser.cpp"
    break;

  case 179: /* unary_expr: '-' operand  */
#line 973 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3999 "bison_parser.cpp"
    break;

  case 180: /* unary_expr: NOT operand  */
#line 974 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4005 "bison_parser.cpp"
    break;

  case 181: /* unary_expr: operand ISNULL  */
#line 975 "bison_parser.y"
                               { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4011 "bison_parser.cpp"
    break;

  case 182: /* unary_expr: operand IS NULL  */
#line 976 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4017 "bison_parser.cpp"
    break;

  case 183: /* unary_expr: operand IS NOT NULL  */
#line 977 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4023 "bison_parser.cpp"
    break;

  case 185: /* binary_expr: operand '-' operand  */
#line 982 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4029 "bison_parser.cpp"
    break;

  case 186: /* binary_expr: operand '+' operand  */
#line 983 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4035 "bison_parser.cpp"
    break;

  case 187: /* binary_expr: operand '/' operand  */
#line 984 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4041 "bison_parser.cpp"
    break;

  case 188: /* binary_expr: operand '*' operand  */
#line 985 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4047 "bison_parser.cpp"
    break;

  case 189: /* binary_expr: operand '%' operand  */
#line 986 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4053 "bison_parser.cpp"
    break;

  case 190: /* binary_expr: operand '^' operand  */
#line 987 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4059 "bison_parser.cpp"
    break;

  case 191: /* binary_expr: operand LIKE operand  */
#line 988 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4065 "bison_parser.cpp"
    break;

  case 192: /* binary_expr: operand NOT LIKE operand  */
#line 989 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4071 "bison_parser.cpp"
    break;

  case 193: /* binary_expr: operand ILIKE operand  */
#line 990 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4077 "bison_parser.cpp"
    break;

  case 194: /* binary_expr: operand CONCAT operand  */
#line 991 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4083 "bison_parser.cpp"
    break;

  case 195: /* logic_expr: expr AND expr  */
#line 995 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4089 "bison_parser.cpp"
    break;

  case 196: /* logic_expr: expr OR expr  */
#line 996 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4095 "bison_parser.cpp"
    break;

  case 197: /* in_expr: operand IN '(' expr_list ')'  */
#line 1000 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4101 "bison_parser.cpp"
    break;

  case 198: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 1001 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4107 "bison_parser.cpp"
    break;

  case 199: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 1002 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4113 "bison_parser.cpp"
    break;

  case 200: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 1003 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4119 "bison_parser.cpp"
    break;

  case 201: /* case_expr: CASE expr case_list END  */
#line 1009 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4125 "bison_parser.cpp"
    break;

  case 202: /* case_expr: CASE expr case_list ELSE expr END  */
#line 1010 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4131 "bison_parser.cpp"
    break;

  case 203: /* case_expr: CASE case_list END  */
#line 1011 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4137 "bison_parser.cpp"
    break;

  case 204: /* case_expr: CASE case_list ELSE expr END  */
#line 1012 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4143 "bison_parser.cpp"
    break;

  case 205: /* case_list: WHEN expr THEN expr  */
#line 1016 "bison_parser.y"
                                                 { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4149 "bison_parser.cpp"
    break;

  case 206: /* case_list: case_list WHEN expr THEN expr  */
#line 1017 "bison_parser.y"
                                                 { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4155 "bison_parser.cpp"
    break;

  case 207: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 1021 "bison_parser.y"
                                               { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4161 "bison_parser.cpp"
    break;

  case 208: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 1022 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4167 "bison_parser.cpp"
    break;

  case 209: /* comp_expr: operand '=' operand  */
#line 1026 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4173 "bison_parser.cpp"
    break;

  case 210: /* comp_expr: operand EQUALS operand  */
#line 1027 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4179 "bison_parser.cpp"
    break;

  case 211: /* comp_expr: operand NOTEQUALS operand  */
#line 1028 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4185 "bison_parser.cpp"
    break;

  case 212: /* comp_expr: operand '<' operand  */
#line 1029 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4191 "bison_parser.cpp"
    break;

  case 213: /* comp_expr: operand '>' operand  */
#line 1030 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4197 "bison_parser.cpp"
    break;

  case 214: /* comp_expr: operand LESSEQ operand  */
#line 1031 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4203 "bison_parser.cpp"
    break;

  case 215: /* comp_expr: operand GREATEREQ operand  */
#line 1032 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4209 "bison_parser.cpp"
    break;

  case 216: /* function_expr: IDENTIFIER '(' ')'  */
#line 1036 "bison_parser.y"
                                  { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4215 "bison_parser.cpp"
    break;

  case 217: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')'  */
#line 1037 "bison_parser.y"
                                                         { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4221 "bison_parser.cpp"
    break;

  case 218: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 1041 "bison_parser.y"
                                                     { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4227 "bison_parser.cpp"
    break;

  case 219: /* datetime_field: SECOND  */
#line 1045 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeSecond; }
#line 4233 "bison_parser.cpp"
    break;

  case 220: /* datetime_field: MINUTE  */
#line 1046 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeMinute; }
#line 4239 "bison_parser.cpp"
    break;

  case 221: /* datetime_field: HOUR  */
#line 1047 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeHour; }
#line 4245 "bison_parser.cpp"
    break;

  case 222: /* datetime_field: DAY  */
#line 1048 "bison_parser.y"
            { (yyval.datetime_field) = kDatetimeDay; }
#line 4251 "bison_parser.cpp"
    break;

  case 223: /* datetime_field: MONTH  */
#line 1049 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeMonth; }
#line 4257 "bison_parser.cpp"
    break;

  case 224: /* datetime_field: YEAR  */
#line 1050 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeYear; }
#line 4263 "bison_parser.cpp"
    break;

  case 225: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1053 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4269 "bison_parser.cpp"
    break;

  case 226: /* array_index: operand '[' int_literal ']'  */
#line 1057 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4275 "bison_parser.cpp"
    break;

  case 227: /* between_expr: operand BETWEEN operand AND operand  */
#line 1061 "bison_parser.y"
                                                    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4281 "bison_parser.cpp"
    break;

  case 228: /* column_name: IDENTIFIER  */
#line 1065 "bison_parser.y"
                           { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4287 "bison_parser.cpp"
    break;

  case 229: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1066 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4293 "bison_parser.cpp"
    break;

  case 230: /* column_name: '*'  */
#line 1067 "bison_parser.y"
                    { (yyval.expr) = Expr::makeStar(); }
#line 4299 "bison_parser.cpp"
    break;

  case 231: /* column_name: IDENTIFIER '.' '*'  */
#line 1068 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4305 "bison_parser.cpp"
    break;

  case 237: /* string_literal: STRING  */
#line 1080 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4311 "bison_parser.cpp"
    break;

  case 238: /* bool_literal: TRUE  */
#line 1084 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral(true); }
#line 4317 "bison_parser.cpp"
    break;

  case 239: /* bool_literal: FALSE  */
#line 1085 "bison_parser.y"
                      { (yyval.expr) = Expr::makeLiteral(false); }
#line 4323 "bison_parser.cpp"
    break;

  case 240: /* num_literal: FLOATVAL  */
#line 1089 "bison_parser.y"
                         { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4329 "bison_parser.cpp"
    break;

  case 242: /* int_literal: INTVAL  */
#line 1094 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4335 "bison_parser.cpp"
    break;

  case 243: /* null_literal: NULL  */
#line 1098 "bison_parser.y"
                     { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4341 "bison_parser.cpp"
    break;

  case 244: /* param_expr: '?'  */
#line 1102 "bison_parser.y"
                    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4351 "bison_parser.cpp"
    break;

  case 246: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1115 "bison_parser.y"
                                                         {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4362 "bison_parser.cpp"
    break;

  case 250: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1131 "bison_parser.y"
                                                         {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4373 "bison_parser.cpp"
    break;

  case 251: /* table_ref_commalist: table_ref_atomic  */
#line 1140 "bison_parser.y"
                                 { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4379 "bison_parser.cpp"
    break;

  case 252: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1141 "bison_parser.y"
                                                         { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4385 "bison_parser.cpp"
    break;

  case 253: /* table_ref_name: table_name opt_table_alias  */
#line 1146 "bison_parser.y"
                                           {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4397 "bison_parser.cpp"
    break;

  case 254: /* table_ref_name_no_alias: table_name  */
#line 1157 "bison_parser.y"
                           {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4407 "bison_parser.cpp"
    break;

  case 255: /* table_name: IDENTIFIER  */
#line 1166 "bison_parser.y"
                                          { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4413 "bison_parser.cpp"
    break;

  case 256: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1167 "bison_parser.y"
                                          { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4419 "bison_parser.cpp"
    break;

  case 257: /* db_name: IDENTIFIER  */
#line 1172 "bison_parser.y"
                                          {(yyval.db_name).name = (yyvsp[0].sval);}
#line 4425 "bison_parser.cpp"
    break;

  case 259: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1178 "bison_parser.y"
                                                      { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4431 "bison_parser.cpp"
    break;

  case 261: /* opt_table_alias: %empty  */
#line 1184 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4437 "bison_parser.cpp"
    break;

  case 262: /* alias: AS IDENTIFIER  */
#line 1188 "bison_parser.y"
                              { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4443 "bison_parser.cpp"
    break;

  case 263: /* alias: IDENTIFIER  */
#line 1189 "bison_parser.y"
                           { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4449 "bison_parser.cpp"
    break;

  case 265: /* opt_alias: %empty  */
#line 1195 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4455 "bison_parser.cpp"
    break;

  case 266: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1204 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4467 "bison_parser.cpp"
    break;

  case 267: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1212 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4480 "bison_parser.cpp"
    break;

  case 268: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' column_name ')'  */
#line 1222 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-6].uval);
			(yyval.table)->join->left = (yyvsp[-7].table);
			(yyval.table)->join->right = (yyvsp[-4].table);
			auto left_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) left_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-7].table)->getName() != nullptr) left_col->table = strdup((yyvsp[-7].table)->getName());
			auto right_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) right_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-4].table)->getName() != nullptr) right_col->table = strdup((yyvsp[-4].table)->getName());
			(yyval.table)->join->condition = Expr::makeOpBinary(left_col, kOpEquals, right_col);
			delete (yyvsp[-1].expr);
		}
#line 4500 "bison_parser.cpp"
    break;

  case 269: /* opt_join_type: INNER  */
#line 1240 "bison_parser.y"
                                { (yyval.uval) = kJoinInner; }
#line 4506 "bison_parser.cpp"
    break;

  case 270: /* opt_join_type: LEFT OUTER  */
#line 1241 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4512 "bison_parser.cpp"
    break;

  case 271: /* opt_join_type: LEFT  */
#line 1242 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4518 "bison_parser.cpp"
    break;

  case 272: /* opt_join_type: RIGHT OUTER  */
#line 1243 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4524 "bison_parser.cpp"
    break;

  case 273: /* opt_join_type: RIGHT  */
#line 1244 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4530 "bison_parser.cpp"
    break;

  case 274: /* opt_join_type: FULL OUTER  */
#line 1245 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4536 "bison_parser.cpp"
    break;

  case 275: /* opt_join_type: OUTER  */
#line 1246 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4542 "bison_parser.cpp"
    break;

  case 276: /* opt_join_type: FULL  */
#line 1247 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4548 "bison_parser.cpp"
    break;

  case 277: /* opt_join_type: CROSS  */
#line 1248 "bison_parser.y"
                                { (yyval.uval) = kJoinCross; }
#line 4554 "bison_parser.cpp"
    break;

  case 278: /* opt_join_type: %empty  */
#line 1249 "bison_parser.y"
                                        { (yyval.uval) = kJoinInner; }
#line 4560 "bison_parser.cpp"
    break;

  case 282: /* ident_commalist: IDENTIFIER  */
#line 1269 "bison_parser.y"
                           { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4566 "bison_parser.cpp"
    break;

  case 283: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1270 "bison_parser.y"
                                               { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4572 "bison_parser.cpp"
    break;


#line 4576 "bison_parser.cpp"

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
  *++yylsp = yyloc;

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
  yytoken = yychar == SQL_HSQL_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= SQL_YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == SQL_YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, result, scanner);
          yychar = SQL_HSQL_EMPTY;
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != SQL_HSQL_EMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 1273 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
