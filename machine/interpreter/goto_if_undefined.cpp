#include "instructions/goto_if_undefined.hpp"

namespace rubinius {
  namespace interpreter {
    intptr_t goto_if_undefined(STATE, CallFrame* call_frame, intptr_t const opcodes[]) {
      intptr_t location = argument(0);

      if(instructions::goto_if_undefined(state, call_frame)) {
        call_frame->set_ip(location);
      } else {
        call_frame->next_ip();
      }

      return ((Instruction)opcodes[call_frame->ip()])(state, call_frame, opcodes);
    }
  }
}
