.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global DspHandShake__FPv
DspHandShake__FPv:
/* 800AA900 000A7840  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AA904 000A7844  7C 08 02 A6 */	mflr r0
/* 800AA908 000A7848  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AA90C 000A784C  60 00 00 00 */	nop 
lbl_800AA910:
/* 800AA910 000A7850  48 03 03 B1 */	bl DSPCheckMailFromDSP
/* 800AA914 000A7854  28 03 00 00 */	cmplwi r3, 0
/* 800AA918 000A7858  41 82 FF F8 */	beq lbl_800AA910
/* 800AA91C 000A785C  48 03 03 B5 */	bl DSPReadMailFromDSP
/* 800AA920 000A7860  48 03 03 A1 */	bl DSPCheckMailFromDSP
/* 800AA924 000A7864  48 00 07 BD */	bl Dsp_Running_Start__Fv
/* 800AA928 000A7868  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AA92C 000A786C  7C 08 03 A6 */	mtlr r0
/* 800AA930 000A7870  38 21 00 10 */	addi r1, r1, 0x10
/* 800AA934 000A7874  4E 80 00 20 */	blr 
/* 800AA938 000A7878  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800AA93C 000A787C  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */

.global DspBoot__FPFPv_v
DspBoot__FPFPv_v:
/* 800AA940 000A7880  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AA944 000A7884  7C 08 02 A6 */	mflr r0
/* 800AA948 000A7888  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AA94C 000A788C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800AA950 000A7890  7C 7F 1B 78 */	mr r31, r3
/* 800AA954 000A7894  48 00 01 AD */	bl DspInitWork__Fv
/* 800AA958 000A7898  3C 80 80 4A */	lis r4, jdsp@ha
/* 800AA95C 000A789C  3C 60 80 4F */	lis r3, AUDIO_YIELD_BUFFER@ha
/* 800AA960 000A78A0  38 A4 44 E0 */	addi r5, r4, jdsp@l
/* 800AA964 000A78A4  3C C0 80 4F */	lis r6, audio_task@ha
/* 800AA968 000A78A8  38 83 07 E0 */	addi r4, r3, AUDIO_YIELD_BUFFER@l
/* 800AA96C 000A78AC  3C 60 80 0B */	lis r3, DspHandShake__FPv@ha
/* 800AA970 000A78B0  39 26 07 80 */	addi r9, r6, audio_task@l
/* 800AA974 000A78B4  38 C0 00 00 */	li r6, 0
/* 800AA978 000A78B8  3D 05 80 00 */	addis r8, r5, 0x8000
/* 800AA97C 000A78BC  3C A4 80 00 */	addis r5, r4, 0x8000
/* 800AA980 000A78C0  38 03 A9 00 */	addi r0, r3, DspHandShake__FPv@l
/* 800AA984 000A78C4  39 40 00 F0 */	li r10, 0xf0
/* 800AA988 000A78C8  38 E0 1D 20 */	li r7, 0x1d20
/* 800AA98C 000A78CC  38 80 20 00 */	li r4, 0x2000
/* 800AA990 000A78D0  38 60 00 10 */	li r3, 0x10
/* 800AA994 000A78D4  91 49 00 04 */	stw r10, 4(r9)
/* 800AA998 000A78D8  91 09 00 0C */	stw r8, 0xc(r9)
/* 800AA99C 000A78DC  90 E9 00 10 */	stw r7, 0x10(r9)
/* 800AA9A0 000A78E0  90 C9 00 14 */	stw r6, 0x14(r9)
/* 800AA9A4 000A78E4  90 A9 00 18 */	stw r5, 0x18(r9)
/* 800AA9A8 000A78E8  90 89 00 1C */	stw r4, 0x1c(r9)
/* 800AA9AC 000A78EC  90 C9 00 20 */	stw r6, 0x20(r9)
/* 800AA9B0 000A78F0  B0 C9 00 24 */	sth r6, 0x24(r9)
/* 800AA9B4 000A78F4  B0 69 00 26 */	sth r3, 0x26(r9)
/* 800AA9B8 000A78F8  90 09 00 28 */	stw r0, 0x28(r9)
/* 800AA9BC 000A78FC  90 C9 00 2C */	stw r6, 0x2c(r9)
/* 800AA9C0 000A7900  90 C9 00 30 */	stw r6, 0x30(r9)
/* 800AA9C4 000A7904  93 E9 00 34 */	stw r31, 0x34(r9)
/* 800AA9C8 000A7908  48 03 03 75 */	bl DSPInit
/* 800AA9CC 000A790C  3C 60 80 4F */	lis r3, audio_task@ha
/* 800AA9D0 000A7910  38 63 07 80 */	addi r3, r3, audio_task@l
/* 800AA9D4 000A7914  48 00 02 AD */	bl DSPAddPriorTask__FP15STRUCT_DSP_TASK
/* 800AA9D8 000A7918  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AA9DC 000A791C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800AA9E0 000A7920  7C 08 03 A6 */	mtlr r0
/* 800AA9E4 000A7924  38 21 00 10 */	addi r1, r1, 0x10
/* 800AA9E8 000A7928  4E 80 00 20 */	blr 
/* 800AA9EC 000A792C  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800AA9F0 000A7930  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800AA9F4 000A7934  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800AA9F8 000A7938  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800AA9FC 000A793C  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */

.global DSPSendCommands2__FPUlUlPFUs_v
DSPSendCommands2__FPUlUlPFUs_v:
/* 800AAA00 000A7940  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800AAA04 000A7944  7C 08 02 A6 */	mflr r0
/* 800AAA08 000A7948  90 01 00 24 */	stw r0, 0x24(r1)
/* 800AAA0C 000A794C  39 61 00 20 */	addi r11, r1, 0x20
/* 800AAA10 000A7950  48 01 72 61 */	bl func_800C1C70
/* 800AAA14 000A7954  7C 7A 1B 78 */	mr r26, r3
/* 800AAA18 000A7958  7C 9B 23 78 */	mr r27, r4
/* 800AAA1C 000A795C  7C BE 2B 78 */	mr r30, r5
lbl_800AAA20:
/* 800AAA20 000A7960  48 00 06 A1 */	bl Dsp_Running_Check__Fv
/* 800AAA24 000A7964  2C 03 00 00 */	cmpwi r3, 0
/* 800AAA28 000A7968  41 82 FF F8 */	beq lbl_800AAA20
/* 800AAA2C 000A796C  48 04 42 0D */	bl OSDisableInterrupts
/* 800AAA30 000A7970  7C 7D 1B 78 */	mr r29, r3
/* 800AAA34 000A7974  48 03 02 7D */	bl DSPCheckMailToDSP
/* 800AAA38 000A7978  28 03 00 00 */	cmplwi r3, 0
/* 800AAA3C 000A797C  41 82 00 14 */	beq lbl_800AAA50
/* 800AAA40 000A7980  7F A3 EB 78 */	mr r3, r29
/* 800AAA44 000A7984  48 04 42 1D */	bl OSRestoreInterrupts
/* 800AAA48 000A7988  38 60 FF FF */	li r3, -1
/* 800AAA4C 000A798C  48 00 00 84 */	b lbl_800AAAD0
lbl_800AAA50:
/* 800AAA50 000A7990  7F 63 DB 78 */	mr r3, r27
/* 800AAA54 000A7994  48 03 02 95 */	bl DSPSendMailToDSP
/* 800AAA58 000A7998  48 03 02 A5 */	bl DSPAssertInt
/* 800AAA5C 000A799C  60 00 00 00 */	nop 
lbl_800AAA60:
/* 800AAA60 000A79A0  48 03 02 51 */	bl DSPCheckMailToDSP
/* 800AAA64 000A79A4  28 03 00 00 */	cmplwi r3, 0
/* 800AAA68 000A79A8  40 82 FF F8 */	bne lbl_800AAA60
/* 800AAA6C 000A79AC  28 1B 00 00 */	cmplwi r27, 0
/* 800AAA70 000A79B0  40 82 00 08 */	bne lbl_800AAA78
/* 800AAA74 000A79B4  3B 60 00 01 */	li r27, 1
lbl_800AAA78:
/* 800AAA78 000A79B8  28 1E 00 00 */	cmplwi r30, 0
/* 800AAA7C 000A79BC  41 82 00 14 */	beq lbl_800AAA90
/* 800AAA80 000A79C0  80 7A 00 00 */	lwz r3, 0(r26)
/* 800AAA84 000A79C4  7F C4 F3 78 */	mr r4, r30
/* 800AAA88 000A79C8  48 00 00 B9 */	bl DspStartWork__FUlPFUs_v
/* 800AAA8C 000A79CC  7C 7C 1B 78 */	mr r28, r3
lbl_800AAA90:
/* 800AAA90 000A79D0  3B C0 00 00 */	li r30, 0
/* 800AAA94 000A79D4  3B E0 00 00 */	li r31, 0
/* 800AAA98 000A79D8  48 00 00 24 */	b lbl_800AAABC
lbl_800AAA9C:
/* 800AAA9C 000A79DC  7C 7A F8 2E */	lwzx r3, r26, r31
/* 800AAAA0 000A79E0  48 03 02 49 */	bl DSPSendMailToDSP
/* 800AAAA4 000A79E4  60 00 00 00 */	nop 
lbl_800AAAA8:
/* 800AAAA8 000A79E8  48 03 02 09 */	bl DSPCheckMailToDSP
/* 800AAAAC 000A79EC  28 03 00 00 */	cmplwi r3, 0
/* 800AAAB0 000A79F0  40 82 FF F8 */	bne lbl_800AAAA8
/* 800AAAB4 000A79F4  3B DE 00 01 */	addi r30, r30, 1
/* 800AAAB8 000A79F8  3B FF 00 04 */	addi r31, r31, 4
lbl_800AAABC:
/* 800AAABC 000A79FC  7C 1E D8 40 */	cmplw r30, r27
/* 800AAAC0 000A7A00  41 80 FF DC */	blt lbl_800AAA9C
/* 800AAAC4 000A7A04  7F A3 EB 78 */	mr r3, r29
/* 800AAAC8 000A7A08  48 04 41 99 */	bl OSRestoreInterrupts
/* 800AAACC 000A7A0C  7F 83 E3 78 */	mr r3, r28
lbl_800AAAD0:
/* 800AAAD0 000A7A10  39 61 00 20 */	addi r11, r1, 0x20
/* 800AAAD4 000A7A14  48 01 71 E9 */	bl func_800C1CBC
/* 800AAAD8 000A7A18  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800AAADC 000A7A1C  7C 08 03 A6 */	mtlr r0
/* 800AAAE0 000A7A20  38 21 00 20 */	addi r1, r1, 0x20
/* 800AAAE4 000A7A24  4E 80 00 20 */	blr 
/* 800AAAE8 000A7A28  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800AAAEC 000A7A2C  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800AAAF0 000A7A30  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800AAAF4 000A7A34  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800AAAF8 000A7A38  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800AAAFC 000A7A3C  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */

.global DspInitWork__Fv
DspInitWork__Fv:
/* 800AAB00 000A7A40  38 60 00 00 */	li r3, 0
/* 800AAB04 000A7A44  3C 80 80 4F */	lis r4, taskwork@ha
/* 800AAB08 000A7A48  38 00 00 10 */	li r0, 0x10
/* 800AAB0C 000A7A4C  7C 66 1B 78 */	mr r6, r3
/* 800AAB10 000A7A50  38 A4 27 E0 */	addi r5, r4, taskwork@l
/* 800AAB14 000A7A54  7C 09 03 A6 */	mtctr r0
lbl_800AAB18:
/* 800AAB18 000A7A58  7C 85 1A 14 */	add r4, r5, r3
/* 800AAB1C 000A7A5C  38 63 00 08 */	addi r3, r3, 8
/* 800AAB20 000A7A60  90 C4 00 04 */	stw r6, 4(r4)
/* 800AAB24 000A7A64  42 00 FF F4 */	bdnz lbl_800AAB18
/* 800AAB28 000A7A68  4E 80 00 20 */	blr 
/* 800AAB2C 000A7A6C  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800AAB30 000A7A70  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800AAB34 000A7A74  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800AAB38 000A7A78  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800AAB3C 000A7A7C  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */

.global DspStartWork__FUlPFUs_v
DspStartWork__FUlPFUs_v:
/* 800AAB40 000A7A80  80 ED 8B 3C */	lwz r7, taskwritep@sda21(r13)
/* 800AAB44 000A7A84  80 0D 8B 38 */	lwz r0, taskreadp@sda21(r13)
/* 800AAB48 000A7A88  38 C7 00 01 */	addi r6, r7, 1
/* 800AAB4C 000A7A8C  54 C8 07 3E */	clrlwi r8, r6, 0x1c
/* 800AAB50 000A7A90  7C 08 00 40 */	cmplw r8, r0
/* 800AAB54 000A7A94  40 82 00 0C */	bne lbl_800AAB60
/* 800AAB58 000A7A98  38 60 00 00 */	li r3, 0
/* 800AAB5C 000A7A9C  4E 80 00 20 */	blr 
lbl_800AAB60:
/* 800AAB60 000A7AA0  3C A0 80 4F */	lis r5, taskwork@ha
/* 800AAB64 000A7AA4  54 60 84 3E */	srwi r0, r3, 0x10
/* 800AAB68 000A7AA8  54 E7 18 38 */	slwi r7, r7, 3
/* 800AAB6C 000A7AAC  91 0D 8B 3C */	stw r8, taskwritep@sda21(r13)
/* 800AAB70 000A7AB0  38 A5 27 E0 */	addi r5, r5, taskwork@l
/* 800AAB74 000A7AB4  7C C3 33 78 */	mr r3, r6
/* 800AAB78 000A7AB8  7C 05 3B 2E */	sthx r0, r5, r7
/* 800AAB7C 000A7ABC  7C A5 3A 14 */	add r5, r5, r7
/* 800AAB80 000A7AC0  90 85 00 04 */	stw r4, 4(r5)
/* 800AAB84 000A7AC4  4E 80 00 20 */	blr 
/* 800AAB88 000A7AC8  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800AAB8C 000A7ACC  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800AAB90 000A7AD0  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800AAB94 000A7AD4  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800AAB98 000A7AD8  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800AAB9C 000A7ADC  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */

.global DspFinishWork__FUs
DspFinishWork__FUs:
/* 800AABA0 000A7AE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AABA4 000A7AE4  7C 08 02 A6 */	mflr r0
/* 800AABA8 000A7AE8  3C 80 80 4F */	lis r4, taskwork@ha
/* 800AABAC 000A7AEC  54 63 04 3E */	clrlwi r3, r3, 0x10
/* 800AABB0 000A7AF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AABB4 000A7AF4  38 84 27 E0 */	addi r4, r4, taskwork@l
/* 800AABB8 000A7AF8  80 CD 8B 38 */	lwz r6, taskreadp@sda21(r13)
/* 800AABBC 000A7AFC  54 C5 18 38 */	slwi r5, r6, 3
/* 800AABC0 000A7B00  7C 04 2A 2E */	lhzx r0, r4, r5
/* 800AABC4 000A7B04  7C 03 00 40 */	cmplw r3, r0
/* 800AABC8 000A7B08  40 82 00 30 */	bne lbl_800AABF8
/* 800AABCC 000A7B0C  7C 64 2A 14 */	add r3, r4, r5
/* 800AABD0 000A7B10  81 83 00 04 */	lwz r12, 4(r3)
/* 800AABD4 000A7B14  28 0C 00 00 */	cmplwi r12, 0
/* 800AABD8 000A7B18  41 82 00 10 */	beq lbl_800AABE8
/* 800AABDC 000A7B1C  54 C3 04 3E */	clrlwi r3, r6, 0x10
/* 800AABE0 000A7B20  7D 89 03 A6 */	mtctr r12
/* 800AABE4 000A7B24  4E 80 04 21 */	bctrl 
lbl_800AABE8:
/* 800AABE8 000A7B28  80 6D 8B 38 */	lwz r3, taskreadp@sda21(r13)
/* 800AABEC 000A7B2C  38 03 00 01 */	addi r0, r3, 1
/* 800AABF0 000A7B30  54 00 07 3E */	clrlwi r0, r0, 0x1c
/* 800AABF4 000A7B34  90 0D 8B 38 */	stw r0, taskreadp@sda21(r13)
lbl_800AABF8:
/* 800AABF8 000A7B38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AABFC 000A7B3C  7C 08 03 A6 */	mtlr r0
/* 800AAC00 000A7B40  38 21 00 10 */	addi r1, r1, 0x10
/* 800AAC04 000A7B44  4E 80 00 20 */	blr 
/* 800AAC08 000A7B48  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800AAC0C 000A7B4C  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800AAC10 000A7B50  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800AAC14 000A7B54  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800AAC18 000A7B58  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800AAC1C 000A7B5C  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
