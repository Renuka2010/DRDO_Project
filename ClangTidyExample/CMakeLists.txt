cmake_minimum_required(VERSION 3.10)
project(ClangTidyExample)

set(CMAKE_CXX_STANDARD 17)

# Find Clang and LLVM
find_package(LLVM REQUIRED CONFIG)
find_package(Clang REQUIRED CONFIG)

include_directories(${LLVM_INCLUDE_DIRS} ${CLANG_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

add_executable(ClangTidyExample
    main.cpp
    ClangTidy.cpp
    ClangTidyOptions.cpp
    AvoidGotoCheck.cpp
)

target_link_libraries(ClangTidyExample
    clangTooling
    clangASTMatchers
    clangBasic
    clangFrontend
)
