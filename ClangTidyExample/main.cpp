#include "ClangTidy.h"
#include "AvoidGotoCheck.h"
#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Tooling/Tooling.h"
#include <memory>
#include <vector>

using namespace clang;
using namespace clang::tidy;
using namespace clang::ast_matchers;
using namespace clang::tooling;

int main() {
    // Sample code to analyze
    std::string Code = R"cpp(
        int main() {
            goto label;
            label:
            return 0;
        }
    )cpp";

    std::vector<std::string> Args = {"-std=c++17"};
    AvoidGotoCheck Check;
    MatchFinder Finder;
    Check.registerMatchers(&Finder);

    runToolOnCodeWithArgs(newFrontendActionFactory(&Finder).get(), Code, Args, "example.cpp");

    return 0;
}
