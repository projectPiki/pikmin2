.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game4Baby14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game4Baby14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 8028D04C 00289F8C  90 83 00 20 */	stw r4, 0x20(r3)
/* 8028D050 00289F90  4E 80 00 20 */	blr 

.global getAnimator__Q34Game4Baby14ProperAnimatorFi
getAnimator__Q34Game4Baby14ProperAnimatorFi:
/* 8028D054 00289F94  38 63 00 10 */	addi r3, r3, 0x10
/* 8028D058 00289F98  4E 80 00 20 */	blr 

.global __dt__Q34Game4Baby14ProperAnimatorFv
__dt__Q34Game4Baby14ProperAnimatorFv:
/* 8028D05C 00289F9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028D060 00289FA0  7C 08 02 A6 */	mflr r0
/* 8028D064 00289FA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028D068 00289FA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028D06C 00289FAC  7C 7F 1B 79 */	or. r31, r3, r3
/* 8028D070 00289FB0  41 82 00 30 */	beq lbl_8028D0A0
/* 8028D074 00289FB4  3C 60 80 4D */	lis r3, __vt__Q34Game4Baby14ProperAnimator@ha
/* 8028D078 00289FB8  38 03 A4 58 */	addi r0, r3, __vt__Q34Game4Baby14ProperAnimator@l
/* 8028D07C 00289FBC  90 1F 00 00 */	stw r0, 0(r31)
/* 8028D080 00289FC0  41 82 00 10 */	beq lbl_8028D090
/* 8028D084 00289FC4  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 8028D088 00289FC8  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 8028D08C 00289FCC  90 1F 00 00 */	stw r0, 0(r31)
lbl_8028D090:
/* 8028D090 00289FD0  7C 80 07 35 */	extsh. r0, r4
/* 8028D094 00289FD4  40 81 00 0C */	ble lbl_8028D0A0
/* 8028D098 00289FD8  7F E3 FB 78 */	mr r3, r31
/* 8028D09C 00289FDC  4B D9 70 19 */	bl __dl__FPv
lbl_8028D0A0:
/* 8028D0A0 00289FE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028D0A4 00289FE4  7F E3 FB 78 */	mr r3, r31
/* 8028D0A8 00289FE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028D0AC 00289FEC  7C 08 03 A6 */	mtlr r0
/* 8028D0B0 00289FF0  38 21 00 10 */	addi r1, r1, 0x10
/* 8028D0B4 00289FF4  4E 80 00 20 */	blr 

.global getAnimator__Q34Game4Baby14ProperAnimatorFv
getAnimator__Q34Game4Baby14ProperAnimatorFv:
/* 8028D0B8 00289FF8  38 63 00 10 */	addi r3, r3, 0x10
/* 8028D0BC 00289FFC  4E 80 00 20 */	blr 
