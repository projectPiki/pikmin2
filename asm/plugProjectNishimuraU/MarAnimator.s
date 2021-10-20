.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game3Mar14ProperAnimator
__vt__Q34Game3Mar14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game3Mar14ProperAnimatorFv
	.4byte setAnimMgr__Q34Game3Mar14ProperAnimatorFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q34Game3Mar14ProperAnimatorFv
	.4byte getAnimator__Q34Game3Mar14ProperAnimatorFi
	.4byte animate__Q24Game17EnemyAnimatorBaseFf
	.4byte animate__Q24Game17EnemyAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game17EnemyAnimatorBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game3Mar14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game3Mar14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 80281E9C 0027EDDC  90 83 00 20 */	stw r4, 0x20(r3)
/* 80281EA0 0027EDE0  4E 80 00 20 */	blr 

.global getAnimator__Q34Game3Mar14ProperAnimatorFi
getAnimator__Q34Game3Mar14ProperAnimatorFi:
/* 80281EA4 0027EDE4  38 63 00 10 */	addi r3, r3, 0x10
/* 80281EA8 0027EDE8  4E 80 00 20 */	blr 

.global __dt__Q34Game3Mar14ProperAnimatorFv
__dt__Q34Game3Mar14ProperAnimatorFv:
/* 80281EAC 0027EDEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80281EB0 0027EDF0  7C 08 02 A6 */	mflr r0
/* 80281EB4 0027EDF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80281EB8 0027EDF8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80281EBC 0027EDFC  7C 7F 1B 79 */	or. r31, r3, r3
/* 80281EC0 0027EE00  41 82 00 30 */	beq lbl_80281EF0
/* 80281EC4 0027EE04  3C 60 80 4D */	lis r3, __vt__Q34Game3Mar14ProperAnimator@ha
/* 80281EC8 0027EE08  38 03 8C 78 */	addi r0, r3, __vt__Q34Game3Mar14ProperAnimator@l
/* 80281ECC 0027EE0C  90 1F 00 00 */	stw r0, 0(r31)
/* 80281ED0 0027EE10  41 82 00 10 */	beq lbl_80281EE0
/* 80281ED4 0027EE14  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 80281ED8 0027EE18  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 80281EDC 0027EE1C  90 1F 00 00 */	stw r0, 0(r31)
lbl_80281EE0:
/* 80281EE0 0027EE20  7C 80 07 35 */	extsh. r0, r4
/* 80281EE4 0027EE24  40 81 00 0C */	ble lbl_80281EF0
/* 80281EE8 0027EE28  7F E3 FB 78 */	mr r3, r31
/* 80281EEC 0027EE2C  4B DA 21 C9 */	bl __dl__FPv
lbl_80281EF0:
/* 80281EF0 0027EE30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80281EF4 0027EE34  7F E3 FB 78 */	mr r3, r31
/* 80281EF8 0027EE38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80281EFC 0027EE3C  7C 08 03 A6 */	mtlr r0
/* 80281F00 0027EE40  38 21 00 10 */	addi r1, r1, 0x10
/* 80281F04 0027EE44  4E 80 00 20 */	blr 

.global getAnimator__Q34Game3Mar14ProperAnimatorFv
getAnimator__Q34Game3Mar14ProperAnimatorFv:
/* 80281F08 0027EE48  38 63 00 10 */	addi r3, r3, 0x10
/* 80281F0C 0027EE4C  4E 80 00 20 */	blr 
