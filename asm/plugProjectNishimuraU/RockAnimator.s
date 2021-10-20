.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game4Rock14ProperAnimator
__vt__Q34Game4Rock14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game4Rock14ProperAnimatorFv
	.4byte setAnimMgr__Q34Game4Rock14ProperAnimatorFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q34Game4Rock14ProperAnimatorFv
	.4byte getAnimator__Q34Game4Rock14ProperAnimatorFi
	.4byte animate__Q24Game17EnemyAnimatorBaseFf
	.4byte animate__Q24Game17EnemyAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game17EnemyAnimatorBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game4Rock14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game4Rock14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 8026287C 0025F7BC  90 83 00 20 */	stw r4, 0x20(r3)
/* 80262880 0025F7C0  4E 80 00 20 */	blr 

.global getAnimator__Q34Game4Rock14ProperAnimatorFi
getAnimator__Q34Game4Rock14ProperAnimatorFi:
/* 80262884 0025F7C4  38 63 00 10 */	addi r3, r3, 0x10
/* 80262888 0025F7C8  4E 80 00 20 */	blr 

.global __dt__Q34Game4Rock14ProperAnimatorFv
__dt__Q34Game4Rock14ProperAnimatorFv:
/* 8026288C 0025F7CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80262890 0025F7D0  7C 08 02 A6 */	mflr r0
/* 80262894 0025F7D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80262898 0025F7D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026289C 0025F7DC  7C 7F 1B 79 */	or. r31, r3, r3
/* 802628A0 0025F7E0  41 82 00 30 */	beq lbl_802628D0
/* 802628A4 0025F7E4  3C 60 80 4C */	lis r3, __vt__Q34Game4Rock14ProperAnimator@ha
/* 802628A8 0025F7E8  38 03 3F E8 */	addi r0, r3, __vt__Q34Game4Rock14ProperAnimator@l
/* 802628AC 0025F7EC  90 1F 00 00 */	stw r0, 0(r31)
/* 802628B0 0025F7F0  41 82 00 10 */	beq lbl_802628C0
/* 802628B4 0025F7F4  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 802628B8 0025F7F8  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 802628BC 0025F7FC  90 1F 00 00 */	stw r0, 0(r31)
lbl_802628C0:
/* 802628C0 0025F800  7C 80 07 35 */	extsh. r0, r4
/* 802628C4 0025F804  40 81 00 0C */	ble lbl_802628D0
/* 802628C8 0025F808  7F E3 FB 78 */	mr r3, r31
/* 802628CC 0025F80C  4B DC 17 E9 */	bl __dl__FPv
lbl_802628D0:
/* 802628D0 0025F810  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802628D4 0025F814  7F E3 FB 78 */	mr r3, r31
/* 802628D8 0025F818  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802628DC 0025F81C  7C 08 03 A6 */	mtlr r0
/* 802628E0 0025F820  38 21 00 10 */	addi r1, r1, 0x10
/* 802628E4 0025F824  4E 80 00 20 */	blr 

.global getAnimator__Q34Game4Rock14ProperAnimatorFv
getAnimator__Q34Game4Rock14ProperAnimatorFv:
/* 802628E8 0025F828  38 63 00 10 */	addi r3, r3, 0x10
/* 802628EC 0025F82C  4E 80 00 20 */	blr 
