.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game4Frog14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game4Frog14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 802580AC 00254FEC  90 83 00 20 */	stw r4, 0x20(r3)
/* 802580B0 00254FF0  4E 80 00 20 */	blr 

.global getAnimator__Q34Game4Frog14ProperAnimatorFi
getAnimator__Q34Game4Frog14ProperAnimatorFi:
/* 802580B4 00254FF4  38 63 00 10 */	addi r3, r3, 0x10
/* 802580B8 00254FF8  4E 80 00 20 */	blr 

.global __dt__Q34Game4Frog14ProperAnimatorFv
__dt__Q34Game4Frog14ProperAnimatorFv:
/* 802580BC 00254FFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802580C0 00255000  7C 08 02 A6 */	mflr r0
/* 802580C4 00255004  90 01 00 14 */	stw r0, 0x14(r1)
/* 802580C8 00255008  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802580CC 0025500C  7C 7F 1B 79 */	or. r31, r3, r3
/* 802580D0 00255010  41 82 00 30 */	beq lbl_80258100
/* 802580D4 00255014  3C 60 80 4C */	lis r3, __vt__Q34Game4Frog14ProperAnimator@ha
/* 802580D8 00255018  38 03 23 38 */	addi r0, r3, __vt__Q34Game4Frog14ProperAnimator@l
/* 802580DC 0025501C  90 1F 00 00 */	stw r0, 0(r31)
/* 802580E0 00255020  41 82 00 10 */	beq lbl_802580F0
/* 802580E4 00255024  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 802580E8 00255028  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 802580EC 0025502C  90 1F 00 00 */	stw r0, 0(r31)
lbl_802580F0:
/* 802580F0 00255030  7C 80 07 35 */	extsh. r0, r4
/* 802580F4 00255034  40 81 00 0C */	ble lbl_80258100
/* 802580F8 00255038  7F E3 FB 78 */	mr r3, r31
/* 802580FC 0025503C  4B DC BF B9 */	bl __dl__FPv
lbl_80258100:
/* 80258100 00255040  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80258104 00255044  7F E3 FB 78 */	mr r3, r31
/* 80258108 00255048  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025810C 0025504C  7C 08 03 A6 */	mtlr r0
/* 80258110 00255050  38 21 00 10 */	addi r1, r1, 0x10
/* 80258114 00255054  4E 80 00 20 */	blr 

.global getAnimator__Q34Game4Frog14ProperAnimatorFv
getAnimator__Q34Game4Frog14ProperAnimatorFv:
/* 80258118 00255058  38 63 00 10 */	addi r3, r3, 0x10
/* 8025811C 0025505C  4E 80 00 20 */	blr 
