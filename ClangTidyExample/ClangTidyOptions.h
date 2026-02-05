#ifndef LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_CLANGTIDYOPTIONS_H
#define LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_CLANGTIDYOPTIONS_H

#include "llvm/ADT/StringMap.h"
#include <string>

namespace clang {
namespace tidy {

struct ClangTidyOptions {
    llvm::StringMap<std::string> CheckOptions;
};

} // namespace tidy
} // namespace clang

#endif
