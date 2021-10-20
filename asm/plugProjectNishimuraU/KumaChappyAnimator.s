.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game10KumaChappy14ProperAnimator
__vt__Q34Game10KumaChappy14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game10KumaChappy14ProperAnimatorFv
	.4byte setAnimMgr__Q34Game10KumaChappy14ProperAnimatorFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q34Game10KumaChappy14ProperAnimatorFv
	.4byte getAnimator__Q34Game10KumaChappy14ProperAnimatorFi
	.4byte animate__Q24Game17EnemyAnimatorBaseFf
	.4byte animate__Q24Game17EnemyAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game17EnemyAnimatorBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game10KumaChappy14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game10KumaChappy14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 80299240 00296180  90 83 00 20 */	stw r4, 0x20(r3)
/* 80299244 00296184  4E 80 00 20 */	blr 

.global getAnimator__Q34Game10KumaChappy14ProperAnimatorFi
getAnimator__Q34Game10KumaChappy14ProperAnimatorFi:
/* 80299248 00296188  38 63 00 10 */	addi r3, r3, 0x10
/* 8029924C 0029618C  4E 80 00 20 */	blr 

.global __dt__Q34Game10KumaChappy14ProperAnimatorFv
__dt__Q34Game10KumaChappy14ProperAnimatorFv:
/* 80299250 00296190  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80299254 00296194  7C 08 02 A6 */	mflr r0
/* 80299258 00296198  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029925C 0029619C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80299260 002961A0  7C 7F 1B 79 */	or. r31, r3, r3
/* 80299264 002961A4  41 82 00 30 */	beq lbl_80299294
/* 80299268 002961A8  3C 60 80 4D */	lis r3, __vt__Q34Game10KumaChappy14ProperAnimator@ha
/* 8029926C 002961AC  38 03 BB 78 */	addi r0, r3, __vt__Q34Game10KumaChappy14ProperAnimator@l
/* 80299270 002961B0  90 1F 00 00 */	stw r0, 0(r31)
/* 80299274 002961B4  41 82 00 10 */	beq lbl_80299284
/* 80299278 002961B8  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 8029927C 002961BC  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 80299280 002961C0  90 1F 00 00 */	stw r0, 0(r31)
lbl_80299284:
/* 80299284 002961C4  7C 80 07 35 */	extsh. r0, r4
/* 80299288 002961C8  40 81 00 0C */	ble lbl_80299294
/* 8029928C 002961CC  7F E3 FB 78 */	mr r3, r31
/* 80299290 002961D0  4B D8 AE 25 */	bl __dl__FPv
lbl_80299294:
/* 80299294 002961D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80299298 002961D8  7F E3 FB 78 */	mr r3, r31
/* 8029929C 002961DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802992A0 002961E0  7C 08 03 A6 */	mtlr r0
/* 802992A4 002961E4  38 21 00 10 */	addi r1, r1, 0x10
/* 802992A8 002961E8  4E 80 00 20 */	blr 

.global getAnimator__Q34Game10KumaChappy14ProperAnimatorFv
getAnimator__Q34Game10KumaChappy14ProperAnimatorFv:
/* 802992AC 002961EC  38 63 00 10 */	addi r3, r3, 0x10
/* 802992B0 002961F0  4E 80 00 20 */	blr 
