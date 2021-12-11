/* A Bison parser, made by GNU Bison 3.8.2.9-6571.  */

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
#define YYBISON_VERSION "3.8.2.9-6571"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 19 "CxxParser.y"

#include <CxxParsing.hxx>

#line 75 "CxxParser.cxx"

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

#include "CxxParser.hxx"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_3_ = 3,                         /* '+'  */
  YYSYMBOL_4_ = 4,                         /* '-'  */
  YYSYMBOL_5_ = 5,                         /* '*'  */
  YYSYMBOL_6_ = 6,                         /* '/'  */
  YYSYMBOL_7_ = 7,                         /* '%'  */
  YYSYMBOL_8_ = 8,                         /* '^'  */
  YYSYMBOL_9_ = 9,                         /* '&'  */
  YYSYMBOL_10_ = 10,                       /* '|'  */
  YYSYMBOL_11_ = 11,                       /* '~'  */
  YYSYMBOL_12_ = 12,                       /* '!'  */
  YYSYMBOL_13_ = 13,                       /* '<'  */
  YYSYMBOL_14_ = 14,                       /* '>'  */
  YYSYMBOL_15_ = 15,                       /* '='  */
  YYSYMBOL_16_ = 16,                       /* ':'  */
  YYSYMBOL_17_ = 17,                       /* '['  */
  YYSYMBOL_18_ = 18,                       /* ']'  */
  YYSYMBOL_19_ = 19,                       /* '{'  */
  YYSYMBOL_20_ = 20,                       /* '}'  */
  YYSYMBOL_21_ = 21,                       /* '('  */
  YYSYMBOL_22_ = 22,                       /* ')'  */
  YYSYMBOL_23_ = 23,                       /* '?'  */
  YYSYMBOL_24_ = 24,                       /* '.'  */
  YYSYMBOL_25_ = 25,                       /* '\''  */
  YYSYMBOL_26_ = 26,                       /* '"'  */
  YYSYMBOL_27_ = 27,                       /* '\\'  */
  YYSYMBOL_28_ = 28,                       /* '@'  */
  YYSYMBOL_29_ = 29,                       /* '$'  */
  YYSYMBOL_30_ = 30,                       /* ';'  */
  YYSYMBOL_31_ = 31,                       /* ','  */
  YYSYMBOL_ARROW = 32,                     /* ARROW  */
  YYSYMBOL_ARROW_STAR = 33,                /* ARROW_STAR  */
  YYSYMBOL_DEC = 34,                       /* DEC  */
  YYSYMBOL_EQ = 35,                        /* EQ  */
  YYSYMBOL_GE = 36,                        /* GE  */
  YYSYMBOL_INC = 37,                       /* INC  */
  YYSYMBOL_LE = 38,                        /* LE  */
  YYSYMBOL_LOG_AND = 39,                   /* LOG_AND  */
  YYSYMBOL_LOG_OR = 40,                    /* LOG_OR  */
  YYSYMBOL_NE = 41,                        /* NE  */
  YYSYMBOL_SHL = 42,                       /* SHL  */
  YYSYMBOL_SHR = 43,                       /* SHR  */
  YYSYMBOL_ASS_ADD = 44,                   /* ASS_ADD  */
  YYSYMBOL_ASS_AND = 45,                   /* ASS_AND  */
  YYSYMBOL_ASS_DIV = 46,                   /* ASS_DIV  */
  YYSYMBOL_ASS_MOD = 47,                   /* ASS_MOD  */
  YYSYMBOL_ASS_MUL = 48,                   /* ASS_MUL  */
  YYSYMBOL_ASS_OR = 49,                    /* ASS_OR  */
  YYSYMBOL_ASS_SHL = 50,                   /* ASS_SHL  */
  YYSYMBOL_ASS_SHR = 51,                   /* ASS_SHR  */
  YYSYMBOL_ASS_SUB = 52,                   /* ASS_SUB  */
  YYSYMBOL_ASS_XOR = 53,                   /* ASS_XOR  */
  YYSYMBOL_DOT_STAR = 54,                  /* DOT_STAR  */
  YYSYMBOL_ELLIPSIS = 55,                  /* ELLIPSIS  */
  YYSYMBOL_SCOPE = 56,                     /* SCOPE  */
  YYSYMBOL_PRIVATE = 57,                   /* PRIVATE  */
  YYSYMBOL_PROTECTED = 58,                 /* PROTECTED  */
  YYSYMBOL_PUBLIC = 59,                    /* PUBLIC  */
  YYSYMBOL_BOOL = 60,                      /* BOOL  */
  YYSYMBOL_CHAR = 61,                      /* CHAR  */
  YYSYMBOL_DOUBLE = 62,                    /* DOUBLE  */
  YYSYMBOL_FLOAT = 63,                     /* FLOAT  */
  YYSYMBOL_INT = 64,                       /* INT  */
  YYSYMBOL_LONG = 65,                      /* LONG  */
  YYSYMBOL_SHORT = 66,                     /* SHORT  */
  YYSYMBOL_SIGNED = 67,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 68,                  /* UNSIGNED  */
  YYSYMBOL_VOID = 69,                      /* VOID  */
  YYSYMBOL_WCHAR_T = 70,                   /* WCHAR_T  */
  YYSYMBOL_CLASS = 71,                     /* CLASS  */
  YYSYMBOL_ENUM = 72,                      /* ENUM  */
  YYSYMBOL_NAMESPACE = 73,                 /* NAMESPACE  */
  YYSYMBOL_STRUCT = 74,                    /* STRUCT  */
  YYSYMBOL_TYPENAME = 75,                  /* TYPENAME  */
  YYSYMBOL_UNION = 76,                     /* UNION  */
  YYSYMBOL_CONST = 77,                     /* CONST  */
  YYSYMBOL_VOLATILE = 78,                  /* VOLATILE  */
  YYSYMBOL_AUTO = 79,                      /* AUTO  */
  YYSYMBOL_EXPLICIT = 80,                  /* EXPLICIT  */
  YYSYMBOL_EXPORT = 81,                    /* EXPORT  */
  YYSYMBOL_EXTERN = 82,                    /* EXTERN  */
  YYSYMBOL_FRIEND = 83,                    /* FRIEND  */
  YYSYMBOL_INLINE = 84,                    /* INLINE  */
  YYSYMBOL_MUTABLE = 85,                   /* MUTABLE  */
  YYSYMBOL_REGISTER = 86,                  /* REGISTER  */
  YYSYMBOL_STATIC = 87,                    /* STATIC  */
  YYSYMBOL_TEMPLATE = 88,                  /* TEMPLATE  */
  YYSYMBOL_TYPEDEF = 89,                   /* TYPEDEF  */
  YYSYMBOL_USING = 90,                     /* USING  */
  YYSYMBOL_VIRTUAL = 91,                   /* VIRTUAL  */
  YYSYMBOL_ASM = 92,                       /* ASM  */
  YYSYMBOL_BREAK = 93,                     /* BREAK  */
  YYSYMBOL_CASE = 94,                      /* CASE  */
  YYSYMBOL_CATCH = 95,                     /* CATCH  */
  YYSYMBOL_CONST_CAST = 96,                /* CONST_CAST  */
  YYSYMBOL_CONTINUE = 97,                  /* CONTINUE  */
  YYSYMBOL_DEFAULT = 98,                   /* DEFAULT  */
  YYSYMBOL_DELETE = 99,                    /* DELETE  */
  YYSYMBOL_DO = 100,                       /* DO  */
  YYSYMBOL_DYNAMIC_CAST = 101,             /* DYNAMIC_CAST  */
  YYSYMBOL_ELSE = 102,                     /* ELSE  */
  YYSYMBOL_FALSE = 103,                    /* FALSE  */
  YYSYMBOL_FOR = 104,                      /* FOR  */
  YYSYMBOL_GOTO = 105,                     /* GOTO  */
  YYSYMBOL_IF = 106,                       /* IF  */
  YYSYMBOL_NEW = 107,                      /* NEW  */
  YYSYMBOL_OPERATOR = 108,                 /* OPERATOR  */
  YYSYMBOL_REINTERPRET_CAST = 109,         /* REINTERPRET_CAST  */
  YYSYMBOL_RETURN = 110,                   /* RETURN  */
  YYSYMBOL_SIZEOF = 111,                   /* SIZEOF  */
  YYSYMBOL_STATIC_CAST = 112,              /* STATIC_CAST  */
  YYSYMBOL_SWITCH = 113,                   /* SWITCH  */
  YYSYMBOL_THIS = 114,                     /* THIS  */
  YYSYMBOL_THROW = 115,                    /* THROW  */
  YYSYMBOL_TRUE = 116,                     /* TRUE  */
  YYSYMBOL_TRY = 117,                      /* TRY  */
  YYSYMBOL_TYPEID = 118,                   /* TYPEID  */
  YYSYMBOL_WHILE = 119,                    /* WHILE  */
  YYSYMBOL_CharacterLiteral = 120,         /* CharacterLiteral  */
  YYSYMBOL_FloatingLiteral = 121,          /* FloatingLiteral  */
  YYSYMBOL_Identifier = 122,               /* Identifier  */
  YYSYMBOL_IntegerLiteral = 123,           /* IntegerLiteral  */
  YYSYMBOL_NumberLiteral = 124,            /* NumberLiteral  */
  YYSYMBOL_StringLiteral = 125,            /* StringLiteral  */
  YYSYMBOL_SHIFT_THERE = 126,              /* SHIFT_THERE  */
  YYSYMBOL_REDUCE_HERE_MOSTLY = 127,       /* REDUCE_HERE_MOSTLY  */
  YYSYMBOL_128_ = 128,                     /* '#'  */
  YYSYMBOL_YYACCEPT = 129,                 /* $accept  */
  YYSYMBOL_identifier_word = 130,          /* identifier_word  */
  YYSYMBOL_identifier = 131,               /* identifier  */
  YYSYMBOL_id = 132,                       /* id  */
  YYSYMBOL_template_test = 133,            /* template_test  */
  YYSYMBOL_global_scope = 134,             /* global_scope  */
  YYSYMBOL_id_scope = 135,                 /* id_scope  */
  YYSYMBOL_nested_id = 136,                /* nested_id  */
  YYSYMBOL_scoped_id = 137,                /* scoped_id  */
  YYSYMBOL_destructor_id = 138,            /* destructor_id  */
  YYSYMBOL_special_function_id = 139,      /* special_function_id  */
  YYSYMBOL_nested_special_function_id = 140, /* nested_special_function_id  */
  YYSYMBOL_scoped_special_function_id = 141, /* scoped_special_function_id  */
  YYSYMBOL_declarator_id = 142,            /* declarator_id  */
  YYSYMBOL_built_in_type_id = 143,         /* built_in_type_id  */
  YYSYMBOL_pseudo_destructor_id = 144,     /* pseudo_destructor_id  */
  YYSYMBOL_nested_pseudo_destructor_id = 145, /* nested_pseudo_destructor_id  */
  YYSYMBOL_scoped_pseudo_destructor_id = 146, /* scoped_pseudo_destructor_id  */
  YYSYMBOL_string = 147,                   /* string  */
  YYSYMBOL_literal = 148,                  /* literal  */
  YYSYMBOL_boolean_literal = 149,          /* boolean_literal  */
  YYSYMBOL_translation_unit = 150,         /* translation_unit  */
  YYSYMBOL_primary_expression = 151,       /* primary_expression  */
  YYSYMBOL_abstract_expression = 152,      /* abstract_expression  */
  YYSYMBOL_type1_parameters = 153,         /* type1_parameters  */
  YYSYMBOL_mark_type1 = 154,               /* mark_type1  */
  YYSYMBOL_postfix_expression = 155,       /* postfix_expression  */
  YYSYMBOL_156_expression_list_opt = 156,  /* expression_list.opt  */
  YYSYMBOL_expression_list = 157,          /* expression_list  */
  YYSYMBOL_unary_expression = 158,         /* unary_expression  */
  YYSYMBOL_delete_expression = 159,        /* delete_expression  */
  YYSYMBOL_new_expression = 160,           /* new_expression  */
  YYSYMBOL_new_type_id = 161,              /* new_type_id  */
  YYSYMBOL_new_declarator = 162,           /* new_declarator  */
  YYSYMBOL_direct_new_declarator = 163,    /* direct_new_declarator  */
  YYSYMBOL_164_new_initializer_opt = 164,  /* new_initializer.opt  */
  YYSYMBOL_cast_expression = 165,          /* cast_expression  */
  YYSYMBOL_pm_expression = 166,            /* pm_expression  */
  YYSYMBOL_multiplicative_expression = 167, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 168,      /* additive_expression  */
  YYSYMBOL_shift_expression = 169,         /* shift_expression  */
  YYSYMBOL_relational_expression = 170,    /* relational_expression  */
  YYSYMBOL_equality_expression = 171,      /* equality_expression  */
  YYSYMBOL_and_expression = 172,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 173,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 174,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 175,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 176,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 177,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 178,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 179,      /* assignment_operator  */
  YYSYMBOL_180_expression_opt = 180,       /* expression.opt  */
  YYSYMBOL_expression = 181,               /* expression  */
  YYSYMBOL_constant_expression = 182,      /* constant_expression  */
  YYSYMBOL_templated_relational_expression = 183, /* templated_relational_expression  */
  YYSYMBOL_templated_equality_expression = 184, /* templated_equality_expression  */
  YYSYMBOL_templated_and_expression = 185, /* templated_and_expression  */
  YYSYMBOL_templated_exclusive_or_expression = 186, /* templated_exclusive_or_expression  */
  YYSYMBOL_templated_inclusive_or_expression = 187, /* templated_inclusive_or_expression  */
  YYSYMBOL_templated_logical_and_expression = 188, /* templated_logical_and_expression  */
  YYSYMBOL_templated_logical_or_expression = 189, /* templated_logical_or_expression  */
  YYSYMBOL_templated_conditional_expression = 190, /* templated_conditional_expression  */
  YYSYMBOL_templated_assignment_expression = 191, /* templated_assignment_expression  */
  YYSYMBOL_templated_expression = 192,     /* templated_expression  */
  YYSYMBOL_templated_expression_list = 193, /* templated_expression_list  */
  YYSYMBOL_looping_statement = 194,        /* looping_statement  */
  YYSYMBOL_looped_statement = 195,         /* looped_statement  */
  YYSYMBOL_statement = 196,                /* statement  */
  YYSYMBOL_control_statement = 197,        /* control_statement  */
  YYSYMBOL_labeled_statement = 198,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 199,       /* compound_statement  */
  YYSYMBOL_200_statement_seq_opt = 200,    /* statement_seq.opt  */
  YYSYMBOL_selection_statement = 201,      /* selection_statement  */
  YYSYMBOL_202_condition_opt = 202,        /* condition.opt  */
  YYSYMBOL_condition = 203,                /* condition  */
  YYSYMBOL_iteration_statement = 204,      /* iteration_statement  */
  YYSYMBOL_for_init_statement = 205,       /* for_init_statement  */
  YYSYMBOL_jump_statement = 206,           /* jump_statement  */
  YYSYMBOL_declaration_statement = 207,    /* declaration_statement  */
  YYSYMBOL_compound_declaration = 208,     /* compound_declaration  */
  YYSYMBOL_209_declaration_seq_opt = 209,  /* declaration_seq.opt  */
  YYSYMBOL_looping_declaration = 210,      /* looping_declaration  */
  YYSYMBOL_looped_declaration = 211,       /* looped_declaration  */
  YYSYMBOL_declaration = 212,              /* declaration  */
  YYSYMBOL_specialised_declaration = 213,  /* specialised_declaration  */
  YYSYMBOL_block_declaration = 214,        /* block_declaration  */
  YYSYMBOL_specialised_block_declaration = 215, /* specialised_block_declaration  */
  YYSYMBOL_simple_declaration = 216,       /* simple_declaration  */
  YYSYMBOL_217_suffix_built_in_decl_specifier_raw = 217, /* suffix_built_in_decl_specifier.raw  */
  YYSYMBOL_suffix_built_in_decl_specifier = 218, /* suffix_built_in_decl_specifier  */
  YYSYMBOL_suffix_named_decl_specifier = 219, /* suffix_named_decl_specifier  */
  YYSYMBOL_220_suffix_named_decl_specifier_bi = 220, /* suffix_named_decl_specifier.bi  */
  YYSYMBOL_suffix_named_decl_specifiers = 221, /* suffix_named_decl_specifiers  */
  YYSYMBOL_222_suffix_named_decl_specifiers_sf = 222, /* suffix_named_decl_specifiers.sf  */
  YYSYMBOL_suffix_decl_specified_ids = 223, /* suffix_decl_specified_ids  */
  YYSYMBOL_suffix_decl_specified_scope = 224, /* suffix_decl_specified_scope  */
  YYSYMBOL_decl_specifier_affix = 225,     /* decl_specifier_affix  */
  YYSYMBOL_decl_specifier_suffix = 226,    /* decl_specifier_suffix  */
  YYSYMBOL_decl_specifier_prefix = 227,    /* decl_specifier_prefix  */
  YYSYMBOL_storage_class_specifier = 228,  /* storage_class_specifier  */
  YYSYMBOL_function_specifier = 229,       /* function_specifier  */
  YYSYMBOL_type_specifier = 230,           /* type_specifier  */
  YYSYMBOL_elaborate_type_specifier = 231, /* elaborate_type_specifier  */
  YYSYMBOL_simple_type_specifier = 232,    /* simple_type_specifier  */
  YYSYMBOL_built_in_type_specifier = 233,  /* built_in_type_specifier  */
  YYSYMBOL_elaborated_type_specifier = 234, /* elaborated_type_specifier  */
  YYSYMBOL_elaborated_enum_specifier = 235, /* elaborated_enum_specifier  */
  YYSYMBOL_enum_specifier = 236,           /* enum_specifier  */
  YYSYMBOL_enumerator_clause = 237,        /* enumerator_clause  */
  YYSYMBOL_enumerator_list_ecarb = 238,    /* enumerator_list_ecarb  */
  YYSYMBOL_enumerator_definition_ecarb = 239, /* enumerator_definition_ecarb  */
  YYSYMBOL_enumerator_definition_filler = 240, /* enumerator_definition_filler  */
  YYSYMBOL_enumerator_list_head = 241,     /* enumerator_list_head  */
  YYSYMBOL_enumerator_list = 242,          /* enumerator_list  */
  YYSYMBOL_enumerator_definition = 243,    /* enumerator_definition  */
  YYSYMBOL_enumerator = 244,               /* enumerator  */
  YYSYMBOL_namespace_definition = 245,     /* namespace_definition  */
  YYSYMBOL_namespace_alias_definition = 246, /* namespace_alias_definition  */
  YYSYMBOL_using_declaration = 247,        /* using_declaration  */
  YYSYMBOL_using_directive = 248,          /* using_directive  */
  YYSYMBOL_asm_definition = 249,           /* asm_definition  */
  YYSYMBOL_linkage_specification = 250,    /* linkage_specification  */
  YYSYMBOL_init_declarations = 251,        /* init_declarations  */
  YYSYMBOL_init_declaration = 252,         /* init_declaration  */
  YYSYMBOL_star_ptr_operator = 253,        /* star_ptr_operator  */
  YYSYMBOL_nested_ptr_operator = 254,      /* nested_ptr_operator  */
  YYSYMBOL_ptr_operator = 255,             /* ptr_operator  */
  YYSYMBOL_ptr_operator_seq = 256,         /* ptr_operator_seq  */
  YYSYMBOL_257_ptr_operator_seq_opt = 257, /* ptr_operator_seq.opt  */
  YYSYMBOL_258_cv_qualifier_seq_opt = 258, /* cv_qualifier_seq.opt  */
  YYSYMBOL_cv_qualifier = 259,             /* cv_qualifier  */
  YYSYMBOL_type_id = 260,                  /* type_id  */
  YYSYMBOL_261_abstract_declarator_opt = 261, /* abstract_declarator.opt  */
  YYSYMBOL_262_direct_abstract_declarator_opt = 262, /* direct_abstract_declarator.opt  */
  YYSYMBOL_direct_abstract_declarator = 263, /* direct_abstract_declarator  */
  YYSYMBOL_parenthesis_clause = 264,       /* parenthesis_clause  */
  YYSYMBOL_parameters_clause = 265,        /* parameters_clause  */
  YYSYMBOL_parameter_declaration_clause = 266, /* parameter_declaration_clause  */
  YYSYMBOL_parameter_declaration_list = 267, /* parameter_declaration_list  */
  YYSYMBOL_abstract_pointer_declaration = 268, /* abstract_pointer_declaration  */
  YYSYMBOL_abstract_parameter_declaration = 269, /* abstract_parameter_declaration  */
  YYSYMBOL_special_parameter_declaration = 270, /* special_parameter_declaration  */
  YYSYMBOL_parameter_declaration = 271,    /* parameter_declaration  */
  YYSYMBOL_templated_parameter_declaration = 272, /* templated_parameter_declaration  */
  YYSYMBOL_templated_abstract_declaration = 273, /* templated_abstract_declaration  */
  YYSYMBOL_function_definition = 274,      /* function_definition  */
  YYSYMBOL_func_definition = 275,          /* func_definition  */
  YYSYMBOL_ctor_definition = 276,          /* ctor_definition  */
  YYSYMBOL_constructor_head = 277,         /* constructor_head  */
  YYSYMBOL_function_try_block = 278,       /* function_try_block  */
  YYSYMBOL_function_block = 279,           /* function_block  */
  YYSYMBOL_function_body = 280,            /* function_body  */
  YYSYMBOL_initializer_clause = 281,       /* initializer_clause  */
  YYSYMBOL_braced_initializer = 282,       /* braced_initializer  */
  YYSYMBOL_initializer_list = 283,         /* initializer_list  */
  YYSYMBOL_looping_initializer_clause = 284, /* looping_initializer_clause  */
  YYSYMBOL_looped_initializer_clause = 285, /* looped_initializer_clause  */
  YYSYMBOL_colon_mark = 286,               /* colon_mark  */
  YYSYMBOL_elaborated_class_specifier = 287, /* elaborated_class_specifier  */
  YYSYMBOL_class_specifier_head = 288,     /* class_specifier_head  */
  YYSYMBOL_class_key = 289,                /* class_key  */
  YYSYMBOL_class_specifier = 290,          /* class_specifier  */
  YYSYMBOL_291_member_specification_opt = 291, /* member_specification.opt  */
  YYSYMBOL_looping_member_declaration = 292, /* looping_member_declaration  */
  YYSYMBOL_looped_member_declaration = 293, /* looped_member_declaration  */
  YYSYMBOL_member_declaration = 294,       /* member_declaration  */
  YYSYMBOL_simple_member_declaration = 295, /* simple_member_declaration  */
  YYSYMBOL_member_init_declarations = 296, /* member_init_declarations  */
  YYSYMBOL_member_init_declaration = 297,  /* member_init_declaration  */
  YYSYMBOL_accessibility_specifier = 298,  /* accessibility_specifier  */
  YYSYMBOL_bit_field_declaration = 299,    /* bit_field_declaration  */
  YYSYMBOL_bit_field_width = 300,          /* bit_field_width  */
  YYSYMBOL_bit_field_init_declaration = 301, /* bit_field_init_declaration  */
  YYSYMBOL_base_specifier_list = 302,      /* base_specifier_list  */
  YYSYMBOL_base_specifier = 303,           /* base_specifier  */
  YYSYMBOL_access_specifier = 304,         /* access_specifier  */
  YYSYMBOL_conversion_function_id = 305,   /* conversion_function_id  */
  YYSYMBOL_conversion_type_id = 306,       /* conversion_type_id  */
  YYSYMBOL_307_ctor_initializer_opt = 307, /* ctor_initializer.opt  */
  YYSYMBOL_ctor_initializer = 308,         /* ctor_initializer  */
  YYSYMBOL_mem_initializer_list = 309,     /* mem_initializer_list  */
  YYSYMBOL_mem_initializer_list_head = 310, /* mem_initializer_list_head  */
  YYSYMBOL_mem_initializer = 311,          /* mem_initializer  */
  YYSYMBOL_mem_initializer_id = 312,       /* mem_initializer_id  */
  YYSYMBOL_operator_function_id = 313,     /* operator_function_id  */
  YYSYMBOL_operator = 314,                 /* operator  */
  YYSYMBOL_template_declaration = 315,     /* template_declaration  */
  YYSYMBOL_template_parameter_clause = 316, /* template_parameter_clause  */
  YYSYMBOL_template_parameter_list = 317,  /* template_parameter_list  */
  YYSYMBOL_template_parameter = 318,       /* template_parameter  */
  YYSYMBOL_simple_type_parameter = 319,    /* simple_type_parameter  */
  YYSYMBOL_templated_type_parameter = 320, /* templated_type_parameter  */
  YYSYMBOL_template_id = 321,              /* template_id  */
  YYSYMBOL_template_argument_list = 322,   /* template_argument_list  */
  YYSYMBOL_template_argument = 323,        /* template_argument  */
  YYSYMBOL_explicit_specialization = 324,  /* explicit_specialization  */
  YYSYMBOL_try_block = 325,                /* try_block  */
  YYSYMBOL_handler_seq = 326,              /* handler_seq  */
  YYSYMBOL_handler = 327,                  /* handler  */
  YYSYMBOL_exception_declaration = 328,    /* exception_declaration  */
  YYSYMBOL_throw_expression = 329,         /* throw_expression  */
  YYSYMBOL_templated_throw_expression = 330, /* templated_throw_expression  */
  YYSYMBOL_exception_specification = 331,  /* exception_specification  */
  YYSYMBOL_type_id_list = 332,             /* type_id_list  */
  YYSYMBOL_advance_search = 333,           /* advance_search  */
  YYSYMBOL_bang = 334,                     /* bang  */
  YYSYMBOL_mark = 335,                     /* mark  */
  YYSYMBOL_nest = 336,                     /* nest  */
  YYSYMBOL_start_search = 337,             /* start_search  */
  YYSYMBOL_start_search1 = 338,            /* start_search1  */
  YYSYMBOL_util = 339                      /* util  */
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5060

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  129
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  211
/* YYNRULES -- Number of rules.  */
#define YYNRULES  561
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  899

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   353


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
       2,     2,     2,    12,    26,   128,    29,     7,     9,    25,
      21,    22,     5,     3,    31,     4,    24,     6,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    16,    30,
      13,    15,    14,    23,    28,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    17,    27,    18,     8,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    19,    10,    20,    11,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   304,   304,   305,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   326,   327,   328,   329,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   348,   349,   350,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   376,
     379,   380,   381,   382,   383,   384,   385,   390,   422,   423,
     424,   428,   434,   435,   436,   443,   444,   445,   446,   448,
     449,   451,   453,   455,   459,   461,   462,   464,   465,   466,
     467,   468,   469,   470,   471,   474,   475,   476,   477,   479,
     480,   481,   482,   487,   489,   490,   491,   492,   493,   495,
     496,   497,   498,   502,   504,   505,   506,   508,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   525,   526,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,   561,   567,   568,   569,   570,   571,   571,   571,   571,
     571,   571,   571,   571,   571,   571,   571,   576,   577,   578,
     579,   580,   584,   585,   586,   587,   588,   589,   590,   591,
     592,   593,   594,   596,   597,   599,   600,   602,   603,   605,
     606,   608,   609,   611,   612,   613,   615,   616,   623,   624,
     625,   626,   627,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   640,   641,   642,   643,   644,   648,   649,
     650,   651,   652,   653,   656,   657,   658,   660,   662,   663,
     664,   665,   666,   671,   672,   674,   675,   676,   677,   678,
     679,   680,   681,   682,   683,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,   715,   716,   717,   718,   719,   720,   721,   722,   723,
     724,   725,   726,   727,   728,   729,   730,   731,   732,   733,
     734,   735,   737,   738,   739,   740,   741,   743,   745,   746,
     748,   748,   748,   749,   750,   752,   753,   754,   756,   757,
     758,   760,   761,   762,   763,   764,   765,   766,   766,   766,
     766,   766,   766,   766,   766,   766,   766,   766,   777,   778,
     779,   781,   782,   783,   784,   785,   786,   787,   788,   789,
     790,   791,   792,   793,   794,   795,   796,   797,   798,   800,
     801,   802,   804,   805,   807,   808,   809,   810,   816,   817,
     818,   825,   826,   827,   828,   829,   830,   831,   832,   833,
     835,   836,   838,   839,   840,   840,   843,   844,   847,   848,
     849,   850,   851,   852,   853,   854,   857,   858,   859,   861,
     862,   863,   864,   865,   872,   873,   874,   875,   876,   877,
     878,   879,   880,   881,   882,   886,   887,   888,   890,   891,
     892,   893,   899,   900,   901,   902,   903,   904,   905,   906,
     907,   908,   909,   910,   911,   918,   919,   920,   921,   922,
     923,   924,   926,   927,   928,   929,   930,   931,   946,   947,
     948,   949,   950,   951,   952,   953,   953,   953,   954,   955,
     957,   958,   959,   961,   962,   963,   964,   965,   966,   967,
     970,   971,   978,   979,   980,   981,   982,   983,   984,   985,
     986,   989,   990,   991,   992,   993,   995,   996,   997,  1003,
    1004,  1005,  1006,  1007,  1008,  1008,  1008,  1013,  1014,  1015,
    1023,  1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,
    1037,  1047,  1048,  1053,  1054,  1055,  1056,  1057,  1058,  1059,
    1060,  1061,  1062,  1063,  1064,  1065,  1066,  1067,  1068,  1069,
    1070,  1071,  1072,  1073,  1074,  1075,  1076,  1077,  1078,  1079,
    1080,  1081,  1082,  1083,  1084,  1085,  1086,  1087,  1088,  1089,
    1090,  1095,  1096,  1097,  1098,  1099,  1100,  1101,  1102,  1103,
    1104,  1105,  1106,  1108,  1110,  1111,  1112,  1113,  1117,  1118,
    1119,  1129,  1134,  1136,  1137,  1138,  1139,  1141,  1142,  1143,
    1144,  1145,  1146,  1147,  1148,  1153,  1154,  1155,  1156,  1157,
    1158,  1159
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
  "\"end of file\"", "error", "\"invalid token\"", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'^'", "'&'", "'|'", "'~'", "'!'", "'<'", "'>'", "'='",
  "':'", "'['", "']'", "'{'", "'}'", "'('", "')'", "'?'", "'.'", "'\\''",
  "'\"'", "'\\\\'", "'@'", "'$'", "';'", "','", "ARROW", "ARROW_STAR",
  "DEC", "EQ", "GE", "INC", "LE", "LOG_AND", "LOG_OR", "NE", "SHL", "SHR",
  "ASS_ADD", "ASS_AND", "ASS_DIV", "ASS_MOD", "ASS_MUL", "ASS_OR",
  "ASS_SHL", "ASS_SHR", "ASS_SUB", "ASS_XOR", "DOT_STAR", "ELLIPSIS",
  "SCOPE", "PRIVATE", "PROTECTED", "PUBLIC", "BOOL", "CHAR", "DOUBLE",
  "FLOAT", "INT", "LONG", "SHORT", "SIGNED", "UNSIGNED", "VOID", "WCHAR_T",
  "CLASS", "ENUM", "NAMESPACE", "STRUCT", "TYPENAME", "UNION", "CONST",
  "VOLATILE", "AUTO", "EXPLICIT", "EXPORT", "EXTERN", "FRIEND", "INLINE",
  "MUTABLE", "REGISTER", "STATIC", "TEMPLATE", "TYPEDEF", "USING",
  "VIRTUAL", "ASM", "BREAK", "CASE", "CATCH", "CONST_CAST", "CONTINUE",
  "DEFAULT", "DELETE", "DO", "DYNAMIC_CAST", "ELSE", "FALSE", "FOR",
  "GOTO", "IF", "NEW", "OPERATOR", "REINTERPRET_CAST", "RETURN", "SIZEOF",
  "STATIC_CAST", "SWITCH", "THIS", "THROW", "TRUE", "TRY", "TYPEID",
  "WHILE", "CharacterLiteral", "FloatingLiteral", "Identifier",
  "IntegerLiteral", "NumberLiteral", "StringLiteral", "SHIFT_THERE",
  "REDUCE_HERE_MOSTLY", "'#'", "$accept", "identifier_word", "identifier",
  "id", "template_test", "global_scope", "id_scope", "nested_id",
  "scoped_id", "destructor_id", "special_function_id",
  "nested_special_function_id", "scoped_special_function_id",
  "declarator_id", "built_in_type_id", "pseudo_destructor_id",
  "nested_pseudo_destructor_id", "scoped_pseudo_destructor_id", "string",
  "literal", "boolean_literal", "translation_unit", "primary_expression",
  "abstract_expression", "type1_parameters", "mark_type1",
  "postfix_expression", "expression_list.opt", "expression_list",
  "unary_expression", "delete_expression", "new_expression", "new_type_id",
  "new_declarator", "direct_new_declarator", "new_initializer.opt",
  "cast_expression", "pm_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression.opt",
  "expression", "constant_expression", "templated_relational_expression",
  "templated_equality_expression", "templated_and_expression",
  "templated_exclusive_or_expression", "templated_inclusive_or_expression",
  "templated_logical_and_expression", "templated_logical_or_expression",
  "templated_conditional_expression", "templated_assignment_expression",
  "templated_expression", "templated_expression_list", "looping_statement",
  "looped_statement", "statement", "control_statement",
  "labeled_statement", "compound_statement", "statement_seq.opt",
  "selection_statement", "condition.opt", "condition",
  "iteration_statement", "for_init_statement", "jump_statement",
  "declaration_statement", "compound_declaration", "declaration_seq.opt",
  "looping_declaration", "looped_declaration", "declaration",
  "specialised_declaration", "block_declaration",
  "specialised_block_declaration", "simple_declaration",
  "suffix_built_in_decl_specifier.raw", "suffix_built_in_decl_specifier",
  "suffix_named_decl_specifier", "suffix_named_decl_specifier.bi",
  "suffix_named_decl_specifiers", "suffix_named_decl_specifiers.sf",
  "suffix_decl_specified_ids", "suffix_decl_specified_scope",
  "decl_specifier_affix", "decl_specifier_suffix", "decl_specifier_prefix",
  "storage_class_specifier", "function_specifier", "type_specifier",
  "elaborate_type_specifier", "simple_type_specifier",
  "built_in_type_specifier", "elaborated_type_specifier",
  "elaborated_enum_specifier", "enum_specifier", "enumerator_clause",
  "enumerator_list_ecarb", "enumerator_definition_ecarb",
  "enumerator_definition_filler", "enumerator_list_head",
  "enumerator_list", "enumerator_definition", "enumerator",
  "namespace_definition", "namespace_alias_definition",
  "using_declaration", "using_directive", "asm_definition",
  "linkage_specification", "init_declarations", "init_declaration",
  "star_ptr_operator", "nested_ptr_operator", "ptr_operator",
  "ptr_operator_seq", "ptr_operator_seq.opt", "cv_qualifier_seq.opt",
  "cv_qualifier", "type_id", "abstract_declarator.opt",
  "direct_abstract_declarator.opt", "direct_abstract_declarator",
  "parenthesis_clause", "parameters_clause",
  "parameter_declaration_clause", "parameter_declaration_list",
  "abstract_pointer_declaration", "abstract_parameter_declaration",
  "special_parameter_declaration", "parameter_declaration",
  "templated_parameter_declaration", "templated_abstract_declaration",
  "function_definition", "func_definition", "ctor_definition",
  "constructor_head", "function_try_block", "function_block",
  "function_body", "initializer_clause", "braced_initializer",
  "initializer_list", "looping_initializer_clause",
  "looped_initializer_clause", "colon_mark", "elaborated_class_specifier",
  "class_specifier_head", "class_key", "class_specifier",
  "member_specification.opt", "looping_member_declaration",
  "looped_member_declaration", "member_declaration",
  "simple_member_declaration", "member_init_declarations",
  "member_init_declaration", "accessibility_specifier",
  "bit_field_declaration", "bit_field_width", "bit_field_init_declaration",
  "base_specifier_list", "base_specifier", "access_specifier",
  "conversion_function_id", "conversion_type_id", "ctor_initializer.opt",
  "ctor_initializer", "mem_initializer_list", "mem_initializer_list_head",
  "mem_initializer", "mem_initializer_id", "operator_function_id",
  "operator", "template_declaration", "template_parameter_clause",
  "template_parameter_list", "template_parameter", "simple_type_parameter",
  "templated_type_parameter", "template_id", "template_argument_list",
  "template_argument", "explicit_specialization", "try_block",
  "handler_seq", "handler", "exception_declaration", "throw_expression",
  "templated_throw_expression", "exception_specification", "type_id_list",
  "advance_search", "bang", "mark", "nest", "start_search",
  "start_search1", "util", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-675)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-557)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -675,   104,   149,  -675,  -675,    23,  1881,  -675,  -675,  4095,
    4095,  -675,  -675,  4095,  4095,  4095,  3726,  2619,  -675,  4095,
    4095,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,   277,   295,  -675,    38,  -675,  -675,
    -675,  -675,  -675,   282,    68,  -675,  -675,  -675,  -675,  -675,
    4365,  -675,   554,  -675,   209,   292,  4095,   310,  -675,  4655,
    4218,   312,  4095,   340,  -675,  3726,  -675,   260,  -675,  -675,
    -675,  -675,  -675,  -675,   396,   367,   452,    69,  -675,  -675,
    -675,  -675,  -675,  -675,  -675,  -675,  -675,  4297,   502,  -675,
    -675,  -675,  -675,    94,   525,   503,   534,   664,   130,   417,
     435,   439,   419,  1399,  -675,   102,  -675,  -675,  -675,  -675,
    -675,  -675,  1966,   755,  1966,  -675,   998,  -675,  -675,   455,
    -675,  2373,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,  -675,   556,   441,   511,  -675,  4095,
    -675,  -675,  -675,  -675,  -675,  -675,   284,  -675,  -675,    87,
    -675,   458,  -675,  -675,  -675,  -675,  2250,  -675,  -675,  -675,
     589,   477,  4684,  -675,  -675,  -675,  -675,   115,  -675,   489,
     491,   468,  -675,  -675,  -675,  4586,   525,   526,  -675,  2619,
    4095,  -675,   516,    89,  -675,   528,  -675,  -675,  -675,  -675,
      81,    38,   -23,   -23,   537,  -675,  -675,   377,  -675,  -675,
     532,  -675,   539,  2742,  4748,   550,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,  -675,   -23,    38,   425,   425,   -17,
     236,  -675,  -675,  -675,   549,    68,  4909,  -675,  4909,   585,
    -675,   560,  1494,  -675,  -675,  -675,  -675,  4655,  -675,  -675,
    -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,   565,   593,  -675,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  4267,  -675,
    -675,  4909,  -675,  -675,  4909,  -675,  -675,  -675,   591,  -675,
     -17,  -675,  -675,  -675,  -675,  -675,   236,  -675,  -675,  -675,
    -675,  -675,  3726,   891,   891,  -675,  -675,  -675,  4095,  4095,
    4095,  4095,  3357,  4095,  4095,  4095,  4095,  4095,  4095,  4095,
    4095,  4095,  4095,  4095,  4095,  4095,  4095,   599,  3726,  4095,
    -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,
    3726,  4095,  -675,  3726,   615,  -675,  -675,  -675,  -675,  -675,
    -675,   620,  1070,  1097,  -675,  1966,  -675,   634,  -675,  -675,
    3357,  -675,  -675,  -675,  -675,  3726,  -675,  -675,  -675,   387,
    3726,  -675,  -675,   616,   433,  -675,   196,  3480,  -675,  1881,
    -675,   628,  4938,  4095,  3726,  -675,  4860,  3357,  4095,  -675,
    -675,  -675,  2619,  -675,  3726,  -675,  -675,  -675,   523,   300,
     662,   -23,  -675,  -675,    38,  -675,  3111,  -675,  -675,  2250,
     276,    38,  4445,  3849,   534,   262,   306,   674,   681,   684,
     656,  1753,  -675,  -675,  3234,  -675,  -675,   686,   626,   254,
    -675,   691,   693,  -675,   708,  3234,  -675,   683,   685,  -675,
    -675,   692,  1419,   702,   705,  3726,  -675,  3726,   147,   147,
    -675,  -675,   704,   395,  -675,   560,   560,  -675,  -675,   405,
    -675,  -675,   709,   710,  2865,  -675,   707,  1560,   891,   963,
    1245,  -675,  1860,  -675,  -675,  -675,  -675,  -675,  -675,   595,
    -675,  -675,    94,    94,    94,   525,   525,   503,   503,   534,
     534,   534,   534,   664,   664,   130,   417,   435,   439,   717,
    -675,   711,   419,  -675,  -675,   718,  -675,  -675,    38,   627,
     714,  -675,   723,  -675,  -675,   727,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,   433,  -675,   278,  -675,   433,  -675,
    -675,   453,  -675,  -675,  -675,  -675,  -675,   728,   719,  4095,
    -675,  -675,  -675,  -675,  -675,  -675,   738,   161,  -675,   753,
     325,   735,   729,  -675,   748,  -675,  4095,  4095,  4095,  4095,
    4095,  4095,  4095,  4095,  4095,  -675,  3849,  4095,  3849,  -675,
    3849,   523,  -675,  3111,  4909,   523,  -675,  -675,   257,  -675,
    -675,  -675,   730,    91,  -675,  -675,   449,   478,   740,   741,
     742,   736,  -675,   750,  4095,   367,   147,   147,  -675,  -675,
    -675,  -675,   749,   754,  -675,   264,  -675,  1258,  -675,  1258,
     963,  1320,  -675,  1245,  -675,   758,  -675,  2004,  -675,  -675,
     330,   646,  2127,  3726,  -675,   648,  1635,  -675,    86,    38,
    -675,   756,   757,  -675,   627,  -675,  4719,   651,  1758,  -675,
    -675,   433,  -675,  -675,   311,  4095,  4095,  -675,  -675,  -675,
     779,   766,  -675,  -675,  -675,  -675,  -675,  4095,   534,   534,
     534,   262,   262,   306,  -675,   748,   681,   684,   764,   771,
     773,   656,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  3234,
    -675,  -675,  3972,  -675,  3726,  3726,  -675,  3726,  -675,   271,
    -675,   770,  3726,  3726,  -675,  1320,  1523,  1258,  -675,  2619,
     578,  -675,   782,  -675,  -675,  -675,   609,  -675,  -675,    38,
    4514,   776,  4095,   784,   800,  -675,   797,   523,   799,  3726,
     807,   714,   813,   819,   805,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,  -675,  2988,  -675,   631,  -675,   838,
    -675,  3726,  2619,  -675,  -675,  -675,    47,  -675,  -675,   715,
     123,  2496,  -675,  -675,   444,  -675,  -675,  -675,   613,  -675,
     829,  -675,   644,  -675,  -675,  -675,  -675,   415,   712,  3849,
    3849,  -675,  -675,   828,   825,   826,  -675,  -675,   830,   831,
    1523,  1258,   621,    88,  -675,  -675,   722,   850,  2127,  -675,
     853,   841,  4811,  -675,   844,  -675,  -675,   743,  2988,   834,
    2619,   836,  2619,   627,  2619,  -675,  1635,  -675,   839,   845,
    -675,   847,  -675,  4909,   871,  -675,  3603,  -675,  -675,  3603,
    -675,  3603,  -675,  1758,  -675,  -675,  -675,  -675,   843,  -675,
    -675,  -675,  -675,  -675,  -675,  -675,   877,  -675,   860,  -675,
     177,  -675,  -675,   861,  2619,  -675,  -675,   863,   856,  -675,
     869,  -675,   870,  -675,  -675,  -675,  -675,   714,  -675,   186,
     878,  -675,  -675,   878,  -675,  -675,  -675,   892,  -675,   894,
    -675,  -675,  -675,  -675,  3726,   868,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,   318,   879,   881,  3726,   803,  -675,  -675,
    -675,  -675,   876,   885,  -675,  -675,  -675,  -675,  -675
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     225,     0,   561,     1,   560,   226,     0,   556,   555,     0,
       0,   341,   345,     0,     0,     0,   157,   369,   247,     0,
       0,    10,   299,   297,   306,   305,   301,   302,   300,   303,
     304,   307,   298,   425,     0,     0,   426,     0,   427,   354,
     355,   284,   285,     0,   283,   274,   286,   282,   280,   281,
       0,   275,     0,   287,     0,     0,     0,     0,    45,     0,
       0,     0,     0,     0,    49,   547,    46,     0,    41,    42,
       2,    40,    39,     3,     4,    13,     0,     0,    15,   256,
      22,    25,   263,    43,    48,    44,    58,    51,    79,   107,
      91,    89,   109,   112,   116,   119,   122,   127,   130,   132,
     134,   136,   138,   140,   142,   340,   228,   229,   236,   232,
     241,   240,   254,   266,   259,   261,   264,   268,    50,     0,
     278,     0,   272,   273,   257,   251,   293,   309,   292,   238,
     243,   244,   245,   242,   237,     0,     0,   343,   346,     0,
     276,    52,   352,   233,   393,   392,     0,   308,   430,     0,
     291,   457,   400,    19,    20,   234,     0,     8,   235,   145,
       0,     0,     0,    84,    85,    87,    86,   455,   454,     0,
     159,     0,   158,   381,   283,     0,   116,   132,   382,     0,
     348,   374,     0,   370,   376,   379,   383,   372,    81,    80,
     321,     0,     0,     0,   311,   313,   558,     0,   330,   310,
       0,   522,   560,   556,     0,     0,    11,    21,   239,   246,
     255,   279,   294,    54,   537,     0,     0,     0,     0,     0,
       0,    27,    29,    28,     0,     0,     0,    93,     0,     0,
     295,   105,   350,   289,   288,   296,   290,    96,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   494,   495,
     493,     0,     0,   516,   518,   517,   515,   508,   511,   514,
     510,   512,   513,   509,   504,   505,   496,   502,   499,   500,
     498,   503,   507,   506,   497,   501,   482,   481,   350,   467,
     480,     0,    51,    88,     0,   548,    74,     9,     0,    12,
       0,    16,    26,    92,    90,   347,     0,    14,    23,    24,
     344,   108,   157,     0,     0,    69,    68,    57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   146,     0,     0,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
       0,     0,   205,     0,   470,   404,   394,   395,   277,   253,
     252,    10,     0,   264,   267,   260,   258,    10,   265,   262,
       0,   250,   396,   399,   249,     0,   248,   342,    82,   366,
       0,   397,   398,   561,     0,   424,   419,     0,   521,     0,
     231,     0,     0,     0,     0,    53,     0,   350,   377,   384,
     349,   368,     0,   371,     0,   317,   314,   323,     0,   556,
       0,     0,   312,   225,     0,   329,   556,   337,   336,     0,
     425,   533,     0,   549,   162,   166,   169,   171,   173,   175,
     177,   179,   181,   385,     0,   389,   530,   386,     0,     0,
     524,   526,   528,   183,     0,     0,    17,     0,     0,    18,
     332,     0,   358,     0,     0,    75,    94,     0,     0,     0,
     100,    99,   102,   350,    98,   105,   105,   520,   519,   350,
     468,   469,     0,     0,     0,     7,     0,     0,     0,     0,
       0,    64,     0,    35,    37,    65,    30,    66,    67,     0,
     111,   110,   114,   115,   113,   117,   118,   120,   121,   123,
     124,   126,   125,   128,   129,   131,   133,   135,   137,   559,
     144,     0,   139,   143,   453,   559,   340,   338,     0,     0,
       0,   471,    10,    83,   339,     0,   353,   367,   401,   428,
     559,   464,   465,   466,     0,   461,     0,   459,     0,   418,
     423,     0,   405,   458,   406,   230,   227,     0,   160,   350,
     375,   378,   373,   380,   328,   325,   326,   321,   315,     0,
       0,   561,     0,   541,   171,   550,     0,     0,     0,     0,
       0,   390,     0,     0,     0,   146,     0,     0,     0,   388,
       0,   534,   523,   556,     0,     0,   531,   540,     0,   538,
     334,   333,     0,   358,   357,   356,     0,   360,     0,     0,
       0,    76,    77,     0,     0,     0,     0,     0,   101,   351,
      95,    97,     0,     0,     6,     0,    63,    33,    34,     0,
       0,     0,    38,     0,    36,     0,    31,     0,    59,   409,
       0,   412,     0,     0,   203,   206,     0,   479,   472,     0,
     474,     0,     0,   402,   543,   403,     0,   431,     0,   463,
     422,     0,   462,   420,     0,     0,     0,   319,   316,   324,
       0,     0,   318,   322,   223,   560,   331,     0,   163,   165,
     164,   167,   168,   170,   391,   172,   174,   176,   184,     0,
       0,   178,   182,   387,   535,   525,   527,   529,   536,     0,
     335,   359,     0,   363,     0,     0,   106,     0,   103,   140,
     161,     0,     0,     0,     5,     0,     0,     0,    62,   557,
       0,   407,   559,   556,   415,   414,     0,   141,   556,     0,
       0,     0,     0,     0,     0,   559,     0,     0,     0,   157,
       0,     0,     0,     3,   340,   188,   189,   192,   196,   193,
     197,   198,   199,   194,   222,     0,   195,     0,   476,     0,
     475,    75,     0,   544,   551,   553,     0,   556,   442,     0,
       0,     0,   440,   439,     0,   433,   434,   438,     0,   437,
       0,   441,     0,   460,   421,   456,   327,     0,   226,     0,
       0,   539,   364,     0,     0,     0,    78,   104,     0,     0,
       0,    32,     0,     0,    55,   408,   413,     0,     0,   417,
       0,     0,     0,   218,     0,   219,   559,     0,     0,     0,
       0,     0,     0,     0,     0,   559,     0,   191,   473,     0,
     546,     0,   552,     0,     0,   443,     0,   446,   444,     0,
     445,     0,   452,     0,   436,   320,   556,   180,   185,   365,
      73,    70,    72,    71,    56,    61,     0,   556,     0,   416,
       0,   559,   202,     0,   211,   217,   221,     0,   213,   220,
       0,   542,     0,   200,   190,   477,   478,     0,   554,     0,
     450,   447,   451,   401,   448,   449,   435,     0,    60,     0,
     410,   204,   207,   201,     0,     0,   212,   559,   559,   559,
     545,   429,   432,     0,     0,     0,   157,   208,   210,   214,
     224,   411,     0,     0,   559,   215,   559,   209,   216
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -675,  -588,   -46,   -26,  -675,   706,   824,     7,    76,   -40,
      20,   -32,   -31,  -163,  -435,  -412,  -430,   362,    -8,  -675,
    -675,  -675,  -675,   846,  -675,  -675,  -675,   160,  -429,   851,
     833,   840,   230,   459,  -675,   219,   245,   204,     5,   364,
     687,   365,  -242,    -3,   590,   588,   592,     8,  -548,    -6,
     497,  -285,  -277,  -516,   132,  -498,  -175,   356,   361,   353,
    -675,  -675,  -325,  -675,  -675,  -674,   120,  -675,  -675,  -675,
    -596,  -675,  -675,  -675,  -518,  -675,  -675,  -675,  -675,   165,
     524,  -187,   551,  -127,    10,  -573,   -41,  -116,   814,   -43,
    -675,   -90,   816,   818,  -675,  -675,   -81,   822,    73,  -675,
    -675,     2,   713,  -675,   903,  -675,  -675,  -675,   739,   545,
    -675,   399,  -675,  -675,  -675,  -675,  -675,  -675,  -581,  -675,
    -675,  -675,  -675,  -268,   -67,   -28,   -11,   768,  -185,  -675,
     268,  -189,   366,  -675,  -675,   -38,     9,  -675,   -14,   -89,
    -675,  -675,  -160,  -400,  -675,  -572,  -113,  -111,  -595,  -133,
    -675,  -128,   587,   638,  -675,   265,   178,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,   145,  -675,   218,  -675,   150,  -675,
    -675,  -316,  -318,   445,  -451,  -566,  -675,   697,  -675,  -675,
    -675,  -675,   341,  -675,  -675,  -675,   -42,  -183,  -675,   404,
    -675,  -675,   682,   517,   301,  -675,  -675,  -592,  -675,  -675,
    -675,  -675,  -675,  -675,  -536,    -5,  -675,  -675,  -465,  -675,
    -315
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    73,    74,    75,   288,    76,    77,    78,    79,   222,
      80,    81,    82,   224,   472,   473,   474,   612,    83,    84,
      85,     1,    86,    87,   699,   479,    88,   590,   169,    89,
      90,    91,   231,   451,   452,   446,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   170,
     340,   171,   172,   691,   415,   416,   554,   418,   419,   420,
     421,   422,   423,   669,   670,   625,   725,   726,   727,   728,
     345,   505,   730,   875,   847,   731,   844,   732,   733,   198,
       2,     5,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   349,   179,   122,
     123,   442,   124,   234,   125,   126,   127,   128,   195,   396,
     648,   397,   398,   399,   545,   546,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   181,   599,   369,
     140,   443,   585,   586,   587,   141,   142,   182,   848,   184,
     185,   186,   187,   426,   427,   143,   144,   145,   146,   346,
     509,   347,   704,   534,   620,   621,   705,   531,   147,   148,
     149,   150,   373,   637,   755,   756,   757,   758,   861,   759,
     151,   168,   152,   526,   527,   528,   153,   279,   510,   511,
     628,   629,   630,   631,   154,   280,   155,   156,   429,   430,
     431,   432,   157,   578,   579,   158,   736,   633,   634,   811,
     159,   433,   517,   746,   160,   434,   783,   403,   626,     6,
       4
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     105,   201,   161,   183,   205,   361,   180,   210,   362,   209,
     363,   178,   213,   371,   177,   408,   591,   466,   372,   389,
     428,   223,   176,   167,   569,   504,   359,   312,   417,   378,
     729,   348,   607,   348,   622,   577,   202,   298,   723,   444,
     614,   797,   743,   754,   292,   299,   690,   454,   295,   300,
     307,   501,   360,   734,   438,   638,   608,   752,   520,   285,
     208,   232,   278,   663,   577,   401,   753,   537,   237,   812,
     207,   290,   760,   639,    11,   507,   286,   642,   813,   121,
     215,   495,  -556,   291,   297,   358,   706,  -556,   555,   835,
     737,    60,   462,   460,    21,   463,    11,   514,   690,    70,
      12,   395,   762,   374,     3,    70,   375,   836,  -361,   387,
     194,   197,  -361,   199,   425,   105,   205,   738,   341,   210,
     392,   342,   842,   211,   213,   803,   191,   308,   221,   205,
     766,   853,   210,   343,   690,   230,   230,   213,   383,   341,
     471,   477,   342,    21,   393,   205,   495,    21,   309,   -47,
     105,     7,    11,   815,   816,   329,   754,   296,   205,   663,
      70,   210,  -556,   209,   690,   321,   773,   873,   180,   180,
     593,   322,   205,   178,   607,   191,   177,    60,   439,   191,
     298,   647,   207,   205,   176,   400,   223,   292,   299,   436,
     763,    70,   180,    72,   121,   207,   794,   871,   608,   291,
     297,   608,   540,   887,   888,   889,   881,   872,   176,    70,
     729,   851,   529,    70,   208,   530,   882,   441,   723,   344,
     897,   453,   898,   428,   207,   376,   291,   297,   754,   121,
     225,   417,   542,   734,   232,   401,   655,   622,   207,   232,
     344,   668,   752,   672,   205,   673,   456,   215,   211,   417,
     205,   753,   706,   584,   163,   164,   439,   760,   165,   166,
     417,   880,   781,   359,   188,   189,   614,   459,   572,    70,
     737,   678,   223,   223,   348,   556,   424,   211,   694,   577,
     278,    17,   553,   608,   850,   573,   852,   762,   679,   417,
    -532,  -532,   437,   221,   328,   679,   190,   640,   557,   541,
     558,   227,   230,   342,   230,   226,   205,  -532,   230,   641,
     207,   329,   591,   230,   196,   370,   207,   425,   485,   486,
     395,   496,   358,   228,   296,   281,   876,   236,   236,   765,
     764,   547,   301,    21,   503,   425,   205,   506,   890,   210,
     205,   559,   641,   210,    60,   652,   425,   560,   536,   167,
     701,    21,   544,   284,   230,   205,   653,   230,    70,   506,
     230,   702,   405,    43,   518,   191,   205,   407,   608,   210,
     200,   532,   207,   105,   213,   425,   539,   180,   538,   221,
     221,   180,   635,   191,   368,   676,   178,   665,   543,   177,
     428,   167,   404,   176,   549,   180,   196,   176,   417,    70,
      11,   344,   207,   105,    12,   367,   207,   774,   775,   287,
      11,   176,   447,   180,    12,   778,   779,    70,   312,   312,
     295,   300,   205,   289,   180,   368,   323,   595,   439,   176,
     298,   583,   207,   595,   801,   825,   215,   292,   299,   592,
     176,   436,   453,   324,   827,   828,   653,   745,   459,   325,
     525,    21,   121,   180,   643,   291,   297,    11,   326,   211,
      11,    21,   450,   342,    39,    40,   682,   455,   768,   176,
      17,   366,   664,   377,   818,   819,   291,   297,   381,   424,
     552,    21,   121,   191,   425,   211,   385,   199,   207,    21,
     521,   522,   523,   191,   236,  -362,   236,   424,   862,  -362,
     236,   864,   515,   862,   417,   236,   313,   314,   424,    21,
     521,   522,   523,   218,   482,   483,   484,    70,   230,   302,
     384,   191,   -77,    17,   524,   674,   303,    70,   539,   677,
      11,   310,   311,    60,   304,   388,   305,   424,   391,   306,
     290,   191,   650,   394,   524,   406,   236,    70,   683,   236,
     180,    56,   236,   480,   481,    70,   190,   595,   196,    59,
      60,   344,   180,   435,   205,   215,   176,   205,   295,   300,
     595,   595,   583,   439,    70,    70,   315,   316,   176,   440,
     367,   445,   810,   457,   627,   595,   364,   365,    39,    40,
     425,   484,   379,   380,   464,   465,   761,   885,   617,   618,
     525,   893,   689,   700,   525,   513,   180,   525,   784,   392,
      21,   178,   788,   789,   177,   458,   532,   707,   499,   361,
     724,   371,   176,   739,   858,  -271,   372,   216,   367,   217,
     207,   508,   750,   207,   806,   807,   519,   516,   362,  -269,
     363,    21,   218,   820,   821,    70,   424,   823,   824,   205,
     230,   834,   392,   167,   689,   367,    33,    34,   536,    36,
      37,    38,    60,   550,   205,   475,   478,   210,   180,   209,
     595,   799,   213,   229,   600,   601,    70,   317,   318,   487,
     488,   776,   845,   561,   176,   782,   493,   494,   180,   562,
     689,   661,   662,   178,   563,   564,   177,   571,   787,   735,
     319,   570,   320,   790,   176,   627,   574,    70,   575,   576,
     236,   751,   230,   580,   582,   581,   588,   525,   223,   589,
     689,   594,   632,   602,   603,   606,   215,   623,  -270,   724,
     207,   180,   214,   342,   205,   592,   178,   619,   624,   177,
     192,   192,   814,   192,   645,   750,   205,   176,   636,   210,
     -78,   209,   424,   646,   651,   654,   206,   657,   219,   656,
     680,   684,   685,   212,   686,   192,   192,   687,   688,   697,
     692,    21,   233,   233,   703,   693,   708,   741,   742,   747,
     767,   761,   532,   211,   368,   791,   652,   769,   777,   180,
     217,   180,   724,   180,   178,  -186,   178,   177,   178,   177,
     724,   177,   785,   218,   770,   176,   793,   176,   735,   176,
     860,   351,   207,   863,   795,   860,   796,   750,   798,   219,
     800,   867,   219,    60,   751,   221,    33,    34,   802,    36,
      37,    38,   869,   180,   804,   805,   343,    70,   178,   808,
     826,   177,   236,   352,   214,   822,   829,   830,   831,   176,
     837,   838,   832,   833,   840,   192,   404,   214,   193,   193,
     841,   193,   843,    60,   846,   211,   849,   856,   206,   857,
     855,   735,   859,   214,  -187,   212,   220,    70,   868,   735,
     870,   206,   874,   193,   193,   877,   214,   392,   212,   230,
     414,   878,   879,   883,   341,   884,   751,   206,   886,   891,
     214,   809,   467,   892,   236,   894,   895,   896,   282,   293,
     206,   214,   598,   283,   498,   497,   294,   212,   568,   666,
     671,   502,   192,   219,   206,   667,   854,   551,   355,   353,
     535,   354,   192,   402,   192,   206,   356,   220,   448,   233,
     220,   233,   212,   192,   548,   233,   649,    21,   390,   681,
     233,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   235,   235,   533,   500,   839,   786,   866,   817,
     740,   865,   214,   193,   609,   461,   644,   675,   214,   468,
     771,   605,     0,     0,   448,     0,     0,   192,     0,     0,
     192,   233,     0,     0,   233,     0,     0,   233,     0,    60,
       0,     0,     0,     0,   489,   490,   491,   492,     0,   469,
     469,     0,     0,    70,     0,   350,   193,   193,     0,    21,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   214,     0,     0,     0,     0,     0,
     193,   220,     0,   220,   220,     0,     0,     0,     0,     0,
     193,   610,   193,     0,   357,     0,   449,     0,   206,   219,
       0,   193,     0,     0,   214,   212,     0,     0,   214,    33,
      34,    60,    36,    37,    38,     0,     0,     0,     0,     0,
     192,   236,     0,   214,     0,    70,   352,     0,   206,     0,
       0,     0,   206,   414,   214,   212,     0,     0,     0,   212,
     414,     0,   449,     0,     0,   193,    60,     0,   193,     0,
     192,   414,     0,     0,     0,     0,     0,   192,   206,     0,
      70,     0,   414,     0,     0,   212,    21,   470,   470,   235,
       0,   235,     0,     0,     0,   235,     0,     0,     0,     0,
     235,    33,    34,     0,    36,    37,    38,     0,   448,     0,
     214,   414,     0,   512,     0,   233,     0,     0,   352,   596,
       0,     0,     0,     0,     0,   596,     0,     0,    33,    34,
       0,    36,    37,    38,   206,   611,     0,   220,    60,     0,
       0,   235,     0,     0,   235,   352,     0,   235,     0,     0,
       0,     0,    70,     0,     0,     0,     0,     0,   193,     0,
       0,     0,     0,     0,     0,    60,   476,   476,     0,     0,
       0,     0,     0,     0,   192,     0,     0,     0,     0,    70,
       0,     0,     0,     0,     0,     0,     0,     0,   193,     0,
     192,     0,     0,     0,   192,   193,     0,   192,     0,     0,
       0,     0,     0,   658,   659,   660,   414,   414,   414,   414,
     414,   414,     0,   414,   414,   414,   467,   414,   350,     0,
     414,     0,     0,     0,     0,     0,   449,     0,     0,     0,
       0,     0,   449,   449,     0,     0,     0,   597,     0,     0,
     192,     0,     0,   597,     0,     0,     0,   233,     0,   596,
       0,     0,   214,   470,   470,   214,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   206,   611,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,     0,
       0,   609,   193,   613,     0,   192,     0,     0,     0,     0,
       0,     0,   192,     0,   414,   235,     0,   192,   193,   233,
       0,     0,   193,    60,     0,   193,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   414,    70,     0,     0,
     476,   476,   476,   476,     0,   616,    21,   214,     0,     0,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,     0,   214,     0,     0,     0,     0,     0,   193,     0,
       0,   206,     0,     0,     0,     0,     0,   597,   695,     0,
       0,     0,     0,     0,   327,   192,   206,     0,     0,     0,
     597,   597,   328,   212,    11,     0,     0,     0,    12,     0,
       0,     0,     0,     0,     0,   696,  -361,     0,     0,   329,
    -361,     0,    70,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   193,     0,   219,   414,   414,     0,     0,
     193,     0,   214,     0,     0,   193,     0,     0,     0,     0,
       0,     0,     0,     0,   214,    21,     0,   235,     0,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,     0,    36,    37,    38,    39,    40,   206,    11,
       0,     0,     0,    12,     0,   212,     0,   229,     0,     0,
     616,   447,   476,   476,   476,     0,   476,     0,     0,   192,
     696,     0,     0,     0,     0,     0,   233,     0,     0,     0,
       0,     0,     0,   193,   609,     0,     0,     0,     0,   235,
       0,    70,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     0,    36,    37,
      38,    39,    40,   220,     0,     0,     0,     0,     0,     0,
       0,     0,   229,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,     0,     0,     0,     0,   476,   476,
     476,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   780,     0,     0,     0,     0,    70,     0,     0,     0,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,     0,     0,     0,     0,     0,     8,   193,     9,    10,
      11,     0,     0,     0,    12,    70,    13,    14,   401,     0,
       0,     0,    16,     0,   342,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     0,    19,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,   476,   616,     0,     0,     0,     0,     0,
       0,    21,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   709,    36,
      37,    38,    39,    40,    41,    42,   235,   174,    45,    46,
      47,    48,    49,   710,    51,    52,    53,    54,   711,   712,
       0,    55,   713,   714,    56,   715,    57,     0,    58,   716,
     717,   718,    59,    60,    61,   719,    62,    63,   720,    64,
      65,    66,   721,    67,   722,    68,    69,    70,    71,     8,
      72,     9,    10,    11,     0,     0,     0,    12,   565,    13,
      14,     0,     0,     0,    15,    16,   566,     0,     0,    17,
       0,     0,     0,     0,     0,     0,     0,     0,   748,     0,
       0,     0,    19,   567,     0,    20,     0,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,     0,     0,     0,
       0,     0,     0,     0,    21,   521,   522,   523,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     0,    36,    37,    38,    39,    40,    41,    42,    43,
     174,    45,    46,    47,    48,    49,   412,    51,   749,    53,
       0,     0,     0,     0,    55,     0,     0,    56,     0,    57,
       0,    58,     0,     0,     0,    59,    60,    61,     0,    62,
      63,     0,    64,    65,    66,     0,    67,     0,    68,    69,
      70,    71,     8,    72,     9,    10,    11,     0,     0,     0,
      12,     0,    13,    14,     0,     0,     0,    15,    16,     0,
       0,     0,    17,     0,     0,     0,     0,     0,     0,     0,
       0,    18,     0,     0,     0,    19,   615,     0,    20,     0,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,     0,    55,     0,     0,
      56,     0,    57,     0,    58,     0,     0,     0,    59,    60,
      61,     0,    62,    63,     0,    64,    65,    66,     0,    67,
       0,    68,    69,    70,    71,   698,    72,     9,    10,    11,
       0,     0,     0,    12,     0,    13,    14,     0,     0,     0,
       0,    16,     0,     0,     0,    17,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,     0,    19,     0,
       0,    20,     0,    39,    40,    41,    42,     0,   174,    45,
      46,    47,    48,    49,     0,    51,     0,    53,     0,   173,
      21,     0,     0,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     0,    36,    37,
      38,    39,    40,    41,    42,     0,   174,    45,    46,    47,
      48,    49,   175,    51,     0,    53,     0,     0,     0,     0,
      55,     0,     0,    56,     0,    57,     0,    58,     0,     0,
       0,    59,    60,    61,     0,    62,    63,     0,    64,    65,
      66,     0,    67,     0,    68,    69,    70,    71,     8,    72,
       9,    10,    11,     0,     0,     0,    12,     0,    13,    14,
       0,     0,     0,     0,    16,     0,   499,     0,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    19,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       0,    36,    37,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   162,     0,     0,     0,     0,
       0,     0,     0,    55,     0,     0,    56,     0,    57,     0,
      58,     0,     0,     0,    59,    60,    61,     0,    62,    63,
       0,    64,    65,    66,     0,    67,     0,    68,    69,    70,
      71,     0,    72,     9,    10,    11,     0,     0,     0,    12,
       0,    13,    14,     0,     0,     0,    15,    16,     0,     0,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
      18,     0,     0,     0,    19,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,     0,     0,     0,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,     0,    55,     0,     0,    56,
       0,    57,     0,    58,     0,     0,     0,    59,    60,    61,
       0,    62,    63,     0,    64,    65,    66,     0,    67,     0,
      68,    69,    70,    71,     0,    72,     9,    10,    11,     0,
       0,     0,    12,     0,    13,    14,     0,     0,     0,    15,
      16,     0,     0,     0,    17,     0,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,     0,    19,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,     0,    36,    37,    38,
      39,    40,    41,    42,     0,   174,    45,    46,    47,    48,
      49,   175,    51,     0,    53,     0,     0,     0,     0,    55,
       0,     0,    56,     0,    57,     0,    58,     0,     0,     0,
      59,    60,    61,     0,    62,    63,     0,    64,    65,    66,
       0,    67,     0,    68,    69,    70,    71,     0,    72,     9,
      10,    11,     0,     0,     0,    12,     0,    13,    14,     0,
       0,     0,    15,    16,     0,     0,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,   748,     0,     0,     0,
      19,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,     0,
      36,    37,    38,    39,    40,    41,    42,     0,   174,    45,
      46,    47,    48,    49,   175,    51,     0,    53,     0,     0,
       0,     0,    55,     0,     0,    56,     0,    57,     0,    58,
       0,     0,     0,    59,    60,    61,     0,    62,    63,     0,
      64,    65,    66,     0,    67,     0,    68,    69,    70,    71,
       0,    72,     9,    10,    11,     0,     0,     0,    12,     0,
      13,    14,     0,     0,     0,     0,    16,     0,     0,     0,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   173,    21,     0,     0,     0,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,     0,    36,    37,    38,    39,    40,    41,    42,
       0,   174,    45,    46,    47,    48,    49,   175,    51,     0,
      53,     0,     0,     0,     0,    55,     0,     0,    56,     0,
      57,     0,    58,     0,     0,     0,    59,    60,    61,     0,
      62,    63,     0,    64,    65,    66,     0,    67,     0,    68,
      69,    70,    71,     0,    72,     9,    10,    11,     0,     0,
       0,    12,     0,    13,    14,     0,   409,     0,     0,    16,
       0,     0,     0,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   410,    34,     0,    36,   411,    38,    39,
      40,    41,    42,     0,   174,    45,    46,    47,    48,    49,
     412,    51,     0,    53,     0,     0,     0,     0,    55,     0,
       0,    56,     0,    57,     0,    58,     0,     0,     0,    59,
      60,    61,     0,    62,    63,     0,    64,   413,    66,     0,
      67,     0,    68,    69,    70,    71,     0,    72,     9,    10,
      11,     0,     0,     0,    12,     0,    13,    14,     0,   604,
       0,     0,    16,     0,     0,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    19,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     0,    36,
      37,    38,    39,    40,    41,    42,     0,   174,    45,    46,
      47,    48,    49,   175,    51,     0,    53,     0,     0,     0,
       0,    55,     0,     0,    56,     0,    57,     0,    58,     0,
       0,     0,    59,    60,    61,     0,    62,    63,     0,    64,
     413,    66,     0,    67,     0,    68,    69,    70,    71,     0,
      72,     9,    10,    11,     0,     0,     0,    12,     0,    13,
      14,     0,     0,     0,     0,    16,     0,     0,     0,    17,
       0,     0,     0,     0,     0,     0,     0,     0,    18,     0,
       0,     0,    19,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     0,    36,    37,    38,    39,    40,    41,    42,     0,
     174,    45,    46,    47,    48,    49,   175,    51,     0,    53,
       0,     0,     0,     0,    55,     0,     0,    56,     0,    57,
       0,    58,     0,     0,     0,    59,    60,    61,     0,    62,
      63,     0,    64,    65,    66,     0,    67,     0,    68,    69,
      70,    71,     0,    72,     9,    10,    11,     0,     0,     0,
      12,     0,    13,    14,     0,     0,     0,     0,    16,     0,
       0,     0,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   410,    34,     0,    36,   411,    38,    39,    40,
      41,    42,     0,   174,    45,    46,    47,    48,    49,   412,
      51,     0,    53,     0,     0,     0,     0,    55,     0,     0,
      56,     0,    57,     0,    58,     0,     0,     0,    59,    60,
      61,     0,    62,    63,     0,    64,   413,    66,     0,    67,
       0,    68,    69,    70,    71,     0,    72,     9,    10,    11,
       0,     0,     0,    12,     0,    13,    14,     0,     0,     0,
       0,    16,     0,     0,     0,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     0,    36,    37,
      38,    39,    40,    41,    42,     0,   174,    45,    46,    47,
      48,    49,   175,    51,     0,    53,     0,     0,     0,     0,
      55,     0,     0,    56,     0,    57,     0,    58,     0,     0,
       0,    59,    60,    61,     0,    62,    63,     0,    64,   413,
      66,     0,    67,     0,    68,    69,    70,    71,     0,    72,
       9,    10,    11,     0,     0,     0,    12,     0,    13,    14,
       0,     0,     0,     0,    16,     0,     0,     0,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    19,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       0,    36,    37,    38,    39,    40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   162,     0,     0,     0,     0,
       0,     0,     0,    55,     0,     0,    56,     0,    57,     0,
      58,     0,     0,     0,    59,    60,    61,     0,    62,    63,
       0,    64,     0,    66,     0,    67,     0,    68,    69,    70,
      71,     0,    72,     9,    10,    11,     0,     0,     0,    12,
       0,    13,    14,     0,     0,     0,     0,    16,     0,   499,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,     0,     0,     0,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,     0,    36,    37,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   162,     0,
       0,     0,     0,     0,     0,     0,    55,     0,     0,    56,
       0,    57,     0,    58,     0,     0,     0,    59,    60,    61,
       0,    62,    63,     0,    64,    65,    66,     0,    67,     0,
      68,    69,    70,    71,     0,    72,     9,    10,    11,     0,
       0,     0,    12,     0,    13,    14,     0,     0,     0,    15,
      16,     0,     0,     0,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    19,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,     0,    36,    37,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   162,     0,     0,     0,     0,     0,     0,     0,    55,
       0,     0,    56,     0,    57,     0,    58,     0,     0,     0,
      59,    60,    61,     0,    62,    63,     0,    64,    65,    66,
       0,    67,     0,    68,    69,    70,    71,     0,    72,     9,
      10,    11,     0,     0,     0,    12,     0,    13,    14,     0,
       0,     0,     0,    16,     0,     0,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,     0,
      36,    37,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   162,     0,     0,     0,     0,     0,
       0,     0,    55,     0,     0,    56,     0,    57,     0,    58,
       0,     0,     0,    59,    60,    61,     0,    62,    63,     0,
      64,    65,    66,     0,    67,     0,    68,    69,    70,    71,
       0,    72,     9,    10,    11,     0,     0,     0,    12,     0,
      13,    14,     0,     0,     0,     0,    16,     0,     0,     0,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,     0,    36,    37,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   162,     0,     0,
       0,     0,     0,     0,     0,    55,     0,     0,    56,     0,
      57,     0,    58,     0,     0,     0,    59,    60,    61,     0,
      62,    63,     0,    64,   413,    66,     0,    67,     0,    68,
      69,    70,    71,     0,    72,     9,    10,    11,     0,     0,
       0,    12,     0,    13,    14,     0,     0,     0,     0,    16,
     772,     0,     0,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,     0,    36,    37,    38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     162,     0,     0,     0,     0,     0,     0,     0,    55,     0,
       0,    56,     0,    57,     0,    58,     0,     0,     0,    59,
      60,    61,     0,    62,    63,     0,    64,     0,    66,     0,
      67,     0,    68,    69,    70,    71,     0,    72,     9,    10,
      11,     0,     0,     0,    12,     0,    13,    14,     0,     0,
       0,     0,    16,     0,     0,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    19,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     0,    36,
      37,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   162,     0,     0,     0,     0,     0,     0,
       0,    55,     0,     0,    56,     0,    57,     0,    58,     0,
       0,     0,    59,    60,    61,     0,    62,    63,     0,    64,
       0,    66,     0,    67,     0,    68,    69,    70,    71,     0,
      72,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,     0,   251,     0,     0,     0,   252,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,    11,     0,    21,     0,    12,     0,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     0,    36,    37,    38,    39,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   229,     0,    13,    14,
       0,     0,     0,     0,     0,     0,     0,   276,    17,     0,
       0,     0,     0,    21,     0,   277,     0,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      70,    36,    37,    38,    39,    40,     0,     0,     0,     0,
       0,     0,     0,    21,     0,   229,     0,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       0,    36,    37,    38,     0,     0,     0,     0,   203,     0,
       0,     0,     0,     0,     0,   162,    17,     0,     0,    70,
       0,     0,     0,    55,     0,     0,    56,     0,    57,     0,
      58,     0,     0,     0,    59,    60,    61,     0,    62,    63,
       0,    64,     0,    66,     0,    67,     0,    68,    69,    70,
      71,    21,    72,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     0,    44,    45,    46,
      47,    48,    49,   204,    51,    52,    53,    54,   406,     0,
       0,     0,     0,     0,     0,     0,    17,     0,     0,     0,
       0,     0,     0,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    70,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     0,    36,
      37,    38,    39,    40,    41,    42,     0,   174,    45,    46,
      47,    48,    49,   386,    51,    17,    53,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    70,     0,     0,
      21,     0,     0,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   709,    36,    37,
      38,    39,    40,    41,    42,     0,   174,    45,    46,    47,
      48,    49,   792,    51,    52,    53,    54,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    60,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    70,     0,     0,     0,
       0,     0,    21,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,     0,
      36,    37,    38,    39,    40,    41,    42,     0,   174,    45,
      46,    47,    48,    49,   386,    51,    17,    53,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    60,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    17,     0,     0,    70,     0,
       0,    21,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     0,    36,
      37,    38,    39,    40,     0,     0,     0,     0,     0,     0,
      21,   744,     0,   229,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     0,    36,    37,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   382,     0,     0,    21,     0,    70,     0,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    60,    36,    37,    38,    39,    40,     0,     0,
       0,     0,     0,     0,    21,     0,    70,   229,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     0,
      44,    45,    46,    47,    48,    49,   204,    51,    52,    53,
      54,    70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
      70,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   709,    36,    37,    38,    39,    40,
      41,    42,     0,   174,    45,    46,    47,    48,    49,   792,
      51,    52,    53,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,     0,     0,    60,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    70,    36,    37,    38,    39,    40,    41,
      42,     0,   174,    45,    46,    47,    48,    49,   386,    51,
       0,    53,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,    60,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    70,    36,    37,    38,    39,    40,     0,     0,
       0,     0,     0,     0,    21,     0,     0,   229,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     0,    36,    37,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   382,     0,     0,     0,
       0,    70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70
};

static const yytype_int16 yycheck[] =
{
       6,    43,     7,    17,    50,   121,    17,    50,   121,    50,
     121,    17,    50,   146,    17,   202,   445,   302,   146,   179,
     203,    52,    17,    15,   424,   341,   116,    94,   203,   156,
     626,   112,   467,   114,   499,   435,    44,    77,   626,   228,
     470,   715,   634,   638,    76,    77,   594,   232,    76,    77,
      88,   328,   119,   626,   217,   520,   468,   638,   373,    65,
      50,    59,    60,   561,   464,    88,   638,   383,    59,    22,
      50,    88,   638,   524,     5,   343,    67,   528,    31,     6,
      11,   323,     1,    76,    77,   116,   622,     1,   413,     1,
     626,   108,   281,   278,    56,   284,     5,   365,   646,   122,
       9,    20,   638,    16,     0,   122,    19,    19,    17,   176,
      34,    35,    21,    37,   203,   121,   162,    31,    16,   162,
      31,    19,   796,    50,   162,   721,    88,    33,    52,   175,
     646,   805,   175,    31,   682,    59,    60,   175,    23,    16,
     303,   304,    19,    56,    55,   191,   388,    56,    54,     0,
     156,   128,     5,    30,    31,    40,   751,    88,   204,   657,
     122,   204,     1,   204,   712,    35,   682,   841,   179,   180,
     447,    41,   218,   179,   609,    88,   179,   108,   218,    88,
     220,    20,   162,   229,   179,   190,   217,   219,   220,   215,
     641,   122,   203,   125,   121,   175,   712,    20,   610,   192,
     193,   613,   387,   877,   878,   879,    20,    30,   203,   122,
     806,   803,    16,   122,   204,    19,    30,   225,   806,   117,
     894,   232,   896,   406,   204,   149,   219,   220,   823,   156,
      21,   406,   392,   806,   232,    88,   551,   702,   218,   237,
     117,   566,   823,   568,   290,   570,   237,    11,   175,   424,
     296,   823,   788,   442,     9,    10,   296,   823,    13,    14,
     435,   857,   697,   353,    19,    20,   696,   278,    14,   122,
     806,    14,   303,   304,   355,    13,   203,   204,    14,   679,
     278,    21,   409,   695,   802,    31,   804,   823,    31,   464,
      14,    15,   216,   217,    23,    31,    19,    19,    36,   388,
      38,    56,   226,    19,   228,    13,   352,    31,   232,    31,
     290,    40,   741,   237,    19,    31,   296,   406,   313,   314,
      20,   324,   353,    13,    88,    13,   844,    59,    60,   645,
      19,    31,    87,    56,   340,   424,   382,   343,    20,   382,
     386,    35,    31,   386,   108,    20,   435,    41,    30,   341,
      20,    56,   398,    13,   278,   401,    31,   281,   122,   365,
     284,    31,   197,    81,   370,    88,   412,   202,   780,   412,
      88,   377,   352,   379,   412,   464,   387,   388,   384,   303,
     304,   392,   510,    88,   139,   574,   392,   562,   394,   392,
     573,   383,    15,   388,   399,   406,    19,   392,   573,   122,
       5,   117,   382,   409,     9,   137,   386,   684,   685,    13,
       5,   406,    17,   424,     9,   692,   693,   122,   485,   486,
     448,   449,   468,    56,   435,   180,     9,   453,   468,   424,
     470,   442,   412,   459,   719,    20,    11,   469,   470,   445,
     435,   467,   453,     8,   769,   770,    31,   636,   459,    10,
     374,    56,   379,   464,     1,   448,   449,     5,    39,   386,
       5,    56,   232,    19,    77,    78,    17,   237,   655,   464,
      21,    30,   561,    15,    30,    31,   469,   470,     1,   406,
     404,    56,   409,    88,   573,   412,    18,   411,   468,    56,
      57,    58,    59,    88,   226,    17,   228,   424,   816,    21,
     232,   819,   115,   821,   679,   237,     3,     4,   435,    56,
      57,    58,    59,    88,   310,   311,   312,   122,   442,    17,
      31,    88,    31,    21,    91,   571,    24,   122,   539,   575,
       5,     6,     7,   108,    32,     9,    34,   464,    22,    37,
      88,    88,   547,    15,    91,    13,   278,   122,   586,   281,
     561,    99,   284,   308,   309,   122,    19,   583,    19,   107,
     108,   117,   573,    13,   610,    11,   561,   613,   596,   597,
     596,   597,   583,   613,   122,   122,    42,    43,   573,    30,
     312,    21,   742,    18,   508,   611,    30,    31,    77,    78,
     679,   387,     3,     4,     3,     4,   638,   874,     3,     4,
     524,   886,   594,   617,   528,   360,   617,   531,    30,    31,
      56,   617,     3,     4,   617,    22,   622,   623,    19,   735,
     626,   754,   617,   628,   813,     5,   754,    73,   360,    75,
     610,    16,   638,   613,     3,     4,    20,   369,   751,     5,
     751,    56,    88,    30,    31,   122,   573,     3,     4,   695,
     574,    30,    31,   645,   646,   387,    71,    72,    30,    74,
      75,    76,   108,     1,   710,   303,   304,   710,   679,   710,
     696,   717,   710,    88,   455,   456,   122,    13,    14,   315,
     316,   687,   798,     9,   679,   699,   321,   322,   699,     8,
     682,   559,   560,   699,    10,    39,   699,    71,   703,   626,
      36,    15,    38,   708,   699,   629,    15,   122,    15,     1,
     442,   638,   636,    30,    22,    30,    14,   641,   749,    14,
     712,    17,    95,    14,    14,    18,    11,    16,     5,   735,
     710,   742,    50,    19,   780,   741,   742,    20,    20,   742,
      34,    35,   747,    37,    16,   751,   792,   742,    21,   792,
      31,   792,   679,    15,     1,    20,    50,     9,    52,    30,
      30,    21,    21,    50,    22,    59,    60,    31,    18,    11,
      21,    56,    59,    60,   128,    21,   128,    21,    21,   128,
       1,   823,   788,   710,   539,   709,    20,    16,    18,   800,
      75,   802,   798,   804,   800,    31,   802,   800,   804,   802,
     806,   804,    20,    88,    31,   800,    30,   802,   735,   804,
     816,    56,   792,   819,    30,   821,    16,   823,    21,   113,
      21,   826,   116,   108,   751,   749,    71,    72,    21,    74,
      75,    76,   837,   844,    21,    16,    31,   122,   844,     1,
     128,   844,   574,    88,   162,    16,    18,    22,    22,   844,
     128,     1,    22,    22,     1,   149,    15,   175,    34,    35,
      16,    37,   119,   108,    30,   792,    30,    22,   162,    22,
      31,   798,     1,   191,    31,   162,    52,   122,     1,   806,
      20,   175,    21,    59,    60,    22,   204,    31,   175,   813,
     203,    22,    22,     1,    16,     1,   823,   191,    30,    20,
     218,   741,    11,    22,   636,   102,    30,    22,    62,    76,
     204,   229,   453,    62,   326,   325,    76,   204,   421,   563,
     567,   329,   216,   217,   218,   564,   806,   403,   114,   113,
     379,   113,   226,   194,   228,   229,   114,   113,   232,   226,
     116,   228,   229,   237,   399,   232,   547,    56,   180,   583,
     237,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    59,    60,   377,   327,   788,   702,   823,   751,
     629,   821,   290,   149,    11,   278,   531,   573,   296,    88,
     679,   464,    -1,    -1,   278,    -1,    -1,   281,    -1,    -1,
     284,   278,    -1,    -1,   281,    -1,    -1,   284,    -1,   108,
      -1,    -1,    -1,    -1,   317,   318,   319,   320,    -1,   303,
     304,    -1,    -1,   122,    -1,   112,   192,   193,    -1,    56,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,   352,    -1,    -1,    -1,    -1,    -1,
     216,   217,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,
     226,    88,   228,    -1,    56,    -1,   232,    -1,   352,   353,
      -1,   237,    -1,    -1,   382,   352,    -1,    -1,   386,    71,
      72,   108,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
     374,   813,    -1,   401,    -1,   122,    88,    -1,   382,    -1,
      -1,    -1,   386,   406,   412,   382,    -1,    -1,    -1,   386,
     413,    -1,   278,    -1,    -1,   281,   108,    -1,   284,    -1,
     404,   424,    -1,    -1,    -1,    -1,    -1,   411,   412,    -1,
     122,    -1,   435,    -1,    -1,   412,    56,   303,   304,   226,
      -1,   228,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,
     237,    71,    72,    -1,    74,    75,    76,    -1,   442,    -1,
     468,   464,    -1,    56,    -1,   442,    -1,    -1,    88,   453,
      -1,    -1,    -1,    -1,    -1,   459,    -1,    -1,    71,    72,
      -1,    74,    75,    76,   468,   469,    -1,   353,   108,    -1,
      -1,   278,    -1,    -1,   281,    88,    -1,   284,    -1,    -1,
      -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,   374,    -1,
      -1,    -1,    -1,    -1,    -1,   108,   303,   304,    -1,    -1,
      -1,    -1,    -1,    -1,   508,    -1,    -1,    -1,    -1,   122,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   404,    -1,
     524,    -1,    -1,    -1,   528,   411,    -1,   531,    -1,    -1,
      -1,    -1,    -1,   556,   557,   558,   559,   560,   561,   562,
     563,   564,    -1,   566,   567,   568,    11,   570,   355,    -1,
     573,    -1,    -1,    -1,    -1,    -1,   442,    -1,    -1,    -1,
      -1,    -1,   448,   449,    -1,    -1,    -1,   453,    -1,    -1,
     574,    -1,    -1,   459,    -1,    -1,    -1,   574,    -1,   583,
      -1,    -1,   610,   469,   470,   613,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,   610,   611,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      -1,    11,   508,    88,    -1,   629,    -1,    -1,    -1,    -1,
      -1,    -1,   636,    -1,   657,   442,    -1,   641,   524,   636,
      -1,    -1,   528,   108,    -1,   531,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   679,   122,    -1,    -1,
     467,   468,   469,   470,    -1,   472,    56,   695,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    -1,   710,    -1,    -1,    -1,    -1,    -1,   574,    -1,
      -1,   695,    -1,    -1,    -1,    -1,    -1,   583,    88,    -1,
      -1,    -1,    -1,    -1,    15,   709,   710,    -1,    -1,    -1,
     596,   597,    23,   710,     5,    -1,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,   611,    17,    -1,    -1,    40,
      21,    -1,   122,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   629,    -1,   749,   769,   770,    -1,    -1,
     636,    -1,   780,    -1,    -1,   641,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   792,    56,    -1,   574,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    -1,    74,    75,    76,    77,    78,   792,     5,
      -1,    -1,    -1,     9,    -1,   792,    -1,    88,    -1,    -1,
     607,    17,   609,   610,   611,    -1,   613,    -1,    -1,   813,
     696,    -1,    -1,    -1,    -1,    -1,   813,    -1,    -1,    -1,
      -1,    -1,    -1,   709,    11,    -1,    -1,    -1,    -1,   636,
      -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    -1,    74,    75,
      76,    77,    78,   749,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    -1,    -1,   695,   696,
     697,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,     1,   813,     3,     4,
       5,    -1,    -1,    -1,     9,   122,    11,    12,    88,    -1,
      -1,    -1,    17,    -1,    19,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    34,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,   780,   781,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,   813,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      -1,    96,    97,    98,    99,   100,   101,    -1,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,     1,
     125,     3,     4,     5,    -1,    -1,    -1,     9,    15,    11,
      12,    -1,    -1,    -1,    16,    17,    23,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    34,    40,    -1,    37,    -1,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    99,    -1,   101,
      -1,   103,    -1,    -1,    -1,   107,   108,   109,    -1,   111,
     112,    -1,   114,   115,   116,    -1,   118,    -1,   120,   121,
     122,   123,     1,   125,     3,     4,     5,    -1,    -1,    -1,
       9,    -1,    11,    12,    -1,    -1,    -1,    16,    17,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    34,    56,    -1,    37,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    -1,    -1,    -1,    96,    -1,    -1,
      99,    -1,   101,    -1,   103,    -1,    -1,    -1,   107,   108,
     109,    -1,   111,   112,    -1,   114,   115,   116,    -1,   118,
      -1,   120,   121,   122,   123,     1,   125,     3,     4,     5,
      -1,    -1,    -1,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    17,    -1,    -1,    -1,    21,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    34,    -1,
      -1,    37,    -1,    77,    78,    79,    80,    -1,    82,    83,
      84,    85,    86,    87,    -1,    89,    -1,    91,    -1,    55,
      56,    -1,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    -1,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    91,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    99,    -1,   101,    -1,   103,    -1,    -1,
      -1,   107,   108,   109,    -1,   111,   112,    -1,   114,   115,
     116,    -1,   118,    -1,   120,   121,   122,   123,     1,   125,
       3,     4,     5,    -1,    -1,    -1,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    17,    -1,    19,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      -1,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    -1,    99,    -1,   101,    -1,
     103,    -1,    -1,    -1,   107,   108,   109,    -1,   111,   112,
      -1,   114,   115,   116,    -1,   118,    -1,   120,   121,   122,
     123,    -1,   125,     3,     4,     5,    -1,    -1,    -1,     9,
      -1,    11,    12,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    96,    -1,    -1,    99,
      -1,   101,    -1,   103,    -1,    -1,    -1,   107,   108,   109,
      -1,   111,   112,    -1,   114,   115,   116,    -1,   118,    -1,
     120,   121,   122,   123,    -1,   125,     3,     4,     5,    -1,
      -1,    -1,     9,    -1,    11,    12,    -1,    -1,    -1,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    34,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    -1,    74,    75,    76,
      77,    78,    79,    80,    -1,    82,    83,    84,    85,    86,
      87,    88,    89,    -1,    91,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    99,    -1,   101,    -1,   103,    -1,    -1,    -1,
     107,   108,   109,    -1,   111,   112,    -1,   114,   115,   116,
      -1,   118,    -1,   120,   121,   122,   123,    -1,   125,     3,
       4,     5,    -1,    -1,    -1,     9,    -1,    11,    12,    -1,
      -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    -1,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    91,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    99,    -1,   101,    -1,   103,
      -1,    -1,    -1,   107,   108,   109,    -1,   111,   112,    -1,
     114,   115,   116,    -1,   118,    -1,   120,   121,   122,   123,
      -1,   125,     3,     4,     5,    -1,    -1,    -1,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    -1,    74,    75,    76,    77,    78,    79,    80,
      -1,    82,    83,    84,    85,    86,    87,    88,    89,    -1,
      91,    -1,    -1,    -1,    -1,    96,    -1,    -1,    99,    -1,
     101,    -1,   103,    -1,    -1,    -1,   107,   108,   109,    -1,
     111,   112,    -1,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,    -1,   125,     3,     4,     5,    -1,    -1,
      -1,     9,    -1,    11,    12,    -1,    14,    -1,    -1,    17,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    83,    84,    85,    86,    87,
      88,    89,    -1,    91,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    99,    -1,   101,    -1,   103,    -1,    -1,    -1,   107,
     108,   109,    -1,   111,   112,    -1,   114,   115,   116,    -1,
     118,    -1,   120,   121,   122,   123,    -1,   125,     3,     4,
       5,    -1,    -1,    -1,     9,    -1,    11,    12,    -1,    14,
      -1,    -1,    17,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    -1,    74,
      75,    76,    77,    78,    79,    80,    -1,    82,    83,    84,
      85,    86,    87,    88,    89,    -1,    91,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    99,    -1,   101,    -1,   103,    -1,
      -1,    -1,   107,   108,   109,    -1,   111,   112,    -1,   114,
     115,   116,    -1,   118,    -1,   120,   121,   122,   123,    -1,
     125,     3,     4,     5,    -1,    -1,    -1,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    83,    84,    85,    86,    87,    88,    89,    -1,    91,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    99,    -1,   101,
      -1,   103,    -1,    -1,    -1,   107,   108,   109,    -1,   111,
     112,    -1,   114,   115,   116,    -1,   118,    -1,   120,   121,
     122,   123,    -1,   125,     3,     4,     5,    -1,    -1,    -1,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    17,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    -1,    74,    75,    76,    77,    78,
      79,    80,    -1,    82,    83,    84,    85,    86,    87,    88,
      89,    -1,    91,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      99,    -1,   101,    -1,   103,    -1,    -1,    -1,   107,   108,
     109,    -1,   111,   112,    -1,   114,   115,   116,    -1,   118,
      -1,   120,   121,   122,   123,    -1,   125,     3,     4,     5,
      -1,    -1,    -1,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    17,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    -1,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    91,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    99,    -1,   101,    -1,   103,    -1,    -1,
      -1,   107,   108,   109,    -1,   111,   112,    -1,   114,   115,
     116,    -1,   118,    -1,   120,   121,   122,   123,    -1,   125,
       3,     4,     5,    -1,    -1,    -1,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      -1,    74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    -1,    99,    -1,   101,    -1,
     103,    -1,    -1,    -1,   107,   108,   109,    -1,   111,   112,
      -1,   114,    -1,   116,    -1,   118,    -1,   120,   121,   122,
     123,    -1,   125,     3,     4,     5,    -1,    -1,    -1,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    17,    -1,    19,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    -1,    74,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    99,
      -1,   101,    -1,   103,    -1,    -1,    -1,   107,   108,   109,
      -1,   111,   112,    -1,   114,   115,   116,    -1,   118,    -1,
     120,   121,   122,   123,    -1,   125,     3,     4,     5,    -1,
      -1,    -1,     9,    -1,    11,    12,    -1,    -1,    -1,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    -1,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    99,    -1,   101,    -1,   103,    -1,    -1,    -1,
     107,   108,   109,    -1,   111,   112,    -1,   114,   115,   116,
      -1,   118,    -1,   120,   121,   122,   123,    -1,   125,     3,
       4,     5,    -1,    -1,    -1,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    17,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    -1,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    99,    -1,   101,    -1,   103,
      -1,    -1,    -1,   107,   108,   109,    -1,   111,   112,    -1,
     114,   115,   116,    -1,   118,    -1,   120,   121,   122,   123,
      -1,   125,     3,     4,     5,    -1,    -1,    -1,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    -1,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    99,    -1,
     101,    -1,   103,    -1,    -1,    -1,   107,   108,   109,    -1,
     111,   112,    -1,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,    -1,   125,     3,     4,     5,    -1,    -1,
      -1,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    74,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    99,    -1,   101,    -1,   103,    -1,    -1,    -1,   107,
     108,   109,    -1,   111,   112,    -1,   114,    -1,   116,    -1,
     118,    -1,   120,   121,   122,   123,    -1,   125,     3,     4,
       5,    -1,    -1,    -1,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    -1,    74,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    99,    -1,   101,    -1,   103,    -1,
      -1,    -1,   107,   108,   109,    -1,   111,   112,    -1,   114,
      -1,   116,    -1,   118,    -1,   120,   121,   122,   123,    -1,
     125,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     5,    -1,    56,    -1,     9,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    -1,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    21,    -1,
      -1,    -1,    -1,    56,    -1,   107,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
     122,    74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    88,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      -1,    74,    75,    76,    -1,    -1,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    21,    -1,    -1,   122,
      -1,    -1,    -1,    96,    -1,    -1,    99,    -1,   101,    -1,
     103,    -1,    -1,    -1,   107,   108,   109,    -1,   111,   112,
      -1,   114,    -1,   116,    -1,   118,    -1,   120,   121,   122,
     123,    56,   125,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    -1,    74,
      75,    76,    77,    78,    79,    80,    -1,    82,    83,    84,
      85,    86,    87,    88,    89,    21,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,
      56,    -1,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    -1,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    83,
      84,    85,    86,    87,    88,    89,    21,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,   122,    -1,
      -1,    56,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    -1,    74,
      75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    22,    -1,    88,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    -1,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    56,    -1,   122,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,   108,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,   122,    88,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
     122,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,   108,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,   122,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,   108,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,   122,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    88,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    -1,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,
      -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   150,   209,     0,   339,   210,   338,   128,     1,     3,
       4,     5,     9,    11,    12,    16,    17,    21,    30,    34,
      37,    56,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    96,    99,   101,   103,   107,
     108,   109,   111,   112,   114,   115,   116,   118,   120,   121,
     122,   123,   125,   130,   131,   132,   134,   135,   136,   137,
     139,   140,   141,   147,   148,   149,   151,   152,   155,   158,
     159,   160,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   227,   228,   229,   231,   233,   234,   235,   236,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     259,   264,   265,   274,   275,   276,   277,   287,   288,   289,
     290,   299,   301,   305,   313,   315,   316,   321,   324,   329,
     333,   334,    88,   165,   165,   165,   165,   176,   300,   157,
     178,   180,   181,    55,    82,    88,   167,   172,   178,   227,
     255,   256,   266,   267,   268,   269,   270,   271,   165,   165,
      19,    88,   134,   135,   137,   237,    19,   137,   208,   137,
      88,   315,   147,    13,    88,   131,   134,   139,   213,   215,
     218,   227,   231,   264,   321,    11,    73,    75,    88,   134,
     135,   137,   138,   141,   142,    21,    13,   165,    13,    88,
     137,   161,   230,   231,   232,   233,   259,   265,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    17,    21,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    99,   107,   230,   306,
     314,    13,   152,   158,    13,   178,   265,    13,   133,    56,
      88,   136,   140,   159,   160,   254,    88,   136,   138,   140,
     254,   165,    17,    24,    32,    34,    37,   264,    33,    54,
       6,     7,   253,     3,     4,    42,    43,    13,    14,    36,
      38,    35,    41,     9,     8,    10,    39,    15,    23,    40,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     179,    16,    19,    31,   117,   199,   278,   280,   225,   226,
     233,    56,    88,   221,   222,   217,   226,    56,   141,   220,
     253,   216,   275,   276,    30,    31,    30,   259,   165,   258,
      31,   278,   280,   291,    16,    19,   137,    15,   212,     3,
       4,     1,    88,    23,    31,    18,    88,   253,     9,   271,
     256,    22,    31,    55,    15,    20,   238,   240,   241,   242,
     334,    88,   237,   336,    15,   208,    13,   208,   210,    14,
      71,    75,    88,   115,   169,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   227,   268,   272,   273,   316,   317,
     318,   319,   320,   330,   334,    13,   132,   137,   142,   138,
      30,   147,   230,   260,   260,    21,   164,    17,   134,   135,
     161,   162,   163,   255,   257,   161,   265,    18,    22,   255,
     257,   306,   260,   260,     3,     4,   180,    11,    88,   134,
     135,   142,   143,   144,   145,   146,   233,   142,   146,   154,
     165,   165,   166,   166,   166,   167,   167,   168,   168,   169,
     169,   169,   169,   170,   170,   171,   172,   173,   174,    19,
     282,   181,   175,   178,   300,   200,   178,   252,    16,   279,
     307,   308,    56,   165,   252,   115,   259,   331,   178,    20,
     339,    57,    58,    59,    91,   137,   302,   303,   304,    16,
      19,   286,   178,   281,   282,   211,    30,   300,   178,   255,
     257,   268,   271,   178,   131,   243,   244,    31,   238,   334,
       1,   209,   137,   212,   185,   191,    13,    36,    38,    35,
      41,     9,     8,    10,    39,    15,    23,    40,   179,   272,
      15,    71,    14,    31,    15,    15,     1,   272,   322,   323,
      30,    30,    22,   255,   260,   261,   262,   263,    14,    14,
     156,   157,   178,   181,    17,   132,   134,   135,   162,   257,
     164,   164,    14,    14,    14,   322,    18,   143,   144,    11,
      88,   134,   146,    88,   145,    56,   233,     3,     4,    20,
     283,   284,   337,    16,    20,   194,   337,   137,   309,   310,
     311,   312,    95,   326,   327,   280,    21,   292,   337,   303,
      19,    31,   303,     1,   302,    16,    15,    20,   239,   240,
     334,     1,    20,    31,    20,   339,    30,     9,   169,   169,
     169,   183,   183,   184,   268,   185,   186,   187,   191,   192,
     193,   188,   191,   191,   131,   318,   260,   131,    14,    31,
      30,   261,    17,   264,    21,    21,    22,    31,    18,   176,
     177,   182,    21,    21,    14,    88,   135,    11,     1,   153,
     267,    20,    31,   128,   281,   285,   333,   178,   128,    73,
      88,    93,    94,    97,    98,   100,   104,   105,   106,   110,
     113,   117,   119,   130,   178,   195,   196,   197,   198,   199,
     201,   204,   206,   207,   214,   227,   325,   333,    31,   334,
     311,    21,    21,   326,    22,   260,   332,   128,    30,    90,
     178,   227,   247,   274,   277,   293,   294,   295,   296,   298,
     304,   315,   333,   303,    19,   300,   182,     1,   210,    16,
      31,   323,    18,   182,   181,   181,   178,    18,   181,   181,
      88,   143,   267,   335,    30,    20,   284,   334,     3,     4,
     334,   137,    88,    30,   182,    30,    16,   194,    21,   131,
      21,   180,    21,   199,    21,    16,     3,     4,     1,   156,
     271,   328,    22,    31,   334,    30,    31,   295,    30,    31,
      30,    31,    16,     3,     4,    20,   128,   191,   191,    18,
      22,    22,    22,    22,    30,     1,    19,   128,     1,   285,
       1,    16,   194,   119,   205,   216,    30,   203,   267,    30,
     203,   326,   203,   194,   195,    31,    22,    22,   260,     1,
     178,   297,   301,   178,   301,   297,   293,   334,     1,   334,
      20,    20,    30,   194,    21,   202,   203,    22,    22,    22,
     199,    20,    30,     1,     1,   181,    30,   194,   194,   194,
      20,    20,    22,   180,   102,    30,    22,   194,   194
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   129,   130,   131,   132,   132,   132,   132,   132,   133,
     134,   134,   135,   136,   136,   137,   137,   138,   138,   139,
     139,   139,   140,   140,   140,   141,   141,   142,   142,   142,
     143,   143,   144,   144,   144,   145,   145,   146,   146,   147,
     148,   148,   148,   148,   148,   149,   149,   150,   151,   151,
     151,   151,   152,   152,   152,   153,   153,   154,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   156,   156,   157,   157,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   159,   160,   160,   160,   160,   161,   161,
     161,   162,   162,   163,   163,   164,   164,   165,   165,   166,
     166,   166,   167,   167,   167,   167,   168,   168,   168,   169,
     169,   169,   170,   170,   170,   170,   170,   171,   171,   171,
     172,   172,   173,   173,   174,   174,   175,   175,   176,   176,
     177,   177,   178,   178,   178,   178,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   180,   180,   181,
     181,   182,   183,   183,   183,   183,   184,   184,   184,   185,
     185,   186,   186,   187,   187,   188,   188,   189,   189,   190,
     190,   191,   191,   191,   192,   192,   193,   193,   194,   195,
     195,   195,   196,   196,   196,   196,   197,   197,   197,   197,
     198,   198,   198,   199,   199,   200,   200,   200,   201,   201,
     201,   202,   202,   203,   204,   204,   204,   205,   206,   206,
     206,   206,   207,   208,   208,   209,   209,   209,   210,   211,
     211,   211,   212,   212,   212,   212,   212,   213,   213,   213,
     214,   214,   215,   215,   215,   215,   215,   216,   216,   216,
     216,   217,   217,   217,   218,   218,   219,   219,   219,   220,
     220,   221,   221,   222,   222,   222,   223,   223,   223,   224,
     224,   224,   225,   225,   225,   225,   225,   226,   227,   227,
     228,   228,   228,   228,   228,   229,   229,   229,   230,   230,
     230,   231,   231,   231,   231,   232,   232,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   234,   234,
     234,   235,   236,   236,   237,   237,   237,   238,   238,   239,
     239,   240,   240,   241,   241,   242,   243,   243,   244,   245,
     245,   246,   247,   247,   248,   249,   250,   250,   251,   251,
     252,   253,   253,   254,   254,   255,   255,   255,   256,   256,
     257,   257,   258,   258,   259,   259,   260,   260,   261,   261,
     261,   262,   262,   263,   263,   263,   264,   264,   265,   266,
     266,   266,   267,   267,   268,   268,   269,   269,   269,   270,
     270,   270,   271,   271,   271,   272,   272,   272,   272,   273,
     273,   273,   274,   274,   275,   275,   275,   276,   276,   276,
     277,   277,   278,   279,   280,   281,   281,   282,   282,   282,
     282,   282,   283,   283,   284,   285,   285,   285,   286,   287,
     287,   288,   288,   288,   288,   289,   289,   289,   290,   290,
     291,   291,   291,   292,   293,   293,   293,   294,   294,   294,
     294,   294,   295,   295,   295,   295,   295,   296,   296,   296,
     297,   297,   298,   299,   299,   300,   300,   301,   301,   302,
     302,   303,   303,   303,   304,   304,   304,   305,   306,   306,
     307,   307,   308,   308,   309,   309,   310,   310,   311,   312,
     313,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   315,   315,   316,   317,   317,   318,   318,   318,   318,
     318,   318,   319,   319,   320,   320,   321,   321,   322,   322,
     323,   324,   325,   326,   326,   327,   328,   329,   329,   330,
     330,   331,   331,   332,   332,   333,   334,   335,   336,   337,
     338,   339
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     5,     4,     3,     1,     1,
       1,     2,     2,     1,     2,     1,     2,     2,     2,     1,
       1,     2,     1,     2,     2,     1,     2,     1,     1,     1,
       1,     2,     4,     2,     2,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     2,     3,     0,     1,     4,
       8,     7,     5,     4,     3,     3,     3,     3,     2,     2,
       7,     7,     7,     7,     2,     0,     1,     1,     3,     1,
       2,     2,     2,     3,     2,     2,     2,     2,     2,     1,
       2,     1,     2,     2,     3,     4,     2,     4,     2,     2,
       2,     2,     1,     3,     4,     0,     3,     1,     2,     1,
       3,     3,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       3,     1,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     1,     3,     1,     3,     2,     1,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     3,     7,     0,     2,     6,     5,     7,
       5,     0,     1,     1,     5,     7,     8,     1,     2,     2,
       3,     3,     1,     4,     9,     0,     3,     7,     2,     1,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     2,
       2,     1,     2,     2,     1,     2,     1,     1,     2,     1,
       2,     1,     2,     1,     1,     2,     1,     2,     1,     2,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     3,     2,     2,     3,     4,     1,     3,     1,
       3,     0,     3,     1,     3,     2,     1,     3,     1,     3,
       2,     5,     3,     4,     4,     5,     3,     3,     3,     3,
       1,     1,     2,     1,     2,     1,     1,     2,     1,     2,
       0,     2,     0,     2,     1,     1,     2,     2,     0,     2,
       1,     0,     1,     2,     3,     4,     2,     3,     3,     0,
       1,     2,     1,     3,     1,     3,     1,     2,     3,     1,
       3,     1,     1,     1,     2,     1,     1,     3,     2,     1,
       2,     3,     1,     1,     2,     2,     2,     2,     2,     2,
       1,     3,     3,     2,     1,     1,     1,     3,     4,     2,
       6,     8,     1,     3,     2,     1,     3,     2,     1,     2,
       4,     5,     4,     3,     2,     1,     1,     1,     3,     8,
       0,     3,     7,     2,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     3,     3,     3,
       1,     1,     2,     3,     2,     1,     5,     1,     3,     1,
       3,     1,     2,     2,     1,     1,     1,     2,     2,     2,
       0,     1,     2,     4,     1,     2,     2,     4,     4,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     4,     1,     3,     1,     3,     1,     3,
       1,     2,     1,     1,     2,     3,     5,     2,     1,     3,
       1,     4,     3,     1,     2,     5,     1,     1,     2,     1,
       2,     3,     4,     1,     3,     1,     0,     0,     0,     0,
       0,     0
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
  case 2: /* identifier_word: Identifier  */
#line 304 "CxxParser.y"
                                                                                                { (yyval.name) = (yyvsp[0].identifier); }
#line 2980 "CxxParser.cxx"
    break;

  case 4: /* id: identifier  */
#line 313 "CxxParser.y"
                                                                                                                           { (yyval.name) = YACC_NAME((yyvsp[0].name)); }
#line 2986 "CxxParser.cxx"
    break;

  case 5: /* id: identifier template_test '+' template_argument_list '>'  */
#line 314 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_TEMPLATE_NAME((yyvsp[-4].name), (yyvsp[-1].template_arguments)); }
#line 2992 "CxxParser.cxx"
    break;

  case 6: /* id: identifier template_test '+' '>'  */
#line 315 "CxxParser.y"
                                                                                                { (yyval.name) = (yyvsp[-3].name); ERRMSG("Empty template-argument-list"); }
#line 2998 "CxxParser.cxx"
    break;

  case 7: /* id: identifier template_test '-'  */
#line 316 "CxxParser.y"
                                                                                                                          { (yyval.name) = YACC_NAME((yyvsp[-2].name)); }
#line 3004 "CxxParser.cxx"
    break;

  case 9: /* template_test: '<'  */
#line 318 "CxxParser.y"
                                                                                                { template_test(); }
#line 3010 "CxxParser.cxx"
    break;

  case 10: /* global_scope: SCOPE  */
#line 319 "CxxParser.y"
                                                                                                { (yyval.is_template) = IS_DEFAULT; }
#line 3016 "CxxParser.cxx"
    break;

  case 11: /* global_scope: TEMPLATE global_scope  */
#line 320 "CxxParser.y"
                                                                                                { (yyval.is_template) = IS_TEMPLATE; }
#line 3022 "CxxParser.cxx"
    break;

  case 12: /* id_scope: id SCOPE  */
#line 321 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_NESTED_SCOPE((yyvsp[-1].name)); }
#line 3028 "CxxParser.cxx"
    break;

  case 14: /* nested_id: id_scope nested_id  */
#line 327 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_NESTED_ID((yyvsp[-1].name), (yyvsp[0].name)); }
#line 3034 "CxxParser.cxx"
    break;

  case 16: /* scoped_id: global_scope nested_id  */
#line 329 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_GLOBAL_ID((yyvsp[-1].is_template), (yyvsp[0].name)); }
#line 3040 "CxxParser.cxx"
    break;

  case 17: /* destructor_id: '~' id  */
#line 336 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_DESTRUCTOR_ID((yyvsp[0].name)); }
#line 3046 "CxxParser.cxx"
    break;

  case 18: /* destructor_id: TEMPLATE destructor_id  */
#line 337 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_SET_TEMPLATE_ID((yyvsp[0].name)); }
#line 3052 "CxxParser.cxx"
    break;

  case 21: /* special_function_id: TEMPLATE special_function_id  */
#line 340 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_SET_TEMPLATE_ID((yyvsp[0].name)); }
#line 3058 "CxxParser.cxx"
    break;

  case 23: /* nested_special_function_id: id_scope destructor_id  */
#line 342 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_NESTED_ID((yyvsp[-1].name), (yyvsp[0].name)); }
#line 3064 "CxxParser.cxx"
    break;

  case 24: /* nested_special_function_id: id_scope nested_special_function_id  */
#line 343 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_NESTED_ID((yyvsp[-1].name), (yyvsp[0].name)); }
#line 3070 "CxxParser.cxx"
    break;

  case 26: /* scoped_special_function_id: global_scope nested_special_function_id  */
#line 345 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_GLOBAL_ID((yyvsp[-1].is_template), (yyvsp[0].name)); }
#line 3076 "CxxParser.cxx"
    break;

  case 31: /* built_in_type_id: built_in_type_id built_in_type_specifier  */
#line 358 "CxxParser.y"
                                                                                                { (yyval.built_in_id) = YACC_BUILT_IN_IDS((yyvsp[-1].built_in_id), (yyvsp[0].built_in_id)); }
#line 3082 "CxxParser.cxx"
    break;

  case 32: /* pseudo_destructor_id: built_in_type_id SCOPE '~' built_in_type_id  */
#line 359 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_PSEUDO_DESTRUCTOR_ID((yyvsp[-3].built_in_id), (yyvsp[0].built_in_id)); }
#line 3088 "CxxParser.cxx"
    break;

  case 33: /* pseudo_destructor_id: '~' built_in_type_id  */
#line 360 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_PSEUDO_DESTRUCTOR_ID(0, (yyvsp[0].built_in_id)); }
#line 3094 "CxxParser.cxx"
    break;

  case 34: /* pseudo_destructor_id: TEMPLATE pseudo_destructor_id  */
#line 361 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_SET_TEMPLATE_ID((yyvsp[0].name)); }
#line 3100 "CxxParser.cxx"
    break;

  case 36: /* nested_pseudo_destructor_id: id_scope nested_pseudo_destructor_id  */
#line 363 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_NESTED_ID((yyvsp[-1].name), (yyvsp[0].name)); }
#line 3106 "CxxParser.cxx"
    break;

  case 38: /* scoped_pseudo_destructor_id: global_scope scoped_pseudo_destructor_id  */
#line 365 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_GLOBAL_ID((yyvsp[-1].is_template), (yyvsp[0].name)); }
#line 3112 "CxxParser.cxx"
    break;

  case 39: /* string: StringLiteral  */
#line 376 "CxxParser.y"
                                                                                                { (yyval.strings) = (yyvsp[0].string_literal); }
#line 3118 "CxxParser.cxx"
    break;

  case 40: /* literal: IntegerLiteral  */
#line 379 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_INTEGER_LITERAL_EXPRESSION((yyvsp[0].integer_literal)); }
#line 3124 "CxxParser.cxx"
    break;

  case 41: /* literal: CharacterLiteral  */
#line 380 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_CHARACTER_LITERAL_EXPRESSION((yyvsp[0].character_literal)); }
#line 3130 "CxxParser.cxx"
    break;

  case 42: /* literal: FloatingLiteral  */
#line 381 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_FLOATING_LITERAL_EXPRESSION((yyvsp[0].floating_literal)); }
#line 3136 "CxxParser.cxx"
    break;

  case 43: /* literal: string  */
#line 382 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_STRING_LITERAL_EXPRESSION((yyvsp[0].strings)); }
#line 3142 "CxxParser.cxx"
    break;

  case 45: /* boolean_literal: FALSE  */
#line 384 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_FALSE_EXPRESSION(); }
#line 3148 "CxxParser.cxx"
    break;

  case 46: /* boolean_literal: TRUE  */
#line 385 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_TRUE_EXPRESSION(); }
#line 3154 "CxxParser.cxx"
    break;

  case 47: /* translation_unit: declaration_seq.opt  */
#line 390 "CxxParser.y"
                                                                                                { YACC_RESULT((yyvsp[0].declarations)); }
#line 3160 "CxxParser.cxx"
    break;

  case 49: /* primary_expression: THIS  */
#line 423 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_THIS_EXPRESSION(); }
#line 3166 "CxxParser.cxx"
    break;

  case 50: /* primary_expression: suffix_decl_specified_ids  */
#line 424 "CxxParser.y"
                                                                                            { (yyval.expression) = (yyvsp[0].name); }
#line 3172 "CxxParser.cxx"
    break;

  case 52: /* abstract_expression: parenthesis_clause  */
#line 434 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_ABSTRACT_FUNCTION_EXPRESSION((yyvsp[0].parenthesised)); }
#line 3178 "CxxParser.cxx"
    break;

  case 53: /* abstract_expression: '[' expression.opt ']'  */
#line 435 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_ABSTRACT_ARRAY_EXPRESSION((yyvsp[-1].expression)); }
#line 3184 "CxxParser.cxx"
    break;

  case 54: /* abstract_expression: TEMPLATE parenthesis_clause  */
#line 436 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_SET_TEMPLATE_EXPRESSION(YACC_ABSTRACT_FUNCTION_EXPRESSION((yyvsp[0].parenthesised))); }
#line 3190 "CxxParser.cxx"
    break;

  case 55: /* type1_parameters: parameter_declaration_list ';'  */
#line 443 "CxxParser.y"
                                                                                            { (yyval.type1_parameters) = YACC_TYPE1_PARAMETERS(0, (yyvsp[-1].parameters)); }
#line 3196 "CxxParser.cxx"
    break;

  case 56: /* type1_parameters: type1_parameters parameter_declaration_list ';'  */
#line 444 "CxxParser.y"
                                                                                            { (yyval.type1_parameters) = YACC_TYPE1_PARAMETERS((yyvsp[-2].type1_parameters), (yyvsp[-1].parameters)); }
#line 3202 "CxxParser.cxx"
    break;

  case 57: /* mark_type1: %empty  */
#line 445 "CxxParser.y"
                                                                                            { (yyval.mark) = mark_type1(); }
#line 3208 "CxxParser.cxx"
    break;

  case 59: /* postfix_expression: postfix_expression parenthesis_clause mark_type1 '-'  */
#line 448 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_CALL_EXPRESSION((yyvsp[-3].expression), (yyvsp[-2].parenthesised)); }
#line 3214 "CxxParser.cxx"
    break;

  case 60: /* postfix_expression: postfix_expression parenthesis_clause mark_type1 '+' type1_parameters mark '{' error  */
#line 450 "CxxParser.y"
                                                    { yyerrok; remark_type1((yyvsp[-2].mark)); unmark(); unmark((yyvsp[-3].type1_parameters)); (yyval.expression) = YACC_TYPE1_EXPRESSION((yyvsp[-7].expression), (yyvsp[-6].parenthesised), (yyvsp[-3].type1_parameters)); }
#line 3220 "CxxParser.cxx"
    break;

  case 61: /* postfix_expression: postfix_expression parenthesis_clause mark_type1 '+' type1_parameters mark error  */
#line 452 "CxxParser.y"
                                                    { yyerrok; remark_type1((yyvsp[-4].mark)); unmark(); unmark(); (yyval.expression) = YACC_CALL_EXPRESSION((yyvsp[-6].expression), (yyvsp[-5].parenthesised)); }
#line 3226 "CxxParser.cxx"
    break;

  case 62: /* postfix_expression: postfix_expression parenthesis_clause mark_type1 '+' error  */
#line 454 "CxxParser.y"
                                                    { yyerrok; remark_type1((yyvsp[-2].mark)); unmark(); (yyval.expression) = YACC_CALL_EXPRESSION((yyvsp[-4].expression), (yyvsp[-3].parenthesised)); }
#line 3232 "CxxParser.cxx"
    break;

  case 63: /* postfix_expression: postfix_expression '[' expression.opt ']'  */
#line 455 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_ARRAY_EXPRESSION((yyvsp[-3].expression), (yyvsp[-1].expression)); }
#line 3238 "CxxParser.cxx"
    break;

  case 64: /* postfix_expression: postfix_expression '.' declarator_id  */
#line 459 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_DOT_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].name)); }
#line 3244 "CxxParser.cxx"
    break;

  case 65: /* postfix_expression: postfix_expression '.' scoped_pseudo_destructor_id  */
#line 461 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_DOT_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].name)); }
#line 3250 "CxxParser.cxx"
    break;

  case 66: /* postfix_expression: postfix_expression ARROW declarator_id  */
#line 462 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_ARROW_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].name)); }
#line 3256 "CxxParser.cxx"
    break;

  case 67: /* postfix_expression: postfix_expression ARROW scoped_pseudo_destructor_id  */
#line 464 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_ARROW_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].name)); }
#line 3262 "CxxParser.cxx"
    break;

  case 68: /* postfix_expression: postfix_expression INC  */
#line 465 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_POST_INCREMENT_EXPRESSION((yyvsp[-1].expression)); }
#line 3268 "CxxParser.cxx"
    break;

  case 69: /* postfix_expression: postfix_expression DEC  */
#line 466 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_POST_DECREMENT_EXPRESSION((yyvsp[-1].expression)); }
#line 3274 "CxxParser.cxx"
    break;

  case 70: /* postfix_expression: DYNAMIC_CAST '<' type_id '>' '(' expression ')'  */
#line 467 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_DYNAMIC_CAST_EXPRESSION((yyvsp[-4].expression), (yyvsp[-1].expression)); }
#line 3280 "CxxParser.cxx"
    break;

  case 71: /* postfix_expression: STATIC_CAST '<' type_id '>' '(' expression ')'  */
#line 468 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_STATIC_CAST_EXPRESSION((yyvsp[-4].expression), (yyvsp[-1].expression)); }
#line 3286 "CxxParser.cxx"
    break;

  case 72: /* postfix_expression: REINTERPRET_CAST '<' type_id '>' '(' expression ')'  */
#line 469 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_REINTERPRET_CAST_EXPRESSION((yyvsp[-4].expression), (yyvsp[-1].expression)); }
#line 3292 "CxxParser.cxx"
    break;

  case 73: /* postfix_expression: CONST_CAST '<' type_id '>' '(' expression ')'  */
#line 470 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_CONST_CAST_EXPRESSION((yyvsp[-4].expression), (yyvsp[-1].expression)); }
#line 3298 "CxxParser.cxx"
    break;

  case 74: /* postfix_expression: TYPEID parameters_clause  */
#line 471 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_TYPEID_EXPRESSION((yyvsp[0].parameters)); }
#line 3304 "CxxParser.cxx"
    break;

  case 75: /* expression_list.opt: %empty  */
#line 474 "CxxParser.y"
                                                                                            { (yyval.expressions) = YACC_EXPRESSIONS(0, 0); }
#line 3310 "CxxParser.cxx"
    break;

  case 77: /* expression_list: assignment_expression  */
#line 476 "CxxParser.y"
                                                                                            { (yyval.expressions) = YACC_EXPRESSIONS(0, (yyvsp[0].expression)); }
#line 3316 "CxxParser.cxx"
    break;

  case 78: /* expression_list: expression_list ',' assignment_expression  */
#line 477 "CxxParser.y"
                                                                                            { (yyval.expressions) = YACC_EXPRESSIONS((yyvsp[-2].expressions), (yyvsp[0].expression)); }
#line 3322 "CxxParser.cxx"
    break;

  case 80: /* unary_expression: INC cast_expression  */
#line 480 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_PRE_INCREMENT_EXPRESSION((yyvsp[0].expression)); }
#line 3328 "CxxParser.cxx"
    break;

  case 81: /* unary_expression: DEC cast_expression  */
#line 481 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_PRE_DECREMENT_EXPRESSION((yyvsp[0].expression)); }
#line 3334 "CxxParser.cxx"
    break;

  case 82: /* unary_expression: ptr_operator cast_expression  */
#line 482 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_POINTER_EXPRESSION((yyvsp[-1].declarator), (yyvsp[0].expression)); }
#line 3340 "CxxParser.cxx"
    break;

  case 83: /* unary_expression: suffix_decl_specified_scope star_ptr_operator cast_expression  */
#line 488 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_SCOPED_POINTER_EXPRESSION((yyvsp[-2].name), (yyvsp[-1].pointer_declarator), (yyvsp[0].expression)); }
#line 3346 "CxxParser.cxx"
    break;

  case 84: /* unary_expression: '+' cast_expression  */
#line 489 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_PLUS_EXPRESSION((yyvsp[0].expression)); }
#line 3352 "CxxParser.cxx"
    break;

  case 85: /* unary_expression: '-' cast_expression  */
#line 490 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_MINUS_EXPRESSION((yyvsp[0].expression)); }
#line 3358 "CxxParser.cxx"
    break;

  case 86: /* unary_expression: '!' cast_expression  */
#line 491 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_NOT_EXPRESSION((yyvsp[0].expression)); }
#line 3364 "CxxParser.cxx"
    break;

  case 87: /* unary_expression: '~' cast_expression  */
#line 492 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_COMPLEMENT_EXPRESSION((yyvsp[0].expression)); }
#line 3370 "CxxParser.cxx"
    break;

  case 88: /* unary_expression: SIZEOF unary_expression  */
#line 493 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_SIZEOF_EXPRESSION((yyvsp[0].expression)); }
#line 3376 "CxxParser.cxx"
    break;

  case 89: /* unary_expression: new_expression  */
#line 495 "CxxParser.y"
                                                                                            { (yyval.expression) = (yyvsp[0].new_expression); }
#line 3382 "CxxParser.cxx"
    break;

  case 90: /* unary_expression: global_scope new_expression  */
#line 496 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_GLOBAL_EXPRESSION((yyvsp[-1].is_template), (yyvsp[0].new_expression)); }
#line 3388 "CxxParser.cxx"
    break;

  case 91: /* unary_expression: delete_expression  */
#line 497 "CxxParser.y"
                                                                                            { (yyval.expression) = (yyvsp[0].delete_expression); }
#line 3394 "CxxParser.cxx"
    break;

  case 92: /* unary_expression: global_scope delete_expression  */
#line 498 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_GLOBAL_EXPRESSION((yyvsp[-1].is_template), (yyvsp[0].delete_expression)); }
#line 3400 "CxxParser.cxx"
    break;

  case 93: /* delete_expression: DELETE cast_expression  */
#line 503 "CxxParser.y"
                                                                                            { (yyval.delete_expression) = YACC_DELETE_EXPRESSION((yyvsp[0].expression)); }
#line 3406 "CxxParser.cxx"
    break;

  case 94: /* new_expression: NEW new_type_id new_initializer.opt  */
#line 504 "CxxParser.y"
                                                                                            { (yyval.new_expression) = YACC_NEW_TYPE_ID_EXPRESSION(0, (yyvsp[-1].expression), (yyvsp[0].expressions)); }
#line 3412 "CxxParser.cxx"
    break;

  case 95: /* new_expression: NEW parameters_clause new_type_id new_initializer.opt  */
#line 505 "CxxParser.y"
                                                                                            { (yyval.new_expression) = YACC_NEW_TYPE_ID_EXPRESSION((yyvsp[-2].parameters), (yyvsp[-1].expression), (yyvsp[0].expressions)); }
#line 3418 "CxxParser.cxx"
    break;

  case 96: /* new_expression: NEW parameters_clause  */
#line 506 "CxxParser.y"
                                                                                            { (yyval.new_expression) = YACC_NEW_EXPRESSION((yyvsp[0].parameters), 0, 0); }
#line 3424 "CxxParser.cxx"
    break;

  case 97: /* new_expression: NEW parameters_clause parameters_clause new_initializer.opt  */
#line 508 "CxxParser.y"
                                                                                                { (yyval.new_expression) = YACC_NEW_EXPRESSION((yyvsp[-2].parameters), (yyvsp[-1].parameters), (yyvsp[0].expressions)); }
#line 3430 "CxxParser.cxx"
    break;

  case 98: /* new_type_id: type_specifier ptr_operator_seq.opt  */
#line 512 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_TYPED_EXPRESSION((yyvsp[-1].name), (yyvsp[0].expression)); }
#line 3436 "CxxParser.cxx"
    break;

  case 99: /* new_type_id: type_specifier new_declarator  */
#line 513 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_TYPED_EXPRESSION((yyvsp[-1].name), (yyvsp[0].expression)); }
#line 3442 "CxxParser.cxx"
    break;

  case 100: /* new_type_id: type_specifier new_type_id  */
#line 514 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_TYPED_EXPRESSION((yyvsp[-1].name), (yyvsp[0].expression)); }
#line 3448 "CxxParser.cxx"
    break;

  case 101: /* new_declarator: ptr_operator new_declarator  */
#line 515 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_POINTER_EXPRESSION((yyvsp[-1].declarator), (yyvsp[0].expression)); }
#line 3454 "CxxParser.cxx"
    break;

  case 103: /* direct_new_declarator: '[' expression ']'  */
#line 517 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_ABSTRACT_ARRAY_EXPRESSION((yyvsp[-1].expression)); }
#line 3460 "CxxParser.cxx"
    break;

  case 104: /* direct_new_declarator: direct_new_declarator '[' constant_expression ']'  */
#line 518 "CxxParser.y"
                                                                                            { (yyval.expression) = YACC_ARRAY_EXPRESSION((yyvsp[-3].expression), (yyvsp[-1].expression)); }
#line 3466 "CxxParser.cxx"
    break;

  case 105: /* new_initializer.opt: %empty  */
#line 519 "CxxParser.y"
                                                                                            { (yyval.expressions) = YACC_EXPRESSIONS(0, 0); }
#line 3472 "CxxParser.cxx"
    break;

  case 106: /* new_initializer.opt: '(' expression_list.opt ')'  */
#line 520 "CxxParser.y"
                                                                                            { (yyval.expressions) = (yyvsp[-1].expressions); }
#line 3478 "CxxParser.cxx"
    break;

  case 108: /* cast_expression: abstract_expression cast_expression  */
#line 526 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_CAST_EXPRESSION((yyvsp[-1].expression), (yyvsp[0].expression)); }
#line 3484 "CxxParser.cxx"
    break;

  case 110: /* pm_expression: pm_expression DOT_STAR cast_expression  */
#line 530 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_DOT_STAR_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3490 "CxxParser.cxx"
    break;

  case 111: /* pm_expression: pm_expression ARROW_STAR cast_expression  */
#line 531 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_ARROW_STAR_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3496 "CxxParser.cxx"
    break;

  case 113: /* multiplicative_expression: multiplicative_expression star_ptr_operator pm_expression  */
#line 533 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_MULTIPLY_EXPRESSION((yyvsp[-2].expression), (yyvsp[-1].pointer_declarator), (yyvsp[0].expression)); }
#line 3502 "CxxParser.cxx"
    break;

  case 114: /* multiplicative_expression: multiplicative_expression '/' pm_expression  */
#line 534 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_DIVIDE_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3508 "CxxParser.cxx"
    break;

  case 115: /* multiplicative_expression: multiplicative_expression '%' pm_expression  */
#line 535 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_MODULUS_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3514 "CxxParser.cxx"
    break;

  case 117: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 537 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_ADD_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3520 "CxxParser.cxx"
    break;

  case 118: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 538 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_SUBTRACT_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3526 "CxxParser.cxx"
    break;

  case 120: /* shift_expression: shift_expression SHL additive_expression  */
#line 540 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_SHIFT_LEFT_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3532 "CxxParser.cxx"
    break;

  case 121: /* shift_expression: shift_expression SHR additive_expression  */
#line 541 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_SHIFT_RIGHT_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3538 "CxxParser.cxx"
    break;

  case 123: /* relational_expression: relational_expression '<' shift_expression  */
#line 543 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_LESS_THAN_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3544 "CxxParser.cxx"
    break;

  case 124: /* relational_expression: relational_expression '>' shift_expression  */
#line 544 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_GREATER_THAN_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3550 "CxxParser.cxx"
    break;

  case 125: /* relational_expression: relational_expression LE shift_expression  */
#line 545 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_LESS_EQUAL_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3556 "CxxParser.cxx"
    break;

  case 126: /* relational_expression: relational_expression GE shift_expression  */
#line 546 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_GREATER_EQUAL_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3562 "CxxParser.cxx"
    break;

  case 128: /* equality_expression: equality_expression EQ relational_expression  */
#line 548 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_EQUAL_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3568 "CxxParser.cxx"
    break;

  case 129: /* equality_expression: equality_expression NE relational_expression  */
#line 549 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_NOT_EQUAL_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3574 "CxxParser.cxx"
    break;

  case 131: /* and_expression: and_expression '&' equality_expression  */
#line 551 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_AND_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3580 "CxxParser.cxx"
    break;

  case 133: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 553 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_EXCLUSIVE_OR_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3586 "CxxParser.cxx"
    break;

  case 135: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 555 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_INCLUSIVE_OR_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3592 "CxxParser.cxx"
    break;

  case 137: /* logical_and_expression: logical_and_expression LOG_AND inclusive_or_expression  */
#line 557 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_LOGICAL_AND_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3598 "CxxParser.cxx"
    break;

  case 139: /* logical_or_expression: logical_or_expression LOG_OR logical_and_expression  */
#line 559 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_LOGICAL_OR_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3604 "CxxParser.cxx"
    break;

  case 141: /* conditional_expression: logical_or_expression '?' expression ':' assignment_expression  */
#line 562 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_CONDITIONAL_EXPRESSION((yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3610 "CxxParser.cxx"
    break;

  case 143: /* assignment_expression: logical_or_expression assignment_operator assignment_expression  */
#line 568 "CxxParser.y"
                                                                                                    { (yyval.expression) = YACC_ASSIGNMENT_EXPRESSION((yyvsp[-2].expression), (yyvsp[-1].keyword), (yyvsp[0].expression)); }
#line 3616 "CxxParser.cxx"
    break;

  case 144: /* assignment_expression: logical_or_expression '=' braced_initializer  */
#line 569 "CxxParser.y"
                                                                                                    { (yyval.expression) = YACC_ASSIGNMENT_EXPRESSION((yyvsp[-2].expression), (yyvsp[-1].keyword), (yyvsp[0].initializer_clause)); }
#line 3622 "CxxParser.cxx"
    break;

  case 157: /* expression.opt: %empty  */
#line 576 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_EXPRESSION(0); }
#line 3628 "CxxParser.cxx"
    break;

  case 160: /* expression: expression_list ',' assignment_expression  */
#line 579 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_EXPRESSION(YACC_EXPRESSIONS((yyvsp[-2].expressions), (yyvsp[0].expression))); }
#line 3634 "CxxParser.cxx"
    break;

  case 163: /* templated_relational_expression: templated_relational_expression '<' shift_expression  */
#line 585 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_LESS_THAN_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3640 "CxxParser.cxx"
    break;

  case 164: /* templated_relational_expression: templated_relational_expression LE shift_expression  */
#line 586 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_LESS_EQUAL_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3646 "CxxParser.cxx"
    break;

  case 165: /* templated_relational_expression: templated_relational_expression GE shift_expression  */
#line 587 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_GREATER_EQUAL_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3652 "CxxParser.cxx"
    break;

  case 167: /* templated_equality_expression: templated_equality_expression EQ templated_relational_expression  */
#line 589 "CxxParser.y"
                                                                                                        { (yyval.expression) = YACC_EQUAL_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3658 "CxxParser.cxx"
    break;

  case 168: /* templated_equality_expression: templated_equality_expression NE templated_relational_expression  */
#line 590 "CxxParser.y"
                                                                                                        { (yyval.expression) = YACC_NOT_EQUAL_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3664 "CxxParser.cxx"
    break;

  case 170: /* templated_and_expression: templated_and_expression '&' templated_equality_expression  */
#line 592 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_AND_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3670 "CxxParser.cxx"
    break;

  case 172: /* templated_exclusive_or_expression: templated_exclusive_or_expression '^' templated_and_expression  */
#line 595 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_EXCLUSIVE_OR_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3676 "CxxParser.cxx"
    break;

  case 174: /* templated_inclusive_or_expression: templated_inclusive_or_expression '|' templated_exclusive_or_expression  */
#line 598 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_INCLUSIVE_OR_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3682 "CxxParser.cxx"
    break;

  case 176: /* templated_logical_and_expression: templated_logical_and_expression LOG_AND templated_inclusive_or_expression  */
#line 601 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_LOGICAL_AND_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3688 "CxxParser.cxx"
    break;

  case 178: /* templated_logical_or_expression: templated_logical_or_expression LOG_OR templated_logical_and_expression  */
#line 604 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_LOGICAL_OR_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3694 "CxxParser.cxx"
    break;

  case 180: /* templated_conditional_expression: templated_logical_or_expression '?' templated_expression ':' templated_assignment_expression  */
#line 607 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_CONDITIONAL_EXPRESSION((yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3700 "CxxParser.cxx"
    break;

  case 182: /* templated_assignment_expression: templated_logical_or_expression assignment_operator templated_assignment_expression  */
#line 610 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_ASSIGNMENT_EXPRESSION((yyvsp[-2].expression), (yyvsp[-1].keyword), (yyvsp[0].expression)); }
#line 3706 "CxxParser.cxx"
    break;

  case 185: /* templated_expression: templated_expression_list ',' templated_assignment_expression  */
#line 614 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_EXPRESSION(YACC_EXPRESSIONS((yyvsp[-2].expressions), (yyvsp[0].expression))); }
#line 3712 "CxxParser.cxx"
    break;

  case 186: /* templated_expression_list: templated_assignment_expression  */
#line 615 "CxxParser.y"
                                                                                                { (yyval.expressions) = YACC_EXPRESSIONS(0, (yyvsp[0].expression)); }
#line 3718 "CxxParser.cxx"
    break;

  case 187: /* templated_expression_list: templated_expression_list ',' templated_assignment_expression  */
#line 616 "CxxParser.y"
                                                                                                     { (yyval.expressions) = YACC_EXPRESSIONS((yyvsp[-2].expressions), (yyvsp[0].expression)); }
#line 3724 "CxxParser.cxx"
    break;

  case 188: /* looping_statement: start_search looped_statement  */
#line 623 "CxxParser.y"
                                                                                                { (yyval.statement) = YACC_LINED_STATEMENT((yyvsp[0].statement), (yyvsp[-1].line)); end_search((yyval.statement)); }
#line 3730 "CxxParser.cxx"
    break;

  case 190: /* looped_statement: advance_search '+' looped_statement  */
#line 625 "CxxParser.y"
                                                                                                { (yyval.statement) = (yyvsp[0].statement); }
#line 3736 "CxxParser.cxx"
    break;

  case 191: /* looped_statement: advance_search '-'  */
#line 626 "CxxParser.y"
                                                                                                { (yyval.statement) = 0; }
#line 3742 "CxxParser.cxx"
    break;

  case 195: /* statement: try_block  */
#line 631 "CxxParser.y"
                                                                                                { (yyval.statement) = YACC_TRY_BLOCK_STATEMENT((yyvsp[0].function_body)); }
#line 3748 "CxxParser.cxx"
    break;

  case 200: /* labeled_statement: identifier_word ':' looping_statement  */
#line 636 "CxxParser.y"
                                                                                                { (yyval.statement) = YACC_LABEL_STATEMENT((yyvsp[-2].name), (yyvsp[0].statement)); }
#line 3754 "CxxParser.cxx"
    break;

  case 201: /* labeled_statement: CASE constant_expression ':' looping_statement  */
#line 637 "CxxParser.y"
                                                                                                { (yyval.statement) = YACC_CASE_STATEMENT((yyvsp[-2].expression), (yyvsp[0].statement)); }
#line 3760 "CxxParser.cxx"
    break;

  case 202: /* labeled_statement: DEFAULT ':' looping_statement  */
#line 638 "CxxParser.y"
                                                                                                { (yyval.statement) = YACC_DEFAULT_STATEMENT((yyvsp[0].statement)); }
#line 3766 "CxxParser.cxx"
    break;

  case 203: /* compound_statement: '{' statement_seq.opt '}'  */
#line 640 "CxxParser.y"
                                                                                                { (yyval.statement) = YACC_COMPOUND_STATEMENT((yyvsp[-1].statements)); }
#line 3772 "CxxParser.cxx"
    break;

  case 204: /* compound_statement: '{' statement_seq.opt looping_statement '#' bang error '}'  */
#line 641 "CxxParser.y"
                                                                                                { (yyval.statement) = (yyvsp[-5].statements); YACC_UNBANG((yyvsp[-2].bang), "Bad statement-seq."); }
#line 3778 "CxxParser.cxx"
    break;

  case 205: /* statement_seq.opt: %empty  */
#line 642 "CxxParser.y"
                                                                                                { (yyval.statements) = YACC_STATEMENTS(0, 0); }
#line 3784 "CxxParser.cxx"
    break;

  case 206: /* statement_seq.opt: statement_seq.opt looping_statement  */
#line 643 "CxxParser.y"
                                                                                                { (yyval.statements) = YACC_STATEMENTS((yyvsp[-1].statements), YACC_COMPILE_STATEMENT((yyvsp[0].statement))); }
#line 3790 "CxxParser.cxx"
    break;

  case 207: /* statement_seq.opt: statement_seq.opt looping_statement '#' bang error ';'  */
#line 644 "CxxParser.y"
                                                                                                { (yyval.statements) = (yyvsp[-5].statements); YACC_UNBANG((yyvsp[-2].bang), "Bad statement."); }
#line 3796 "CxxParser.cxx"
    break;

  case 208: /* selection_statement: IF '(' condition ')' looping_statement  */
#line 648 "CxxParser.y"
                                                                                                { (yyval.statement) = YACC_IF_STATEMENT((yyvsp[-2].condition), (yyvsp[0].statement), 0); }
#line 3802 "CxxParser.cxx"
    break;

  case 209: /* selection_statement: IF '(' condition ')' looping_statement ELSE looping_statement  */
#line 649 "CxxParser.y"
                                                                                                  { (yyval.statement) = YACC_IF_STATEMENT((yyvsp[-4].condition), (yyvsp[-2].statement), (yyvsp[0].statement)); }
#line 3808 "CxxParser.cxx"
    break;

  case 210: /* selection_statement: SWITCH '(' condition ')' looping_statement  */
#line 650 "CxxParser.y"
                                                                                                { (yyval.statement) = YACC_SWITCH_STATEMENT((yyvsp[-2].condition), (yyvsp[0].statement)); }
#line 3814 "CxxParser.cxx"
    break;

  case 211: /* condition.opt: %empty  */
#line 651 "CxxParser.y"
                                                                                                { (yyval.condition) = YACC_CONDITION(0); }
#line 3820 "CxxParser.cxx"
    break;

  case 213: /* condition: parameter_declaration_list  */
#line 653 "CxxParser.y"
                                                                                                { (yyval.condition) = YACC_CONDITION((yyvsp[0].parameters)); }
#line 3826 "CxxParser.cxx"
    break;

  case 214: /* iteration_statement: WHILE '(' condition ')' looping_statement  */
#line 656 "CxxParser.y"
                                                                                                { (yyval.statement) = YACC_WHILE_STATEMENT((yyvsp[-2].condition), (yyvsp[0].statement)); }
#line 3832 "CxxParser.cxx"
    break;

  case 215: /* iteration_statement: DO looping_statement WHILE '(' expression ')' ';'  */
#line 657 "CxxParser.y"
                                                                                                { (yyval.statement) = YACC_DO_WHILE_STATEMENT((yyvsp[-5].statement), (yyvsp[-2].expression)); }
#line 3838 "CxxParser.cxx"
    break;

  case 216: /* iteration_statement: FOR '(' for_init_statement condition.opt ';' expression.opt ')' looping_statement  */
#line 659 "CxxParser.y"
                                                                                                { (yyval.statement) = YACC_FOR_STATEMENT((yyvsp[-5].expression), (yyvsp[-4].condition), (yyvsp[-2].expression), (yyvsp[0].statement)); }
#line 3844 "CxxParser.cxx"
    break;

  case 218: /* jump_statement: BREAK ';'  */
#line 662 "CxxParser.y"
                                                                                                { (yyval.statement) = YACC_BREAK_STATEMENT(); }
#line 3850 "CxxParser.cxx"
    break;

  case 219: /* jump_statement: CONTINUE ';'  */
#line 663 "CxxParser.y"
                                                                                                { (yyval.statement) = YACC_CONTINUE_STATEMENT(); }
#line 3856 "CxxParser.cxx"
    break;

  case 220: /* jump_statement: RETURN expression.opt ';'  */
#line 664 "CxxParser.y"
                                                                                                { (yyval.statement) = YACC_RETURN_STATEMENT((yyvsp[-1].expression)); }
#line 3862 "CxxParser.cxx"
    break;

  case 221: /* jump_statement: GOTO identifier ';'  */
#line 665 "CxxParser.y"
                                                                                                { (yyval.statement) = YACC_GOTO_STATEMENT((yyvsp[-1].name)); }
#line 3868 "CxxParser.cxx"
    break;

  case 222: /* declaration_statement: block_declaration  */
#line 666 "CxxParser.y"
                                                                                                { (yyval.statement) = YACC_DECLARATION_STATEMENT((yyvsp[0].declaration)); }
#line 3874 "CxxParser.cxx"
    break;

  case 223: /* compound_declaration: '{' nest declaration_seq.opt '}'  */
#line 671 "CxxParser.y"
                                                                                                { (yyval.declarations) = (yyvsp[-1].declarations); unnest((yyvsp[-2].nest)); }
#line 3880 "CxxParser.cxx"
    break;

  case 224: /* compound_declaration: '{' nest declaration_seq.opt util looping_declaration '#' bang error '}'  */
#line 673 "CxxParser.y"
                                                                                                { (yyval.declarations) = (yyvsp[-6].declarations); unnest((yyvsp[-7].nest)); YACC_UNBANG((yyvsp[-2].bang), "Bad declaration-seq."); }
#line 3886 "CxxParser.cxx"
    break;

  case 225: /* declaration_seq.opt: %empty  */
#line 674 "CxxParser.y"
                                                                                                { (yyval.declarations) = YACC_DECLARATIONS(0, 0); }
#line 3892 "CxxParser.cxx"
    break;

  case 226: /* declaration_seq.opt: declaration_seq.opt util looping_declaration  */
#line 675 "CxxParser.y"
                                                                                                { (yyval.declarations) = YACC_DECLARATIONS((yyvsp[-2].declarations), YACC_COMPILE_DECLARATION((yyvsp[-1].utility), (yyvsp[0].declaration))); }
#line 3898 "CxxParser.cxx"
    break;

  case 227: /* declaration_seq.opt: declaration_seq.opt util looping_declaration '#' bang error ';'  */
#line 676 "CxxParser.y"
                                                                                                    { (yyval.declarations) = (yyvsp[-6].declarations); YACC_UNBANG((yyvsp[-2].bang), "Bad declaration."); }
#line 3904 "CxxParser.cxx"
    break;

  case 228: /* looping_declaration: start_search1 looped_declaration  */
#line 677 "CxxParser.y"
                                                                                                { (yyval.declaration) = YACC_LINED_DECLARATION((yyvsp[0].declaration), (yyvsp[-1].line)); end_search((yyval.declaration)); }
#line 3910 "CxxParser.cxx"
    break;

  case 230: /* looped_declaration: advance_search '+' looped_declaration  */
#line 679 "CxxParser.y"
                                                                                                { (yyval.declaration) = (yyvsp[0].declaration); }
#line 3916 "CxxParser.cxx"
    break;

  case 231: /* looped_declaration: advance_search '-'  */
#line 680 "CxxParser.y"
                                                                                                { (yyval.declaration) = 0; }
#line 3922 "CxxParser.cxx"
    break;

  case 233: /* declaration: function_definition  */
#line 682 "CxxParser.y"
                                                                                                { (yyval.declaration) = YACC_SIMPLE_DECLARATION((yyvsp[0].expression)); }
#line 3928 "CxxParser.cxx"
    break;

  case 237: /* specialised_declaration: linkage_specification  */
#line 687 "CxxParser.y"
                                                                                                { (yyval.declaration) = YACC_LINKAGE_SPECIFICATION((yyvsp[0].name)); }
#line 3934 "CxxParser.cxx"
    break;

  case 238: /* specialised_declaration: namespace_definition  */
#line 688 "CxxParser.y"
                                                                                                { (yyval.declaration) = YACC_NAMESPACE_DECLARATION((yyvsp[0].name)); }
#line 3940 "CxxParser.cxx"
    break;

  case 239: /* specialised_declaration: TEMPLATE specialised_declaration  */
#line 689 "CxxParser.y"
                                                                                                { (yyval.declaration) = YACC_SET_TEMPLATE_DECLARATION((yyvsp[0].declaration)); }
#line 3946 "CxxParser.cxx"
    break;

  case 240: /* block_declaration: simple_declaration  */
#line 690 "CxxParser.y"
                                                                                                { (yyval.declaration) = YACC_SIMPLE_DECLARATION((yyvsp[0].expression)); }
#line 3952 "CxxParser.cxx"
    break;

  case 246: /* specialised_block_declaration: TEMPLATE specialised_block_declaration  */
#line 696 "CxxParser.y"
                                                                                                { (yyval.declaration) = YACC_SET_TEMPLATE_DECLARATION((yyvsp[0].declaration)); }
#line 3958 "CxxParser.cxx"
    break;

  case 247: /* simple_declaration: ';'  */
#line 697 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_EXPRESSION(0); }
#line 3964 "CxxParser.cxx"
    break;

  case 249: /* simple_declaration: init_declarations ';'  */
#line 699 "CxxParser.y"
                                                                                                { (yyval.expression) = (yyvsp[-1].expressions); }
#line 3970 "CxxParser.cxx"
    break;

  case 250: /* simple_declaration: decl_specifier_prefix simple_declaration  */
#line 700 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_DECL_SPECIFIER_EXPRESSION((yyvsp[0].expression), (yyvsp[-1].decl_specifier_id)); }
#line 3976 "CxxParser.cxx"
    break;

  case 251: /* suffix_built_in_decl_specifier.raw: built_in_type_specifier  */
#line 715 "CxxParser.y"
                                                                                                { (yyval.name) = (yyvsp[0].built_in_id); }
#line 3982 "CxxParser.cxx"
    break;

  case 252: /* suffix_built_in_decl_specifier.raw: suffix_built_in_decl_specifier.raw built_in_type_specifier  */
#line 716 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_BUILT_IN_NAME((yyvsp[-1].name), (yyvsp[0].built_in_id)); }
#line 3988 "CxxParser.cxx"
    break;

  case 253: /* suffix_built_in_decl_specifier.raw: suffix_built_in_decl_specifier.raw decl_specifier_suffix  */
#line 717 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_DECL_SPECIFIER_NAME((yyvsp[-1].name), (yyvsp[0].decl_specifier_id)); }
#line 3994 "CxxParser.cxx"
    break;

  case 254: /* suffix_built_in_decl_specifier: suffix_built_in_decl_specifier.raw  */
#line 718 "CxxParser.y"
                                                                                                { (yyval.name) = (yyvsp[0].name); }
#line 4000 "CxxParser.cxx"
    break;

  case 255: /* suffix_built_in_decl_specifier: TEMPLATE suffix_built_in_decl_specifier  */
#line 719 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_SET_TEMPLATE_NAME((yyvsp[0].name)); }
#line 4006 "CxxParser.cxx"
    break;

  case 256: /* suffix_named_decl_specifier: scoped_id  */
#line 720 "CxxParser.y"
                                                                                                { (yyval.name) = (yyvsp[0].name); }
#line 4012 "CxxParser.cxx"
    break;

  case 257: /* suffix_named_decl_specifier: elaborate_type_specifier  */
#line 721 "CxxParser.y"
                                                                                                { (yyval.name) = (yyvsp[0].name); }
#line 4018 "CxxParser.cxx"
    break;

  case 258: /* suffix_named_decl_specifier: suffix_named_decl_specifier decl_specifier_suffix  */
#line 722 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_DECL_SPECIFIER_NAME((yyvsp[-1].name), (yyvsp[0].decl_specifier_id)); }
#line 4024 "CxxParser.cxx"
    break;

  case 259: /* suffix_named_decl_specifier.bi: suffix_named_decl_specifier  */
#line 723 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_NAME_EXPRESSION((yyvsp[0].name)); }
#line 4030 "CxxParser.cxx"
    break;

  case 260: /* suffix_named_decl_specifier.bi: suffix_named_decl_specifier suffix_built_in_decl_specifier.raw  */
#line 724 "CxxParser.y"
                                                                                                    { (yyval.name) = YACC_TYPED_NAME((yyvsp[-1].name), (yyvsp[0].name)); }
#line 4036 "CxxParser.cxx"
    break;

  case 262: /* suffix_named_decl_specifiers: suffix_named_decl_specifiers suffix_named_decl_specifier.bi  */
#line 726 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_TYPED_NAME((yyvsp[-1].name), (yyvsp[0].name)); }
#line 4042 "CxxParser.cxx"
    break;

  case 263: /* suffix_named_decl_specifiers.sf: scoped_special_function_id  */
#line 727 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_NAME_EXPRESSION((yyvsp[0].name)); }
#line 4048 "CxxParser.cxx"
    break;

  case 265: /* suffix_named_decl_specifiers.sf: suffix_named_decl_specifiers scoped_special_function_id  */
#line 729 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_TYPED_NAME((yyvsp[-1].name), (yyvsp[0].name)); }
#line 4054 "CxxParser.cxx"
    break;

  case 267: /* suffix_decl_specified_ids: suffix_built_in_decl_specifier suffix_named_decl_specifiers.sf  */
#line 731 "CxxParser.y"
                                                                                                   { (yyval.name) = YACC_TYPED_NAME((yyvsp[-1].name), (yyvsp[0].name)); }
#line 4060 "CxxParser.cxx"
    break;

  case 270: /* suffix_decl_specified_scope: suffix_built_in_decl_specifier suffix_named_decl_specifiers SCOPE  */
#line 734 "CxxParser.y"
                                                                                                      { (yyval.name) = YACC_TYPED_NAME((yyvsp[-2].name), (yyvsp[-1].name)); }
#line 4066 "CxxParser.cxx"
    break;

  case 271: /* suffix_decl_specified_scope: suffix_built_in_decl_specifier SCOPE  */
#line 735 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_NAME_EXPRESSION((yyvsp[-1].name)); }
#line 4072 "CxxParser.cxx"
    break;

  case 276: /* decl_specifier_affix: cv_qualifier  */
#line 741 "CxxParser.y"
                                                                                                { (yyval.decl_specifier_id) = (yyvsp[0].cv_qualifiers); }
#line 4078 "CxxParser.cxx"
    break;

  case 279: /* decl_specifier_prefix: TEMPLATE decl_specifier_prefix  */
#line 746 "CxxParser.y"
                                                                                                { (yyval.decl_specifier_id) = YACC_SET_TEMPLATE_DECL_SPECIFIER((yyvsp[0].decl_specifier_id)); }
#line 4084 "CxxParser.cxx"
    break;

  case 290: /* type_specifier: cv_qualifier  */
#line 758 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_CV_DECL_SPECIFIER((yyvsp[0].cv_qualifiers)); }
#line 4090 "CxxParser.cxx"
    break;

  case 294: /* elaborate_type_specifier: TEMPLATE elaborate_type_specifier  */
#line 763 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_SET_TEMPLATE_ID((yyvsp[0].name)); }
#line 4096 "CxxParser.cxx"
    break;

  case 296: /* simple_type_specifier: built_in_type_specifier  */
#line 765 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_BUILT_IN_ID_ID((yyvsp[0].built_in_id)); }
#line 4102 "CxxParser.cxx"
    break;

  case 310: /* elaborated_type_specifier: TYPENAME scoped_id  */
#line 779 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_ELABORATED_TYPE_SPECIFIER((yyvsp[-1].class_key), (yyvsp[0].name)); }
#line 4108 "CxxParser.cxx"
    break;

  case 311: /* elaborated_enum_specifier: ENUM scoped_id  */
#line 781 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_ELABORATED_TYPE_SPECIFIER((yyvsp[-1].class_key), (yyvsp[0].name)); }
#line 4114 "CxxParser.cxx"
    break;

  case 312: /* enum_specifier: ENUM scoped_id enumerator_clause  */
#line 782 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_ENUM_SPECIFIER_ID((yyvsp[-1].name), (yyvsp[0].enumerators)); }
#line 4120 "CxxParser.cxx"
    break;

  case 313: /* enum_specifier: ENUM enumerator_clause  */
#line 783 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_ENUM_SPECIFIER_ID(0, (yyvsp[0].enumerators)); }
#line 4126 "CxxParser.cxx"
    break;

  case 314: /* enumerator_clause: '{' enumerator_list_ecarb  */
#line 784 "CxxParser.y"
                                                                                                { (yyval.enumerators) = YACC_ENUMERATORS(0, 0); }
#line 4132 "CxxParser.cxx"
    break;

  case 315: /* enumerator_clause: '{' enumerator_list enumerator_list_ecarb  */
#line 785 "CxxParser.y"
                                                                                                { (yyval.enumerators) = (yyvsp[-1].enumerators); }
#line 4138 "CxxParser.cxx"
    break;

  case 316: /* enumerator_clause: '{' enumerator_list ',' enumerator_definition_ecarb  */
#line 786 "CxxParser.y"
                                                                                                { (yyval.enumerators) = (yyvsp[-2].enumerators); }
#line 4144 "CxxParser.cxx"
    break;

  case 317: /* enumerator_list_ecarb: '}'  */
#line 787 "CxxParser.y"
                                                                                                { }
#line 4150 "CxxParser.cxx"
    break;

  case 318: /* enumerator_list_ecarb: bang error '}'  */
#line 788 "CxxParser.y"
                                                                                                { YACC_UNBANG((yyvsp[-2].bang), "Bad enumerator-list."); }
#line 4156 "CxxParser.cxx"
    break;

  case 319: /* enumerator_definition_ecarb: '}'  */
#line 789 "CxxParser.y"
                                                                                                { }
#line 4162 "CxxParser.cxx"
    break;

  case 320: /* enumerator_definition_ecarb: bang error '}'  */
#line 790 "CxxParser.y"
                                                                                                { YACC_UNBANG((yyvsp[-2].bang), "Bad enumerator-definition."); }
#line 4168 "CxxParser.cxx"
    break;

  case 322: /* enumerator_definition_filler: bang error ','  */
#line 792 "CxxParser.y"
                                                                                                { YACC_UNBANG((yyvsp[-2].bang), "Bad enumerator-definition."); }
#line 4174 "CxxParser.cxx"
    break;

  case 323: /* enumerator_list_head: enumerator_definition_filler  */
#line 793 "CxxParser.y"
                                                                                                { (yyval.enumerators) = YACC_ENUMERATORS(0, 0); }
#line 4180 "CxxParser.cxx"
    break;

  case 325: /* enumerator_list: enumerator_list_head enumerator_definition  */
#line 795 "CxxParser.y"
                                                                                                { (yyval.enumerators) = YACC_ENUMERATORS((yyvsp[-1].enumerators), (yyvsp[0].enumerator)); }
#line 4186 "CxxParser.cxx"
    break;

  case 326: /* enumerator_definition: enumerator  */
#line 796 "CxxParser.y"
                                                                                                { (yyval.enumerator) = YACC_ENUMERATOR((yyvsp[0].name), 0); }
#line 4192 "CxxParser.cxx"
    break;

  case 327: /* enumerator_definition: enumerator '=' constant_expression  */
#line 797 "CxxParser.y"
                                                                                                { (yyval.enumerator) = YACC_ENUMERATOR((yyvsp[-2].name), (yyvsp[0].expression)); }
#line 4198 "CxxParser.cxx"
    break;

  case 329: /* namespace_definition: NAMESPACE scoped_id compound_declaration  */
#line 800 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_NAMESPACE_DEFINITION((yyvsp[-1].name), (yyvsp[0].declarations)); }
#line 4204 "CxxParser.cxx"
    break;

  case 330: /* namespace_definition: NAMESPACE compound_declaration  */
#line 801 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_NAMESPACE_DEFINITION(0, (yyvsp[0].declarations)); }
#line 4210 "CxxParser.cxx"
    break;

  case 331: /* namespace_alias_definition: NAMESPACE scoped_id '=' scoped_id ';'  */
#line 802 "CxxParser.y"
                                                                                                { (yyval.declaration) = YACC_NAMESPACE_ALIAS_DEFINITION((yyvsp[-3].name), (yyvsp[-1].name)); }
#line 4216 "CxxParser.cxx"
    break;

  case 332: /* using_declaration: USING declarator_id ';'  */
#line 804 "CxxParser.y"
                                                                                                { (yyval.declaration) = YACC_USING_DECLARATION(false, (yyvsp[-1].name)); }
#line 4222 "CxxParser.cxx"
    break;

  case 333: /* using_declaration: USING TYPENAME declarator_id ';'  */
#line 805 "CxxParser.y"
                                                                                                { (yyval.declaration) = YACC_USING_DECLARATION(true, (yyvsp[-1].name)); }
#line 4228 "CxxParser.cxx"
    break;

  case 334: /* using_directive: USING NAMESPACE scoped_id ';'  */
#line 807 "CxxParser.y"
                                                                                                { (yyval.declaration) = YACC_USING_DIRECTIVE((yyvsp[-1].name)); }
#line 4234 "CxxParser.cxx"
    break;

  case 335: /* asm_definition: ASM '(' string ')' ';'  */
#line 808 "CxxParser.y"
                                                                                                { (yyval.declaration) = YACC_ASM_DEFINITION((yyvsp[-2].strings)); }
#line 4240 "CxxParser.cxx"
    break;

  case 336: /* linkage_specification: EXTERN string looping_declaration  */
#line 809 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_LINKAGE_SPECIFIER((yyvsp[-1].strings), (yyvsp[0].declaration)); }
#line 4246 "CxxParser.cxx"
    break;

  case 337: /* linkage_specification: EXTERN string compound_declaration  */
#line 810 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_LINKAGE_SPECIFIER((yyvsp[-1].strings), (yyvsp[0].declarations)); }
#line 4252 "CxxParser.cxx"
    break;

  case 338: /* init_declarations: assignment_expression ',' init_declaration  */
#line 816 "CxxParser.y"
                                                                                                { (yyval.expressions) = YACC_EXPRESSIONS(YACC_EXPRESSIONS(0, (yyvsp[-2].expression)), (yyvsp[0].expression)); }
#line 4258 "CxxParser.cxx"
    break;

  case 339: /* init_declarations: init_declarations ',' init_declaration  */
#line 817 "CxxParser.y"
                                                                                                { (yyval.expressions) = YACC_EXPRESSIONS((yyvsp[-2].expressions), (yyvsp[0].expression)); }
#line 4264 "CxxParser.cxx"
    break;

  case 341: /* star_ptr_operator: '*'  */
#line 825 "CxxParser.y"
                                                                                                { (yyval.pointer_declarator) = YACC_POINTER_DECLARATOR(); }
#line 4270 "CxxParser.cxx"
    break;

  case 342: /* star_ptr_operator: star_ptr_operator cv_qualifier  */
#line 826 "CxxParser.y"
                                                                                                { (yyval.pointer_declarator) = YACC_CV_DECLARATOR((yyvsp[-1].pointer_declarator), (yyvsp[0].cv_qualifiers)); }
#line 4276 "CxxParser.cxx"
    break;

  case 343: /* nested_ptr_operator: star_ptr_operator  */
#line 827 "CxxParser.y"
                                                                                                { (yyval.declarator) = (yyvsp[0].pointer_declarator); }
#line 4282 "CxxParser.cxx"
    break;

  case 344: /* nested_ptr_operator: id_scope nested_ptr_operator  */
#line 828 "CxxParser.y"
                                                                                                { (yyval.declarator) = YACC_NESTED_DECLARATOR((yyvsp[-1].name), (yyvsp[0].declarator)); }
#line 4288 "CxxParser.cxx"
    break;

  case 345: /* ptr_operator: '&'  */
#line 829 "CxxParser.y"
                                                                                                { (yyval.declarator) = YACC_REFERENCE_DECLARATOR(); }
#line 4294 "CxxParser.cxx"
    break;

  case 346: /* ptr_operator: nested_ptr_operator  */
#line 830 "CxxParser.y"
                                                                                                { (yyval.declarator) = (yyvsp[0].declarator); }
#line 4300 "CxxParser.cxx"
    break;

  case 347: /* ptr_operator: global_scope nested_ptr_operator  */
#line 831 "CxxParser.y"
                                                                                                { (yyval.declarator) = YACC_GLOBAL_DECLARATOR((yyvsp[-1].is_template), (yyvsp[0].declarator)); }
#line 4306 "CxxParser.cxx"
    break;

  case 348: /* ptr_operator_seq: ptr_operator  */
#line 832 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_POINTER_EXPRESSION((yyvsp[0].declarator), YACC_EPSILON()); }
#line 4312 "CxxParser.cxx"
    break;

  case 349: /* ptr_operator_seq: ptr_operator ptr_operator_seq  */
#line 833 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_POINTER_EXPRESSION((yyvsp[-1].declarator), (yyvsp[0].expression)); }
#line 4318 "CxxParser.cxx"
    break;

  case 350: /* ptr_operator_seq.opt: %empty  */
#line 835 "CxxParser.y"
                                                                                                                           { (yyval.expression) = YACC_EXPRESSION(0); }
#line 4324 "CxxParser.cxx"
    break;

  case 351: /* ptr_operator_seq.opt: ptr_operator ptr_operator_seq.opt  */
#line 836 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_POINTER_EXPRESSION((yyvsp[-1].declarator), (yyvsp[0].expression)); }
#line 4330 "CxxParser.cxx"
    break;

  case 352: /* cv_qualifier_seq.opt: %empty  */
#line 838 "CxxParser.y"
                                                                                                { (yyval.cv_qualifiers) = YACC_CV_QUALIFIERS(0, 0); }
#line 4336 "CxxParser.cxx"
    break;

  case 353: /* cv_qualifier_seq.opt: cv_qualifier_seq.opt cv_qualifier  */
#line 839 "CxxParser.y"
                                                                                                { (yyval.cv_qualifiers) = YACC_CV_QUALIFIERS((yyvsp[-1].cv_qualifiers), (yyvsp[0].cv_qualifiers)); }
#line 4342 "CxxParser.cxx"
    break;

  case 356: /* type_id: type_specifier abstract_declarator.opt  */
#line 843 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_TYPED_EXPRESSION((yyvsp[-1].name), (yyvsp[0].expression)); }
#line 4348 "CxxParser.cxx"
    break;

  case 357: /* type_id: type_specifier type_id  */
#line 844 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_TYPED_EXPRESSION((yyvsp[-1].name), (yyvsp[0].expression)); }
#line 4354 "CxxParser.cxx"
    break;

  case 358: /* abstract_declarator.opt: %empty  */
#line 847 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_EPSILON(); }
#line 4360 "CxxParser.cxx"
    break;

  case 359: /* abstract_declarator.opt: ptr_operator abstract_declarator.opt  */
#line 848 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_POINTER_EXPRESSION((yyvsp[-1].declarator), (yyvsp[0].expression)); }
#line 4366 "CxxParser.cxx"
    break;

  case 361: /* direct_abstract_declarator.opt: %empty  */
#line 850 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_EPSILON(); }
#line 4372 "CxxParser.cxx"
    break;

  case 363: /* direct_abstract_declarator: direct_abstract_declarator.opt parenthesis_clause  */
#line 852 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_CALL_EXPRESSION((yyvsp[-1].expression), (yyvsp[0].parenthesised)); }
#line 4378 "CxxParser.cxx"
    break;

  case 364: /* direct_abstract_declarator: direct_abstract_declarator.opt '[' ']'  */
#line 853 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_ARRAY_EXPRESSION((yyvsp[-2].expression), 0); }
#line 4384 "CxxParser.cxx"
    break;

  case 365: /* direct_abstract_declarator: direct_abstract_declarator.opt '[' constant_expression ']'  */
#line 854 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_ARRAY_EXPRESSION((yyvsp[-3].expression), (yyvsp[-1].expression)); }
#line 4390 "CxxParser.cxx"
    break;

  case 366: /* parenthesis_clause: parameters_clause cv_qualifier_seq.opt  */
#line 857 "CxxParser.y"
                                                                                                { (yyval.parenthesised) = YACC_PARENTHESISED((yyvsp[-1].parameters), (yyvsp[0].cv_qualifiers), 0); }
#line 4396 "CxxParser.cxx"
    break;

  case 367: /* parenthesis_clause: parameters_clause cv_qualifier_seq.opt exception_specification  */
#line 858 "CxxParser.y"
                                                                                                    { (yyval.parenthesised) = YACC_PARENTHESISED((yyvsp[-2].parameters), (yyvsp[-1].cv_qualifiers), (yyvsp[0].exception_specification)); }
#line 4402 "CxxParser.cxx"
    break;

  case 368: /* parameters_clause: '(' parameter_declaration_clause ')'  */
#line 859 "CxxParser.y"
                                                                                                { (yyval.parameters) = (yyvsp[-1].parameters); }
#line 4408 "CxxParser.cxx"
    break;

  case 369: /* parameter_declaration_clause: %empty  */
#line 861 "CxxParser.y"
                                                                                                { (yyval.parameters) = YACC_PARAMETERS(0, 0); }
#line 4414 "CxxParser.cxx"
    break;

  case 371: /* parameter_declaration_clause: parameter_declaration_list ELLIPSIS  */
#line 863 "CxxParser.y"
                                                                                                { (yyval.parameters) = YACC_PARAMETERS((yyvsp[-1].parameters), YACC_ELLIPSIS_EXPRESSION()); }
#line 4420 "CxxParser.cxx"
    break;

  case 372: /* parameter_declaration_list: parameter_declaration  */
#line 864 "CxxParser.y"
                                                                                                { (yyval.parameters) = YACC_PARAMETERS(0, (yyvsp[0].parameter)); }
#line 4426 "CxxParser.cxx"
    break;

  case 373: /* parameter_declaration_list: parameter_declaration_list ',' parameter_declaration  */
#line 865 "CxxParser.y"
                                                                                                { (yyval.parameters) = YACC_PARAMETERS((yyvsp[-2].parameters), (yyvsp[0].parameter)); }
#line 4432 "CxxParser.cxx"
    break;

  case 375: /* abstract_pointer_declaration: multiplicative_expression star_ptr_operator ptr_operator_seq.opt  */
#line 873 "CxxParser.y"
                                                                                                     { (yyval.expression) = YACC_MULTIPLY_EXPRESSION((yyvsp[-2].expression), (yyvsp[-1].pointer_declarator), (yyvsp[0].expression)); }
#line 4438 "CxxParser.cxx"
    break;

  case 377: /* abstract_parameter_declaration: and_expression '&'  */
#line 875 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_AND_EXPRESSION((yyvsp[-1].expression), YACC_EPSILON()); }
#line 4444 "CxxParser.cxx"
    break;

  case 378: /* abstract_parameter_declaration: and_expression '&' abstract_pointer_declaration  */
#line 876 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_AND_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 4450 "CxxParser.cxx"
    break;

  case 380: /* special_parameter_declaration: abstract_parameter_declaration '=' assignment_expression  */
#line 878 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_ASSIGNMENT_EXPRESSION((yyvsp[-2].expression), (yyvsp[-1].keyword), (yyvsp[0].expression)); }
#line 4456 "CxxParser.cxx"
    break;

  case 381: /* special_parameter_declaration: ELLIPSIS  */
#line 879 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_ELLIPSIS_EXPRESSION(); }
#line 4462 "CxxParser.cxx"
    break;

  case 382: /* parameter_declaration: assignment_expression  */
#line 880 "CxxParser.y"
                                                                                                { (yyval.parameter) = YACC_EXPRESSION_PARAMETER((yyvsp[0].expression)); }
#line 4468 "CxxParser.cxx"
    break;

  case 383: /* parameter_declaration: special_parameter_declaration  */
#line 881 "CxxParser.y"
                                                                                                { (yyval.parameter) = YACC_EXPRESSION_PARAMETER((yyvsp[0].expression)); }
#line 4474 "CxxParser.cxx"
    break;

  case 384: /* parameter_declaration: decl_specifier_prefix parameter_declaration  */
#line 882 "CxxParser.y"
                                                                                                { (yyval.parameter) = YACC_DECL_SPECIFIER_PARAMETER((yyvsp[0].parameter), (yyvsp[-1].decl_specifier_id)); }
#line 4480 "CxxParser.cxx"
    break;

  case 385: /* templated_parameter_declaration: templated_assignment_expression  */
#line 886 "CxxParser.y"
                                                                                                { (yyval.parameter) = YACC_EXPRESSION_PARAMETER((yyvsp[0].expression)); }
#line 4486 "CxxParser.cxx"
    break;

  case 386: /* templated_parameter_declaration: templated_abstract_declaration  */
#line 887 "CxxParser.y"
                                                                                                { (yyval.parameter) = YACC_EXPRESSION_PARAMETER((yyvsp[0].expression)); }
#line 4492 "CxxParser.cxx"
    break;

  case 387: /* templated_parameter_declaration: templated_abstract_declaration '=' templated_assignment_expression  */
#line 889 "CxxParser.y"
                                                    { (yyval.parameter) = YACC_EXPRESSION_PARAMETER(YACC_ASSIGNMENT_EXPRESSION((yyvsp[-2].expression), (yyvsp[-1].keyword), (yyvsp[0].expression))); }
#line 4498 "CxxParser.cxx"
    break;

  case 388: /* templated_parameter_declaration: decl_specifier_prefix templated_parameter_declaration  */
#line 890 "CxxParser.y"
                                                                                                { (yyval.parameter) = YACC_DECL_SPECIFIER_PARAMETER((yyvsp[0].parameter), (yyvsp[-1].decl_specifier_id)); }
#line 4504 "CxxParser.cxx"
    break;

  case 390: /* templated_abstract_declaration: templated_and_expression '&'  */
#line 892 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_AND_EXPRESSION((yyvsp[-1].expression), 0); }
#line 4510 "CxxParser.cxx"
    break;

  case 391: /* templated_abstract_declaration: templated_and_expression '&' abstract_pointer_declaration  */
#line 893 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_AND_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 4516 "CxxParser.cxx"
    break;

  case 394: /* func_definition: assignment_expression function_try_block  */
#line 901 "CxxParser.y"
                                                                                        { (yyval.expression) = YACC_FUNCTION_DEFINITION((yyvsp[-1].expression), (yyvsp[0].function_body)); }
#line 4522 "CxxParser.cxx"
    break;

  case 395: /* func_definition: assignment_expression function_body  */
#line 902 "CxxParser.y"
                                                                                        { (yyval.expression) = YACC_FUNCTION_DEFINITION((yyvsp[-1].expression), (yyvsp[0].function_body)); }
#line 4528 "CxxParser.cxx"
    break;

  case 396: /* func_definition: decl_specifier_prefix func_definition  */
#line 903 "CxxParser.y"
                                                                                        { (yyval.expression) = YACC_DECL_SPECIFIER_EXPRESSION((yyvsp[0].expression), (yyvsp[-1].decl_specifier_id)); }
#line 4534 "CxxParser.cxx"
    break;

  case 397: /* ctor_definition: constructor_head function_try_block  */
#line 904 "CxxParser.y"
                                                                                        { (yyval.expression) = YACC_CTOR_DEFINITION((yyvsp[-1].expressions), (yyvsp[0].function_body)); }
#line 4540 "CxxParser.cxx"
    break;

  case 398: /* ctor_definition: constructor_head function_body  */
#line 905 "CxxParser.y"
                                                                                        { (yyval.expression) = YACC_CTOR_DEFINITION((yyvsp[-1].expressions), (yyvsp[0].function_body)); }
#line 4546 "CxxParser.cxx"
    break;

  case 399: /* ctor_definition: decl_specifier_prefix ctor_definition  */
#line 906 "CxxParser.y"
                                                                                        { (yyval.expression) = YACC_DECL_SPECIFIER_EXPRESSION((yyvsp[0].expression), (yyvsp[-1].decl_specifier_id)); }
#line 4552 "CxxParser.cxx"
    break;

  case 400: /* constructor_head: bit_field_init_declaration  */
#line 907 "CxxParser.y"
                                                                                        { (yyval.expressions) = YACC_EXPRESSIONS(0, (yyvsp[0].expression)); }
#line 4558 "CxxParser.cxx"
    break;

  case 401: /* constructor_head: constructor_head ',' assignment_expression  */
#line 908 "CxxParser.y"
                                                                                        { (yyval.expressions) = YACC_EXPRESSIONS((yyvsp[-2].expressions), (yyvsp[0].expression)); }
#line 4564 "CxxParser.cxx"
    break;

  case 402: /* function_try_block: TRY function_block handler_seq  */
#line 909 "CxxParser.y"
                                                                                        { (yyval.function_body) = YACC_TRY_FUNCTION_BLOCK((yyvsp[-1].function_body), (yyvsp[0].handlers)); }
#line 4570 "CxxParser.cxx"
    break;

  case 403: /* function_block: ctor_initializer.opt function_body  */
#line 910 "CxxParser.y"
                                                                                        { (yyval.function_body) = YACC_CTOR_FUNCTION_BLOCK((yyvsp[0].function_body), (yyvsp[-1].mem_initializers)); }
#line 4576 "CxxParser.cxx"
    break;

  case 404: /* function_body: compound_statement  */
#line 911 "CxxParser.y"
                                                                                        { (yyval.function_body) = YACC_FUNCTION_BLOCK((yyvsp[0].statement)); }
#line 4582 "CxxParser.cxx"
    break;

  case 405: /* initializer_clause: assignment_expression  */
#line 918 "CxxParser.y"
                                                                                        { (yyval.initializer_clause) = YACC_INITIALIZER_EXPRESSION_CLAUSE((yyvsp[0].expression)); }
#line 4588 "CxxParser.cxx"
    break;

  case 407: /* braced_initializer: '{' initializer_list '}'  */
#line 920 "CxxParser.y"
                                                                                        { (yyval.initializer_clause) = YACC_INITIALIZER_LIST_CLAUSE((yyvsp[-1].initializer_clauses)); }
#line 4594 "CxxParser.cxx"
    break;

  case 408: /* braced_initializer: '{' initializer_list ',' '}'  */
#line 921 "CxxParser.y"
                                                                                        { (yyval.initializer_clause) = YACC_INITIALIZER_LIST_CLAUSE((yyvsp[-2].initializer_clauses)); }
#line 4600 "CxxParser.cxx"
    break;

  case 409: /* braced_initializer: '{' '}'  */
#line 922 "CxxParser.y"
                                                                                        { (yyval.initializer_clause) = YACC_INITIALIZER_LIST_CLAUSE(0); }
#line 4606 "CxxParser.cxx"
    break;

  case 410: /* braced_initializer: '{' looping_initializer_clause '#' bang error '}'  */
#line 923 "CxxParser.y"
                                                                                        { (yyval.initializer_clause) = 0; YACC_UNBANG((yyvsp[-2].bang), "Bad initializer_clause."); }
#line 4612 "CxxParser.cxx"
    break;

  case 411: /* braced_initializer: '{' initializer_list ',' looping_initializer_clause '#' bang error '}'  */
#line 925 "CxxParser.y"
                                                                                        { (yyval.initializer_clause) = (yyvsp[-6].initializer_clauses); YACC_UNBANG((yyvsp[-2].bang), "Bad initializer_clause."); }
#line 4618 "CxxParser.cxx"
    break;

  case 412: /* initializer_list: looping_initializer_clause  */
#line 926 "CxxParser.y"
                                                                                        { (yyval.initializer_clauses) = YACC_INITIALIZER_CLAUSES(0, (yyvsp[0].initializer_clause)); }
#line 4624 "CxxParser.cxx"
    break;

  case 413: /* initializer_list: initializer_list ',' looping_initializer_clause  */
#line 927 "CxxParser.y"
                                                                                        { (yyval.initializer_clauses) = YACC_INITIALIZER_CLAUSES((yyvsp[-2].initializer_clauses), (yyvsp[0].initializer_clause)); }
#line 4630 "CxxParser.cxx"
    break;

  case 414: /* looping_initializer_clause: start_search looped_initializer_clause  */
#line 928 "CxxParser.y"
                                                                                        { (yyval.initializer_clause) = (yyvsp[0].initializer_clause); end_search((yyval.initializer_clause)); }
#line 4636 "CxxParser.cxx"
    break;

  case 416: /* looped_initializer_clause: advance_search '+' looped_initializer_clause  */
#line 930 "CxxParser.y"
                                                                                        { (yyval.initializer_clause) = (yyvsp[0].initializer_clause); }
#line 4642 "CxxParser.cxx"
    break;

  case 417: /* looped_initializer_clause: advance_search '-'  */
#line 931 "CxxParser.y"
                                                                                        { (yyval.initializer_clause) = 0; }
#line 4648 "CxxParser.cxx"
    break;

  case 418: /* colon_mark: ':'  */
#line 946 "CxxParser.y"
                                                                                        { (yyval.mark) = mark(); }
#line 4654 "CxxParser.cxx"
    break;

  case 419: /* elaborated_class_specifier: class_key scoped_id  */
#line 947 "CxxParser.y"
                                                                                        { (yyval.name) = YACC_ELABORATED_TYPE_SPECIFIER((yyvsp[-1].class_key), (yyvsp[0].name)); }
#line 4660 "CxxParser.cxx"
    break;

  case 420: /* elaborated_class_specifier: class_key scoped_id colon_mark error  */
#line 948 "CxxParser.y"
                                                                                        { (yyval.name) = YACC_ELABORATED_TYPE_SPECIFIER((yyvsp[-3].class_key), (yyvsp[-2].name)); rewind_colon((yyvsp[-1].mark), (yyval.name)); }
#line 4666 "CxxParser.cxx"
    break;

  case 421: /* class_specifier_head: class_key scoped_id colon_mark base_specifier_list '{'  */
#line 949 "CxxParser.y"
                                                                                        { unmark((yyvsp[-1].base_specifiers)); (yyval._class) = YACC_CLASS_SPECIFIER_ID((yyvsp[-4].class_key), (yyvsp[-3].name), (yyvsp[-1].base_specifiers)); }
#line 4672 "CxxParser.cxx"
    break;

  case 422: /* class_specifier_head: class_key ':' base_specifier_list '{'  */
#line 950 "CxxParser.y"
                                                                                        { (yyval._class) = YACC_CLASS_SPECIFIER_ID((yyvsp[-3].class_key), 0, (yyvsp[-1].base_specifiers)); }
#line 4678 "CxxParser.cxx"
    break;

  case 423: /* class_specifier_head: class_key scoped_id '{'  */
#line 951 "CxxParser.y"
                                                                                        { (yyval._class) = YACC_CLASS_SPECIFIER_ID((yyvsp[-2].class_key), (yyvsp[-1].name), 0); }
#line 4684 "CxxParser.cxx"
    break;

  case 424: /* class_specifier_head: class_key '{'  */
#line 952 "CxxParser.y"
                                                                                        { (yyval._class) = YACC_CLASS_SPECIFIER_ID((yyvsp[-1].class_key), 0, 0); }
#line 4690 "CxxParser.cxx"
    break;

  case 428: /* class_specifier: class_specifier_head member_specification.opt '}'  */
#line 954 "CxxParser.y"
                                                                                        { (yyval.name) = YACC_CLASS_MEMBERS((yyvsp[-2]._class), (yyvsp[-1].declarations)); }
#line 4696 "CxxParser.cxx"
    break;

  case 429: /* class_specifier: class_specifier_head member_specification.opt util looping_member_declaration '#' bang error '}'  */
#line 956 "CxxParser.y"
                                            { (yyval.name) = YACC_CLASS_MEMBERS((yyvsp[-7]._class), (yyvsp[-6].declarations)); YACC_UNBANG((yyvsp[-2].bang), "Bad member_specification.opt."); }
#line 4702 "CxxParser.cxx"
    break;

  case 430: /* member_specification.opt: %empty  */
#line 957 "CxxParser.y"
                                                                                        { (yyval.declarations) = YACC_MEMBER_DECLARATIONS(0, 0); }
#line 4708 "CxxParser.cxx"
    break;

  case 431: /* member_specification.opt: member_specification.opt util looping_member_declaration  */
#line 958 "CxxParser.y"
                                                                                        { (yyval.declarations) = YACC_MEMBER_DECLARATIONS((yyvsp[-2].declarations), YACC_COMPILE_DECLARATION((yyvsp[-1].utility), (yyvsp[0].declaration))); }
#line 4714 "CxxParser.cxx"
    break;

  case 432: /* member_specification.opt: member_specification.opt util looping_member_declaration '#' bang error ';'  */
#line 960 "CxxParser.y"
                                                                                                { (yyval.declarations) = (yyvsp[-6].declarations); YACC_UNBANG((yyvsp[-2].bang), "Bad member-declaration."); }
#line 4720 "CxxParser.cxx"
    break;

  case 433: /* looping_member_declaration: start_search looped_member_declaration  */
#line 961 "CxxParser.y"
                                                                                        { (yyval.declaration) = YACC_LINED_DECLARATION((yyvsp[0].declaration), (yyvsp[-1].line)); end_search((yyval.declaration)); }
#line 4726 "CxxParser.cxx"
    break;

  case 435: /* looped_member_declaration: advance_search '+' looped_member_declaration  */
#line 963 "CxxParser.y"
                                                                                        { (yyval.declaration) = (yyvsp[0].declaration); }
#line 4732 "CxxParser.cxx"
    break;

  case 436: /* looped_member_declaration: advance_search '-'  */
#line 964 "CxxParser.y"
                                                                                        { (yyval.declaration) = 0; }
#line 4738 "CxxParser.cxx"
    break;

  case 438: /* member_declaration: simple_member_declaration  */
#line 966 "CxxParser.y"
                                                                                        { (yyval.declaration) = YACC_SIMPLE_DECLARATION((yyvsp[0].expression)); }
#line 4744 "CxxParser.cxx"
    break;

  case 439: /* member_declaration: function_definition  */
#line 967 "CxxParser.y"
                                                                                        { (yyval.declaration) = YACC_SIMPLE_DECLARATION((yyvsp[0].expression)); }
#line 4750 "CxxParser.cxx"
    break;

  case 442: /* simple_member_declaration: ';'  */
#line 978 "CxxParser.y"
                                                                                        { (yyval.expression) = YACC_EXPRESSION(0); }
#line 4756 "CxxParser.cxx"
    break;

  case 444: /* simple_member_declaration: constructor_head ';'  */
#line 980 "CxxParser.y"
                                                                                        { (yyval.expression) = (yyvsp[-1].expressions); }
#line 4762 "CxxParser.cxx"
    break;

  case 445: /* simple_member_declaration: member_init_declarations ';'  */
#line 981 "CxxParser.y"
                                                                                        { (yyval.expression) = (yyvsp[-1].expressions); }
#line 4768 "CxxParser.cxx"
    break;

  case 446: /* simple_member_declaration: decl_specifier_prefix simple_member_declaration  */
#line 982 "CxxParser.y"
                                                                                        { (yyval.expression) = YACC_DECL_SPECIFIER_EXPRESSION((yyvsp[0].expression), (yyvsp[-1].decl_specifier_id)); }
#line 4774 "CxxParser.cxx"
    break;

  case 447: /* member_init_declarations: assignment_expression ',' member_init_declaration  */
#line 983 "CxxParser.y"
                                                                                        { (yyval.expressions) = YACC_EXPRESSIONS(YACC_EXPRESSIONS(0, (yyvsp[-2].expression)), (yyvsp[0].expression)); }
#line 4780 "CxxParser.cxx"
    break;

  case 448: /* member_init_declarations: constructor_head ',' bit_field_init_declaration  */
#line 984 "CxxParser.y"
                                                                                        { (yyval.expressions) = YACC_EXPRESSIONS((yyvsp[-2].expressions), (yyvsp[0].expression)); }
#line 4786 "CxxParser.cxx"
    break;

  case 449: /* member_init_declarations: member_init_declarations ',' member_init_declaration  */
#line 985 "CxxParser.y"
                                                                                        { (yyval.expressions) = YACC_EXPRESSIONS((yyvsp[-2].expressions), (yyvsp[0].expression)); }
#line 4792 "CxxParser.cxx"
    break;

  case 452: /* accessibility_specifier: access_specifier ':'  */
#line 990 "CxxParser.y"
                                                                                        { (yyval.declaration) = YACC_ACCESSIBILITY_SPECIFIER((yyvsp[-1].access_specifier)); }
#line 4798 "CxxParser.cxx"
    break;

  case 453: /* bit_field_declaration: assignment_expression ':' bit_field_width  */
#line 991 "CxxParser.y"
                                                                                        { (yyval.expression) = YACC_BIT_FIELD_EXPRESSION((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 4804 "CxxParser.cxx"
    break;

  case 454: /* bit_field_declaration: ':' bit_field_width  */
#line 992 "CxxParser.y"
                                                                                        { (yyval.expression) = YACC_BIT_FIELD_EXPRESSION(0, (yyvsp[0].expression)); }
#line 4810 "CxxParser.cxx"
    break;

  case 456: /* bit_field_width: logical_or_expression '?' bit_field_width ':' bit_field_width  */
#line 995 "CxxParser.y"
                                                                                          { (yyval.expression) = YACC_CONDITIONAL_EXPRESSION((yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 4816 "CxxParser.cxx"
    break;

  case 458: /* bit_field_init_declaration: bit_field_declaration '=' initializer_clause  */
#line 997 "CxxParser.y"
                                                                                        { (yyval.expression) = YACC_ASSIGNMENT_EXPRESSION((yyvsp[-2].expression), (yyvsp[-1].keyword), (yyvsp[0].initializer_clause)); }
#line 4822 "CxxParser.cxx"
    break;

  case 459: /* base_specifier_list: base_specifier  */
#line 1003 "CxxParser.y"
                                                                                        { (yyval.base_specifiers) = YACC_BASE_SPECIFIERS(0, (yyvsp[0].base_specifier)); }
#line 4828 "CxxParser.cxx"
    break;

  case 460: /* base_specifier_list: base_specifier_list ',' base_specifier  */
#line 1004 "CxxParser.y"
                                                                                        { (yyval.base_specifiers) = YACC_BASE_SPECIFIERS((yyvsp[-2].base_specifiers), (yyvsp[0].base_specifier)); }
#line 4834 "CxxParser.cxx"
    break;

  case 461: /* base_specifier: scoped_id  */
#line 1005 "CxxParser.y"
                                                                                        { (yyval.base_specifier) = YACC_BASE_SPECIFIER((yyvsp[0].name)); }
#line 4840 "CxxParser.cxx"
    break;

  case 462: /* base_specifier: access_specifier base_specifier  */
#line 1006 "CxxParser.y"
                                                                                        { (yyval.base_specifier) = YACC_ACCESS_BASE_SPECIFIER((yyvsp[0].base_specifier), (yyvsp[-1].access_specifier)); }
#line 4846 "CxxParser.cxx"
    break;

  case 463: /* base_specifier: VIRTUAL base_specifier  */
#line 1007 "CxxParser.y"
                                                                                        { (yyval.base_specifier) = YACC_VIRTUAL_BASE_SPECIFIER((yyvsp[0].base_specifier)); }
#line 4852 "CxxParser.cxx"
    break;

  case 467: /* conversion_function_id: OPERATOR conversion_type_id  */
#line 1013 "CxxParser.y"
                                                                                        { (yyval.name) = YACC_CONVERSION_FUNCTION_ID((yyvsp[0].expression)); }
#line 4858 "CxxParser.cxx"
    break;

  case 468: /* conversion_type_id: type_specifier ptr_operator_seq.opt  */
#line 1014 "CxxParser.y"
                                                                                        { (yyval.expression) = YACC_TYPED_EXPRESSION((yyvsp[-1].name), (yyvsp[0].expression)); }
#line 4864 "CxxParser.cxx"
    break;

  case 469: /* conversion_type_id: type_specifier conversion_type_id  */
#line 1015 "CxxParser.y"
                                                                                        { (yyval.expression) = YACC_TYPED_EXPRESSION((yyvsp[-1].name), (yyvsp[0].expression)); }
#line 4870 "CxxParser.cxx"
    break;

  case 470: /* ctor_initializer.opt: %empty  */
#line 1023 "CxxParser.y"
                                                                                        { (yyval.mem_initializers) = YACC_MEM_INITIALIZERS(0, 0); }
#line 4876 "CxxParser.cxx"
    break;

  case 472: /* ctor_initializer: ':' mem_initializer_list  */
#line 1025 "CxxParser.y"
                                                                                        { (yyval.mem_initializers) = (yyvsp[0].mem_initializers); }
#line 4882 "CxxParser.cxx"
    break;

  case 473: /* ctor_initializer: ':' mem_initializer_list bang error  */
#line 1026 "CxxParser.y"
                                                                                        { (yyval.mem_initializers) = (yyvsp[-2].mem_initializers); YACC_UNBANG((yyvsp[-1].bang), "Bad ctor-initializer."); }
#line 4888 "CxxParser.cxx"
    break;

  case 474: /* mem_initializer_list: mem_initializer  */
#line 1027 "CxxParser.y"
                                                                                        { (yyval.mem_initializers) = YACC_MEM_INITIALIZERS(0, (yyvsp[0].mem_initializer)); }
#line 4894 "CxxParser.cxx"
    break;

  case 475: /* mem_initializer_list: mem_initializer_list_head mem_initializer  */
#line 1028 "CxxParser.y"
                                                                                        { (yyval.mem_initializers) = YACC_MEM_INITIALIZERS((yyvsp[-1].mem_initializers), (yyvsp[0].mem_initializer)); }
#line 4900 "CxxParser.cxx"
    break;

  case 477: /* mem_initializer_list_head: mem_initializer_list bang error ','  */
#line 1030 "CxxParser.y"
                                                                                        { YACC_UNBANG((yyvsp[-2].bang), "Bad mem-initializer."); }
#line 4906 "CxxParser.cxx"
    break;

  case 478: /* mem_initializer: mem_initializer_id '(' expression_list.opt ')'  */
#line 1031 "CxxParser.y"
                                                                                        { (yyval.mem_initializer) = YACC_MEM_INITIALIZER((yyvsp[-3].name), (yyvsp[-1].expressions)); }
#line 4912 "CxxParser.cxx"
    break;

  case 480: /* operator_function_id: OPERATOR operator  */
#line 1037 "CxxParser.y"
                                                                                        { (yyval.name) = YACC_OPERATOR_FUNCTION_ID((yyvsp[0].name)); }
#line 4918 "CxxParser.cxx"
    break;

  case 481: /* operator: NEW  */
#line 1047 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_NEW_ID(); }
#line 4924 "CxxParser.cxx"
    break;

  case 482: /* operator: DELETE  */
#line 1048 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_DELETE_ID(); }
#line 4930 "CxxParser.cxx"
    break;

  case 483: /* operator: '+'  */
#line 1053 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_ADD_ID(); }
#line 4936 "CxxParser.cxx"
    break;

  case 484: /* operator: '-'  */
#line 1054 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_SUB_ID(); }
#line 4942 "CxxParser.cxx"
    break;

  case 485: /* operator: '*'  */
#line 1055 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_MUL_ID(); }
#line 4948 "CxxParser.cxx"
    break;

  case 486: /* operator: '/'  */
#line 1056 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_DIV_ID(); }
#line 4954 "CxxParser.cxx"
    break;

  case 487: /* operator: '%'  */
#line 1057 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_MOD_ID(); }
#line 4960 "CxxParser.cxx"
    break;

  case 488: /* operator: '^'  */
#line 1058 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_XOR_ID(); }
#line 4966 "CxxParser.cxx"
    break;

  case 489: /* operator: '&'  */
#line 1059 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_BIT_AND_ID(); }
#line 4972 "CxxParser.cxx"
    break;

  case 490: /* operator: '|'  */
#line 1060 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_BIT_OR_ID(); }
#line 4978 "CxxParser.cxx"
    break;

  case 491: /* operator: '~'  */
#line 1061 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_BIT_NOT_ID(); }
#line 4984 "CxxParser.cxx"
    break;

  case 492: /* operator: '!'  */
#line 1062 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_LOG_NOT_ID(); }
#line 4990 "CxxParser.cxx"
    break;

  case 493: /* operator: '='  */
#line 1063 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_ASS_ID(); }
#line 4996 "CxxParser.cxx"
    break;

  case 494: /* operator: '<'  */
#line 1064 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_LT_ID(); }
#line 5002 "CxxParser.cxx"
    break;

  case 495: /* operator: '>'  */
#line 1065 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_GT_ID(); }
#line 5008 "CxxParser.cxx"
    break;

  case 496: /* operator: ASS_ADD  */
#line 1066 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_ASS_ADD_ID(); }
#line 5014 "CxxParser.cxx"
    break;

  case 497: /* operator: ASS_SUB  */
#line 1067 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_ASS_SUB_ID(); }
#line 5020 "CxxParser.cxx"
    break;

  case 498: /* operator: ASS_MUL  */
#line 1068 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_ASS_MUL_ID(); }
#line 5026 "CxxParser.cxx"
    break;

  case 499: /* operator: ASS_DIV  */
#line 1069 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_ASS_DIV_ID(); }
#line 5032 "CxxParser.cxx"
    break;

  case 500: /* operator: ASS_MOD  */
#line 1070 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_ASS_MOD_ID(); }
#line 5038 "CxxParser.cxx"
    break;

  case 501: /* operator: ASS_XOR  */
#line 1071 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_ASS_XOR_ID(); }
#line 5044 "CxxParser.cxx"
    break;

  case 502: /* operator: ASS_AND  */
#line 1072 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_ASS_BIT_AND_ID(); }
#line 5050 "CxxParser.cxx"
    break;

  case 503: /* operator: ASS_OR  */
#line 1073 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_ASS_BIT_OR_ID(); }
#line 5056 "CxxParser.cxx"
    break;

  case 504: /* operator: SHL  */
#line 1074 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_SHL_ID(); }
#line 5062 "CxxParser.cxx"
    break;

  case 505: /* operator: SHR  */
#line 1075 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_SHR_ID(); }
#line 5068 "CxxParser.cxx"
    break;

  case 506: /* operator: ASS_SHR  */
#line 1076 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_ASS_SHR_ID(); }
#line 5074 "CxxParser.cxx"
    break;

  case 507: /* operator: ASS_SHL  */
#line 1077 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_ASS_SHL_ID(); }
#line 5080 "CxxParser.cxx"
    break;

  case 508: /* operator: EQ  */
#line 1078 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_EQ_ID(); }
#line 5086 "CxxParser.cxx"
    break;

  case 509: /* operator: NE  */
#line 1079 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_NE_ID(); }
#line 5092 "CxxParser.cxx"
    break;

  case 510: /* operator: LE  */
#line 1080 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_LE_ID(); }
#line 5098 "CxxParser.cxx"
    break;

  case 511: /* operator: GE  */
#line 1081 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_GE_ID(); }
#line 5104 "CxxParser.cxx"
    break;

  case 512: /* operator: LOG_AND  */
#line 1082 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_LOG_AND_ID(); }
#line 5110 "CxxParser.cxx"
    break;

  case 513: /* operator: LOG_OR  */
#line 1083 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_LOG_OR_ID(); }
#line 5116 "CxxParser.cxx"
    break;

  case 514: /* operator: INC  */
#line 1084 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_INC_ID(); }
#line 5122 "CxxParser.cxx"
    break;

  case 515: /* operator: DEC  */
#line 1085 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_DEC_ID(); }
#line 5128 "CxxParser.cxx"
    break;

  case 516: /* operator: ','  */
#line 1086 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_COMMA_ID(); }
#line 5134 "CxxParser.cxx"
    break;

  case 517: /* operator: ARROW_STAR  */
#line 1087 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_ARROW_STAR_ID(); }
#line 5140 "CxxParser.cxx"
    break;

  case 518: /* operator: ARROW  */
#line 1088 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_ARROW_ID(); }
#line 5146 "CxxParser.cxx"
    break;

  case 519: /* operator: '(' ')'  */
#line 1089 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_CALL_ID(); }
#line 5152 "CxxParser.cxx"
    break;

  case 520: /* operator: '[' ']'  */
#line 1090 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_OPERATOR_INDEX_ID(); }
#line 5158 "CxxParser.cxx"
    break;

  case 521: /* template_declaration: template_parameter_clause declaration  */
#line 1095 "CxxParser.y"
                                                                                                { (yyval.declaration) = YACC_TEMPLATE_DECLARATION((yyvsp[-1].template_parameters), (yyvsp[0].declaration)); }
#line 5164 "CxxParser.cxx"
    break;

  case 522: /* template_declaration: EXPORT template_declaration  */
#line 1096 "CxxParser.y"
                                                                                                { (yyval.declaration) = YACC_DECL_SPECIFIER_DECLARATION((yyvsp[0].declaration), (yyvsp[-1].decl_specifier_id)); }
#line 5170 "CxxParser.cxx"
    break;

  case 523: /* template_parameter_clause: TEMPLATE '<' template_parameter_list '>'  */
#line 1097 "CxxParser.y"
                                                                                                { (yyval.template_parameters) = (yyvsp[-1].template_parameters); }
#line 5176 "CxxParser.cxx"
    break;

  case 524: /* template_parameter_list: template_parameter  */
#line 1098 "CxxParser.y"
                                                                                                { (yyval.template_parameters) = YACC_TEMPLATE_PARAMETERS(0, (yyvsp[0].template_parameter)); }
#line 5182 "CxxParser.cxx"
    break;

  case 525: /* template_parameter_list: template_parameter_list ',' template_parameter  */
#line 1099 "CxxParser.y"
                                                                                                { (yyval.template_parameters) = YACC_TEMPLATE_PARAMETERS((yyvsp[-2].template_parameters), (yyvsp[0].template_parameter)); }
#line 5188 "CxxParser.cxx"
    break;

  case 526: /* template_parameter: simple_type_parameter  */
#line 1100 "CxxParser.y"
                                                                                                { (yyval.template_parameter) = YACC_INIT_SIMPLE_TYPE_PARAMETER((yyvsp[0].simple_type_parameter), 0); }
#line 5194 "CxxParser.cxx"
    break;

  case 527: /* template_parameter: simple_type_parameter '=' type_id  */
#line 1101 "CxxParser.y"
                                                                                                { (yyval.template_parameter) = YACC_INIT_SIMPLE_TYPE_PARAMETER((yyvsp[-2].simple_type_parameter), (yyvsp[0].expression)); }
#line 5200 "CxxParser.cxx"
    break;

  case 528: /* template_parameter: templated_type_parameter  */
#line 1102 "CxxParser.y"
                                                                                                { (yyval.template_parameter) = YACC_INIT_TEMPLATED_PARAMETER((yyvsp[0].templated_type_parameter), 0); }
#line 5206 "CxxParser.cxx"
    break;

  case 529: /* template_parameter: templated_type_parameter '=' identifier  */
#line 1103 "CxxParser.y"
                                                                                                { (yyval.template_parameter) = YACC_INIT_TEMPLATED_PARAMETER((yyvsp[-2].templated_type_parameter), (yyvsp[0].name)); }
#line 5212 "CxxParser.cxx"
    break;

  case 530: /* template_parameter: templated_parameter_declaration  */
#line 1104 "CxxParser.y"
                                                                                                { (yyval.template_parameter) = YACC_TEMPLATE_PARAMETER((yyvsp[0].parameter)); }
#line 5218 "CxxParser.cxx"
    break;

  case 531: /* template_parameter: bang error  */
#line 1105 "CxxParser.y"
                                                                                                { (yyval.template_parameter) = 0; YACC_UNBANG((yyvsp[-1].bang), "Bad template-parameter."); }
#line 5224 "CxxParser.cxx"
    break;

  case 532: /* simple_type_parameter: CLASS  */
#line 1106 "CxxParser.y"
                                                                                                { (yyval.simple_type_parameter) = YACC_CLASS_TYPE_PARAMETER(0); }
#line 5230 "CxxParser.cxx"
    break;

  case 533: /* simple_type_parameter: TYPENAME  */
#line 1108 "CxxParser.y"
                                                                                                { (yyval.simple_type_parameter) = YACC_TYPENAME_TYPE_PARAMETER(0); }
#line 5236 "CxxParser.cxx"
    break;

  case 534: /* templated_type_parameter: template_parameter_clause CLASS  */
#line 1110 "CxxParser.y"
                                                                                                { (yyval.templated_type_parameter) = YACC_TEMPLATED_TYPE_PARAMETER((yyvsp[-1].template_parameters), 0); }
#line 5242 "CxxParser.cxx"
    break;

  case 535: /* templated_type_parameter: template_parameter_clause CLASS identifier  */
#line 1111 "CxxParser.y"
                                                                                                { (yyval.templated_type_parameter) = YACC_TEMPLATED_TYPE_PARAMETER((yyvsp[-2].template_parameters), (yyvsp[0].name)); }
#line 5248 "CxxParser.cxx"
    break;

  case 536: /* template_id: TEMPLATE identifier '<' template_argument_list '>'  */
#line 1112 "CxxParser.y"
                                                                                                { (yyval.name) = YACC_TEMPLATE_NAME((yyvsp[-3].name), (yyvsp[-1].template_arguments)); }
#line 5254 "CxxParser.cxx"
    break;

  case 537: /* template_id: TEMPLATE template_id  */
#line 1113 "CxxParser.y"
                                                                                                { (yyval.name) = (yyvsp[0].name); }
#line 5260 "CxxParser.cxx"
    break;

  case 538: /* template_argument_list: template_argument  */
#line 1117 "CxxParser.y"
                                                                                                { (yyval.template_arguments) = YACC_TEMPLATE_ARGUMENTS(0, (yyvsp[0].template_argument)); }
#line 5266 "CxxParser.cxx"
    break;

  case 539: /* template_argument_list: template_argument_list ',' template_argument  */
#line 1118 "CxxParser.y"
                                                                                                { (yyval.template_arguments) = YACC_TEMPLATE_ARGUMENTS((yyvsp[-2].template_arguments), (yyvsp[0].template_argument)); }
#line 5272 "CxxParser.cxx"
    break;

  case 540: /* template_argument: templated_parameter_declaration  */
#line 1119 "CxxParser.y"
                                                                                                { (yyval.template_argument) = YACC_TEMPLATE_ARGUMENT((yyvsp[0].parameter)); }
#line 5278 "CxxParser.cxx"
    break;

  case 541: /* explicit_specialization: TEMPLATE '<' '>' declaration  */
#line 1129 "CxxParser.y"
                                                                                                { (yyval.declaration) = YACC_EXPLICIT_SPECIALIZATION((yyvsp[0].declaration)); }
#line 5284 "CxxParser.cxx"
    break;

  case 542: /* try_block: TRY compound_statement handler_seq  */
#line 1134 "CxxParser.y"
                                                                                                { (yyval.function_body) = YACC_TRY_BLOCK((yyvsp[-1].statement), (yyvsp[0].handlers)); }
#line 5290 "CxxParser.cxx"
    break;

  case 543: /* handler_seq: handler  */
#line 1136 "CxxParser.y"
                                                                                                { (yyval.handlers) = YACC_HANDLERS(0, (yyvsp[0].handler)); }
#line 5296 "CxxParser.cxx"
    break;

  case 544: /* handler_seq: handler handler_seq  */
#line 1137 "CxxParser.y"
                                                                                                { (yyval.handlers) = YACC_HANDLERS((yyvsp[0].handlers), (yyvsp[-1].handler)); }
#line 5302 "CxxParser.cxx"
    break;

  case 545: /* handler: CATCH '(' exception_declaration ')' compound_statement  */
#line 1138 "CxxParser.y"
                                                                                                { (yyval.handler) = YACC_HANDLER((yyvsp[-2].exception_declaration), (yyvsp[0].statement)); }
#line 5308 "CxxParser.cxx"
    break;

  case 546: /* exception_declaration: parameter_declaration  */
#line 1139 "CxxParser.y"
                                                                                                { (yyval.exception_declaration) = YACC_EXCEPTION_DECLARATION((yyvsp[0].parameter)); }
#line 5314 "CxxParser.cxx"
    break;

  case 547: /* throw_expression: THROW  */
#line 1141 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_THROW_EXPRESSION(0); }
#line 5320 "CxxParser.cxx"
    break;

  case 548: /* throw_expression: THROW assignment_expression  */
#line 1142 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_THROW_EXPRESSION((yyvsp[0].expression)); }
#line 5326 "CxxParser.cxx"
    break;

  case 549: /* templated_throw_expression: THROW  */
#line 1143 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_THROW_EXPRESSION(0); }
#line 5332 "CxxParser.cxx"
    break;

  case 550: /* templated_throw_expression: THROW templated_assignment_expression  */
#line 1144 "CxxParser.y"
                                                                                                { (yyval.expression) = YACC_THROW_EXPRESSION((yyvsp[0].expression)); }
#line 5338 "CxxParser.cxx"
    break;

  case 551: /* exception_specification: THROW '(' ')'  */
#line 1145 "CxxParser.y"
                                                                                                { (yyval.exception_specification) = YACC_EXCEPTION_SPECIFICATION(0); }
#line 5344 "CxxParser.cxx"
    break;

  case 552: /* exception_specification: THROW '(' type_id_list ')'  */
#line 1146 "CxxParser.y"
                                                                                                { (yyval.exception_specification) = YACC_EXCEPTION_SPECIFICATION((yyvsp[-1].expressions)); }
#line 5350 "CxxParser.cxx"
    break;

  case 553: /* type_id_list: type_id  */
#line 1147 "CxxParser.y"
                                                                                                { (yyval.expressions) = YACC_EXPRESSIONS(0, (yyvsp[0].expression)); }
#line 5356 "CxxParser.cxx"
    break;

  case 554: /* type_id_list: type_id_list ',' type_id  */
#line 1148 "CxxParser.y"
                                                                                                { (yyval.expressions) = YACC_EXPRESSIONS((yyvsp[-2].expressions), (yyvsp[0].expression)); }
#line 5362 "CxxParser.cxx"
    break;

  case 555: /* advance_search: error  */
#line 1153 "CxxParser.y"
                                                        { YYABORT; }
#line 5368 "CxxParser.cxx"
    break;

  case 556: /* bang: %empty  */
#line 1154 "CxxParser.y"
                                                        { (yyval.bang) = YACC_BANG(); }
#line 5374 "CxxParser.cxx"
    break;

  case 557: /* mark: %empty  */
#line 1155 "CxxParser.y"
                                                        { (yyval.mark) = mark(); }
#line 5380 "CxxParser.cxx"
    break;

  case 558: /* nest: %empty  */
#line 1156 "CxxParser.y"
                                                        { (yyval.nest) = nest(); }
#line 5386 "CxxParser.cxx"
    break;

  case 559: /* start_search: %empty  */
#line 1157 "CxxParser.y"
                                                        { (yyval.line) = YACC_LINE(); start_search(false); }
#line 5392 "CxxParser.cxx"
    break;

  case 560: /* start_search1: %empty  */
#line 1158 "CxxParser.y"
                                                        { (yyval.line) = YACC_LINE(); start_search(true); }
#line 5398 "CxxParser.cxx"
    break;

  case 561: /* util: %empty  */
#line 1159 "CxxParser.y"
                                                        { (yyval.utility) = YACC_UTILITY_MODE(); }
#line 5404 "CxxParser.cxx"
    break;


#line 5408 "CxxParser.cxx"

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

#line 1161 "CxxParser.y"

#include <CxxParsing.cxx>
/*EndTester*/
