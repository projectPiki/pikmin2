.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og9newScreen9SMenuContFv
__ct__Q32og9newScreen9SMenuContFv:
/* 803304F0 0032D430  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803304F4 0032D434  7C 08 02 A6 */	mflr r0
/* 803304F8 0032D438  90 01 00 14 */	stw r0, 0x14(r1)
/* 803304FC 0032D43C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80330500 0032D440  7C 7F 1B 78 */	mr r31, r3
/* 80330504 0032D444  48 12 12 8D */	bl __ct__Q26Screen9SceneBaseFv
/* 80330508 0032D448  3C 80 80 4E */	lis r4, __vt__Q32og9newScreen14SceneSMenuBase@ha
/* 8033050C 0032D44C  3C 60 80 4E */	lis r3, __vt__Q32og9newScreen9SMenuCont@ha
/* 80330510 0032D450  38 04 85 EC */	addi r0, r4, __vt__Q32og9newScreen14SceneSMenuBase@l
/* 80330514 0032D454  38 80 00 01 */	li r4, 1
/* 80330518 0032D458  90 1F 00 00 */	stw r0, 0(r31)
/* 8033051C 0032D45C  38 03 A3 88 */	addi r0, r3, __vt__Q32og9newScreen9SMenuCont@l
/* 80330520 0032D460  7F E3 FB 78 */	mr r3, r31
/* 80330524 0032D464  90 9F 02 20 */	stw r4, 0x220(r31)
/* 80330528 0032D468  90 1F 00 00 */	stw r0, 0(r31)
/* 8033052C 0032D46C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80330530 0032D470  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80330534 0032D474  7C 08 03 A6 */	mtlr r0
/* 80330538 0032D478  38 21 00 10 */	addi r1, r1, 0x10
/* 8033053C 0032D47C  4E 80 00 20 */	blr 

.global doConfirmSetScene__Q32og9newScreen9SMenuContFRQ26Screen11SetSceneArg
doConfirmSetScene__Q32og9newScreen9SMenuContFRQ26Screen11SetSceneArg:
/* 80330540 0032D480  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80330544 0032D484  7C 08 02 A6 */	mflr r0
/* 80330548 0032D488  7C 83 23 78 */	mr r3, r4
/* 8033054C 0032D48C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80330550 0032D490  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80330554 0032D494  3B E0 00 00 */	li r31, 0
/* 80330558 0032D498  81 84 00 00 */	lwz r12, 0(r4)
/* 8033055C 0032D49C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80330560 0032D4A0  7D 89 03 A6 */	mtctr r12
/* 80330564 0032D4A4  4E 80 04 21 */	bctrl 
/* 80330568 0032D4A8  38 03 D8 F0 */	addi r0, r3, -10000
/* 8033056C 0032D4AC  28 00 00 17 */	cmplwi r0, 0x17
/* 80330570 0032D4B0  41 81 00 20 */	bgt lbl_80330590
/* 80330574 0032D4B4  3C 60 80 4E */	lis r3, lbl_804DA328@ha
/* 80330578 0032D4B8  54 00 10 3A */	slwi r0, r0, 2
/* 8033057C 0032D4BC  38 63 A3 28 */	addi r3, r3, lbl_804DA328@l
/* 80330580 0032D4C0  7C 03 00 2E */	lwzx r0, r3, r0
/* 80330584 0032D4C4  7C 09 03 A6 */	mtctr r0
/* 80330588 0032D4C8  4E 80 04 20 */	bctr 
/* 8033058C 0032D4CC  3B E0 00 01 */	li r31, 1
lbl_80330590:
/* 80330590 0032D4D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80330594 0032D4D4  7F E3 FB 78 */	mr r3, r31
/* 80330598 0032D4D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033059C 0032D4DC  7C 08 03 A6 */	mtlr r0
/* 803305A0 0032D4E0  38 21 00 10 */	addi r1, r1, 0x10
/* 803305A4 0032D4E4  4E 80 00 20 */	blr 

.global doSetBackupScene__Q32og9newScreen9SMenuContFRQ26Screen11SetSceneArg
doSetBackupScene__Q32og9newScreen9SMenuContFRQ26Screen11SetSceneArg:
/* 803305A8 0032D4E8  38 00 00 00 */	li r0, 0
/* 803305AC 0032D4EC  98 04 00 09 */	stb r0, 9(r4)
/* 803305B0 0032D4F0  4E 80 00 20 */	blr 

.global doUserCallBackFunc__Q32og9newScreen9SMenuContFPQ28Resource10MgrCommand
doUserCallBackFunc__Q32og9newScreen9SMenuContFPQ28Resource10MgrCommand:
/* 803305B4 0032D4F4  4E 80 00 20 */	blr 

.global doCreateObj__Q32og9newScreen9SMenuContFP10JKRArchive
doCreateObj__Q32og9newScreen9SMenuContFP10JKRArchive:
/* 803305B8 0032D4F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803305BC 0032D4FC  7C 08 02 A6 */	mflr r0
/* 803305C0 0032D500  90 01 00 14 */	stw r0, 0x14(r1)
/* 803305C4 0032D504  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803305C8 0032D508  7C 9F 23 78 */	mr r31, r4
/* 803305CC 0032D50C  93 C1 00 08 */	stw r30, 8(r1)
/* 803305D0 0032D510  7C 7E 1B 78 */	mr r30, r3
/* 803305D4 0032D514  38 60 00 BC */	li r3, 0xbc
/* 803305D8 0032D518  4B CF 38 CD */	bl __nw__FUl
/* 803305DC 0032D51C  7C 64 1B 79 */	or. r4, r3, r3
/* 803305E0 0032D520  41 82 00 14 */	beq lbl_803305F4
/* 803305E4 0032D524  3C 80 80 49 */	lis r4, lbl_8048F7A0@ha
/* 803305E8 0032D528  38 84 F7 A0 */	addi r4, r4, lbl_8048F7A0@l
/* 803305EC 0032D52C  48 00 00 6D */	bl __ct__Q32og9newScreen12ObjSMenuContFPCc
/* 803305F0 0032D530  7C 64 1B 78 */	mr r4, r3
lbl_803305F4:
/* 803305F4 0032D534  7F C3 F3 78 */	mr r3, r30
/* 803305F8 0032D538  7F E5 FB 78 */	mr r5, r31
/* 803305FC 0032D53C  48 12 17 79 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 80330600 0032D540  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80330604 0032D544  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80330608 0032D548  83 C1 00 08 */	lwz r30, 8(r1)
/* 8033060C 0032D54C  7C 08 03 A6 */	mtlr r0
/* 80330610 0032D550  38 21 00 10 */	addi r1, r1, 0x10
/* 80330614 0032D554  4E 80 00 20 */	blr 

.global doUpdateActive__Q32og9newScreen9SMenuContFv
doUpdateActive__Q32og9newScreen9SMenuContFv:
/* 80330618 0032D558  4E 80 00 20 */	blr 

.global getResName__Q32og9newScreen9SMenuContCFv
getResName__Q32og9newScreen9SMenuContCFv:
/* 8033061C 0032D55C  3C 60 80 49 */	lis r3, lbl_8048F7B4@ha
/* 80330620 0032D560  38 63 F7 B4 */	addi r3, r3, lbl_8048F7B4@l
/* 80330624 0032D564  4E 80 00 20 */	blr 

.global getSceneType__Q32og9newScreen9SMenuContFv
getSceneType__Q32og9newScreen9SMenuContFv:
/* 80330628 0032D568  38 60 27 2B */	li r3, 0x272b
/* 8033062C 0032D56C  4E 80 00 20 */	blr 

.global getOwnerID__Q32og9newScreen9SMenuContFv
getOwnerID__Q32og9newScreen9SMenuContFv:
/* 80330630 0032D570  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 80330634 0032D574  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 80330638 0032D578  4E 80 00 20 */	blr 

.global getMemberID__Q32og9newScreen9SMenuContFv
getMemberID__Q32og9newScreen9SMenuContFv:
/* 8033063C 0032D57C  3C 80 43 4F */	lis r4, 0x434F4E54@ha
/* 80330640 0032D580  3C 60 00 53 */	lis r3, 0x00534D5F@ha
/* 80330644 0032D584  38 84 4E 54 */	addi r4, r4, 0x434F4E54@l
/* 80330648 0032D588  38 63 4D 5F */	addi r3, r3, 0x00534D5F@l
/* 8033064C 0032D58C  4E 80 00 20 */	blr 

.global isUseBackupSceneInfo__Q32og9newScreen9SMenuContFv
isUseBackupSceneInfo__Q32og9newScreen9SMenuContFv:
/* 80330650 0032D590  38 60 00 01 */	li r3, 1
/* 80330654 0032D594  4E 80 00 20 */	blr 
