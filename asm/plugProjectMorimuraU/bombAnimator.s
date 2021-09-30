.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game4Bomb14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game4Bomb14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 80349D64 00346CA4  90 83 00 20 */	stw r4, 0x20(r3)
/* 80349D68 00346CA8  4E 80 00 20 */	blr 

.global getAnimator__Q34Game4Bomb14ProperAnimatorFi
getAnimator__Q34Game4Bomb14ProperAnimatorFi:
/* 80349D6C 00346CAC  38 63 00 10 */	addi r3, r3, 0x10
/* 80349D70 00346CB0  4E 80 00 20 */	blr 

.global __dt__Q34Game4Bomb14ProperAnimatorFv
__dt__Q34Game4Bomb14ProperAnimatorFv:
/* 80349D74 00346CB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80349D78 00346CB8  7C 08 02 A6 */	mflr r0
/* 80349D7C 00346CBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80349D80 00346CC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80349D84 00346CC4  7C 7F 1B 79 */	or. r31, r3, r3
/* 80349D88 00346CC8  41 82 00 30 */	beq lbl_80349DB8
/* 80349D8C 00346CCC  3C 60 80 4E */	lis r3, __vt__Q34Game4Bomb14ProperAnimator@ha
/* 80349D90 00346CD0  38 03 BA 50 */	addi r0, r3, __vt__Q34Game4Bomb14ProperAnimator@l
/* 80349D94 00346CD4  90 1F 00 00 */	stw r0, 0(r31)
/* 80349D98 00346CD8  41 82 00 10 */	beq lbl_80349DA8
/* 80349D9C 00346CDC  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 80349DA0 00346CE0  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 80349DA4 00346CE4  90 1F 00 00 */	stw r0, 0(r31)
lbl_80349DA8:
/* 80349DA8 00346CE8  7C 80 07 35 */	extsh. r0, r4
/* 80349DAC 00346CEC  40 81 00 0C */	ble lbl_80349DB8
/* 80349DB0 00346CF0  7F E3 FB 78 */	mr r3, r31
/* 80349DB4 00346CF4  4B CD A3 01 */	bl __dl__FPv
lbl_80349DB8:
/* 80349DB8 00346CF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80349DBC 00346CFC  7F E3 FB 78 */	mr r3, r31
/* 80349DC0 00346D00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80349DC4 00346D04  7C 08 03 A6 */	mtlr r0
/* 80349DC8 00346D08  38 21 00 10 */	addi r1, r1, 0x10
/* 80349DCC 00346D0C  4E 80 00 20 */	blr 

.global getAnimator__Q34Game4Bomb14ProperAnimatorFv
getAnimator__Q34Game4Bomb14ProperAnimatorFv:
/* 80349DD0 00346D10  38 63 00 10 */	addi r3, r3, 0x10
/* 80349DD4 00346D14  4E 80 00 20 */	blr 
