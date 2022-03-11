/**
 * @defgroup   Abstract syntax tree interface
 *
 * @brief      AST used as main data structure for code evaluation.
 *             It build after specific syntax parsing and become a
 *             generic structure for code represantation. 
 *
 * @author     Delphifeel
 * @date       2022
 */

#ifndef _ABSTRACT_SYNTAX_TREE_H_
#define _ABSTRACT_SYNTAX_TREE_H_

#include "CCORE.h"

typedef struct ASTModule ASTModule;
typedef struct ASTFunction ASTFunction;
typedef struct ASTVariable ASTVariable;


/**
 * Variable type
 */
typedef enum VarType
{
    VARType_None = 0,
    VarType_Int,
    VARType_UnsignedInt,
    VarType_String,
    VarType_Pointer,
} VarType;

struct ASTVariable
{
    ASTFunction *function;
    char        name[40];
    VarType     type;
    uint64      value;
    bool        is_const;
};

struct ASTModule
{
    char            name[40];
    ASTFunction     *functions;
};

struct ASTFunction
{
    ASTModule       *module;
    char            name[40];
    ASTVariable     *arguments;
    ASTVariable     return_variable;
    ASTVariable     *local_variables;
};


void ASTModule_Init(ASTModule *module);
void ASTModule_AddFunction(ASTModule *module, ASTFunction *function);
void ASTModule_SetName(ASTModule *module, const char *name);

void ASTFunction_Init(ASTFunction *function);
void ASTFunction_SetModule(ASTFunction *function, ASTModule *module);
void ASTFunction_SetName(ASTFunction *function, const char *name);
void ASTFunction_SetReturnVar(ASTFunction *function, ASTVariable *return_variable);
void ASTFunction_AddArgument(ASTFunction *function,  ASTVariable *argument);
void ASTFunction_AddLocalVar(ASTFunction *function,  ASTVariable *local_variable);

void ASTVariable_Init(ASTVariable *variable);

#endif