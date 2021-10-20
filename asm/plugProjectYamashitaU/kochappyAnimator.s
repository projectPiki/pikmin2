.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game12KochappyBase14ProperAnimator
__vt__Q34Game12KochappyBase14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game12KochappyBase14ProperAnimatorFv
	.4byte setAnimMgr__Q34Game12KochappyBase14ProperAnimatorFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q34Game12KochappyBase14ProperAnimatorFv
	.4byte getAnimator__Q34Game12KochappyBase14ProperAnimatorFi
	.4byte animate__Q24Game17EnemyAnimatorBaseFf
	.4byte animate__Q24Game17EnemyAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game17EnemyAnimatorBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game12KochappyBase14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game12KochappyBase14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 8010F2A8 0010C1E8  90 83 00 20 */	stw r4, 0x20(r3)
/* 8010F2AC 0010C1EC  4E 80 00 20 */	blr 

.global getAnimator__Q34Game12KochappyBase14ProperAnimatorFi
getAnimator__Q34Game12KochappyBase14ProperAnimatorFi:
/* 8010F2B0 0010C1F0  38 63 00 10 */	addi r3, r3, 0x10
/* 8010F2B4 0010C1F4  4E 80 00 20 */	blr 

.global __dt__Q34Game12KochappyBase14ProperAnimatorFv
__dt__Q34Game12KochappyBase14ProperAnimatorFv:
/* 8010F2B8 0010C1F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010F2BC 0010C1FC  7C 08 02 A6 */	mflr r0
/* 8010F2C0 0010C200  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010F2C4 0010C204  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8010F2C8 0010C208  7C 7F 1B 79 */	or. r31, r3, r3
/* 8010F2CC 0010C20C  41 82 00 30 */	beq lbl_8010F2FC
/* 8010F2D0 0010C210  3C 60 80 4B */	lis r3, __vt__Q34Game12KochappyBase14ProperAnimator@ha
/* 8010F2D4 0010C214  38 03 B6 28 */	addi r0, r3, __vt__Q34Game12KochappyBase14ProperAnimator@l
/* 8010F2D8 0010C218  90 1F 00 00 */	stw r0, 0(r31)
/* 8010F2DC 0010C21C  41 82 00 10 */	beq lbl_8010F2EC
/* 8010F2E0 0010C220  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 8010F2E4 0010C224  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 8010F2E8 0010C228  90 1F 00 00 */	stw r0, 0(r31)
lbl_8010F2EC:
/* 8010F2EC 0010C22C  7C 80 07 35 */	extsh. r0, r4
/* 8010F2F0 0010C230  40 81 00 0C */	ble lbl_8010F2FC
/* 8010F2F4 0010C234  7F E3 FB 78 */	mr r3, r31
/* 8010F2F8 0010C238  4B F1 4D BD */	bl __dl__FPv
lbl_8010F2FC:
/* 8010F2FC 0010C23C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010F300 0010C240  7F E3 FB 78 */	mr r3, r31
/* 8010F304 0010C244  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8010F308 0010C248  7C 08 03 A6 */	mtlr r0
/* 8010F30C 0010C24C  38 21 00 10 */	addi r1, r1, 0x10
/* 8010F310 0010C250  4E 80 00 20 */	blr 

.global getAnimator__Q34Game12KochappyBase14ProperAnimatorFv
getAnimator__Q34Game12KochappyBase14ProperAnimatorFv:
/* 8010F314 0010C254  38 63 00 10 */	addi r3, r3, 0x10
/* 8010F318 0010C258  4E 80 00 20 */	blr 
