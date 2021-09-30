.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game4Ujia14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game4Ujia14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 80265CA0 00262BE0  90 83 00 20 */	stw r4, 0x20(r3)
/* 80265CA4 00262BE4  4E 80 00 20 */	blr 

.global getAnimator__Q34Game4Ujia14ProperAnimatorFi
getAnimator__Q34Game4Ujia14ProperAnimatorFi:
/* 80265CA8 00262BE8  38 63 00 10 */	addi r3, r3, 0x10
/* 80265CAC 00262BEC  4E 80 00 20 */	blr 

.global __dt__Q34Game4Ujia14ProperAnimatorFv
__dt__Q34Game4Ujia14ProperAnimatorFv:
/* 80265CB0 00262BF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80265CB4 00262BF4  7C 08 02 A6 */	mflr r0
/* 80265CB8 00262BF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80265CBC 00262BFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80265CC0 00262C00  7C 7F 1B 79 */	or. r31, r3, r3
/* 80265CC4 00262C04  41 82 00 30 */	beq lbl_80265CF4
/* 80265CC8 00262C08  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujia14ProperAnimator@ha
/* 80265CCC 00262C0C  38 03 47 38 */	addi r0, r3, __vt__Q34Game4Ujia14ProperAnimator@l
/* 80265CD0 00262C10  90 1F 00 00 */	stw r0, 0(r31)
/* 80265CD4 00262C14  41 82 00 10 */	beq lbl_80265CE4
/* 80265CD8 00262C18  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 80265CDC 00262C1C  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 80265CE0 00262C20  90 1F 00 00 */	stw r0, 0(r31)
lbl_80265CE4:
/* 80265CE4 00262C24  7C 80 07 35 */	extsh. r0, r4
/* 80265CE8 00262C28  40 81 00 0C */	ble lbl_80265CF4
/* 80265CEC 00262C2C  7F E3 FB 78 */	mr r3, r31
/* 80265CF0 00262C30  4B DB E3 C5 */	bl __dl__FPv
lbl_80265CF4:
/* 80265CF4 00262C34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80265CF8 00262C38  7F E3 FB 78 */	mr r3, r31
/* 80265CFC 00262C3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80265D00 00262C40  7C 08 03 A6 */	mtlr r0
/* 80265D04 00262C44  38 21 00 10 */	addi r1, r1, 0x10
/* 80265D08 00262C48  4E 80 00 20 */	blr 

.global getAnimator__Q34Game4Ujia14ProperAnimatorFv
getAnimator__Q34Game4Ujia14ProperAnimatorFv:
/* 80265D0C 00262C4C  38 63 00 10 */	addi r3, r3, 0x10
/* 80265D10 00262C50  4E 80 00 20 */	blr 
