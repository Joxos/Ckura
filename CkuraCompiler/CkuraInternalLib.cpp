#include "CkuraInternalLib.h"

namespace cil {
void error_and_exit(Exceptions::Errors e, initializer_list<string> ss) {
  auto i = ss.begin();
  switch (e) {
    case Exceptions::Errors::VariableNotFound:
      error("Variable {} not found.", *i);
      exit(-1);
      break;
    case Exceptions::Errors::UndefinedId:
      error("Undefined ID {}.", *i);
      exit(-1);
      break;
    case Exceptions::Errors::FunctionNotFound:
      error("Function {} not found.", *i);
      exit(-1);
      break;
    case Exceptions::Errors::InvalidFunctionCall:
      error("Function {} has {} arguments but was given {}.", *(++i), *(++i),
            *i);
      exit(-1);
      break;
    default:
      error("Unfinished error \"{}\".", *i);
      exit(-1);
      break;
  }
}

void show_warning(Exceptions::Warnings w, initializer_list<string> ss) {}
}  // namespace cil
