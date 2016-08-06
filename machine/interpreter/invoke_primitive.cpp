#include "instructions/invoke_primitive.hpp"

namespace rubinius {
  namespace interpreter {
    intptr_t invoke_primitive(STATE, CallFrame* call_frame, intptr_t const opcodes[]) {
      intptr_t literal = argument(0);
      intptr_t count = argument(1);

      instructions::invoke_primitive(state, call_frame, literal, count);

      return ((Instruction)opcodes[call_frame->ip()])(state, call_frame, opcodes);
    }
  }
}
