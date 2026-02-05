#ifndef LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_CLANGTIDY_H
#define LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_CLANGTIDY_H

#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Frontend/CompilerInstance.h"
#include <string>

namespace clang {
namespace tidy {

class ClangTidyCheck {
public:
    ClangTidyCheck() = default;
    virtual ~ClangTidyCheck() = default;

    virtual void registerMatchers(clang::ast_matchers::MatchFinder *Finder) = 0;
    virtual void check(const clang::ast_matchers::MatchFinder::MatchFinder::MatchResult &Result) = 0;
};

} // namespace tidy
} // namespace clang

#endif
