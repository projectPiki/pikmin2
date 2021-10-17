.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game13PanModokiBase14ProperAnimator
__vt__Q34Game13PanModokiBase14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game13PanModokiBase14ProperAnimatorFv
	.4byte setAnimMgr__Q34Game13PanModokiBase14ProperAnimatorFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q34Game13PanModokiBase14ProperAnimatorFv
	.4byte getAnimator__Q34Game13PanModokiBase14ProperAnimatorFi
	.4byte animate__Q24Game17EnemyAnimatorBaseFf
	.4byte animate__Q24Game17EnemyAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game17EnemyAnimatorBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game13PanModokiBase14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game13PanModokiBase14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 8034E94C 0034B88C  90 83 00 20 */	stw r4, 0x20(r3)
/* 8034E950 0034B890  4E 80 00 20 */	blr 

.global getAnimator__Q34Game13PanModokiBase14ProperAnimatorFi
getAnimator__Q34Game13PanModokiBase14ProperAnimatorFi:
/* 8034E954 0034B894  38 63 00 10 */	addi r3, r3, 0x10
/* 8034E958 0034B898  4E 80 00 20 */	blr 

.global __dt__Q34Game13PanModokiBase14ProperAnimatorFv
__dt__Q34Game13PanModokiBase14ProperAnimatorFv:
/* 8034E95C 0034B89C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034E960 0034B8A0  7C 08 02 A6 */	mflr r0
/* 8034E964 0034B8A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034E968 0034B8A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8034E96C 0034B8AC  7C 7F 1B 79 */	or. r31, r3, r3
/* 8034E970 0034B8B0  41 82 00 30 */	beq lbl_8034E9A0
/* 8034E974 0034B8B4  3C 60 80 4E */	lis r3, __vt__Q34Game13PanModokiBase14ProperAnimator@ha
/* 8034E978 0034B8B8  38 03 C5 80 */	addi r0, r3, __vt__Q34Game13PanModokiBase14ProperAnimator@l
/* 8034E97C 0034B8BC  90 1F 00 00 */	stw r0, 0(r31)
/* 8034E980 0034B8C0  41 82 00 10 */	beq lbl_8034E990
/* 8034E984 0034B8C4  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 8034E988 0034B8C8  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 8034E98C 0034B8CC  90 1F 00 00 */	stw r0, 0(r31)
lbl_8034E990:
/* 8034E990 0034B8D0  7C 80 07 35 */	extsh. r0, r4
/* 8034E994 0034B8D4  40 81 00 0C */	ble lbl_8034E9A0
/* 8034E998 0034B8D8  7F E3 FB 78 */	mr r3, r31
/* 8034E99C 0034B8DC  4B CD 57 19 */	bl __dl__FPv
lbl_8034E9A0:
/* 8034E9A0 0034B8E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034E9A4 0034B8E4  7F E3 FB 78 */	mr r3, r31
/* 8034E9A8 0034B8E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8034E9AC 0034B8EC  7C 08 03 A6 */	mtlr r0
/* 8034E9B0 0034B8F0  38 21 00 10 */	addi r1, r1, 0x10
/* 8034E9B4 0034B8F4  4E 80 00 20 */	blr 

.global getAnimator__Q34Game13PanModokiBase14ProperAnimatorFv
getAnimator__Q34Game13PanModokiBase14ProperAnimatorFv:
/* 8034E9B8 0034B8F8  38 63 00 10 */	addi r3, r3, 0x10
/* 8034E9BC 0034B8FC  4E 80 00 20 */	blr 
