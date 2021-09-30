.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game8BlackMan14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game8BlackMan14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 803A5354 003A2294  90 83 00 20 */	stw r4, 0x20(r3)
/* 803A5358 003A2298  4E 80 00 20 */	blr 

.global getAnimator__Q34Game8BlackMan14ProperAnimatorFi
getAnimator__Q34Game8BlackMan14ProperAnimatorFi:
/* 803A535C 003A229C  38 63 00 10 */	addi r3, r3, 0x10
/* 803A5360 003A22A0  4E 80 00 20 */	blr 

.global __dt__Q34Game8BlackMan14ProperAnimatorFv
__dt__Q34Game8BlackMan14ProperAnimatorFv:
/* 803A5364 003A22A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A5368 003A22A8  7C 08 02 A6 */	mflr r0
/* 803A536C 003A22AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A5370 003A22B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A5374 003A22B4  7C 7F 1B 79 */	or. r31, r3, r3
/* 803A5378 003A22B8  41 82 00 30 */	beq lbl_803A53A8
/* 803A537C 003A22BC  3C 60 80 4E */	lis r3, __vt__Q34Game8BlackMan14ProperAnimator@ha
/* 803A5380 003A22C0  38 03 5B E8 */	addi r0, r3, __vt__Q34Game8BlackMan14ProperAnimator@l
/* 803A5384 003A22C4  90 1F 00 00 */	stw r0, 0(r31)
/* 803A5388 003A22C8  41 82 00 10 */	beq lbl_803A5398
/* 803A538C 003A22CC  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 803A5390 003A22D0  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 803A5394 003A22D4  90 1F 00 00 */	stw r0, 0(r31)
lbl_803A5398:
/* 803A5398 003A22D8  7C 80 07 35 */	extsh. r0, r4
/* 803A539C 003A22DC  40 81 00 0C */	ble lbl_803A53A8
/* 803A53A0 003A22E0  7F E3 FB 78 */	mr r3, r31
/* 803A53A4 003A22E4  4B C7 ED 11 */	bl __dl__FPv
lbl_803A53A8:
/* 803A53A8 003A22E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A53AC 003A22EC  7F E3 FB 78 */	mr r3, r31
/* 803A53B0 003A22F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A53B4 003A22F4  7C 08 03 A6 */	mtlr r0
/* 803A53B8 003A22F8  38 21 00 10 */	addi r1, r1, 0x10
/* 803A53BC 003A22FC  4E 80 00 20 */	blr 

.global getAnimator__Q34Game8BlackMan14ProperAnimatorFv
getAnimator__Q34Game8BlackMan14ProperAnimatorFv:
/* 803A53C0 003A2300  38 63 00 10 */	addi r3, r3, 0x10
/* 803A53C4 003A2304  4E 80 00 20 */	blr 
