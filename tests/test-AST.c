#include "ast/abstract-syntax-tree.h"

int main()
{
    CORE_DebugInfo("test-AST started\n");

    // ASTModule *module_main = CORE_MemAlloc(sizeof(ASTModule), 1);
    // module_main->name = "module_main";


    // ASTFunction func_use = {
    //     .module = module_main,
    //     .name = "use",
    // };
    // ASTFunction *func_all = CORE_MemAlloc(sizeof(ASTFunction), 1);
    // func_all[0] = func_use;


    // ASTVariable var_int_a = {
    //     .function   = func_use,
    //     .name       = "a",
    //     .type       = VarType_Int,
    //     .is_const   = false,
    //     .value      = 666,
    // };
    // ASTVariable var_uint_b = {
    //     .function   = func_use,
    //     .name       = "b",
    //     .type       = VarType_UnsgignedInt,
    //     .is_const   = true,
    //     .value      = 999,
    // };
    // ASTVariable *var_all = CORE_MemAlloc(sizeof(ASTVariable), 2);
    // var_all[0] = var_int_a;
    // var_all[1] = var_uint_b;

    return 0;
}