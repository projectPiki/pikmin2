.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global GetUseSerialIO
GetUseSerialIO:
/* 800C09F0 000BD930  3C 60 80 4F */	lis r3, bUseSerialIO@ha
/* 800C09F4 000BD934  38 63 48 18 */	addi r3, r3, bUseSerialIO@l
/* 800C09F8 000BD938  88 63 00 00 */	lbz r3, 0(r3)
/* 800C09FC 000BD93C  4E 80 00 20 */	blr 

.global SetUseSerialIO
SetUseSerialIO:
/* 800C0A00 000BD940  3C 80 80 4F */	lis r4, bUseSerialIO@ha
/* 800C0A04 000BD944  98 64 48 18 */	stb r3, bUseSerialIO@l(r4)
/* 800C0A08 000BD948  4E 80 00 20 */	blr 
