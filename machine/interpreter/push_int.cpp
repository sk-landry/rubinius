#include "instructions/push_int.hpp"

namespace rubinius {
  namespace interpreter {
    intptr_t push_int(STATE, CallFrame* call_frame, intptr_t const opcodes[]) {
      intptr_t number = argument(0);

      instructions::push_int(call_frame, number);

      return ((Instruction)opcodes[call_frame->ip()])(state, call_frame, opcodes);
    }
  }
}
