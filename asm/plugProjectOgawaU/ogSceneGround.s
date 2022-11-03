.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_8048E090:
	.asciz "ground screen"
.balign 4
lbl_8048E0A0:
	.asciz "PSGame.h"
.balign 4
lbl_8048E0AC:
	.asciz "P2Assert"
.balign 4
lbl_8048E0B8:
	.asciz "PSScene.h"
.balign 4
lbl_8048E0C4:
	.asciz "get sound scene at\ninvalid timming\n"
.balign 4
lbl_8048E0E8:
	.asciz "DayEndCount"
.balign 4
lbl_8048E0F4:
	.asciz "HurryUp2D"
.balign 4
lbl_8048E100:
	.asciz "res_ground.szs"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q32og9newScreen6Ground
__vt__Q32og9newScreen6Ground:
	.4byte 0
	.4byte 0
	.4byte getSceneType__Q32og9newScreen6GroundFv
	.4byte getOwnerID__Q32og9newScreen6GroundFv
	.4byte getMemberID__Q32og9newScreen6GroundFv
	.4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
	.4byte isDrawInDemo__Q32og9newScreen6GroundCFv
	.4byte getResName__Q32og9newScreen6GroundCFv
	.4byte doCreateObj__Q32og9newScreen6GroundFP10JKRArchive
	.4byte doUserCallBackFunc__Q32og9newScreen6GroundFPQ28Resource10MgrCommand
	.4byte setPort__Q26Screen9SceneBaseFR8Graphics
	.4byte doUpdateActive__Q32og9newScreen6GroundFv
	.4byte doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg
	.4byte doStart__Q32og9newScreen6GroundFPQ26Screen13StartSceneArg
	.4byte doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	.4byte setDefaultDispMember__Q26Screen9SceneBaseFv
	.4byte doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doGetFinishState__Q26Screen9SceneBaseFv

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
sGameFlag_MainBgm_Evening__Q22og9newScreen:
	.skip 0x1

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051D6D8:
	.float 1.0
lbl_8051D6DC:
	.float 0.9
lbl_8051D6E0:
	.float 0.0
.balign 8
lbl_8051D6E8:
	.4byte 0x43300000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global initGround__Q22og9newScreenFv
initGround__Q22og9newScreenFv:
/* 8030DA00 0030A940  38 00 00 00 */	li r0, 0
/* 8030DA04 0030A944  98 0D 97 B0 */	stb r0, sGameFlag_MainBgm_Evening__Q22og9newScreen@sda21(r13)
/* 8030DA08 0030A948  4E 80 00 20 */	blr 

.global __ct__Q32og9newScreen6GroundFv
__ct__Q32og9newScreen6GroundFv:
/* 8030DA0C 0030A94C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8030DA10 0030A950  7C 08 02 A6 */	mflr r0
/* 8030DA14 0030A954  90 01 00 14 */	stw r0, 0x14(r1)
/* 8030DA18 0030A958  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8030DA1C 0030A95C  7C 7F 1B 78 */	mr r31, r3
/* 8030DA20 0030A960  48 14 3D 71 */	bl __ct__Q26Screen9SceneBaseFv
/* 8030DA24 0030A964  3C 60 80 4E */	lis r3, __vt__Q32og9newScreen6Ground@ha
/* 8030DA28 0030A968  38 00 00 00 */	li r0, 0
/* 8030DA2C 0030A96C  38 83 82 88 */	addi r4, r3, __vt__Q32og9newScreen6Ground@l
/* 8030DA30 0030A970  7F E3 FB 78 */	mr r3, r31
/* 8030DA34 0030A974  90 9F 00 00 */	stw r4, 0(r31)
/* 8030DA38 0030A978  98 1F 02 20 */	stb r0, 0x220(r31)
/* 8030DA3C 0030A97C  98 1F 02 21 */	stb r0, 0x221(r31)
/* 8030DA40 0030A980  98 1F 02 22 */	stb r0, 0x222(r31)
/* 8030DA44 0030A984  98 1F 02 23 */	stb r0, 0x223(r31)
/* 8030DA48 0030A988  98 1F 02 24 */	stb r0, 0x224(r31)
/* 8030DA4C 0030A98C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8030DA50 0030A990  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8030DA54 0030A994  7C 08 03 A6 */	mtlr r0
/* 8030DA58 0030A998  38 21 00 10 */	addi r1, r1, 0x10
/* 8030DA5C 0030A99C  4E 80 00 20 */	blr 

.global doUserCallBackFunc__Q32og9newScreen6GroundFPQ28Resource10MgrCommand
doUserCallBackFunc__Q32og9newScreen6GroundFPQ28Resource10MgrCommand:
/* 8030DA60 0030A9A0  4E 80 00 20 */	blr 

.global doCreateObj__Q32og9newScreen6GroundFP10JKRArchive
doCreateObj__Q32og9newScreen6GroundFP10JKRArchive:
/* 8030DA64 0030A9A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8030DA68 0030A9A8  7C 08 02 A6 */	mflr r0
/* 8030DA6C 0030A9AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8030DA70 0030A9B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8030DA74 0030A9B4  7C 9F 23 78 */	mr r31, r4
/* 8030DA78 0030A9B8  93 C1 00 08 */	stw r30, 8(r1)
/* 8030DA7C 0030A9BC  7C 7E 1B 78 */	mr r30, r3
/* 8030DA80 0030A9C0  38 60 00 70 */	li r3, 0x70
/* 8030DA84 0030A9C4  4B D1 64 21 */	bl __nw__FUl
/* 8030DA88 0030A9C8  7C 64 1B 79 */	or. r4, r3, r3
/* 8030DA8C 0030A9CC  41 82 00 14 */	beq .L_8030DAA0
/* 8030DA90 0030A9D0  3C 80 80 49 */	lis r4, lbl_8048E090@ha
/* 8030DA94 0030A9D4  38 84 E0 90 */	addi r4, r4, lbl_8048E090@l
/* 8030DA98 0030A9D8  48 00 04 21 */	bl __ct__Q32og9newScreen9ObjGroundFPCc
/* 8030DA9C 0030A9DC  7C 64 1B 78 */	mr r4, r3
.L_8030DAA0:
/* 8030DAA0 0030A9E0  7F C3 F3 78 */	mr r3, r30
/* 8030DAA4 0030A9E4  7F E5 FB 78 */	mr r5, r31
/* 8030DAA8 0030A9E8  48 14 42 CD */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 8030DAAC 0030A9EC  38 60 01 18 */	li r3, 0x118
/* 8030DAB0 0030A9F0  4B D1 63 F5 */	bl __nw__FUl
/* 8030DAB4 0030A9F4  7C 64 1B 79 */	or. r4, r3, r3
/* 8030DAB8 0030A9F8  41 82 00 0C */	beq .L_8030DAC4
/* 8030DABC 0030A9FC  48 03 89 75 */	bl __ct__Q28Morimura10THurryUp2DFv
/* 8030DAC0 0030AA00  7C 64 1B 78 */	mr r4, r3
.L_8030DAC4:
/* 8030DAC4 0030AA04  7F C3 F3 78 */	mr r3, r30
/* 8030DAC8 0030AA08  7F E5 FB 78 */	mr r5, r31
/* 8030DACC 0030AA0C  48 14 42 A9 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 8030DAD0 0030AA10  38 60 00 D4 */	li r3, 0xd4
/* 8030DAD4 0030AA14  4B D1 63 D1 */	bl __nw__FUl
/* 8030DAD8 0030AA18  7C 64 1B 79 */	or. r4, r3, r3
/* 8030DADC 0030AA1C  41 82 00 0C */	beq .L_8030DAE8
/* 8030DAE0 0030AA20  48 03 65 A9 */	bl __ct__Q28Morimura12TDayEndCountFv
/* 8030DAE4 0030AA24  7C 64 1B 78 */	mr r4, r3
.L_8030DAE8:
/* 8030DAE8 0030AA28  7F C3 F3 78 */	mr r3, r30
/* 8030DAEC 0030AA2C  7F E5 FB 78 */	mr r5, r31
/* 8030DAF0 0030AA30  48 14 42 85 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 8030DAF4 0030AA34  7F C3 F3 78 */	mr r3, r30
/* 8030DAF8 0030AA38  38 80 00 00 */	li r4, 0
/* 8030DAFC 0030AA3C  38 A0 00 00 */	li r5, 0
/* 8030DB00 0030AA40  38 C0 00 00 */	li r6, 0
/* 8030DB04 0030AA44  38 E0 00 00 */	li r7, 0
/* 8030DB08 0030AA48  48 14 47 7D */	bl setColorBG__Q26Screen9SceneBaseFUcUcUcUc
/* 8030DB0C 0030AA4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8030DB10 0030AA50  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8030DB14 0030AA54  83 C1 00 08 */	lwz r30, 8(r1)
/* 8030DB18 0030AA58  7C 08 03 A6 */	mtlr r0
/* 8030DB1C 0030AA5C  38 21 00 10 */	addi r1, r1, 0x10
/* 8030DB20 0030AA60  4E 80 00 20 */	blr 

.global doStart__Q32og9newScreen6GroundFPQ26Screen13StartSceneArg
doStart__Q32og9newScreen6GroundFPQ26Screen13StartSceneArg:
/* 8030DB24 0030AA64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8030DB28 0030AA68  7C 08 02 A6 */	mflr r0
/* 8030DB2C 0030AA6C  3C A0 80 49 */	lis r5, lbl_8048E090@ha
/* 8030DB30 0030AA70  90 01 00 14 */	stw r0, 0x14(r1)
/* 8030DB34 0030AA74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8030DB38 0030AA78  7C 9F 23 78 */	mr r31, r4
/* 8030DB3C 0030AA7C  38 85 E0 90 */	addi r4, r5, lbl_8048E090@l
/* 8030DB40 0030AA80  48 14 3D 85 */	bl searchObj__Q26Screen9SceneBaseFPc
/* 8030DB44 0030AA84  81 83 00 00 */	lwz r12, 0(r3)
/* 8030DB48 0030AA88  7F E4 FB 78 */	mr r4, r31
/* 8030DB4C 0030AA8C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8030DB50 0030AA90  7D 89 03 A6 */	mtctr r12
/* 8030DB54 0030AA94  4E 80 04 21 */	bctrl 
/* 8030DB58 0030AA98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8030DB5C 0030AA9C  38 60 00 01 */	li r3, 1
/* 8030DB60 0030AAA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8030DB64 0030AAA4  7C 08 03 A6 */	mtlr r0
/* 8030DB68 0030AAA8  38 21 00 10 */	addi r1, r1, 0x10
/* 8030DB6C 0030AAAC  4E 80 00 20 */	blr 

.global doUpdateActive__Q32og9newScreen6GroundFv
doUpdateActive__Q32og9newScreen6GroundFv:
/* 8030DB70 0030AAB0  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8030DB74 0030AAB4  7C 08 02 A6 */	mflr r0
/* 8030DB78 0030AAB8  90 01 00 74 */	stw r0, 0x74(r1)
/* 8030DB7C 0030AABC  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8030DB80 0030AAC0  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 8030DB84 0030AAC4  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 8030DB88 0030AAC8  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 8030DB8C 0030AACC  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 8030DB90 0030AAD0  F3 A1 00 48 */	psq_st f29, 72(r1), 0, qr0
/* 8030DB94 0030AAD4  DB 81 00 30 */	stfd f28, 0x30(r1)
/* 8030DB98 0030AAD8  F3 81 00 38 */	psq_st f28, 56(r1), 0, qr0
/* 8030DB9C 0030AADC  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 8030DBA0 0030AAE0  80 0D 93 E8 */	lwz r0, gameSystem__4Game@sda21(r13)
/* 8030DBA4 0030AAE4  3C 80 80 49 */	lis r4, lbl_8048E090@ha
/* 8030DBA8 0030AAE8  7C 7E 1B 78 */	mr r30, r3
/* 8030DBAC 0030AAEC  28 00 00 00 */	cmplwi r0, 0
/* 8030DBB0 0030AAF0  3B A4 E0 90 */	addi r29, r4, lbl_8048E090@l
/* 8030DBB4 0030AAF4  41 82 02 98 */	beq .L_8030DE4C
/* 8030DBB8 0030AAF8  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8030DBBC 0030AAFC  28 00 00 00 */	cmplwi r0, 0
/* 8030DBC0 0030AB00  40 82 00 18 */	bne .L_8030DBD8
/* 8030DBC4 0030AB04  38 7D 00 10 */	addi r3, r29, 0x10
/* 8030DBC8 0030AB08  38 BD 00 1C */	addi r5, r29, 0x1c
/* 8030DBCC 0030AB0C  38 80 01 D3 */	li r4, 0x1d3
/* 8030DBD0 0030AB10  4C C6 31 82 */	crclr 6
/* 8030DBD4 0030AB14  4B D1 CA 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8030DBD8:
/* 8030DBD8 0030AB18  83 ED 98 80 */	lwz r31, spSceneMgr__8PSSystem@sda21(r13)
/* 8030DBDC 0030AB1C  28 1F 00 00 */	cmplwi r31, 0
/* 8030DBE0 0030AB20  40 82 00 18 */	bne .L_8030DBF8
/* 8030DBE4 0030AB24  38 7D 00 10 */	addi r3, r29, 0x10
/* 8030DBE8 0030AB28  38 BD 00 1C */	addi r5, r29, 0x1c
/* 8030DBEC 0030AB2C  38 80 01 DC */	li r4, 0x1dc
/* 8030DBF0 0030AB30  4C C6 31 82 */	crclr 6
/* 8030DBF4 0030AB34  4B D1 CA 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8030DBF8:
/* 8030DBF8 0030AB38  80 1F 00 04 */	lwz r0, 4(r31)
/* 8030DBFC 0030AB3C  28 00 00 00 */	cmplwi r0, 0
/* 8030DC00 0030AB40  40 82 00 18 */	bne .L_8030DC18
/* 8030DC04 0030AB44  38 7D 00 28 */	addi r3, r29, 0x28
/* 8030DC08 0030AB48  38 BD 00 1C */	addi r5, r29, 0x1c
/* 8030DC0C 0030AB4C  38 80 00 CF */	li r4, 0xcf
/* 8030DC10 0030AB50  4C C6 31 82 */	crclr 6
/* 8030DC14 0030AB54  4B D1 CA 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8030DC18:
/* 8030DC18 0030AB58  80 7F 00 04 */	lwz r3, 4(r31)
/* 8030DC1C 0030AB5C  83 E3 00 04 */	lwz r31, 4(r3)
/* 8030DC20 0030AB60  28 1F 00 00 */	cmplwi r31, 0
/* 8030DC24 0030AB64  40 82 00 18 */	bne .L_8030DC3C
/* 8030DC28 0030AB68  38 7D 00 28 */	addi r3, r29, 0x28
/* 8030DC2C 0030AB6C  38 BD 00 34 */	addi r5, r29, 0x34
/* 8030DC30 0030AB70  38 80 00 D1 */	li r4, 0xd1
/* 8030DC34 0030AB74  4C C6 31 82 */	crclr 6
/* 8030DC38 0030AB78  4B D1 CA 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8030DC3C:
/* 8030DC3C 0030AB7C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8030DC40 0030AB80  83 83 00 40 */	lwz r28, 0x40(r3)
/* 8030DC44 0030AB84  7F 83 E3 78 */	mr r3, r28
/* 8030DC48 0030AB88  4B E1 96 7D */	bl getSunGaugeRatio__Q24Game7TimeMgrFv
/* 8030DC4C 0030AB8C  C3 BC 00 3C */	lfs f29, 0x3c(r28)
/* 8030DC50 0030AB90  FF E0 08 90 */	fmr f31, f1
/* 8030DC54 0030AB94  C0 3C 01 F4 */	lfs f1, 0x1f4(r28)
/* 8030DC58 0030AB98  C0 1C 00 64 */	lfs f0, 0x64(r28)
/* 8030DC5C 0030AB9C  EC 21 E8 28 */	fsubs f1, f1, f29
/* 8030DC60 0030ABA0  83 7E 02 1C */	lwz r27, 0x21c(r30)
/* 8030DC64 0030ABA4  EF C0 E8 28 */	fsubs f30, f0, f29
/* 8030DC68 0030ABA8  D3 FB 00 70 */	stfs f31, 0x70(r27)
/* 8030DC6C 0030ABAC  EF 81 F0 24 */	fdivs f28, f1, f30
/* 8030DC70 0030ABB0  FC 1F E0 40 */	fcmpo cr0, f31, f28
/* 8030DC74 0030ABB4  D3 9B 00 74 */	stfs f28, 0x74(r27)
/* 8030DC78 0030ABB8  4C 41 13 82 */	cror 2, 1, 2
/* 8030DC7C 0030ABBC  40 82 00 3C */	bne .L_8030DCB8
/* 8030DC80 0030ABC0  88 1E 02 20 */	lbz r0, 0x220(r30)
/* 8030DC84 0030ABC4  28 00 00 00 */	cmplwi r0, 0
/* 8030DC88 0030ABC8  40 82 00 38 */	bne .L_8030DCC0
/* 8030DC8C 0030ABCC  38 00 00 01 */	li r0, 1
/* 8030DC90 0030ABD0  7F C3 F3 78 */	mr r3, r30
/* 8030DC94 0030ABD4  98 1E 02 20 */	stb r0, 0x220(r30)
/* 8030DC98 0030ABD8  38 9D 00 58 */	addi r4, r29, 0x58
/* 8030DC9C 0030ABDC  48 14 3C 29 */	bl searchObj__Q26Screen9SceneBaseFPc
/* 8030DCA0 0030ABE0  81 83 00 00 */	lwz r12, 0(r3)
/* 8030DCA4 0030ABE4  38 80 00 00 */	li r4, 0
/* 8030DCA8 0030ABE8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8030DCAC 0030ABEC  7D 89 03 A6 */	mtctr r12
/* 8030DCB0 0030ABF0  4E 80 04 21 */	bctrl 
/* 8030DCB4 0030ABF4  48 00 00 0C */	b .L_8030DCC0
.L_8030DCB8:
/* 8030DCB8 0030ABF8  38 00 00 00 */	li r0, 0
/* 8030DCBC 0030ABFC  98 1E 02 20 */	stb r0, 0x220(r30)
.L_8030DCC0:
/* 8030DCC0 0030AC00  FC 1F E0 40 */	fcmpo cr0, f31, f28
/* 8030DCC4 0030AC04  4C 41 13 82 */	cror 2, 1, 2
/* 8030DCC8 0030AC08  40 82 00 4C */	bne .L_8030DD14
/* 8030DCCC 0030AC0C  C0 22 F3 78 */	lfs f1, lbl_8051D6D8@sda21(r2)
/* 8030DCD0 0030AC10  EC 5F E0 28 */	fsubs f2, f31, f28
/* 8030DCD4 0030AC14  C0 02 F3 7C */	lfs f0, lbl_8051D6DC@sda21(r2)
/* 8030DCD8 0030AC18  EC 21 E0 28 */	fsubs f1, f1, f28
/* 8030DCDC 0030AC1C  EC 22 08 24 */	fdivs f1, f2, f1
/* 8030DCE0 0030AC20  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8030DCE4 0030AC24  4C 41 13 82 */	cror 2, 1, 2
/* 8030DCE8 0030AC28  40 82 00 2C */	bne .L_8030DD14
/* 8030DCEC 0030AC2C  88 1E 02 24 */	lbz r0, 0x224(r30)
/* 8030DCF0 0030AC30  28 00 00 00 */	cmplwi r0, 0
/* 8030DCF4 0030AC34  40 82 00 20 */	bne .L_8030DD14
/* 8030DCF8 0030AC38  38 00 00 01 */	li r0, 1
/* 8030DCFC 0030AC3C  C0 22 F3 80 */	lfs f1, lbl_8051D6E0@sda21(r2)
/* 8030DD00 0030AC40  98 1E 02 24 */	stb r0, 0x224(r30)
/* 8030DD04 0030AC44  7F E3 FB 78 */	mr r3, r31
/* 8030DD08 0030AC48  38 80 00 00 */	li r4, 0
/* 8030DD0C 0030AC4C  38 A0 00 01 */	li r5, 1
/* 8030DD10 0030AC50  48 15 BE 05 */	bl fadeMainBgm__Q23PSM12Scene_GroundFfUlQ33PSM12Scene_Ground4Time
.L_8030DD14:
/* 8030DD14 0030AC54  C0 1C 01 CC */	lfs f0, 0x1cc(r28)
/* 8030DD18 0030AC58  EC 00 E8 28 */	fsubs f0, f0, f29
/* 8030DD1C 0030AC5C  EF 80 F0 24 */	fdivs f28, f0, f30
/* 8030DD20 0030AC60  D3 9B 00 84 */	stfs f28, 0x84(r27)
/* 8030DD24 0030AC64  FC 1F E0 40 */	fcmpo cr0, f31, f28
/* 8030DD28 0030AC68  D3 FB 00 80 */	stfs f31, 0x80(r27)
/* 8030DD2C 0030AC6C  4C 41 13 82 */	cror 2, 1, 2
/* 8030DD30 0030AC70  40 82 00 5C */	bne .L_8030DD8C
/* 8030DD34 0030AC74  88 1E 02 21 */	lbz r0, 0x221(r30)
/* 8030DD38 0030AC78  28 00 00 00 */	cmplwi r0, 0
/* 8030DD3C 0030AC7C  40 82 00 58 */	bne .L_8030DD94
/* 8030DD40 0030AC80  38 00 00 01 */	li r0, 1
/* 8030DD44 0030AC84  7F C3 F3 78 */	mr r3, r30
/* 8030DD48 0030AC88  98 1E 02 21 */	stb r0, 0x221(r30)
/* 8030DD4C 0030AC8C  38 9D 00 64 */	addi r4, r29, 0x64
/* 8030DD50 0030AC90  48 14 3B 75 */	bl searchObj__Q26Screen9SceneBaseFPc
/* 8030DD54 0030AC94  81 83 00 00 */	lwz r12, 0(r3)
/* 8030DD58 0030AC98  38 80 00 00 */	li r4, 0
/* 8030DD5C 0030AC9C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8030DD60 0030ACA0  7D 89 03 A6 */	mtctr r12
/* 8030DD64 0030ACA4  4E 80 04 21 */	bctrl 
/* 8030DD68 0030ACA8  88 0D 97 B0 */	lbz r0, sGameFlag_MainBgm_Evening__Q22og9newScreen@sda21(r13)
/* 8030DD6C 0030ACAC  28 00 00 00 */	cmplwi r0, 0
/* 8030DD70 0030ACB0  40 82 00 24 */	bne .L_8030DD94
/* 8030DD74 0030ACB4  38 00 00 01 */	li r0, 1
/* 8030DD78 0030ACB8  7F E3 FB 78 */	mr r3, r31
/* 8030DD7C 0030ACBC  98 0D 97 B0 */	stb r0, sGameFlag_MainBgm_Evening__Q22og9newScreen@sda21(r13)
/* 8030DD80 0030ACC0  38 80 00 01 */	li r4, 1
/* 8030DD84 0030ACC4  48 15 BF 3D */	bl jumpMainBgm__Q23PSM12Scene_GroundFUc
/* 8030DD88 0030ACC8  48 00 00 0C */	b .L_8030DD94
.L_8030DD8C:
/* 8030DD8C 0030ACCC  38 00 00 00 */	li r0, 0
/* 8030DD90 0030ACD0  98 1E 02 21 */	stb r0, 0x221(r30)
.L_8030DD94:
/* 8030DD94 0030ACD4  7F 83 E3 78 */	mr r3, r28
/* 8030DD98 0030ACD8  4B E1 96 49 */	bl getRealDayTime__Q24Game7TimeMgrFv
/* 8030DD9C 0030ACDC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8030DDA0 0030ACE0  3C 00 43 30 */	lis r0, 0x4330
/* 8030DDA4 0030ACE4  80 82 29 48 */	lwz r4, cEvenning_fadeOuTime__Q23PSM12Scene_Ground@sda21(r2)
/* 8030DDA8 0030ACE8  FC 1F E0 40 */	fcmpo cr0, f31, f28
/* 8030DDAC 0030ACEC  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8030DDB0 0030ACF0  83 62 29 4C */	lwz r27, cEvenning_fadeInTime__Q23PSM12Scene_Ground@sda21(r2)
/* 8030DDB4 0030ACF4  EC 60 08 24 */	fdivs f3, f0, f1
/* 8030DDB8 0030ACF8  90 81 00 0C */	stw r4, 0xc(r1)
/* 8030DDBC 0030ACFC  C8 42 F3 88 */	lfd f2, lbl_8051D6E8@sda21(r2)
/* 8030DDC0 0030AD00  90 01 00 08 */	stw r0, 8(r1)
/* 8030DDC4 0030AD04  C8 01 00 08 */	lfd f0, 8(r1)
/* 8030DDC8 0030AD08  93 61 00 14 */	stw r27, 0x14(r1)
/* 8030DDCC 0030AD0C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8030DDD0 0030AD10  EC 20 10 28 */	fsubs f1, f0, f2
/* 8030DDD4 0030AD14  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8030DDD8 0030AD18  EC 23 E0 7C */	fnmsubs f1, f3, f1, f28
/* 8030DDDC 0030AD1C  EC 00 10 28 */	fsubs f0, f0, f2
/* 8030DDE0 0030AD20  EF A3 E0 3A */	fmadds f29, f3, f0, f28
/* 8030DDE4 0030AD24  40 80 00 30 */	bge .L_8030DE14
/* 8030DDE8 0030AD28  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 8030DDEC 0030AD2C  40 81 00 28 */	ble .L_8030DE14
/* 8030DDF0 0030AD30  88 1E 02 22 */	lbz r0, 0x222(r30)
/* 8030DDF4 0030AD34  28 00 00 00 */	cmplwi r0, 0
/* 8030DDF8 0030AD38  40 82 00 1C */	bne .L_8030DE14
/* 8030DDFC 0030AD3C  38 00 00 01 */	li r0, 1
/* 8030DE00 0030AD40  C0 22 F3 80 */	lfs f1, lbl_8051D6E0@sda21(r2)
/* 8030DE04 0030AD44  98 1E 02 22 */	stb r0, 0x222(r30)
/* 8030DE08 0030AD48  7F E3 FB 78 */	mr r3, r31
/* 8030DE0C 0030AD4C  38 A0 00 00 */	li r5, 0
/* 8030DE10 0030AD50  48 15 BD 05 */	bl fadeMainBgm__Q23PSM12Scene_GroundFfUlQ33PSM12Scene_Ground4Time
.L_8030DE14:
/* 8030DE14 0030AD54  FC 1F E0 40 */	fcmpo cr0, f31, f28
/* 8030DE18 0030AD58  40 81 00 34 */	ble .L_8030DE4C
/* 8030DE1C 0030AD5C  FC 1F E8 40 */	fcmpo cr0, f31, f29
/* 8030DE20 0030AD60  40 81 00 2C */	ble .L_8030DE4C
/* 8030DE24 0030AD64  88 1E 02 23 */	lbz r0, 0x223(r30)
/* 8030DE28 0030AD68  28 00 00 00 */	cmplwi r0, 0
/* 8030DE2C 0030AD6C  40 82 00 20 */	bne .L_8030DE4C
/* 8030DE30 0030AD70  38 00 00 01 */	li r0, 1
/* 8030DE34 0030AD74  C0 22 F3 78 */	lfs f1, lbl_8051D6D8@sda21(r2)
/* 8030DE38 0030AD78  98 1E 02 23 */	stb r0, 0x223(r30)
/* 8030DE3C 0030AD7C  7F E3 FB 78 */	mr r3, r31
/* 8030DE40 0030AD80  7F 64 DB 78 */	mr r4, r27
/* 8030DE44 0030AD84  38 A0 00 00 */	li r5, 0
/* 8030DE48 0030AD88  48 15 BC CD */	bl fadeMainBgm__Q23PSM12Scene_GroundFfUlQ33PSM12Scene_Ground4Time
.L_8030DE4C:
/* 8030DE4C 0030AD8C  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 8030DE50 0030AD90  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8030DE54 0030AD94  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 8030DE58 0030AD98  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 8030DE5C 0030AD9C  E3 A1 00 48 */	psq_l f29, 72(r1), 0, qr0
/* 8030DE60 0030ADA0  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 8030DE64 0030ADA4  E3 81 00 38 */	psq_l f28, 56(r1), 0, qr0
/* 8030DE68 0030ADA8  CB 81 00 30 */	lfd f28, 0x30(r1)
/* 8030DE6C 0030ADAC  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 8030DE70 0030ADB0  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8030DE74 0030ADB4  7C 08 03 A6 */	mtlr r0
/* 8030DE78 0030ADB8  38 21 00 70 */	addi r1, r1, 0x70
/* 8030DE7C 0030ADBC  4E 80 00 20 */	blr 

.global getResName__Q32og9newScreen6GroundCFv
getResName__Q32og9newScreen6GroundCFv: # weak function
/* 8030DE80 0030ADC0  3C 60 80 49 */	lis r3, lbl_8048E100@ha
/* 8030DE84 0030ADC4  38 63 E1 00 */	addi r3, r3, lbl_8048E100@l
/* 8030DE88 0030ADC8  4E 80 00 20 */	blr 

.global getSceneType__Q32og9newScreen6GroundFv
getSceneType__Q32og9newScreen6GroundFv: # weak function
/* 8030DE8C 0030ADCC  38 60 27 10 */	li r3, 0x2710
/* 8030DE90 0030ADD0  4E 80 00 20 */	blr 

.global getOwnerID__Q32og9newScreen6GroundFv
getOwnerID__Q32og9newScreen6GroundFv: # weak function
/* 8030DE94 0030ADD4  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 8030DE98 0030ADD8  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 8030DE9C 0030ADDC  4E 80 00 20 */	blr 

.global getMemberID__Q32og9newScreen6GroundFv
getMemberID__Q32og9newScreen6GroundFv: # weak function
/* 8030DEA0 0030ADE0  3C 80 4F 55 */	lis r4, 0x4F554E44@ha
/* 8030DEA4 0030ADE4  38 60 47 52 */	li r3, 0x4752
/* 8030DEA8 0030ADE8  38 84 4E 44 */	addi r4, r4, 0x4F554E44@l
/* 8030DEAC 0030ADEC  4E 80 00 20 */	blr 

.global isDrawInDemo__Q32og9newScreen6GroundCFv
isDrawInDemo__Q32og9newScreen6GroundCFv: # weak function
/* 8030DEB0 0030ADF0  38 60 00 00 */	li r3, 0
/* 8030DEB4 0030ADF4  4E 80 00 20 */	blr 
