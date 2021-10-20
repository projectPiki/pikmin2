.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game10MiniHoudai14ProperAnimator
__vt__Q34Game10MiniHoudai14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game10MiniHoudai14ProperAnimatorFv
	.4byte setAnimMgr__Q34Game10MiniHoudai14ProperAnimatorFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q34Game10MiniHoudai14ProperAnimatorFv
	.4byte getAnimator__Q34Game10MiniHoudai14ProperAnimatorFi
	.4byte animate__Q24Game17EnemyAnimatorBaseFf
	.4byte animate__Q24Game17EnemyAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game17EnemyAnimatorBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game10MiniHoudai14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game10MiniHoudai14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 802EBCE0 002E8C20  90 83 00 20 */	stw r4, 0x20(r3)
/* 802EBCE4 002E8C24  4E 80 00 20 */	blr 

.global getAnimator__Q34Game10MiniHoudai14ProperAnimatorFi
getAnimator__Q34Game10MiniHoudai14ProperAnimatorFi:
/* 802EBCE8 002E8C28  38 63 00 10 */	addi r3, r3, 0x10
/* 802EBCEC 002E8C2C  4E 80 00 20 */	blr 

.global __dt__Q34Game10MiniHoudai14ProperAnimatorFv
__dt__Q34Game10MiniHoudai14ProperAnimatorFv:
/* 802EBCF0 002E8C30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EBCF4 002E8C34  7C 08 02 A6 */	mflr r0
/* 802EBCF8 002E8C38  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EBCFC 002E8C3C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EBD00 002E8C40  7C 7F 1B 79 */	or. r31, r3, r3
/* 802EBD04 002E8C44  41 82 00 30 */	beq lbl_802EBD34
/* 802EBD08 002E8C48  3C 60 80 4D */	lis r3, __vt__Q34Game10MiniHoudai14ProperAnimator@ha
/* 802EBD0C 002E8C4C  38 03 47 28 */	addi r0, r3, __vt__Q34Game10MiniHoudai14ProperAnimator@l
/* 802EBD10 002E8C50  90 1F 00 00 */	stw r0, 0(r31)
/* 802EBD14 002E8C54  41 82 00 10 */	beq lbl_802EBD24
/* 802EBD18 002E8C58  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 802EBD1C 002E8C5C  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 802EBD20 002E8C60  90 1F 00 00 */	stw r0, 0(r31)
lbl_802EBD24:
/* 802EBD24 002E8C64  7C 80 07 35 */	extsh. r0, r4
/* 802EBD28 002E8C68  40 81 00 0C */	ble lbl_802EBD34
/* 802EBD2C 002E8C6C  7F E3 FB 78 */	mr r3, r31
/* 802EBD30 002E8C70  4B D3 83 85 */	bl __dl__FPv
lbl_802EBD34:
/* 802EBD34 002E8C74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EBD38 002E8C78  7F E3 FB 78 */	mr r3, r31
/* 802EBD3C 002E8C7C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EBD40 002E8C80  7C 08 03 A6 */	mtlr r0
/* 802EBD44 002E8C84  38 21 00 10 */	addi r1, r1, 0x10
/* 802EBD48 002E8C88  4E 80 00 20 */	blr 

.global getAnimator__Q34Game10MiniHoudai14ProperAnimatorFv
getAnimator__Q34Game10MiniHoudai14ProperAnimatorFv:
/* 802EBD4C 002E8C8C  38 63 00 10 */	addi r3, r3, 0x10
/* 802EBD50 002E8C90  4E 80 00 20 */	blr 
