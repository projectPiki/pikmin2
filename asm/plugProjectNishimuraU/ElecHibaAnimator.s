.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game8ElecHiba14ProperAnimator
__vt__Q34Game8ElecHiba14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game8ElecHiba14ProperAnimatorFv
	.4byte setAnimMgr__Q34Game8ElecHiba14ProperAnimatorFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q34Game8ElecHiba14ProperAnimatorFv
	.4byte getAnimator__Q34Game8ElecHiba14ProperAnimatorFi
	.4byte animate__Q24Game17EnemyAnimatorBaseFf
	.4byte animate__Q24Game17EnemyAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game17EnemyAnimatorBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game8ElecHiba14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game8ElecHiba14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 8026E994 0026B8D4  90 83 00 20 */	stw r4, 0x20(r3)
/* 8026E998 0026B8D8  4E 80 00 20 */	blr 

.global getAnimator__Q34Game8ElecHiba14ProperAnimatorFi
getAnimator__Q34Game8ElecHiba14ProperAnimatorFi:
/* 8026E99C 0026B8DC  38 63 00 10 */	addi r3, r3, 0x10
/* 8026E9A0 0026B8E0  4E 80 00 20 */	blr 

.global __dt__Q34Game8ElecHiba14ProperAnimatorFv
__dt__Q34Game8ElecHiba14ProperAnimatorFv:
/* 8026E9A4 0026B8E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026E9A8 0026B8E8  7C 08 02 A6 */	mflr r0
/* 8026E9AC 0026B8EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026E9B0 0026B8F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026E9B4 0026B8F4  7C 7F 1B 79 */	or. r31, r3, r3
/* 8026E9B8 0026B8F8  41 82 00 30 */	beq lbl_8026E9E8
/* 8026E9BC 0026B8FC  3C 60 80 4C */	lis r3, __vt__Q34Game8ElecHiba14ProperAnimator@ha
/* 8026E9C0 0026B900  38 03 5D E0 */	addi r0, r3, __vt__Q34Game8ElecHiba14ProperAnimator@l
/* 8026E9C4 0026B904  90 1F 00 00 */	stw r0, 0(r31)
/* 8026E9C8 0026B908  41 82 00 10 */	beq lbl_8026E9D8
/* 8026E9CC 0026B90C  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 8026E9D0 0026B910  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 8026E9D4 0026B914  90 1F 00 00 */	stw r0, 0(r31)
lbl_8026E9D8:
/* 8026E9D8 0026B918  7C 80 07 35 */	extsh. r0, r4
/* 8026E9DC 0026B91C  40 81 00 0C */	ble lbl_8026E9E8
/* 8026E9E0 0026B920  7F E3 FB 78 */	mr r3, r31
/* 8026E9E4 0026B924  4B DB 56 D1 */	bl __dl__FPv
lbl_8026E9E8:
/* 8026E9E8 0026B928  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026E9EC 0026B92C  7F E3 FB 78 */	mr r3, r31
/* 8026E9F0 0026B930  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026E9F4 0026B934  7C 08 03 A6 */	mtlr r0
/* 8026E9F8 0026B938  38 21 00 10 */	addi r1, r1, 0x10
/* 8026E9FC 0026B93C  4E 80 00 20 */	blr 

.global getAnimator__Q34Game8ElecHiba14ProperAnimatorFv
getAnimator__Q34Game8ElecHiba14ProperAnimatorFv:
/* 8026EA00 0026B940  38 63 00 10 */	addi r3, r3, 0x10
/* 8026EA04 0026B944  4E 80 00 20 */	blr 
