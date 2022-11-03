.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_8048F2E8:
	.asciz "ogObjSave.cpp"
.balign 4
lbl_8048F2F8: #Shift-JIS
	.4byte 0x45525221
	.4byte 0x20696E20
	.4byte 0x4F626A53
	.4byte 0x61766520
	.4byte 0x43726561
	.4byte 0x74658EB8
	.4byte 0x94738149
	.4byte 0x0A000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q32og9newScreen7ObjSave
__vt__Q32og9newScreen7ObjSave:
	.4byte 0
	.4byte 0
	.4byte __dt__Q32og9newScreen7ObjSaveFv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__Q32og9newScreen7ObjSaveFv"
	.4byte update__Q26Screen7ObjBaseFv
	.4byte draw__Q26Screen7ObjBaseFR8Graphics
	.4byte start__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
	.4byte end__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
	.4byte setOwner__Q26Screen7ObjBaseFPQ26Screen9SceneBase
	.4byte getOwner__Q26Screen7ObjBaseCFv
	.4byte create__Q26Screen7ObjBaseFP10JKRArchive
	.4byte confirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte confirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte confirmEndScene__Q26Screen7ObjBaseFPQ26Screen11EndSceneArg
	.4byte doStart__Q32og9newScreen7ObjSaveFPCQ26Screen13StartSceneArg
	.4byte doEnd__Q32og9newScreen7ObjSaveFPCQ26Screen11EndSceneArg
	.4byte doCreate__Q32og9newScreen7ObjSaveFP10JKRArchive
	.4byte doUpdateFadein__Q32og9newScreen7ObjSaveFv
	.4byte doUpdateFadeinFinish__Q32og9newScreen7ObjSaveFv
	.4byte doUpdate__Q32og9newScreen7ObjSaveFv
	.4byte doUpdateFinish__Q32og9newScreen7ObjSaveFv
	.4byte doUpdateFadeout__Q32og9newScreen7ObjSaveFv
	.4byte doUpdateFadeoutFinish__Q32og9newScreen7ObjSaveFv
	.4byte doDraw__Q32og9newScreen7ObjSaveFR8Graphics
	.4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051DD68:
	.float 0.0
lbl_8051DD6C:
	.float 0.1

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og9newScreen7ObjSaveFPCc
__ct__Q32og9newScreen7ObjSaveFPCc:
/* 80324A54 00321994  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80324A58 00321998  7C 08 02 A6 */	mflr r0
/* 80324A5C 0032199C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80324A60 003219A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80324A64 003219A4  7C 9F 23 78 */	mr r31, r4
/* 80324A68 003219A8  93 C1 00 08 */	stw r30, 8(r1)
/* 80324A6C 003219AC  7C 7E 1B 78 */	mr r30, r3
/* 80324A70 003219B0  48 12 F0 79 */	bl __ct__Q26Screen7ObjBaseFv
/* 80324A74 003219B4  3C 60 80 4E */	lis r3, __vt__Q32og9newScreen7ObjSave@ha
/* 80324A78 003219B8  38 00 00 00 */	li r0, 0
/* 80324A7C 003219BC  38 83 98 A0 */	addi r4, r3, __vt__Q32og9newScreen7ObjSave@l
/* 80324A80 003219C0  7F C3 F3 78 */	mr r3, r30
/* 80324A84 003219C4  90 9E 00 00 */	stw r4, 0(r30)
/* 80324A88 003219C8  38 84 00 10 */	addi r4, r4, 0x10
/* 80324A8C 003219CC  90 9E 00 18 */	stw r4, 0x18(r30)
/* 80324A90 003219D0  90 1E 00 40 */	stw r0, 0x40(r30)
/* 80324A94 003219D4  93 FE 00 14 */	stw r31, 0x14(r30)
/* 80324A98 003219D8  90 1E 00 38 */	stw r0, 0x38(r30)
/* 80324A9C 003219DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80324AA0 003219E0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80324AA4 003219E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80324AA8 003219E8  7C 08 03 A6 */	mtlr r0
/* 80324AAC 003219EC  38 21 00 10 */	addi r1, r1, 0x10
/* 80324AB0 003219F0  4E 80 00 20 */	blr 

.global __dt__Q32og9newScreen7ObjSaveFv
__dt__Q32og9newScreen7ObjSaveFv:
/* 80324AB4 003219F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80324AB8 003219F8  7C 08 02 A6 */	mflr r0
/* 80324ABC 003219FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80324AC0 00321A00  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80324AC4 00321A04  7C 9F 23 78 */	mr r31, r4
/* 80324AC8 00321A08  93 C1 00 08 */	stw r30, 8(r1)
/* 80324ACC 00321A0C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80324AD0 00321A10  41 82 00 74 */	beq .L_80324B44
/* 80324AD4 00321A14  3C 80 80 4E */	lis r4, __vt__Q32og9newScreen7ObjSave@ha
/* 80324AD8 00321A18  38 84 98 A0 */	addi r4, r4, __vt__Q32og9newScreen7ObjSave@l
/* 80324ADC 00321A1C  90 9E 00 00 */	stw r4, 0(r30)
/* 80324AE0 00321A20  38 04 00 10 */	addi r0, r4, 0x10
/* 80324AE4 00321A24  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80324AE8 00321A28  41 82 00 4C */	beq .L_80324B34
/* 80324AEC 00321A2C  3C 80 80 4F */	lis r4, __vt__Q26Screen7ObjBase@ha
/* 80324AF0 00321A30  38 84 D7 58 */	addi r4, r4, __vt__Q26Screen7ObjBase@l
/* 80324AF4 00321A34  90 9E 00 00 */	stw r4, 0(r30)
/* 80324AF8 00321A38  38 04 00 10 */	addi r0, r4, 0x10
/* 80324AFC 00321A3C  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80324B00 00321A40  41 82 00 34 */	beq .L_80324B34
/* 80324B04 00321A44  3C 80 80 4E */	lis r4, __vt__Q26Screen8IObjBase@ha
/* 80324B08 00321A48  38 84 82 40 */	addi r4, r4, __vt__Q26Screen8IObjBase@l
/* 80324B0C 00321A4C  90 9E 00 00 */	stw r4, 0(r30)
/* 80324B10 00321A50  38 04 00 10 */	addi r0, r4, 0x10
/* 80324B14 00321A54  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80324B18 00321A58  48 0E CA B9 */	bl del__5CNodeFv
/* 80324B1C 00321A5C  38 7E 00 18 */	addi r3, r30, 0x18
/* 80324B20 00321A60  38 80 00 00 */	li r4, 0
/* 80324B24 00321A64  4B CF 85 11 */	bl __dt__11JKRDisposerFv
/* 80324B28 00321A68  7F C3 F3 78 */	mr r3, r30
/* 80324B2C 00321A6C  38 80 00 00 */	li r4, 0
/* 80324B30 00321A70  48 0E CA 59 */	bl __dt__5CNodeFv
.L_80324B34:
/* 80324B34 00321A74  7F E0 07 35 */	extsh. r0, r31
/* 80324B38 00321A78  40 81 00 0C */	ble .L_80324B44
/* 80324B3C 00321A7C  7F C3 F3 78 */	mr r3, r30
/* 80324B40 00321A80  4B CF F5 75 */	bl __dl__FPv
.L_80324B44:
/* 80324B44 00321A84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80324B48 00321A88  7F C3 F3 78 */	mr r3, r30
/* 80324B4C 00321A8C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80324B50 00321A90  83 C1 00 08 */	lwz r30, 8(r1)
/* 80324B54 00321A94  7C 08 03 A6 */	mtlr r0
/* 80324B58 00321A98  38 21 00 10 */	addi r1, r1, 0x10
/* 80324B5C 00321A9C  4E 80 00 20 */	blr 

.global doCreate__Q32og9newScreen7ObjSaveFP10JKRArchive
doCreate__Q32og9newScreen7ObjSaveFP10JKRArchive:
/* 80324B60 00321AA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80324B64 00321AA4  7C 08 02 A6 */	mflr r0
/* 80324B68 00321AA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80324B6C 00321AAC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80324B70 00321AB0  93 C1 00 08 */	stw r30, 8(r1)
/* 80324B74 00321AB4  7C 7E 1B 78 */	mr r30, r3
/* 80324B78 00321AB8  48 12 F4 31 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 80324B7C 00321ABC  3C 80 00 4F */	lis r4, 0x004F4741@ha
/* 80324B80 00321AC0  3C C0 53 41 */	lis r6, 0x53415645@ha
/* 80324B84 00321AC4  7C 7F 1B 78 */	mr r31, r3
/* 80324B88 00321AC8  38 A0 00 00 */	li r5, 0
/* 80324B8C 00321ACC  38 84 47 41 */	addi r4, r4, 0x004F4741@l
/* 80324B90 00321AD0  38 C6 56 45 */	addi r6, r6, 0x53415645@l
/* 80324B94 00321AD4  4B FE A7 89 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 80324B98 00321AD8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80324B9C 00321ADC  41 82 00 0C */	beq .L_80324BA8
/* 80324BA0 00321AE0  93 FE 00 38 */	stw r31, 0x38(r30)
/* 80324BA4 00321AE4  48 00 00 20 */	b .L_80324BC4
.L_80324BA8:
/* 80324BA8 00321AE8  3C 60 80 49 */	lis r3, lbl_8048F2E8@ha
/* 80324BAC 00321AEC  3C A0 80 49 */	lis r5, lbl_8048F2F8@ha
/* 80324BB0 00321AF0  38 63 F2 E8 */	addi r3, r3, lbl_8048F2E8@l
/* 80324BB4 00321AF4  38 80 00 54 */	li r4, 0x54
/* 80324BB8 00321AF8  38 A5 F2 F8 */	addi r5, r5, lbl_8048F2F8@l
/* 80324BBC 00321AFC  4C C6 31 82 */	crclr 6
/* 80324BC0 00321B00  4B D0 5A 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80324BC4:
/* 80324BC4 00321B04  38 00 00 00 */	li r0, 0
/* 80324BC8 00321B08  C0 02 FA 08 */	lfs f0, lbl_8051DD68@sda21(r2)
/* 80324BCC 00321B0C  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 80324BD0 00321B10  D0 1E 00 44 */	stfs f0, 0x44(r30)
/* 80324BD4 00321B14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80324BD8 00321B18  83 C1 00 08 */	lwz r30, 8(r1)
/* 80324BDC 00321B1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80324BE0 00321B20  7C 08 03 A6 */	mtlr r0
/* 80324BE4 00321B24  38 21 00 10 */	addi r1, r1, 0x10
/* 80324BE8 00321B28  4E 80 00 20 */	blr 

.global doUpdate__Q32og9newScreen7ObjSaveFv
doUpdate__Q32og9newScreen7ObjSaveFv:
/* 80324BEC 00321B2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80324BF0 00321B30  7C 08 02 A6 */	mflr r0
/* 80324BF4 00321B34  90 01 00 14 */	stw r0, 0x14(r1)
/* 80324BF8 00321B38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80324BFC 00321B3C  3B E0 00 00 */	li r31, 0
/* 80324C00 00321B40  93 C1 00 08 */	stw r30, 8(r1)
/* 80324C04 00321B44  7C 7E 1B 78 */	mr r30, r3
/* 80324C08 00321B48  80 63 00 38 */	lwz r3, 0x38(r3)
/* 80324C0C 00321B4C  88 03 00 08 */	lbz r0, 8(r3)
/* 80324C10 00321B50  28 00 00 00 */	cmplwi r0, 0
/* 80324C14 00321B54  41 82 00 0C */	beq .L_80324C20
/* 80324C18 00321B58  80 6D 97 A8 */	lwz r3, ogSound__2og@sda21(r13)
/* 80324C1C 00321B5C  4B FE 81 35 */	bl setSaveCave__Q22og5SoundFv
.L_80324C20:
/* 80324C20 00321B60  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 80324C24 00321B64  48 0B 81 71 */	bl update__Q33ebi4Save4TMgrFv
/* 80324C28 00321B68  80 1E 00 3C */	lwz r0, 0x3c(r30)
/* 80324C2C 00321B6C  2C 00 00 01 */	cmpwi r0, 1
/* 80324C30 00321B70  41 82 00 AC */	beq .L_80324CDC
/* 80324C34 00321B74  40 80 00 10 */	bge .L_80324C44
/* 80324C38 00321B78  2C 00 00 00 */	cmpwi r0, 0
/* 80324C3C 00321B7C  40 80 00 14 */	bge .L_80324C50
/* 80324C40 00321B80  48 00 00 C4 */	b .L_80324D04
.L_80324C44:
/* 80324C44 00321B84  2C 00 00 03 */	cmpwi r0, 3
/* 80324C48 00321B88  40 80 00 BC */	bge .L_80324D04
/* 80324C4C 00321B8C  48 00 00 AC */	b .L_80324CF8
.L_80324C50:
/* 80324C50 00321B90  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80324C54 00321B94  C0 5E 00 44 */	lfs f2, 0x44(r30)
/* 80324C58 00321B98  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80324C5C 00321B9C  C0 02 FA 0C */	lfs f0, lbl_8051DD6C@sda21(r2)
/* 80324C60 00321BA0  EC 22 08 2A */	fadds f1, f2, f1
/* 80324C64 00321BA4  D0 3E 00 44 */	stfs f1, 0x44(r30)
/* 80324C68 00321BA8  C0 3E 00 44 */	lfs f1, 0x44(r30)
/* 80324C6C 00321BAC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80324C70 00321BB0  40 81 00 94 */	ble .L_80324D04
/* 80324C74 00321BB4  38 00 00 01 */	li r0, 1
/* 80324C78 00321BB8  7F C3 F3 78 */	mr r3, r30
/* 80324C7C 00321BBC  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 80324C80 00321BC0  48 12 F3 C1 */	bl getGamePad__Q26Screen7ObjBaseCFv
/* 80324C84 00321BC4  80 DE 00 40 */	lwz r6, 0x40(r30)
/* 80324C88 00321BC8  3C 80 80 51 */	lis r4, gGameConfig__4Game@ha
/* 80324C8C 00321BCC  38 00 00 00 */	li r0, 0
/* 80324C90 00321BD0  38 A0 00 01 */	li r5, 1
/* 80324C94 00321BD4  90 66 03 D0 */	stw r3, 0x3d0(r6)
/* 80324C98 00321BD8  38 84 41 FC */	addi r4, r4, gGameConfig__4Game@l
/* 80324C9C 00321BDC  90 66 00 24 */	stw r3, 0x24(r6)
/* 80324CA0 00321BE0  90 66 01 04 */	stw r3, 0x104(r6)
/* 80324CA4 00321BE4  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 80324CA8 00321BE8  90 03 04 70 */	stw r0, 0x470(r3)
/* 80324CAC 00321BEC  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 80324CB0 00321BF0  98 A3 04 78 */	stb r5, 0x478(r3)
/* 80324CB4 00321BF4  80 04 02 58 */	lwz r0, 0x258(r4)
/* 80324CB8 00321BF8  2C 00 00 00 */	cmpwi r0, 0
/* 80324CBC 00321BFC  40 82 00 0C */	bne .L_80324CC8
/* 80324CC0 00321C00  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 80324CC4 00321C04  98 A3 04 79 */	stb r5, 0x479(r3)
.L_80324CC8:
/* 80324CC8 00321C08  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 80324CCC 00321C0C  48 0B 7F 31 */	bl start__Q33ebi4Save4TMgrFv
/* 80324CD0 00321C10  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 80324CD4 00321C14  48 0B 80 C1 */	bl update__Q33ebi4Save4TMgrFv
/* 80324CD8 00321C18  48 00 00 2C */	b .L_80324D04
.L_80324CDC:
/* 80324CDC 00321C1C  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 80324CE0 00321C20  48 0B 80 01 */	bl isFinish__Q33ebi4Save4TMgrFv
/* 80324CE4 00321C24  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80324CE8 00321C28  41 82 00 1C */	beq .L_80324D04
/* 80324CEC 00321C2C  38 00 00 02 */	li r0, 2
/* 80324CF0 00321C30  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 80324CF4 00321C34  48 00 00 10 */	b .L_80324D04
.L_80324CF8:
/* 80324CF8 00321C38  38 00 00 00 */	li r0, 0
/* 80324CFC 00321C3C  3B E0 00 01 */	li r31, 1
/* 80324D00 00321C40  90 1E 00 3C */	stw r0, 0x3c(r30)
.L_80324D04:
/* 80324D04 00321C44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80324D08 00321C48  7F E3 FB 78 */	mr r3, r31
/* 80324D0C 00321C4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80324D10 00321C50  83 C1 00 08 */	lwz r30, 8(r1)
/* 80324D14 00321C54  7C 08 03 A6 */	mtlr r0
/* 80324D18 00321C58  38 21 00 10 */	addi r1, r1, 0x10
/* 80324D1C 00321C5C  4E 80 00 20 */	blr 

.global doDraw__Q32og9newScreen7ObjSaveFR8Graphics
doDraw__Q32og9newScreen7ObjSaveFR8Graphics:
/* 80324D20 00321C60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80324D24 00321C64  7C 08 02 A6 */	mflr r0
/* 80324D28 00321C68  90 01 00 14 */	stw r0, 0x14(r1)
/* 80324D2C 00321C6C  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 80324D30 00321C70  2C 00 00 01 */	cmpwi r0, 1
/* 80324D34 00321C74  40 82 00 0C */	bne .L_80324D40
/* 80324D38 00321C78  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80324D3C 00321C7C  48 0B 80 F1 */	bl draw__Q33ebi4Save4TMgrFv
.L_80324D40:
/* 80324D40 00321C80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80324D44 00321C84  7C 08 03 A6 */	mtlr r0
/* 80324D48 00321C88  38 21 00 10 */	addi r1, r1, 0x10
/* 80324D4C 00321C8C  4E 80 00 20 */	blr 

.global doStart__Q32og9newScreen7ObjSaveFPCQ26Screen13StartSceneArg
doStart__Q32og9newScreen7ObjSaveFPCQ26Screen13StartSceneArg:
/* 80324D50 00321C90  38 60 00 01 */	li r3, 1
/* 80324D54 00321C94  4E 80 00 20 */	blr 

.global doEnd__Q32og9newScreen7ObjSaveFPCQ26Screen11EndSceneArg
doEnd__Q32og9newScreen7ObjSaveFPCQ26Screen11EndSceneArg:
/* 80324D58 00321C98  38 60 00 01 */	li r3, 1
/* 80324D5C 00321C9C  4E 80 00 20 */	blr 

.global doUpdateFadeinFinish__Q32og9newScreen7ObjSaveFv
doUpdateFadeinFinish__Q32og9newScreen7ObjSaveFv:
/* 80324D60 00321CA0  4E 80 00 20 */	blr 

.global doUpdateFinish__Q32og9newScreen7ObjSaveFv
doUpdateFinish__Q32og9newScreen7ObjSaveFv:
/* 80324D64 00321CA4  4E 80 00 20 */	blr 

.global doUpdateFadeoutFinish__Q32og9newScreen7ObjSaveFv
doUpdateFadeoutFinish__Q32og9newScreen7ObjSaveFv:
/* 80324D68 00321CA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80324D6C 00321CAC  7C 08 02 A6 */	mflr r0
/* 80324D70 00321CB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80324D74 00321CB4  81 83 00 00 */	lwz r12, 0(r3)
/* 80324D78 00321CB8  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80324D7C 00321CBC  7D 89 03 A6 */	mtctr r12
/* 80324D80 00321CC0  4E 80 04 21 */	bctrl 
/* 80324D84 00321CC4  38 80 00 00 */	li r4, 0
/* 80324D88 00321CC8  48 12 D2 09 */	bl endScene__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
/* 80324D8C 00321CCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80324D90 00321CD0  7C 08 03 A6 */	mtlr r0
/* 80324D94 00321CD4  38 21 00 10 */	addi r1, r1, 0x10
/* 80324D98 00321CD8  4E 80 00 20 */	blr 

.global doUpdateFadein__Q32og9newScreen7ObjSaveFv
doUpdateFadein__Q32og9newScreen7ObjSaveFv:
/* 80324D9C 00321CDC  38 60 00 01 */	li r3, 1
/* 80324DA0 00321CE0  4E 80 00 20 */	blr 

.global doUpdateFadeout__Q32og9newScreen7ObjSaveFv
doUpdateFadeout__Q32og9newScreen7ObjSaveFv:
/* 80324DA4 00321CE4  38 60 00 01 */	li r3, 1
/* 80324DA8 00321CE8  4E 80 00 20 */	blr 

.global "@24@__dt__Q32og9newScreen7ObjSaveFv"
"@24@__dt__Q32og9newScreen7ObjSaveFv":
/* 80324DAC 00321CEC  38 63 FF E8 */	addi r3, r3, -24
/* 80324DB0 00321CF0  4B FF FD 04 */	b __dt__Q32og9newScreen7ObjSaveFv
