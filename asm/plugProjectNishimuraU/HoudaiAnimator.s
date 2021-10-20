.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game6Houdai14ProperAnimator
__vt__Q34Game6Houdai14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game6Houdai14ProperAnimatorFv
	.4byte setAnimMgr__Q34Game6Houdai14ProperAnimatorFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q34Game6Houdai14ProperAnimatorFv
	.4byte getAnimator__Q34Game6Houdai14ProperAnimatorFi
	.4byte animate__Q24Game17EnemyAnimatorBaseFf
	.4byte animate__Q24Game17EnemyAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game17EnemyAnimatorBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game6Houdai14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game6Houdai14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 802BED6C 002BBCAC  90 83 00 20 */	stw r4, 0x20(r3)
/* 802BED70 002BBCB0  4E 80 00 20 */	blr 

.global getAnimator__Q34Game6Houdai14ProperAnimatorFi
getAnimator__Q34Game6Houdai14ProperAnimatorFi:
/* 802BED74 002BBCB4  38 63 00 10 */	addi r3, r3, 0x10
/* 802BED78 002BBCB8  4E 80 00 20 */	blr 

.global __dt__Q34Game6Houdai14ProperAnimatorFv
__dt__Q34Game6Houdai14ProperAnimatorFv:
/* 802BED7C 002BBCBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BED80 002BBCC0  7C 08 02 A6 */	mflr r0
/* 802BED84 002BBCC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BED88 002BBCC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BED8C 002BBCCC  7C 7F 1B 79 */	or. r31, r3, r3
/* 802BED90 002BBCD0  41 82 00 30 */	beq lbl_802BEDC0
/* 802BED94 002BBCD4  3C 60 80 4D */	lis r3, __vt__Q34Game6Houdai14ProperAnimator@ha
/* 802BED98 002BBCD8  38 03 0D 80 */	addi r0, r3, __vt__Q34Game6Houdai14ProperAnimator@l
/* 802BED9C 002BBCDC  90 1F 00 00 */	stw r0, 0(r31)
/* 802BEDA0 002BBCE0  41 82 00 10 */	beq lbl_802BEDB0
/* 802BEDA4 002BBCE4  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 802BEDA8 002BBCE8  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 802BEDAC 002BBCEC  90 1F 00 00 */	stw r0, 0(r31)
lbl_802BEDB0:
/* 802BEDB0 002BBCF0  7C 80 07 35 */	extsh. r0, r4
/* 802BEDB4 002BBCF4  40 81 00 0C */	ble lbl_802BEDC0
/* 802BEDB8 002BBCF8  7F E3 FB 78 */	mr r3, r31
/* 802BEDBC 002BBCFC  4B D6 52 F9 */	bl __dl__FPv
lbl_802BEDC0:
/* 802BEDC0 002BBD00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BEDC4 002BBD04  7F E3 FB 78 */	mr r3, r31
/* 802BEDC8 002BBD08  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BEDCC 002BBD0C  7C 08 03 A6 */	mtlr r0
/* 802BEDD0 002BBD10  38 21 00 10 */	addi r1, r1, 0x10
/* 802BEDD4 002BBD14  4E 80 00 20 */	blr 

.global getAnimator__Q34Game6Houdai14ProperAnimatorFv
getAnimator__Q34Game6Houdai14ProperAnimatorFv:
/* 802BEDD8 002BBD18  38 63 00 10 */	addi r3, r3, 0x10
/* 802BEDDC 002BBD1C  4E 80 00 20 */	blr 
