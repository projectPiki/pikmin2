.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game11OtakaraBase14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game11OtakaraBase14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 802B5E24 002B2D64  90 83 00 20 */	stw r4, 0x20(r3)
/* 802B5E28 002B2D68  4E 80 00 20 */	blr 

.global getAnimator__Q34Game11OtakaraBase14ProperAnimatorFi
getAnimator__Q34Game11OtakaraBase14ProperAnimatorFi:
/* 802B5E2C 002B2D6C  38 63 00 10 */	addi r3, r3, 0x10
/* 802B5E30 002B2D70  4E 80 00 20 */	blr 

.global __dt__Q34Game11OtakaraBase14ProperAnimatorFv
__dt__Q34Game11OtakaraBase14ProperAnimatorFv:
/* 802B5E34 002B2D74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B5E38 002B2D78  7C 08 02 A6 */	mflr r0
/* 802B5E3C 002B2D7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B5E40 002B2D80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B5E44 002B2D84  7C 7F 1B 79 */	or. r31, r3, r3
/* 802B5E48 002B2D88  41 82 00 30 */	beq lbl_802B5E78
/* 802B5E4C 002B2D8C  3C 60 80 4D */	lis r3, __vt__Q34Game11OtakaraBase14ProperAnimator@ha
/* 802B5E50 002B2D90  38 03 EF 68 */	addi r0, r3, __vt__Q34Game11OtakaraBase14ProperAnimator@l
/* 802B5E54 002B2D94  90 1F 00 00 */	stw r0, 0(r31)
/* 802B5E58 002B2D98  41 82 00 10 */	beq lbl_802B5E68
/* 802B5E5C 002B2D9C  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 802B5E60 002B2DA0  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 802B5E64 002B2DA4  90 1F 00 00 */	stw r0, 0(r31)
lbl_802B5E68:
/* 802B5E68 002B2DA8  7C 80 07 35 */	extsh. r0, r4
/* 802B5E6C 002B2DAC  40 81 00 0C */	ble lbl_802B5E78
/* 802B5E70 002B2DB0  7F E3 FB 78 */	mr r3, r31
/* 802B5E74 002B2DB4  4B D6 E2 41 */	bl __dl__FPv
lbl_802B5E78:
/* 802B5E78 002B2DB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B5E7C 002B2DBC  7F E3 FB 78 */	mr r3, r31
/* 802B5E80 002B2DC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B5E84 002B2DC4  7C 08 03 A6 */	mtlr r0
/* 802B5E88 002B2DC8  38 21 00 10 */	addi r1, r1, 0x10
/* 802B5E8C 002B2DCC  4E 80 00 20 */	blr 

.global getAnimator__Q34Game11OtakaraBase14ProperAnimatorFv
getAnimator__Q34Game11OtakaraBase14ProperAnimatorFv:
/* 802B5E90 002B2DD0  38 63 00 10 */	addi r3, r3, 0x10
/* 802B5E94 002B2DD4  4E 80 00 20 */	blr 
