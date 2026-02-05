#include "AvoidGotoCheck.h"
#include "clang/AST/Stmt.h"
#include "llvm/Support/raw_ostream.h"

using namespace clang::ast_matchers;

namespace clang {
namespace tidy {

void AvoidGotoCheck::registerMatchers(MatchFinder *Finder) {
    Finder->addMatcher(gotoStmt().bind("gotoStmt"), this);
}

void AvoidGotoCheck::check(const MatchFinder::MatchFinder::MatchResult &Result) {
    const auto *GS = Result.Nodes.getNodeAs<GotoStmt>("gotoStmt");
    if (GS)
        llvm::errs() << "Avoid using goto at "
                     << GS->getGotoLoc().printToString(*Result.SourceManager)
                     << "\n";
}

} // namespace tidy
} // namespace clang
