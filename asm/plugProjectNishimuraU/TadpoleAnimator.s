.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game7Tadpole14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game7Tadpole14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 802781F0 00275130  90 83 00 20 */	stw r4, 0x20(r3)
/* 802781F4 00275134  4E 80 00 20 */	blr 

.global getAnimator__Q34Game7Tadpole14ProperAnimatorFi
getAnimator__Q34Game7Tadpole14ProperAnimatorFi:
/* 802781F8 00275138  38 63 00 10 */	addi r3, r3, 0x10
/* 802781FC 0027513C  4E 80 00 20 */	blr 

.global __dt__Q34Game7Tadpole14ProperAnimatorFv
__dt__Q34Game7Tadpole14ProperAnimatorFv:
/* 80278200 00275140  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80278204 00275144  7C 08 02 A6 */	mflr r0
/* 80278208 00275148  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027820C 0027514C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80278210 00275150  7C 7F 1B 79 */	or. r31, r3, r3
/* 80278214 00275154  41 82 00 30 */	beq lbl_80278244
/* 80278218 00275158  3C 60 80 4C */	lis r3, __vt__Q34Game7Tadpole14ProperAnimator@ha
/* 8027821C 0027515C  38 03 73 E0 */	addi r0, r3, __vt__Q34Game7Tadpole14ProperAnimator@l
/* 80278220 00275160  90 1F 00 00 */	stw r0, 0(r31)
/* 80278224 00275164  41 82 00 10 */	beq lbl_80278234
/* 80278228 00275168  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 8027822C 0027516C  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 80278230 00275170  90 1F 00 00 */	stw r0, 0(r31)
lbl_80278234:
/* 80278234 00275174  7C 80 07 35 */	extsh. r0, r4
/* 80278238 00275178  40 81 00 0C */	ble lbl_80278244
/* 8027823C 0027517C  7F E3 FB 78 */	mr r3, r31
/* 80278240 00275180  4B DA BE 75 */	bl __dl__FPv
lbl_80278244:
/* 80278244 00275184  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80278248 00275188  7F E3 FB 78 */	mr r3, r31
/* 8027824C 0027518C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80278250 00275190  7C 08 03 A6 */	mtlr r0
/* 80278254 00275194  38 21 00 10 */	addi r1, r1, 0x10
/* 80278258 00275198  4E 80 00 20 */	blr 

.global getAnimator__Q34Game7Tadpole14ProperAnimatorFv
getAnimator__Q34Game7Tadpole14ProperAnimatorFv:
/* 8027825C 0027519C  38 63 00 10 */	addi r3, r3, 0x10
/* 80278260 002751A0  4E 80 00 20 */	blr 
