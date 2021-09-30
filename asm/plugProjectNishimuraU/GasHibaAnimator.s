.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game7GasHiba14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game7GasHiba14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 8026CC0C 00269B4C  90 83 00 20 */	stw r4, 0x20(r3)
/* 8026CC10 00269B50  4E 80 00 20 */	blr 

.global getAnimator__Q34Game7GasHiba14ProperAnimatorFi
getAnimator__Q34Game7GasHiba14ProperAnimatorFi:
/* 8026CC14 00269B54  38 63 00 10 */	addi r3, r3, 0x10
/* 8026CC18 00269B58  4E 80 00 20 */	blr 

.global __dt__Q34Game7GasHiba14ProperAnimatorFv
__dt__Q34Game7GasHiba14ProperAnimatorFv:
/* 8026CC1C 00269B5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026CC20 00269B60  7C 08 02 A6 */	mflr r0
/* 8026CC24 00269B64  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026CC28 00269B68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026CC2C 00269B6C  7C 7F 1B 79 */	or. r31, r3, r3
/* 8026CC30 00269B70  41 82 00 30 */	beq lbl_8026CC60
/* 8026CC34 00269B74  3C 60 80 4C */	lis r3, __vt__Q34Game7GasHiba14ProperAnimator@ha
/* 8026CC38 00269B78  38 03 58 B8 */	addi r0, r3, __vt__Q34Game7GasHiba14ProperAnimator@l
/* 8026CC3C 00269B7C  90 1F 00 00 */	stw r0, 0(r31)
/* 8026CC40 00269B80  41 82 00 10 */	beq lbl_8026CC50
/* 8026CC44 00269B84  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 8026CC48 00269B88  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 8026CC4C 00269B8C  90 1F 00 00 */	stw r0, 0(r31)
lbl_8026CC50:
/* 8026CC50 00269B90  7C 80 07 35 */	extsh. r0, r4
/* 8026CC54 00269B94  40 81 00 0C */	ble lbl_8026CC60
/* 8026CC58 00269B98  7F E3 FB 78 */	mr r3, r31
/* 8026CC5C 00269B9C  4B DB 74 59 */	bl __dl__FPv
lbl_8026CC60:
/* 8026CC60 00269BA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026CC64 00269BA4  7F E3 FB 78 */	mr r3, r31
/* 8026CC68 00269BA8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026CC6C 00269BAC  7C 08 03 A6 */	mtlr r0
/* 8026CC70 00269BB0  38 21 00 10 */	addi r1, r1, 0x10
/* 8026CC74 00269BB4  4E 80 00 20 */	blr 

.global getAnimator__Q34Game7GasHiba14ProperAnimatorFv
getAnimator__Q34Game7GasHiba14ProperAnimatorFv:
/* 8026CC78 00269BB8  38 63 00 10 */	addi r3, r3, 0x10
/* 8026CC7C 00269BBC  4E 80 00 20 */	blr 
