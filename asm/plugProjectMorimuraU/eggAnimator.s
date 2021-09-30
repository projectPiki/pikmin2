.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game3Egg14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game3Egg14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 8034B63C 0034857C  90 83 00 20 */	stw r4, 0x20(r3)
/* 8034B640 00348580  4E 80 00 20 */	blr 

.global getAnimator__Q34Game3Egg14ProperAnimatorFi
getAnimator__Q34Game3Egg14ProperAnimatorFi:
/* 8034B644 00348584  38 63 00 10 */	addi r3, r3, 0x10
/* 8034B648 00348588  4E 80 00 20 */	blr 

.global __dt__Q34Game3Egg14ProperAnimatorFv
__dt__Q34Game3Egg14ProperAnimatorFv:
/* 8034B64C 0034858C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034B650 00348590  7C 08 02 A6 */	mflr r0
/* 8034B654 00348594  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034B658 00348598  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8034B65C 0034859C  7C 7F 1B 79 */	or. r31, r3, r3
/* 8034B660 003485A0  41 82 00 30 */	beq lbl_8034B690
/* 8034B664 003485A4  3C 60 80 4E */	lis r3, __vt__Q34Game3Egg14ProperAnimator@ha
/* 8034B668 003485A8  38 03 BF 60 */	addi r0, r3, __vt__Q34Game3Egg14ProperAnimator@l
/* 8034B66C 003485AC  90 1F 00 00 */	stw r0, 0(r31)
/* 8034B670 003485B0  41 82 00 10 */	beq lbl_8034B680
/* 8034B674 003485B4  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 8034B678 003485B8  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 8034B67C 003485BC  90 1F 00 00 */	stw r0, 0(r31)
lbl_8034B680:
/* 8034B680 003485C0  7C 80 07 35 */	extsh. r0, r4
/* 8034B684 003485C4  40 81 00 0C */	ble lbl_8034B690
/* 8034B688 003485C8  7F E3 FB 78 */	mr r3, r31
/* 8034B68C 003485CC  4B CD 8A 29 */	bl __dl__FPv
lbl_8034B690:
/* 8034B690 003485D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034B694 003485D4  7F E3 FB 78 */	mr r3, r31
/* 8034B698 003485D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8034B69C 003485DC  7C 08 03 A6 */	mtlr r0
/* 8034B6A0 003485E0  38 21 00 10 */	addi r1, r1, 0x10
/* 8034B6A4 003485E4  4E 80 00 20 */	blr 

.global getAnimator__Q34Game3Egg14ProperAnimatorFv
getAnimator__Q34Game3Egg14ProperAnimatorFv:
/* 8034B6A8 003485E8  38 63 00 10 */	addi r3, r3, 0x10
/* 8034B6AC 003485EC  4E 80 00 20 */	blr 
