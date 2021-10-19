.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global lbl_8048F240
lbl_8048F240:
	.4byte 0x534D656E
	.4byte 0x75506175
	.4byte 0x7365446F
	.4byte 0x756B7574
	.4byte 0x75207363
	.4byte 0x7265656E
	.4byte 0x00000000
.global lbl_8048F25C
lbl_8048F25C:
	.4byte 0x7265735F
	.4byte 0x735F6D65
	.4byte 0x6E755F70
	.4byte 0x61757365
	.4byte 0x5F646F75
	.4byte 0x6B757475
	.4byte 0x2E737A73
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og9newScreen17SMenuPauseDoukutuFv
__ct__Q32og9newScreen17SMenuPauseDoukutuFv:
/* 80323584 003204C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80323588 003204C8  7C 08 02 A6 */	mflr r0
/* 8032358C 003204CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80323590 003204D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80323594 003204D4  7C 7F 1B 78 */	mr r31, r3
/* 80323598 003204D8  48 12 E1 F9 */	bl __ct__Q26Screen9SceneBaseFv
/* 8032359C 003204DC  3C 80 80 4E */	lis r4, __vt__Q32og9newScreen14SceneSMenuBase@ha
/* 803235A0 003204E0  3C 60 80 4E */	lis r3, __vt__Q32og9newScreen17SMenuPauseDoukutu@ha
/* 803235A4 003204E4  38 04 85 EC */	addi r0, r4, __vt__Q32og9newScreen14SceneSMenuBase@l
/* 803235A8 003204E8  38 80 00 01 */	li r4, 1
/* 803235AC 003204EC  90 1F 00 00 */	stw r0, 0(r31)
/* 803235B0 003204F0  38 03 97 84 */	addi r0, r3, __vt__Q32og9newScreen17SMenuPauseDoukutu@l
/* 803235B4 003204F4  7F E3 FB 78 */	mr r3, r31
/* 803235B8 003204F8  90 9F 02 20 */	stw r4, 0x220(r31)
/* 803235BC 003204FC  90 1F 00 00 */	stw r0, 0(r31)
/* 803235C0 00320500  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803235C4 00320504  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803235C8 00320508  7C 08 03 A6 */	mtlr r0
/* 803235CC 0032050C  38 21 00 10 */	addi r1, r1, 0x10
/* 803235D0 00320510  4E 80 00 20 */	blr 

.global doUserCallBackFunc__Q32og9newScreen17SMenuPauseDoukutuFPQ28Resource10MgrCommand
doUserCallBackFunc__Q32og9newScreen17SMenuPauseDoukutuFPQ28Resource10MgrCommand:
/* 803235D4 00320514  4E 80 00 20 */	blr 

.global doCreateObj__Q32og9newScreen17SMenuPauseDoukutuFP10JKRArchive
doCreateObj__Q32og9newScreen17SMenuPauseDoukutuFP10JKRArchive:
/* 803235D8 00320518  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803235DC 0032051C  7C 08 02 A6 */	mflr r0
/* 803235E0 00320520  90 01 00 14 */	stw r0, 0x14(r1)
/* 803235E4 00320524  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803235E8 00320528  7C 9F 23 78 */	mr r31, r4
/* 803235EC 0032052C  93 C1 00 08 */	stw r30, 8(r1)
/* 803235F0 00320530  7C 7E 1B 78 */	mr r30, r3
/* 803235F4 00320534  38 60 00 FC */	li r3, 0xfc
/* 803235F8 00320538  4B D0 08 AD */	bl __nw__FUl
/* 803235FC 0032053C  7C 64 1B 79 */	or. r4, r3, r3
/* 80323600 00320540  41 82 00 14 */	beq lbl_80323614
/* 80323604 00320544  3C 80 80 49 */	lis r4, lbl_8048F240@ha
/* 80323608 00320548  38 84 F2 40 */	addi r4, r4, lbl_8048F240@l
/* 8032360C 0032054C  4B FF EA 81 */	bl __ct__Q32og9newScreen20ObjSMenuPauseDoukutuFPCc
/* 80323610 00320550  7C 64 1B 78 */	mr r4, r3
lbl_80323614:
/* 80323614 00320554  7F C3 F3 78 */	mr r3, r30
/* 80323618 00320558  7F E5 FB 78 */	mr r5, r31
/* 8032361C 0032055C  48 12 E7 59 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 80323620 00320560  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80323624 00320564  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80323628 00320568  83 C1 00 08 */	lwz r30, 8(r1)
/* 8032362C 0032056C  7C 08 03 A6 */	mtlr r0
/* 80323630 00320570  38 21 00 10 */	addi r1, r1, 0x10
/* 80323634 00320574  4E 80 00 20 */	blr 

.global doGetFinishState__Q32og9newScreen17SMenuPauseDoukutuFv
doGetFinishState__Q32og9newScreen17SMenuPauseDoukutuFv:
/* 80323638 00320578  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032363C 0032057C  7C 08 02 A6 */	mflr r0
/* 80323640 00320580  90 01 00 14 */	stw r0, 0x14(r1)
/* 80323644 00320584  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80323648 00320588  93 C1 00 08 */	stw r30, 8(r1)
/* 8032364C 0032058C  83 C3 02 20 */	lwz r30, 0x220(r3)
/* 80323650 00320590  2C 1E 00 01 */	cmpwi r30, 1
/* 80323654 00320594  40 82 00 58 */	bne lbl_803236AC
/* 80323658 00320598  83 E3 02 1C */	lwz r31, 0x21c(r3)
/* 8032365C 0032059C  3C 80 00 4F */	lis r4, 0x004F4741@ha
/* 80323660 003205A0  3C C0 5F 41 */	lis r6, 0x5F414C4C@ha
/* 80323664 003205A4  38 A0 53 4D */	li r5, 0x534d
/* 80323668 003205A8  7F E3 FB 78 */	mr r3, r31
/* 8032366C 003205AC  38 84 47 41 */	addi r4, r4, 0x004F4741@l
/* 80323670 003205B0  38 C6 4C 4C */	addi r6, r6, 0x5F414C4C@l
/* 80323674 003205B4  4B FE BC A9 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 80323678 003205B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8032367C 003205BC  41 82 00 30 */	beq lbl_803236AC
/* 80323680 003205C0  3C 80 00 4F */	lis r4, 0x004F4741@ha
/* 80323684 003205C4  3C C0 53 45 */	lis r6, 0x53455F44@ha
/* 80323688 003205C8  3C A0 00 50 */	lis r5, 0x00504155@ha
/* 8032368C 003205CC  7F E3 FB 78 */	mr r3, r31
/* 80323690 003205D0  38 84 47 41 */	addi r4, r4, 0x004F4741@l
/* 80323694 003205D4  38 C6 5F 44 */	addi r6, r6, 0x53455F44@l
/* 80323698 003205D8  38 A5 41 55 */	addi r5, r5, 0x00504155@l
/* 8032369C 003205DC  4B FE BE 25 */	bl getSubMember__Q32og6Screen14DispMemberBaseFUlUx
/* 803236A0 003205E0  28 03 00 00 */	cmplwi r3, 0
/* 803236A4 003205E4  41 82 00 08 */	beq lbl_803236AC
/* 803236A8 003205E8  83 C3 00 14 */	lwz r30, 0x14(r3)
lbl_803236AC:
/* 803236AC 003205EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803236B0 003205F0  7F C3 F3 78 */	mr r3, r30
/* 803236B4 003205F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803236B8 003205F8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803236BC 003205FC  7C 08 03 A6 */	mtlr r0
/* 803236C0 00320600  38 21 00 10 */	addi r1, r1, 0x10
/* 803236C4 00320604  4E 80 00 20 */	blr 

.global doUpdateActive__Q32og9newScreen17SMenuPauseDoukutuFv
doUpdateActive__Q32og9newScreen17SMenuPauseDoukutuFv:
/* 803236C8 00320608  4E 80 00 20 */	blr 

.global doConfirmSetScene__Q32og9newScreen17SMenuPauseDoukutuFRQ26Screen11SetSceneArg
doConfirmSetScene__Q32og9newScreen17SMenuPauseDoukutuFRQ26Screen11SetSceneArg:
/* 803236CC 0032060C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803236D0 00320610  7C 08 02 A6 */	mflr r0
/* 803236D4 00320614  7C 83 23 78 */	mr r3, r4
/* 803236D8 00320618  90 01 00 14 */	stw r0, 0x14(r1)
/* 803236DC 0032061C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803236E0 00320620  3B E0 00 00 */	li r31, 0
/* 803236E4 00320624  81 84 00 00 */	lwz r12, 0(r4)
/* 803236E8 00320628  81 8C 00 08 */	lwz r12, 8(r12)
/* 803236EC 0032062C  7D 89 03 A6 */	mtctr r12
/* 803236F0 00320630  4E 80 04 21 */	bctrl 
/* 803236F4 00320634  38 03 D8 F0 */	addi r0, r3, -10000
/* 803236F8 00320638  28 00 00 1B */	cmplwi r0, 0x1b
/* 803236FC 0032063C  41 81 00 20 */	bgt lbl_8032371C
/* 80323700 00320640  3C 60 80 4E */	lis r3, lbl_804D9714@ha
/* 80323704 00320644  54 00 10 3A */	slwi r0, r0, 2
/* 80323708 00320648  38 63 97 14 */	addi r3, r3, lbl_804D9714@l
/* 8032370C 0032064C  7C 03 00 2E */	lwzx r0, r3, r0
/* 80323710 00320650  7C 09 03 A6 */	mtctr r0
/* 80323714 00320654  4E 80 04 20 */	bctr 
.global lbl_80323718
lbl_80323718:
/* 80323718 00320658  3B E0 00 01 */	li r31, 1
.global lbl_8032371C
lbl_8032371C:
/* 8032371C 0032065C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80323720 00320660  7F E3 FB 78 */	mr r3, r31
/* 80323724 00320664  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80323728 00320668  7C 08 03 A6 */	mtlr r0
/* 8032372C 0032066C  38 21 00 10 */	addi r1, r1, 0x10
/* 80323730 00320670  4E 80 00 20 */	blr 

.global getResName__Q32og9newScreen17SMenuPauseDoukutuCFv
getResName__Q32og9newScreen17SMenuPauseDoukutuCFv:
/* 80323734 00320674  3C 60 80 49 */	lis r3, lbl_8048F25C@ha
/* 80323738 00320678  38 63 F2 5C */	addi r3, r3, lbl_8048F25C@l
/* 8032373C 0032067C  4E 80 00 20 */	blr 

.global getSceneType__Q32og9newScreen17SMenuPauseDoukutuFv
getSceneType__Q32og9newScreen17SMenuPauseDoukutuFv:
/* 80323740 00320680  38 60 27 1B */	li r3, 0x271b
/* 80323744 00320684  4E 80 00 20 */	blr 

.global getOwnerID__Q32og9newScreen17SMenuPauseDoukutuFv
getOwnerID__Q32og9newScreen17SMenuPauseDoukutuFv:
/* 80323748 00320688  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 8032374C 0032068C  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 80323750 00320690  4E 80 00 20 */	blr 

.global getMemberID__Q32og9newScreen17SMenuPauseDoukutuFv
getMemberID__Q32og9newScreen17SMenuPauseDoukutuFv:
/* 80323754 00320694  3C 80 53 45 */	lis r4, 0x53455F44@ha
/* 80323758 00320698  3C 60 00 50 */	lis r3, 0x00504155@ha
/* 8032375C 0032069C  38 84 5F 44 */	addi r4, r4, 0x53455F44@l
/* 80323760 003206A0  38 63 41 55 */	addi r3, r3, 0x00504155@l
/* 80323764 003206A4  4E 80 00 20 */	blr 

.global isUseBackupSceneInfo__Q32og9newScreen17SMenuPauseDoukutuFv
isUseBackupSceneInfo__Q32og9newScreen17SMenuPauseDoukutuFv:
/* 80323768 003206A8  38 60 00 01 */	li r3, 1
/* 8032376C 003206AC  4E 80 00 20 */	blr 

.global __sinit_ogSceneSMenuPauseDoukutu_cpp
__sinit_ogSceneSMenuPauseDoukutu_cpp:
/* 80323770 003206B0  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80323774 003206B4  38 00 FF FF */	li r0, -1
/* 80323778 003206B8  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8032377C 003206BC  3C 60 80 4E */	lis r3, lbl_804D9708@ha
/* 80323780 003206C0  90 0D 98 08 */	stw r0, lbl_80515E88@sda21(r13)
/* 80323784 003206C4  D4 03 97 08 */	stfsu f0, lbl_804D9708@l(r3)
/* 80323788 003206C8  D0 0D 98 0C */	stfs f0, lbl_80515E8C@sda21(r13)
/* 8032378C 003206CC  D0 03 00 04 */	stfs f0, 4(r3)
/* 80323790 003206D0  D0 03 00 08 */	stfs f0, 8(r3)
/* 80323794 003206D4  4E 80 00 20 */	blr 
