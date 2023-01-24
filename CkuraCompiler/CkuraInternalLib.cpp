#include "CkuraInternalLib.h"

namespace cil {
void error_and_exit(Exceptions::Errors e, initializer_list<string> ss) {
  switch (e) {
    case Exceptions::Errors::VariableNotFound:
      error("Variable {} not found.", *ss.begin());
      exit(-1);
      break;
    case Exceptions::Errors::UndefinedId:
      error("Undefined ID {}.", *ss.begin());
      exit(-1);
      break;
    case Exceptions::Errors::FunctionNotFound:
      error("Function {} not found.", *ss.begin());
      exit(-1);
      break;
    case Exceptions::Errors::InvalidFunctionCall:
      error("Function {} has {} arguments but was given {}.", *ss.begin(),
            *(ss.begin() + 1), *(ss.begin() + 2));
      exit(-1);
      break;
    default:
      error("Unfinished error \"{}\".", *ss.begin());
      exit(-1);
      break;
  }
}

void show_warning(Exceptions::Warnings w, initializer_list<string> ss) {}
}  // namespace cil
