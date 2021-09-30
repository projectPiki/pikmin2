.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game11ShijimiChou14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game11ShijimiChou14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 8038844C 0038538C  90 83 00 20 */	stw r4, 0x20(r3)
/* 80388450 00385390  4E 80 00 20 */	blr 

.global getAnimator__Q34Game11ShijimiChou14ProperAnimatorFi
getAnimator__Q34Game11ShijimiChou14ProperAnimatorFi:
/* 80388454 00385394  38 63 00 10 */	addi r3, r3, 0x10
/* 80388458 00385398  4E 80 00 20 */	blr 

.global __dt__Q34Game11ShijimiChou14ProperAnimatorFv
__dt__Q34Game11ShijimiChou14ProperAnimatorFv:
/* 8038845C 0038539C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80388460 003853A0  7C 08 02 A6 */	mflr r0
/* 80388464 003853A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80388468 003853A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8038846C 003853AC  7C 7F 1B 79 */	or. r31, r3, r3
/* 80388470 003853B0  41 82 00 30 */	beq lbl_803884A0
/* 80388474 003853B4  3C 60 80 4E */	lis r3, __vt__Q34Game11ShijimiChou14ProperAnimator@ha
/* 80388478 003853B8  38 03 4B C8 */	addi r0, r3, __vt__Q34Game11ShijimiChou14ProperAnimator@l
/* 8038847C 003853BC  90 1F 00 00 */	stw r0, 0(r31)
/* 80388480 003853C0  41 82 00 10 */	beq lbl_80388490
/* 80388484 003853C4  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 80388488 003853C8  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 8038848C 003853CC  90 1F 00 00 */	stw r0, 0(r31)
lbl_80388490:
/* 80388490 003853D0  7C 80 07 35 */	extsh. r0, r4
/* 80388494 003853D4  40 81 00 0C */	ble lbl_803884A0
/* 80388498 003853D8  7F E3 FB 78 */	mr r3, r31
/* 8038849C 003853DC  4B C9 BC 19 */	bl __dl__FPv
lbl_803884A0:
/* 803884A0 003853E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803884A4 003853E4  7F E3 FB 78 */	mr r3, r31
/* 803884A8 003853E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803884AC 003853EC  7C 08 03 A6 */	mtlr r0
/* 803884B0 003853F0  38 21 00 10 */	addi r1, r1, 0x10
/* 803884B4 003853F4  4E 80 00 20 */	blr 

.global getAnimator__Q34Game11ShijimiChou14ProperAnimatorFv
getAnimator__Q34Game11ShijimiChou14ProperAnimatorFv:
/* 803884B8 003853F8  38 63 00 10 */	addi r3, r3, 0x10
/* 803884BC 003853FC  4E 80 00 20 */	blr 
