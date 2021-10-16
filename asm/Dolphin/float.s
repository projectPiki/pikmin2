.include "macros.inc"
.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 0x8
.global __float_nan
__float_nan:
	.float NaN
.global __float_huge
__float_huge:
	.float Infinity
.global __double_max
__double_max:
	.4byte 0x7FEFFFFF
	.4byte 0xFFFFFFFF
.global __double_huge
__double_huge:
	.double Infinity
.global __extended_min
__extended_min:
	.4byte 0x00100000
	.4byte 0x00000000
.global __extended_max
__extended_max:
	.4byte 0x7FEFFFFF
	.4byte 0xFFFFFFFF
.global __float_max
__float_max:
	.4byte 0x7F7FFFFF
.global __float_epsilon
__float_epsilon:
	.4byte 0x34000000
