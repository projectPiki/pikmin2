.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global __ptmf_null
__ptmf_null:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ptmf_test
__ptmf_test:
/* 800C1AF4 000BEA34  80 A3 00 00 */	lwz r5, 0(r3)
/* 800C1AF8 000BEA38  80 C3 00 04 */	lwz r6, 4(r3)
/* 800C1AFC 000BEA3C  80 E3 00 08 */	lwz r7, 8(r3)
/* 800C1B00 000BEA40  38 60 00 01 */	li r3, 1
/* 800C1B04 000BEA44  2C 05 00 00 */	cmpwi r5, 0
/* 800C1B08 000BEA48  2F 06 00 00 */	cmpwi cr6, r6, 0
/* 800C1B0C 000BEA4C  2F 87 00 00 */	cmpwi cr7, r7, 0
/* 800C1B10 000BEA50  4C 82 00 20 */	bnelr 
/* 800C1B14 000BEA54  4C 9A 00 20 */	bnelr cr6
/* 800C1B18 000BEA58  4C 9E 00 20 */	bnelr cr7
/* 800C1B1C 000BEA5C  38 60 00 00 */	li r3, 0
/* 800C1B20 000BEA60  4E 80 00 20 */	blr 

.global __ptmf_scall
__ptmf_scall:
/* 800C1B24 000BEA64  80 0C 00 00 */	lwz r0, 0(r12)
/* 800C1B28 000BEA68  81 6C 00 04 */	lwz r11, 4(r12)
/* 800C1B2C 000BEA6C  81 8C 00 08 */	lwz r12, 8(r12)
/* 800C1B30 000BEA70  7C 63 02 14 */	add r3, r3, r0
/* 800C1B34 000BEA74  2C 0B 00 00 */	cmpwi r11, 0
/* 800C1B38 000BEA78  41 80 00 0C */	blt lbl_800C1B44
/* 800C1B3C 000BEA7C  7D 83 60 2E */	lwzx r12, r3, r12
/* 800C1B40 000BEA80  7D 8C 58 2E */	lwzx r12, r12, r11
lbl_800C1B44:
/* 800C1B44 000BEA84  7D 89 03 A6 */	mtctr r12
/* 800C1B48 000BEA88  4E 80 04 20 */	bctr 
