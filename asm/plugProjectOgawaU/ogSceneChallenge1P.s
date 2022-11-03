.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_8048F4D0
lbl_8048F4D0:
	.4byte 0x6368616C
	.4byte 0x6C656E67
	.4byte 0x65315020
	.4byte 0x73637265
	.4byte 0x656E0000
.global lbl_8048F4E4
lbl_8048F4E4:
	.4byte 0x6368616C
	.4byte 0x6C656E67
	.4byte 0x65456E64
	.4byte 0x436F756E
	.4byte 0x74000000
.global lbl_8048F4F8
lbl_8048F4F8:
	.4byte 0x7265735F
	.4byte 0x6368616C
	.4byte 0x6C656E67
	.4byte 0x655F3170
	.4byte 0x2E737A73
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q32og9newScreen11Challenge1P
__vt__Q32og9newScreen11Challenge1P:
	.4byte 0
	.4byte 0
	.4byte getSceneType__Q32og9newScreen11Challenge1PFv
	.4byte getOwnerID__Q32og9newScreen11Challenge1PFv
	.4byte getMemberID__Q32og9newScreen11Challenge1PFv
	.4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
	.4byte isDrawInDemo__Q32og9newScreen11Challenge1PCFv
	.4byte getResName__Q32og9newScreen11Challenge1PCFv
	.4byte doCreateObj__Q32og9newScreen11Challenge1PFP10JKRArchive
	.4byte doUserCallBackFunc__Q32og9newScreen11Challenge1PFPQ28Resource10MgrCommand
	.4byte setPort__Q26Screen9SceneBaseFR8Graphics
	.4byte doUpdateActive__Q32og9newScreen11Challenge1PFv
	.4byte doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg
	.4byte doStart__Q32og9newScreen11Challenge1PFPQ26Screen13StartSceneArg
	.4byte doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	.4byte setDefaultDispMember__Q26Screen9SceneBaseFv
	.4byte doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doGetFinishState__Q26Screen9SceneBaseFv
	.4byte startCountDown__Q32og9newScreen11Challenge1PFv
	.4byte 0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og9newScreen11Challenge1PFv
__ct__Q32og9newScreen11Challenge1PFv:
/* 80328C30 00325B70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80328C34 00325B74  7C 08 02 A6 */	mflr r0
/* 80328C38 00325B78  90 01 00 14 */	stw r0, 0x14(r1)
/* 80328C3C 00325B7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80328C40 00325B80  7C 7F 1B 78 */	mr r31, r3
/* 80328C44 00325B84  48 00 40 ED */	bl __ct__Q32og9newScreen13ChallengeBaseFv
/* 80328C48 00325B88  3C 80 80 4E */	lis r4, __vt__Q32og9newScreen11Challenge1P@ha
/* 80328C4C 00325B8C  7F E3 FB 78 */	mr r3, r31
/* 80328C50 00325B90  38 04 9B 90 */	addi r0, r4, __vt__Q32og9newScreen11Challenge1P@l
/* 80328C54 00325B94  90 1F 00 00 */	stw r0, 0(r31)
/* 80328C58 00325B98  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80328C5C 00325B9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80328C60 00325BA0  7C 08 03 A6 */	mtlr r0
/* 80328C64 00325BA4  38 21 00 10 */	addi r1, r1, 0x10
/* 80328C68 00325BA8  4E 80 00 20 */	blr 

.global doUserCallBackFunc__Q32og9newScreen11Challenge1PFPQ28Resource10MgrCommand
doUserCallBackFunc__Q32og9newScreen11Challenge1PFPQ28Resource10MgrCommand:
/* 80328C6C 00325BAC  4E 80 00 20 */	blr 

.global doCreateObj__Q32og9newScreen11Challenge1PFP10JKRArchive
doCreateObj__Q32og9newScreen11Challenge1PFP10JKRArchive:
/* 80328C70 00325BB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80328C74 00325BB4  7C 08 02 A6 */	mflr r0
/* 80328C78 00325BB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80328C7C 00325BBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80328C80 00325BC0  7C 9F 23 78 */	mr r31, r4
/* 80328C84 00325BC4  93 C1 00 08 */	stw r30, 8(r1)
/* 80328C88 00325BC8  7C 7E 1B 78 */	mr r30, r3
/* 80328C8C 00325BCC  38 60 00 7C */	li r3, 0x7c
/* 80328C90 00325BD0  4B CF B2 15 */	bl __nw__FUl
/* 80328C94 00325BD4  7C 64 1B 79 */	or. r4, r3, r3
/* 80328C98 00325BD8  41 82 00 14 */	beq .L_80328CAC
/* 80328C9C 00325BDC  3C 80 80 49 */	lis r4, lbl_8048F4D0@ha
/* 80328CA0 00325BE0  38 84 F4 D0 */	addi r4, r4, lbl_8048F4D0@l
/* 80328CA4 00325BE4  4B FF F0 A5 */	bl __ct__Q32og9newScreen14ObjChallenge1PFPCc
/* 80328CA8 00325BE8  7C 64 1B 78 */	mr r4, r3
.L_80328CAC:
/* 80328CAC 00325BEC  7F C3 F3 78 */	mr r3, r30
/* 80328CB0 00325BF0  7F E5 FB 78 */	mr r5, r31
/* 80328CB4 00325BF4  48 12 90 C1 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 80328CB8 00325BF8  38 60 00 D4 */	li r3, 0xd4
/* 80328CBC 00325BFC  4B CF B1 E9 */	bl __nw__FUl
/* 80328CC0 00325C00  7C 64 1B 79 */	or. r4, r3, r3
/* 80328CC4 00325C04  41 82 00 0C */	beq .L_80328CD0
/* 80328CC8 00325C08  48 01 C7 4D */	bl __ct__Q28Morimura18TChallengeEndCountFv
/* 80328CCC 00325C0C  7C 64 1B 78 */	mr r4, r3
.L_80328CD0:
/* 80328CD0 00325C10  7F C3 F3 78 */	mr r3, r30
/* 80328CD4 00325C14  7F E5 FB 78 */	mr r5, r31
/* 80328CD8 00325C18  48 12 90 9D */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 80328CDC 00325C1C  7F C3 F3 78 */	mr r3, r30
/* 80328CE0 00325C20  38 80 00 00 */	li r4, 0
/* 80328CE4 00325C24  38 A0 00 00 */	li r5, 0
/* 80328CE8 00325C28  38 C0 00 00 */	li r6, 0
/* 80328CEC 00325C2C  38 E0 00 00 */	li r7, 0
/* 80328CF0 00325C30  48 12 95 95 */	bl setColorBG__Q26Screen9SceneBaseFUcUcUcUc
/* 80328CF4 00325C34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80328CF8 00325C38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80328CFC 00325C3C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80328D00 00325C40  7C 08 03 A6 */	mtlr r0
/* 80328D04 00325C44  38 21 00 10 */	addi r1, r1, 0x10
/* 80328D08 00325C48  4E 80 00 20 */	blr 

.global doStart__Q32og9newScreen11Challenge1PFPQ26Screen13StartSceneArg
doStart__Q32og9newScreen11Challenge1PFPQ26Screen13StartSceneArg:
/* 80328D0C 00325C4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80328D10 00325C50  7C 08 02 A6 */	mflr r0
/* 80328D14 00325C54  3C A0 80 49 */	lis r5, lbl_8048F4D0@ha
/* 80328D18 00325C58  90 01 00 14 */	stw r0, 0x14(r1)
/* 80328D1C 00325C5C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80328D20 00325C60  7C 9F 23 78 */	mr r31, r4
/* 80328D24 00325C64  38 85 F4 D0 */	addi r4, r5, lbl_8048F4D0@l
/* 80328D28 00325C68  48 12 8B 9D */	bl searchObj__Q26Screen9SceneBaseFPc
/* 80328D2C 00325C6C  81 83 00 00 */	lwz r12, 0(r3)
/* 80328D30 00325C70  7F E4 FB 78 */	mr r4, r31
/* 80328D34 00325C74  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80328D38 00325C78  7D 89 03 A6 */	mtctr r12
/* 80328D3C 00325C7C  4E 80 04 21 */	bctrl 
/* 80328D40 00325C80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80328D44 00325C84  38 60 00 01 */	li r3, 1
/* 80328D48 00325C88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80328D4C 00325C8C  7C 08 03 A6 */	mtlr r0
/* 80328D50 00325C90  38 21 00 10 */	addi r1, r1, 0x10
/* 80328D54 00325C94  4E 80 00 20 */	blr 

.global doUpdateActive__Q32og9newScreen11Challenge1PFv
doUpdateActive__Q32og9newScreen11Challenge1PFv:
/* 80328D58 00325C98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80328D5C 00325C9C  7C 08 02 A6 */	mflr r0
/* 80328D60 00325CA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80328D64 00325CA4  80 0D 93 E8 */	lwz r0, gameSystem__4Game@sda21(r13)
/* 80328D68 00325CA8  28 00 00 00 */	cmplwi r0, 0
/* 80328D6C 00325CAC  41 82 00 14 */	beq .L_80328D80
/* 80328D70 00325CB0  80 83 02 1C */	lwz r4, 0x21c(r3)
/* 80328D74 00325CB4  C0 24 00 5C */	lfs f1, 0x5c(r4)
/* 80328D78 00325CB8  38 84 00 68 */	addi r4, r4, 0x68
/* 80328D7C 00325CBC  48 00 3F F9 */	bl updateCountDown__Q32og9newScreen13ChallengeBaseFfPQ32og6Screen21DispMemberDayEndCount
.L_80328D80:
/* 80328D80 00325CC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80328D84 00325CC4  7C 08 03 A6 */	mtlr r0
/* 80328D88 00325CC8  38 21 00 10 */	addi r1, r1, 0x10
/* 80328D8C 00325CCC  4E 80 00 20 */	blr 

.global startCountDown__Q32og9newScreen11Challenge1PFv
startCountDown__Q32og9newScreen11Challenge1PFv:
/* 80328D90 00325CD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80328D94 00325CD4  7C 08 02 A6 */	mflr r0
/* 80328D98 00325CD8  3C 80 80 49 */	lis r4, lbl_8048F4E4@ha
/* 80328D9C 00325CDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80328DA0 00325CE0  38 84 F4 E4 */	addi r4, r4, lbl_8048F4E4@l
/* 80328DA4 00325CE4  48 12 8B 21 */	bl searchObj__Q26Screen9SceneBaseFPc
/* 80328DA8 00325CE8  81 83 00 00 */	lwz r12, 0(r3)
/* 80328DAC 00325CEC  38 80 00 00 */	li r4, 0
/* 80328DB0 00325CF0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80328DB4 00325CF4  7D 89 03 A6 */	mtctr r12
/* 80328DB8 00325CF8  4E 80 04 21 */	bctrl 
/* 80328DBC 00325CFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80328DC0 00325D00  7C 08 03 A6 */	mtlr r0
/* 80328DC4 00325D04  38 21 00 10 */	addi r1, r1, 0x10
/* 80328DC8 00325D08  4E 80 00 20 */	blr 

.global getResName__Q32og9newScreen11Challenge1PCFv
getResName__Q32og9newScreen11Challenge1PCFv:
/* 80328DCC 00325D0C  3C 60 80 49 */	lis r3, lbl_8048F4F8@ha
/* 80328DD0 00325D10  38 63 F4 F8 */	addi r3, r3, lbl_8048F4F8@l
/* 80328DD4 00325D14  4E 80 00 20 */	blr 

.global getSceneType__Q32og9newScreen11Challenge1PFv
getSceneType__Q32og9newScreen11Challenge1PFv:
/* 80328DD8 00325D18  38 60 27 27 */	li r3, 0x2727
/* 80328DDC 00325D1C  4E 80 00 20 */	blr 

.global getOwnerID__Q32og9newScreen11Challenge1PFv
getOwnerID__Q32og9newScreen11Challenge1PFv:
/* 80328DE0 00325D20  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 80328DE4 00325D24  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 80328DE8 00325D28  4E 80 00 20 */	blr 

.global getMemberID__Q32og9newScreen11Challenge1PFv
getMemberID__Q32og9newScreen11Challenge1PFv:
/* 80328DEC 00325D2C  3C 80 41 4C */	lis r4, 0x414C3150@ha
/* 80328DF0 00325D30  38 60 43 48 */	li r3, 0x4348
/* 80328DF4 00325D34  38 84 31 50 */	addi r4, r4, 0x414C3150@l
/* 80328DF8 00325D38  4E 80 00 20 */	blr 

.global isDrawInDemo__Q32og9newScreen11Challenge1PCFv
isDrawInDemo__Q32og9newScreen11Challenge1PCFv:
/* 80328DFC 00325D3C  38 60 00 00 */	li r3, 0
/* 80328E00 00325D40  4E 80 00 20 */	blr 
