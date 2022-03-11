#ifndef _MODULE_PARSER_H_
#define _MODULE_PARSER_H_

#include "ast/abstract-syntax-tree.h"


int ModuleParser_Parse(const char *module_source_code, ASTModule *module);

#endif