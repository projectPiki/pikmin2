.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game3Pom14ProperAnimator
__vt__Q34Game3Pom14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game3Pom14ProperAnimatorFv
	.4byte setAnimMgr__Q34Game3Pom14ProperAnimatorFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q34Game3Pom14ProperAnimatorFv
	.4byte getAnimator__Q34Game3Pom14ProperAnimatorFi
	.4byte animate__Q24Game17EnemyAnimatorBaseFf
	.4byte animate__Q24Game17EnemyAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game17EnemyAnimatorBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game3Pom14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game3Pom14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 80253E18 00250D58  90 83 00 20 */	stw r4, 0x20(r3)
/* 80253E1C 00250D5C  4E 80 00 20 */	blr 

.global getAnimator__Q34Game3Pom14ProperAnimatorFi
getAnimator__Q34Game3Pom14ProperAnimatorFi:
/* 80253E20 00250D60  38 63 00 10 */	addi r3, r3, 0x10
/* 80253E24 00250D64  4E 80 00 20 */	blr 

.global __dt__Q34Game3Pom14ProperAnimatorFv
__dt__Q34Game3Pom14ProperAnimatorFv:
/* 80253E28 00250D68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80253E2C 00250D6C  7C 08 02 A6 */	mflr r0
/* 80253E30 00250D70  90 01 00 14 */	stw r0, 0x14(r1)
/* 80253E34 00250D74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80253E38 00250D78  7C 7F 1B 79 */	or. r31, r3, r3
/* 80253E3C 00250D7C  41 82 00 30 */	beq lbl_80253E6C
/* 80253E40 00250D80  3C 60 80 4C */	lis r3, __vt__Q34Game3Pom14ProperAnimator@ha
/* 80253E44 00250D84  38 03 1C 08 */	addi r0, r3, __vt__Q34Game3Pom14ProperAnimator@l
/* 80253E48 00250D88  90 1F 00 00 */	stw r0, 0(r31)
/* 80253E4C 00250D8C  41 82 00 10 */	beq lbl_80253E5C
/* 80253E50 00250D90  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 80253E54 00250D94  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 80253E58 00250D98  90 1F 00 00 */	stw r0, 0(r31)
lbl_80253E5C:
/* 80253E5C 00250D9C  7C 80 07 35 */	extsh. r0, r4
/* 80253E60 00250DA0  40 81 00 0C */	ble lbl_80253E6C
/* 80253E64 00250DA4  7F E3 FB 78 */	mr r3, r31
/* 80253E68 00250DA8  4B DD 02 4D */	bl __dl__FPv
lbl_80253E6C:
/* 80253E6C 00250DAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80253E70 00250DB0  7F E3 FB 78 */	mr r3, r31
/* 80253E74 00250DB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80253E78 00250DB8  7C 08 03 A6 */	mtlr r0
/* 80253E7C 00250DBC  38 21 00 10 */	addi r1, r1, 0x10
/* 80253E80 00250DC0  4E 80 00 20 */	blr 

.global getAnimator__Q34Game3Pom14ProperAnimatorFv
getAnimator__Q34Game3Pom14ProperAnimatorFv:
/* 80253E84 00250DC4  38 63 00 10 */	addi r3, r3, 0x10
/* 80253E88 00250DC8  4E 80 00 20 */	blr 
