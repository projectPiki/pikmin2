.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game4Hiba14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game4Hiba14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 8026B848 00268788  90 83 00 20 */	stw r4, 0x20(r3)
/* 8026B84C 0026878C  4E 80 00 20 */	blr 

.global getAnimator__Q34Game4Hiba14ProperAnimatorFi
getAnimator__Q34Game4Hiba14ProperAnimatorFi:
/* 8026B850 00268790  38 63 00 10 */	addi r3, r3, 0x10
/* 8026B854 00268794  4E 80 00 20 */	blr 

.global __dt__Q34Game4Hiba14ProperAnimatorFv
__dt__Q34Game4Hiba14ProperAnimatorFv:
/* 8026B858 00268798  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026B85C 0026879C  7C 08 02 A6 */	mflr r0
/* 8026B860 002687A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026B864 002687A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026B868 002687A8  7C 7F 1B 79 */	or. r31, r3, r3
/* 8026B86C 002687AC  41 82 00 30 */	beq lbl_8026B89C
/* 8026B870 002687B0  3C 60 80 4C */	lis r3, __vt__Q34Game4Hiba14ProperAnimator@ha
/* 8026B874 002687B4  38 03 52 C0 */	addi r0, r3, __vt__Q34Game4Hiba14ProperAnimator@l
/* 8026B878 002687B8  90 1F 00 00 */	stw r0, 0(r31)
/* 8026B87C 002687BC  41 82 00 10 */	beq lbl_8026B88C
/* 8026B880 002687C0  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 8026B884 002687C4  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 8026B888 002687C8  90 1F 00 00 */	stw r0, 0(r31)
lbl_8026B88C:
/* 8026B88C 002687CC  7C 80 07 35 */	extsh. r0, r4
/* 8026B890 002687D0  40 81 00 0C */	ble lbl_8026B89C
/* 8026B894 002687D4  7F E3 FB 78 */	mr r3, r31
/* 8026B898 002687D8  4B DB 88 1D */	bl __dl__FPv
lbl_8026B89C:
/* 8026B89C 002687DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026B8A0 002687E0  7F E3 FB 78 */	mr r3, r31
/* 8026B8A4 002687E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026B8A8 002687E8  7C 08 03 A6 */	mtlr r0
/* 8026B8AC 002687EC  38 21 00 10 */	addi r1, r1, 0x10
/* 8026B8B0 002687F0  4E 80 00 20 */	blr 

.global getAnimator__Q34Game4Hiba14ProperAnimatorFv
getAnimator__Q34Game4Hiba14ProperAnimatorFv:
/* 8026B8B4 002687F4  38 63 00 10 */	addi r3, r3, 0x10
/* 8026B8B8 002687F8  4E 80 00 20 */	blr 
