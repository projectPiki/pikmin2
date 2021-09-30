.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game6Jigumo14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game6Jigumo14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 80368858 00365798  90 83 00 20 */	stw r4, 0x20(r3)
/* 8036885C 0036579C  4E 80 00 20 */	blr 

.global getAnimator__Q34Game6Jigumo14ProperAnimatorFi
getAnimator__Q34Game6Jigumo14ProperAnimatorFi:
/* 80368860 003657A0  38 63 00 10 */	addi r3, r3, 0x10
/* 80368864 003657A4  4E 80 00 20 */	blr 

.global __dt__Q34Game6Jigumo14ProperAnimatorFv
__dt__Q34Game6Jigumo14ProperAnimatorFv:
/* 80368868 003657A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036886C 003657AC  7C 08 02 A6 */	mflr r0
/* 80368870 003657B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80368874 003657B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80368878 003657B8  7C 7F 1B 79 */	or. r31, r3, r3
/* 8036887C 003657BC  41 82 00 30 */	beq lbl_803688AC
/* 80368880 003657C0  3C 60 80 4E */	lis r3, __vt__Q34Game6Jigumo14ProperAnimator@ha
/* 80368884 003657C4  38 03 2B 40 */	addi r0, r3, __vt__Q34Game6Jigumo14ProperAnimator@l
/* 80368888 003657C8  90 1F 00 00 */	stw r0, 0(r31)
/* 8036888C 003657CC  41 82 00 10 */	beq lbl_8036889C
/* 80368890 003657D0  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 80368894 003657D4  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 80368898 003657D8  90 1F 00 00 */	stw r0, 0(r31)
lbl_8036889C:
/* 8036889C 003657DC  7C 80 07 35 */	extsh. r0, r4
/* 803688A0 003657E0  40 81 00 0C */	ble lbl_803688AC
/* 803688A4 003657E4  7F E3 FB 78 */	mr r3, r31
/* 803688A8 003657E8  4B CB B8 0D */	bl __dl__FPv
lbl_803688AC:
/* 803688AC 003657EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803688B0 003657F0  7F E3 FB 78 */	mr r3, r31
/* 803688B4 003657F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803688B8 003657F8  7C 08 03 A6 */	mtlr r0
/* 803688BC 003657FC  38 21 00 10 */	addi r1, r1, 0x10
/* 803688C0 00365800  4E 80 00 20 */	blr 

.global getAnimator__Q34Game6Jigumo14ProperAnimatorFv
getAnimator__Q34Game6Jigumo14ProperAnimatorFv:
/* 803688C4 00365804  38 63 00 10 */	addi r3, r3, 0x10
/* 803688C8 00365808  4E 80 00 20 */	blr 
