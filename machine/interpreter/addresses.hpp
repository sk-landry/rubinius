const intptr_t rubinius::Interpreter::instruction_addresses[] = {
  (intptr_t)rubinius::interpreter::add_scope,
  (intptr_t)rubinius::interpreter::allow_private,
  (intptr_t)rubinius::interpreter::cast_array,
  (intptr_t)rubinius::interpreter::cast_for_multi_block_arg,
  (intptr_t)rubinius::interpreter::cast_for_single_block_arg,
  (intptr_t)rubinius::interpreter::cast_for_splat_block_arg,
  (intptr_t)rubinius::interpreter::cast_multi_value,
  (intptr_t)rubinius::interpreter::check_frozen,
  (intptr_t)rubinius::interpreter::check_interrupts,
  (intptr_t)rubinius::interpreter::check_serial,
  (intptr_t)rubinius::interpreter::check_serial_private,
  (intptr_t)rubinius::interpreter::clear_exception,
  (intptr_t)rubinius::interpreter::create_block,
  (intptr_t)rubinius::interpreter::dup,
  (intptr_t)rubinius::interpreter::dup_many,
  (intptr_t)rubinius::interpreter::ensure_return,
  (intptr_t)rubinius::interpreter::find_const,
  (intptr_t)rubinius::interpreter::goto_,
  (intptr_t)rubinius::interpreter::goto_if_equal,
  (intptr_t)rubinius::interpreter::goto_if_false,
  (intptr_t)rubinius::interpreter::goto_if_nil,
  (intptr_t)rubinius::interpreter::goto_if_not_equal,
  (intptr_t)rubinius::interpreter::goto_if_not_nil,
  (intptr_t)rubinius::interpreter::goto_if_not_undefined,
  (intptr_t)rubinius::interpreter::goto_if_true,
  (intptr_t)rubinius::interpreter::goto_if_undefined,
  (intptr_t)rubinius::interpreter::instance_of,
  (intptr_t)rubinius::interpreter::invoke_primitive,
  (intptr_t)rubinius::interpreter::kind_of,
  (intptr_t)rubinius::interpreter::make_array,
  (intptr_t)rubinius::interpreter::move_down,
  (intptr_t)rubinius::interpreter::noop,
  (intptr_t)rubinius::interpreter::object_to_s,
  (intptr_t)rubinius::interpreter::passed_arg,
  (intptr_t)rubinius::interpreter::passed_blockarg,
  (intptr_t)rubinius::interpreter::pop,
  (intptr_t)rubinius::interpreter::pop_many,
  (intptr_t)rubinius::interpreter::pop_unwind,
  (intptr_t)rubinius::interpreter::push_block,
  (intptr_t)rubinius::interpreter::push_block_arg,
  (intptr_t)rubinius::interpreter::push_const,
  (intptr_t)rubinius::interpreter::push_cpath_top,
  (intptr_t)rubinius::interpreter::push_current_exception,
  (intptr_t)rubinius::interpreter::push_exception_state,
  (intptr_t)rubinius::interpreter::push_false,
  (intptr_t)rubinius::interpreter::push_has_block,
  (intptr_t)rubinius::interpreter::push_int,
  (intptr_t)rubinius::interpreter::push_ivar,
  (intptr_t)rubinius::interpreter::push_literal,
  (intptr_t)rubinius::interpreter::push_local,
  (intptr_t)rubinius::interpreter::push_local_depth,
  (intptr_t)rubinius::interpreter::push_memo,
  (intptr_t)rubinius::interpreter::push_mirror,
  (intptr_t)rubinius::interpreter::push_my_field,
  (intptr_t)rubinius::interpreter::push_my_offset,
  (intptr_t)rubinius::interpreter::push_nil,
  (intptr_t)rubinius::interpreter::push_proc,
  (intptr_t)rubinius::interpreter::push_rubinius,
  (intptr_t)rubinius::interpreter::push_scope,
  (intptr_t)rubinius::interpreter::push_self,
  (intptr_t)rubinius::interpreter::push_stack_local,
  (intptr_t)rubinius::interpreter::push_true,
  (intptr_t)rubinius::interpreter::push_type,
  (intptr_t)rubinius::interpreter::push_undef,
  (intptr_t)rubinius::interpreter::push_variables,
  (intptr_t)rubinius::interpreter::raise_break,
  (intptr_t)rubinius::interpreter::raise_exc,
  (intptr_t)rubinius::interpreter::raise_return,
  (intptr_t)rubinius::interpreter::reraise,
  (intptr_t)rubinius::interpreter::restore_exception_state,
  (intptr_t)rubinius::interpreter::ret,
  (intptr_t)rubinius::interpreter::rotate,
  (intptr_t)rubinius::interpreter::send_method,
  (intptr_t)rubinius::interpreter::send_stack,
  (intptr_t)rubinius::interpreter::send_stack_with_block,
  (intptr_t)rubinius::interpreter::send_stack_with_splat,
  (intptr_t)rubinius::interpreter::send_super_stack_with_block,
  (intptr_t)rubinius::interpreter::send_super_stack_with_splat,
  (intptr_t)rubinius::interpreter::send_vcall,
  (intptr_t)rubinius::interpreter::set_call_flags,
  (intptr_t)rubinius::interpreter::set_const,
  (intptr_t)rubinius::interpreter::set_const_at,
  (intptr_t)rubinius::interpreter::set_ivar,
  (intptr_t)rubinius::interpreter::set_local,
  (intptr_t)rubinius::interpreter::set_local_depth,
  (intptr_t)rubinius::interpreter::set_stack_local,
  (intptr_t)rubinius::interpreter::setup_unwind,
  (intptr_t)rubinius::interpreter::shift_array,
  (intptr_t)rubinius::interpreter::store_my_field,
  (intptr_t)rubinius::interpreter::string_append,
  (intptr_t)rubinius::interpreter::string_build,
  (intptr_t)rubinius::interpreter::string_dup,
  (intptr_t)rubinius::interpreter::swap,
  (intptr_t)rubinius::interpreter::yield_debugger,
  (intptr_t)rubinius::interpreter::yield_splat,
  (intptr_t)rubinius::interpreter::yield_stack,
  (intptr_t)rubinius::interpreter::zsuper,
};
