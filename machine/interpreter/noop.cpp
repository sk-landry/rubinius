#include "instructions/noop.hpp"

namespace rubinius {
  namespace interpreter {
    intptr_t noop(STATE, CallFrame* call_frame, intptr_t const opcodes[]) {
      instructions::noop();

      return ((Instruction)opcodes[call_frame->ip()])(state, call_frame, opcodes);
    }
  }
}
