.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game7Fuefuki14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game7Fuefuki14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 8029BBC4 00298B04  90 83 00 20 */	stw r4, 0x20(r3)
/* 8029BBC8 00298B08  4E 80 00 20 */	blr 

.global getAnimator__Q34Game7Fuefuki14ProperAnimatorFi
getAnimator__Q34Game7Fuefuki14ProperAnimatorFi:
/* 8029BBCC 00298B0C  38 63 00 10 */	addi r3, r3, 0x10
/* 8029BBD0 00298B10  4E 80 00 20 */	blr 

.global __dt__Q34Game7Fuefuki14ProperAnimatorFv
__dt__Q34Game7Fuefuki14ProperAnimatorFv:
/* 8029BBD4 00298B14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029BBD8 00298B18  7C 08 02 A6 */	mflr r0
/* 8029BBDC 00298B1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029BBE0 00298B20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029BBE4 00298B24  7C 7F 1B 79 */	or. r31, r3, r3
/* 8029BBE8 00298B28  41 82 00 30 */	beq lbl_8029BC18
/* 8029BBEC 00298B2C  3C 60 80 4D */	lis r3, __vt__Q34Game7Fuefuki14ProperAnimator@ha
/* 8029BBF0 00298B30  38 03 C1 68 */	addi r0, r3, __vt__Q34Game7Fuefuki14ProperAnimator@l
/* 8029BBF4 00298B34  90 1F 00 00 */	stw r0, 0(r31)
/* 8029BBF8 00298B38  41 82 00 10 */	beq lbl_8029BC08
/* 8029BBFC 00298B3C  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 8029BC00 00298B40  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 8029BC04 00298B44  90 1F 00 00 */	stw r0, 0(r31)
lbl_8029BC08:
/* 8029BC08 00298B48  7C 80 07 35 */	extsh. r0, r4
/* 8029BC0C 00298B4C  40 81 00 0C */	ble lbl_8029BC18
/* 8029BC10 00298B50  7F E3 FB 78 */	mr r3, r31
/* 8029BC14 00298B54  4B D8 84 A1 */	bl __dl__FPv
lbl_8029BC18:
/* 8029BC18 00298B58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029BC1C 00298B5C  7F E3 FB 78 */	mr r3, r31
/* 8029BC20 00298B60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029BC24 00298B64  7C 08 03 A6 */	mtlr r0
/* 8029BC28 00298B68  38 21 00 10 */	addi r1, r1, 0x10
/* 8029BC2C 00298B6C  4E 80 00 20 */	blr 

.global getAnimator__Q34Game7Fuefuki14ProperAnimatorFv
getAnimator__Q34Game7Fuefuki14ProperAnimatorFv:
/* 8029BC30 00298B70  38 63 00 10 */	addi r3, r3, 0x10
/* 8029BC34 00298B74  4E 80 00 20 */	blr 
