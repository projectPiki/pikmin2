.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game12KumaKochappy14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game12KumaKochappy14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 802E6C70 002E3BB0  90 83 00 20 */	stw r4, 0x20(r3)
/* 802E6C74 002E3BB4  4E 80 00 20 */	blr 

.global getAnimator__Q34Game12KumaKochappy14ProperAnimatorFi
getAnimator__Q34Game12KumaKochappy14ProperAnimatorFi:
/* 802E6C78 002E3BB8  38 63 00 10 */	addi r3, r3, 0x10
/* 802E6C7C 002E3BBC  4E 80 00 20 */	blr 

.global __dt__Q34Game12KumaKochappy14ProperAnimatorFv
__dt__Q34Game12KumaKochappy14ProperAnimatorFv:
/* 802E6C80 002E3BC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E6C84 002E3BC4  7C 08 02 A6 */	mflr r0
/* 802E6C88 002E3BC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E6C8C 002E3BCC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E6C90 002E3BD0  7C 7F 1B 79 */	or. r31, r3, r3
/* 802E6C94 002E3BD4  41 82 00 30 */	beq lbl_802E6CC4
/* 802E6C98 002E3BD8  3C 60 80 4D */	lis r3, __vt__Q34Game12KumaKochappy14ProperAnimator@ha
/* 802E6C9C 002E3BDC  38 03 40 E8 */	addi r0, r3, __vt__Q34Game12KumaKochappy14ProperAnimator@l
/* 802E6CA0 002E3BE0  90 1F 00 00 */	stw r0, 0(r31)
/* 802E6CA4 002E3BE4  41 82 00 10 */	beq lbl_802E6CB4
/* 802E6CA8 002E3BE8  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 802E6CAC 002E3BEC  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 802E6CB0 002E3BF0  90 1F 00 00 */	stw r0, 0(r31)
lbl_802E6CB4:
/* 802E6CB4 002E3BF4  7C 80 07 35 */	extsh. r0, r4
/* 802E6CB8 002E3BF8  40 81 00 0C */	ble lbl_802E6CC4
/* 802E6CBC 002E3BFC  7F E3 FB 78 */	mr r3, r31
/* 802E6CC0 002E3C00  4B D3 D3 F5 */	bl __dl__FPv
lbl_802E6CC4:
/* 802E6CC4 002E3C04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E6CC8 002E3C08  7F E3 FB 78 */	mr r3, r31
/* 802E6CCC 002E3C0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E6CD0 002E3C10  7C 08 03 A6 */	mtlr r0
/* 802E6CD4 002E3C14  38 21 00 10 */	addi r1, r1, 0x10
/* 802E6CD8 002E3C18  4E 80 00 20 */	blr 

.global getAnimator__Q34Game12KumaKochappy14ProperAnimatorFv
getAnimator__Q34Game12KumaKochappy14ProperAnimatorFv:
/* 802E6CDC 002E3C1C  38 63 00 10 */	addi r3, r3, 0x10
/* 802E6CE0 002E3C20  4E 80 00 20 */	blr 
