.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game8Imomushi14ProperAnimator
__vt__Q34Game8Imomushi14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game8Imomushi14ProperAnimatorFv
	.4byte setAnimMgr__Q34Game8Imomushi14ProperAnimatorFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q34Game8Imomushi14ProperAnimatorFv
	.4byte getAnimator__Q34Game8Imomushi14ProperAnimatorFi
	.4byte animate__Q24Game17EnemyAnimatorBaseFf
	.4byte animate__Q24Game17EnemyAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game17EnemyAnimatorBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game8Imomushi14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game8Imomushi14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 802BBC60 002B8BA0  90 83 00 20 */	stw r4, 0x20(r3)
/* 802BBC64 002B8BA4  4E 80 00 20 */	blr 

.global getAnimator__Q34Game8Imomushi14ProperAnimatorFi
getAnimator__Q34Game8Imomushi14ProperAnimatorFi:
/* 802BBC68 002B8BA8  38 63 00 10 */	addi r3, r3, 0x10
/* 802BBC6C 002B8BAC  4E 80 00 20 */	blr 

.global __dt__Q34Game8Imomushi14ProperAnimatorFv
__dt__Q34Game8Imomushi14ProperAnimatorFv:
/* 802BBC70 002B8BB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BBC74 002B8BB4  7C 08 02 A6 */	mflr r0
/* 802BBC78 002B8BB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BBC7C 002B8BBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BBC80 002B8BC0  7C 7F 1B 79 */	or. r31, r3, r3
/* 802BBC84 002B8BC4  41 82 00 30 */	beq lbl_802BBCB4
/* 802BBC88 002B8BC8  3C 60 80 4D */	lis r3, __vt__Q34Game8Imomushi14ProperAnimator@ha
/* 802BBC8C 002B8BCC  38 03 07 E0 */	addi r0, r3, __vt__Q34Game8Imomushi14ProperAnimator@l
/* 802BBC90 002B8BD0  90 1F 00 00 */	stw r0, 0(r31)
/* 802BBC94 002B8BD4  41 82 00 10 */	beq lbl_802BBCA4
/* 802BBC98 002B8BD8  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 802BBC9C 002B8BDC  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 802BBCA0 002B8BE0  90 1F 00 00 */	stw r0, 0(r31)
lbl_802BBCA4:
/* 802BBCA4 002B8BE4  7C 80 07 35 */	extsh. r0, r4
/* 802BBCA8 002B8BE8  40 81 00 0C */	ble lbl_802BBCB4
/* 802BBCAC 002B8BEC  7F E3 FB 78 */	mr r3, r31
/* 802BBCB0 002B8BF0  4B D6 84 05 */	bl __dl__FPv
lbl_802BBCB4:
/* 802BBCB4 002B8BF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BBCB8 002B8BF8  7F E3 FB 78 */	mr r3, r31
/* 802BBCBC 002B8BFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BBCC0 002B8C00  7C 08 03 A6 */	mtlr r0
/* 802BBCC4 002B8C04  38 21 00 10 */	addi r1, r1, 0x10
/* 802BBCC8 002B8C08  4E 80 00 20 */	blr 

.global getAnimator__Q34Game8Imomushi14ProperAnimatorFv
getAnimator__Q34Game8Imomushi14ProperAnimatorFv:
/* 802BBCCC 002B8C0C  38 63 00 10 */	addi r3, r3, 0x10
/* 802BBCD0 002B8C10  4E 80 00 20 */	blr 
