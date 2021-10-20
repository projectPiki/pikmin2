.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global lbl_8048EB78
lbl_8048EB78:
	.4byte 0x73706563
	.4byte 0x69616C20
	.4byte 0x6974656D
	.4byte 0x20736372
	.4byte 0x65656E00
.global lbl_8048EB8C
lbl_8048EB8C:
	.4byte 0x7265735F
	.4byte 0x73706563
	.4byte 0x69616C5F
	.4byte 0x6974656D
	.4byte 0x2E737A73
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q32og9newScreen11SpecialItem
__vt__Q32og9newScreen11SpecialItem:
	.4byte 0
	.4byte 0
	.4byte getSceneType__Q32og9newScreen11SpecialItemFv
	.4byte getOwnerID__Q32og9newScreen11SpecialItemFv
	.4byte getMemberID__Q32og9newScreen11SpecialItemFv
	.4byte isUseBackupSceneInfo__Q32og9newScreen11SpecialItemFv
	.4byte isDrawInDemo__Q26Screen9SceneBaseCFv
	.4byte getResName__Q32og9newScreen11SpecialItemCFv
	.4byte doCreateObj__Q32og9newScreen11SpecialItemFP10JKRArchive
	.4byte doUserCallBackFunc__Q32og9newScreen11SpecialItemFPQ28Resource10MgrCommand
	.4byte setPort__Q26Screen9SceneBaseFR8Graphics
	.4byte doUpdateActive__Q26Screen9SceneBaseFv
	.4byte doConfirmSetScene__Q32og9newScreen11SpecialItemFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg
	.4byte doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	.4byte setDefaultDispMember__Q26Screen9SceneBaseFv
	.4byte doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doGetFinishState__Q26Screen9SceneBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og9newScreen11SpecialItemFv
__ct__Q32og9newScreen11SpecialItemFv:
/* 8031A2A0 003171E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8031A2A4 003171E4  7C 08 02 A6 */	mflr r0
/* 8031A2A8 003171E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8031A2AC 003171EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8031A2B0 003171F0  7C 7F 1B 78 */	mr r31, r3
/* 8031A2B4 003171F4  48 13 74 DD */	bl __ct__Q26Screen9SceneBaseFv
/* 8031A2B8 003171F8  3C 80 80 4E */	lis r4, __vt__Q32og9newScreen11SpecialItem@ha
/* 8031A2BC 003171FC  7F E3 FB 78 */	mr r3, r31
/* 8031A2C0 00317200  38 04 8D 80 */	addi r0, r4, __vt__Q32og9newScreen11SpecialItem@l
/* 8031A2C4 00317204  90 1F 00 00 */	stw r0, 0(r31)
/* 8031A2C8 00317208  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8031A2CC 0031720C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8031A2D0 00317210  7C 08 03 A6 */	mtlr r0
/* 8031A2D4 00317214  38 21 00 10 */	addi r1, r1, 0x10
/* 8031A2D8 00317218  4E 80 00 20 */	blr 

.global doUserCallBackFunc__Q32og9newScreen11SpecialItemFPQ28Resource10MgrCommand
doUserCallBackFunc__Q32og9newScreen11SpecialItemFPQ28Resource10MgrCommand:
/* 8031A2DC 0031721C  4E 80 00 20 */	blr 

.global doCreateObj__Q32og9newScreen11SpecialItemFP10JKRArchive
doCreateObj__Q32og9newScreen11SpecialItemFP10JKRArchive:
/* 8031A2E0 00317220  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8031A2E4 00317224  7C 08 02 A6 */	mflr r0
/* 8031A2E8 00317228  90 01 00 14 */	stw r0, 0x14(r1)
/* 8031A2EC 0031722C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8031A2F0 00317230  7C 9F 23 78 */	mr r31, r4
/* 8031A2F4 00317234  93 C1 00 08 */	stw r30, 8(r1)
/* 8031A2F8 00317238  7C 7E 1B 78 */	mr r30, r3
/* 8031A2FC 0031723C  38 60 00 60 */	li r3, 0x60
/* 8031A300 00317240  4B D0 9B A5 */	bl __nw__FUl
/* 8031A304 00317244  7C 64 1B 79 */	or. r4, r3, r3
/* 8031A308 00317248  41 82 00 14 */	beq lbl_8031A31C
/* 8031A30C 0031724C  3C 80 80 49 */	lis r4, lbl_8048EB78@ha
/* 8031A310 00317250  38 84 EB 78 */	addi r4, r4, lbl_8048EB78@l
/* 8031A314 00317254  4B FF F9 B1 */	bl __ct__Q32og9newScreen14ObjSpecialItemFPCc
/* 8031A318 00317258  7C 64 1B 78 */	mr r4, r3
lbl_8031A31C:
/* 8031A31C 0031725C  7F C3 F3 78 */	mr r3, r30
/* 8031A320 00317260  7F E5 FB 78 */	mr r5, r31
/* 8031A324 00317264  48 13 7A 51 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 8031A328 00317268  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8031A32C 0031726C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8031A330 00317270  83 C1 00 08 */	lwz r30, 8(r1)
/* 8031A334 00317274  7C 08 03 A6 */	mtlr r0
/* 8031A338 00317278  38 21 00 10 */	addi r1, r1, 0x10
/* 8031A33C 0031727C  4E 80 00 20 */	blr 

.global doConfirmSetScene__Q32og9newScreen11SpecialItemFRQ26Screen11SetSceneArg
doConfirmSetScene__Q32og9newScreen11SpecialItemFRQ26Screen11SetSceneArg:
/* 8031A340 00317280  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8031A344 00317284  7C 08 02 A6 */	mflr r0
/* 8031A348 00317288  7C 83 23 78 */	mr r3, r4
/* 8031A34C 0031728C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8031A350 00317290  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8031A354 00317294  3B E0 00 00 */	li r31, 0
/* 8031A358 00317298  81 84 00 00 */	lwz r12, 0(r4)
/* 8031A35C 0031729C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8031A360 003172A0  7D 89 03 A6 */	mtctr r12
/* 8031A364 003172A4  4E 80 04 21 */	bctrl 
/* 8031A368 003172A8  2C 03 27 23 */	cmpwi r3, 0x2723
/* 8031A36C 003172AC  41 82 00 08 */	beq lbl_8031A374
/* 8031A370 003172B0  3B E0 00 01 */	li r31, 1
lbl_8031A374:
/* 8031A374 003172B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8031A378 003172B8  7F E3 FB 78 */	mr r3, r31
/* 8031A37C 003172BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8031A380 003172C0  7C 08 03 A6 */	mtlr r0
/* 8031A384 003172C4  38 21 00 10 */	addi r1, r1, 0x10
/* 8031A388 003172C8  4E 80 00 20 */	blr 

.global getResName__Q32og9newScreen11SpecialItemCFv
getResName__Q32og9newScreen11SpecialItemCFv:
/* 8031A38C 003172CC  3C 60 80 49 */	lis r3, lbl_8048EB8C@ha
/* 8031A390 003172D0  38 63 EB 8C */	addi r3, r3, lbl_8048EB8C@l
/* 8031A394 003172D4  4E 80 00 20 */	blr 

.global getSceneType__Q32og9newScreen11SpecialItemFv
getSceneType__Q32og9newScreen11SpecialItemFv:
/* 8031A398 003172D8  38 60 27 23 */	li r3, 0x2723
/* 8031A39C 003172DC  4E 80 00 20 */	blr 

.global getOwnerID__Q32og9newScreen11SpecialItemFv
getOwnerID__Q32og9newScreen11SpecialItemFv:
/* 8031A3A0 003172E0  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 8031A3A4 003172E4  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 8031A3A8 003172E8  4E 80 00 20 */	blr 

.global getMemberID__Q32og9newScreen11SpecialItemFv
getMemberID__Q32og9newScreen11SpecialItemFv:
/* 8031A3AC 003172EC  3C 80 49 54 */	lis r4, 0x4954454D@ha
/* 8031A3B0 003172F0  3C 60 00 53 */	lis r3, 0x0053505F@ha
/* 8031A3B4 003172F4  38 84 45 4D */	addi r4, r4, 0x4954454D@l
/* 8031A3B8 003172F8  38 63 50 5F */	addi r3, r3, 0x0053505F@l
/* 8031A3BC 003172FC  4E 80 00 20 */	blr 

.global isUseBackupSceneInfo__Q32og9newScreen11SpecialItemFv
isUseBackupSceneInfo__Q32og9newScreen11SpecialItemFv:
/* 8031A3C0 00317300  38 60 00 01 */	li r3, 1
/* 8031A3C4 00317304  4E 80 00 20 */	blr 
