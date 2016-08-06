#include "instructions/check_serial_private.hpp"

namespace rubinius {
  namespace interpreter {
    intptr_t check_serial_private(STATE, CallFrame* call_frame, intptr_t const opcodes[]) {
      intptr_t literal = argument(0);
      intptr_t serial = argument(1);

      instructions::check_serial_private(state, call_frame, literal, serial);

      return ((Instruction)opcodes[call_frame->ip()])(state, call_frame, opcodes);
    }
  }
}
