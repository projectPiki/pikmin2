.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game12Hanachirashi14ProperAnimator
__vt__Q34Game12Hanachirashi14ProperAnimator:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game12Hanachirashi14ProperAnimatorFv
	.4byte setAnimMgr__Q34Game12Hanachirashi14ProperAnimatorFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q34Game12Hanachirashi14ProperAnimatorFv
	.4byte getAnimator__Q34Game12Hanachirashi14ProperAnimatorFi
	.4byte animate__Q24Game17EnemyAnimatorBaseFf
	.4byte animate__Q24Game17EnemyAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game17EnemyAnimatorBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game12Hanachirashi14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game12Hanachirashi14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 802A12B4 0029E1F4  90 83 00 20 */	stw r4, 0x20(r3)
/* 802A12B8 0029E1F8  4E 80 00 20 */	blr 

.global getAnimator__Q34Game12Hanachirashi14ProperAnimatorFi
getAnimator__Q34Game12Hanachirashi14ProperAnimatorFi:
/* 802A12BC 0029E1FC  38 63 00 10 */	addi r3, r3, 0x10
/* 802A12C0 0029E200  4E 80 00 20 */	blr 

.global __dt__Q34Game12Hanachirashi14ProperAnimatorFv
__dt__Q34Game12Hanachirashi14ProperAnimatorFv:
/* 802A12C4 0029E204  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A12C8 0029E208  7C 08 02 A6 */	mflr r0
/* 802A12CC 0029E20C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A12D0 0029E210  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A12D4 0029E214  7C 7F 1B 79 */	or. r31, r3, r3
/* 802A12D8 0029E218  41 82 00 30 */	beq lbl_802A1308
/* 802A12DC 0029E21C  3C 60 80 4D */	lis r3, __vt__Q34Game12Hanachirashi14ProperAnimator@ha
/* 802A12E0 0029E220  38 03 D1 50 */	addi r0, r3, __vt__Q34Game12Hanachirashi14ProperAnimator@l
/* 802A12E4 0029E224  90 1F 00 00 */	stw r0, 0(r31)
/* 802A12E8 0029E228  41 82 00 10 */	beq lbl_802A12F8
/* 802A12EC 0029E22C  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 802A12F0 0029E230  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 802A12F4 0029E234  90 1F 00 00 */	stw r0, 0(r31)
lbl_802A12F8:
/* 802A12F8 0029E238  7C 80 07 35 */	extsh. r0, r4
/* 802A12FC 0029E23C  40 81 00 0C */	ble lbl_802A1308
/* 802A1300 0029E240  7F E3 FB 78 */	mr r3, r31
/* 802A1304 0029E244  4B D8 2D B1 */	bl __dl__FPv
lbl_802A1308:
/* 802A1308 0029E248  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A130C 0029E24C  7F E3 FB 78 */	mr r3, r31
/* 802A1310 0029E250  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A1314 0029E254  7C 08 03 A6 */	mtlr r0
/* 802A1318 0029E258  38 21 00 10 */	addi r1, r1, 0x10
/* 802A131C 0029E25C  4E 80 00 20 */	blr 

.global getAnimator__Q34Game12Hanachirashi14ProperAnimatorFv
getAnimator__Q34Game12Hanachirashi14ProperAnimatorFv:
/* 802A1320 0029E260  38 63 00 10 */	addi r3, r3, 0x10
/* 802A1324 0029E264  4E 80 00 20 */	blr 
