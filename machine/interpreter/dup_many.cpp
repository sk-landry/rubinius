#include "instructions/dup_many.hpp"

namespace rubinius {
  namespace interpreter {
    intptr_t dup_many(STATE, CallFrame* call_frame, intptr_t const opcodes[]) {
      intptr_t count = argument(0);

      instructions::dup_many(call_frame, count);

      return ((Instruction)opcodes[call_frame->ip()])(state, call_frame, opcodes);
    }
  }
}
