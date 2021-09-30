.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game7BigFoot14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game7BigFoot14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 802C6EE4 002C3E24  90 83 00 20 */	stw r4, 0x20(r3)
/* 802C6EE8 002C3E28  4E 80 00 20 */	blr 

.global getAnimator__Q34Game7BigFoot14ProperAnimatorFi
getAnimator__Q34Game7BigFoot14ProperAnimatorFi:
/* 802C6EEC 002C3E2C  38 63 00 10 */	addi r3, r3, 0x10
/* 802C6EF0 002C3E30  4E 80 00 20 */	blr 

.global __dt__Q34Game7BigFoot14ProperAnimatorFv
__dt__Q34Game7BigFoot14ProperAnimatorFv:
/* 802C6EF4 002C3E34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C6EF8 002C3E38  7C 08 02 A6 */	mflr r0
/* 802C6EFC 002C3E3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C6F00 002C3E40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C6F04 002C3E44  7C 7F 1B 79 */	or. r31, r3, r3
/* 802C6F08 002C3E48  41 82 00 30 */	beq lbl_802C6F38
/* 802C6F0C 002C3E4C  3C 60 80 4D */	lis r3, __vt__Q34Game7BigFoot14ProperAnimator@ha
/* 802C6F10 002C3E50  38 03 1A A8 */	addi r0, r3, __vt__Q34Game7BigFoot14ProperAnimator@l
/* 802C6F14 002C3E54  90 1F 00 00 */	stw r0, 0(r31)
/* 802C6F18 002C3E58  41 82 00 10 */	beq lbl_802C6F28
/* 802C6F1C 002C3E5C  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 802C6F20 002C3E60  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 802C6F24 002C3E64  90 1F 00 00 */	stw r0, 0(r31)
lbl_802C6F28:
/* 802C6F28 002C3E68  7C 80 07 35 */	extsh. r0, r4
/* 802C6F2C 002C3E6C  40 81 00 0C */	ble lbl_802C6F38
/* 802C6F30 002C3E70  7F E3 FB 78 */	mr r3, r31
/* 802C6F34 002C3E74  4B D5 D1 81 */	bl __dl__FPv
lbl_802C6F38:
/* 802C6F38 002C3E78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C6F3C 002C3E7C  7F E3 FB 78 */	mr r3, r31
/* 802C6F40 002C3E80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C6F44 002C3E84  7C 08 03 A6 */	mtlr r0
/* 802C6F48 002C3E88  38 21 00 10 */	addi r1, r1, 0x10
/* 802C6F4C 002C3E8C  4E 80 00 20 */	blr 

.global getAnimator__Q34Game7BigFoot14ProperAnimatorFv
getAnimator__Q34Game7BigFoot14ProperAnimatorFv:
/* 802C6F50 002C3E90  38 63 00 10 */	addi r3, r3, 0x10
/* 802C6F54 002C3E94  4E 80 00 20 */	blr 
