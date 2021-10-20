.include "macros.inc"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __files
__files:
	.4byte 0x00000000
	.4byte 0x0A800000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte stdin_buff
	.4byte 0x00000100
	.4byte stdin_buff
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte __read_console
	.4byte __write_console
	.4byte __close_console
	.4byte 0x00000000
	.4byte lbl_804A6998
lbl_804A6998:
	.4byte 0x00000001
	.4byte 0x12800000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte stdout_buff
	.4byte 0x00000100
	.4byte stdout_buff
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte __read_console
	.4byte __write_console
	.4byte __close_console
	.4byte 0x00000000
	.4byte lbl_804A69E8
lbl_804A69E8:
	.4byte 0x00000002
	.4byte 0x10800000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte stderr_buff
	.4byte 0x00000100
	.4byte stderr_buff
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte __read_console
	.4byte __write_console
	.4byte __close_console
	.4byte 0x00000000
	.4byte lbl_804A6A38
lbl_804A6A38:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __flush_all
__flush_all:
/* 800C2A04 000BF944  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C2A08 000BF948  7C 08 02 A6 */	mflr r0
/* 800C2A0C 000BF94C  3C 60 80 4A */	lis r3, __files@ha
/* 800C2A10 000BF950  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C2A14 000BF954  38 03 69 48 */	addi r0, r3, __files@l
/* 800C2A18 000BF958  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800C2A1C 000BF95C  3B E0 00 00 */	li r31, 0
/* 800C2A20 000BF960  93 C1 00 08 */	stw r30, 8(r1)
/* 800C2A24 000BF964  7C 1E 03 78 */	mr r30, r0
/* 800C2A28 000BF968  48 00 00 28 */	b lbl_800C2A50
lbl_800C2A2C:
/* 800C2A2C 000BF96C  A0 1E 00 04 */	lhz r0, 4(r30)
/* 800C2A30 000BF970  54 00 D7 7F */	rlwinm. r0, r0, 0x1a, 0x1d, 0x1f
/* 800C2A34 000BF974  41 82 00 18 */	beq lbl_800C2A4C
/* 800C2A38 000BF978  7F C3 F3 78 */	mr r3, r30
/* 800C2A3C 000BF97C  48 00 3B D5 */	bl fflush
/* 800C2A40 000BF980  2C 03 00 00 */	cmpwi r3, 0
/* 800C2A44 000BF984  41 82 00 08 */	beq lbl_800C2A4C
/* 800C2A48 000BF988  3B E0 FF FF */	li r31, -1
lbl_800C2A4C:
/* 800C2A4C 000BF98C  83 DE 00 4C */	lwz r30, 0x4c(r30)
lbl_800C2A50:
/* 800C2A50 000BF990  28 1E 00 00 */	cmplwi r30, 0
/* 800C2A54 000BF994  40 82 FF D8 */	bne lbl_800C2A2C
/* 800C2A58 000BF998  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C2A5C 000BF99C  7F E3 FB 78 */	mr r3, r31
/* 800C2A60 000BF9A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800C2A64 000BF9A4  83 C1 00 08 */	lwz r30, 8(r1)
/* 800C2A68 000BF9A8  7C 08 03 A6 */	mtlr r0
/* 800C2A6C 000BF9AC  38 21 00 10 */	addi r1, r1, 0x10
/* 800C2A70 000BF9B0  4E 80 00 20 */	blr 

.global __close_all
__close_all:
/* 800C2A74 000BF9B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C2A78 000BF9B8  7C 08 02 A6 */	mflr r0
/* 800C2A7C 000BF9BC  3C 80 80 4A */	lis r4, __files@ha
/* 800C2A80 000BF9C0  38 60 00 02 */	li r3, 2
/* 800C2A84 000BF9C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C2A88 000BF9C8  38 04 69 48 */	addi r0, r4, __files@l
/* 800C2A8C 000BF9CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800C2A90 000BF9D0  7C 1F 03 78 */	mr r31, r0
/* 800C2A94 000BF9D4  48 00 37 C9 */	bl __begin_critical_region
/* 800C2A98 000BF9D8  48 00 00 60 */	b lbl_800C2AF8
lbl_800C2A9C:
/* 800C2A9C 000BF9DC  A0 1F 00 04 */	lhz r0, 4(r31)
/* 800C2AA0 000BF9E0  54 00 D7 7F */	rlwinm. r0, r0, 0x1a, 0x1d, 0x1f
/* 800C2AA4 000BF9E4  41 82 00 0C */	beq lbl_800C2AB0
/* 800C2AA8 000BF9E8  7F E3 FB 78 */	mr r3, r31
/* 800C2AAC 000BF9EC  48 00 3C 9D */	bl fclose
lbl_800C2AB0:
/* 800C2AB0 000BF9F0  7F E3 FB 78 */	mr r3, r31
/* 800C2AB4 000BF9F4  83 FF 00 4C */	lwz r31, 0x4c(r31)
/* 800C2AB8 000BF9F8  88 03 00 0C */	lbz r0, 0xc(r3)
/* 800C2ABC 000BF9FC  28 00 00 00 */	cmplwi r0, 0
/* 800C2AC0 000BFA00  41 82 00 0C */	beq lbl_800C2ACC
/* 800C2AC4 000BFA04  4B FF FA 8D */	bl free
/* 800C2AC8 000BFA08  48 00 00 30 */	b lbl_800C2AF8
lbl_800C2ACC:
/* 800C2ACC 000BFA0C  A0 03 00 04 */	lhz r0, 4(r3)
/* 800C2AD0 000BFA10  38 80 00 03 */	li r4, 3
/* 800C2AD4 000BFA14  50 80 35 F2 */	rlwimi r0, r4, 6, 0x17, 0x19
/* 800C2AD8 000BFA18  28 1F 00 00 */	cmplwi r31, 0
/* 800C2ADC 000BFA1C  B0 03 00 04 */	sth r0, 4(r3)
/* 800C2AE0 000BFA20  41 82 00 18 */	beq lbl_800C2AF8
/* 800C2AE4 000BFA24  88 1F 00 0C */	lbz r0, 0xc(r31)
/* 800C2AE8 000BFA28  28 00 00 00 */	cmplwi r0, 0
/* 800C2AEC 000BFA2C  41 82 00 0C */	beq lbl_800C2AF8
/* 800C2AF0 000BFA30  38 00 00 00 */	li r0, 0
/* 800C2AF4 000BFA34  90 03 00 4C */	stw r0, 0x4c(r3)
lbl_800C2AF8:
/* 800C2AF8 000BFA38  28 1F 00 00 */	cmplwi r31, 0
/* 800C2AFC 000BFA3C  40 82 FF A0 */	bne lbl_800C2A9C
/* 800C2B00 000BFA40  38 60 00 02 */	li r3, 2
/* 800C2B04 000BFA44  48 00 37 55 */	bl __end_critical_region
/* 800C2B08 000BFA48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C2B0C 000BFA4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800C2B10 000BFA50  7C 08 03 A6 */	mtlr r0
/* 800C2B14 000BFA54  38 21 00 10 */	addi r1, r1, 0x10
/* 800C2B18 000BFA58  4E 80 00 20 */	blr 
