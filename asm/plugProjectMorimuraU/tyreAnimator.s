.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game4Tyre14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game4Tyre14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 803ABDEC 003A8D2C  90 83 00 20 */	stw r4, 0x20(r3)
/* 803ABDF0 003A8D30  4E 80 00 20 */	blr 

.global getAnimator__Q34Game4Tyre14ProperAnimatorFi
getAnimator__Q34Game4Tyre14ProperAnimatorFi:
/* 803ABDF4 003A8D34  38 63 00 10 */	addi r3, r3, 0x10
/* 803ABDF8 003A8D38  4E 80 00 20 */	blr 

.global __dt__Q34Game4Tyre14ProperAnimatorFv
__dt__Q34Game4Tyre14ProperAnimatorFv:
/* 803ABDFC 003A8D3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803ABE00 003A8D40  7C 08 02 A6 */	mflr r0
/* 803ABE04 003A8D44  90 01 00 14 */	stw r0, 0x14(r1)
/* 803ABE08 003A8D48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803ABE0C 003A8D4C  7C 7F 1B 79 */	or. r31, r3, r3
/* 803ABE10 003A8D50  41 82 00 30 */	beq lbl_803ABE40
/* 803ABE14 003A8D54  3C 60 80 4E */	lis r3, __vt__Q34Game4Tyre14ProperAnimator@ha
/* 803ABE18 003A8D58  38 03 62 B0 */	addi r0, r3, __vt__Q34Game4Tyre14ProperAnimator@l
/* 803ABE1C 003A8D5C  90 1F 00 00 */	stw r0, 0(r31)
/* 803ABE20 003A8D60  41 82 00 10 */	beq lbl_803ABE30
/* 803ABE24 003A8D64  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 803ABE28 003A8D68  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 803ABE2C 003A8D6C  90 1F 00 00 */	stw r0, 0(r31)
lbl_803ABE30:
/* 803ABE30 003A8D70  7C 80 07 35 */	extsh. r0, r4
/* 803ABE34 003A8D74  40 81 00 0C */	ble lbl_803ABE40
/* 803ABE38 003A8D78  7F E3 FB 78 */	mr r3, r31
/* 803ABE3C 003A8D7C  4B C7 82 79 */	bl __dl__FPv
lbl_803ABE40:
/* 803ABE40 003A8D80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803ABE44 003A8D84  7F E3 FB 78 */	mr r3, r31
/* 803ABE48 003A8D88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803ABE4C 003A8D8C  7C 08 03 A6 */	mtlr r0
/* 803ABE50 003A8D90  38 21 00 10 */	addi r1, r1, 0x10
/* 803ABE54 003A8D94  4E 80 00 20 */	blr 

.global getAnimator__Q34Game4Tyre14ProperAnimatorFv
getAnimator__Q34Game4Tyre14ProperAnimatorFv:
/* 803ABE58 003A8D98  38 63 00 10 */	addi r3, r3, 0x10
/* 803ABE5C 003A8D9C  4E 80 00 20 */	blr 
