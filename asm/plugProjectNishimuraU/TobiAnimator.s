.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game4Tobi14ProperAnimator
__vt__Q34Game4Tobi14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game4Tobi14ProperAnimatorFv
	.4byte setAnimMgr__Q34Game4Tobi14ProperAnimatorFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q34Game4Tobi14ProperAnimatorFv
	.4byte getAnimator__Q34Game4Tobi14ProperAnimatorFi
	.4byte animate__Q24Game17EnemyAnimatorBaseFf
	.4byte animate__Q24Game17EnemyAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game17EnemyAnimatorBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game4Tobi14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game4Tobi14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 802693D4 00266314  90 83 00 20 */	stw r4, 0x20(r3)
/* 802693D8 00266318  4E 80 00 20 */	blr 

.global getAnimator__Q34Game4Tobi14ProperAnimatorFi
getAnimator__Q34Game4Tobi14ProperAnimatorFi:
/* 802693DC 0026631C  38 63 00 10 */	addi r3, r3, 0x10
/* 802693E0 00266320  4E 80 00 20 */	blr 

.global __dt__Q34Game4Tobi14ProperAnimatorFv
__dt__Q34Game4Tobi14ProperAnimatorFv:
/* 802693E4 00266324  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802693E8 00266328  7C 08 02 A6 */	mflr r0
/* 802693EC 0026632C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802693F0 00266330  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802693F4 00266334  7C 7F 1B 79 */	or. r31, r3, r3
/* 802693F8 00266338  41 82 00 30 */	beq lbl_80269428
/* 802693FC 0026633C  3C 60 80 4C */	lis r3, __vt__Q34Game4Tobi14ProperAnimator@ha
/* 80269400 00266340  38 03 4D C0 */	addi r0, r3, __vt__Q34Game4Tobi14ProperAnimator@l
/* 80269404 00266344  90 1F 00 00 */	stw r0, 0(r31)
/* 80269408 00266348  41 82 00 10 */	beq lbl_80269418
/* 8026940C 0026634C  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 80269410 00266350  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 80269414 00266354  90 1F 00 00 */	stw r0, 0(r31)
lbl_80269418:
/* 80269418 00266358  7C 80 07 35 */	extsh. r0, r4
/* 8026941C 0026635C  40 81 00 0C */	ble lbl_80269428
/* 80269420 00266360  7F E3 FB 78 */	mr r3, r31
/* 80269424 00266364  4B DB AC 91 */	bl __dl__FPv
lbl_80269428:
/* 80269428 00266368  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026942C 0026636C  7F E3 FB 78 */	mr r3, r31
/* 80269430 00266370  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80269434 00266374  7C 08 03 A6 */	mtlr r0
/* 80269438 00266378  38 21 00 10 */	addi r1, r1, 0x10
/* 8026943C 0026637C  4E 80 00 20 */	blr 

.global getAnimator__Q34Game4Tobi14ProperAnimatorFv
getAnimator__Q34Game4Tobi14ProperAnimatorFv:
/* 80269440 00266380  38 63 00 10 */	addi r3, r3, 0x10
/* 80269444 00266384  4E 80 00 20 */	blr 
