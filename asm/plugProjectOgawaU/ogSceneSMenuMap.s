.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
.4byte __sinit_ogSceneSMenuMap_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global lbl_8048E300
lbl_8048E300:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x6F675363
	.4byte 0x656E6553
	.4byte 0x4D656E75
	.4byte 0x4D61702E
	.4byte 0x63707000
	.4byte 0x44697370
	.4byte 0x4D656D62
	.4byte 0x65722045
	.4byte 0x52522120
	.4byte 0x28257329
	.4byte 0x0A000000
	.4byte 0x2F6E6577
	.4byte 0x5F736372
	.4byte 0x65656E2F
	.4byte 0x636D6E2F
	.4byte 0x7265735F
	.4byte 0x6D61705F
	.4byte 0x696D6167
	.4byte 0x655F7475
	.4byte 0x746F7269
	.4byte 0x616C2E73
	.4byte 0x7A730000
	.4byte 0x2F6E6577
	.4byte 0x5F736372
	.4byte 0x65656E2F
	.4byte 0x636D6E2F
	.4byte 0x7265735F
	.4byte 0x6D61705F
	.4byte 0x696D6167
	.4byte 0x655F666F
	.4byte 0x72657374
	.4byte 0x2E737A73
	.4byte 0x00000000
	.4byte 0x2F6E6577
	.4byte 0x5F736372
	.4byte 0x65656E2F
	.4byte 0x636D6E2F
	.4byte 0x7265735F
	.4byte 0x6D61705F
	.4byte 0x696D6167
	.4byte 0x655F7961
	.4byte 0x6B757368
	.4byte 0x696D612E
	.4byte 0x737A7300
	.4byte 0x2F6E6577
	.4byte 0x5F736372
	.4byte 0x65656E2F
	.4byte 0x636D6E2F
	.4byte 0x7265735F
	.4byte 0x6D61705F
	.4byte 0x696D6167
	.4byte 0x655F6C61
	.4byte 0x73742E73
	.4byte 0x7A730000
	.4byte 0x61726320
	.4byte 0x6973204E
	.4byte 0x554C4C21
	.4byte 0x210A0000
	.4byte 0x6E6F6465
	.4byte 0x20697320
	.4byte 0x4E554C4C
	.4byte 0x21210A00
.global lbl_8048E404
lbl_8048E404:
	.4byte 0x534D656E
	.4byte 0x754D6170
	.4byte 0x20736372
	.4byte 0x65656E00
	.4byte 0x82BE82DF
	.4byte 0x82C582B7
	.4byte 0x00000000
.global lbl_8048E420
lbl_8048E420:
	.4byte 0x7265735F
	.4byte 0x735F6D65
	.4byte 0x6E755F6D
	.4byte 0x61702E73
	.4byte 0x7A730000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global lbl_804D8520
lbl_804D8520:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global lbl_804D852C
lbl_804D852C:
	.4byte lbl_80312E64
	.4byte lbl_80312E64
	.4byte lbl_80312E64
	.4byte lbl_80312E68
	.4byte lbl_80312E68
	.4byte lbl_80312E68
	.4byte lbl_80312E68
	.4byte lbl_80312E68
	.4byte lbl_80312E68
	.4byte lbl_80312E68
	.4byte lbl_80312E64
	.4byte lbl_80312E64
	.4byte lbl_80312E64
	.4byte lbl_80312E68
	.4byte lbl_80312E68
	.4byte lbl_80312E68
	.4byte lbl_80312E68
	.4byte lbl_80312E68
	.4byte lbl_80312E68
	.4byte lbl_80312E68
	.4byte lbl_80312E64
	.4byte lbl_80312E68
	.4byte lbl_80312E68
	.4byte lbl_80312E64
	.4byte lbl_80312E68
	.4byte lbl_80312E68
	.4byte lbl_80312E68
	.4byte lbl_80312E64
.global __vt__Q32og9newScreen8SMenuMap
__vt__Q32og9newScreen8SMenuMap:
	.4byte 0
	.4byte 0
	.4byte getSceneType__Q32og9newScreen8SMenuMapFv
	.4byte getOwnerID__Q32og9newScreen8SMenuMapFv
	.4byte getMemberID__Q32og9newScreen8SMenuMapFv
	.4byte isUseBackupSceneInfo__Q32og9newScreen8SMenuMapFv
	.4byte isDrawInDemo__Q26Screen9SceneBaseCFv
	.4byte getResName__Q32og9newScreen8SMenuMapCFv
	.4byte doCreateObj__Q32og9newScreen8SMenuMapFP10JKRArchive
	.4byte doUserCallBackFunc__Q32og9newScreen8SMenuMapFPQ28Resource10MgrCommand
	.4byte setPort__Q26Screen9SceneBaseFR8Graphics
	.4byte doUpdateActive__Q32og9newScreen8SMenuMapFv
	.4byte doConfirmSetScene__Q32og9newScreen8SMenuMapFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg
	.4byte doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	.4byte setDefaultDispMember__Q26Screen9SceneBaseFv
	.4byte doSetBackupScene__Q32og9newScreen8SMenuMapFRQ26Screen11SetSceneArg
	.4byte doGetFinishState__Q32og9newScreen14SceneSMenuBaseFv
.global __vt__Q32og9newScreen14SceneSMenuBase
__vt__Q32og9newScreen14SceneSMenuBase:
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
	.4byte isDrawInDemo__Q26Screen9SceneBaseCFv
	.4byte 0
	.4byte 0
	.4byte doUserCallBackFunc__Q26Screen9SceneBaseFPQ28Resource10MgrCommand
	.4byte setPort__Q26Screen9SceneBaseFR8Graphics
	.4byte doUpdateActive__Q26Screen9SceneBaseFv
	.4byte doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg
	.4byte doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	.4byte setDefaultDispMember__Q26Screen9SceneBaseFv
	.4byte doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doGetFinishState__Q32og9newScreen14SceneSMenuBaseFv
	.4byte 0

.section .sbss # 0x80514D80 - 0x80516360
.balign 0x8
.global lbl_80515E58
lbl_80515E58:
	.skip 0x4
.global lbl_80515E5C
lbl_80515E5C:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 0x8
.global lbl_8051D828
lbl_8051D828:
	.4byte 0x25730000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og9newScreen8SMenuMapFv
__ct__Q32og9newScreen8SMenuMapFv:
/* 80312BFC 0030FB3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80312C00 0030FB40  7C 08 02 A6 */	mflr r0
/* 80312C04 0030FB44  90 01 00 14 */	stw r0, 0x14(r1)
/* 80312C08 0030FB48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80312C0C 0030FB4C  7C 7F 1B 78 */	mr r31, r3
/* 80312C10 0030FB50  48 13 EB 81 */	bl __ct__Q26Screen9SceneBaseFv
/* 80312C14 0030FB54  3C 80 80 4E */	lis r4, __vt__Q32og9newScreen14SceneSMenuBase@ha
/* 80312C18 0030FB58  3C 60 80 4E */	lis r3, __vt__Q32og9newScreen8SMenuMap@ha
/* 80312C1C 0030FB5C  38 04 85 EC */	addi r0, r4, __vt__Q32og9newScreen14SceneSMenuBase@l
/* 80312C20 0030FB60  38 80 00 01 */	li r4, 1
/* 80312C24 0030FB64  90 1F 00 00 */	stw r0, 0(r31)
/* 80312C28 0030FB68  38 03 85 9C */	addi r0, r3, __vt__Q32og9newScreen8SMenuMap@l
/* 80312C2C 0030FB6C  7F E3 FB 78 */	mr r3, r31
/* 80312C30 0030FB70  90 9F 02 20 */	stw r4, 0x220(r31)
/* 80312C34 0030FB74  90 1F 00 00 */	stw r0, 0(r31)
/* 80312C38 0030FB78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80312C3C 0030FB7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80312C40 0030FB80  7C 08 03 A6 */	mtlr r0
/* 80312C44 0030FB84  38 21 00 10 */	addi r1, r1, 0x10
/* 80312C48 0030FB88  4E 80 00 20 */	blr 

.global doUserCallBackFunc__Q32og9newScreen8SMenuMapFPQ28Resource10MgrCommand
doUserCallBackFunc__Q32og9newScreen8SMenuMapFPQ28Resource10MgrCommand:
/* 80312C4C 0030FB8C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80312C50 0030FB90  7C 08 02 A6 */	mflr r0
/* 80312C54 0030FB94  3C 80 00 4F */	lis r4, 0x004F4741@ha
/* 80312C58 0030FB98  3C A0 5F 41 */	lis r5, 0x5F414C4C@ha
/* 80312C5C 0030FB9C  90 01 00 54 */	stw r0, 0x54(r1)
/* 80312C60 0030FBA0  38 C5 4C 4C */	addi r6, r5, 0x5F414C4C@l
/* 80312C64 0030FBA4  38 84 47 41 */	addi r4, r4, 0x004F4741@l
/* 80312C68 0030FBA8  38 A0 53 4D */	li r5, 0x534d
/* 80312C6C 0030FBAC  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80312C70 0030FBB0  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80312C74 0030FBB4  93 A1 00 44 */	stw r29, 0x44(r1)
/* 80312C78 0030FBB8  3B A0 00 00 */	li r29, 0
/* 80312C7C 0030FBBC  93 81 00 40 */	stw r28, 0x40(r1)
/* 80312C80 0030FBC0  7C 7C 1B 78 */	mr r28, r3
/* 80312C84 0030FBC4  3C 60 80 49 */	lis r3, lbl_8048E300@ha
/* 80312C88 0030FBC8  83 DC 02 1C */	lwz r30, 0x21c(r28)
/* 80312C8C 0030FBCC  3B E3 E3 00 */	addi r31, r3, lbl_8048E300@l
/* 80312C90 0030FBD0  7F C3 F3 78 */	mr r3, r30
/* 80312C94 0030FBD4  4B FF C6 89 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 80312C98 0030FBD8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80312C9C 0030FBDC  41 82 00 0C */	beq lbl_80312CA8
/* 80312CA0 0030FBE0  83 BE 00 98 */	lwz r29, 0x98(r30)
/* 80312CA4 0030FBE4  48 00 00 1C */	b lbl_80312CC0
lbl_80312CA8:
/* 80312CA8 0030FBE8  38 7F 00 0C */	addi r3, r31, 0xc
/* 80312CAC 0030FBEC  38 BF 00 20 */	addi r5, r31, 0x20
/* 80312CB0 0030FBF0  38 80 00 46 */	li r4, 0x46
/* 80312CB4 0030FBF4  38 C0 00 00 */	li r6, 0
/* 80312CB8 0030FBF8  4C C6 31 82 */	crclr 6
/* 80312CBC 0030FBFC  4B D1 79 85 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_80312CC0:
/* 80312CC0 0030FC00  2C 1D 00 02 */	cmpwi r29, 2
/* 80312CC4 0030FC04  41 82 00 34 */	beq lbl_80312CF8
/* 80312CC8 0030FC08  40 80 00 14 */	bge lbl_80312CDC
/* 80312CCC 0030FC0C  2C 1D 00 00 */	cmpwi r29, 0
/* 80312CD0 0030FC10  41 82 00 18 */	beq lbl_80312CE8
/* 80312CD4 0030FC14  40 80 00 1C */	bge lbl_80312CF0
/* 80312CD8 0030FC18  48 00 00 30 */	b lbl_80312D08
lbl_80312CDC:
/* 80312CDC 0030FC1C  2C 1D 00 04 */	cmpwi r29, 4
/* 80312CE0 0030FC20  40 80 00 28 */	bge lbl_80312D08
/* 80312CE4 0030FC24  48 00 00 1C */	b lbl_80312D00
lbl_80312CE8:
/* 80312CE8 0030FC28  38 BF 00 38 */	addi r5, r31, 0x38
/* 80312CEC 0030FC2C  48 00 00 20 */	b lbl_80312D0C
lbl_80312CF0:
/* 80312CF0 0030FC30  38 BF 00 64 */	addi r5, r31, 0x64
/* 80312CF4 0030FC34  48 00 00 18 */	b lbl_80312D0C
lbl_80312CF8:
/* 80312CF8 0030FC38  38 BF 00 90 */	addi r5, r31, 0x90
/* 80312CFC 0030FC3C  48 00 00 10 */	b lbl_80312D0C
lbl_80312D00:
/* 80312D00 0030FC40  38 BF 00 BC */	addi r5, r31, 0xbc
/* 80312D04 0030FC44  48 00 00 08 */	b lbl_80312D0C
lbl_80312D08:
/* 80312D08 0030FC48  38 BF 00 38 */	addi r5, r31, 0x38
lbl_80312D0C:
/* 80312D0C 0030FC4C  38 7C 00 04 */	addi r3, r28, 4
/* 80312D10 0030FC50  38 82 F4 C8 */	addi r4, r2, lbl_8051D828@sda21
/* 80312D14 0030FC54  4C C6 31 82 */	crclr 6
/* 80312D18 0030FC58  4B DB 47 21 */	bl sprintf
/* 80312D1C 0030FC5C  38 61 00 08 */	addi r3, r1, 8
/* 80312D20 0030FC60  38 9C 00 04 */	addi r4, r28, 4
/* 80312D24 0030FC64  48 13 98 B5 */	bl __ct__Q212LoadResource3ArgFPCc
/* 80312D28 0030FC68  80 6D 9C 28 */	lwz r3, gLoadResourceMgr@sda21(r13)
/* 80312D2C 0030FC6C  38 81 00 08 */	addi r4, r1, 8
/* 80312D30 0030FC70  48 13 99 E5 */	bl mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
/* 80312D34 0030FC74  28 03 00 00 */	cmplwi r3, 0
/* 80312D38 0030FC78  41 82 00 28 */	beq lbl_80312D60
/* 80312D3C 0030FC7C  80 03 00 34 */	lwz r0, 0x34(r3)
/* 80312D40 0030FC80  28 00 00 00 */	cmplwi r0, 0
/* 80312D44 0030FC84  40 82 00 30 */	bne lbl_80312D74
/* 80312D48 0030FC88  38 7F 00 0C */	addi r3, r31, 0xc
/* 80312D4C 0030FC8C  38 BF 00 E4 */	addi r5, r31, 0xe4
/* 80312D50 0030FC90  38 80 00 61 */	li r4, 0x61
/* 80312D54 0030FC94  4C C6 31 82 */	crclr 6
/* 80312D58 0030FC98  4B D1 78 E9 */	bl panic_f__12JUTExceptionFPCciPCce
/* 80312D5C 0030FC9C  48 00 00 18 */	b lbl_80312D74
lbl_80312D60:
/* 80312D60 0030FCA0  38 7F 00 0C */	addi r3, r31, 0xc
/* 80312D64 0030FCA4  38 BF 00 F4 */	addi r5, r31, 0xf4
/* 80312D68 0030FCA8  38 80 00 66 */	li r4, 0x66
/* 80312D6C 0030FCAC  4C C6 31 82 */	crclr 6
/* 80312D70 0030FCB0  4B D1 78 D1 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_80312D74:
/* 80312D74 0030FCB4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80312D78 0030FCB8  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80312D7C 0030FCBC  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80312D80 0030FCC0  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 80312D84 0030FCC4  83 81 00 40 */	lwz r28, 0x40(r1)
/* 80312D88 0030FCC8  7C 08 03 A6 */	mtlr r0
/* 80312D8C 0030FCCC  38 21 00 50 */	addi r1, r1, 0x50
/* 80312D90 0030FCD0  4E 80 00 20 */	blr 

.global doCreateObj__Q32og9newScreen8SMenuMapFP10JKRArchive
doCreateObj__Q32og9newScreen8SMenuMapFP10JKRArchive:
/* 80312D94 0030FCD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80312D98 0030FCD8  7C 08 02 A6 */	mflr r0
/* 80312D9C 0030FCDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80312DA0 0030FCE0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80312DA4 0030FCE4  7C 9F 23 78 */	mr r31, r4
/* 80312DA8 0030FCE8  93 C1 00 08 */	stw r30, 8(r1)
/* 80312DAC 0030FCEC  7C 7E 1B 78 */	mr r30, r3
/* 80312DB0 0030FCF0  38 60 01 58 */	li r3, 0x158
/* 80312DB4 0030FCF4  4B D1 10 F1 */	bl __nw__FUl
/* 80312DB8 0030FCF8  7C 64 1B 79 */	or. r4, r3, r3
/* 80312DBC 0030FCFC  41 82 00 14 */	beq lbl_80312DD0
/* 80312DC0 0030FD00  3C 80 80 49 */	lis r4, lbl_8048E404@ha
/* 80312DC4 0030FD04  38 84 E4 04 */	addi r4, r4, lbl_8048E404@l
/* 80312DC8 0030FD08  4B FF C9 29 */	bl __ct__Q32og9newScreen11ObjSMenuMapFPCc
/* 80312DCC 0030FD0C  7C 64 1B 78 */	mr r4, r3
lbl_80312DD0:
/* 80312DD0 0030FD10  7F C3 F3 78 */	mr r3, r30
/* 80312DD4 0030FD14  7F E5 FB 78 */	mr r5, r31
/* 80312DD8 0030FD18  48 13 EF 9D */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 80312DDC 0030FD1C  3C 80 80 51 */	lis r4, msVal__Q32og9newScreen11ObjSMenuMap@ha
/* 80312DE0 0030FD20  7F C3 F3 78 */	mr r3, r30
/* 80312DE4 0030FD24  38 A4 3C 40 */	addi r5, r4, msVal__Q32og9newScreen11ObjSMenuMap@l
/* 80312DE8 0030FD28  38 80 00 00 */	li r4, 0
/* 80312DEC 0030FD2C  88 E5 00 1B */	lbz r7, 0x1b(r5)
/* 80312DF0 0030FD30  38 A0 00 00 */	li r5, 0
/* 80312DF4 0030FD34  38 C0 00 00 */	li r6, 0
/* 80312DF8 0030FD38  48 13 F4 8D */	bl setColorBG__Q26Screen9SceneBaseFUcUcUcUc
/* 80312DFC 0030FD3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80312E00 0030FD40  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80312E04 0030FD44  83 C1 00 08 */	lwz r30, 8(r1)
/* 80312E08 0030FD48  7C 08 03 A6 */	mtlr r0
/* 80312E0C 0030FD4C  38 21 00 10 */	addi r1, r1, 0x10
/* 80312E10 0030FD50  4E 80 00 20 */	blr 

.global doUpdateActive__Q32og9newScreen8SMenuMapFv
doUpdateActive__Q32og9newScreen8SMenuMapFv:
/* 80312E14 0030FD54  4E 80 00 20 */	blr 

.global doConfirmSetScene__Q32og9newScreen8SMenuMapFRQ26Screen11SetSceneArg
doConfirmSetScene__Q32og9newScreen8SMenuMapFRQ26Screen11SetSceneArg:
/* 80312E18 0030FD58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80312E1C 0030FD5C  7C 08 02 A6 */	mflr r0
/* 80312E20 0030FD60  7C 83 23 78 */	mr r3, r4
/* 80312E24 0030FD64  90 01 00 14 */	stw r0, 0x14(r1)
/* 80312E28 0030FD68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80312E2C 0030FD6C  3B E0 00 00 */	li r31, 0
/* 80312E30 0030FD70  81 84 00 00 */	lwz r12, 0(r4)
/* 80312E34 0030FD74  81 8C 00 08 */	lwz r12, 8(r12)
/* 80312E38 0030FD78  7D 89 03 A6 */	mtctr r12
/* 80312E3C 0030FD7C  4E 80 04 21 */	bctrl 
/* 80312E40 0030FD80  38 03 D8 F0 */	addi r0, r3, -10000
/* 80312E44 0030FD84  28 00 00 1B */	cmplwi r0, 0x1b
/* 80312E48 0030FD88  41 81 00 20 */	bgt lbl_80312E68
/* 80312E4C 0030FD8C  3C 60 80 4E */	lis r3, lbl_804D852C@ha
/* 80312E50 0030FD90  54 00 10 3A */	slwi r0, r0, 2
/* 80312E54 0030FD94  38 63 85 2C */	addi r3, r3, lbl_804D852C@l
/* 80312E58 0030FD98  7C 03 00 2E */	lwzx r0, r3, r0
/* 80312E5C 0030FD9C  7C 09 03 A6 */	mtctr r0
/* 80312E60 0030FDA0  4E 80 04 20 */	bctr 
.global lbl_80312E64
lbl_80312E64:
/* 80312E64 0030FDA4  3B E0 00 01 */	li r31, 1
.global lbl_80312E68
lbl_80312E68:
/* 80312E68 0030FDA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80312E6C 0030FDAC  7F E3 FB 78 */	mr r3, r31
/* 80312E70 0030FDB0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80312E74 0030FDB4  7C 08 03 A6 */	mtlr r0
/* 80312E78 0030FDB8  38 21 00 10 */	addi r1, r1, 0x10
/* 80312E7C 0030FDBC  4E 80 00 20 */	blr 

.global doSetBackupScene__Q32og9newScreen8SMenuMapFRQ26Screen11SetSceneArg
doSetBackupScene__Q32og9newScreen8SMenuMapFRQ26Screen11SetSceneArg:
/* 80312E80 0030FDC0  38 00 00 00 */	li r0, 0
/* 80312E84 0030FDC4  98 04 00 09 */	stb r0, 9(r4)
/* 80312E88 0030FDC8  4E 80 00 20 */	blr 

.global getResName__Q32og9newScreen8SMenuMapCFv
getResName__Q32og9newScreen8SMenuMapCFv:
/* 80312E8C 0030FDCC  3C 60 80 49 */	lis r3, lbl_8048E420@ha
/* 80312E90 0030FDD0  38 63 E4 20 */	addi r3, r3, lbl_8048E420@l
/* 80312E94 0030FDD4  4E 80 00 20 */	blr 

.global getSceneType__Q32og9newScreen8SMenuMapFv
getSceneType__Q32og9newScreen8SMenuMapFv:
/* 80312E98 0030FDD8  38 60 27 1D */	li r3, 0x271d
/* 80312E9C 0030FDDC  4E 80 00 20 */	blr 

.global getOwnerID__Q32og9newScreen8SMenuMapFv
getOwnerID__Q32og9newScreen8SMenuMapFv:
/* 80312EA0 0030FDE0  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 80312EA4 0030FDE4  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 80312EA8 0030FDE8  4E 80 00 20 */	blr 

.global getMemberID__Q32og9newScreen8SMenuMapFv
getMemberID__Q32og9newScreen8SMenuMapFv:
/* 80312EAC 0030FDEC  3C 80 5F 4D */	lis r4, 0x5F4D4150@ha
/* 80312EB0 0030FDF0  38 60 53 4D */	li r3, 0x534d
/* 80312EB4 0030FDF4  38 84 41 50 */	addi r4, r4, 0x5F4D4150@l
/* 80312EB8 0030FDF8  4E 80 00 20 */	blr 

.global isUseBackupSceneInfo__Q32og9newScreen8SMenuMapFv
isUseBackupSceneInfo__Q32og9newScreen8SMenuMapFv:
/* 80312EBC 0030FDFC  38 60 00 01 */	li r3, 1
/* 80312EC0 0030FE00  4E 80 00 20 */	blr 

.global doGetFinishState__Q32og9newScreen14SceneSMenuBaseFv
doGetFinishState__Q32og9newScreen14SceneSMenuBaseFv:
/* 80312EC4 0030FE04  80 63 02 20 */	lwz r3, 0x220(r3)
/* 80312EC8 0030FE08  4E 80 00 20 */	blr 

.global doUserCallBackFunc__Q26Screen9SceneBaseFPQ28Resource10MgrCommand
doUserCallBackFunc__Q26Screen9SceneBaseFPQ28Resource10MgrCommand:
/* 80312ECC 0030FE0C  4E 80 00 20 */	blr 

.global __sinit_ogSceneSMenuMap_cpp
__sinit_ogSceneSMenuMap_cpp:
/* 80312ED0 0030FE10  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80312ED4 0030FE14  38 00 FF FF */	li r0, -1
/* 80312ED8 0030FE18  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80312EDC 0030FE1C  3C 60 80 4E */	lis r3, lbl_804D8520@ha
/* 80312EE0 0030FE20  90 0D 97 D8 */	stw r0, lbl_80515E58@sda21(r13)
/* 80312EE4 0030FE24  D4 03 85 20 */	stfsu f0, lbl_804D8520@l(r3)
/* 80312EE8 0030FE28  D0 0D 97 DC */	stfs f0, lbl_80515E5C@sda21(r13)
/* 80312EEC 0030FE2C  D0 03 00 04 */	stfs f0, 4(r3)
/* 80312EF0 0030FE30  D0 03 00 08 */	stfs f0, 8(r3)
/* 80312EF4 0030FE34  4E 80 00 20 */	blr 
