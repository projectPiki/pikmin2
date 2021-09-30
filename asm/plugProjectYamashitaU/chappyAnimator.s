.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game10ChappyBase14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game10ChappyBase14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 80119710 00116650  90 83 00 20 */	stw r4, 0x20(r3)
/* 80119714 00116654  4E 80 00 20 */	blr 

.global getAnimator__Q34Game10ChappyBase14ProperAnimatorFi
getAnimator__Q34Game10ChappyBase14ProperAnimatorFi:
/* 80119718 00116658  38 63 00 10 */	addi r3, r3, 0x10
/* 8011971C 0011665C  4E 80 00 20 */	blr 

.global __dt__Q34Game10ChappyBase14ProperAnimatorFv
__dt__Q34Game10ChappyBase14ProperAnimatorFv:
/* 80119720 00116660  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80119724 00116664  7C 08 02 A6 */	mflr r0
/* 80119728 00116668  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011972C 0011666C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80119730 00116670  7C 7F 1B 79 */	or. r31, r3, r3
/* 80119734 00116674  41 82 00 30 */	beq lbl_80119764
/* 80119738 00116678  3C 60 80 4B */	lis r3, __vt__Q34Game10ChappyBase14ProperAnimator@ha
/* 8011973C 0011667C  38 03 C1 E8 */	addi r0, r3, __vt__Q34Game10ChappyBase14ProperAnimator@l
/* 80119740 00116680  90 1F 00 00 */	stw r0, 0(r31)
/* 80119744 00116684  41 82 00 10 */	beq lbl_80119754
/* 80119748 00116688  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 8011974C 0011668C  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 80119750 00116690  90 1F 00 00 */	stw r0, 0(r31)
lbl_80119754:
/* 80119754 00116694  7C 80 07 35 */	extsh. r0, r4
/* 80119758 00116698  40 81 00 0C */	ble lbl_80119764
/* 8011975C 0011669C  7F E3 FB 78 */	mr r3, r31
/* 80119760 001166A0  4B F0 A9 55 */	bl __dl__FPv
lbl_80119764:
/* 80119764 001166A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80119768 001166A8  7F E3 FB 78 */	mr r3, r31
/* 8011976C 001166AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80119770 001166B0  7C 08 03 A6 */	mtlr r0
/* 80119774 001166B4  38 21 00 10 */	addi r1, r1, 0x10
/* 80119778 001166B8  4E 80 00 20 */	blr 

.global getAnimator__Q34Game10ChappyBase14ProperAnimatorFv
getAnimator__Q34Game10ChappyBase14ProperAnimatorFv:
/* 8011977C 001166BC  38 63 00 10 */	addi r3, r3, 0x10
/* 80119780 001166C0  4E 80 00 20 */	blr 
