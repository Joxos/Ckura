#include <iostream>

#include "CkuraVisitor.h"
#include "clipp.h"

using clipp::option;
using clipp::value;

// define global values
// LLVM related
unique_ptr<LLVMContext> llvm_context = make_unique<LLVMContext>();
unique_ptr<Module> llvm_module =
    make_unique<Module>("MainModule", *llvm_context);
unique_ptr<IRBuilder<>> llvm_builder = make_unique<IRBuilder<>>(*llvm_context);
// variable memroy
unordered_map<string, Value *> memory;
// function generation
string fname;
// for now we only support one return value
// since antlr has aggregateResult() this fucking shit
// we store the return value here
Value *ret_val;
vector<string> original_args;
map<string, Value *> function_args;

int main(int argc, char *argv[]) {
  // set log level
  set_level(level::debug);

  // parse cli
  string input_file = "", output_file = "";
  auto cli = (value("input file", input_file),
              option("-o") & value("output file", output_file));
  if (!parse(argc, argv, cli)) {
    cout << make_man_page(cli, argv[0]);
    exit(-1);
  }

  // LLVM JIT
  //InitializeNativeTarget();
  //InitializeNativeTargetAsmPrinter();
  //InitializeNativeTargetAsmParser();

  // antlr4 lex and parse
  info("Start lexing with input file {}.", input_file);
  ifstream stream(input_file);
  antlr4::ANTLRInputStream input(stream);
  CkuraLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  info("Start parsing.");
  CkuraParser parser(&tokens);
  info("Parse completed.");
  stream.close();
  info("File stream closed.");

  antlr4::tree::ParseTree *tree = parser.module();
  info("Start going through the visitor.");
  CkuraVisitor visitor;
  visitor.visit(tree);
  info("Visit complete.");
  // llvm_module->dump();
  llvm_module->print(errs(), nullptr);
  return 0;
}
