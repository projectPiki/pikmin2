.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game6Kurage14ProperAnimator
__vt__Q34Game6Kurage14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game6Kurage14ProperAnimatorFv
	.4byte setAnimMgr__Q34Game6Kurage14ProperAnimatorFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q34Game6Kurage14ProperAnimatorFv
	.4byte getAnimator__Q34Game6Kurage14ProperAnimatorFi
	.4byte animate__Q24Game17EnemyAnimatorBaseFf
	.4byte animate__Q24Game17EnemyAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game17EnemyAnimatorBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game6Kurage14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game6Kurage14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 802AD090 002A9FD0  90 83 00 20 */	stw r4, 0x20(r3)
/* 802AD094 002A9FD4  4E 80 00 20 */	blr 

.global getAnimator__Q34Game6Kurage14ProperAnimatorFi
getAnimator__Q34Game6Kurage14ProperAnimatorFi:
/* 802AD098 002A9FD8  38 63 00 10 */	addi r3, r3, 0x10
/* 802AD09C 002A9FDC  4E 80 00 20 */	blr 

.global __dt__Q34Game6Kurage14ProperAnimatorFv
__dt__Q34Game6Kurage14ProperAnimatorFv:
/* 802AD0A0 002A9FE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AD0A4 002A9FE4  7C 08 02 A6 */	mflr r0
/* 802AD0A8 002A9FE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AD0AC 002A9FEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802AD0B0 002A9FF0  7C 7F 1B 79 */	or. r31, r3, r3
/* 802AD0B4 002A9FF4  41 82 00 30 */	beq lbl_802AD0E4
/* 802AD0B8 002A9FF8  3C 60 80 4D */	lis r3, __vt__Q34Game6Kurage14ProperAnimator@ha
/* 802AD0BC 002A9FFC  38 03 E0 E0 */	addi r0, r3, __vt__Q34Game6Kurage14ProperAnimator@l
/* 802AD0C0 002AA000  90 1F 00 00 */	stw r0, 0(r31)
/* 802AD0C4 002AA004  41 82 00 10 */	beq lbl_802AD0D4
/* 802AD0C8 002AA008  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 802AD0CC 002AA00C  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 802AD0D0 002AA010  90 1F 00 00 */	stw r0, 0(r31)
lbl_802AD0D4:
/* 802AD0D4 002AA014  7C 80 07 35 */	extsh. r0, r4
/* 802AD0D8 002AA018  40 81 00 0C */	ble lbl_802AD0E4
/* 802AD0DC 002AA01C  7F E3 FB 78 */	mr r3, r31
/* 802AD0E0 002AA020  4B D7 6F D5 */	bl __dl__FPv
lbl_802AD0E4:
/* 802AD0E4 002AA024  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AD0E8 002AA028  7F E3 FB 78 */	mr r3, r31
/* 802AD0EC 002AA02C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802AD0F0 002AA030  7C 08 03 A6 */	mtlr r0
/* 802AD0F4 002AA034  38 21 00 10 */	addi r1, r1, 0x10
/* 802AD0F8 002AA038  4E 80 00 20 */	blr 

.global getAnimator__Q34Game6Kurage14ProperAnimatorFv
getAnimator__Q34Game6Kurage14ProperAnimatorFv:
/* 802AD0FC 002AA03C  38 63 00 10 */	addi r3, r3, 0x10
/* 802AD100 002AA040  4E 80 00 20 */	blr 
