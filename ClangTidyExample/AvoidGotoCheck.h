#ifndef LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_AVOID_GOTO_CHECK_H
#define LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_AVOID_GOTO_CHECK_H

#include "ClangTidy.h"
#include "clang/ASTMatchers/ASTMatchFinder.h"

namespace clang {
namespace tidy {

class AvoidGotoCheck : public ClangTidyCheck {
public:
    void registerMatchers(clang::ast_matchers::MatchFinder *Finder) override;
    void check(const clang::ast_matchers::MatchFinder::MatchFinder::MatchResult &Result) override;
};

} // namespace tidy
} // namespace clang

#endif
