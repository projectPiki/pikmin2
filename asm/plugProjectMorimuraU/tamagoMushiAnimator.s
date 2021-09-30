.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game11TamagoMushi14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game11TamagoMushi14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 8036D914 0036A854  90 83 00 20 */	stw r4, 0x20(r3)
/* 8036D918 0036A858  4E 80 00 20 */	blr 

.global getAnimator__Q34Game11TamagoMushi14ProperAnimatorFi
getAnimator__Q34Game11TamagoMushi14ProperAnimatorFi:
/* 8036D91C 0036A85C  38 63 00 10 */	addi r3, r3, 0x10
/* 8036D920 0036A860  4E 80 00 20 */	blr 

.global __dt__Q34Game11TamagoMushi14ProperAnimatorFv
__dt__Q34Game11TamagoMushi14ProperAnimatorFv:
/* 8036D924 0036A864  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036D928 0036A868  7C 08 02 A6 */	mflr r0
/* 8036D92C 0036A86C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036D930 0036A870  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036D934 0036A874  7C 7F 1B 79 */	or. r31, r3, r3
/* 8036D938 0036A878  41 82 00 30 */	beq lbl_8036D968
/* 8036D93C 0036A87C  3C 60 80 4E */	lis r3, __vt__Q34Game11TamagoMushi14ProperAnimator@ha
/* 8036D940 0036A880  38 03 34 B0 */	addi r0, r3, __vt__Q34Game11TamagoMushi14ProperAnimator@l
/* 8036D944 0036A884  90 1F 00 00 */	stw r0, 0(r31)
/* 8036D948 0036A888  41 82 00 10 */	beq lbl_8036D958
/* 8036D94C 0036A88C  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 8036D950 0036A890  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 8036D954 0036A894  90 1F 00 00 */	stw r0, 0(r31)
lbl_8036D958:
/* 8036D958 0036A898  7C 80 07 35 */	extsh. r0, r4
/* 8036D95C 0036A89C  40 81 00 0C */	ble lbl_8036D968
/* 8036D960 0036A8A0  7F E3 FB 78 */	mr r3, r31
/* 8036D964 0036A8A4  4B CB 67 51 */	bl __dl__FPv
lbl_8036D968:
/* 8036D968 0036A8A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036D96C 0036A8AC  7F E3 FB 78 */	mr r3, r31
/* 8036D970 0036A8B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036D974 0036A8B4  7C 08 03 A6 */	mtlr r0
/* 8036D978 0036A8B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8036D97C 0036A8BC  4E 80 00 20 */	blr 

.global getAnimator__Q34Game11TamagoMushi14ProperAnimatorFv
getAnimator__Q34Game11TamagoMushi14ProperAnimatorFv:
/* 8036D980 0036A8C0  38 63 00 10 */	addi r3, r3, 0x10
/* 8036D984 0036A8C4  4E 80 00 20 */	blr 
