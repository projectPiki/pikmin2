.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game6Kogane14ProperAnimator
__vt__Q34Game6Kogane14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game6Kogane14ProperAnimatorFv
	.4byte setAnimMgr__Q34Game6Kogane14ProperAnimatorFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q34Game6Kogane14ProperAnimatorFv
	.4byte getAnimator__Q34Game6Kogane14ProperAnimatorFi
	.4byte animate__Q24Game17EnemyAnimatorBaseFf
	.4byte animate__Q24Game17EnemyAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game17EnemyAnimatorBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game6Kogane14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game6Kogane14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 8025F020 0025BF60  90 83 00 20 */	stw r4, 0x20(r3)
/* 8025F024 0025BF64  4E 80 00 20 */	blr 

.global getAnimator__Q34Game6Kogane14ProperAnimatorFi
getAnimator__Q34Game6Kogane14ProperAnimatorFi:
/* 8025F028 0025BF68  38 63 00 10 */	addi r3, r3, 0x10
/* 8025F02C 0025BF6C  4E 80 00 20 */	blr 

.global __dt__Q34Game6Kogane14ProperAnimatorFv
__dt__Q34Game6Kogane14ProperAnimatorFv:
/* 8025F030 0025BF70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025F034 0025BF74  7C 08 02 A6 */	mflr r0
/* 8025F038 0025BF78  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025F03C 0025BF7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025F040 0025BF80  7C 7F 1B 79 */	or. r31, r3, r3
/* 8025F044 0025BF84  41 82 00 30 */	beq lbl_8025F074
/* 8025F048 0025BF88  3C 60 80 4C */	lis r3, __vt__Q34Game6Kogane14ProperAnimator@ha
/* 8025F04C 0025BF8C  38 03 33 F8 */	addi r0, r3, __vt__Q34Game6Kogane14ProperAnimator@l
/* 8025F050 0025BF90  90 1F 00 00 */	stw r0, 0(r31)
/* 8025F054 0025BF94  41 82 00 10 */	beq lbl_8025F064
/* 8025F058 0025BF98  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 8025F05C 0025BF9C  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 8025F060 0025BFA0  90 1F 00 00 */	stw r0, 0(r31)
lbl_8025F064:
/* 8025F064 0025BFA4  7C 80 07 35 */	extsh. r0, r4
/* 8025F068 0025BFA8  40 81 00 0C */	ble lbl_8025F074
/* 8025F06C 0025BFAC  7F E3 FB 78 */	mr r3, r31
/* 8025F070 0025BFB0  4B DC 50 45 */	bl __dl__FPv
lbl_8025F074:
/* 8025F074 0025BFB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025F078 0025BFB8  7F E3 FB 78 */	mr r3, r31
/* 8025F07C 0025BFBC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025F080 0025BFC0  7C 08 03 A6 */	mtlr r0
/* 8025F084 0025BFC4  38 21 00 10 */	addi r1, r1, 0x10
/* 8025F088 0025BFC8  4E 80 00 20 */	blr 

.global getAnimator__Q34Game6Kogane14ProperAnimatorFv
getAnimator__Q34Game6Kogane14ProperAnimatorFv:
/* 8025F08C 0025BFCC  38 63 00 10 */	addi r3, r3, 0x10
/* 8025F090 0025BFD0  4E 80 00 20 */	blr 
