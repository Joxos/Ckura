#include <iostream>

#include "CkuraVisitor.h"
#include "clipp.h"

using clipp::option;
using clipp::value;

extern unique_ptr<LLVMContext> llvm_context;
extern unique_ptr<Module> llvm_module;
extern unique_ptr<IRBuilder<>> llvm_builder;

extern unordered_map<string, Value *> memory;

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

  // init llvm
  llvm_context = make_unique<LLVMContext>();
  llvm_module = make_unique<Module>("my cool jit", *llvm_context);
  llvm_builder = make_unique<IRBuilder<>>(*llvm_context);

  // antlr4 lex and parse
  cout << "Start lexing with input file " << input_file << "." << endl;
  ifstream stream(input_file);
  antlr4::ANTLRInputStream input(stream);
  CkuraLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  cout << "Start parsing...";
  CkuraParser parser(&tokens);
  cout << "Parse complete." << endl;
  stream.close();

  antlr4::tree::ParseTree *tree = parser.module();
  cout << "Start visiting..." << endl;
  CkuraVisitor visitor;
  visitor.visit(tree);
  cout << "Visit complete." << endl;
  visitor.accessVariable("res")->print(errs());
  llvm_module->dump();
  return 0;
}
