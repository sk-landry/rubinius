#include "instructions/push_scope.hpp"

namespace rubinius {
  namespace interpreter {
    intptr_t push_scope(STATE, CallFrame* call_frame, intptr_t const opcodes[]) {
      instructions::push_scope(call_frame);

      return ((Instruction)opcodes[call_frame->ip()])(state, call_frame, opcodes);
    }
  }
}
