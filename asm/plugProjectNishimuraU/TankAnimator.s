.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game4Tank14ProperAnimator
__vt__Q34Game4Tank14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game4Tank14ProperAnimatorFv
	.4byte setAnimMgr__Q34Game4Tank14ProperAnimatorFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q34Game4Tank14ProperAnimatorFv
	.4byte getAnimator__Q34Game4Tank14ProperAnimatorFi
	.4byte animate__Q24Game17EnemyAnimatorBaseFf
	.4byte animate__Q24Game17EnemyAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game17EnemyAnimatorBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game4Tank14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game4Tank14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 802759A4 002728E4  90 83 00 20 */	stw r4, 0x20(r3)
/* 802759A8 002728E8  4E 80 00 20 */	blr 

.global getAnimator__Q34Game4Tank14ProperAnimatorFi
getAnimator__Q34Game4Tank14ProperAnimatorFi:
/* 802759AC 002728EC  38 63 00 10 */	addi r3, r3, 0x10
/* 802759B0 002728F0  4E 80 00 20 */	blr 

.global __dt__Q34Game4Tank14ProperAnimatorFv
__dt__Q34Game4Tank14ProperAnimatorFv:
/* 802759B4 002728F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802759B8 002728F8  7C 08 02 A6 */	mflr r0
/* 802759BC 002728FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802759C0 00272900  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802759C4 00272904  7C 7F 1B 79 */	or. r31, r3, r3
/* 802759C8 00272908  41 82 00 30 */	beq lbl_802759F8
/* 802759CC 0027290C  3C 60 80 4C */	lis r3, __vt__Q34Game4Tank14ProperAnimator@ha
/* 802759D0 00272910  38 03 6A 40 */	addi r0, r3, __vt__Q34Game4Tank14ProperAnimator@l
/* 802759D4 00272914  90 1F 00 00 */	stw r0, 0(r31)
/* 802759D8 00272918  41 82 00 10 */	beq lbl_802759E8
/* 802759DC 0027291C  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 802759E0 00272920  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 802759E4 00272924  90 1F 00 00 */	stw r0, 0(r31)
lbl_802759E8:
/* 802759E8 00272928  7C 80 07 35 */	extsh. r0, r4
/* 802759EC 0027292C  40 81 00 0C */	ble lbl_802759F8
/* 802759F0 00272930  7F E3 FB 78 */	mr r3, r31
/* 802759F4 00272934  4B DA E6 C1 */	bl __dl__FPv
lbl_802759F8:
/* 802759F8 00272938  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802759FC 0027293C  7F E3 FB 78 */	mr r3, r31
/* 80275A00 00272940  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80275A04 00272944  7C 08 03 A6 */	mtlr r0
/* 80275A08 00272948  38 21 00 10 */	addi r1, r1, 0x10
/* 80275A0C 0027294C  4E 80 00 20 */	blr 

.global getAnimator__Q34Game4Tank14ProperAnimatorFv
getAnimator__Q34Game4Tank14ProperAnimatorFv:
/* 80275A10 00272950  38 63 00 10 */	addi r3, r3, 0x10
/* 80275A14 00272954  4E 80 00 20 */	blr 
