.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og9newScreen2VsFv
__ct__Q32og9newScreen2VsFv:
/* 80327C5C 00324B9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80327C60 00324BA0  7C 08 02 A6 */	mflr r0
/* 80327C64 00324BA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80327C68 00324BA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80327C6C 00324BAC  7C 7F 1B 78 */	mr r31, r3
/* 80327C70 00324BB0  48 12 9B 21 */	bl __ct__Q26Screen9SceneBaseFv
/* 80327C74 00324BB4  3C 80 80 4E */	lis r4, __vt__Q32og9newScreen2Vs@ha
/* 80327C78 00324BB8  7F E3 FB 78 */	mr r3, r31
/* 80327C7C 00324BBC  38 04 9A B8 */	addi r0, r4, __vt__Q32og9newScreen2Vs@l
/* 80327C80 00324BC0  90 1F 00 00 */	stw r0, 0(r31)
/* 80327C84 00324BC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80327C88 00324BC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80327C8C 00324BCC  7C 08 03 A6 */	mtlr r0
/* 80327C90 00324BD0  38 21 00 10 */	addi r1, r1, 0x10
/* 80327C94 00324BD4  4E 80 00 20 */	blr 

.global doUserCallBackFunc__Q32og9newScreen2VsFPQ28Resource10MgrCommand
doUserCallBackFunc__Q32og9newScreen2VsFPQ28Resource10MgrCommand:
/* 80327C98 00324BD8  4E 80 00 20 */	blr 

.global doCreateObj__Q32og9newScreen2VsFP10JKRArchive
doCreateObj__Q32og9newScreen2VsFP10JKRArchive:
/* 80327C9C 00324BDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80327CA0 00324BE0  7C 08 02 A6 */	mflr r0
/* 80327CA4 00324BE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80327CA8 00324BE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80327CAC 00324BEC  7C 9F 23 78 */	mr r31, r4
/* 80327CB0 00324BF0  93 C1 00 08 */	stw r30, 8(r1)
/* 80327CB4 00324BF4  7C 7E 1B 78 */	mr r30, r3
/* 80327CB8 00324BF8  38 60 01 2C */	li r3, 0x12c
/* 80327CBC 00324BFC  4B CF C1 E9 */	bl __nw__FUl
/* 80327CC0 00324C00  7C 64 1B 79 */	or. r4, r3, r3
/* 80327CC4 00324C04  41 82 00 14 */	beq lbl_80327CD8
/* 80327CC8 00324C08  3C 80 80 49 */	lis r4, lbl_8048F410@ha
/* 80327CCC 00324C0C  38 84 F4 10 */	addi r4, r4, lbl_8048F410@l
/* 80327CD0 00324C10  4B FF DD 71 */	bl __ct__Q32og9newScreen5ObjVsFPCc
/* 80327CD4 00324C14  7C 64 1B 78 */	mr r4, r3
lbl_80327CD8:
/* 80327CD8 00324C18  7F C3 F3 78 */	mr r3, r30
/* 80327CDC 00324C1C  7F E5 FB 78 */	mr r5, r31
/* 80327CE0 00324C20  48 12 A0 95 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 80327CE4 00324C24  7F C3 F3 78 */	mr r3, r30
/* 80327CE8 00324C28  38 80 00 00 */	li r4, 0
/* 80327CEC 00324C2C  38 A0 00 00 */	li r5, 0
/* 80327CF0 00324C30  38 C0 00 00 */	li r6, 0
/* 80327CF4 00324C34  38 E0 00 00 */	li r7, 0
/* 80327CF8 00324C38  48 12 A5 8D */	bl setColorBG__Q26Screen9SceneBaseFUcUcUcUc
/* 80327CFC 00324C3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80327D00 00324C40  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80327D04 00324C44  83 C1 00 08 */	lwz r30, 8(r1)
/* 80327D08 00324C48  7C 08 03 A6 */	mtlr r0
/* 80327D0C 00324C4C  38 21 00 10 */	addi r1, r1, 0x10
/* 80327D10 00324C50  4E 80 00 20 */	blr 

.global getResName__Q32og9newScreen2VsCFv
getResName__Q32og9newScreen2VsCFv:
/* 80327D14 00324C54  3C 60 80 49 */	lis r3, lbl_8048F41C@ha
/* 80327D18 00324C58  38 63 F4 1C */	addi r3, r3, lbl_8048F41C@l
/* 80327D1C 00324C5C  4E 80 00 20 */	blr 

.global getSceneType__Q32og9newScreen2VsFv
getSceneType__Q32og9newScreen2VsFv:
/* 80327D20 00324C60  38 60 27 12 */	li r3, 0x2712
/* 80327D24 00324C64  4E 80 00 20 */	blr 

.global getOwnerID__Q32og9newScreen2VsFv
getOwnerID__Q32og9newScreen2VsFv:
/* 80327D28 00324C68  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 80327D2C 00324C6C  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 80327D30 00324C70  4E 80 00 20 */	blr 

.global getMemberID__Q32og9newScreen2VsFv
getMemberID__Q32og9newScreen2VsFv:
/* 80327D34 00324C74  38 80 56 53 */	li r4, 0x5653
/* 80327D38 00324C78  38 60 00 00 */	li r3, 0
/* 80327D3C 00324C7C  4E 80 00 20 */	blr 

.global isDrawInDemo__Q32og9newScreen2VsCFv
isDrawInDemo__Q32og9newScreen2VsCFv:
/* 80327D40 00324C80  38 60 00 00 */	li r3, 0
/* 80327D44 00324C84  4E 80 00 20 */	blr 
