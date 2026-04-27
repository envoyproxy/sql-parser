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

#ifndef YY_HSQL_BISON_PARSER_H_INCLUDED
# define YY_HSQL_BISON_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef HSQL_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define HSQL_DEBUG 1
#  else
#   define HSQL_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define HSQL_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined HSQL_DEBUG */
#if HSQL_DEBUG
extern int hsql_debug;
#endif
/* "%code requires" blocks.  */
#line 35 "bison_parser.y"

// %code requires block

#include "../../include/sqlparser/statements.h"
#include "../../include/sqlparser/SQLParserResult.h"
#include "parser_typedef.h"

// Auto update column and line number
#define YY_USER_ACTION \
		yylloc->first_line = yylloc->last_line; \
		yylloc->first_column = yylloc->last_column; \
		for(int i = 0; yytext[i] != '\0'; i++) { \
			yylloc->total_column++; \
			yylloc->string_length++; \
				if(yytext[i] == '\n') { \
						yylloc->last_line++; \
						yylloc->last_column = 0; \
				} \
				else { \
						yylloc->last_column++; \
				} \
		}

#line 81 "bison_parser.h"

/* Token kinds.  */
#ifndef HSQL_TOKENTYPE
# define HSQL_TOKENTYPE
  enum hsql_tokentype
  {
    SQL_HSQL_EMPTY = -2,
    SQL_YYEOF = 0,                 /* "end of file"  */
    SQL_HSQL_error = 256,          /* error  */
    SQL_HSQL_UNDEF = 257,          /* "invalid token"  */
    SQL_IDENTIFIER = 258,          /* IDENTIFIER  */
    SQL_STRING = 259,              /* STRING  */
    SQL_FLOATVAL = 260,            /* FLOATVAL  */
    SQL_INTVAL = 261,              /* INTVAL  */
    SQL_DEALLOCATE = 262,          /* DEALLOCATE  */
    SQL_PARAMETERS = 263,          /* PARAMETERS  */
    SQL_INTERSECT = 264,           /* INTERSECT  */
    SQL_TEMPORARY = 265,           /* TEMPORARY  */
    SQL_TIMESTAMP = 266,           /* TIMESTAMP  */
    SQL_DISTINCT = 267,            /* DISTINCT  */
    SQL_NVARCHAR = 268,            /* NVARCHAR  */
    SQL_RESTRICT = 269,            /* RESTRICT  */
    SQL_TRUNCATE = 270,            /* TRUNCATE  */
    SQL_ANALYZE = 271,             /* ANALYZE  */
    SQL_BETWEEN = 272,             /* BETWEEN  */
    SQL_CASCADE = 273,             /* CASCADE  */
    SQL_COLUMNS = 274,             /* COLUMNS  */
    SQL_CONTROL = 275,             /* CONTROL  */
    SQL_DEFAULT = 276,             /* DEFAULT  */
    SQL_EXECUTE = 277,             /* EXECUTE  */
    SQL_EXPLAIN = 278,             /* EXPLAIN  */
    SQL_HISTORY = 279,             /* HISTORY  */
    SQL_INTEGER = 280,             /* INTEGER  */
    SQL_NATURAL = 281,             /* NATURAL  */
    SQL_PREPARE = 282,             /* PREPARE  */
    SQL_PRIMARY = 283,             /* PRIMARY  */
    SQL_SCHEMAS = 284,             /* SCHEMAS  */
    SQL_SPATIAL = 285,             /* SPATIAL  */
    SQL_VARCHAR = 286,             /* VARCHAR  */
    SQL_VIRTUAL = 287,             /* VIRTUAL  */
    SQL_BEFORE = 288,              /* BEFORE  */
    SQL_COLUMN = 289,              /* COLUMN  */
    SQL_CREATE = 290,              /* CREATE  */
    SQL_DELETE = 291,              /* DELETE  */
    SQL_DIRECT = 292,              /* DIRECT  */
    SQL_DOUBLE = 293,              /* DOUBLE  */
    SQL_ESCAPE = 294,              /* ESCAPE  */
    SQL_EXCEPT = 295,              /* EXCEPT  */
    SQL_EXISTS = 296,              /* EXISTS  */
    SQL_EXTRACT = 297,             /* EXTRACT  */
    SQL_GLOBAL = 298,              /* GLOBAL  */
    SQL_HAVING = 299,              /* HAVING  */
    SQL_IMPORT = 300,              /* IMPORT  */
    SQL_INSERT = 301,              /* INSERT  */
    SQL_ISNULL = 302,              /* ISNULL  */
    SQL_OFFSET = 303,              /* OFFSET  */
    SQL_RENAME = 304,              /* RENAME  */
    SQL_SCHEMA = 305,              /* SCHEMA  */
    SQL_SELECT = 306,              /* SELECT  */
    SQL_SORTED = 307,              /* SORTED  */
    SQL_TABLES = 308,              /* TABLES  */
    SQL_UNIQUE = 309,              /* UNIQUE  */
    SQL_UNLOAD = 310,              /* UNLOAD  */
    SQL_UPDATE = 311,              /* UPDATE  */
    SQL_VALUES = 312,              /* VALUES  */
    SQL_AFTER = 313,               /* AFTER  */
    SQL_ALTER = 314,               /* ALTER  */
    SQL_CROSS = 315,               /* CROSS  */
    SQL_FLOAT = 316,               /* FLOAT  */
    SQL_GROUP = 317,               /* GROUP  */
    SQL_INDEX = 318,               /* INDEX  */
    SQL_INNER = 319,               /* INNER  */
    SQL_LIMIT = 320,               /* LIMIT  */
    SQL_LOCAL = 321,               /* LOCAL  */
    SQL_MERGE = 322,               /* MERGE  */
    SQL_MINUS = 323,               /* MINUS  */
    SQL_ORDER = 324,               /* ORDER  */
    SQL_OUTER = 325,               /* OUTER  */
    SQL_RIGHT = 326,               /* RIGHT  */
    SQL_TABLE = 327,               /* TABLE  */
    SQL_UNION = 328,               /* UNION  */
    SQL_USING = 329,               /* USING  */
    SQL_WHERE = 330,               /* WHERE  */
    SQL_CALL = 331,                /* CALL  */
    SQL_CASE = 332,                /* CASE  */
    SQL_CHAR = 333,                /* CHAR  */
    SQL_DATE = 334,                /* DATE  */
    SQL_DESC = 335,                /* DESC  */
    SQL_DROP = 336,                /* DROP  */
    SQL_ELSE = 337,                /* ELSE  */
    SQL_FILE = 338,                /* FILE  */
    SQL_FROM = 339,                /* FROM  */
    SQL_FULL = 340,                /* FULL  */
    SQL_HASH = 341,                /* HASH  */
    SQL_HINT = 342,                /* HINT  */
    SQL_INTO = 343,                /* INTO  */
    SQL_JOIN = 344,                /* JOIN  */
    SQL_LEFT = 345,                /* LEFT  */
    SQL_LIKE = 346,                /* LIKE  */
    SQL_LOAD = 347,                /* LOAD  */
    SQL_LONG = 348,                /* LONG  */
    SQL_NULL = 349,                /* NULL  */
    SQL_PLAN = 350,                /* PLAN  */
    SQL_SHOW = 351,                /* SHOW  */
    SQL_TEXT = 352,                /* TEXT  */
    SQL_THEN = 353,                /* THEN  */
    SQL_TIME = 354,                /* TIME  */
    SQL_VIEW = 355,                /* VIEW  */
    SQL_WHEN = 356,                /* WHEN  */
    SQL_WITH = 357,                /* WITH  */
    SQL_LOW_PRIORITY = 358,        /* LOW_PRIORITY  */
    SQL_DELAYED = 359,             /* DELAYED  */
    SQL_HIGH_PRIORITY = 360,       /* HIGH_PRIORITY  */
    SQL_QUICK = 361,               /* QUICK  */
    SQL_IGNORE = 362,              /* IGNORE  */
    SQL_DATABASES = 363,           /* DATABASES  */
    SQL_DATABASE = 364,            /* DATABASE  */
    SQL_CHARACTER = 365,           /* CHARACTER  */
    SQL_ADD = 366,                 /* ADD  */
    SQL_ALL = 367,                 /* ALL  */
    SQL_AND = 368,                 /* AND  */
    SQL_ASC = 369,                 /* ASC  */
    SQL_CSV = 370,                 /* CSV  */
    SQL_END = 371,                 /* END  */
    SQL_FOR = 372,                 /* FOR  */
    SQL_INT = 373,                 /* INT  */
    SQL_KEY = 374,                 /* KEY  */
    SQL_NOT = 375,                 /* NOT  */
    SQL_OFF = 376,                 /* OFF  */
    SQL_SET = 377,                 /* SET  */
    SQL_TBL = 378,                 /* TBL  */
    SQL_TOP = 379,                 /* TOP  */
    SQL_AS = 380,                  /* AS  */
    SQL_BY = 381,                  /* BY  */
    SQL_IF = 382,                  /* IF  */
    SQL_IN = 383,                  /* IN  */
    SQL_IS = 384,                  /* IS  */
    SQL_OF = 385,                  /* OF  */
    SQL_ON = 386,                  /* ON  */
    SQL_OR = 387,                  /* OR  */
    SQL_TO = 388,                  /* TO  */
    SQL_ARRAY = 389,               /* ARRAY  */
    SQL_CONCAT = 390,              /* CONCAT  */
    SQL_ILIKE = 391,               /* ILIKE  */
    SQL_SECOND = 392,              /* SECOND  */
    SQL_MINUTE = 393,              /* MINUTE  */
    SQL_HOUR = 394,                /* HOUR  */
    SQL_DAY = 395,                 /* DAY  */
    SQL_MONTH = 396,               /* MONTH  */
    SQL_YEAR = 397,                /* YEAR  */
    SQL_TRUE = 398,                /* TRUE  */
    SQL_FALSE = 399,               /* FALSE  */
    SQL_ESCAPED = 400,             /* ESCAPED  */
    SQL_DATA = 401,                /* DATA  */
    SQL_INFILE = 402,              /* INFILE  */
    SQL_CONCURRENT = 403,          /* CONCURRENT  */
    SQL_REPLACE = 404,             /* REPLACE  */
    SQL_PARTITION = 405,           /* PARTITION  */
    SQL_FIELDS = 406,              /* FIELDS  */
    SQL_TERMINATED = 407,          /* TERMINATED  */
    SQL_OPTIONALLY = 408,          /* OPTIONALLY  */
    SQL_ENCLOSED = 409,            /* ENCLOSED  */
    SQL_LINES = 410,               /* LINES  */
    SQL_ROWS = 411,                /* ROWS  */
    SQL_STARTING = 412,            /* STARTING  */
    SQL_EQUALS = 413,              /* EQUALS  */
    SQL_NOTEQUALS = 414,           /* NOTEQUALS  */
    SQL_LESS = 415,                /* LESS  */
    SQL_GREATER = 416,             /* GREATER  */
    SQL_LESSEQ = 417,              /* LESSEQ  */
    SQL_GREATEREQ = 418,           /* GREATEREQ  */
    SQL_NOTNULL = 419,             /* NOTNULL  */
    SQL_UMINUS = 420               /* UMINUS  */
  };
  typedef enum hsql_tokentype hsql_token_kind_t;
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED
union HSQL_STYPE
{
#line 95 "bison_parser.y"

	double fval;
	int64_t ival;
	char* sval;
	uintmax_t uval;
	bool bval;

	hsql::SQLStatement* statement;
	hsql::SelectStatement* 	select_stmt;
	hsql::ImportStatement* 	import_stmt;
	hsql::CreateStatement* 	create_stmt;
	hsql::InsertStatement* 	insert_stmt;
	hsql::DeleteStatement* 	delete_stmt;
	hsql::UpdateStatement* 	update_stmt;
	hsql::DropStatement*   	drop_stmt;
	hsql::PrepareStatement* prep_stmt;
	hsql::AlterStatement* alter_stmt;
	hsql::ExecuteStatement* exec_stmt;
	hsql::ShowStatement*    show_stmt;

	hsql::TableName table_name;
	hsql::DatabaseName db_name;
	hsql::TableRef* table;
	hsql::Expr* expr;
	hsql::OrderDescription* order;
	hsql::OrderType order_type;
	hsql::DatetimeField datetime_field;
	hsql::LimitDescription* limit;
	hsql::ColumnDefinition* column_t;
	hsql::ColumnType column_type_t;
	hsql::GroupByDescription* group_t;
	hsql::UpdateClause* update_t;
	hsql::Alias* alias_t;

	std::vector<hsql::SQLStatement*>* stmt_vec;

	std::vector<char*>* str_vec;
	std::vector<hsql::TableRef*>* table_vec;
	std::vector<hsql::ColumnDefinition*>* column_vec;
	std::vector<hsql::UpdateClause*>* update_vec;
	std::vector<hsql::Expr*>* expr_vec;
	std::vector<hsql::OrderDescription*>* order_vec;

#line 307 "bison_parser.h"

};
typedef union HSQL_STYPE HSQL_STYPE;
# define HSQL_STYPE_IS_TRIVIAL 1
# define HSQL_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined HSQL_LTYPE && ! defined HSQL_LTYPE_IS_DECLARED
typedef struct HSQL_LTYPE HSQL_LTYPE;
struct HSQL_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define HSQL_LTYPE_IS_DECLARED 1
# define HSQL_LTYPE_IS_TRIVIAL 1
#endif




int hsql_parse (hsql::SQLParserResult* result, yyscan_t scanner);


#endif /* !YY_HSQL_BISON_PARSER_H_INCLUDED  */
