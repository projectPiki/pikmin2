.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_8048E078:
	.asciz "screenObj.h"
.balign 4
lbl_8048E084:
	.asciz "P2Assert"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q26Screen8IObjBase
__vt__Q26Screen8IObjBase:
	.4byte 0
	.4byte 0
	.4byte __dt__Q26Screen8IObjBaseFv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__Q26Screen8IObjBaseFv"
	.skip 0x2C #padding for alignment

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __dt__Q26Screen7ObjBaseFv
__dt__Q26Screen7ObjBaseFv: #weak func
/* 8030D868 0030A7A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8030D86C 0030A7AC  7C 08 02 A6 */	mflr r0
/* 8030D870 0030A7B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8030D874 0030A7B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8030D878 0030A7B8  7C 9F 23 78 */	mr r31, r4
/* 8030D87C 0030A7BC  93 C1 00 08 */	stw r30, 8(r1)
/* 8030D880 0030A7C0  7C 7E 1B 79 */	or. r30, r3, r3
/* 8030D884 0030A7C4  41 82 00 5C */	beq .L_8030D8E0
/* 8030D888 0030A7C8  3C 80 80 4F */	lis r4, __vt__Q26Screen7ObjBase@ha
/* 8030D88C 0030A7CC  38 84 D7 58 */	addi r4, r4, __vt__Q26Screen7ObjBase@l
/* 8030D890 0030A7D0  90 9E 00 00 */	stw r4, 0(r30)
/* 8030D894 0030A7D4  38 04 00 10 */	addi r0, r4, 0x10
/* 8030D898 0030A7D8  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8030D89C 0030A7DC  41 82 00 34 */	beq .L_8030D8D0
/* 8030D8A0 0030A7E0  3C 80 80 4E */	lis r4, __vt__Q26Screen8IObjBase@ha
/* 8030D8A4 0030A7E4  38 84 82 40 */	addi r4, r4, __vt__Q26Screen8IObjBase@l
/* 8030D8A8 0030A7E8  90 9E 00 00 */	stw r4, 0(r30)
/* 8030D8AC 0030A7EC  38 04 00 10 */	addi r0, r4, 0x10
/* 8030D8B0 0030A7F0  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8030D8B4 0030A7F4  48 10 3D 1D */	bl del__5CNodeFv
/* 8030D8B8 0030A7F8  38 7E 00 18 */	addi r3, r30, 0x18
/* 8030D8BC 0030A7FC  38 80 00 00 */	li r4, 0
/* 8030D8C0 0030A800  4B D0 F7 75 */	bl __dt__11JKRDisposerFv
/* 8030D8C4 0030A804  7F C3 F3 78 */	mr r3, r30
/* 8030D8C8 0030A808  38 80 00 00 */	li r4, 0
/* 8030D8CC 0030A80C  48 10 3C BD */	bl __dt__5CNodeFv
.L_8030D8D0:
/* 8030D8D0 0030A810  7F E0 07 35 */	extsh. r0, r31
/* 8030D8D4 0030A814  40 81 00 0C */	ble .L_8030D8E0
/* 8030D8D8 0030A818  7F C3 F3 78 */	mr r3, r30
/* 8030D8DC 0030A81C  4B D1 67 D9 */	bl __dl__FPv
.L_8030D8E0:
/* 8030D8E0 0030A820  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8030D8E4 0030A824  7F C3 F3 78 */	mr r3, r30
/* 8030D8E8 0030A828  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8030D8EC 0030A82C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8030D8F0 0030A830  7C 08 03 A6 */	mtlr r0
/* 8030D8F4 0030A834  38 21 00 10 */	addi r1, r1, 0x10
/* 8030D8F8 0030A838  4E 80 00 20 */	blr 

.global setOwner__Q26Screen7ObjBaseFPQ26Screen9SceneBase
setOwner__Q26Screen7ObjBaseFPQ26Screen9SceneBase: #weak func
/* 8030D8FC 0030A83C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8030D900 0030A840  7C 08 02 A6 */	mflr r0
/* 8030D904 0030A844  90 01 00 14 */	stw r0, 0x14(r1)
/* 8030D908 0030A848  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8030D90C 0030A84C  7C 9F 23 78 */	mr r31, r4
/* 8030D910 0030A850  93 C1 00 08 */	stw r30, 8(r1)
/* 8030D914 0030A854  7C 7E 1B 78 */	mr r30, r3
/* 8030D918 0030A858  80 03 00 34 */	lwz r0, 0x34(r3)
/* 8030D91C 0030A85C  28 00 00 00 */	cmplwi r0, 0
/* 8030D920 0030A860  41 82 00 20 */	beq .L_8030D940
/* 8030D924 0030A864  3C 60 80 49 */	lis r3, lbl_8048E078@ha
/* 8030D928 0030A868  3C A0 80 49 */	lis r5, lbl_8048E084@ha
/* 8030D92C 0030A86C  38 63 E0 78 */	addi r3, r3, lbl_8048E078@l
/* 8030D930 0030A870  38 80 00 81 */	li r4, 0x81
/* 8030D934 0030A874  38 A5 E0 84 */	addi r5, r5, lbl_8048E084@l
/* 8030D938 0030A878  4C C6 31 82 */	crclr 6
/* 8030D93C 0030A87C  4B D1 CD 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8030D940:
/* 8030D940 0030A880  93 FE 00 34 */	stw r31, 0x34(r30)
/* 8030D944 0030A884  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8030D948 0030A888  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8030D94C 0030A88C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8030D950 0030A890  7C 08 03 A6 */	mtlr r0
/* 8030D954 0030A894  38 21 00 10 */	addi r1, r1, 0x10
/* 8030D958 0030A898  4E 80 00 20 */	blr 

.global getOwner__Q26Screen7ObjBaseCFv
getOwner__Q26Screen7ObjBaseCFv: #weak func
/* 8030D95C 0030A89C  80 63 00 34 */	lwz r3, 0x34(r3)
/* 8030D960 0030A8A0  4E 80 00 20 */	blr 

.global doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg: #weak func
/* 8030D964 0030A8A4  38 60 00 01 */	li r3, 1
/* 8030D968 0030A8A8  4E 80 00 20 */	blr 

.global doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg: #weak func
/* 8030D96C 0030A8AC  38 60 00 01 */	li r3, 1
/* 8030D970 0030A8B0  4E 80 00 20 */	blr 

.global doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg: #weak func
/* 8030D974 0030A8B4  38 60 00 01 */	li r3, 1
/* 8030D978 0030A8B8  4E 80 00 20 */	blr 

.global __dt__Q26Screen8IObjBaseFv
__dt__Q26Screen8IObjBaseFv: #weak func
/* 8030D97C 0030A8BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8030D980 0030A8C0  7C 08 02 A6 */	mflr r0
/* 8030D984 0030A8C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8030D988 0030A8C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8030D98C 0030A8CC  7C 9F 23 78 */	mr r31, r4
/* 8030D990 0030A8D0  93 C1 00 08 */	stw r30, 8(r1)
/* 8030D994 0030A8D4  7C 7E 1B 79 */	or. r30, r3, r3
/* 8030D998 0030A8D8  41 82 00 44 */	beq .L_8030D9DC
/* 8030D99C 0030A8DC  3C 80 80 4E */	lis r4, __vt__Q26Screen8IObjBase@ha
/* 8030D9A0 0030A8E0  38 84 82 40 */	addi r4, r4, __vt__Q26Screen8IObjBase@l
/* 8030D9A4 0030A8E4  90 9E 00 00 */	stw r4, 0(r30)
/* 8030D9A8 0030A8E8  38 04 00 10 */	addi r0, r4, 0x10
/* 8030D9AC 0030A8EC  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8030D9B0 0030A8F0  48 10 3C 21 */	bl del__5CNodeFv
/* 8030D9B4 0030A8F4  38 7E 00 18 */	addi r3, r30, 0x18
/* 8030D9B8 0030A8F8  38 80 00 00 */	li r4, 0
/* 8030D9BC 0030A8FC  4B D0 F6 79 */	bl __dt__11JKRDisposerFv
/* 8030D9C0 0030A900  7F C3 F3 78 */	mr r3, r30
/* 8030D9C4 0030A904  38 80 00 00 */	li r4, 0
/* 8030D9C8 0030A908  48 10 3B C1 */	bl __dt__5CNodeFv
/* 8030D9CC 0030A90C  7F E0 07 35 */	extsh. r0, r31
/* 8030D9D0 0030A910  40 81 00 0C */	ble .L_8030D9DC
/* 8030D9D4 0030A914  7F C3 F3 78 */	mr r3, r30
/* 8030D9D8 0030A918  4B D1 66 DD */	bl __dl__FPv
.L_8030D9DC:
/* 8030D9DC 0030A91C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8030D9E0 0030A920  7F C3 F3 78 */	mr r3, r30
/* 8030D9E4 0030A924  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8030D9E8 0030A928  83 C1 00 08 */	lwz r30, 8(r1)
/* 8030D9EC 0030A92C  7C 08 03 A6 */	mtlr r0
/* 8030D9F0 0030A930  38 21 00 10 */	addi r1, r1, 0x10
/* 8030D9F4 0030A934  4E 80 00 20 */	blr 

.global "@24@__dt__Q26Screen8IObjBaseFv"
"@24@__dt__Q26Screen8IObjBaseFv": #weak func
/* 8030D9F8 0030A938  38 63 FF E8 */	addi r3, r3, -24
/* 8030D9FC 0030A93C  4B FF FF 80 */	b __dt__Q26Screen8IObjBaseFv
