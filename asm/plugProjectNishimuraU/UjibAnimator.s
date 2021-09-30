.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game4Ujib14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game4Ujib14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 8025CCD4 00259C14  90 83 00 20 */	stw r4, 0x20(r3)
/* 8025CCD8 00259C18  4E 80 00 20 */	blr 

.global getAnimator__Q34Game4Ujib14ProperAnimatorFi
getAnimator__Q34Game4Ujib14ProperAnimatorFi:
/* 8025CCDC 00259C1C  38 63 00 10 */	addi r3, r3, 0x10
/* 8025CCE0 00259C20  4E 80 00 20 */	blr 

.global __dt__Q34Game4Ujib14ProperAnimatorFv
__dt__Q34Game4Ujib14ProperAnimatorFv:
/* 8025CCE4 00259C24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025CCE8 00259C28  7C 08 02 A6 */	mflr r0
/* 8025CCEC 00259C2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025CCF0 00259C30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025CCF4 00259C34  7C 7F 1B 79 */	or. r31, r3, r3
/* 8025CCF8 00259C38  41 82 00 30 */	beq lbl_8025CD28
/* 8025CCFC 00259C3C  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujib14ProperAnimator@ha
/* 8025CD00 00259C40  38 03 2E 98 */	addi r0, r3, __vt__Q34Game4Ujib14ProperAnimator@l
/* 8025CD04 00259C44  90 1F 00 00 */	stw r0, 0(r31)
/* 8025CD08 00259C48  41 82 00 10 */	beq lbl_8025CD18
/* 8025CD0C 00259C4C  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 8025CD10 00259C50  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 8025CD14 00259C54  90 1F 00 00 */	stw r0, 0(r31)
lbl_8025CD18:
/* 8025CD18 00259C58  7C 80 07 35 */	extsh. r0, r4
/* 8025CD1C 00259C5C  40 81 00 0C */	ble lbl_8025CD28
/* 8025CD20 00259C60  7F E3 FB 78 */	mr r3, r31
/* 8025CD24 00259C64  4B DC 73 91 */	bl __dl__FPv
lbl_8025CD28:
/* 8025CD28 00259C68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025CD2C 00259C6C  7F E3 FB 78 */	mr r3, r31
/* 8025CD30 00259C70  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025CD34 00259C74  7C 08 03 A6 */	mtlr r0
/* 8025CD38 00259C78  38 21 00 10 */	addi r1, r1, 0x10
/* 8025CD3C 00259C7C  4E 80 00 20 */	blr 

.global getAnimator__Q34Game4Ujib14ProperAnimatorFv
getAnimator__Q34Game4Ujib14ProperAnimatorFv:
/* 8025CD40 00259C80  38 63 00 10 */	addi r3, r3, 0x10
/* 8025CD44 00259C84  4E 80 00 20 */	blr 
