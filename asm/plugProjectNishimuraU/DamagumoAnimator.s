.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game8Damagumo14ProperAnimator
__vt__Q34Game8Damagumo14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game8Damagumo14ProperAnimatorFv
	.4byte setAnimMgr__Q34Game8Damagumo14ProperAnimatorFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q34Game8Damagumo14ProperAnimatorFv
	.4byte getAnimator__Q34Game8Damagumo14ProperAnimatorFi
	.4byte animate__Q24Game17EnemyAnimatorBaseFf
	.4byte animate__Q24Game17EnemyAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game17EnemyAnimatorBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game8Damagumo14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game8Damagumo14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 802A5058 002A1F98  90 83 00 20 */	stw r4, 0x20(r3)
/* 802A505C 002A1F9C  4E 80 00 20 */	blr 

.global getAnimator__Q34Game8Damagumo14ProperAnimatorFi
getAnimator__Q34Game8Damagumo14ProperAnimatorFi:
/* 802A5060 002A1FA0  38 63 00 10 */	addi r3, r3, 0x10
/* 802A5064 002A1FA4  4E 80 00 20 */	blr 

.global __dt__Q34Game8Damagumo14ProperAnimatorFv
__dt__Q34Game8Damagumo14ProperAnimatorFv:
/* 802A5068 002A1FA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A506C 002A1FAC  7C 08 02 A6 */	mflr r0
/* 802A5070 002A1FB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A5074 002A1FB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A5078 002A1FB8  7C 7F 1B 79 */	or. r31, r3, r3
/* 802A507C 002A1FBC  41 82 00 30 */	beq lbl_802A50AC
/* 802A5080 002A1FC0  3C 60 80 4D */	lis r3, __vt__Q34Game8Damagumo14ProperAnimator@ha
/* 802A5084 002A1FC4  38 03 D7 00 */	addi r0, r3, __vt__Q34Game8Damagumo14ProperAnimator@l
/* 802A5088 002A1FC8  90 1F 00 00 */	stw r0, 0(r31)
/* 802A508C 002A1FCC  41 82 00 10 */	beq lbl_802A509C
/* 802A5090 002A1FD0  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 802A5094 002A1FD4  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 802A5098 002A1FD8  90 1F 00 00 */	stw r0, 0(r31)
lbl_802A509C:
/* 802A509C 002A1FDC  7C 80 07 35 */	extsh. r0, r4
/* 802A50A0 002A1FE0  40 81 00 0C */	ble lbl_802A50AC
/* 802A50A4 002A1FE4  7F E3 FB 78 */	mr r3, r31
/* 802A50A8 002A1FE8  4B D7 F0 0D */	bl __dl__FPv
lbl_802A50AC:
/* 802A50AC 002A1FEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A50B0 002A1FF0  7F E3 FB 78 */	mr r3, r31
/* 802A50B4 002A1FF4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A50B8 002A1FF8  7C 08 03 A6 */	mtlr r0
/* 802A50BC 002A1FFC  38 21 00 10 */	addi r1, r1, 0x10
/* 802A50C0 002A2000  4E 80 00 20 */	blr 

.global getAnimator__Q34Game8Damagumo14ProperAnimatorFv
getAnimator__Q34Game8Damagumo14ProperAnimatorFv:
/* 802A50C4 002A2004  38 63 00 10 */	addi r3, r3, 0x10
/* 802A50C8 002A2008  4E 80 00 20 */	blr 
