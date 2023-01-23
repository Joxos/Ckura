#include <iostream>

#include "CkuraVisitor.h"
#include "clipp.h"

using clipp::option;
using clipp::value;

// LLVM related
extern unique_ptr<LLVMContext> llvm_context;
extern unique_ptr<Module> llvm_module;
extern unique_ptr<IRBuilder<>> llvm_builder;

// variable memroy
extern unordered_map<string, Value *> memory;

// function generation
extern string fname;
extern Value *ret_val;
extern vector<string> original_args;
extern map<string, Value *> function_args;

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

  // init global values
  // LLVM related
  llvm_context = make_unique<LLVMContext>();
  llvm_module = make_unique<Module>("MainModule", *llvm_context);
  llvm_builder = make_unique<IRBuilder<>>(*llvm_context);

  // antlr4 lex and parse
  fname = "";
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
