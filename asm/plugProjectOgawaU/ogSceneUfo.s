.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global lbl_8048F2C8
lbl_8048F2C8:
	.4byte 0x75666F20
	.4byte 0x6D656E75
	.4byte 0x20736372
	.4byte 0x65656E00
.global lbl_8048F2D8
lbl_8048F2D8:
	.4byte 0x7265735F
	.4byte 0x75666F2E
	.4byte 0x737A7300

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og9newScreen7UfoMenuFv
__ct__Q32og9newScreen7UfoMenuFv:
/* 803248F4 00321834  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803248F8 00321838  7C 08 02 A6 */	mflr r0
/* 803248FC 0032183C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80324900 00321840  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80324904 00321844  7C 7F 1B 78 */	mr r31, r3
/* 80324908 00321848  48 12 CE 89 */	bl __ct__Q26Screen9SceneBaseFv
/* 8032490C 0032184C  3C 80 80 4E */	lis r4, __vt__Q32og9newScreen7UfoMenu@ha
/* 80324910 00321850  7F E3 FB 78 */	mr r3, r31
/* 80324914 00321854  38 04 98 50 */	addi r0, r4, __vt__Q32og9newScreen7UfoMenu@l
/* 80324918 00321858  90 1F 00 00 */	stw r0, 0(r31)
/* 8032491C 0032185C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80324920 00321860  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80324924 00321864  7C 08 03 A6 */	mtlr r0
/* 80324928 00321868  38 21 00 10 */	addi r1, r1, 0x10
/* 8032492C 0032186C  4E 80 00 20 */	blr 

.global doUserCallBackFunc__Q32og9newScreen7UfoMenuFPQ28Resource10MgrCommand
doUserCallBackFunc__Q32og9newScreen7UfoMenuFPQ28Resource10MgrCommand:
/* 80324930 00321870  4E 80 00 20 */	blr 

.global doCreateObj__Q32og9newScreen7UfoMenuFP10JKRArchive
doCreateObj__Q32og9newScreen7UfoMenuFP10JKRArchive:
/* 80324934 00321874  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80324938 00321878  7C 08 02 A6 */	mflr r0
/* 8032493C 0032187C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80324940 00321880  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80324944 00321884  7C 9F 23 78 */	mr r31, r4
/* 80324948 00321888  93 C1 00 08 */	stw r30, 8(r1)
/* 8032494C 0032188C  7C 7E 1B 78 */	mr r30, r3
/* 80324950 00321890  38 60 00 90 */	li r3, 0x90
/* 80324954 00321894  4B CF F5 51 */	bl __nw__FUl
/* 80324958 00321898  7C 64 1B 79 */	or. r4, r3, r3
/* 8032495C 0032189C  41 82 00 14 */	beq lbl_80324970
/* 80324960 003218A0  3C 80 80 49 */	lis r4, lbl_8048F2C8@ha
/* 80324964 003218A4  38 84 F2 C8 */	addi r4, r4, lbl_8048F2C8@l
/* 80324968 003218A8  4B FF EE 31 */	bl __ct__Q32og9newScreen10ObjUfoMenuFPCc
/* 8032496C 003218AC  7C 64 1B 78 */	mr r4, r3
lbl_80324970:
/* 80324970 003218B0  7F C3 F3 78 */	mr r3, r30
/* 80324974 003218B4  7F E5 FB 78 */	mr r5, r31
/* 80324978 003218B8  48 12 D3 FD */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 8032497C 003218BC  7F C3 F3 78 */	mr r3, r30
/* 80324980 003218C0  38 80 00 00 */	li r4, 0
/* 80324984 003218C4  38 A0 00 00 */	li r5, 0
/* 80324988 003218C8  38 C0 00 00 */	li r6, 0
/* 8032498C 003218CC  38 E0 00 A0 */	li r7, 0xa0
/* 80324990 003218D0  48 12 D8 F5 */	bl setColorBG__Q26Screen9SceneBaseFUcUcUcUc
/* 80324994 003218D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80324998 003218D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8032499C 003218DC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803249A0 003218E0  7C 08 03 A6 */	mtlr r0
/* 803249A4 003218E4  38 21 00 10 */	addi r1, r1, 0x10
/* 803249A8 003218E8  4E 80 00 20 */	blr 

.global doConfirmSetScene__Q32og9newScreen7UfoMenuFRQ26Screen11SetSceneArg
doConfirmSetScene__Q32og9newScreen7UfoMenuFRQ26Screen11SetSceneArg:
/* 803249AC 003218EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803249B0 003218F0  7C 08 02 A6 */	mflr r0
/* 803249B4 003218F4  7C 83 23 78 */	mr r3, r4
/* 803249B8 003218F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803249BC 003218FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803249C0 00321900  3B E0 00 00 */	li r31, 0
/* 803249C4 00321904  81 84 00 00 */	lwz r12, 0(r4)
/* 803249C8 00321908  81 8C 00 08 */	lwz r12, 8(r12)
/* 803249CC 0032190C  7D 89 03 A6 */	mtctr r12
/* 803249D0 00321910  4E 80 04 21 */	bctrl 
/* 803249D4 00321914  2C 03 27 17 */	cmpwi r3, 0x2717
/* 803249D8 00321918  40 80 00 10 */	bge lbl_803249E8
/* 803249DC 0032191C  2C 03 27 10 */	cmpwi r3, 0x2710
/* 803249E0 00321920  41 82 00 10 */	beq lbl_803249F0
/* 803249E4 00321924  48 00 00 10 */	b lbl_803249F4
lbl_803249E8:
/* 803249E8 00321928  2C 03 27 19 */	cmpwi r3, 0x2719
/* 803249EC 0032192C  40 80 00 08 */	bge lbl_803249F4
lbl_803249F0:
/* 803249F0 00321930  3B E0 00 01 */	li r31, 1
lbl_803249F4:
/* 803249F4 00321934  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803249F8 00321938  7F E3 FB 78 */	mr r3, r31
/* 803249FC 0032193C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80324A00 00321940  7C 08 03 A6 */	mtlr r0
/* 80324A04 00321944  38 21 00 10 */	addi r1, r1, 0x10
/* 80324A08 00321948  4E 80 00 20 */	blr 

.global doSetBackupScene__Q32og9newScreen7UfoMenuFRQ26Screen11SetSceneArg
doSetBackupScene__Q32og9newScreen7UfoMenuFRQ26Screen11SetSceneArg:
/* 80324A0C 0032194C  38 00 00 00 */	li r0, 0
/* 80324A10 00321950  98 04 00 09 */	stb r0, 9(r4)
/* 80324A14 00321954  4E 80 00 20 */	blr 

.global getResName__Q32og9newScreen7UfoMenuCFv
getResName__Q32og9newScreen7UfoMenuCFv:
/* 80324A18 00321958  3C 60 80 49 */	lis r3, lbl_8048F2D8@ha
/* 80324A1C 0032195C  38 63 F2 D8 */	addi r3, r3, lbl_8048F2D8@l
/* 80324A20 00321960  4E 80 00 20 */	blr 

.global getSceneType__Q32og9newScreen7UfoMenuFv
getSceneType__Q32og9newScreen7UfoMenuFv:
/* 80324A24 00321964  38 60 27 19 */	li r3, 0x2719
/* 80324A28 00321968  4E 80 00 20 */	blr 

.global getOwnerID__Q32og9newScreen7UfoMenuFv
getOwnerID__Q32og9newScreen7UfoMenuFv:
/* 80324A2C 0032196C  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 80324A30 00321970  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 80324A34 00321974  4E 80 00 20 */	blr 

.global getMemberID__Q32og9newScreen7UfoMenuFv
getMemberID__Q32og9newScreen7UfoMenuFv:
/* 80324A38 00321978  3C 80 4D 45 */	lis r4, 0x4D454E55@ha
/* 80324A3C 0032197C  3C 60 00 55 */	lis r3, 0x0055464F@ha
/* 80324A40 00321980  38 84 4E 55 */	addi r4, r4, 0x4D454E55@l
/* 80324A44 00321984  38 63 46 4F */	addi r3, r3, 0x0055464F@l
/* 80324A48 00321988  4E 80 00 20 */	blr 

.global isUseBackupSceneInfo__Q32og9newScreen7UfoMenuFv
isUseBackupSceneInfo__Q32og9newScreen7UfoMenuFv:
/* 80324A4C 0032198C  38 60 00 01 */	li r3, 1
/* 80324A50 00321990  4E 80 00 20 */	blr 
