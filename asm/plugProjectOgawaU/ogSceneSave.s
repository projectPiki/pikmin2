.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global lbl_8048F318
lbl_8048F318:
	.4byte 0x73617665
	.4byte 0x206D656E
	.4byte 0x75000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q32og9newScreen4Save
__vt__Q32og9newScreen4Save:
	.4byte 0
	.4byte 0
	.4byte getSceneType__Q32og9newScreen4SaveFv
	.4byte getOwnerID__Q32og9newScreen4SaveFv
	.4byte getMemberID__Q32og9newScreen4SaveFv
	.4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
	.4byte isDrawInDemo__Q26Screen9SceneBaseCFv
	.4byte getResName__Q32og9newScreen4SaveCFv
	.4byte doCreateObj__Q32og9newScreen4SaveFP10JKRArchive
	.4byte doUserCallBackFunc__Q32og9newScreen4SaveFPQ28Resource10MgrCommand
	.4byte setPort__Q26Screen9SceneBaseFR8Graphics
	.4byte doUpdateActive__Q26Screen9SceneBaseFv
	.4byte doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg
	.4byte doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	.4byte setDefaultDispMember__Q26Screen9SceneBaseFv
	.4byte doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doGetFinishState__Q26Screen9SceneBaseFv

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 0x8
.global lbl_8051DD70
lbl_8051DD70:
	.4byte 0x00000000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og9newScreen4SaveFv
__ct__Q32og9newScreen4SaveFv:
/* 80324DB4 00321CF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80324DB8 00321CF8  7C 08 02 A6 */	mflr r0
/* 80324DBC 00321CFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80324DC0 00321D00  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80324DC4 00321D04  7C 7F 1B 78 */	mr r31, r3
/* 80324DC8 00321D08  48 12 C9 C9 */	bl __ct__Q26Screen9SceneBaseFv
/* 80324DCC 00321D0C  3C 80 80 4E */	lis r4, __vt__Q32og9newScreen4Save@ha
/* 80324DD0 00321D10  7F E3 FB 78 */	mr r3, r31
/* 80324DD4 00321D14  38 04 99 18 */	addi r0, r4, __vt__Q32og9newScreen4Save@l
/* 80324DD8 00321D18  90 1F 00 00 */	stw r0, 0(r31)
/* 80324DDC 00321D1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80324DE0 00321D20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80324DE4 00321D24  7C 08 03 A6 */	mtlr r0
/* 80324DE8 00321D28  38 21 00 10 */	addi r1, r1, 0x10
/* 80324DEC 00321D2C  4E 80 00 20 */	blr 

.global doUserCallBackFunc__Q32og9newScreen4SaveFPQ28Resource10MgrCommand
doUserCallBackFunc__Q32og9newScreen4SaveFPQ28Resource10MgrCommand:
/* 80324DF0 00321D30  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80324DF4 00321D34  7C 08 02 A6 */	mflr r0
/* 80324DF8 00321D38  90 01 00 24 */	stw r0, 0x24(r1)
/* 80324DFC 00321D3C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80324E00 00321D40  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80324E04 00321D44  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80324E08 00321D48  7C 7D 1B 78 */	mr r29, r3
/* 80324E0C 00321D4C  48 0B 7A 65 */	bl createInstance__Q33ebi4Save4TMgrFv
/* 80324E10 00321D50  90 7D 02 20 */	stw r3, 0x220(r29)
/* 80324E14 00321D54  83 FD 02 20 */	lwz r31, 0x220(r29)
/* 80324E18 00321D58  38 7F 00 18 */	addi r3, r31, 0x18
/* 80324E1C 00321D5C  48 0B 8B 99 */	bl loadResource__Q33ebi6Screen9TSaveMenuFv
/* 80324E20 00321D60  83 CD 88 2C */	lwz r30, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80324E24 00321D64  38 7F 01 00 */	addi r3, r31, 0x100
/* 80324E28 00321D68  7F C4 F3 78 */	mr r4, r30
/* 80324E2C 00321D6C  48 09 D4 85 */	bl loadResource__Q33ebi6Screen11TMemoryCardFP7JKRHeap
/* 80324E30 00321D70  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80324E34 00321D74  7F C4 F3 78 */	mr r4, r30
/* 80324E38 00321D78  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 80324E3C 00321D7C  48 11 DD 91 */	bl loadResource__Q34Game10MemoryCard3MgrFP7JKRHeap
/* 80324E40 00321D80  7F A3 EB 78 */	mr r3, r29
/* 80324E44 00321D84  38 80 00 00 */	li r4, 0
/* 80324E48 00321D88  48 00 00 51 */	bl doCreateObjUserCallBackFunc__Q32og9newScreen4SaveFP10JKRArchive
/* 80324E4C 00321D8C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80324E50 00321D90  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80324E54 00321D94  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80324E58 00321D98  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80324E5C 00321D9C  7C 08 03 A6 */	mtlr r0
/* 80324E60 00321DA0  38 21 00 20 */	addi r1, r1, 0x20
/* 80324E64 00321DA4  4E 80 00 20 */	blr 

.global doCreateObj__Q32og9newScreen4SaveFP10JKRArchive
doCreateObj__Q32og9newScreen4SaveFP10JKRArchive:
/* 80324E68 00321DA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80324E6C 00321DAC  7C 08 02 A6 */	mflr r0
/* 80324E70 00321DB0  38 80 00 00 */	li r4, 0
/* 80324E74 00321DB4  38 A0 00 00 */	li r5, 0
/* 80324E78 00321DB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80324E7C 00321DBC  38 C0 00 FF */	li r6, 0xff
/* 80324E80 00321DC0  38 E0 00 FF */	li r7, 0xff
/* 80324E84 00321DC4  48 12 D4 01 */	bl setColorBG__Q26Screen9SceneBaseFUcUcUcUc
/* 80324E88 00321DC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80324E8C 00321DCC  7C 08 03 A6 */	mtlr r0
/* 80324E90 00321DD0  38 21 00 10 */	addi r1, r1, 0x10
/* 80324E94 00321DD4  4E 80 00 20 */	blr 

.global doCreateObjUserCallBackFunc__Q32og9newScreen4SaveFP10JKRArchive
doCreateObjUserCallBackFunc__Q32og9newScreen4SaveFP10JKRArchive:
/* 80324E98 00321DD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80324E9C 00321DDC  7C 08 02 A6 */	mflr r0
/* 80324EA0 00321DE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80324EA4 00321DE4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80324EA8 00321DE8  7C 9F 23 78 */	mr r31, r4
/* 80324EAC 00321DEC  93 C1 00 08 */	stw r30, 8(r1)
/* 80324EB0 00321DF0  7C 7E 1B 78 */	mr r30, r3
/* 80324EB4 00321DF4  38 60 00 48 */	li r3, 0x48
/* 80324EB8 00321DF8  4B CF EF ED */	bl __nw__FUl
/* 80324EBC 00321DFC  7C 64 1B 79 */	or. r4, r3, r3
/* 80324EC0 00321E00  41 82 00 14 */	beq lbl_80324ED4
/* 80324EC4 00321E04  3C 80 80 49 */	lis r4, lbl_8048F318@ha
/* 80324EC8 00321E08  38 84 F3 18 */	addi r4, r4, lbl_8048F318@l
/* 80324ECC 00321E0C  4B FF FB 89 */	bl __ct__Q32og9newScreen7ObjSaveFPCc
/* 80324ED0 00321E10  7C 64 1B 78 */	mr r4, r3
lbl_80324ED4:
/* 80324ED4 00321E14  80 1E 02 20 */	lwz r0, 0x220(r30)
/* 80324ED8 00321E18  7F C3 F3 78 */	mr r3, r30
/* 80324EDC 00321E1C  7F E5 FB 78 */	mr r5, r31
/* 80324EE0 00321E20  90 04 00 40 */	stw r0, 0x40(r4)
/* 80324EE4 00321E24  48 12 CE 91 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 80324EE8 00321E28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80324EEC 00321E2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80324EF0 00321E30  83 C1 00 08 */	lwz r30, 8(r1)
/* 80324EF4 00321E34  7C 08 03 A6 */	mtlr r0
/* 80324EF8 00321E38  38 21 00 10 */	addi r1, r1, 0x10
/* 80324EFC 00321E3C  4E 80 00 20 */	blr 

.global getResName__Q32og9newScreen4SaveCFv
getResName__Q32og9newScreen4SaveCFv:
/* 80324F00 00321E40  38 62 FA 10 */	addi r3, r2, lbl_8051DD70@sda21
/* 80324F04 00321E44  4E 80 00 20 */	blr 

.global getSceneType__Q32og9newScreen4SaveFv
getSceneType__Q32og9newScreen4SaveFv:
/* 80324F08 00321E48  38 60 27 25 */	li r3, 0x2725
/* 80324F0C 00321E4C  4E 80 00 20 */	blr 

.global getOwnerID__Q32og9newScreen4SaveFv
getOwnerID__Q32og9newScreen4SaveFv:
/* 80324F10 00321E50  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 80324F14 00321E54  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 80324F18 00321E58  4E 80 00 20 */	blr 

.global getMemberID__Q32og9newScreen4SaveFv
getMemberID__Q32og9newScreen4SaveFv:
/* 80324F1C 00321E5C  3C 80 53 41 */	lis r4, 0x53415645@ha
/* 80324F20 00321E60  38 60 00 00 */	li r3, 0
/* 80324F24 00321E64  38 84 56 45 */	addi r4, r4, 0x53415645@l
/* 80324F28 00321E68  4E 80 00 20 */	blr 
