.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game9BombSarai14ProperAnimator
__vt__Q34Game9BombSarai14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game9BombSarai14ProperAnimatorFv
	.4byte setAnimMgr__Q34Game9BombSarai14ProperAnimatorFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q34Game9BombSarai14ProperAnimatorFv
	.4byte getAnimator__Q34Game9BombSarai14ProperAnimatorFi
	.4byte animate__Q24Game17EnemyAnimatorBaseFf
	.4byte animate__Q24Game17EnemyAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game17EnemyAnimatorBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game9BombSarai14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game9BombSarai14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 802B2130 002AF070  90 83 00 20 */	stw r4, 0x20(r3)
/* 802B2134 002AF074  4E 80 00 20 */	blr 

.global getAnimator__Q34Game9BombSarai14ProperAnimatorFi
getAnimator__Q34Game9BombSarai14ProperAnimatorFi:
/* 802B2138 002AF078  38 63 00 10 */	addi r3, r3, 0x10
/* 802B213C 002AF07C  4E 80 00 20 */	blr 

.global __dt__Q34Game9BombSarai14ProperAnimatorFv
__dt__Q34Game9BombSarai14ProperAnimatorFv:
/* 802B2140 002AF080  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B2144 002AF084  7C 08 02 A6 */	mflr r0
/* 802B2148 002AF088  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B214C 002AF08C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B2150 002AF090  7C 7F 1B 79 */	or. r31, r3, r3
/* 802B2154 002AF094  41 82 00 30 */	beq lbl_802B2184
/* 802B2158 002AF098  3C 60 80 4D */	lis r3, __vt__Q34Game9BombSarai14ProperAnimator@ha
/* 802B215C 002AF09C  38 03 E8 80 */	addi r0, r3, __vt__Q34Game9BombSarai14ProperAnimator@l
/* 802B2160 002AF0A0  90 1F 00 00 */	stw r0, 0(r31)
/* 802B2164 002AF0A4  41 82 00 10 */	beq lbl_802B2174
/* 802B2168 002AF0A8  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 802B216C 002AF0AC  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 802B2170 002AF0B0  90 1F 00 00 */	stw r0, 0(r31)
lbl_802B2174:
/* 802B2174 002AF0B4  7C 80 07 35 */	extsh. r0, r4
/* 802B2178 002AF0B8  40 81 00 0C */	ble lbl_802B2184
/* 802B217C 002AF0BC  7F E3 FB 78 */	mr r3, r31
/* 802B2180 002AF0C0  4B D7 1F 35 */	bl __dl__FPv
lbl_802B2184:
/* 802B2184 002AF0C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B2188 002AF0C8  7F E3 FB 78 */	mr r3, r31
/* 802B218C 002AF0CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B2190 002AF0D0  7C 08 03 A6 */	mtlr r0
/* 802B2194 002AF0D4  38 21 00 10 */	addi r1, r1, 0x10
/* 802B2198 002AF0D8  4E 80 00 20 */	blr 

.global getAnimator__Q34Game9BombSarai14ProperAnimatorFv
getAnimator__Q34Game9BombSarai14ProperAnimatorFv:
/* 802B219C 002AF0DC  38 63 00 10 */	addi r3, r3, 0x10
/* 802B21A0 002AF0E0  4E 80 00 20 */	blr 
