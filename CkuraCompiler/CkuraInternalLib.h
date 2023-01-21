#pragma once

#include <cstdlib>
#include <iostream>
#include <string>

#include "spdlog\spdlog.h"

namespace cil {
using namespace std;
using namespace spdlog;

struct Exceptions {
  enum class Errors {
    VariableNotFound,
    UndefinedId,
    FunctionNotFound,
    InvalidFunctionCall,
  };

  enum class Warnings { ModCurrentlyNotSupported };
};

void error_and_exit(Exceptions::Errors e, initializer_list<string> ss);
void show_warning(Exceptions::Warnings w, initializer_list<string> ss);
}  // namespace cil
