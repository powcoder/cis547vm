https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "llvm/IR/Module.h"
#include "llvm/ADT/StringRef.h"

using namespace llvm;

namespace analytics {
struct Analytics : public ModulePass {
  static char ID;
  Analytics();

  bool runOnModule(Module &M);

};
} // namespace analytics
