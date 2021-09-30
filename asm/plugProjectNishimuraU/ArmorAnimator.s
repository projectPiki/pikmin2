.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game5Armor14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game5Armor14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 80287AFC 00284A3C  90 83 00 20 */	stw r4, 0x20(r3)
/* 80287B00 00284A40  4E 80 00 20 */	blr 

.global getAnimator__Q34Game5Armor14ProperAnimatorFi
getAnimator__Q34Game5Armor14ProperAnimatorFi:
/* 80287B04 00284A44  38 63 00 10 */	addi r3, r3, 0x10
/* 80287B08 00284A48  4E 80 00 20 */	blr 

.global __dt__Q34Game5Armor14ProperAnimatorFv
__dt__Q34Game5Armor14ProperAnimatorFv:
/* 80287B0C 00284A4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80287B10 00284A50  7C 08 02 A6 */	mflr r0
/* 80287B14 00284A54  90 01 00 14 */	stw r0, 0x14(r1)
/* 80287B18 00284A58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80287B1C 00284A5C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80287B20 00284A60  41 82 00 30 */	beq lbl_80287B50
/* 80287B24 00284A64  3C 60 80 4D */	lis r3, __vt__Q34Game5Armor14ProperAnimator@ha
/* 80287B28 00284A68  38 03 9A 90 */	addi r0, r3, __vt__Q34Game5Armor14ProperAnimator@l
/* 80287B2C 00284A6C  90 1F 00 00 */	stw r0, 0(r31)
/* 80287B30 00284A70  41 82 00 10 */	beq lbl_80287B40
/* 80287B34 00284A74  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 80287B38 00284A78  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 80287B3C 00284A7C  90 1F 00 00 */	stw r0, 0(r31)
lbl_80287B40:
/* 80287B40 00284A80  7C 80 07 35 */	extsh. r0, r4
/* 80287B44 00284A84  40 81 00 0C */	ble lbl_80287B50
/* 80287B48 00284A88  7F E3 FB 78 */	mr r3, r31
/* 80287B4C 00284A8C  4B D9 C5 69 */	bl __dl__FPv
lbl_80287B50:
/* 80287B50 00284A90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80287B54 00284A94  7F E3 FB 78 */	mr r3, r31
/* 80287B58 00284A98  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80287B5C 00284A9C  7C 08 03 A6 */	mtlr r0
/* 80287B60 00284AA0  38 21 00 10 */	addi r1, r1, 0x10
/* 80287B64 00284AA4  4E 80 00 20 */	blr 

.global getAnimator__Q34Game5Armor14ProperAnimatorFv
getAnimator__Q34Game5Armor14ProperAnimatorFv:
/* 80287B68 00284AA8  38 63 00 10 */	addi r3, r3, 0x10
/* 80287B6C 00284AAC  4E 80 00 20 */	blr 
