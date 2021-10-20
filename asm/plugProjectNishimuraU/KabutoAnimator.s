.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game6Kabuto14ProperAnimator
__vt__Q34Game6Kabuto14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game6Kabuto14ProperAnimatorFv
	.4byte setAnimMgr__Q34Game6Kabuto14ProperAnimatorFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q34Game6Kabuto14ProperAnimatorFv
	.4byte getAnimator__Q34Game6Kabuto14ProperAnimatorFi
	.4byte animate__Q24Game17EnemyAnimatorBaseFf
	.4byte animate__Q24Game17EnemyAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game17EnemyAnimatorBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game6Kabuto14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game6Kabuto14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 802E3CF4 002E0C34  90 83 00 20 */	stw r4, 0x20(r3)
/* 802E3CF8 002E0C38  4E 80 00 20 */	blr 

.global getAnimator__Q34Game6Kabuto14ProperAnimatorFi
getAnimator__Q34Game6Kabuto14ProperAnimatorFi:
/* 802E3CFC 002E0C3C  38 63 00 10 */	addi r3, r3, 0x10
/* 802E3D00 002E0C40  4E 80 00 20 */	blr 

.global __dt__Q34Game6Kabuto14ProperAnimatorFv
__dt__Q34Game6Kabuto14ProperAnimatorFv:
/* 802E3D04 002E0C44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E3D08 002E0C48  7C 08 02 A6 */	mflr r0
/* 802E3D0C 002E0C4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E3D10 002E0C50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E3D14 002E0C54  7C 7F 1B 79 */	or. r31, r3, r3
/* 802E3D18 002E0C58  41 82 00 30 */	beq lbl_802E3D48
/* 802E3D1C 002E0C5C  3C 60 80 4D */	lis r3, __vt__Q34Game6Kabuto14ProperAnimator@ha
/* 802E3D20 002E0C60  38 03 3B 30 */	addi r0, r3, __vt__Q34Game6Kabuto14ProperAnimator@l
/* 802E3D24 002E0C64  90 1F 00 00 */	stw r0, 0(r31)
/* 802E3D28 002E0C68  41 82 00 10 */	beq lbl_802E3D38
/* 802E3D2C 002E0C6C  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 802E3D30 002E0C70  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 802E3D34 002E0C74  90 1F 00 00 */	stw r0, 0(r31)
lbl_802E3D38:
/* 802E3D38 002E0C78  7C 80 07 35 */	extsh. r0, r4
/* 802E3D3C 002E0C7C  40 81 00 0C */	ble lbl_802E3D48
/* 802E3D40 002E0C80  7F E3 FB 78 */	mr r3, r31
/* 802E3D44 002E0C84  4B D4 03 71 */	bl __dl__FPv
lbl_802E3D48:
/* 802E3D48 002E0C88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E3D4C 002E0C8C  7F E3 FB 78 */	mr r3, r31
/* 802E3D50 002E0C90  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E3D54 002E0C94  7C 08 03 A6 */	mtlr r0
/* 802E3D58 002E0C98  38 21 00 10 */	addi r1, r1, 0x10
/* 802E3D5C 002E0C9C  4E 80 00 20 */	blr 

.global getAnimator__Q34Game6Kabuto14ProperAnimatorFv
getAnimator__Q34Game6Kabuto14ProperAnimatorFv:
/* 802E3D60 002E0CA0  38 63 00 10 */	addi r3, r3, 0x10
/* 802E3D64 002E0CA4  4E 80 00 20 */	blr 
