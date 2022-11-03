.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
lbl_804A7938:
	.asciz "<< Dolphin SDK - DSP\trelease build: Apr 17 2003 12:34:16 (0x2301) >>"
.balign 4
lbl_804A7980:
	.asciz "DSPInit(): Build Date: %s %s\n"
.balign 4
lbl_804A79A0:
	.asciz "Apr 17 2003"
.balign 4
lbl_804A79AC:
	.asciz "12:34:16"

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.global __DSPVersion
__DSPVersion:
	.4byte lbl_804A7938

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
__DSP_init_flag: # local object
	.skip 4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global DSPCheckMailToDSP
DSPCheckMailToDSP:
/* 800DACB0 000D7BF0  3C 60 CC 00 */	lis r3, 0xCC005000@ha
/* 800DACB4 000D7BF4  A0 03 50 00 */	lhz r0, 0xCC005000@l(r3)
/* 800DACB8 000D7BF8  54 03 8F FE */	rlwinm r3, r0, 0x11, 0x1f, 0x1f
/* 800DACBC 000D7BFC  4E 80 00 20 */	blr 

.global DSPCheckMailFromDSP
DSPCheckMailFromDSP:
/* 800DACC0 000D7C00  3C 60 CC 00 */	lis r3, 0xCC005004@ha
/* 800DACC4 000D7C04  A0 03 50 04 */	lhz r0, 0xCC005004@l(r3)
/* 800DACC8 000D7C08  54 03 8F FE */	rlwinm r3, r0, 0x11, 0x1f, 0x1f
/* 800DACCC 000D7C0C  4E 80 00 20 */	blr 

.global DSPReadMailFromDSP
DSPReadMailFromDSP:
/* 800DACD0 000D7C10  3C 60 CC 00 */	lis r3, 0xCC005000@ha
/* 800DACD4 000D7C14  38 63 50 00 */	addi r3, r3, 0xCC005000@l
/* 800DACD8 000D7C18  A0 03 00 04 */	lhz r0, 4(r3)
/* 800DACDC 000D7C1C  A0 63 00 06 */	lhz r3, 6(r3)
/* 800DACE0 000D7C20  50 03 80 1E */	rlwimi r3, r0, 0x10, 0, 0xf
/* 800DACE4 000D7C24  4E 80 00 20 */	blr 

.global DSPSendMailToDSP
DSPSendMailToDSP:
/* 800DACE8 000D7C28  3C 80 CC 00 */	lis r4, 0xCC005000@ha
/* 800DACEC 000D7C2C  54 60 84 3E */	srwi r0, r3, 0x10
/* 800DACF0 000D7C30  B0 04 50 00 */	sth r0, 0xCC005000@l(r4)
/* 800DACF4 000D7C34  B0 64 50 02 */	sth r3, 0x5002(r4)
/* 800DACF8 000D7C38  4E 80 00 20 */	blr 

.global DSPAssertInt
DSPAssertInt:
/* 800DACFC 000D7C3C  7C 08 02 A6 */	mflr r0
/* 800DAD00 000D7C40  90 01 00 04 */	stw r0, 4(r1)
/* 800DAD04 000D7C44  94 21 FF F8 */	stwu r1, -8(r1)
/* 800DAD08 000D7C48  48 01 3F 31 */	bl OSDisableInterrupts
/* 800DAD0C 000D7C4C  3C 80 CC 00 */	lis r4, 0xCC005000@ha
/* 800DAD10 000D7C50  38 84 50 00 */	addi r4, r4, 0xCC005000@l
/* 800DAD14 000D7C54  A0 A4 00 0A */	lhz r5, 0xa(r4)
/* 800DAD18 000D7C58  38 00 FF 57 */	li r0, -169
/* 800DAD1C 000D7C5C  7C A0 00 38 */	and r0, r5, r0
/* 800DAD20 000D7C60  60 00 00 02 */	ori r0, r0, 2
/* 800DAD24 000D7C64  B0 04 00 0A */	sth r0, 0xa(r4)
/* 800DAD28 000D7C68  48 01 3F 39 */	bl OSRestoreInterrupts
/* 800DAD2C 000D7C6C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 800DAD30 000D7C70  38 21 00 08 */	addi r1, r1, 8
/* 800DAD34 000D7C74  7C 08 03 A6 */	mtlr r0
/* 800DAD38 000D7C78  4E 80 00 20 */	blr 

.global DSPInit
DSPInit:
/* 800DAD3C 000D7C7C  7C 08 02 A6 */	mflr r0
/* 800DAD40 000D7C80  3C 60 80 4A */	lis r3, lbl_804A7938@ha
/* 800DAD44 000D7C84  90 01 00 04 */	stw r0, 4(r1)
/* 800DAD48 000D7C88  38 A3 79 38 */	addi r5, r3, lbl_804A7938@l
/* 800DAD4C 000D7C8C  4C C6 31 82 */	crclr 6
/* 800DAD50 000D7C90  38 65 00 48 */	addi r3, r5, 0x48
/* 800DAD54 000D7C94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800DAD58 000D7C98  38 85 00 68 */	addi r4, r5, 0x68
/* 800DAD5C 000D7C9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800DAD60 000D7CA0  38 A5 00 74 */	addi r5, r5, 0x74
/* 800DAD64 000D7CA4  48 00 00 9D */	bl __DSP_debug_printf
/* 800DAD68 000D7CA8  80 0D 8D B0 */	lwz r0, __DSP_init_flag@sda21(r13)
/* 800DAD6C 000D7CAC  2C 00 00 01 */	cmpwi r0, 1
/* 800DAD70 000D7CB0  41 82 00 7C */	beq .L_800DADEC
/* 800DAD74 000D7CB4  80 6D 82 A0 */	lwz r3, __DSPVersion@sda21(r13)
/* 800DAD78 000D7CB8  48 01 0D 11 */	bl OSRegisterVersion
/* 800DAD7C 000D7CBC  48 01 3E BD */	bl OSDisableInterrupts
/* 800DAD80 000D7CC0  3C 80 80 0B */	lis r4, __DSPHandler@ha
/* 800DAD84 000D7CC4  3B E3 00 00 */	addi r31, r3, 0
/* 800DAD88 000D7CC8  38 84 AD 00 */	addi r4, r4, __DSPHandler@l
/* 800DAD8C 000D7CCC  38 60 00 07 */	li r3, 7
/* 800DAD90 000D7CD0  48 01 3E F5 */	bl __OSSetInterruptHandler
/* 800DAD94 000D7CD4  3C 60 01 00 */	lis r3, 0x100
/* 800DAD98 000D7CD8  48 01 42 F1 */	bl __OSUnmaskInterrupts
/* 800DAD9C 000D7CDC  3C 60 CC 00 */	lis r3, 0xCC005000@ha
/* 800DADA0 000D7CE0  38 C3 50 00 */	addi r6, r3, 0xCC005000@l
/* 800DADA4 000D7CE4  A0 63 50 0A */	lhz r3, 0x500a(r3)
/* 800DADA8 000D7CE8  38 00 FF 57 */	li r0, -169
/* 800DADAC 000D7CEC  7C 60 00 38 */	and r0, r3, r0
/* 800DADB0 000D7CF0  60 00 08 00 */	ori r0, r0, 0x800
/* 800DADB4 000D7CF4  B0 06 00 0A */	sth r0, 0xa(r6)
/* 800DADB8 000D7CF8  38 A0 FF 53 */	li r5, -173
/* 800DADBC 000D7CFC  38 80 00 00 */	li r4, 0
/* 800DADC0 000D7D00  A0 E6 00 0A */	lhz r7, 0xa(r6)
/* 800DADC4 000D7D04  38 00 00 01 */	li r0, 1
/* 800DADC8 000D7D08  38 7F 00 00 */	addi r3, r31, 0
/* 800DADCC 000D7D0C  7C E5 28 38 */	and r5, r7, r5
/* 800DADD0 000D7D10  B0 A6 00 0A */	sth r5, 0xa(r6)
/* 800DADD4 000D7D14  90 8D 8D B8 */	stw r4, __DSP_tmp_task@sda21(r13)
/* 800DADD8 000D7D18  90 8D 8D C4 */	stw r4, __DSP_curr_task@sda21(r13)
/* 800DADDC 000D7D1C  90 8D 8D BC */	stw r4, __DSP_last_task@sda21(r13)
/* 800DADE0 000D7D20  90 8D 8D C0 */	stw r4, __DSP_first_task@sda21(r13)
/* 800DADE4 000D7D24  90 0D 8D B0 */	stw r0, __DSP_init_flag@sda21(r13)
/* 800DADE8 000D7D28  48 01 3E 79 */	bl OSRestoreInterrupts
.L_800DADEC:
/* 800DADEC 000D7D2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800DADF0 000D7D30  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800DADF4 000D7D34  38 21 00 10 */	addi r1, r1, 0x10
/* 800DADF8 000D7D38  7C 08 03 A6 */	mtlr r0
/* 800DADFC 000D7D3C  4E 80 00 20 */	blr 
