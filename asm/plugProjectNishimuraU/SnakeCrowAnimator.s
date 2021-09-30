.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game9SnakeCrow14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game9SnakeCrow14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 80292B28 0028FA68  90 83 00 20 */	stw r4, 0x20(r3)
/* 80292B2C 0028FA6C  4E 80 00 20 */	blr 

.global getAnimator__Q34Game9SnakeCrow14ProperAnimatorFi
getAnimator__Q34Game9SnakeCrow14ProperAnimatorFi:
/* 80292B30 0028FA70  38 63 00 10 */	addi r3, r3, 0x10
/* 80292B34 0028FA74  4E 80 00 20 */	blr 

.global __dt__Q34Game9SnakeCrow14ProperAnimatorFv
__dt__Q34Game9SnakeCrow14ProperAnimatorFv:
/* 80292B38 0028FA78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80292B3C 0028FA7C  7C 08 02 A6 */	mflr r0
/* 80292B40 0028FA80  90 01 00 14 */	stw r0, 0x14(r1)
/* 80292B44 0028FA84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80292B48 0028FA88  7C 7F 1B 79 */	or. r31, r3, r3
/* 80292B4C 0028FA8C  41 82 00 30 */	beq lbl_80292B7C
/* 80292B50 0028FA90  3C 60 80 4D */	lis r3, __vt__Q34Game9SnakeCrow14ProperAnimator@ha
/* 80292B54 0028FA94  38 03 B4 58 */	addi r0, r3, __vt__Q34Game9SnakeCrow14ProperAnimator@l
/* 80292B58 0028FA98  90 1F 00 00 */	stw r0, 0(r31)
/* 80292B5C 0028FA9C  41 82 00 10 */	beq lbl_80292B6C
/* 80292B60 0028FAA0  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 80292B64 0028FAA4  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 80292B68 0028FAA8  90 1F 00 00 */	stw r0, 0(r31)
lbl_80292B6C:
/* 80292B6C 0028FAAC  7C 80 07 35 */	extsh. r0, r4
/* 80292B70 0028FAB0  40 81 00 0C */	ble lbl_80292B7C
/* 80292B74 0028FAB4  7F E3 FB 78 */	mr r3, r31
/* 80292B78 0028FAB8  4B D9 15 3D */	bl __dl__FPv
lbl_80292B7C:
/* 80292B7C 0028FABC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80292B80 0028FAC0  7F E3 FB 78 */	mr r3, r31
/* 80292B84 0028FAC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80292B88 0028FAC8  7C 08 03 A6 */	mtlr r0
/* 80292B8C 0028FACC  38 21 00 10 */	addi r1, r1, 0x10
/* 80292B90 0028FAD0  4E 80 00 20 */	blr 

.global getAnimator__Q34Game9SnakeCrow14ProperAnimatorFv
getAnimator__Q34Game9SnakeCrow14ProperAnimatorFv:
/* 80292B94 0028FAD4  38 63 00 10 */	addi r3, r3, 0x10
/* 80292B98 0028FAD8  4E 80 00 20 */	blr 
