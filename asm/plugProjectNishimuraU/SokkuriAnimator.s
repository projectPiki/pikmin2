.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game7Sokkuri14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game7Sokkuri14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 802F0B90 002EDAD0  90 83 00 20 */	stw r4, 0x20(r3)
/* 802F0B94 002EDAD4  4E 80 00 20 */	blr 

.global getAnimator__Q34Game7Sokkuri14ProperAnimatorFi
getAnimator__Q34Game7Sokkuri14ProperAnimatorFi:
/* 802F0B98 002EDAD8  38 63 00 10 */	addi r3, r3, 0x10
/* 802F0B9C 002EDADC  4E 80 00 20 */	blr 

.global __dt__Q34Game7Sokkuri14ProperAnimatorFv
__dt__Q34Game7Sokkuri14ProperAnimatorFv:
/* 802F0BA0 002EDAE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F0BA4 002EDAE4  7C 08 02 A6 */	mflr r0
/* 802F0BA8 002EDAE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F0BAC 002EDAEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F0BB0 002EDAF0  7C 7F 1B 79 */	or. r31, r3, r3
/* 802F0BB4 002EDAF4  41 82 00 30 */	beq lbl_802F0BE4
/* 802F0BB8 002EDAF8  3C 60 80 4D */	lis r3, __vt__Q34Game7Sokkuri14ProperAnimator@ha
/* 802F0BBC 002EDAFC  38 03 4E 50 */	addi r0, r3, __vt__Q34Game7Sokkuri14ProperAnimator@l
/* 802F0BC0 002EDB00  90 1F 00 00 */	stw r0, 0(r31)
/* 802F0BC4 002EDB04  41 82 00 10 */	beq lbl_802F0BD4
/* 802F0BC8 002EDB08  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 802F0BCC 002EDB0C  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 802F0BD0 002EDB10  90 1F 00 00 */	stw r0, 0(r31)
lbl_802F0BD4:
/* 802F0BD4 002EDB14  7C 80 07 35 */	extsh. r0, r4
/* 802F0BD8 002EDB18  40 81 00 0C */	ble lbl_802F0BE4
/* 802F0BDC 002EDB1C  7F E3 FB 78 */	mr r3, r31
/* 802F0BE0 002EDB20  4B D3 34 D5 */	bl __dl__FPv
lbl_802F0BE4:
/* 802F0BE4 002EDB24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F0BE8 002EDB28  7F E3 FB 78 */	mr r3, r31
/* 802F0BEC 002EDB2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F0BF0 002EDB30  7C 08 03 A6 */	mtlr r0
/* 802F0BF4 002EDB34  38 21 00 10 */	addi r1, r1, 0x10
/* 802F0BF8 002EDB38  4E 80 00 20 */	blr 

.global getAnimator__Q34Game7Sokkuri14ProperAnimatorFv
getAnimator__Q34Game7Sokkuri14ProperAnimatorFv:
/* 802F0BFC 002EDB3C  38 63 00 10 */	addi r3, r3, 0x10
/* 802F0C00 002EDB40  4E 80 00 20 */	blr 
