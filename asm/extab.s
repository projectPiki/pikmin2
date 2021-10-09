.include "macros.inc"
.section ._extab, "wa"  # 0x80005600 - 0x80005660
.global "@205"
"@205":
	.4byte 0x30080000
	.skip 0x4
.global "@210"
"@210":
	.4byte 0x20080000
	.skip 0x4
.global "@231"
"@231":
	.4byte 0x20080000
	.4byte 0x00000060
	.4byte 0x00000010
	.4byte 0x00000000
	.4byte 0x82000008
	.4byte __dt__26__partial_array_destructorFv
.global "@239"
"@239":
	.4byte 0x18080000
	.skip 0x4
.global "@262"
"@262":
	.4byte 0x28080000
	.4byte 0x00000070
	.4byte 0x00000010
	.4byte 0x00000000
	.4byte 0x82000008
	.4byte __dt__26__partial_array_destructorFv
	.skip 0x18
	
