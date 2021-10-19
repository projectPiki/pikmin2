.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global lbl_8048EDB8
lbl_8048EDB8:
	.4byte 0x63617665
	.4byte 0x20736372
	.4byte 0x65656E00
.global lbl_8048EDC4
lbl_8048EDC4:
	.4byte 0x7265735F
	.4byte 0x63617665
	.4byte 0x2E737A73
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og9newScreen4CaveFv
__ct__Q32og9newScreen4CaveFv:
/* 8031CC90 00319BD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8031CC94 00319BD4  7C 08 02 A6 */	mflr r0
/* 8031CC98 00319BD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8031CC9C 00319BDC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8031CCA0 00319BE0  7C 7F 1B 78 */	mr r31, r3
/* 8031CCA4 00319BE4  48 13 4A ED */	bl __ct__Q26Screen9SceneBaseFv
/* 8031CCA8 00319BE8  3C 80 80 4E */	lis r4, __vt__Q32og9newScreen4Cave@ha
/* 8031CCAC 00319BEC  7F E3 FB 78 */	mr r3, r31
/* 8031CCB0 00319BF0  38 04 8F 50 */	addi r0, r4, __vt__Q32og9newScreen4Cave@l
/* 8031CCB4 00319BF4  90 1F 00 00 */	stw r0, 0(r31)
/* 8031CCB8 00319BF8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8031CCBC 00319BFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8031CCC0 00319C00  7C 08 03 A6 */	mtlr r0
/* 8031CCC4 00319C04  38 21 00 10 */	addi r1, r1, 0x10
/* 8031CCC8 00319C08  4E 80 00 20 */	blr 

.global doUserCallBackFunc__Q32og9newScreen4CaveFPQ28Resource10MgrCommand
doUserCallBackFunc__Q32og9newScreen4CaveFPQ28Resource10MgrCommand:
/* 8031CCCC 00319C0C  4E 80 00 20 */	blr 

.global doCreateObj__Q32og9newScreen4CaveFP10JKRArchive
doCreateObj__Q32og9newScreen4CaveFP10JKRArchive:
/* 8031CCD0 00319C10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8031CCD4 00319C14  7C 08 02 A6 */	mflr r0
/* 8031CCD8 00319C18  90 01 00 14 */	stw r0, 0x14(r1)
/* 8031CCDC 00319C1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8031CCE0 00319C20  7C 9F 23 78 */	mr r31, r4
/* 8031CCE4 00319C24  93 C1 00 08 */	stw r30, 8(r1)
/* 8031CCE8 00319C28  7C 7E 1B 78 */	mr r30, r3
/* 8031CCEC 00319C2C  38 60 00 7C */	li r3, 0x7c
/* 8031CCF0 00319C30  4B D0 71 B5 */	bl __nw__FUl
/* 8031CCF4 00319C34  7C 64 1B 79 */	or. r4, r3, r3
/* 8031CCF8 00319C38  41 82 00 14 */	beq lbl_8031CD0C
/* 8031CCFC 00319C3C  3C 80 80 49 */	lis r4, lbl_8048EDB8@ha
/* 8031CD00 00319C40  38 84 ED B8 */	addi r4, r4, lbl_8048EDB8@l
/* 8031CD04 00319C44  4B FF F3 05 */	bl __ct__Q32og9newScreen7ObjCaveFPCc
/* 8031CD08 00319C48  7C 64 1B 78 */	mr r4, r3
lbl_8031CD0C:
/* 8031CD0C 00319C4C  7F C3 F3 78 */	mr r3, r30
/* 8031CD10 00319C50  7F E5 FB 78 */	mr r5, r31
/* 8031CD14 00319C54  48 13 50 61 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 8031CD18 00319C58  7F C3 F3 78 */	mr r3, r30
/* 8031CD1C 00319C5C  38 80 00 00 */	li r4, 0
/* 8031CD20 00319C60  38 A0 00 00 */	li r5, 0
/* 8031CD24 00319C64  38 C0 00 00 */	li r6, 0
/* 8031CD28 00319C68  38 E0 00 00 */	li r7, 0
/* 8031CD2C 00319C6C  48 13 55 59 */	bl setColorBG__Q26Screen9SceneBaseFUcUcUcUc
/* 8031CD30 00319C70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8031CD34 00319C74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8031CD38 00319C78  83 C1 00 08 */	lwz r30, 8(r1)
/* 8031CD3C 00319C7C  7C 08 03 A6 */	mtlr r0
/* 8031CD40 00319C80  38 21 00 10 */	addi r1, r1, 0x10
/* 8031CD44 00319C84  4E 80 00 20 */	blr 

.global getResName__Q32og9newScreen4CaveCFv
getResName__Q32og9newScreen4CaveCFv:
/* 8031CD48 00319C88  3C 60 80 49 */	lis r3, lbl_8048EDC4@ha
/* 8031CD4C 00319C8C  38 63 ED C4 */	addi r3, r3, lbl_8048EDC4@l
/* 8031CD50 00319C90  4E 80 00 20 */	blr 

.global getSceneType__Q32og9newScreen4CaveFv
getSceneType__Q32og9newScreen4CaveFv:
/* 8031CD54 00319C94  38 60 27 11 */	li r3, 0x2711
/* 8031CD58 00319C98  4E 80 00 20 */	blr 

.global getOwnerID__Q32og9newScreen4CaveFv
getOwnerID__Q32og9newScreen4CaveFv:
/* 8031CD5C 00319C9C  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 8031CD60 00319CA0  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 8031CD64 00319CA4  4E 80 00 20 */	blr 

.global getMemberID__Q32og9newScreen4CaveFv
getMemberID__Q32og9newScreen4CaveFv:
/* 8031CD68 00319CA8  3C 80 43 41 */	lis r4, 0x43415645@ha
/* 8031CD6C 00319CAC  38 60 00 00 */	li r3, 0
/* 8031CD70 00319CB0  38 84 56 45 */	addi r4, r4, 0x43415645@l
/* 8031CD74 00319CB4  4E 80 00 20 */	blr 

.global isDrawInDemo__Q32og9newScreen4CaveCFv
isDrawInDemo__Q32og9newScreen4CaveCFv:
/* 8031CD78 00319CB8  38 60 00 00 */	li r3, 0
/* 8031CD7C 00319CBC  4E 80 00 20 */	blr 
