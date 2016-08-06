#include "instructions/push_cpath_top.hpp"

namespace rubinius {
  namespace interpreter {
    intptr_t push_cpath_top(STATE, CallFrame* call_frame, intptr_t const opcodes[]) {
      instructions::push_cpath_top(state, call_frame);

      return ((Instruction)opcodes[call_frame->ip()])(state, call_frame, opcodes);
    }
  }
}
