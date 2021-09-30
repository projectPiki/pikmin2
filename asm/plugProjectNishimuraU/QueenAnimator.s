.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game5Queen14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game5Queen14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 80288E40 00285D80  90 83 00 20 */	stw r4, 0x20(r3)
/* 80288E44 00285D84  4E 80 00 20 */	blr 

.global getAnimator__Q34Game5Queen14ProperAnimatorFi
getAnimator__Q34Game5Queen14ProperAnimatorFi:
/* 80288E48 00285D88  38 63 00 10 */	addi r3, r3, 0x10
/* 80288E4C 00285D8C  4E 80 00 20 */	blr 

.global __dt__Q34Game5Queen14ProperAnimatorFv
__dt__Q34Game5Queen14ProperAnimatorFv:
/* 80288E50 00285D90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80288E54 00285D94  7C 08 02 A6 */	mflr r0
/* 80288E58 00285D98  90 01 00 14 */	stw r0, 0x14(r1)
/* 80288E5C 00285D9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80288E60 00285DA0  7C 7F 1B 79 */	or. r31, r3, r3
/* 80288E64 00285DA4  41 82 00 30 */	beq lbl_80288E94
/* 80288E68 00285DA8  3C 60 80 4D */	lis r3, __vt__Q34Game5Queen14ProperAnimator@ha
/* 80288E6C 00285DAC  38 03 9C 08 */	addi r0, r3, __vt__Q34Game5Queen14ProperAnimator@l
/* 80288E70 00285DB0  90 1F 00 00 */	stw r0, 0(r31)
/* 80288E74 00285DB4  41 82 00 10 */	beq lbl_80288E84
/* 80288E78 00285DB8  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 80288E7C 00285DBC  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 80288E80 00285DC0  90 1F 00 00 */	stw r0, 0(r31)
lbl_80288E84:
/* 80288E84 00285DC4  7C 80 07 35 */	extsh. r0, r4
/* 80288E88 00285DC8  40 81 00 0C */	ble lbl_80288E94
/* 80288E8C 00285DCC  7F E3 FB 78 */	mr r3, r31
/* 80288E90 00285DD0  4B D9 B2 25 */	bl __dl__FPv
lbl_80288E94:
/* 80288E94 00285DD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80288E98 00285DD8  7F E3 FB 78 */	mr r3, r31
/* 80288E9C 00285DDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80288EA0 00285DE0  7C 08 03 A6 */	mtlr r0
/* 80288EA4 00285DE4  38 21 00 10 */	addi r1, r1, 0x10
/* 80288EA8 00285DE8  4E 80 00 20 */	blr 

.global getAnimator__Q34Game5Queen14ProperAnimatorFv
getAnimator__Q34Game5Queen14ProperAnimatorFv:
/* 80288EAC 00285DEC  38 63 00 10 */	addi r3, r3, 0x10
/* 80288EB0 00285DF0  4E 80 00 20 */	blr 
