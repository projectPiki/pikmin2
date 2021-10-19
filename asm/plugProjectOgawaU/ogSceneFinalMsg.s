.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global lbl_8048F338
lbl_8048F338:
	.4byte 0x4F626A46
	.4byte 0x696E616C
	.4byte 0x4D657373
	.4byte 0x61676520
	.4byte 0x73637265
	.4byte 0x656E0000
.global lbl_8048F350
lbl_8048F350:
	.4byte 0x7265735F
	.4byte 0x66696E61
	.4byte 0x6C5F6D65
	.4byte 0x73736167
	.4byte 0x652E737A
	.4byte 0x73000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og9newScreen8FinalMsgFv
__ct__Q32og9newScreen8FinalMsgFv:
/* 803258E8 00322828  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803258EC 0032282C  7C 08 02 A6 */	mflr r0
/* 803258F0 00322830  90 01 00 14 */	stw r0, 0x14(r1)
/* 803258F4 00322834  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803258F8 00322838  7C 7F 1B 78 */	mr r31, r3
/* 803258FC 0032283C  48 12 BE 95 */	bl __ct__Q26Screen9SceneBaseFv
/* 80325900 00322840  3C 80 80 4E */	lis r4, __vt__Q32og9newScreen8FinalMsg@ha
/* 80325904 00322844  7F E3 FB 78 */	mr r3, r31
/* 80325908 00322848  38 04 99 E0 */	addi r0, r4, __vt__Q32og9newScreen8FinalMsg@l
/* 8032590C 0032284C  90 1F 00 00 */	stw r0, 0(r31)
/* 80325910 00322850  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80325914 00322854  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80325918 00322858  7C 08 03 A6 */	mtlr r0
/* 8032591C 0032285C  38 21 00 10 */	addi r1, r1, 0x10
/* 80325920 00322860  4E 80 00 20 */	blr 

.global doUserCallBackFunc__Q32og9newScreen8FinalMsgFPQ28Resource10MgrCommand
doUserCallBackFunc__Q32og9newScreen8FinalMsgFPQ28Resource10MgrCommand:
/* 80325924 00322864  4E 80 00 20 */	blr 

.global doCreateObj__Q32og9newScreen8FinalMsgFP10JKRArchive
doCreateObj__Q32og9newScreen8FinalMsgFP10JKRArchive:
/* 80325928 00322868  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032592C 0032286C  7C 08 02 A6 */	mflr r0
/* 80325930 00322870  90 01 00 14 */	stw r0, 0x14(r1)
/* 80325934 00322874  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80325938 00322878  7C 9F 23 78 */	mr r31, r4
/* 8032593C 0032287C  93 C1 00 08 */	stw r30, 8(r1)
/* 80325940 00322880  7C 7E 1B 78 */	mr r30, r3
/* 80325944 00322884  38 60 00 5C */	li r3, 0x5c
/* 80325948 00322888  4B CF E5 5D */	bl __nw__FUl
/* 8032594C 0032288C  7C 64 1B 79 */	or. r4, r3, r3
/* 80325950 00322890  41 82 00 14 */	beq lbl_80325964
/* 80325954 00322894  3C 80 80 49 */	lis r4, lbl_8048F338@ha
/* 80325958 00322898  38 84 F3 38 */	addi r4, r4, lbl_8048F338@l
/* 8032595C 0032289C  4B FF F5 D1 */	bl __ct__Q32og9newScreen11ObjFinalMsgFPCc
/* 80325960 003228A0  7C 64 1B 78 */	mr r4, r3
lbl_80325964:
/* 80325964 003228A4  7F C3 F3 78 */	mr r3, r30
/* 80325968 003228A8  7F E5 FB 78 */	mr r5, r31
/* 8032596C 003228AC  48 12 C4 09 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 80325970 003228B0  7F C3 F3 78 */	mr r3, r30
/* 80325974 003228B4  38 80 00 00 */	li r4, 0
/* 80325978 003228B8  38 A0 00 00 */	li r5, 0
/* 8032597C 003228BC  38 C0 00 00 */	li r6, 0
/* 80325980 003228C0  38 E0 00 B4 */	li r7, 0xb4
/* 80325984 003228C4  48 12 C9 01 */	bl setColorBG__Q26Screen9SceneBaseFUcUcUcUc
/* 80325988 003228C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032598C 003228CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80325990 003228D0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80325994 003228D4  7C 08 03 A6 */	mtlr r0
/* 80325998 003228D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8032599C 003228DC  4E 80 00 20 */	blr 

.global doGetFinishState__Q32og9newScreen8FinalMsgFv
doGetFinishState__Q32og9newScreen8FinalMsgFv:
/* 803259A0 003228E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803259A4 003228E4  7C 08 02 A6 */	mflr r0
/* 803259A8 003228E8  3C 80 00 4F */	lis r4, 0x004F4741@ha
/* 803259AC 003228EC  3C C0 4C 4D */	lis r6, 0x4C4D5347@ha
/* 803259B0 003228F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803259B4 003228F4  3C A0 46 49 */	lis r5, 0x46494E41@ha
/* 803259B8 003228F8  38 84 47 41 */	addi r4, r4, 0x004F4741@l
/* 803259BC 003228FC  38 C6 53 47 */	addi r6, r6, 0x4C4D5347@l
/* 803259C0 00322900  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803259C4 00322904  38 A5 4E 41 */	addi r5, r5, 0x46494E41@l
/* 803259C8 00322908  93 C1 00 08 */	stw r30, 8(r1)
/* 803259CC 0032290C  3B C0 00 00 */	li r30, 0
/* 803259D0 00322910  83 E3 02 1C */	lwz r31, 0x21c(r3)
/* 803259D4 00322914  7F E3 FB 78 */	mr r3, r31
/* 803259D8 00322918  4B FE 99 45 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 803259DC 0032291C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803259E0 00322920  41 82 00 08 */	beq lbl_803259E8
/* 803259E4 00322924  83 DF 00 08 */	lwz r30, 8(r31)
lbl_803259E8:
/* 803259E8 00322928  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803259EC 0032292C  7F C3 F3 78 */	mr r3, r30
/* 803259F0 00322930  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803259F4 00322934  83 C1 00 08 */	lwz r30, 8(r1)
/* 803259F8 00322938  7C 08 03 A6 */	mtlr r0
/* 803259FC 0032293C  38 21 00 10 */	addi r1, r1, 0x10
/* 80325A00 00322940  4E 80 00 20 */	blr 

.global getResName__Q32og9newScreen8FinalMsgCFv
getResName__Q32og9newScreen8FinalMsgCFv:
/* 80325A04 00322944  3C 60 80 49 */	lis r3, lbl_8048F350@ha
/* 80325A08 00322948  38 63 F3 50 */	addi r3, r3, lbl_8048F350@l
/* 80325A0C 0032294C  4E 80 00 20 */	blr 

.global getSceneType__Q32og9newScreen8FinalMsgFv
getSceneType__Q32og9newScreen8FinalMsgFv:
/* 80325A10 00322950  38 60 27 26 */	li r3, 0x2726
/* 80325A14 00322954  4E 80 00 20 */	blr 

.global getOwnerID__Q32og9newScreen8FinalMsgFv
getOwnerID__Q32og9newScreen8FinalMsgFv:
/* 80325A18 00322958  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 80325A1C 0032295C  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 80325A20 00322960  4E 80 00 20 */	blr 

.global getMemberID__Q32og9newScreen8FinalMsgFv
getMemberID__Q32og9newScreen8FinalMsgFv:
/* 80325A24 00322964  3C 80 4C 4D */	lis r4, 0x4C4D5347@ha
/* 80325A28 00322968  3C 60 46 49 */	lis r3, 0x46494E41@ha
/* 80325A2C 0032296C  38 84 53 47 */	addi r4, r4, 0x4C4D5347@l
/* 80325A30 00322970  38 63 4E 41 */	addi r3, r3, 0x46494E41@l
/* 80325A34 00322974  4E 80 00 20 */	blr 

.global isUseBackupSceneInfo__Q32og9newScreen8FinalMsgFv
isUseBackupSceneInfo__Q32og9newScreen8FinalMsgFv:
/* 80325A38 00322978  38 60 00 01 */	li r3, 1
/* 80325A3C 0032297C  4E 80 00 20 */	blr 
