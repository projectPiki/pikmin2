.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game6Miulin14ProperAnimator
__vt__Q34Game6Miulin14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game6Miulin14ProperAnimatorFv
	.4byte setAnimMgr__Q34Game6Miulin14ProperAnimatorFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q34Game6Miulin14ProperAnimatorFv
	.4byte getAnimator__Q34Game6Miulin14ProperAnimatorFi
	.4byte animate__Q24Game17EnemyAnimatorBaseFf
	.4byte animate__Q24Game17EnemyAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game17EnemyAnimatorBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game6Miulin14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game6Miulin14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 80363EE4 00360E24  90 83 00 20 */	stw r4, 0x20(r3)
/* 80363EE8 00360E28  4E 80 00 20 */	blr 

.global getAnimator__Q34Game6Miulin14ProperAnimatorFi
getAnimator__Q34Game6Miulin14ProperAnimatorFi:
/* 80363EEC 00360E2C  38 63 00 10 */	addi r3, r3, 0x10
/* 80363EF0 00360E30  4E 80 00 20 */	blr 

.global __dt__Q34Game6Miulin14ProperAnimatorFv
__dt__Q34Game6Miulin14ProperAnimatorFv:
/* 80363EF4 00360E34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80363EF8 00360E38  7C 08 02 A6 */	mflr r0
/* 80363EFC 00360E3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80363F00 00360E40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80363F04 00360E44  7C 7F 1B 79 */	or. r31, r3, r3
/* 80363F08 00360E48  41 82 00 30 */	beq lbl_80363F38
/* 80363F0C 00360E4C  3C 60 80 4E */	lis r3, __vt__Q34Game6Miulin14ProperAnimator@ha
/* 80363F10 00360E50  38 03 24 B0 */	addi r0, r3, __vt__Q34Game6Miulin14ProperAnimator@l
/* 80363F14 00360E54  90 1F 00 00 */	stw r0, 0(r31)
/* 80363F18 00360E58  41 82 00 10 */	beq lbl_80363F28
/* 80363F1C 00360E5C  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 80363F20 00360E60  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 80363F24 00360E64  90 1F 00 00 */	stw r0, 0(r31)
lbl_80363F28:
/* 80363F28 00360E68  7C 80 07 35 */	extsh. r0, r4
/* 80363F2C 00360E6C  40 81 00 0C */	ble lbl_80363F38
/* 80363F30 00360E70  7F E3 FB 78 */	mr r3, r31
/* 80363F34 00360E74  4B CC 01 81 */	bl __dl__FPv
lbl_80363F38:
/* 80363F38 00360E78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80363F3C 00360E7C  7F E3 FB 78 */	mr r3, r31
/* 80363F40 00360E80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80363F44 00360E84  7C 08 03 A6 */	mtlr r0
/* 80363F48 00360E88  38 21 00 10 */	addi r1, r1, 0x10
/* 80363F4C 00360E8C  4E 80 00 20 */	blr 

.global getAnimator__Q34Game6Miulin14ProperAnimatorFv
getAnimator__Q34Game6Miulin14ProperAnimatorFv:
/* 80363F50 00360E90  38 63 00 10 */	addi r3, r3, 0x10
/* 80363F54 00360E94  4E 80 00 20 */	blr 
