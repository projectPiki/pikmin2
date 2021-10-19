.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global lbl_8048F5A8
lbl_8048F5A8:
	.4byte 0x6F674F62
	.4byte 0x6A576F72
	.4byte 0x6C644D61
	.4byte 0x70496E66
	.4byte 0x6F57696E
	.4byte 0x646F7730
	.4byte 0x2E637070
	.4byte 0x00000000
.global lbl_8048F5C8
lbl_8048F5C8:
	.4byte 0x534D656E
	.4byte 0x75506175
	.4byte 0x73655653
	.4byte 0x20736372
	.4byte 0x65656E00
	.asciz "P2Assert"
	.skip 3
	.4byte 0x696E666F
	.4byte 0x5F77696E
	.4byte 0x646F772E
	.4byte 0x626C6F00
	.4byte 0x73637265
	.4byte 0x656E4F62
	.4byte 0x6A2E6800
	.4byte 0x00000000
.global lbl_8048F608
lbl_8048F608:
	.4byte 0x576F726C
	.4byte 0x644D6170
	.4byte 0x496E666F
	.4byte 0x57696E64
	.4byte 0x6F773020
	.4byte 0x73637265
	.4byte 0x656E0000
.global lbl_8048F624
lbl_8048F624:
	.4byte 0x7265735F
	.4byte 0x776F726C
	.4byte 0x645F6D61
	.4byte 0x705F696E
	.4byte 0x666F5F77
	.4byte 0x696E646F
	.4byte 0x77302E73
	.4byte 0x7A730000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og9newScreen19WorldMapInfoWindow0Fv
__ct__Q32og9newScreen19WorldMapInfoWindow0Fv:
/* 8032BAA4 003289E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032BAA8 003289E8  7C 08 02 A6 */	mflr r0
/* 8032BAAC 003289EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032BAB0 003289F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8032BAB4 003289F4  7C 7F 1B 78 */	mr r31, r3
/* 8032BAB8 003289F8  4B FF E2 45 */	bl __ct__Q32og9newScreen12SMenuPauseVSFv
/* 8032BABC 003289FC  3C 80 80 4E */	lis r4, __vt__Q32og9newScreen19WorldMapInfoWindow0@ha
/* 8032BAC0 00328A00  7F E3 FB 78 */	mr r3, r31
/* 8032BAC4 00328A04  38 04 9E 2C */	addi r0, r4, __vt__Q32og9newScreen19WorldMapInfoWindow0@l
/* 8032BAC8 00328A08  90 1F 00 00 */	stw r0, 0(r31)
/* 8032BACC 00328A0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8032BAD0 00328A10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032BAD4 00328A14  7C 08 03 A6 */	mtlr r0
/* 8032BAD8 00328A18  38 21 00 10 */	addi r1, r1, 0x10
/* 8032BADC 00328A1C  4E 80 00 20 */	blr 

.global doCreateObj__Q32og9newScreen19WorldMapInfoWindow0FP10JKRArchive
doCreateObj__Q32og9newScreen19WorldMapInfoWindow0FP10JKRArchive:
/* 8032BAE0 00328A20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032BAE4 00328A24  7C 08 02 A6 */	mflr r0
/* 8032BAE8 00328A28  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032BAEC 00328A2C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8032BAF0 00328A30  7C 9F 23 78 */	mr r31, r4
/* 8032BAF4 00328A34  93 C1 00 08 */	stw r30, 8(r1)
/* 8032BAF8 00328A38  7C 7E 1B 78 */	mr r30, r3
/* 8032BAFC 00328A3C  38 60 00 D4 */	li r3, 0xd4
/* 8032BB00 00328A40  4B CF 83 A5 */	bl __nw__FUl
/* 8032BB04 00328A44  7C 64 1B 79 */	or. r4, r3, r3
/* 8032BB08 00328A48  41 82 00 14 */	beq lbl_8032BB1C
/* 8032BB0C 00328A4C  3C 80 80 49 */	lis r4, lbl_8048F608@ha
/* 8032BB10 00328A50  38 84 F6 08 */	addi r4, r4, lbl_8048F608@l
/* 8032BB14 00328A54  4B FF F8 2D */	bl __ct__Q32og9newScreen22ObjWorldMapInfoWindow0FPCc
/* 8032BB18 00328A58  7C 64 1B 78 */	mr r4, r3
lbl_8032BB1C:
/* 8032BB1C 00328A5C  7F C3 F3 78 */	mr r3, r30
/* 8032BB20 00328A60  7F E5 FB 78 */	mr r5, r31
/* 8032BB24 00328A64  48 12 62 51 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 8032BB28 00328A68  83 FE 02 1C */	lwz r31, 0x21c(r30)
/* 8032BB2C 00328A6C  3C 80 00 4F */	lis r4, 0x004F4741@ha
/* 8032BB30 00328A70  3C C0 57 69 */	lis r6, 0x57696E30@ha
/* 8032BB34 00328A74  3C A0 57 4D */	lis r5, 0x574D6170@ha
/* 8032BB38 00328A78  7F E3 FB 78 */	mr r3, r31
/* 8032BB3C 00328A7C  38 84 47 41 */	addi r4, r4, 0x004F4741@l
/* 8032BB40 00328A80  38 C6 6E 30 */	addi r6, r6, 0x57696E30@l
/* 8032BB44 00328A84  38 A5 61 70 */	addi r5, r5, 0x574D6170@l
/* 8032BB48 00328A88  4B FE 37 D5 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 8032BB4C 00328A8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8032BB50 00328A90  41 82 00 1C */	beq lbl_8032BB6C
/* 8032BB54 00328A94  88 FF 00 20 */	lbz r7, 0x20(r31)
/* 8032BB58 00328A98  7F C3 F3 78 */	mr r3, r30
/* 8032BB5C 00328A9C  38 80 00 00 */	li r4, 0
/* 8032BB60 00328AA0  38 A0 00 00 */	li r5, 0
/* 8032BB64 00328AA4  38 C0 00 00 */	li r6, 0
/* 8032BB68 00328AA8  48 12 67 1D */	bl setColorBG__Q26Screen9SceneBaseFUcUcUcUc
lbl_8032BB6C:
/* 8032BB6C 00328AAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032BB70 00328AB0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8032BB74 00328AB4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8032BB78 00328AB8  7C 08 03 A6 */	mtlr r0
/* 8032BB7C 00328ABC  38 21 00 10 */	addi r1, r1, 0x10
/* 8032BB80 00328AC0  4E 80 00 20 */	blr 

.global doConfirmSetScene__Q32og9newScreen19WorldMapInfoWindow0FRQ26Screen11SetSceneArg
doConfirmSetScene__Q32og9newScreen19WorldMapInfoWindow0FRQ26Screen11SetSceneArg:
/* 8032BB84 00328AC4  38 60 00 01 */	li r3, 1
/* 8032BB88 00328AC8  4E 80 00 20 */	blr 

.global doGetFinishState__Q32og9newScreen19WorldMapInfoWindow0Fv
doGetFinishState__Q32og9newScreen19WorldMapInfoWindow0Fv:
/* 8032BB8C 00328ACC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032BB90 00328AD0  7C 08 02 A6 */	mflr r0
/* 8032BB94 00328AD4  3C 80 00 4F */	lis r4, 0x004F4741@ha
/* 8032BB98 00328AD8  3C C0 57 69 */	lis r6, 0x57696E30@ha
/* 8032BB9C 00328ADC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032BBA0 00328AE0  3C A0 57 4D */	lis r5, 0x574D6170@ha
/* 8032BBA4 00328AE4  38 84 47 41 */	addi r4, r4, 0x004F4741@l
/* 8032BBA8 00328AE8  38 C6 6E 30 */	addi r6, r6, 0x57696E30@l
/* 8032BBAC 00328AEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8032BBB0 00328AF0  38 A5 61 70 */	addi r5, r5, 0x574D6170@l
/* 8032BBB4 00328AF4  93 C1 00 08 */	stw r30, 8(r1)
/* 8032BBB8 00328AF8  3B C0 00 00 */	li r30, 0
/* 8032BBBC 00328AFC  83 E3 02 1C */	lwz r31, 0x21c(r3)
/* 8032BBC0 00328B00  7F E3 FB 78 */	mr r3, r31
/* 8032BBC4 00328B04  4B FE 37 59 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 8032BBC8 00328B08  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8032BBCC 00328B0C  41 82 00 08 */	beq lbl_8032BBD4
/* 8032BBD0 00328B10  83 DF 00 08 */	lwz r30, 8(r31)
lbl_8032BBD4:
/* 8032BBD4 00328B14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032BBD8 00328B18  7F C3 F3 78 */	mr r3, r30
/* 8032BBDC 00328B1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8032BBE0 00328B20  83 C1 00 08 */	lwz r30, 8(r1)
/* 8032BBE4 00328B24  7C 08 03 A6 */	mtlr r0
/* 8032BBE8 00328B28  38 21 00 10 */	addi r1, r1, 0x10
/* 8032BBEC 00328B2C  4E 80 00 20 */	blr 

.global getResName__Q32og9newScreen19WorldMapInfoWindow0CFv
getResName__Q32og9newScreen19WorldMapInfoWindow0CFv:
/* 8032BBF0 00328B30  3C 60 80 49 */	lis r3, lbl_8048F624@ha
/* 8032BBF4 00328B34  38 63 F6 24 */	addi r3, r3, lbl_8048F624@l
/* 8032BBF8 00328B38  4E 80 00 20 */	blr 

.global getSceneType__Q32og9newScreen19WorldMapInfoWindow0Fv
getSceneType__Q32og9newScreen19WorldMapInfoWindow0Fv:
/* 8032BBFC 00328B3C  38 60 27 29 */	li r3, 0x2729
/* 8032BC00 00328B40  4E 80 00 20 */	blr 

.global getMemberID__Q32og9newScreen19WorldMapInfoWindow0Fv
getMemberID__Q32og9newScreen19WorldMapInfoWindow0Fv:
/* 8032BC04 00328B44  3C 80 57 69 */	lis r4, 0x57696E30@ha
/* 8032BC08 00328B48  3C 60 57 4D */	lis r3, 0x574D6170@ha
/* 8032BC0C 00328B4C  38 84 6E 30 */	addi r4, r4, 0x57696E30@l
/* 8032BC10 00328B50  38 63 61 70 */	addi r3, r3, 0x574D6170@l
/* 8032BC14 00328B54  4E 80 00 20 */	blr 

.global isUseBackupSceneInfo__Q32og9newScreen19WorldMapInfoWindow0Fv
isUseBackupSceneInfo__Q32og9newScreen19WorldMapInfoWindow0Fv:
/* 8032BC18 00328B58  38 60 00 00 */	li r3, 0
/* 8032BC1C 00328B5C  4E 80 00 20 */	blr 

.global __sinit_ogSceneWorldMapInfoWindow0_cpp
__sinit_ogSceneWorldMapInfoWindow0_cpp:
/* 8032BC20 00328B60  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8032BC24 00328B64  38 00 FF FF */	li r0, -1
/* 8032BC28 00328B68  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8032BC2C 00328B6C  3C 60 80 4E */	lis r3, lbl_804D9E20@ha
/* 8032BC30 00328B70  90 0D 98 20 */	stw r0, lbl_80515EA0@sda21(r13)
/* 8032BC34 00328B74  D4 03 9E 20 */	stfsu f0, lbl_804D9E20@l(r3)
/* 8032BC38 00328B78  D0 0D 98 24 */	stfs f0, lbl_80515EA4@sda21(r13)
/* 8032BC3C 00328B7C  D0 03 00 04 */	stfs f0, 4(r3)
/* 8032BC40 00328B80  D0 03 00 08 */	stfs f0, 8(r3)
/* 8032BC44 00328B84  4E 80 00 20 */	blr 
