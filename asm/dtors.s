.include "macros.inc"
.section .dtors, "wa"  # 0x804732C0 - 0x804732E0
.global __destroy_global_chain_reference
__destroy_global_chain_reference:
	.4byte __destroy_global_chain
.global __fini_cpp_exceptions_reference
__fini_cpp_exceptions_reference:
	.4byte __fini_cpp_exceptions
