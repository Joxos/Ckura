// Ckura.cpp: 定义应用程序的入口点。
//

#include "Ckura.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Verifier.h"
//#include <map>
#include <string>
#include <iostream>

using namespace std;
using namespace llvm;

static unique_ptr<LLVMContext> llvm_context;
static unique_ptr<Module> llvm_module;
static unique_ptr<IRBuilder<>> llvm_builder;

//static map<string, Value> memory;

int main()
{
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
