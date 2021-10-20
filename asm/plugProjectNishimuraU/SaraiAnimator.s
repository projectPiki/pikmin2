.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game5Sarai14ProperAnimator
__vt__Q34Game5Sarai14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game5Sarai14ProperAnimatorFv
	.4byte setAnimMgr__Q34Game5Sarai14ProperAnimatorFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q34Game5Sarai14ProperAnimatorFv
	.4byte getAnimator__Q34Game5Sarai14ProperAnimatorFi
	.4byte animate__Q24Game17EnemyAnimatorBaseFf
	.4byte animate__Q24Game17EnemyAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game17EnemyAnimatorBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game5Sarai14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game5Sarai14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 80272490 0026F3D0  90 83 00 20 */	stw r4, 0x20(r3)
/* 80272494 0026F3D4  4E 80 00 20 */	blr 

.global getAnimator__Q34Game5Sarai14ProperAnimatorFi
getAnimator__Q34Game5Sarai14ProperAnimatorFi:
/* 80272498 0026F3D8  38 63 00 10 */	addi r3, r3, 0x10
/* 8027249C 0026F3DC  4E 80 00 20 */	blr 

.global __dt__Q34Game5Sarai14ProperAnimatorFv
__dt__Q34Game5Sarai14ProperAnimatorFv:
/* 802724A0 0026F3E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802724A4 0026F3E4  7C 08 02 A6 */	mflr r0
/* 802724A8 0026F3E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802724AC 0026F3EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802724B0 0026F3F0  7C 7F 1B 79 */	or. r31, r3, r3
/* 802724B4 0026F3F4  41 82 00 30 */	beq lbl_802724E4
/* 802724B8 0026F3F8  3C 60 80 4C */	lis r3, __vt__Q34Game5Sarai14ProperAnimator@ha
/* 802724BC 0026F3FC  38 03 64 A0 */	addi r0, r3, __vt__Q34Game5Sarai14ProperAnimator@l
/* 802724C0 0026F400  90 1F 00 00 */	stw r0, 0(r31)
/* 802724C4 0026F404  41 82 00 10 */	beq lbl_802724D4
/* 802724C8 0026F408  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 802724CC 0026F40C  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 802724D0 0026F410  90 1F 00 00 */	stw r0, 0(r31)
lbl_802724D4:
/* 802724D4 0026F414  7C 80 07 35 */	extsh. r0, r4
/* 802724D8 0026F418  40 81 00 0C */	ble lbl_802724E4
/* 802724DC 0026F41C  7F E3 FB 78 */	mr r3, r31
/* 802724E0 0026F420  4B DB 1B D5 */	bl __dl__FPv
lbl_802724E4:
/* 802724E4 0026F424  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802724E8 0026F428  7F E3 FB 78 */	mr r3, r31
/* 802724EC 0026F42C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802724F0 0026F430  7C 08 03 A6 */	mtlr r0
/* 802724F4 0026F434  38 21 00 10 */	addi r1, r1, 0x10
/* 802724F8 0026F438  4E 80 00 20 */	blr 

.global getAnimator__Q34Game5Sarai14ProperAnimatorFv
getAnimator__Q34Game5Sarai14ProperAnimatorFv:
/* 802724FC 0026F43C  38 63 00 10 */	addi r3, r3, 0x10
/* 80272500 0026F440  4E 80 00 20 */	blr 
