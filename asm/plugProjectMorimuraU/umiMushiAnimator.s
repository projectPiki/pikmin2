.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game8UmiMushi14ProperAnimator
__vt__Q34Game8UmiMushi14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game8UmiMushi14ProperAnimatorFv
	.4byte setAnimMgr__Q34Game8UmiMushi14ProperAnimatorFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q34Game8UmiMushi14ProperAnimatorFv
	.4byte getAnimator__Q34Game8UmiMushi14ProperAnimatorFi
	.4byte animate__Q24Game17EnemyAnimatorBaseFf
	.4byte animate__Q24Game17EnemyAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game17EnemyAnimatorBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game8UmiMushi14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game8UmiMushi14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 803826C8 0037F608  90 83 00 20 */	stw r4, 0x20(r3)
/* 803826CC 0037F60C  4E 80 00 20 */	blr 

.global getAnimator__Q34Game8UmiMushi14ProperAnimatorFi
getAnimator__Q34Game8UmiMushi14ProperAnimatorFi:
/* 803826D0 0037F610  38 63 00 10 */	addi r3, r3, 0x10
/* 803826D4 0037F614  4E 80 00 20 */	blr 

.global __dt__Q34Game8UmiMushi14ProperAnimatorFv
__dt__Q34Game8UmiMushi14ProperAnimatorFv:
/* 803826D8 0037F618  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803826DC 0037F61C  7C 08 02 A6 */	mflr r0
/* 803826E0 0037F620  90 01 00 14 */	stw r0, 0x14(r1)
/* 803826E4 0037F624  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803826E8 0037F628  7C 7F 1B 79 */	or. r31, r3, r3
/* 803826EC 0037F62C  41 82 00 30 */	beq lbl_8038271C
/* 803826F0 0037F630  3C 60 80 4E */	lis r3, __vt__Q34Game8UmiMushi14ProperAnimator@ha
/* 803826F4 0037F634  38 03 45 40 */	addi r0, r3, __vt__Q34Game8UmiMushi14ProperAnimator@l
/* 803826F8 0037F638  90 1F 00 00 */	stw r0, 0(r31)
/* 803826FC 0037F63C  41 82 00 10 */	beq lbl_8038270C
/* 80382700 0037F640  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 80382704 0037F644  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 80382708 0037F648  90 1F 00 00 */	stw r0, 0(r31)
lbl_8038270C:
/* 8038270C 0037F64C  7C 80 07 35 */	extsh. r0, r4
/* 80382710 0037F650  40 81 00 0C */	ble lbl_8038271C
/* 80382714 0037F654  7F E3 FB 78 */	mr r3, r31
/* 80382718 0037F658  4B CA 19 9D */	bl __dl__FPv
lbl_8038271C:
/* 8038271C 0037F65C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80382720 0037F660  7F E3 FB 78 */	mr r3, r31
/* 80382724 0037F664  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80382728 0037F668  7C 08 03 A6 */	mtlr r0
/* 8038272C 0037F66C  38 21 00 10 */	addi r1, r1, 0x10
/* 80382730 0037F670  4E 80 00 20 */	blr 

.global getAnimator__Q34Game8UmiMushi14ProperAnimatorFv
getAnimator__Q34Game8UmiMushi14ProperAnimatorFv:
/* 80382734 0037F674  38 63 00 10 */	addi r3, r3, 0x10
/* 80382738 0037F678  4E 80 00 20 */	blr 
