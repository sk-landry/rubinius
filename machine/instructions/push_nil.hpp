#include "instructions.hpp"

namespace rubinius {
  namespace instructions {
    inline void push_nil(CallFrame* call_frame) {
      stack_push(cNil);
    }
  }
}
