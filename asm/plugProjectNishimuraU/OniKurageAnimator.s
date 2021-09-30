.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setAnimMgr__Q34Game9OniKurage14ProperAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__Q34Game9OniKurage14ProperAnimatorFPQ28SysShape7AnimMgr:
/* 802D3924 002D0864  90 83 00 20 */	stw r4, 0x20(r3)
/* 802D3928 002D0868  4E 80 00 20 */	blr 

.global getAnimator__Q34Game9OniKurage14ProperAnimatorFi
getAnimator__Q34Game9OniKurage14ProperAnimatorFi:
/* 802D392C 002D086C  38 63 00 10 */	addi r3, r3, 0x10
/* 802D3930 002D0870  4E 80 00 20 */	blr 

.global __dt__Q34Game9OniKurage14ProperAnimatorFv
__dt__Q34Game9OniKurage14ProperAnimatorFv:
/* 802D3934 002D0874  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D3938 002D0878  7C 08 02 A6 */	mflr r0
/* 802D393C 002D087C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D3940 002D0880  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D3944 002D0884  7C 7F 1B 79 */	or. r31, r3, r3
/* 802D3948 002D0888  41 82 00 30 */	beq lbl_802D3978
/* 802D394C 002D088C  3C 60 80 4D */	lis r3, __vt__Q34Game9OniKurage14ProperAnimator@ha
/* 802D3950 002D0890  38 03 29 C0 */	addi r0, r3, __vt__Q34Game9OniKurage14ProperAnimator@l
/* 802D3954 002D0894  90 1F 00 00 */	stw r0, 0(r31)
/* 802D3958 002D0898  41 82 00 10 */	beq lbl_802D3968
/* 802D395C 002D089C  3C 60 80 4B */	lis r3, __vt__Q24Game17EnemyAnimatorBase@ha
/* 802D3960 002D08A0  38 03 DC 58 */	addi r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
/* 802D3964 002D08A4  90 1F 00 00 */	stw r0, 0(r31)
lbl_802D3968:
/* 802D3968 002D08A8  7C 80 07 35 */	extsh. r0, r4
/* 802D396C 002D08AC  40 81 00 0C */	ble lbl_802D3978
/* 802D3970 002D08B0  7F E3 FB 78 */	mr r3, r31
/* 802D3974 002D08B4  4B D5 07 41 */	bl __dl__FPv
lbl_802D3978:
/* 802D3978 002D08B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D397C 002D08BC  7F E3 FB 78 */	mr r3, r31
/* 802D3980 002D08C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D3984 002D08C4  7C 08 03 A6 */	mtlr r0
/* 802D3988 002D08C8  38 21 00 10 */	addi r1, r1, 0x10
/* 802D398C 002D08CC  4E 80 00 20 */	blr 

.global getAnimator__Q34Game9OniKurage14ProperAnimatorFv
getAnimator__Q34Game9OniKurage14ProperAnimatorFv:
/* 802D3990 002D08D0  38 63 00 10 */	addi r3, r3, 0x10
/* 802D3994 002D08D4  4E 80 00 20 */	blr 
