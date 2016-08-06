#include "instructions/swap.hpp"

namespace rubinius {
  namespace interpreter {
    intptr_t swap(STATE, CallFrame* call_frame, intptr_t const opcodes[]) {
      instructions::swap(call_frame);

      return ((Instruction)opcodes[call_frame->ip()])(state, call_frame, opcodes);
    }
  }
}
