#include "ClangTidyOptions.h"

namespace clang {
namespace tidy {

void applyOption(ClangTidyOptions &Options, const std::string &Name,
                 const std::string &Value) {
    Options.CheckOptions[Name] = Value;
}

} // namespace tidy
} // namespace clang
