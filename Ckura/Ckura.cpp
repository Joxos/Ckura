#include <iostream>

#include "CkuraVisitor.h"

using namespace std;
using namespace llvm;

extern unique_ptr<LLVMContext> llvm_context;
extern unique_ptr<Module> llvm_module;
extern unique_ptr<IRBuilder<>> llvm_builder;

int main() {
  // init llvm
  llvm_context = make_unique<LLVMContext>();
  llvm_module = make_unique<Module>("my cool jit", *llvm_context);
  llvm_builder = make_unique<IRBuilder<>>(*llvm_context);

  auto a = ConstantFP::get(*llvm_context, APFloat(3.8));
  auto b = ConstantFP::get(*llvm_context, APFloat(5.2));
  llvm_builder->CreateFAdd(a, b, "addtmp");
  llvm_module->dump();
  return 0;
}
