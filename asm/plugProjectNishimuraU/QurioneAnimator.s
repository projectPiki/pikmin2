.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game7Qurione14ProperAnimator
__vt__Q34Game7Qurione14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game7Qurione14ProperAnimatorFv
	.4byte setAnimMgr__Q34Game7Qurione14ProperAnimatorFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q34Game7Qurione14ProperAnimatorFv
	.4byte getAnimator__Q34Game7Qurione14ProperAnimatorFi
	.4byte animate__Q24Game17EnemyAnimatorBaseFf
	.4byte animate__Q24Game17EnemyAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game17EnemyAnimatorBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game7Qurione14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game7Qurione14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 8026134C 0025E28C  90 83 00 20 */	stw r4, 0x20(r3)
/* 80261350 0025E290  4E 80 00 20 */	blr 

.global getAnimator__Q34Game7Qurione14ProperAnimatorFi
getAnimator__Q34Game7Qurione14ProperAnimatorFi:
/* 80261354 0025E294  38 63 00 10 */	addi r3, r3, 0x10
/* 80261358 0025E298  4E 80 00 20 */	blr 

.global __dt__Q34Game7Qurione14ProperAnimatorFv
__dt__Q34Game7Qurione14ProperAnimatorFv:
/* 8026135C 0025E29C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80261360 0025E2A0  7C 08 02 A6 */	mflr r0
/* 80261364 0025E2A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80261368 0025E2A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026136C 0025E2AC  7C 7F 1B 79 */	or. r31, r3, r3
/* 80261370 0025E2B0  41 82 00 30 */	beq lbl_802613A0
/* 80261374 0025E2B4  3C 60 80 4C */	lis r3, __vt__Q34Game7Qurione14ProperAnimator@ha
/* 80261378 0025E2B8  38 03 3A 78 */	addi r0, r3, __vt__Q34Game7Qurione14ProperAnimator@l
/* 8026137C 0025E2BC  90 1F 00 00 */	stw r0, 0(r31)
/* 80261380 0025E2C0  41 82 00 10 */	beq lbl_80261390
/* 80261384 0025E2C4  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 80261388 0025E2C8  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 8026138C 0025E2CC  90 1F 00 00 */	stw r0, 0(r31)
lbl_80261390:
/* 80261390 0025E2D0  7C 80 07 35 */	extsh. r0, r4
/* 80261394 0025E2D4  40 81 00 0C */	ble lbl_802613A0
/* 80261398 0025E2D8  7F E3 FB 78 */	mr r3, r31
/* 8026139C 0025E2DC  4B DC 2D 19 */	bl __dl__FPv
lbl_802613A0:
/* 802613A0 0025E2E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802613A4 0025E2E4  7F E3 FB 78 */	mr r3, r31
/* 802613A8 0025E2E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802613AC 0025E2EC  7C 08 03 A6 */	mtlr r0
/* 802613B0 0025E2F0  38 21 00 10 */	addi r1, r1, 0x10
/* 802613B4 0025E2F4  4E 80 00 20 */	blr 

.global getAnimator__Q34Game7Qurione14ProperAnimatorFv
getAnimator__Q34Game7Qurione14ProperAnimatorFv:
/* 802613B8 0025E2F8  38 63 00 10 */	addi r3, r3, 0x10
/* 802613BC 0025E2FC  4E 80 00 20 */	blr 
