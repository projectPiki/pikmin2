.include "macros.inc"
.section ._exidx, "a"  # 0x80005660 - 0x800056C0
.global lbl_80005660
lbl_80005660:
	.4byte __destroy_new_array
	.4byte 0x0000007C
	.4byte $$2205
	.4byte __destroy_arr
	.4byte 0x00000078
	.4byte $$2210
	.4byte __construct_array
	.4byte 0x000000FC
	.4byte $$2231
	.4byte __dt__26__partial_array_destructorFv
	.4byte 0x000000B8
	.4byte $$2239
	.4byte __construct_new_array
	.4byte 0x00000104
	.4byte $$2262
.global lbl_8000569C
lbl_8000569C:
	.4byte lbl_80005660
	.4byte lbl_8000569C
	.4byte __destroy_new_array
	.4byte 0x000003AC
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	
