.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global lbl_8048F648
lbl_8048F648:
	.4byte 0x534D656E
	.4byte 0x75506175
	.4byte 0x73655653
	.4byte 0x20736372
	.4byte 0x65656E00
.global lbl_8048F65C
lbl_8048F65C:
	.4byte 0x696E666F
	.4byte 0x5F77696E
	.4byte 0x646F772E
	.4byte 0x626C6F00
	.4byte 0x00000000
.global lbl_8048F670
lbl_8048F670:
	.4byte 0x576F726C
	.4byte 0x644D6170
	.4byte 0x496E666F
	.4byte 0x57696E64
	.4byte 0x6F773120
	.4byte 0x73637265
	.4byte 0x656E0000
.global lbl_8048F68C
lbl_8048F68C:
	.4byte 0x7265735F
	.4byte 0x776F726C
	.4byte 0x645F6D61
	.4byte 0x705F696E
	.4byte 0x666F5F77
	.4byte 0x696E646F
	.4byte 0x77312E73
	.4byte 0x7A730000
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global lbl_804D9F50
lbl_804D9F50:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global __vt__Q32og9newScreen19WorldMapInfoWindow1
__vt__Q32og9newScreen19WorldMapInfoWindow1:
	.4byte 0
	.4byte 0
	.4byte getSceneType__Q32og9newScreen19WorldMapInfoWindow1Fv
	.4byte getOwnerID__Q32og9newScreen12SMenuPauseVSFv
	.4byte getMemberID__Q32og9newScreen19WorldMapInfoWindow1Fv
	.4byte isUseBackupSceneInfo__Q32og9newScreen19WorldMapInfoWindow1Fv
	.4byte isDrawInDemo__Q26Screen9SceneBaseCFv
	.4byte getResName__Q32og9newScreen19WorldMapInfoWindow1CFv
	.4byte doCreateObj__Q32og9newScreen19WorldMapInfoWindow1FP10JKRArchive
	.4byte doUserCallBackFunc__Q32og9newScreen12SMenuPauseVSFPQ28Resource10MgrCommand
	.4byte setPort__Q26Screen9SceneBaseFR8Graphics
	.4byte doUpdateActive__Q32og9newScreen12SMenuPauseVSFv
	.4byte doConfirmSetScene__Q32og9newScreen19WorldMapInfoWindow1FRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg
	.4byte doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	.4byte setDefaultDispMember__Q26Screen9SceneBaseFv
	.4byte doSetBackupScene__Q32og9newScreen12SMenuPauseVSFRQ26Screen11SetSceneArg
	.4byte doGetFinishState__Q32og9newScreen19WorldMapInfoWindow1Fv
	.4byte 0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og9newScreen19WorldMapInfoWindow1Fv
__ct__Q32og9newScreen19WorldMapInfoWindow1Fv:
/* 8032C208 00329148  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032C20C 0032914C  7C 08 02 A6 */	mflr r0
/* 8032C210 00329150  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032C214 00329154  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8032C218 00329158  7C 7F 1B 78 */	mr r31, r3
/* 8032C21C 0032915C  4B FF DA E1 */	bl __ct__Q32og9newScreen12SMenuPauseVSFv
/* 8032C220 00329160  3C 80 80 4E */	lis r4, __vt__Q32og9newScreen19WorldMapInfoWindow1@ha
/* 8032C224 00329164  7F E3 FB 78 */	mr r3, r31
/* 8032C228 00329168  38 04 9F 5C */	addi r0, r4, __vt__Q32og9newScreen19WorldMapInfoWindow1@l
/* 8032C22C 0032916C  90 1F 00 00 */	stw r0, 0(r31)
/* 8032C230 00329170  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8032C234 00329174  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032C238 00329178  7C 08 03 A6 */	mtlr r0
/* 8032C23C 0032917C  38 21 00 10 */	addi r1, r1, 0x10
/* 8032C240 00329180  4E 80 00 20 */	blr 

.global doCreateObj__Q32og9newScreen19WorldMapInfoWindow1FP10JKRArchive
doCreateObj__Q32og9newScreen19WorldMapInfoWindow1FP10JKRArchive:
/* 8032C244 00329184  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032C248 00329188  7C 08 02 A6 */	mflr r0
/* 8032C24C 0032918C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032C250 00329190  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8032C254 00329194  7C 9F 23 78 */	mr r31, r4
/* 8032C258 00329198  93 C1 00 08 */	stw r30, 8(r1)
/* 8032C25C 0032919C  7C 7E 1B 78 */	mr r30, r3
/* 8032C260 003291A0  38 60 00 D4 */	li r3, 0xd4
/* 8032C264 003291A4  4B CF 7C 41 */	bl __nw__FUl
/* 8032C268 003291A8  7C 64 1B 79 */	or. r4, r3, r3
/* 8032C26C 003291AC  41 82 00 14 */	beq lbl_8032C280
/* 8032C270 003291B0  3C 80 80 49 */	lis r4, lbl_8048F670@ha
/* 8032C274 003291B4  38 84 F6 70 */	addi r4, r4, lbl_8048F670@l
/* 8032C278 003291B8  4B FF F9 D1 */	bl __ct__Q32og9newScreen22ObjWorldMapInfoWindow1FPCc
/* 8032C27C 003291BC  7C 64 1B 78 */	mr r4, r3
lbl_8032C280:
/* 8032C280 003291C0  7F C3 F3 78 */	mr r3, r30
/* 8032C284 003291C4  7F E5 FB 78 */	mr r5, r31
/* 8032C288 003291C8  48 12 5A ED */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 8032C28C 003291CC  83 FE 02 1C */	lwz r31, 0x21c(r30)
/* 8032C290 003291D0  3C 80 00 4F */	lis r4, 0x004F4741@ha
/* 8032C294 003291D4  3C C0 57 69 */	lis r6, 0x57696E31@ha
/* 8032C298 003291D8  3C A0 57 4D */	lis r5, 0x574D6170@ha
/* 8032C29C 003291DC  7F E3 FB 78 */	mr r3, r31
/* 8032C2A0 003291E0  38 84 47 41 */	addi r4, r4, 0x004F4741@l
/* 8032C2A4 003291E4  38 C6 6E 31 */	addi r6, r6, 0x57696E31@l
/* 8032C2A8 003291E8  38 A5 61 70 */	addi r5, r5, 0x574D6170@l
/* 8032C2AC 003291EC  4B FE 30 71 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 8032C2B0 003291F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8032C2B4 003291F4  41 82 00 1C */	beq lbl_8032C2D0
/* 8032C2B8 003291F8  88 FF 00 0C */	lbz r7, 0xc(r31)
/* 8032C2BC 003291FC  7F C3 F3 78 */	mr r3, r30
/* 8032C2C0 00329200  38 80 00 00 */	li r4, 0
/* 8032C2C4 00329204  38 A0 00 00 */	li r5, 0
/* 8032C2C8 00329208  38 C0 00 00 */	li r6, 0
/* 8032C2CC 0032920C  48 12 5F B9 */	bl setColorBG__Q26Screen9SceneBaseFUcUcUcUc
lbl_8032C2D0:
/* 8032C2D0 00329210  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032C2D4 00329214  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8032C2D8 00329218  83 C1 00 08 */	lwz r30, 8(r1)
/* 8032C2DC 0032921C  7C 08 03 A6 */	mtlr r0
/* 8032C2E0 00329220  38 21 00 10 */	addi r1, r1, 0x10
/* 8032C2E4 00329224  4E 80 00 20 */	blr 

.global doConfirmSetScene__Q32og9newScreen19WorldMapInfoWindow1FRQ26Screen11SetSceneArg
doConfirmSetScene__Q32og9newScreen19WorldMapInfoWindow1FRQ26Screen11SetSceneArg:
/* 8032C2E8 00329228  38 60 00 01 */	li r3, 1
/* 8032C2EC 0032922C  4E 80 00 20 */	blr 

.global doGetFinishState__Q32og9newScreen19WorldMapInfoWindow1Fv
doGetFinishState__Q32og9newScreen19WorldMapInfoWindow1Fv:
/* 8032C2F0 00329230  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032C2F4 00329234  7C 08 02 A6 */	mflr r0
/* 8032C2F8 00329238  3C 80 00 4F */	lis r4, 0x004F4741@ha
/* 8032C2FC 0032923C  3C C0 57 69 */	lis r6, 0x57696E31@ha
/* 8032C300 00329240  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032C304 00329244  3C A0 57 4D */	lis r5, 0x574D6170@ha
/* 8032C308 00329248  38 84 47 41 */	addi r4, r4, 0x004F4741@l
/* 8032C30C 0032924C  38 C6 6E 31 */	addi r6, r6, 0x57696E31@l
/* 8032C310 00329250  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8032C314 00329254  38 A5 61 70 */	addi r5, r5, 0x574D6170@l
/* 8032C318 00329258  93 C1 00 08 */	stw r30, 8(r1)
/* 8032C31C 0032925C  3B C0 00 00 */	li r30, 0
/* 8032C320 00329260  83 E3 02 1C */	lwz r31, 0x21c(r3)
/* 8032C324 00329264  7F E3 FB 78 */	mr r3, r31
/* 8032C328 00329268  4B FE 2F F5 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 8032C32C 0032926C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8032C330 00329270  41 82 00 08 */	beq lbl_8032C338
/* 8032C334 00329274  83 DF 00 08 */	lwz r30, 8(r31)
lbl_8032C338:
/* 8032C338 00329278  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032C33C 0032927C  7F C3 F3 78 */	mr r3, r30
/* 8032C340 00329280  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8032C344 00329284  83 C1 00 08 */	lwz r30, 8(r1)
/* 8032C348 00329288  7C 08 03 A6 */	mtlr r0
/* 8032C34C 0032928C  38 21 00 10 */	addi r1, r1, 0x10
/* 8032C350 00329290  4E 80 00 20 */	blr 

.global getResName__Q32og9newScreen19WorldMapInfoWindow1CFv
getResName__Q32og9newScreen19WorldMapInfoWindow1CFv:
/* 8032C354 00329294  3C 60 80 49 */	lis r3, lbl_8048F68C@ha
/* 8032C358 00329298  38 63 F6 8C */	addi r3, r3, lbl_8048F68C@l
/* 8032C35C 0032929C  4E 80 00 20 */	blr 

.global getSceneType__Q32og9newScreen19WorldMapInfoWindow1Fv
getSceneType__Q32og9newScreen19WorldMapInfoWindow1Fv:
/* 8032C360 003292A0  38 60 27 2A */	li r3, 0x272a
/* 8032C364 003292A4  4E 80 00 20 */	blr 

.global getMemberID__Q32og9newScreen19WorldMapInfoWindow1Fv
getMemberID__Q32og9newScreen19WorldMapInfoWindow1Fv:
/* 8032C368 003292A8  3C 80 57 69 */	lis r4, 0x57696E31@ha
/* 8032C36C 003292AC  3C 60 57 4D */	lis r3, 0x574D6170@ha
/* 8032C370 003292B0  38 84 6E 31 */	addi r4, r4, 0x57696E31@l
/* 8032C374 003292B4  38 63 61 70 */	addi r3, r3, 0x574D6170@l
/* 8032C378 003292B8  4E 80 00 20 */	blr 

.global isUseBackupSceneInfo__Q32og9newScreen19WorldMapInfoWindow1Fv
isUseBackupSceneInfo__Q32og9newScreen19WorldMapInfoWindow1Fv:
/* 8032C37C 003292BC  38 60 00 00 */	li r3, 0
/* 8032C380 003292C0  4E 80 00 20 */	blr 

.global __sinit_ogSceneWorldMapInfoWindow1_cpp
__sinit_ogSceneWorldMapInfoWindow1_cpp:
/* 8032C384 003292C4  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8032C388 003292C8  38 00 FF FF */	li r0, -1
/* 8032C38C 003292CC  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8032C390 003292D0  3C 60 80 4E */	lis r3, lbl_804D9F50@ha
/* 8032C394 003292D4  90 0D 98 28 */	stw r0, lbl_80515EA8@sda21(r13)
/* 8032C398 003292D8  D4 03 9F 50 */	stfsu f0, lbl_804D9F50@l(r3)
/* 8032C39C 003292DC  D0 0D 98 2C */	stfs f0, lbl_80515EAC@sda21(r13)
/* 8032C3A0 003292E0  D0 03 00 04 */	stfs f0, 4(r3)
/* 8032C3A4 003292E4  D0 03 00 08 */	stfs f0, 8(r3)
/* 8032C3A8 003292E8  4E 80 00 20 */	blr 
