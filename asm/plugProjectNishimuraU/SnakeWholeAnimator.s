.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game10SnakeWhole14ProperAnimator
__vt__Q34Game10SnakeWhole14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game10SnakeWhole14ProperAnimatorFv
	.4byte setAnimMgr__Q34Game10SnakeWhole14ProperAnimatorFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q34Game10SnakeWhole14ProperAnimatorFv
	.4byte getAnimator__Q34Game10SnakeWhole14ProperAnimatorFi
	.4byte animate__Q24Game17EnemyAnimatorBaseFf
	.4byte animate__Q24Game17EnemyAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game17EnemyAnimatorBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game10SnakeWhole14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game10SnakeWhole14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 802CE268 002CB1A8  90 83 00 20 */	stw r4, 0x20(r3)
/* 802CE26C 002CB1AC  4E 80 00 20 */	blr 

.global getAnimator__Q34Game10SnakeWhole14ProperAnimatorFi
getAnimator__Q34Game10SnakeWhole14ProperAnimatorFi:
/* 802CE270 002CB1B0  38 63 00 10 */	addi r3, r3, 0x10
/* 802CE274 002CB1B4  4E 80 00 20 */	blr 

.global __dt__Q34Game10SnakeWhole14ProperAnimatorFv
__dt__Q34Game10SnakeWhole14ProperAnimatorFv:
/* 802CE278 002CB1B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CE27C 002CB1BC  7C 08 02 A6 */	mflr r0
/* 802CE280 002CB1C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CE284 002CB1C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CE288 002CB1C8  7C 7F 1B 79 */	or. r31, r3, r3
/* 802CE28C 002CB1CC  41 82 00 30 */	beq lbl_802CE2BC
/* 802CE290 002CB1D0  3C 60 80 4D */	lis r3, __vt__Q34Game10SnakeWhole14ProperAnimator@ha
/* 802CE294 002CB1D4  38 03 23 30 */	addi r0, r3, __vt__Q34Game10SnakeWhole14ProperAnimator@l
/* 802CE298 002CB1D8  90 1F 00 00 */	stw r0, 0(r31)
/* 802CE29C 002CB1DC  41 82 00 10 */	beq lbl_802CE2AC
/* 802CE2A0 002CB1E0  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 802CE2A4 002CB1E4  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 802CE2A8 002CB1E8  90 1F 00 00 */	stw r0, 0(r31)
lbl_802CE2AC:
/* 802CE2AC 002CB1EC  7C 80 07 35 */	extsh. r0, r4
/* 802CE2B0 002CB1F0  40 81 00 0C */	ble lbl_802CE2BC
/* 802CE2B4 002CB1F4  7F E3 FB 78 */	mr r3, r31
/* 802CE2B8 002CB1F8  4B D5 5D FD */	bl __dl__FPv
lbl_802CE2BC:
/* 802CE2BC 002CB1FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CE2C0 002CB200  7F E3 FB 78 */	mr r3, r31
/* 802CE2C4 002CB204  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CE2C8 002CB208  7C 08 03 A6 */	mtlr r0
/* 802CE2CC 002CB20C  38 21 00 10 */	addi r1, r1, 0x10
/* 802CE2D0 002CB210  4E 80 00 20 */	blr 

.global getAnimator__Q34Game10SnakeWhole14ProperAnimatorFv
getAnimator__Q34Game10SnakeWhole14ProperAnimatorFv:
/* 802CE2D4 002CB214  38 63 00 10 */	addi r3, r3, 0x10
/* 802CE2D8 002CB218  4E 80 00 20 */	blr 
