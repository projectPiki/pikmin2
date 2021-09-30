.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og9newScreen11Challenge2PFv
__ct__Q32og9newScreen11Challenge2PFv:
/* 8031FD04 0031CC44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8031FD08 0031CC48  7C 08 02 A6 */	mflr r0
/* 8031FD0C 0031CC4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8031FD10 0031CC50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8031FD14 0031CC54  7C 7F 1B 78 */	mr r31, r3
/* 8031FD18 0031CC58  48 00 D0 19 */	bl __ct__Q32og9newScreen13ChallengeBaseFv
/* 8031FD1C 0031CC5C  3C 80 80 4E */	lis r4, __vt__Q32og9newScreen11Challenge2P@ha
/* 8031FD20 0031CC60  7F E3 FB 78 */	mr r3, r31
/* 8031FD24 0031CC64  38 04 95 40 */	addi r0, r4, __vt__Q32og9newScreen11Challenge2P@l
/* 8031FD28 0031CC68  90 1F 00 00 */	stw r0, 0(r31)
/* 8031FD2C 0031CC6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8031FD30 0031CC70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8031FD34 0031CC74  7C 08 03 A6 */	mtlr r0
/* 8031FD38 0031CC78  38 21 00 10 */	addi r1, r1, 0x10
/* 8031FD3C 0031CC7C  4E 80 00 20 */	blr 

.global doUserCallBackFunc__Q32og9newScreen11Challenge2PFPQ28Resource10MgrCommand
doUserCallBackFunc__Q32og9newScreen11Challenge2PFPQ28Resource10MgrCommand:
/* 8031FD40 0031CC80  4E 80 00 20 */	blr 

.global doCreateObj__Q32og9newScreen11Challenge2PFP10JKRArchive
doCreateObj__Q32og9newScreen11Challenge2PFP10JKRArchive:
/* 8031FD44 0031CC84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8031FD48 0031CC88  7C 08 02 A6 */	mflr r0
/* 8031FD4C 0031CC8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8031FD50 0031CC90  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8031FD54 0031CC94  7C 9F 23 78 */	mr r31, r4
/* 8031FD58 0031CC98  93 C1 00 08 */	stw r30, 8(r1)
/* 8031FD5C 0031CC9C  7C 7E 1B 78 */	mr r30, r3
/* 8031FD60 0031CCA0  38 60 00 74 */	li r3, 0x74
/* 8031FD64 0031CCA4  4B D0 41 41 */	bl __nw__FUl
/* 8031FD68 0031CCA8  7C 64 1B 79 */	or. r4, r3, r3
/* 8031FD6C 0031CCAC  41 82 00 14 */	beq lbl_8031FD80
/* 8031FD70 0031CCB0  3C 80 80 49 */	lis r4, lbl_8048EF88@ha
/* 8031FD74 0031CCB4  38 84 EF 88 */	addi r4, r4, lbl_8048EF88@l
/* 8031FD78 0031CCB8  4B FF EE 71 */	bl __ct__Q32og9newScreen14ObjChallenge2PFPCc
/* 8031FD7C 0031CCBC  7C 64 1B 78 */	mr r4, r3
lbl_8031FD80:
/* 8031FD80 0031CCC0  7F C3 F3 78 */	mr r3, r30
/* 8031FD84 0031CCC4  7F E5 FB 78 */	mr r5, r31
/* 8031FD88 0031CCC8  48 13 1F ED */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 8031FD8C 0031CCCC  38 60 00 D4 */	li r3, 0xd4
/* 8031FD90 0031CCD0  4B D0 41 15 */	bl __nw__FUl
/* 8031FD94 0031CCD4  7C 64 1B 79 */	or. r4, r3, r3
/* 8031FD98 0031CCD8  41 82 00 0C */	beq lbl_8031FDA4
/* 8031FD9C 0031CCDC  48 02 58 81 */	bl __ct__Q28Morimura20TChallengeEndCount1pFv
/* 8031FDA0 0031CCE0  7C 64 1B 78 */	mr r4, r3
lbl_8031FDA4:
/* 8031FDA4 0031CCE4  7F C3 F3 78 */	mr r3, r30
/* 8031FDA8 0031CCE8  7F E5 FB 78 */	mr r5, r31
/* 8031FDAC 0031CCEC  48 13 1F C9 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 8031FDB0 0031CCF0  38 60 00 D4 */	li r3, 0xd4
/* 8031FDB4 0031CCF4  4B D0 40 F1 */	bl __nw__FUl
/* 8031FDB8 0031CCF8  7C 64 1B 79 */	or. r4, r3, r3
/* 8031FDBC 0031CCFC  41 82 00 0C */	beq lbl_8031FDC8
/* 8031FDC0 0031CD00  48 02 5A A9 */	bl __ct__Q28Morimura20TChallengeEndCount2pFv
/* 8031FDC4 0031CD04  7C 64 1B 78 */	mr r4, r3
lbl_8031FDC8:
/* 8031FDC8 0031CD08  7F C3 F3 78 */	mr r3, r30
/* 8031FDCC 0031CD0C  7F E5 FB 78 */	mr r5, r31
/* 8031FDD0 0031CD10  48 13 1F A5 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 8031FDD4 0031CD14  7F C3 F3 78 */	mr r3, r30
/* 8031FDD8 0031CD18  38 80 00 00 */	li r4, 0
/* 8031FDDC 0031CD1C  38 A0 00 00 */	li r5, 0
/* 8031FDE0 0031CD20  38 C0 00 00 */	li r6, 0
/* 8031FDE4 0031CD24  38 E0 00 00 */	li r7, 0
/* 8031FDE8 0031CD28  48 13 24 9D */	bl setColorBG__Q26Screen9SceneBaseFUcUcUcUc
/* 8031FDEC 0031CD2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8031FDF0 0031CD30  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8031FDF4 0031CD34  83 C1 00 08 */	lwz r30, 8(r1)
/* 8031FDF8 0031CD38  7C 08 03 A6 */	mtlr r0
/* 8031FDFC 0031CD3C  38 21 00 10 */	addi r1, r1, 0x10
/* 8031FE00 0031CD40  4E 80 00 20 */	blr 

.global doStart__Q32og9newScreen11Challenge2PFPQ26Screen13StartSceneArg
doStart__Q32og9newScreen11Challenge2PFPQ26Screen13StartSceneArg:
/* 8031FE04 0031CD44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8031FE08 0031CD48  7C 08 02 A6 */	mflr r0
/* 8031FE0C 0031CD4C  3C A0 80 49 */	lis r5, lbl_8048EF88@ha
/* 8031FE10 0031CD50  90 01 00 14 */	stw r0, 0x14(r1)
/* 8031FE14 0031CD54  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8031FE18 0031CD58  7C 9F 23 78 */	mr r31, r4
/* 8031FE1C 0031CD5C  38 85 EF 88 */	addi r4, r5, lbl_8048EF88@l
/* 8031FE20 0031CD60  48 13 1A A5 */	bl searchObj__Q26Screen9SceneBaseFPc
/* 8031FE24 0031CD64  81 83 00 00 */	lwz r12, 0(r3)
/* 8031FE28 0031CD68  7F E4 FB 78 */	mr r4, r31
/* 8031FE2C 0031CD6C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8031FE30 0031CD70  7D 89 03 A6 */	mtctr r12
/* 8031FE34 0031CD74  4E 80 04 21 */	bctrl 
/* 8031FE38 0031CD78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8031FE3C 0031CD7C  38 60 00 01 */	li r3, 1
/* 8031FE40 0031CD80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8031FE44 0031CD84  7C 08 03 A6 */	mtlr r0
/* 8031FE48 0031CD88  38 21 00 10 */	addi r1, r1, 0x10
/* 8031FE4C 0031CD8C  4E 80 00 20 */	blr 

.global doUpdateActive__Q32og9newScreen11Challenge2PFv
doUpdateActive__Q32og9newScreen11Challenge2PFv:
/* 8031FE50 0031CD90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8031FE54 0031CD94  7C 08 02 A6 */	mflr r0
/* 8031FE58 0031CD98  90 01 00 14 */	stw r0, 0x14(r1)
/* 8031FE5C 0031CD9C  80 0D 93 E8 */	lwz r0, gameSystem__4Game@sda21(r13)
/* 8031FE60 0031CDA0  28 00 00 00 */	cmplwi r0, 0
/* 8031FE64 0031CDA4  41 82 00 14 */	beq lbl_8031FE78
/* 8031FE68 0031CDA8  80 83 02 1C */	lwz r4, 0x21c(r3)
/* 8031FE6C 0031CDAC  C0 24 00 5C */	lfs f1, 0x5c(r4)
/* 8031FE70 0031CDB0  38 84 00 68 */	addi r4, r4, 0x68
/* 8031FE74 0031CDB4  48 00 CF 01 */	bl updateCountDown__Q32og9newScreen13ChallengeBaseFfPQ32og6Screen21DispMemberDayEndCount
lbl_8031FE78:
/* 8031FE78 0031CDB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8031FE7C 0031CDBC  7C 08 03 A6 */	mtlr r0
/* 8031FE80 0031CDC0  38 21 00 10 */	addi r1, r1, 0x10
/* 8031FE84 0031CDC4  4E 80 00 20 */	blr 

.global startCountDown__Q32og9newScreen11Challenge2PFv
startCountDown__Q32og9newScreen11Challenge2PFv:
/* 8031FE88 0031CDC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8031FE8C 0031CDCC  7C 08 02 A6 */	mflr r0
/* 8031FE90 0031CDD0  3C 80 80 49 */	lis r4, lbl_8048EF9C@ha
/* 8031FE94 0031CDD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8031FE98 0031CDD8  38 84 EF 9C */	addi r4, r4, lbl_8048EF9C@l
/* 8031FE9C 0031CDDC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8031FEA0 0031CDE0  7C 7F 1B 78 */	mr r31, r3
/* 8031FEA4 0031CDE4  48 13 1A 21 */	bl searchObj__Q26Screen9SceneBaseFPc
/* 8031FEA8 0031CDE8  3C 80 80 49 */	lis r4, lbl_8048EFB0@ha
/* 8031FEAC 0031CDEC  7C 60 1B 78 */	mr r0, r3
/* 8031FEB0 0031CDF0  7F E3 FB 78 */	mr r3, r31
/* 8031FEB4 0031CDF4  38 84 EF B0 */	addi r4, r4, lbl_8048EFB0@l
/* 8031FEB8 0031CDF8  7C 1F 03 78 */	mr r31, r0
/* 8031FEBC 0031CDFC  48 13 1A 09 */	bl searchObj__Q26Screen9SceneBaseFPc
/* 8031FEC0 0031CE00  7C 60 1B 78 */	mr r0, r3
/* 8031FEC4 0031CE04  7F E3 FB 78 */	mr r3, r31
/* 8031FEC8 0031CE08  81 9F 00 00 */	lwz r12, 0(r31)
/* 8031FECC 0031CE0C  7C 1F 03 78 */	mr r31, r0
/* 8031FED0 0031CE10  38 80 00 00 */	li r4, 0
/* 8031FED4 0031CE14  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8031FED8 0031CE18  7D 89 03 A6 */	mtctr r12
/* 8031FEDC 0031CE1C  4E 80 04 21 */	bctrl 
/* 8031FEE0 0031CE20  7F E3 FB 78 */	mr r3, r31
/* 8031FEE4 0031CE24  38 80 00 00 */	li r4, 0
/* 8031FEE8 0031CE28  81 9F 00 00 */	lwz r12, 0(r31)
/* 8031FEEC 0031CE2C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8031FEF0 0031CE30  7D 89 03 A6 */	mtctr r12
/* 8031FEF4 0031CE34  4E 80 04 21 */	bctrl 
/* 8031FEF8 0031CE38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8031FEFC 0031CE3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8031FF00 0031CE40  7C 08 03 A6 */	mtlr r0
/* 8031FF04 0031CE44  38 21 00 10 */	addi r1, r1, 0x10
/* 8031FF08 0031CE48  4E 80 00 20 */	blr 

.global getResName__Q32og9newScreen11Challenge2PCFv
getResName__Q32og9newScreen11Challenge2PCFv:
/* 8031FF0C 0031CE4C  3C 60 80 49 */	lis r3, lbl_8048EFC4@ha
/* 8031FF10 0031CE50  38 63 EF C4 */	addi r3, r3, lbl_8048EFC4@l
/* 8031FF14 0031CE54  4E 80 00 20 */	blr 

.global getSceneType__Q32og9newScreen11Challenge2PFv
getSceneType__Q32og9newScreen11Challenge2PFv:
/* 8031FF18 0031CE58  38 60 27 24 */	li r3, 0x2724
/* 8031FF1C 0031CE5C  4E 80 00 20 */	blr 

.global getOwnerID__Q32og9newScreen11Challenge2PFv
getOwnerID__Q32og9newScreen11Challenge2PFv:
/* 8031FF20 0031CE60  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 8031FF24 0031CE64  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 8031FF28 0031CE68  4E 80 00 20 */	blr 

.global getMemberID__Q32og9newScreen11Challenge2PFv
getMemberID__Q32og9newScreen11Challenge2PFv:
/* 8031FF2C 0031CE6C  3C 80 41 4C */	lis r4, 0x414C3250@ha
/* 8031FF30 0031CE70  38 60 43 48 */	li r3, 0x4348
/* 8031FF34 0031CE74  38 84 32 50 */	addi r4, r4, 0x414C3250@l
/* 8031FF38 0031CE78  4E 80 00 20 */	blr 

.global isDrawInDemo__Q32og9newScreen11Challenge2PCFv
isDrawInDemo__Q32og9newScreen11Challenge2PCFv:
/* 8031FF3C 0031CE7C  38 60 00 00 */	li r3, 0
/* 8031FF40 0031CE80  4E 80 00 20 */	blr 
