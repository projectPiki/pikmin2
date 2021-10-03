.include "macros.inc"
.section .dtors, "wa"  # 0x804732C0 - 0x804732E0
.global __destroy_global_chain_reference
__destroy_global_chain_reference:
	#.incbin "baserom.dol", 0x4702C0, 0x4
	#.4byte 0x800c16b8
.global __fini_cpp_exceptions_reference
__fini_cpp_exceptions_reference:
	#.incbin "baserom.dol", 0x4702C4, 0x4
	.4byte __fini_cpp_exceptions
.global __destroy_global_chain_reference2
__destroy_global_chain_reference2:
	#.incbin "baserom.dol", 0x4702C8, 0x18
	.4byte __destroy_global_chain
	.skip 0x10
	
