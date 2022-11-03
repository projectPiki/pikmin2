.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
	.4byte __sinit_khReadyGo_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_80498670
lbl_80498670:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.balign 4
.global lbl_8049867C
lbl_8049867C:
	.asciz "khReadyGo.cpp"
.balign 4
.global lbl_8049868C
lbl_8049868C:
	.asciz "disp member err"
.balign 4
.global lbl_8049869C
lbl_8049869C:
	.asciz "ready_go.blo"
.balign 4
.global lbl_804986AC
lbl_804986AC:
	.asciz "ready_go.bck"
.balign 4
.global lbl_804986BC
lbl_804986BC:
	.asciz "ready_go.bpk"
.balign 4
.global lbl_804986CC
lbl_804986CC:
	.asciz "ready_go_reverse.blo"
.balign 4
.global lbl_804986E4
lbl_804986E4:
	.asciz "ready_go_reverse.bck"
.balign 4
.global lbl_804986FC
lbl_804986FC:
	.asciz "ready_go_reverse.bpk"
.balign 4
	.4byte lbl_8049869C
	.4byte lbl_804986AC
	.4byte lbl_804986BC
	.4byte lbl_804986CC
	.4byte lbl_804986E4
	.4byte lbl_804986FC
.global lbl_8049872C
lbl_8049872C:
	.asciz "ready_go.szs"
.balign 4
	.asciz "screenObj.h"
.balign 4
	.asciz "P2Assert"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global lbl_804EAB98
lbl_804EAB98:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global __vt__Q32kh6Screen12SceneReadyGo
__vt__Q32kh6Screen12SceneReadyGo:
	.4byte 0
	.4byte 0
	.4byte getSceneType__Q32kh6Screen12SceneReadyGoFv
	.4byte getOwnerID__Q32kh6Screen12SceneReadyGoFv
	.4byte getMemberID__Q32kh6Screen12SceneReadyGoFv
	.4byte isUseBackupSceneInfo__Q32kh6Screen12SceneReadyGoFv
	.4byte isDrawInDemo__Q26Screen9SceneBaseCFv
	.4byte getResName__Q32kh6Screen12SceneReadyGoCFv
	.4byte doCreateObj__Q32kh6Screen12SceneReadyGoFP10JKRArchive
	.4byte doUserCallBackFunc__Q26Screen9SceneBaseFPQ28Resource10MgrCommand
	.4byte setPort__Q26Screen9SceneBaseFR8Graphics
	.4byte doUpdateActive__Q26Screen9SceneBaseFv
	.4byte doConfirmSetScene__Q32kh6Screen12SceneReadyGoFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg
	.4byte doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	.4byte setDefaultDispMember__Q26Screen9SceneBaseFv
	.4byte doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doGetFinishState__Q26Screen9SceneBaseFv
.global __vt__Q25efx2d9T2DGoChal
__vt__Q25efx2d9T2DGoChal:
	.4byte 0
	.4byte 0
	.4byte create__Q25efx2d8TSimple2FPQ25efx2d3Arg
	.4byte kill__Q25efx2d8TSimple2Fv
	.4byte fade__Q25efx2d8TSimple2Fv
	.4byte setGroup__Q25efx2d5TBaseFUc
.global __vt__Q25efx2d9T2DGoBatl
__vt__Q25efx2d9T2DGoBatl:
	.4byte 0
	.4byte 0
	.4byte create__Q25efx2d8TSimple3FPQ25efx2d3Arg
	.4byte kill__Q25efx2d8TSimple3Fv
	.4byte fade__Q25efx2d8TSimple3Fv
	.4byte setGroup__Q25efx2d5TBaseFUc
.global __vt__Q32kh6Screen10ObjReadyGo
__vt__Q32kh6Screen10ObjReadyGo:
	.4byte 0
	.4byte 0
	.4byte __dt__Q32kh6Screen10ObjReadyGoFv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__Q32kh6Screen10ObjReadyGoFv"
	.4byte update__Q26Screen7ObjBaseFv
	.4byte draw__Q26Screen7ObjBaseFR8Graphics
	.4byte start__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
	.4byte end__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
	.4byte setOwner__Q26Screen7ObjBaseFPQ26Screen9SceneBase
	.4byte getOwner__Q26Screen7ObjBaseCFv
	.4byte create__Q26Screen7ObjBaseFP10JKRArchive
	.4byte confirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte confirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte confirmEndScene__Q26Screen7ObjBaseFPQ26Screen11EndSceneArg
	.4byte doStart__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
	.4byte doEnd__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
	.4byte doCreate__Q32kh6Screen10ObjReadyGoFP10JKRArchive
	.4byte doUpdateFadein__Q32kh6Screen10ObjReadyGoFv
	.4byte doUpdateFadeinFinish__Q26Screen7ObjBaseFv
	.4byte doUpdate__Q32kh6Screen10ObjReadyGoFv
	.4byte doUpdateFinish__Q26Screen7ObjBaseFv
	.4byte doUpdateFadeout__Q32kh6Screen10ObjReadyGoFv
	.4byte doUpdateFadeoutFinish__Q26Screen7ObjBaseFv
	.4byte doDraw__Q32kh6Screen10ObjReadyGoFR8Graphics
	.4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg

.section .bss  # 0x804EFC20 - 0x8051467C
# khReadyGo.cpp
.comm msVal__Q32kh6Screen10ObjReadyGo, 0x18, 4

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global lbl_80516128
lbl_80516128:
	.skip 0x4
.global lbl_8051612C
lbl_8051612C:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_80520058:
	.4byte 0x00000000
lbl_8052005C:
	.4byte 0x42700000
lbl_80520060:
	.4byte 0x429C0000
	.4byte 0x00000000
lbl_80520068:
	.4byte 0x43300000
	.4byte 0x80000000
lbl_80520070:
	.4byte 0xC2F00000
lbl_80520074:
	.4byte 0x42F00000
lbl_80520078:
	.float 0.7
lbl_8052007C:
	.4byte 0xC1400000
lbl_80520080:
	.4byte 0xC1B00000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global doUpdateFadein__Q32kh6Screen10ObjReadyGoFv
doUpdateFadein__Q32kh6Screen10ObjReadyGoFv:
/* 80401268 003FE1A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8040126C 003FE1AC  7C 08 02 A6 */	mflr r0
/* 80401270 003FE1B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80401274 003FE1B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80401278 003FE1B8  7C 7F 1B 78 */	mr r31, r3
/* 8040127C 003FE1BC  48 05 2D 2D */	bl getDispMember__Q26Screen7ObjBaseFv
/* 80401280 003FE1C0  3C 80 59 5F */	lis r4, 0x595F474F@ha
/* 80401284 003FE1C4  3C A0 52 45 */	lis r5, 0x52454144@ha
/* 80401288 003FE1C8  38 C4 47 4F */	addi r6, r4, 0x595F474F@l
/* 8040128C 003FE1CC  38 80 4B 48 */	li r4, 0x4b48
/* 80401290 003FE1D0  38 A5 41 44 */	addi r5, r5, 0x52454144@l
/* 80401294 003FE1D4  4B F0 E0 89 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 80401298 003FE1D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8040129C 003FE1DC  40 82 00 20 */	bne .L_804012BC
/* 804012A0 003FE1E0  3C 60 80 4A */	lis r3, lbl_8049867C@ha
/* 804012A4 003FE1E4  3C A0 80 4A */	lis r5, lbl_8049868C@ha
/* 804012A8 003FE1E8  38 63 86 7C */	addi r3, r3, lbl_8049867C@l
/* 804012AC 003FE1EC  38 80 00 3D */	li r4, 0x3d
/* 804012B0 003FE1F0  38 A5 86 8C */	addi r5, r5, lbl_8049868C@l
/* 804012B4 003FE1F4  4C C6 31 82 */	crclr 6
/* 804012B8 003FE1F8  4B C2 93 89 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804012BC:
/* 804012BC 003FE1FC  7F E3 FB 78 */	mr r3, r31
/* 804012C0 003FE200  48 05 2C E9 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 804012C4 003FE204  80 03 00 10 */	lwz r0, 0x10(r3)
/* 804012C8 003FE208  2C 00 00 00 */	cmpwi r0, 0
/* 804012CC 003FE20C  40 82 00 18 */	bne .L_804012E4
/* 804012D0 003FE210  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 804012D4 003FE214  38 80 18 26 */	li r4, 0x1826
/* 804012D8 003FE218  38 A0 00 00 */	li r5, 0
/* 804012DC 003FE21C  4B F3 73 55 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 804012E0 003FE220  48 00 00 14 */	b .L_804012F4
.L_804012E4:
/* 804012E4 003FE224  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 804012E8 003FE228  38 80 18 27 */	li r4, 0x1827
/* 804012EC 003FE22C  38 A0 00 00 */	li r5, 0
/* 804012F0 003FE230  4B F3 73 41 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_804012F4:
/* 804012F4 003FE234  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804012F8 003FE238  38 60 00 01 */	li r3, 1
/* 804012FC 003FE23C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80401300 003FE240  7C 08 03 A6 */	mtlr r0
/* 80401304 003FE244  38 21 00 10 */	addi r1, r1, 0x10
/* 80401308 003FE248  4E 80 00 20 */	blr 

.global doCreate__Q32kh6Screen10ObjReadyGoFP10JKRArchive
doCreate__Q32kh6Screen10ObjReadyGoFP10JKRArchive:
/* 8040130C 003FE24C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80401310 003FE250  7C 08 02 A6 */	mflr r0
/* 80401314 003FE254  3C A0 80 4A */	lis r5, lbl_80498670@ha
/* 80401318 003FE258  90 01 00 44 */	stw r0, 0x44(r1)
/* 8040131C 003FE25C  BF 41 00 28 */	stmw r26, 0x28(r1)
/* 80401320 003FE260  3B A5 86 70 */	addi r29, r5, lbl_80498670@l
/* 80401324 003FE264  7C 9F 23 78 */	mr r31, r4
/* 80401328 003FE268  7C 7E 1B 78 */	mr r30, r3
/* 8040132C 003FE26C  81 1D 00 A4 */	lwz r8, 0xa4(r29)
/* 80401330 003FE270  80 FD 00 A8 */	lwz r7, 0xa8(r29)
/* 80401334 003FE274  80 DD 00 AC */	lwz r6, 0xac(r29)
/* 80401338 003FE278  80 BD 00 B0 */	lwz r5, 0xb0(r29)
/* 8040133C 003FE27C  80 9D 00 B4 */	lwz r4, 0xb4(r29)
/* 80401340 003FE280  80 1D 00 B8 */	lwz r0, 0xb8(r29)
/* 80401344 003FE284  91 01 00 08 */	stw r8, 8(r1)
/* 80401348 003FE288  90 E1 00 0C */	stw r7, 0xc(r1)
/* 8040134C 003FE28C  90 C1 00 10 */	stw r6, 0x10(r1)
/* 80401350 003FE290  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80401354 003FE294  90 81 00 18 */	stw r4, 0x18(r1)
/* 80401358 003FE298  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8040135C 003FE29C  48 05 2C 4D */	bl getDispMember__Q26Screen7ObjBaseFv
/* 80401360 003FE2A0  3C 80 59 5F */	lis r4, 0x595F474F@ha
/* 80401364 003FE2A4  3C A0 52 45 */	lis r5, 0x52454144@ha
/* 80401368 003FE2A8  38 C4 47 4F */	addi r6, r4, 0x595F474F@l
/* 8040136C 003FE2AC  38 80 4B 48 */	li r4, 0x4b48
/* 80401370 003FE2B0  38 A5 41 44 */	addi r5, r5, 0x52454144@l
/* 80401374 003FE2B4  4B F0 DF A9 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 80401378 003FE2B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8040137C 003FE2BC  40 82 00 18 */	bne .L_80401394
/* 80401380 003FE2C0  38 7D 00 0C */	addi r3, r29, 0xc
/* 80401384 003FE2C4  38 BD 00 1C */	addi r5, r29, 0x1c
/* 80401388 003FE2C8  38 80 00 59 */	li r4, 0x59
/* 8040138C 003FE2CC  4C C6 31 82 */	crclr 6
/* 80401390 003FE2D0  4B C2 92 B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80401394:
/* 80401394 003FE2D4  7F C3 F3 78 */	mr r3, r30
/* 80401398 003FE2D8  48 05 2C 11 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 8040139C 003FE2DC  7C 7D 1B 78 */	mr r29, r3
/* 804013A0 003FE2E0  88 03 00 0C */	lbz r0, 0xc(r3)
/* 804013A4 003FE2E4  28 00 00 00 */	cmplwi r0, 0
/* 804013A8 003FE2E8  41 82 00 24 */	beq .L_804013CC
/* 804013AC 003FE2EC  38 00 00 02 */	li r0, 2
/* 804013B0 003FE2F0  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen10ObjReadyGo@ha
/* 804013B4 003FE2F4  90 1E 00 6C */	stw r0, 0x6c(r30)
/* 804013B8 003FE2F8  38 63 41 10 */	addi r3, r3, msVal__Q32kh6Screen10ObjReadyGo@l
/* 804013BC 003FE2FC  C0 03 00 04 */	lfs f0, 4(r3)
/* 804013C0 003FE300  D0 1E 00 60 */	stfs f0, 0x60(r30)
/* 804013C4 003FE304  C0 03 00 08 */	lfs f0, 8(r3)
/* 804013C8 003FE308  D0 1E 00 64 */	stfs f0, 0x64(r30)
.L_804013CC:
/* 804013CC 003FE30C  7F DC F3 78 */	mr r28, r30
/* 804013D0 003FE310  3B 61 00 08 */	addi r27, r1, 8
/* 804013D4 003FE314  3B 40 00 00 */	li r26, 0
/* 804013D8 003FE318  48 00 00 98 */	b .L_80401470
.L_804013DC:
/* 804013DC 003FE31C  38 60 01 48 */	li r3, 0x148
/* 804013E0 003FE320  4B C2 2A C5 */	bl __nw__FUl
/* 804013E4 003FE324  7C 60 1B 79 */	or. r0, r3, r3
/* 804013E8 003FE328  41 82 00 0C */	beq .L_804013F4
/* 804013EC 003FE32C  48 03 39 C1 */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 804013F0 003FE330  7C 60 1B 78 */	mr r0, r3
.L_804013F4:
/* 804013F4 003FE334  90 1C 00 38 */	stw r0, 0x38(r28)
/* 804013F8 003FE338  7F E6 FB 78 */	mr r6, r31
/* 804013FC 003FE33C  80 9B 00 00 */	lwz r4, 0(r27)
/* 80401400 003FE340  3C A0 00 04 */	lis r5, 4
/* 80401404 003FE344  80 7C 00 38 */	lwz r3, 0x38(r28)
/* 80401408 003FE348  4B C3 E2 1D */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 8040140C 003FE34C  80 7B 00 04 */	lwz r3, 4(r27)
/* 80401410 003FE350  7F E4 FB 78 */	mr r4, r31
/* 80401414 003FE354  4B C2 1C 05 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 80401418 003FE358  4B C4 65 05 */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 8040141C 003FE35C  90 7C 00 40 */	stw r3, 0x40(r28)
/* 80401420 003FE360  7F E4 FB 78 */	mr r4, r31
/* 80401424 003FE364  80 7B 00 08 */	lwz r3, 8(r27)
/* 80401428 003FE368  4B C2 1B F1 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 8040142C 003FE36C  4B C4 64 F1 */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 80401430 003FE370  90 7C 00 48 */	stw r3, 0x48(r28)
/* 80401434 003FE374  80 7C 00 38 */	lwz r3, 0x38(r28)
/* 80401438 003FE378  80 9C 00 40 */	lwz r4, 0x40(r28)
/* 8040143C 003FE37C  81 83 00 00 */	lwz r12, 0(r3)
/* 80401440 003FE380  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 80401444 003FE384  7D 89 03 A6 */	mtctr r12
/* 80401448 003FE388  4E 80 04 21 */	bctrl 
/* 8040144C 003FE38C  80 7C 00 38 */	lwz r3, 0x38(r28)
/* 80401450 003FE390  80 9C 00 48 */	lwz r4, 0x48(r28)
/* 80401454 003FE394  81 83 00 00 */	lwz r12, 0(r3)
/* 80401458 003FE398  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8040145C 003FE39C  7D 89 03 A6 */	mtctr r12
/* 80401460 003FE3A0  4E 80 04 21 */	bctrl 
/* 80401464 003FE3A4  3B 9C 00 04 */	addi r28, r28, 4
/* 80401468 003FE3A8  3B 7B 00 0C */	addi r27, r27, 0xc
/* 8040146C 003FE3AC  3B 5A 00 01 */	addi r26, r26, 1
.L_80401470:
/* 80401470 003FE3B0  80 1E 00 6C */	lwz r0, 0x6c(r30)
/* 80401474 003FE3B4  7C 1A 00 00 */	cmpw r26, r0
/* 80401478 003FE3B8  41 80 FF 64 */	blt .L_804013DC
/* 8040147C 003FE3BC  7F C3 F3 78 */	mr r3, r30
/* 80401480 003FE3C0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80401484 003FE3C4  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80401488 003FE3C8  7D 89 03 A6 */	mtctr r12
/* 8040148C 003FE3CC  4E 80 04 21 */	bctrl 
/* 80401490 003FE3D0  38 80 00 00 */	li r4, 0
/* 80401494 003FE3D4  38 A0 00 00 */	li r5, 0
/* 80401498 003FE3D8  38 C0 00 00 */	li r6, 0
/* 8040149C 003FE3DC  38 E0 00 A0 */	li r7, 0xa0
/* 804014A0 003FE3E0  48 05 0D E5 */	bl setColorBG__Q26Screen9SceneBaseFUcUcUcUc
/* 804014A4 003FE3E4  80 1D 00 10 */	lwz r0, 0x10(r29)
/* 804014A8 003FE3E8  2C 00 00 00 */	cmpwi r0, 0
/* 804014AC 003FE3EC  40 82 00 14 */	bne .L_804014C0
/* 804014B0 003FE3F0  3C 60 C0 01 */	lis r3, 0xC0011022@ha
/* 804014B4 003FE3F4  38 63 10 22 */	addi r3, r3, 0xC0011022@l
/* 804014B8 003FE3F8  48 06 A2 B9 */	bl PSStart2DStream__FUl
/* 804014BC 003FE3FC  48 00 00 10 */	b .L_804014CC
.L_804014C0:
/* 804014C0 003FE400  3C 60 C0 01 */	lis r3, 0xC0011023@ha
/* 804014C4 003FE404  38 63 10 23 */	addi r3, r3, 0xC0011023@l
/* 804014C8 003FE408  48 06 A2 A9 */	bl PSStart2DStream__FUl
.L_804014CC:
/* 804014CC 003FE40C  BB 41 00 28 */	lmw r26, 0x28(r1)
/* 804014D0 003FE410  80 01 00 44 */	lwz r0, 0x44(r1)
/* 804014D4 003FE414  7C 08 03 A6 */	mtlr r0
/* 804014D8 003FE418  38 21 00 40 */	addi r1, r1, 0x40
/* 804014DC 003FE41C  4E 80 00 20 */	blr 

.global doUpdate__Q32kh6Screen10ObjReadyGoFv
doUpdate__Q32kh6Screen10ObjReadyGoFv:
/* 804014E0 003FE420  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804014E4 003FE424  7C 08 02 A6 */	mflr r0
/* 804014E8 003FE428  90 01 00 14 */	stw r0, 0x14(r1)
/* 804014EC 003FE42C  48 00 02 7D */	bl updateAnimation__Q32kh6Screen10ObjReadyGoFv
/* 804014F0 003FE430  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804014F4 003FE434  7C 08 03 A6 */	mtlr r0
/* 804014F8 003FE438  38 21 00 10 */	addi r1, r1, 0x10
/* 804014FC 003FE43C  4E 80 00 20 */	blr 

.global doDraw__Q32kh6Screen10ObjReadyGoFR8Graphics
doDraw__Q32kh6Screen10ObjReadyGoFR8Graphics:
/* 80401500 003FE440  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80401504 003FE444  7C 08 02 A6 */	mflr r0
/* 80401508 003FE448  90 01 00 44 */	stw r0, 0x44(r1)
/* 8040150C 003FE44C  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80401510 003FE450  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80401514 003FE454  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 80401518 003FE458  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 8040151C 003FE45C  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80401520 003FE460  7C 9C 23 78 */	mr r28, r4
/* 80401524 003FE464  7C 7B 1B 78 */	mr r27, r3
/* 80401528 003FE468  38 7C 00 BC */	addi r3, r28, 0xbc
/* 8040152C 003FE46C  81 84 00 BC */	lwz r12, 0xbc(r4)
/* 80401530 003FE470  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80401534 003FE474  7D 89 03 A6 */	mtctr r12
/* 80401538 003FE478  4E 80 04 21 */	bctrl 
/* 8040153C 003FE47C  C3 E2 1C F8 */	lfs f31, lbl_80520058@sda21(r2)
/* 80401540 003FE480  7F 7E DB 78 */	mr r30, r27
/* 80401544 003FE484  3B A0 00 00 */	li r29, 0
/* 80401548 003FE488  3F E0 52 4F */	lis r31, 0x524f
/* 8040154C 003FE48C  48 00 00 60 */	b .L_804015AC
.L_80401550:
/* 80401550 003FE490  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 80401554 003FE494  38 DF 4F 54 */	addi r6, r31, 0x4f54
/* 80401558 003FE498  C3 DE 00 60 */	lfs f30, 0x60(r30)
/* 8040155C 003FE49C  38 A0 00 00 */	li r5, 0
/* 80401560 003FE4A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80401564 003FE4A4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80401568 003FE4A8  7D 89 03 A6 */	mtctr r12
/* 8040156C 003FE4AC  4E 80 04 21 */	bctrl 
/* 80401570 003FE4B0  D3 E3 00 D4 */	stfs f31, 0xd4(r3)
/* 80401574 003FE4B4  D3 C3 00 D8 */	stfs f30, 0xd8(r3)
/* 80401578 003FE4B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8040157C 003FE4BC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80401580 003FE4C0  7D 89 03 A6 */	mtctr r12
/* 80401584 003FE4C4  4E 80 04 21 */	bctrl 
/* 80401588 003FE4C8  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 8040158C 003FE4CC  7F 84 E3 78 */	mr r4, r28
/* 80401590 003FE4D0  38 BC 00 BC */	addi r5, r28, 0xbc
/* 80401594 003FE4D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80401598 003FE4D8  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 8040159C 003FE4DC  7D 89 03 A6 */	mtctr r12
/* 804015A0 003FE4E0  4E 80 04 21 */	bctrl 
/* 804015A4 003FE4E4  3B DE 00 04 */	addi r30, r30, 4
/* 804015A8 003FE4E8  3B BD 00 01 */	addi r29, r29, 1
.L_804015AC:
/* 804015AC 003FE4EC  80 1B 00 6C */	lwz r0, 0x6c(r27)
/* 804015B0 003FE4F0  7C 1D 00 00 */	cmpw r29, r0
/* 804015B4 003FE4F4  41 80 FF 9C */	blt .L_80401550
/* 804015B8 003FE4F8  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 804015BC 003FE4FC  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 804015C0 003FE500  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 804015C4 003FE504  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 804015C8 003FE508  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 804015CC 003FE50C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 804015D0 003FE510  7C 08 03 A6 */	mtlr r0
/* 804015D4 003FE514  38 21 00 40 */	addi r1, r1, 0x40
/* 804015D8 003FE518  4E 80 00 20 */	blr 

.global doUpdateFadeout__Q32kh6Screen10ObjReadyGoFv
doUpdateFadeout__Q32kh6Screen10ObjReadyGoFv:
/* 804015DC 003FE51C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 804015E0 003FE520  7C 08 02 A6 */	mflr r0
/* 804015E4 003FE524  90 01 00 34 */	stw r0, 0x34(r1)
/* 804015E8 003FE528  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 804015EC 003FE52C  7C 7F 1B 78 */	mr r31, r3
/* 804015F0 003FE530  48 05 29 B9 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 804015F4 003FE534  3C 80 59 5F */	lis r4, 0x595F474F@ha
/* 804015F8 003FE538  3C A0 52 45 */	lis r5, 0x52454144@ha
/* 804015FC 003FE53C  38 C4 47 4F */	addi r6, r4, 0x595F474F@l
/* 80401600 003FE540  38 80 4B 48 */	li r4, 0x4b48
/* 80401604 003FE544  38 A5 41 44 */	addi r5, r5, 0x52454144@l
/* 80401608 003FE548  4B F0 DD 15 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 8040160C 003FE54C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80401610 003FE550  40 82 00 20 */	bne .L_80401630
/* 80401614 003FE554  3C 60 80 4A */	lis r3, lbl_8049867C@ha
/* 80401618 003FE558  3C A0 80 4A */	lis r5, lbl_8049868C@ha
/* 8040161C 003FE55C  38 63 86 7C */	addi r3, r3, lbl_8049867C@l
/* 80401620 003FE560  38 80 00 9F */	li r4, 0x9f
/* 80401624 003FE564  38 A5 86 8C */	addi r5, r5, lbl_8049868C@l
/* 80401628 003FE568  4C C6 31 82 */	crclr 6
/* 8040162C 003FE56C  4B C2 90 15 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80401630:
/* 80401630 003FE570  7F E3 FB 78 */	mr r3, r31
/* 80401634 003FE574  48 05 29 75 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 80401638 003FE578  88 03 00 0D */	lbz r0, 0xd(r3)
/* 8040163C 003FE57C  28 00 00 00 */	cmplwi r0, 0
/* 80401640 003FE580  41 82 00 AC */	beq .L_804016EC
/* 80401644 003FE584  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 80401648 003FE588  39 20 00 00 */	li r9, 0
/* 8040164C 003FE58C  38 04 11 48 */	addi r0, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 80401650 003FE590  3C 80 80 4F */	lis r4, __vt__Q32kh6Screen14DispFinalFloor@ha
/* 80401654 003FE594  90 01 00 18 */	stw r0, 0x18(r1)
/* 80401658 003FE598  38 04 A8 50 */	addi r0, r4, __vt__Q32kh6Screen14DispFinalFloor@l
/* 8040165C 003FE59C  3C 80 80 4E */	lis r4, __vt__Q26Screen12SceneArgBase@ha
/* 80401660 003FE5A0  3C A0 80 4E */	lis r5, __vt__Q26Screen11SetSceneArg@ha
/* 80401664 003FE5A4  91 21 00 1C */	stw r9, 0x1c(r1)
/* 80401668 003FE5A8  38 E4 84 68 */	addi r7, r4, __vt__Q26Screen12SceneArgBase@l
/* 8040166C 003FE5AC  38 80 00 01 */	li r4, 1
/* 80401670 003FE5B0  38 C5 84 58 */	addi r6, r5, __vt__Q26Screen11SetSceneArg@l
/* 80401674 003FE5B4  90 01 00 18 */	stw r0, 0x18(r1)
/* 80401678 003FE5B8  38 01 00 18 */	addi r0, r1, 0x18
/* 8040167C 003FE5BC  38 A0 4E 22 */	li r5, 0x4e22
/* 80401680 003FE5C0  99 21 00 20 */	stb r9, 0x20(r1)
/* 80401684 003FE5C4  89 03 00 0C */	lbz r8, 0xc(r3)
/* 80401688 003FE5C8  7F E3 FB 78 */	mr r3, r31
/* 8040168C 003FE5CC  90 E1 00 08 */	stw r7, 8(r1)
/* 80401690 003FE5D0  98 81 00 11 */	stb r4, 0x11(r1)
/* 80401694 003FE5D4  99 01 00 20 */	stb r8, 0x20(r1)
/* 80401698 003FE5D8  90 C1 00 08 */	stw r6, 8(r1)
/* 8040169C 003FE5DC  90 A1 00 0C */	stw r5, 0xc(r1)
/* 804016A0 003FE5E0  99 21 00 10 */	stb r9, 0x10(r1)
/* 804016A4 003FE5E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 804016A8 003FE5E8  99 21 00 11 */	stb r9, 0x11(r1)
/* 804016AC 003FE5EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 804016B0 003FE5F0  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 804016B4 003FE5F4  7D 89 03 A6 */	mtctr r12
/* 804016B8 003FE5F8  4E 80 04 21 */	bctrl 
/* 804016BC 003FE5FC  38 81 00 08 */	addi r4, r1, 8
/* 804016C0 003FE600  48 05 08 71 */	bl setScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
/* 804016C4 003FE604  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804016C8 003FE608  41 82 00 60 */	beq .L_80401728
/* 804016CC 003FE60C  7F E3 FB 78 */	mr r3, r31
/* 804016D0 003FE610  81 9F 00 00 */	lwz r12, 0(r31)
/* 804016D4 003FE614  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 804016D8 003FE618  7D 89 03 A6 */	mtctr r12
/* 804016DC 003FE61C  4E 80 04 21 */	bctrl 
/* 804016E0 003FE620  38 80 00 00 */	li r4, 0
/* 804016E4 003FE624  48 05 08 7D */	bl startScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
/* 804016E8 003FE628  48 00 00 40 */	b .L_80401728
.L_804016EC:
/* 804016EC 003FE62C  7F E3 FB 78 */	mr r3, r31
/* 804016F0 003FE630  81 9F 00 00 */	lwz r12, 0(r31)
/* 804016F4 003FE634  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 804016F8 003FE638  7D 89 03 A6 */	mtctr r12
/* 804016FC 003FE63C  4E 80 04 21 */	bctrl 
/* 80401700 003FE640  48 05 08 C1 */	bl setBackupScene__Q26Screen9SceneBaseFv
/* 80401704 003FE644  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80401708 003FE648  41 82 00 20 */	beq .L_80401728
/* 8040170C 003FE64C  7F E3 FB 78 */	mr r3, r31
/* 80401710 003FE650  81 9F 00 00 */	lwz r12, 0(r31)
/* 80401714 003FE654  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80401718 003FE658  7D 89 03 A6 */	mtctr r12
/* 8040171C 003FE65C  4E 80 04 21 */	bctrl 
/* 80401720 003FE660  38 80 00 00 */	li r4, 0
/* 80401724 003FE664  48 05 08 3D */	bl startScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
.L_80401728:
/* 80401728 003FE668  7F E3 FB 78 */	mr r3, r31
/* 8040172C 003FE66C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80401730 003FE670  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80401734 003FE674  7D 89 03 A6 */	mtctr r12
/* 80401738 003FE678  4E 80 04 21 */	bctrl 
/* 8040173C 003FE67C  38 80 00 00 */	li r4, 0
/* 80401740 003FE680  38 A0 00 00 */	li r5, 0
/* 80401744 003FE684  38 C0 00 00 */	li r6, 0
/* 80401748 003FE688  38 E0 00 00 */	li r7, 0
/* 8040174C 003FE68C  48 05 0B 39 */	bl setColorBG__Q26Screen9SceneBaseFUcUcUcUc
/* 80401750 003FE690  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80401754 003FE694  38 60 00 01 */	li r3, 1
/* 80401758 003FE698  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8040175C 003FE69C  7C 08 03 A6 */	mtlr r0
/* 80401760 003FE6A0  38 21 00 30 */	addi r1, r1, 0x30
/* 80401764 003FE6A4  4E 80 00 20 */	blr 

.global updateAnimation__Q32kh6Screen10ObjReadyGoFv
updateAnimation__Q32kh6Screen10ObjReadyGoFv:
/* 80401768 003FE6A8  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 8040176C 003FE6AC  7C 08 02 A6 */	mflr r0
/* 80401770 003FE6B0  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80401774 003FE6B4  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 80401778 003FE6B8  F3 E1 00 B8 */	psq_st f31, 184(r1), 0, qr0
/* 8040177C 003FE6BC  DB C1 00 A0 */	stfd f30, 0xa0(r1)
/* 80401780 003FE6C0  F3 C1 00 A8 */	psq_st f30, 168(r1), 0, qr0
/* 80401784 003FE6C4  DB A1 00 90 */	stfd f29, 0x90(r1)
/* 80401788 003FE6C8  F3 A1 00 98 */	psq_st f29, 152(r1), 0, qr0
/* 8040178C 003FE6CC  DB 81 00 80 */	stfd f28, 0x80(r1)
/* 80401790 003FE6D0  F3 81 00 88 */	psq_st f28, 136(r1), 0, qr0
/* 80401794 003FE6D4  BF 21 00 64 */	stmw r25, 0x64(r1)
/* 80401798 003FE6D8  7C 79 1B 78 */	mr r25, r3
/* 8040179C 003FE6DC  3B 60 00 00 */	li r27, 0
/* 804017A0 003FE6E0  48 05 28 09 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 804017A4 003FE6E4  3C 80 59 5F */	lis r4, 0x595F474F@ha
/* 804017A8 003FE6E8  3C A0 52 45 */	lis r5, 0x52454144@ha
/* 804017AC 003FE6EC  38 C4 47 4F */	addi r6, r4, 0x595F474F@l
/* 804017B0 003FE6F0  38 80 4B 48 */	li r4, 0x4b48
/* 804017B4 003FE6F4  38 A5 41 44 */	addi r5, r5, 0x52454144@l
/* 804017B8 003FE6F8  4B F0 DB 65 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 804017BC 003FE6FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804017C0 003FE700  40 82 00 20 */	bne .L_804017E0
/* 804017C4 003FE704  3C 60 80 4A */	lis r3, lbl_8049867C@ha
/* 804017C8 003FE708  3C A0 80 4A */	lis r5, lbl_8049868C@ha
/* 804017CC 003FE70C  38 63 86 7C */	addi r3, r3, lbl_8049867C@l
/* 804017D0 003FE710  38 80 00 C3 */	li r4, 0xc3
/* 804017D4 003FE714  38 A5 86 8C */	addi r5, r5, lbl_8049868C@l
/* 804017D8 003FE718  4C C6 31 82 */	crclr 6
/* 804017DC 003FE71C  4B C2 8E 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804017E0:
/* 804017E0 003FE720  7F 23 CB 78 */	mr r3, r25
/* 804017E4 003FE724  48 05 27 C5 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 804017E8 003FE728  3C 80 80 51 */	lis r4, msVal__Q32kh6Screen10ObjReadyGo@ha
/* 804017EC 003FE72C  CB A2 1D 08 */	lfd f29, lbl_80520068@sda21(r2)
/* 804017F0 003FE730  C3 C2 1C FC */	lfs f30, lbl_8052005C@sda21(r2)
/* 804017F4 003FE734  7C 7D 1B 78 */	mr r29, r3
/* 804017F8 003FE738  C3 E2 1D 00 */	lfs f31, lbl_80520060@sda21(r2)
/* 804017FC 003FE73C  7F 3C CB 78 */	mr r28, r25
/* 80401800 003FE740  3B C4 41 10 */	addi r30, r4, msVal__Q32kh6Screen10ObjReadyGo@l
/* 80401804 003FE744  3B 40 00 00 */	li r26, 0
/* 80401808 003FE748  3F E0 43 30 */	lis r31, 0x4330
/* 8040180C 003FE74C  48 00 02 58 */	b .L_80401A64
.L_80401810:
/* 80401810 003FE750  C0 1C 00 50 */	lfs f0, 0x50(r28)
/* 80401814 003FE754  80 7C 00 40 */	lwz r3, 0x40(r28)
/* 80401818 003FE758  D0 03 00 08 */	stfs f0, 8(r3)
/* 8040181C 003FE75C  C0 1C 00 58 */	lfs f0, 0x58(r28)
/* 80401820 003FE760  80 7C 00 48 */	lwz r3, 0x48(r28)
/* 80401824 003FE764  D0 03 00 08 */	stfs f0, 8(r3)
/* 80401828 003FE768  80 7C 00 38 */	lwz r3, 0x38(r28)
/* 8040182C 003FE76C  4B C3 F3 01 */	bl animation__9J2DScreenFv
/* 80401830 003FE770  C0 3C 00 50 */	lfs f1, 0x50(r28)
/* 80401834 003FE774  C0 1E 00 00 */	lfs f0, 0(r30)
/* 80401838 003FE778  93 E1 00 58 */	stw r31, 0x58(r1)
/* 8040183C 003FE77C  EC 01 00 2A */	fadds f0, f1, f0
/* 80401840 003FE780  D0 1C 00 50 */	stfs f0, 0x50(r28)
/* 80401844 003FE784  C0 3C 00 58 */	lfs f1, 0x58(r28)
/* 80401848 003FE788  C0 1E 00 00 */	lfs f0, 0(r30)
/* 8040184C 003FE78C  EC 01 00 2A */	fadds f0, f1, f0
/* 80401850 003FE790  D0 1C 00 58 */	stfs f0, 0x58(r28)
/* 80401854 003FE794  80 7C 00 40 */	lwz r3, 0x40(r28)
/* 80401858 003FE798  C0 5C 00 50 */	lfs f2, 0x50(r28)
/* 8040185C 003FE79C  A8 63 00 06 */	lha r3, 6(r3)
/* 80401860 003FE7A0  38 03 FF FE */	addi r0, r3, -2
/* 80401864 003FE7A4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80401868 003FE7A8  90 01 00 5C */	stw r0, 0x5c(r1)
/* 8040186C 003FE7AC  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 80401870 003FE7B0  EC 00 E8 28 */	fsubs f0, f0, f29
/* 80401874 003FE7B4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80401878 003FE7B8  4C 41 13 82 */	cror 2, 1, 2
/* 8040187C 003FE7BC  41 82 00 38 */	beq .L_804018B4
/* 80401880 003FE7C0  80 7C 00 48 */	lwz r3, 0x48(r28)
/* 80401884 003FE7C4  3C 00 43 30 */	lis r0, 0x4330
/* 80401888 003FE7C8  90 01 00 58 */	stw r0, 0x58(r1)
/* 8040188C 003FE7CC  A8 63 00 06 */	lha r3, 6(r3)
/* 80401890 003FE7D0  C0 3C 00 58 */	lfs f1, 0x58(r28)
/* 80401894 003FE7D4  38 03 FF FE */	addi r0, r3, -2
/* 80401898 003FE7D8  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8040189C 003FE7DC  90 01 00 5C */	stw r0, 0x5c(r1)
/* 804018A0 003FE7E0  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 804018A4 003FE7E4  EC 00 E8 28 */	fsubs f0, f0, f29
/* 804018A8 003FE7E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 804018AC 003FE7EC  4C 41 13 82 */	cror 2, 1, 2
/* 804018B0 003FE7F0  40 82 00 08 */	bne .L_804018B8
.L_804018B4:
/* 804018B4 003FE7F4  3B 60 00 01 */	li r27, 1
.L_804018B8:
/* 804018B8 003FE7F8  FC 02 F0 40 */	fcmpo cr0, f2, f30
/* 804018BC 003FE7FC  40 81 01 84 */	ble .L_80401A40
/* 804018C0 003FE800  38 9A 00 68 */	addi r4, r26, 0x68
/* 804018C4 003FE804  7C 19 20 AE */	lbzx r0, r25, r4
/* 804018C8 003FE808  28 00 00 00 */	cmplwi r0, 0
/* 804018CC 003FE80C  40 82 01 74 */	bne .L_80401A40
/* 804018D0 003FE810  38 00 00 01 */	li r0, 1
/* 804018D4 003FE814  3C 60 4E 41 */	lis r3, 0x4E414C4C@ha
/* 804018D8 003FE818  7C 19 21 AE */	stbx r0, r25, r4
/* 804018DC 003FE81C  38 C3 4C 4C */	addi r6, r3, 0x4E414C4C@l
/* 804018E0 003FE820  38 A0 00 00 */	li r5, 0
/* 804018E4 003FE824  80 7C 00 38 */	lwz r3, 0x38(r28)
/* 804018E8 003FE828  81 83 00 00 */	lwz r12, 0(r3)
/* 804018EC 003FE82C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 804018F0 003FE830  7D 89 03 A6 */	mtctr r12
/* 804018F4 003FE834  4E 80 04 21 */	bctrl 
/* 804018F8 003FE838  48 00 A1 01 */	bl getPaneCenterY__Q22kh6ScreenFP7J2DPane
/* 804018FC 003FE83C  80 7C 00 38 */	lwz r3, 0x38(r28)
/* 80401900 003FE840  3C 80 4E 41 */	lis r4, 0x4E414C4C@ha
/* 80401904 003FE844  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 80401908 003FE848  38 C4 4C 4C */	addi r6, r4, 0x4E414C4C@l
/* 8040190C 003FE84C  81 83 00 00 */	lwz r12, 0(r3)
/* 80401910 003FE850  38 A0 00 00 */	li r5, 0
/* 80401914 003FE854  EF 80 08 2A */	fadds f28, f0, f1
/* 80401918 003FE858  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040191C 003FE85C  7D 89 03 A6 */	mtctr r12
/* 80401920 003FE860  4E 80 04 21 */	bctrl 
/* 80401924 003FE864  48 00 9F E9 */	bl getPaneCenterX__Q22kh6ScreenFP7J2DPane
/* 80401928 003FE868  C0 1E 00 0C */	lfs f0, 0xc(r30)
/* 8040192C 003FE86C  3C 60 80 4C */	lis r3, __vt__Q25efx2d3Arg@ha
/* 80401930 003FE870  D3 81 00 14 */	stfs f28, 0x14(r1)
/* 80401934 003FE874  38 03 15 14 */	addi r0, r3, __vt__Q25efx2d3Arg@l
/* 80401938 003FE878  EC 00 08 2A */	fadds f0, f0, f1
/* 8040193C 003FE87C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80401940 003FE880  90 01 00 20 */	stw r0, 0x20(r1)
/* 80401944 003FE884  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80401948 003FE888  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8040194C 003FE88C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80401950 003FE890  90 01 00 08 */	stw r0, 8(r1)
/* 80401954 003FE894  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80401958 003FE898  C0 21 00 08 */	lfs f1, 8(r1)
/* 8040195C 003FE89C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80401960 003FE8A0  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80401964 003FE8A4  80 1D 00 10 */	lwz r0, 0x10(r29)
/* 80401968 003FE8A8  2C 00 00 00 */	cmpwi r0, 0
/* 8040196C 003FE8AC  40 82 00 74 */	bne .L_804019E0
/* 80401970 003FE8B0  3C 60 80 4C */	lis r3, __vt__Q25efx2d7TBaseIF@ha
/* 80401974 003FE8B4  39 00 00 00 */	li r8, 0
/* 80401978 003FE8B8  38 03 14 F0 */	addi r0, r3, __vt__Q25efx2d7TBaseIF@l
/* 8040197C 003FE8BC  3C 60 80 4C */	lis r3, __vt__Q25efx2d5TBase@ha
/* 80401980 003FE8C0  90 01 00 38 */	stw r0, 0x38(r1)
/* 80401984 003FE8C4  38 03 14 D8 */	addi r0, r3, __vt__Q25efx2d5TBase@l
/* 80401988 003FE8C8  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TSimple3@ha
/* 8040198C 003FE8CC  3C 60 80 4F */	lis r3, __vt__Q25efx2d9T2DGoBatl@ha
/* 80401990 003FE8D0  90 01 00 38 */	stw r0, 0x38(r1)
/* 80401994 003FE8D4  38 04 74 58 */	addi r0, r4, __vt__Q25efx2d8TSimple3@l
/* 80401998 003FE8D8  38 E0 00 0D */	li r7, 0xd
/* 8040199C 003FE8DC  38 C0 00 0E */	li r6, 0xe
/* 804019A0 003FE8E0  90 01 00 38 */	stw r0, 0x38(r1)
/* 804019A4 003FE8E4  38 03 AC 0C */	addi r0, r3, __vt__Q25efx2d9T2DGoBatl@l
/* 804019A8 003FE8E8  38 A0 00 0F */	li r5, 0xf
/* 804019AC 003FE8EC  38 61 00 38 */	addi r3, r1, 0x38
/* 804019B0 003FE8F0  99 01 00 3C */	stb r8, 0x3c(r1)
/* 804019B4 003FE8F4  38 81 00 18 */	addi r4, r1, 0x18
/* 804019B8 003FE8F8  99 01 00 3D */	stb r8, 0x3d(r1)
/* 804019BC 003FE8FC  B0 E1 00 40 */	sth r7, 0x40(r1)
/* 804019C0 003FE900  B0 C1 00 42 */	sth r6, 0x42(r1)
/* 804019C4 003FE904  B0 A1 00 44 */	sth r5, 0x44(r1)
/* 804019C8 003FE908  91 01 00 48 */	stw r8, 0x48(r1)
/* 804019CC 003FE90C  91 01 00 4C */	stw r8, 0x4c(r1)
/* 804019D0 003FE910  91 01 00 50 */	stw r8, 0x50(r1)
/* 804019D4 003FE914  90 01 00 38 */	stw r0, 0x38(r1)
/* 804019D8 003FE918  4B FB 7F A1 */	bl create__Q25efx2d8TSimple3FPQ25efx2d3Arg
/* 804019DC 003FE91C  48 00 00 64 */	b .L_80401A40
.L_804019E0:
/* 804019E0 003FE920  3C 60 80 4C */	lis r3, __vt__Q25efx2d7TBaseIF@ha
/* 804019E4 003FE924  38 E0 00 00 */	li r7, 0
/* 804019E8 003FE928  38 03 14 F0 */	addi r0, r3, __vt__Q25efx2d7TBaseIF@l
/* 804019EC 003FE92C  3C 60 80 4C */	lis r3, __vt__Q25efx2d5TBase@ha
/* 804019F0 003FE930  90 01 00 24 */	stw r0, 0x24(r1)
/* 804019F4 003FE934  38 03 14 D8 */	addi r0, r3, __vt__Q25efx2d5TBase@l
/* 804019F8 003FE938  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TSimple2@ha
/* 804019FC 003FE93C  3C 60 80 4F */	lis r3, __vt__Q25efx2d9T2DGoChal@ha
/* 80401A00 003FE940  90 01 00 24 */	stw r0, 0x24(r1)
/* 80401A04 003FE944  38 04 74 70 */	addi r0, r4, __vt__Q25efx2d8TSimple2@l
/* 80401A08 003FE948  38 C0 00 10 */	li r6, 0x10
/* 80401A0C 003FE94C  38 A0 00 11 */	li r5, 0x11
/* 80401A10 003FE950  90 01 00 24 */	stw r0, 0x24(r1)
/* 80401A14 003FE954  38 03 AB F4 */	addi r0, r3, __vt__Q25efx2d9T2DGoChal@l
/* 80401A18 003FE958  38 61 00 24 */	addi r3, r1, 0x24
/* 80401A1C 003FE95C  38 81 00 18 */	addi r4, r1, 0x18
/* 80401A20 003FE960  98 E1 00 28 */	stb r7, 0x28(r1)
/* 80401A24 003FE964  98 E1 00 29 */	stb r7, 0x29(r1)
/* 80401A28 003FE968  B0 C1 00 2C */	sth r6, 0x2c(r1)
/* 80401A2C 003FE96C  B0 A1 00 2E */	sth r5, 0x2e(r1)
/* 80401A30 003FE970  90 E1 00 30 */	stw r7, 0x30(r1)
/* 80401A34 003FE974  90 E1 00 34 */	stw r7, 0x34(r1)
/* 80401A38 003FE978  90 01 00 24 */	stw r0, 0x24(r1)
/* 80401A3C 003FE97C  4B FB 7E 8D */	bl create__Q25efx2d8TSimple2FPQ25efx2d3Arg
.L_80401A40:
/* 80401A40 003FE980  C0 1C 00 50 */	lfs f0, 0x50(r28)
/* 80401A44 003FE984  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 80401A48 003FE988  4C 41 13 82 */	cror 2, 1, 2
/* 80401A4C 003FE98C  40 82 00 10 */	bne .L_80401A5C
/* 80401A50 003FE990  38 00 00 01 */	li r0, 1
/* 80401A54 003FE994  98 19 00 6A */	stb r0, 0x6a(r25)
/* 80401A58 003FE998  90 1D 00 08 */	stw r0, 8(r29)
.L_80401A5C:
/* 80401A5C 003FE99C  3B 9C 00 04 */	addi r28, r28, 4
/* 80401A60 003FE9A0  3B 5A 00 01 */	addi r26, r26, 1
.L_80401A64:
/* 80401A64 003FE9A4  80 19 00 6C */	lwz r0, 0x6c(r25)
/* 80401A68 003FE9A8  7C 1A 00 00 */	cmpw r26, r0
/* 80401A6C 003FE9AC  41 80 FD A4 */	blt .L_80401810
/* 80401A70 003FE9B0  88 19 00 6A */	lbz r0, 0x6a(r25)
/* 80401A74 003FE9B4  28 00 00 00 */	cmplwi r0, 0
/* 80401A78 003FE9B8  41 82 00 3C */	beq .L_80401AB4
/* 80401A7C 003FE9BC  88 19 00 6B */	lbz r0, 0x6b(r25)
/* 80401A80 003FE9C0  28 00 00 00 */	cmplwi r0, 0
/* 80401A84 003FE9C4  40 82 00 30 */	bne .L_80401AB4
/* 80401A88 003FE9C8  88 1D 00 0D */	lbz r0, 0xd(r29)
/* 80401A8C 003FE9CC  28 00 00 00 */	cmplwi r0, 0
/* 80401A90 003FE9D0  40 82 00 24 */	bne .L_80401AB4
/* 80401A94 003FE9D4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80401A98 003FE9D8  80 63 00 58 */	lwz r3, 0x58(r3)
/* 80401A9C 003FE9DC  81 83 00 00 */	lwz r12, 0(r3)
/* 80401AA0 003FE9E0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80401AA4 003FE9E4  7D 89 03 A6 */	mtctr r12
/* 80401AA8 003FE9E8  4E 80 04 21 */	bctrl 
/* 80401AAC 003FE9EC  38 00 00 01 */	li r0, 1
/* 80401AB0 003FE9F0  98 19 00 6B */	stb r0, 0x6b(r25)
.L_80401AB4:
/* 80401AB4 003FE9F4  7F 63 DB 78 */	mr r3, r27
/* 80401AB8 003FE9F8  E3 E1 00 B8 */	psq_l f31, 184(r1), 0, qr0
/* 80401ABC 003FE9FC  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 80401AC0 003FEA00  E3 C1 00 A8 */	psq_l f30, 168(r1), 0, qr0
/* 80401AC4 003FEA04  CB C1 00 A0 */	lfd f30, 0xa0(r1)
/* 80401AC8 003FEA08  E3 A1 00 98 */	psq_l f29, 152(r1), 0, qr0
/* 80401ACC 003FEA0C  CB A1 00 90 */	lfd f29, 0x90(r1)
/* 80401AD0 003FEA10  E3 81 00 88 */	psq_l f28, 136(r1), 0, qr0
/* 80401AD4 003FEA14  CB 81 00 80 */	lfd f28, 0x80(r1)
/* 80401AD8 003FEA18  BB 21 00 64 */	lmw r25, 0x64(r1)
/* 80401ADC 003FEA1C  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 80401AE0 003FEA20  7C 08 03 A6 */	mtlr r0
/* 80401AE4 003FEA24  38 21 00 C0 */	addi r1, r1, 0xc0
/* 80401AE8 003FEA28  4E 80 00 20 */	blr 

.global doConfirmSetScene__Q32kh6Screen12SceneReadyGoFRQ26Screen11SetSceneArg
doConfirmSetScene__Q32kh6Screen12SceneReadyGoFRQ26Screen11SetSceneArg:
/* 80401AEC 003FEA2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80401AF0 003FEA30  7C 08 02 A6 */	mflr r0
/* 80401AF4 003FEA34  7C 83 23 78 */	mr r3, r4
/* 80401AF8 003FEA38  90 01 00 14 */	stw r0, 0x14(r1)
/* 80401AFC 003FEA3C  81 84 00 00 */	lwz r12, 0(r4)
/* 80401B00 003FEA40  81 8C 00 08 */	lwz r12, 8(r12)
/* 80401B04 003FEA44  7D 89 03 A6 */	mtctr r12
/* 80401B08 003FEA48  4E 80 04 21 */	bctrl 
/* 80401B0C 003FEA4C  20 83 27 1A */	subfic r4, r3, 0x271a
/* 80401B10 003FEA50  38 03 D8 E6 */	addi r0, r3, -10010
/* 80401B14 003FEA54  7C 80 03 78 */	or r0, r4, r0
/* 80401B18 003FEA58  54 03 0F FE */	srwi r3, r0, 0x1f
/* 80401B1C 003FEA5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80401B20 003FEA60  7C 08 03 A6 */	mtlr r0
/* 80401B24 003FEA64  38 21 00 10 */	addi r1, r1, 0x10
/* 80401B28 003FEA68  4E 80 00 20 */	blr 

.global getResName__Q32kh6Screen12SceneReadyGoCFv
getResName__Q32kh6Screen12SceneReadyGoCFv:
/* 80401B2C 003FEA6C  3C 60 80 4A */	lis r3, lbl_8049872C@ha
/* 80401B30 003FEA70  38 63 87 2C */	addi r3, r3, lbl_8049872C@l
/* 80401B34 003FEA74  4E 80 00 20 */	blr 

.global isUseBackupSceneInfo__Q32kh6Screen12SceneReadyGoFv
isUseBackupSceneInfo__Q32kh6Screen12SceneReadyGoFv:
/* 80401B38 003FEA78  38 60 00 01 */	li r3, 1
/* 80401B3C 003FEA7C  4E 80 00 20 */	blr 

.global getSceneType__Q32kh6Screen12SceneReadyGoFv
getSceneType__Q32kh6Screen12SceneReadyGoFv:
/* 80401B40 003FEA80  38 60 4E 21 */	li r3, 0x4e21
/* 80401B44 003FEA84  4E 80 00 20 */	blr 

.global getOwnerID__Q32kh6Screen12SceneReadyGoFv
getOwnerID__Q32kh6Screen12SceneReadyGoFv:
/* 80401B48 003FEA88  38 60 4B 48 */	li r3, 0x4b48
/* 80401B4C 003FEA8C  4E 80 00 20 */	blr 

.global getMemberID__Q32kh6Screen12SceneReadyGoFv
getMemberID__Q32kh6Screen12SceneReadyGoFv:
/* 80401B50 003FEA90  3C 80 59 5F */	lis r4, 0x595F474F@ha
/* 80401B54 003FEA94  3C 60 52 45 */	lis r3, 0x52454144@ha
/* 80401B58 003FEA98  38 84 47 4F */	addi r4, r4, 0x595F474F@l
/* 80401B5C 003FEA9C  38 63 41 44 */	addi r3, r3, 0x52454144@l
/* 80401B60 003FEAA0  4E 80 00 20 */	blr 

.global doCreateObj__Q32kh6Screen12SceneReadyGoFP10JKRArchive
doCreateObj__Q32kh6Screen12SceneReadyGoFP10JKRArchive:
/* 80401B64 003FEAA4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80401B68 003FEAA8  7C 08 02 A6 */	mflr r0
/* 80401B6C 003FEAAC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80401B70 003FEAB0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80401B74 003FEAB4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80401B78 003FEAB8  7C 9E 23 78 */	mr r30, r4
/* 80401B7C 003FEABC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80401B80 003FEAC0  7C 7D 1B 78 */	mr r29, r3
/* 80401B84 003FEAC4  38 60 00 70 */	li r3, 0x70
/* 80401B88 003FEAC8  4B C2 23 1D */	bl __nw__FUl
/* 80401B8C 003FEACC  7C 7F 1B 79 */	or. r31, r3, r3
/* 80401B90 003FEAD0  41 82 00 6C */	beq .L_80401BFC
/* 80401B94 003FEAD4  48 05 1F 55 */	bl __ct__Q26Screen7ObjBaseFv
/* 80401B98 003FEAD8  3C 80 80 4F */	lis r4, __vt__Q32kh6Screen10ObjReadyGo@ha
/* 80401B9C 003FEADC  38 60 00 00 */	li r3, 0
/* 80401BA0 003FEAE0  38 84 AC 24 */	addi r4, r4, __vt__Q32kh6Screen10ObjReadyGo@l
/* 80401BA4 003FEAE4  C0 02 1C F8 */	lfs f0, lbl_80520058@sda21(r2)
/* 80401BA8 003FEAE8  90 9F 00 00 */	stw r4, 0(r31)
/* 80401BAC 003FEAEC  38 84 00 10 */	addi r4, r4, 0x10
/* 80401BB0 003FEAF0  38 00 00 01 */	li r0, 1
/* 80401BB4 003FEAF4  90 9F 00 18 */	stw r4, 0x18(r31)
/* 80401BB8 003FEAF8  90 7F 00 38 */	stw r3, 0x38(r31)
/* 80401BBC 003FEAFC  90 7F 00 40 */	stw r3, 0x40(r31)
/* 80401BC0 003FEB00  90 7F 00 48 */	stw r3, 0x48(r31)
/* 80401BC4 003FEB04  D0 1F 00 58 */	stfs f0, 0x58(r31)
/* 80401BC8 003FEB08  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 80401BCC 003FEB0C  D0 1F 00 60 */	stfs f0, 0x60(r31)
/* 80401BD0 003FEB10  98 7F 00 68 */	stb r3, 0x68(r31)
/* 80401BD4 003FEB14  90 7F 00 3C */	stw r3, 0x3c(r31)
/* 80401BD8 003FEB18  90 7F 00 44 */	stw r3, 0x44(r31)
/* 80401BDC 003FEB1C  90 7F 00 4C */	stw r3, 0x4c(r31)
/* 80401BE0 003FEB20  D0 1F 00 5C */	stfs f0, 0x5c(r31)
/* 80401BE4 003FEB24  D0 1F 00 54 */	stfs f0, 0x54(r31)
/* 80401BE8 003FEB28  D0 1F 00 64 */	stfs f0, 0x64(r31)
/* 80401BEC 003FEB2C  98 7F 00 69 */	stb r3, 0x69(r31)
/* 80401BF0 003FEB30  90 1F 00 6C */	stw r0, 0x6c(r31)
/* 80401BF4 003FEB34  98 7F 00 6A */	stb r3, 0x6a(r31)
/* 80401BF8 003FEB38  98 7F 00 6B */	stb r3, 0x6b(r31)
.L_80401BFC:
/* 80401BFC 003FEB3C  7F A3 EB 78 */	mr r3, r29
/* 80401C00 003FEB40  7F E4 FB 78 */	mr r4, r31
/* 80401C04 003FEB44  7F C5 F3 78 */	mr r5, r30
/* 80401C08 003FEB48  48 05 01 6D */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 80401C0C 003FEB4C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80401C10 003FEB50  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80401C14 003FEB54  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80401C18 003FEB58  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80401C1C 003FEB5C  7C 08 03 A6 */	mtlr r0
/* 80401C20 003FEB60  38 21 00 20 */	addi r1, r1, 0x20
/* 80401C24 003FEB64  4E 80 00 20 */	blr 

.global __dt__Q32kh6Screen10ObjReadyGoFv
__dt__Q32kh6Screen10ObjReadyGoFv:
/* 80401C28 003FEB68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80401C2C 003FEB6C  7C 08 02 A6 */	mflr r0
/* 80401C30 003FEB70  90 01 00 14 */	stw r0, 0x14(r1)
/* 80401C34 003FEB74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80401C38 003FEB78  7C 9F 23 78 */	mr r31, r4
/* 80401C3C 003FEB7C  93 C1 00 08 */	stw r30, 8(r1)
/* 80401C40 003FEB80  7C 7E 1B 79 */	or. r30, r3, r3
/* 80401C44 003FEB84  41 82 00 74 */	beq .L_80401CB8
/* 80401C48 003FEB88  3C 80 80 4F */	lis r4, __vt__Q32kh6Screen10ObjReadyGo@ha
/* 80401C4C 003FEB8C  38 84 AC 24 */	addi r4, r4, __vt__Q32kh6Screen10ObjReadyGo@l
/* 80401C50 003FEB90  90 9E 00 00 */	stw r4, 0(r30)
/* 80401C54 003FEB94  38 04 00 10 */	addi r0, r4, 0x10
/* 80401C58 003FEB98  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80401C5C 003FEB9C  41 82 00 4C */	beq .L_80401CA8
/* 80401C60 003FEBA0  3C 80 80 4F */	lis r4, __vt__Q26Screen7ObjBase@ha
/* 80401C64 003FEBA4  38 84 D7 58 */	addi r4, r4, __vt__Q26Screen7ObjBase@l
/* 80401C68 003FEBA8  90 9E 00 00 */	stw r4, 0(r30)
/* 80401C6C 003FEBAC  38 04 00 10 */	addi r0, r4, 0x10
/* 80401C70 003FEBB0  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80401C74 003FEBB4  41 82 00 34 */	beq .L_80401CA8
/* 80401C78 003FEBB8  3C 80 80 4E */	lis r4, __vt__Q26Screen8IObjBase@ha
/* 80401C7C 003FEBBC  38 84 82 40 */	addi r4, r4, __vt__Q26Screen8IObjBase@l
/* 80401C80 003FEBC0  90 9E 00 00 */	stw r4, 0(r30)
/* 80401C84 003FEBC4  38 04 00 10 */	addi r0, r4, 0x10
/* 80401C88 003FEBC8  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80401C8C 003FEBCC  48 00 F9 45 */	bl del__5CNodeFv
/* 80401C90 003FEBD0  38 7E 00 18 */	addi r3, r30, 0x18
/* 80401C94 003FEBD4  38 80 00 00 */	li r4, 0
/* 80401C98 003FEBD8  4B C1 B3 9D */	bl __dt__11JKRDisposerFv
/* 80401C9C 003FEBDC  7F C3 F3 78 */	mr r3, r30
/* 80401CA0 003FEBE0  38 80 00 00 */	li r4, 0
/* 80401CA4 003FEBE4  48 00 F8 E5 */	bl __dt__5CNodeFv
.L_80401CA8:
/* 80401CA8 003FEBE8  7F E0 07 35 */	extsh. r0, r31
/* 80401CAC 003FEBEC  40 81 00 0C */	ble .L_80401CB8
/* 80401CB0 003FEBF0  7F C3 F3 78 */	mr r3, r30
/* 80401CB4 003FEBF4  4B C2 24 01 */	bl __dl__FPv
.L_80401CB8:
/* 80401CB8 003FEBF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80401CBC 003FEBFC  7F C3 F3 78 */	mr r3, r30
/* 80401CC0 003FEC00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80401CC4 003FEC04  83 C1 00 08 */	lwz r30, 8(r1)
/* 80401CC8 003FEC08  7C 08 03 A6 */	mtlr r0
/* 80401CCC 003FEC0C  38 21 00 10 */	addi r1, r1, 0x10
/* 80401CD0 003FEC10  4E 80 00 20 */	blr 

__sinit_khReadyGo_cpp: # static initializer
/* 80401CD4 003FEC14  3C 60 80 51 */	lis r3, __float_nan@ha
/* 80401CD8 003FEC18  38 00 FF FF */	li r0, -1
/* 80401CDC 003FEC1C  38 A3 48 B0 */	addi r5, r3, __float_nan@l
/* 80401CE0 003FEC20  3C 80 80 4F */	lis r4, lbl_804EAB98@ha
/* 80401CE4 003FEC24  C0 A5 00 00 */	lfs f5, 0(r5)
/* 80401CE8 003FEC28  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen10ObjReadyGo@ha
/* 80401CEC 003FEC2C  C0 82 1D 10 */	lfs f4, lbl_80520070@sda21(r2)
/* 80401CF0 003FEC30  38 63 41 10 */	addi r3, r3, msVal__Q32kh6Screen10ObjReadyGo@l
/* 80401CF4 003FEC34  D4 A4 AB 98 */	stfsu f5, lbl_804EAB98@l(r4)
/* 80401CF8 003FEC38  C0 62 1D 14 */	lfs f3, lbl_80520074@sda21(r2)
/* 80401CFC 003FEC3C  C0 42 1D 18 */	lfs f2, lbl_80520078@sda21(r2)
/* 80401D00 003FEC40  C0 22 1D 1C */	lfs f1, lbl_8052007C@sda21(r2)
/* 80401D04 003FEC44  C0 02 1D 20 */	lfs f0, lbl_80520080@sda21(r2)
/* 80401D08 003FEC48  90 0D 9A A8 */	stw r0, lbl_80516128@sda21(r13)
/* 80401D0C 003FEC4C  D0 AD 9A AC */	stfs f5, lbl_8051612C@sda21(r13)
/* 80401D10 003FEC50  D0 A4 00 04 */	stfs f5, 4(r4)
/* 80401D14 003FEC54  D0 A4 00 08 */	stfs f5, 8(r4)
/* 80401D18 003FEC58  D0 83 00 04 */	stfs f4, 4(r3)
/* 80401D1C 003FEC5C  D0 63 00 08 */	stfs f3, 8(r3)
/* 80401D20 003FEC60  D0 43 00 00 */	stfs f2, 0(r3)
/* 80401D24 003FEC64  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 80401D28 003FEC68  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 80401D2C 003FEC6C  4E 80 00 20 */	blr 

.global "@24@__dt__Q32kh6Screen10ObjReadyGoFv"
"@24@__dt__Q32kh6Screen10ObjReadyGoFv":
/* 80401D30 003FEC70  38 63 FF E8 */	addi r3, r3, -24
/* 80401D34 003FEC74  4B FF FE F4 */	b __dt__Q32kh6Screen10ObjReadyGoFv
