.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_8048E550
lbl_8048E550:
	.4byte 0x534D656E
	.4byte 0x75497465
	.4byte 0x6D207363
	.4byte 0x7265656E
	.4byte 0x00000000
.global lbl_8048E564
lbl_8048E564:
	.4byte 0x7265735F
	.4byte 0x735F6D65
	.4byte 0x6E755F69
	.4byte 0x74656D2E
	.4byte 0x737A7300

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global lbl_804D8778
lbl_804D8778:
	.4byte .L_80313FE8
	.4byte .L_80313FE8
	.4byte .L_80313FE8
	.4byte .L_80313FEC
	.4byte .L_80313FEC
	.4byte .L_80313FEC
	.4byte .L_80313FEC
	.4byte .L_80313FEC
	.4byte .L_80313FEC
	.4byte .L_80313FEC
	.4byte .L_80313FE8
	.4byte .L_80313FE8
	.4byte .L_80313FEC
	.4byte .L_80313FE8
	.4byte .L_80313FEC
	.4byte .L_80313FEC
	.4byte .L_80313FEC
	.4byte .L_80313FEC
	.4byte .L_80313FEC
	.4byte .L_80313FEC
	.4byte .L_80313FE8
	.4byte .L_80313FEC
	.4byte .L_80313FEC
	.4byte .L_80313FE8
	.4byte .L_80313FEC
	.4byte .L_80313FEC
	.4byte .L_80313FEC
	.4byte .L_80313FE8
.global __vt__Q32og9newScreen9SMenuItem
__vt__Q32og9newScreen9SMenuItem:
	.4byte 0
	.4byte 0
	.4byte getSceneType__Q32og9newScreen9SMenuItemFv
	.4byte getOwnerID__Q32og9newScreen9SMenuItemFv
	.4byte getMemberID__Q32og9newScreen9SMenuItemFv
	.4byte isUseBackupSceneInfo__Q32og9newScreen9SMenuItemFv
	.4byte isDrawInDemo__Q26Screen9SceneBaseCFv
	.4byte getResName__Q32og9newScreen9SMenuItemCFv
	.4byte doCreateObj__Q32og9newScreen9SMenuItemFP10JKRArchive
	.4byte doUserCallBackFunc__Q32og9newScreen9SMenuItemFPQ28Resource10MgrCommand
	.4byte setPort__Q26Screen9SceneBaseFR8Graphics
	.4byte doUpdateActive__Q32og9newScreen9SMenuItemFv
	.4byte doConfirmSetScene__Q32og9newScreen9SMenuItemFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg
	.4byte doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	.4byte setDefaultDispMember__Q26Screen9SceneBaseFv
	.4byte doSetBackupScene__Q32og9newScreen9SMenuItemFRQ26Screen11SetSceneArg
	.4byte doGetFinishState__Q32og9newScreen14SceneSMenuBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og9newScreen9SMenuItemFv
__ct__Q32og9newScreen9SMenuItemFv:
/* 80313F4C 00310E8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80313F50 00310E90  7C 08 02 A6 */	mflr r0
/* 80313F54 00310E94  90 01 00 14 */	stw r0, 0x14(r1)
/* 80313F58 00310E98  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80313F5C 00310E9C  7C 7F 1B 78 */	mr r31, r3
/* 80313F60 00310EA0  48 13 D8 31 */	bl __ct__Q26Screen9SceneBaseFv
/* 80313F64 00310EA4  3C 80 80 4E */	lis r4, __vt__Q32og9newScreen14SceneSMenuBase@ha
/* 80313F68 00310EA8  3C 60 80 4E */	lis r3, __vt__Q32og9newScreen9SMenuItem@ha
/* 80313F6C 00310EAC  38 04 85 EC */	addi r0, r4, __vt__Q32og9newScreen14SceneSMenuBase@l
/* 80313F70 00310EB0  38 80 00 01 */	li r4, 1
/* 80313F74 00310EB4  90 1F 00 00 */	stw r0, 0(r31)
/* 80313F78 00310EB8  38 03 87 E8 */	addi r0, r3, __vt__Q32og9newScreen9SMenuItem@l
/* 80313F7C 00310EBC  7F E3 FB 78 */	mr r3, r31
/* 80313F80 00310EC0  90 9F 02 20 */	stw r4, 0x220(r31)
/* 80313F84 00310EC4  90 1F 00 00 */	stw r0, 0(r31)
/* 80313F88 00310EC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80313F8C 00310ECC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80313F90 00310ED0  7C 08 03 A6 */	mtlr r0
/* 80313F94 00310ED4  38 21 00 10 */	addi r1, r1, 0x10
/* 80313F98 00310ED8  4E 80 00 20 */	blr 

.global doConfirmSetScene__Q32og9newScreen9SMenuItemFRQ26Screen11SetSceneArg
doConfirmSetScene__Q32og9newScreen9SMenuItemFRQ26Screen11SetSceneArg:
/* 80313F9C 00310EDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80313FA0 00310EE0  7C 08 02 A6 */	mflr r0
/* 80313FA4 00310EE4  7C 83 23 78 */	mr r3, r4
/* 80313FA8 00310EE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80313FAC 00310EEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80313FB0 00310EF0  3B E0 00 00 */	li r31, 0
/* 80313FB4 00310EF4  81 84 00 00 */	lwz r12, 0(r4)
/* 80313FB8 00310EF8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80313FBC 00310EFC  7D 89 03 A6 */	mtctr r12
/* 80313FC0 00310F00  4E 80 04 21 */	bctrl 
/* 80313FC4 00310F04  38 03 D8 F0 */	addi r0, r3, -10000
/* 80313FC8 00310F08  28 00 00 1B */	cmplwi r0, 0x1b
/* 80313FCC 00310F0C  41 81 00 20 */	bgt .L_80313FEC
/* 80313FD0 00310F10  3C 60 80 4E */	lis r3, lbl_804D8778@ha
/* 80313FD4 00310F14  54 00 10 3A */	slwi r0, r0, 2
/* 80313FD8 00310F18  38 63 87 78 */	addi r3, r3, lbl_804D8778@l
/* 80313FDC 00310F1C  7C 03 00 2E */	lwzx r0, r3, r0
/* 80313FE0 00310F20  7C 09 03 A6 */	mtctr r0
/* 80313FE4 00310F24  4E 80 04 20 */	bctr 
.global .L_80313FE8
.L_80313FE8:
/* 80313FE8 00310F28  3B E0 00 01 */	li r31, 1
.global .L_80313FEC
.L_80313FEC:
/* 80313FEC 00310F2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80313FF0 00310F30  7F E3 FB 78 */	mr r3, r31
/* 80313FF4 00310F34  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80313FF8 00310F38  7C 08 03 A6 */	mtlr r0
/* 80313FFC 00310F3C  38 21 00 10 */	addi r1, r1, 0x10
/* 80314000 00310F40  4E 80 00 20 */	blr 

.global doSetBackupScene__Q32og9newScreen9SMenuItemFRQ26Screen11SetSceneArg
doSetBackupScene__Q32og9newScreen9SMenuItemFRQ26Screen11SetSceneArg:
/* 80314004 00310F44  38 00 00 00 */	li r0, 0
/* 80314008 00310F48  98 04 00 09 */	stb r0, 9(r4)
/* 8031400C 00310F4C  4E 80 00 20 */	blr 

.global doUserCallBackFunc__Q32og9newScreen9SMenuItemFPQ28Resource10MgrCommand
doUserCallBackFunc__Q32og9newScreen9SMenuItemFPQ28Resource10MgrCommand:
/* 80314010 00310F50  4E 80 00 20 */	blr 

.global doCreateObj__Q32og9newScreen9SMenuItemFP10JKRArchive
doCreateObj__Q32og9newScreen9SMenuItemFP10JKRArchive:
/* 80314014 00310F54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80314018 00310F58  7C 08 02 A6 */	mflr r0
/* 8031401C 00310F5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80314020 00310F60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80314024 00310F64  7C 9F 23 78 */	mr r31, r4
/* 80314028 00310F68  93 C1 00 08 */	stw r30, 8(r1)
/* 8031402C 00310F6C  7C 7E 1B 78 */	mr r30, r3
/* 80314030 00310F70  38 60 00 D4 */	li r3, 0xd4
/* 80314034 00310F74  4B D0 FE 71 */	bl __nw__FUl
/* 80314038 00310F78  7C 64 1B 79 */	or. r4, r3, r3
/* 8031403C 00310F7C  41 82 00 14 */	beq .L_80314050
/* 80314040 00310F80  3C 80 80 49 */	lis r4, lbl_8048E550@ha
/* 80314044 00310F84  38 84 E5 50 */	addi r4, r4, lbl_8048E550@l
/* 80314048 00310F88  4B FF EE B1 */	bl __ct__Q32og9newScreen12ObjSMenuItemFPCc
/* 8031404C 00310F8C  7C 64 1B 78 */	mr r4, r3
.L_80314050:
/* 80314050 00310F90  7F C3 F3 78 */	mr r3, r30
/* 80314054 00310F94  7F E5 FB 78 */	mr r5, r31
/* 80314058 00310F98  48 13 DD 1D */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 8031405C 00310F9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80314060 00310FA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80314064 00310FA4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80314068 00310FA8  7C 08 03 A6 */	mtlr r0
/* 8031406C 00310FAC  38 21 00 10 */	addi r1, r1, 0x10
/* 80314070 00310FB0  4E 80 00 20 */	blr 

.global doUpdateActive__Q32og9newScreen9SMenuItemFv
doUpdateActive__Q32og9newScreen9SMenuItemFv:
/* 80314074 00310FB4  4E 80 00 20 */	blr 

.global getResName__Q32og9newScreen9SMenuItemCFv
getResName__Q32og9newScreen9SMenuItemCFv:
/* 80314078 00310FB8  3C 60 80 49 */	lis r3, lbl_8048E564@ha
/* 8031407C 00310FBC  38 63 E5 64 */	addi r3, r3, lbl_8048E564@l
/* 80314080 00310FC0  4E 80 00 20 */	blr 

.global getSceneType__Q32og9newScreen9SMenuItemFv
getSceneType__Q32og9newScreen9SMenuItemFv:
/* 80314084 00310FC4  38 60 27 1C */	li r3, 0x271c
/* 80314088 00310FC8  4E 80 00 20 */	blr 

.global getOwnerID__Q32og9newScreen9SMenuItemFv
getOwnerID__Q32og9newScreen9SMenuItemFv:
/* 8031408C 00310FCC  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 80314090 00310FD0  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 80314094 00310FD4  4E 80 00 20 */	blr 

.global getMemberID__Q32og9newScreen9SMenuItemFv
getMemberID__Q32og9newScreen9SMenuItemFv:
/* 80314098 00310FD8  3C 80 49 54 */	lis r4, 0x4954454D@ha
/* 8031409C 00310FDC  3C 60 00 53 */	lis r3, 0x00534D5F@ha
/* 803140A0 00310FE0  38 84 45 4D */	addi r4, r4, 0x4954454D@l
/* 803140A4 00310FE4  38 63 4D 5F */	addi r3, r3, 0x00534D5F@l
/* 803140A8 00310FE8  4E 80 00 20 */	blr 

.global isUseBackupSceneInfo__Q32og9newScreen9SMenuItemFv
isUseBackupSceneInfo__Q32og9newScreen9SMenuItemFv:
/* 803140AC 00310FEC  38 60 00 01 */	li r3, 1
/* 803140B0 00310FF0  4E 80 00 20 */	blr 
