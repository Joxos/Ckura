#if (CMAKE_VERSION VERSION_GREATER 3.12)
#  set_property(TARGET Ckura PROPERTY CXX_STANDARD 17)
#endif()

find_package (LLVM REQUIRED CONFIG)
message (STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message (STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

set (CMAKE_CXX_STANDARD 17)
# set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -fsanitize=address -fno-omit-frame-pointer")
# set (CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -O0 -v")
# set (CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O2")

# set (CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories (./include/antlr4/
                     ./include/grammar/
                     ./include/clipp/
                     ${LLVM_INCLUDE_DIRS})

separate_arguments (LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions (${LLVM_DEFINITIONS_LIST})

link_directories (./lib/)

add_executable (ckura Ckura.cpp
                      ./include/grammar/CkuraParserBaseVisitor.cpp
                      ./include/grammar/CkuraLexer.cpp
                      ./include/grammar/CkuraParser.cpp)

llvm_map_components_to_libnames (llvm_libs support core irreader)

target_link_libraries (ckura antlr4-runtime)
target_link_libraries (ckura ${llvm_libs})

# copy dll
message ("${CMAKE_SOURCE_DIR}")
add_custom_command (TARGET ckura POST_BUILD
                    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/CkuraCompiler/antlr4-runtime.dll
                    ${CMAKE_CURRENT_BINARY_DIR}/Debug/antlr4-runtime.dll)