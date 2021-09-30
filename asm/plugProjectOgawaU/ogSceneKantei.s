.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og9newScreen10KanteiDemoFv
__ct__Q32og9newScreen10KanteiDemoFv:
/* 80319BDC 00316B1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80319BE0 00316B20  7C 08 02 A6 */	mflr r0
/* 80319BE4 00316B24  90 01 00 14 */	stw r0, 0x14(r1)
/* 80319BE8 00316B28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80319BEC 00316B2C  7C 7F 1B 78 */	mr r31, r3
/* 80319BF0 00316B30  48 13 7B A1 */	bl __ct__Q26Screen9SceneBaseFv
/* 80319BF4 00316B34  3C 60 80 4E */	lis r3, __vt__Q32og9newScreen10KanteiDemo@ha
/* 80319BF8 00316B38  38 00 00 00 */	li r0, 0
/* 80319BFC 00316B3C  38 83 8C B8 */	addi r4, r3, __vt__Q32og9newScreen10KanteiDemo@l
/* 80319C00 00316B40  7F E3 FB 78 */	mr r3, r31
/* 80319C04 00316B44  90 9F 00 00 */	stw r4, 0(r31)
/* 80319C08 00316B48  90 1F 02 20 */	stw r0, 0x220(r31)
/* 80319C0C 00316B4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80319C10 00316B50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80319C14 00316B54  7C 08 03 A6 */	mtlr r0
/* 80319C18 00316B58  38 21 00 10 */	addi r1, r1, 0x10
/* 80319C1C 00316B5C  4E 80 00 20 */	blr 

.global doUserCallBackFunc__Q32og9newScreen10KanteiDemoFPQ28Resource10MgrCommand
doUserCallBackFunc__Q32og9newScreen10KanteiDemoFPQ28Resource10MgrCommand:
/* 80319C20 00316B60  4E 80 00 20 */	blr 

.global doCreateObj__Q32og9newScreen10KanteiDemoFP10JKRArchive
doCreateObj__Q32og9newScreen10KanteiDemoFP10JKRArchive:
/* 80319C24 00316B64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80319C28 00316B68  7C 08 02 A6 */	mflr r0
/* 80319C2C 00316B6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80319C30 00316B70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80319C34 00316B74  7C 9F 23 78 */	mr r31, r4
/* 80319C38 00316B78  93 C1 00 08 */	stw r30, 8(r1)
/* 80319C3C 00316B7C  7C 7E 1B 78 */	mr r30, r3
/* 80319C40 00316B80  38 60 00 F8 */	li r3, 0xf8
/* 80319C44 00316B84  4B D0 A2 61 */	bl __nw__FUl
/* 80319C48 00316B88  7C 60 1B 79 */	or. r0, r3, r3
/* 80319C4C 00316B8C  41 82 00 14 */	beq lbl_80319C60
/* 80319C50 00316B90  3C 80 80 49 */	lis r4, lbl_8048EAB8@ha
/* 80319C54 00316B94  38 84 EA B8 */	addi r4, r4, lbl_8048EAB8@l
/* 80319C58 00316B98  4B FF E5 ED */	bl __ct__Q32og9newScreen9ObjKanteiFPCc
/* 80319C5C 00316B9C  7C 60 1B 78 */	mr r0, r3
lbl_80319C60:
/* 80319C60 00316BA0  90 1E 02 20 */	stw r0, 0x220(r30)
/* 80319C64 00316BA4  7F C3 F3 78 */	mr r3, r30
/* 80319C68 00316BA8  7F E5 FB 78 */	mr r5, r31
/* 80319C6C 00316BAC  80 9E 02 20 */	lwz r4, 0x220(r30)
/* 80319C70 00316BB0  48 13 81 05 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 80319C74 00316BB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80319C78 00316BB8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80319C7C 00316BBC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80319C80 00316BC0  7C 08 03 A6 */	mtlr r0
/* 80319C84 00316BC4  38 21 00 10 */	addi r1, r1, 0x10
/* 80319C88 00316BC8  4E 80 00 20 */	blr 

.global getResName__Q32og9newScreen10KanteiDemoCFv
getResName__Q32og9newScreen10KanteiDemoCFv:
/* 80319C8C 00316BCC  3C 60 80 49 */	lis r3, lbl_8048EAC8@ha
/* 80319C90 00316BD0  38 63 EA C8 */	addi r3, r3, lbl_8048EAC8@l
/* 80319C94 00316BD4  4E 80 00 20 */	blr 

.global getSceneType__Q32og9newScreen10KanteiDemoFv
getSceneType__Q32og9newScreen10KanteiDemoFv:
/* 80319C98 00316BD8  38 60 27 22 */	li r3, 0x2722
/* 80319C9C 00316BDC  4E 80 00 20 */	blr 

.global getOwnerID__Q32og9newScreen10KanteiDemoFv
getOwnerID__Q32og9newScreen10KanteiDemoFv:
/* 80319CA0 00316BE0  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 80319CA4 00316BE4  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 80319CA8 00316BE8  4E 80 00 20 */	blr 

.global getMemberID__Q32og9newScreen10KanteiDemoFv
getMemberID__Q32og9newScreen10KanteiDemoFv:
/* 80319CAC 00316BEC  3C 80 4E 54 */	lis r4, 0x4E544549@ha
/* 80319CB0 00316BF0  38 60 4B 41 */	li r3, 0x4b41
/* 80319CB4 00316BF4  38 84 45 49 */	addi r4, r4, 0x4E544549@l
/* 80319CB8 00316BF8  4E 80 00 20 */	blr 

.global isUseBackupSceneInfo__Q32og9newScreen10KanteiDemoFv
isUseBackupSceneInfo__Q32og9newScreen10KanteiDemoFv:
/* 80319CBC 00316BFC  38 60 00 01 */	li r3, 1
/* 80319CC0 00316C00  4E 80 00 20 */	blr 
