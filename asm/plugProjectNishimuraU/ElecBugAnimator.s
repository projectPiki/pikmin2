.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game7ElecBug14ProperAnimator
__vt__Q34Game7ElecBug14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game7ElecBug14ProperAnimatorFv
	.4byte setAnimMgr__Q34Game7ElecBug14ProperAnimatorFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q34Game7ElecBug14ProperAnimatorFv
	.4byte getAnimator__Q34Game7ElecBug14ProperAnimatorFi
	.4byte animate__Q24Game17EnemyAnimatorBaseFf
	.4byte animate__Q24Game17EnemyAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game17EnemyAnimatorBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game7ElecBug14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game7ElecBug14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 8027A828 00277768  90 83 00 20 */	stw r4, 0x20(r3)
/* 8027A82C 0027776C  4E 80 00 20 */	blr 

.global getAnimator__Q34Game7ElecBug14ProperAnimatorFi
getAnimator__Q34Game7ElecBug14ProperAnimatorFi:
/* 8027A830 00277770  38 63 00 10 */	addi r3, r3, 0x10
/* 8027A834 00277774  4E 80 00 20 */	blr 

.global __dt__Q34Game7ElecBug14ProperAnimatorFv
__dt__Q34Game7ElecBug14ProperAnimatorFv:
/* 8027A838 00277778  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027A83C 0027777C  7C 08 02 A6 */	mflr r0
/* 8027A840 00277780  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027A844 00277784  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027A848 00277788  7C 7F 1B 79 */	or. r31, r3, r3
/* 8027A84C 0027778C  41 82 00 30 */	beq lbl_8027A87C
/* 8027A850 00277790  3C 60 80 4C */	lis r3, __vt__Q34Game7ElecBug14ProperAnimator@ha
/* 8027A854 00277794  38 03 7A 00 */	addi r0, r3, __vt__Q34Game7ElecBug14ProperAnimator@l
/* 8027A858 00277798  90 1F 00 00 */	stw r0, 0(r31)
/* 8027A85C 0027779C  41 82 00 10 */	beq lbl_8027A86C
/* 8027A860 002777A0  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 8027A864 002777A4  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 8027A868 002777A8  90 1F 00 00 */	stw r0, 0(r31)
lbl_8027A86C:
/* 8027A86C 002777AC  7C 80 07 35 */	extsh. r0, r4
/* 8027A870 002777B0  40 81 00 0C */	ble lbl_8027A87C
/* 8027A874 002777B4  7F E3 FB 78 */	mr r3, r31
/* 8027A878 002777B8  4B DA 98 3D */	bl __dl__FPv
lbl_8027A87C:
/* 8027A87C 002777BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027A880 002777C0  7F E3 FB 78 */	mr r3, r31
/* 8027A884 002777C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027A888 002777C8  7C 08 03 A6 */	mtlr r0
/* 8027A88C 002777CC  38 21 00 10 */	addi r1, r1, 0x10
/* 8027A890 002777D0  4E 80 00 20 */	blr 

.global getAnimator__Q34Game7ElecBug14ProperAnimatorFv
getAnimator__Q34Game7ElecBug14ProperAnimatorFv:
/* 8027A894 002777D4  38 63 00 10 */	addi r3, r3, 0x10
/* 8027A898 002777D8  4E 80 00 20 */	blr 
