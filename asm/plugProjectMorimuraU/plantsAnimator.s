.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game6Plants14ProperAnimator
__vt__Q34Game6Plants14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game6Plants14ProperAnimatorFv
	.4byte setAnimMgr__Q34Game6Plants14ProperAnimatorFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q34Game6Plants14ProperAnimatorFv
	.4byte getAnimator__Q34Game6Plants14ProperAnimatorFi
	.4byte animate__Q24Game17EnemyAnimatorBaseFf
	.4byte animate__Q24Game17EnemyAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game17EnemyAnimatorBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game6Plants14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game6Plants14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 80358358 00355298  90 83 00 20 */	stw r4, 0x20(r3)
/* 8035835C 0035529C  4E 80 00 20 */	blr 

.global getAnimator__Q34Game6Plants14ProperAnimatorFi
getAnimator__Q34Game6Plants14ProperAnimatorFi:
/* 80358360 003552A0  38 63 00 10 */	addi r3, r3, 0x10
/* 80358364 003552A4  4E 80 00 20 */	blr 

.global __dt__Q34Game6Plants14ProperAnimatorFv
__dt__Q34Game6Plants14ProperAnimatorFv:
/* 80358368 003552A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8035836C 003552AC  7C 08 02 A6 */	mflr r0
/* 80358370 003552B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80358374 003552B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80358378 003552B8  7C 7F 1B 79 */	or. r31, r3, r3
/* 8035837C 003552BC  41 82 00 30 */	beq lbl_803583AC
/* 80358380 003552C0  3C 60 80 4E */	lis r3, __vt__Q34Game6Plants14ProperAnimator@ha
/* 80358384 003552C4  38 03 06 98 */	addi r0, r3, __vt__Q34Game6Plants14ProperAnimator@l
/* 80358388 003552C8  90 1F 00 00 */	stw r0, 0(r31)
/* 8035838C 003552CC  41 82 00 10 */	beq lbl_8035839C
/* 80358390 003552D0  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 80358394 003552D4  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 80358398 003552D8  90 1F 00 00 */	stw r0, 0(r31)
lbl_8035839C:
/* 8035839C 003552DC  7C 80 07 35 */	extsh. r0, r4
/* 803583A0 003552E0  40 81 00 0C */	ble lbl_803583AC
/* 803583A4 003552E4  7F E3 FB 78 */	mr r3, r31
/* 803583A8 003552E8  4B CC BD 0D */	bl __dl__FPv
lbl_803583AC:
/* 803583AC 003552EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803583B0 003552F0  7F E3 FB 78 */	mr r3, r31
/* 803583B4 003552F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803583B8 003552F8  7C 08 03 A6 */	mtlr r0
/* 803583BC 003552FC  38 21 00 10 */	addi r1, r1, 0x10
/* 803583C0 00355300  4E 80 00 20 */	blr 

.global getAnimator__Q34Game6Plants14ProperAnimatorFv
getAnimator__Q34Game6Plants14ProperAnimatorFv:
/* 803583C4 00355304  38 63 00 10 */	addi r3, r3, 0x10
/* 803583C8 00355308  4E 80 00 20 */	blr 
