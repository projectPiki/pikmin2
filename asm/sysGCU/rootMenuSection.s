.include "macros.inc"
.section .data, "wa"	# 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__15RootMenuSection
__vt__15RootMenuSection:
	.4byte 0
	.4byte 0
	.4byte __dt__15RootMenuSectionFv
	.4byte run__11MenuSectionFv
	.4byte update__7SectionFv
	.4byte draw__7SectionFR8Graphics
	.4byte init__7SectionFv
	.4byte drawInit__15RootMenuSectionFR8Graphics
	.4byte drawInit__7SectionFR8GraphicsQ27Section13EDrawInitMode
	.4byte doExit__7SectionFv
	.4byte forceFinish__7SectionFv
	.4byte forceReset__7SectionFv
	.4byte getCurrentSection__11MenuSectionFv
	.4byte doLoadingStart__7SectionFv
	.4byte doLoading__7SectionFv
	.4byte doUpdate__15RootMenuSectionFv
	.4byte doDraw__15RootMenuSectionFR8Graphics
	.4byte isFinishable__7SectionFv
	.4byte setChildSection__15RootMenuSectionFP7JKRHeap
	.4byte 0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__15RootMenuSectionFP7JKRHeap
__ct__15RootMenuSectionFP7JKRHeap:
/* 8044CACC 00449A0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044CAD0 00449A10  7C 08 02 A6 */	mflr r0
/* 8044CAD4 00449A14  7C 85 23 78 */	mr r5, r4
/* 8044CAD8 00449A18  38 80 00 00 */	li r4, 0
/* 8044CADC 00449A1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044CAE0 00449A20  38 C0 00 00 */	li r6, 0
/* 8044CAE4 00449A24  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8044CAE8 00449A28  7C 7F 1B 78 */	mr r31, r3
/* 8044CAEC 00449A2C  4B FD 7A E1 */	bl __ct__11MenuSectionFP10JFWDisplayP7JKRHeapb
/* 8044CAF0 00449A30  3C 80 80 4F */	lis r4, __vt__15RootMenuSection@ha
/* 8044CAF4 00449A34  7F E3 FB 78 */	mr r3, r31
/* 8044CAF8 00449A38  38 04 D2 D8 */	addi r0, r4, __vt__15RootMenuSection@l
/* 8044CAFC 00449A3C  90 1F 00 00 */	stw r0, 0(r31)
/* 8044CB00 00449A40  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044CB04 00449A44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044CB08 00449A48  7C 08 03 A6 */	mtlr r0
/* 8044CB0C 00449A4C  38 21 00 10 */	addi r1, r1, 0x10
/* 8044CB10 00449A50  4E 80 00 20 */	blr 

.global __dt__15RootMenuSectionFv
__dt__15RootMenuSectionFv:
/* 8044CB14 00449A54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044CB18 00449A58  7C 08 02 A6 */	mflr r0
/* 8044CB1C 00449A5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044CB20 00449A60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8044CB24 00449A64  7C 9F 23 78 */	mr r31, r4
/* 8044CB28 00449A68  93 C1 00 08 */	stw r30, 8(r1)
/* 8044CB2C 00449A6C  7C 7E 1B 79 */	or. r30, r3, r3
/* 8044CB30 00449A70  41 82 00 38 */	beq lbl_8044CB68
/* 8044CB34 00449A74  3C 80 80 4F */	lis r4, __vt__15RootMenuSection@ha
/* 8044CB38 00449A78  38 04 D2 D8 */	addi r0, r4, __vt__15RootMenuSection@l
/* 8044CB3C 00449A7C  90 1E 00 00 */	stw r0, 0(r30)
/* 8044CB40 00449A80  41 82 00 18 */	beq lbl_8044CB58
/* 8044CB44 00449A84  3C A0 80 4F */	lis r5, __vt__11MenuSection@ha
/* 8044CB48 00449A88  38 80 00 00 */	li r4, 0
/* 8044CB4C 00449A8C  38 05 BD 38 */	addi r0, r5, __vt__11MenuSection@l
/* 8044CB50 00449A90  90 1E 00 00 */	stw r0, 0(r30)
/* 8044CB54 00449A94  4B FD 6E 51 */	bl __dt__7SectionFv
lbl_8044CB58:
/* 8044CB58 00449A98  7F E0 07 35 */	extsh. r0, r31
/* 8044CB5C 00449A9C  40 81 00 0C */	ble lbl_8044CB68
/* 8044CB60 00449AA0  7F C3 F3 78 */	mr r3, r30
/* 8044CB64 00449AA4  4B BD 75 51 */	bl __dl__FPv
lbl_8044CB68:
/* 8044CB68 00449AA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044CB6C 00449AAC  7F C3 F3 78 */	mr r3, r30
/* 8044CB70 00449AB0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044CB74 00449AB4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8044CB78 00449AB8  7C 08 03 A6 */	mtlr r0
/* 8044CB7C 00449ABC  38 21 00 10 */	addi r1, r1, 0x10
/* 8044CB80 00449AC0  4E 80 00 20 */	blr 

.global setChildSection__15RootMenuSectionFP7JKRHeap
setChildSection__15RootMenuSectionFP7JKRHeap:
/* 8044CB84 00449AC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044CB88 00449AC8  7C 08 02 A6 */	mflr r0
/* 8044CB8C 00449ACC  7C 83 23 78 */	mr r3, r4
/* 8044CB90 00449AD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044CB94 00449AD4  4B FD 78 89 */	bl createSection__8GameFlowFP7JKRHeap
/* 8044CB98 00449AD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044CB9C 00449ADC  7C 08 03 A6 */	mtlr r0
/* 8044CBA0 00449AE0  38 21 00 10 */	addi r1, r1, 0x10
/* 8044CBA4 00449AE4  4E 80 00 20 */	blr 

.global drawInit__15RootMenuSectionFR8Graphics
drawInit__15RootMenuSectionFR8Graphics:
/* 8044CBA8 00449AE8  4E 80 00 20 */	blr 

.global doUpdate__15RootMenuSectionFv
doUpdate__15RootMenuSectionFv:
/* 8044CBAC 00449AEC  38 60 00 00 */	li r3, 0
/* 8044CBB0 00449AF0  4E 80 00 20 */	blr 

.global doDraw__15RootMenuSectionFR8Graphics
doDraw__15RootMenuSectionFR8Graphics:
/* 8044CBB4 00449AF4  4E 80 00 20 */	blr 
