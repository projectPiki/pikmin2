.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
.global __init_cpp_exceptions_reference
__init_cpp_exceptions_reference:
	.4byte __init_cpp_exceptions
