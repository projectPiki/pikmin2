.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_8048F5A8:
	.asciz "ogObjWorldMapInfoWindow0.cpp"
.balign 4
lbl_8048F5C8:
	.asciz "SMenuPauseVS screen"
.balign 4
lbl_8048F5DC:
	.asciz "P2Assert"
.balign 4
lbl_8048F5E8:
	.asciz "info_window.blo"
.balign 4
lbl_8048F5F8:
	.asciz "screenObj.h"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q32og9newScreen22ObjWorldMapInfoWindow0
__vt__Q32og9newScreen22ObjWorldMapInfoWindow0:
	.4byte 0
	.4byte 0
	.4byte __dt__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__Q32og9newScreen22ObjWorldMapInfoWindow0Fv"
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
	.4byte doStart__Q32og9newScreen22ObjWorldMapInfoWindow0FPCQ26Screen13StartSceneArg
	.4byte doEnd__Q32og9newScreen15ObjSMenuPauseVSFPCQ26Screen11EndSceneArg
	.4byte doCreate__Q32og9newScreen22ObjWorldMapInfoWindow0FP10JKRArchive
	.4byte doUpdateFadein__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
	.4byte doUpdateFadeinFinish__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte doUpdate__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte doUpdateFinish__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte doUpdateFadeout__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte doUpdateFadeoutFinish__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
	.4byte doDraw__Q32og9newScreen15ObjSMenuPauseVSFR8Graphics
	.4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
	.4byte in_L__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte in_R__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte wait__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte out_L__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
	.4byte out_R__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte loop__Q32og9newScreen12ObjSMenuBaseFv
	.4byte doUpdateCancelAction__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte doUpdateRAction__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte doUpdateLAction__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte updateFadeIn__Q32og9newScreen12ObjSMenuBaseFv
	.4byte updateFadeOut__Q32og9newScreen12ObjSMenuBaseFv
	.4byte commonUpdate__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
	.4byte out_cancel__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
	.4byte out_menu_0__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
	.4byte out_menu_1__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
	.4byte getResult__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
.global __vt__Q32og6Screen26DispMemberWorldMapInfoWin0
__vt__Q32og6Screen26DispMemberWorldMapInfoWin0:
	.4byte 0
	.4byte 0
	.4byte getSize__Q32og6Screen26DispMemberWorldMapInfoWin0Fv
	.4byte getOwnerID__Q32og6Screen26DispMemberWorldMapInfoWin0Fv
	.4byte getMemberID__Q32og6Screen26DispMemberWorldMapInfoWin0Fv
	.4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051DF08:
	.float 0.5
lbl_8051DF0C:
	.float 0.6
lbl_8051DF10:
	.float 800.0
lbl_8051DF14:
	.float 1.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og9newScreen22ObjWorldMapInfoWindow0FPCc
__ct__Q32og9newScreen22ObjWorldMapInfoWindow0FPCc:
/* 8032B340 00328280  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032B344 00328284  7C 08 02 A6 */	mflr r0
/* 8032B348 00328288  3C A0 80 49 */	lis r5, lbl_8048F5C8@ha
/* 8032B34C 0032828C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032B350 00328290  38 05 F5 C8 */	addi r0, r5, lbl_8048F5C8@l
/* 8032B354 00328294  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8032B358 00328298  7C 9F 23 78 */	mr r31, r4
/* 8032B35C 0032829C  7C 04 03 78 */	mr r4, r0
/* 8032B360 003282A0  93 C1 00 08 */	stw r30, 8(r1)
/* 8032B364 003282A4  7C 7E 1B 78 */	mr r30, r3
/* 8032B368 003282A8  4B FF DE 29 */	bl __ct__Q32og9newScreen15ObjSMenuPauseVSFPCc
/* 8032B36C 003282AC  3C 60 80 4E */	lis r3, __vt__Q32og9newScreen22ObjWorldMapInfoWindow0@ha
/* 8032B370 003282B0  38 00 00 00 */	li r0, 0
/* 8032B374 003282B4  38 83 9D 50 */	addi r4, r3, __vt__Q32og9newScreen22ObjWorldMapInfoWindow0@l
/* 8032B378 003282B8  7F C3 F3 78 */	mr r3, r30
/* 8032B37C 003282BC  90 9E 00 00 */	stw r4, 0(r30)
/* 8032B380 003282C0  38 84 00 10 */	addi r4, r4, 0x10
/* 8032B384 003282C4  90 9E 00 18 */	stw r4, 0x18(r30)
/* 8032B388 003282C8  90 1E 00 CC */	stw r0, 0xcc(r30)
/* 8032B38C 003282CC  93 FE 00 14 */	stw r31, 0x14(r30)
/* 8032B390 003282D0  90 1E 00 B0 */	stw r0, 0xb0(r30)
/* 8032B394 003282D4  90 1E 00 B4 */	stw r0, 0xb4(r30)
/* 8032B398 003282D8  90 1E 00 B8 */	stw r0, 0xb8(r30)
/* 8032B39C 003282DC  90 1E 00 BC */	stw r0, 0xbc(r30)
/* 8032B3A0 003282E0  90 1E 00 D0 */	stw r0, 0xd0(r30)
/* 8032B3A4 003282E4  80 1E 00 D0 */	lwz r0, 0xd0(r30)
/* 8032B3A8 003282E8  90 1E 00 AC */	stw r0, 0xac(r30)
/* 8032B3AC 003282EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8032B3B0 003282F0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8032B3B4 003282F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032B3B8 003282F8  7C 08 03 A6 */	mtlr r0
/* 8032B3BC 003282FC  38 21 00 10 */	addi r1, r1, 0x10
/* 8032B3C0 00328300  4E 80 00 20 */	blr 

.global doCreate__Q32og9newScreen22ObjWorldMapInfoWindow0FP10JKRArchive
doCreate__Q32og9newScreen22ObjWorldMapInfoWindow0FP10JKRArchive:
/* 8032B3C4 00328304  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8032B3C8 00328308  7C 08 02 A6 */	mflr r0
/* 8032B3CC 0032830C  3C A0 80 49 */	lis r5, lbl_8048F5A8@ha
/* 8032B3D0 00328310  90 01 00 44 */	stw r0, 0x44(r1)
/* 8032B3D4 00328314  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8032B3D8 00328318  3B E5 F5 A8 */	addi r31, r5, lbl_8048F5A8@l
/* 8032B3DC 0032831C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8032B3E0 00328320  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8032B3E4 00328324  7C 9D 23 78 */	mr r29, r4
/* 8032B3E8 00328328  93 81 00 30 */	stw r28, 0x30(r1)
/* 8032B3EC 0032832C  7C 7C 1B 78 */	mr r28, r3
/* 8032B3F0 00328330  48 12 8B B9 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 8032B3F4 00328334  3C 80 00 4F */	lis r4, 0x004F4741@ha
/* 8032B3F8 00328338  3C C0 57 69 */	lis r6, 0x57696E30@ha
/* 8032B3FC 0032833C  3C A0 57 4D */	lis r5, 0x574D6170@ha
/* 8032B400 00328340  7C 7E 1B 78 */	mr r30, r3
/* 8032B404 00328344  38 84 47 41 */	addi r4, r4, 0x004F4741@l
/* 8032B408 00328348  38 C6 6E 30 */	addi r6, r6, 0x57696E30@l
/* 8032B40C 0032834C  38 A5 61 70 */	addi r5, r5, 0x574D6170@l
/* 8032B410 00328350  4B FE 3F 0D */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 8032B414 00328354  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8032B418 00328358  41 82 00 0C */	beq .L_8032B424
/* 8032B41C 0032835C  93 DC 00 CC */	stw r30, 0xcc(r28)
/* 8032B420 00328360  48 00 01 08 */	b .L_8032B528
.L_8032B424:
/* 8032B424 00328364  3C 80 4D 52 */	lis r4, 0x4D524D52@ha
/* 8032B428 00328368  3C C0 4C 45 */	lis r6, 0x4C454354@ha
/* 8032B42C 0032836C  3C A0 56 53 */	lis r5, 0x56535345@ha
/* 8032B430 00328370  7F C3 F3 78 */	mr r3, r30
/* 8032B434 00328374  38 84 4D 52 */	addi r4, r4, 0x4D524D52@l
/* 8032B438 00328378  38 C6 43 54 */	addi r6, r6, 0x4C454354@l
/* 8032B43C 0032837C  38 A5 53 45 */	addi r5, r5, 0x56535345@l
/* 8032B440 00328380  4B FE 3E DD */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 8032B444 00328384  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8032B448 00328388  41 82 00 10 */	beq .L_8032B458
/* 8032B44C 0032838C  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 8032B450 00328390  90 1C 00 CC */	stw r0, 0xcc(r28)
/* 8032B454 00328394  48 00 00 D4 */	b .L_8032B528
.L_8032B458:
/* 8032B458 00328398  3C 80 4D 52 */	lis r4, 0x4D524D52@ha
/* 8032B45C 0032839C  3C C0 4C 45 */	lis r6, 0x4C454354@ha
/* 8032B460 003283A0  3C A0 43 48 */	lis r5, 0x43485345@ha
/* 8032B464 003283A4  7F C3 F3 78 */	mr r3, r30
/* 8032B468 003283A8  38 84 4D 52 */	addi r4, r4, 0x4D524D52@l
/* 8032B46C 003283AC  38 C6 43 54 */	addi r6, r6, 0x4C454354@l
/* 8032B470 003283B0  38 A5 53 45 */	addi r5, r5, 0x43485345@l
/* 8032B474 003283B4  4B FE 3E A9 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 8032B478 003283B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8032B47C 003283BC  41 82 00 10 */	beq .L_8032B48C
/* 8032B480 003283C0  80 1E 00 20 */	lwz r0, 0x20(r30)
/* 8032B484 003283C4  90 1C 00 CC */	stw r0, 0xcc(r28)
/* 8032B488 003283C8  48 00 00 A0 */	b .L_8032B528
.L_8032B48C:
/* 8032B48C 003283CC  3C 80 4D 52 */	lis r4, 0x4D524D52@ha
/* 8032B490 003283D0  3C C0 4E 45 */	lis r6, 0x4E454D59@ha
/* 8032B494 003283D4  7F C3 F3 78 */	mr r3, r30
/* 8032B498 003283D8  38 A0 44 45 */	li r5, 0x4445
/* 8032B49C 003283DC  38 84 4D 52 */	addi r4, r4, 0x4D524D52@l
/* 8032B4A0 003283E0  38 C6 4D 59 */	addi r6, r6, 0x4E454D59@l
/* 8032B4A4 003283E4  4B FE 3E 79 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 8032B4A8 003283E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8032B4AC 003283EC  41 82 00 30 */	beq .L_8032B4DC
/* 8032B4B0 003283F0  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 8032B4B4 003283F4  90 1C 00 CC */	stw r0, 0xcc(r28)
/* 8032B4B8 003283F8  80 1C 00 CC */	lwz r0, 0xcc(r28)
/* 8032B4BC 003283FC  28 00 00 00 */	cmplwi r0, 0
/* 8032B4C0 00328400  40 82 00 68 */	bne .L_8032B528
/* 8032B4C4 00328404  38 7F 00 00 */	addi r3, r31, 0
/* 8032B4C8 00328408  38 BF 00 34 */	addi r5, r31, 0x34
/* 8032B4CC 0032840C  38 80 00 7D */	li r4, 0x7d
/* 8032B4D0 00328410  4C C6 31 82 */	crclr 6
/* 8032B4D4 00328414  4B CF F1 6D */	bl panic_f__12JUTExceptionFPCciPCce
/* 8032B4D8 00328418  48 00 00 50 */	b .L_8032B528
.L_8032B4DC:
/* 8032B4DC 0032841C  3C 80 4D 52 */	lis r4, 0x4D524D52@ha
/* 8032B4E0 00328420  3C C0 49 54 */	lis r6, 0x4954454D@ha
/* 8032B4E4 00328424  7F C3 F3 78 */	mr r3, r30
/* 8032B4E8 00328428  38 A0 00 44 */	li r5, 0x44
/* 8032B4EC 0032842C  38 84 4D 52 */	addi r4, r4, 0x4D524D52@l
/* 8032B4F0 00328430  38 C6 45 4D */	addi r6, r6, 0x4954454D@l
/* 8032B4F4 00328434  4B FE 3E 29 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 8032B4F8 00328438  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8032B4FC 0032843C  41 82 00 2C */	beq .L_8032B528
/* 8032B500 00328440  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 8032B504 00328444  90 1C 00 CC */	stw r0, 0xcc(r28)
/* 8032B508 00328448  80 1C 00 CC */	lwz r0, 0xcc(r28)
/* 8032B50C 0032844C  28 00 00 00 */	cmplwi r0, 0
/* 8032B510 00328450  40 82 00 18 */	bne .L_8032B528
/* 8032B514 00328454  38 7F 00 00 */	addi r3, r31, 0
/* 8032B518 00328458  38 BF 00 34 */	addi r5, r31, 0x34
/* 8032B51C 0032845C  38 80 00 81 */	li r4, 0x81
/* 8032B520 00328460  4C C6 31 82 */	crclr 6
/* 8032B524 00328464  4B CF F1 1D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8032B528:
/* 8032B528 00328468  80 1C 00 CC */	lwz r0, 0xcc(r28)
/* 8032B52C 0032846C  28 00 00 00 */	cmplwi r0, 0
/* 8032B530 00328470  40 82 00 70 */	bne .L_8032B5A0
/* 8032B534 00328474  38 60 00 28 */	li r3, 0x28
/* 8032B538 00328478  4B CF 89 6D */	bl __nw__FUl
/* 8032B53C 0032847C  28 03 00 00 */	cmplwi r3, 0
/* 8032B540 00328480  41 82 00 5C */	beq .L_8032B59C
/* 8032B544 00328484  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 8032B548 00328488  3C E0 80 4E */	lis r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@ha
/* 8032B54C 0032848C  38 04 11 48 */	addi r0, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 8032B550 00328490  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 8032B554 00328494  90 03 00 00 */	stw r0, 0(r3)
/* 8032B558 00328498  39 00 00 00 */	li r8, 0
/* 8032B55C 0032849C  3C A0 00 34 */	lis r5, 0x00343731@ha
/* 8032B560 003284A0  3C 80 31 5F */	lis r4, 0x315F3030@ha
/* 8032B564 003284A4  91 03 00 04 */	stw r8, 4(r3)
/* 8032B568 003284A8  38 07 9E 08 */	addi r0, r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@l
/* 8032B56C 003284AC  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 8032B570 003284B0  38 A5 37 31 */	addi r5, r5, 0x00343731@l
/* 8032B574 003284B4  90 03 00 00 */	stw r0, 0(r3)
/* 8032B578 003284B8  38 84 30 30 */	addi r4, r4, 0x315F3030@l
/* 8032B57C 003284BC  38 00 00 B4 */	li r0, 0xb4
/* 8032B580 003284C0  91 03 00 08 */	stw r8, 8(r3)
/* 8032B584 003284C4  90 C3 00 14 */	stw r6, 0x14(r3)
/* 8032B588 003284C8  90 A3 00 10 */	stw r5, 0x10(r3)
/* 8032B58C 003284CC  90 83 00 1C */	stw r4, 0x1c(r3)
/* 8032B590 003284D0  90 A3 00 18 */	stw r5, 0x18(r3)
/* 8032B594 003284D4  98 03 00 20 */	stb r0, 0x20(r3)
/* 8032B598 003284D8  99 03 00 21 */	stb r8, 0x21(r3)
.L_8032B59C:
/* 8032B59C 003284DC  90 7C 00 CC */	stw r3, 0xcc(r28)
.L_8032B5A0:
/* 8032B5A0 003284E0  38 60 01 48 */	li r3, 0x148
/* 8032B5A4 003284E4  4B CF 89 01 */	bl __nw__FUl
/* 8032B5A8 003284E8  7C 60 1B 79 */	or. r0, r3, r3
/* 8032B5AC 003284EC  41 82 00 0C */	beq .L_8032B5B8
/* 8032B5B0 003284F0  48 10 97 FD */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 8032B5B4 003284F4  7C 60 1B 78 */	mr r0, r3
.L_8032B5B8:
/* 8032B5B8 003284F8  90 1C 00 B0 */	stw r0, 0xb0(r28)
/* 8032B5BC 003284FC  7F A6 EB 78 */	mr r6, r29
/* 8032B5C0 00328500  38 9F 00 40 */	addi r4, r31, 0x40
/* 8032B5C4 00328504  3C A0 01 10 */	lis r5, 0x110
/* 8032B5C8 00328508  80 7C 00 B0 */	lwz r3, 0xb0(r28)
/* 8032B5CC 0032850C  4B D1 40 59 */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 8032B5D0 00328510  3C A0 6E 75 */	lis r5, 0x6E753030@ha
/* 8032B5D4 00328514  3C 80 00 4E */	lis r4, 0x004E6D65@ha
/* 8032B5D8 00328518  80 7C 00 B0 */	lwz r3, 0xb0(r28)
/* 8032B5DC 0032851C  38 C5 30 30 */	addi r6, r5, 0x6E753030@l
/* 8032B5E0 00328520  38 A4 6D 65 */	addi r5, r4, 0x004E6D65@l
/* 8032B5E4 00328524  4B FD 78 C9 */	bl TagSearch__Q22og6ScreenFP9J2DScreenUx
/* 8032B5E8 00328528  38 00 00 00 */	li r0, 0
/* 8032B5EC 0032852C  3C A0 6E 75 */	lis r5, 0x6E753032@ha
/* 8032B5F0 00328530  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8032B5F4 00328534  3C 80 00 4E */	lis r4, 0x004E6D65@ha
/* 8032B5F8 00328538  38 C5 30 32 */	addi r6, r5, 0x6E753032@l
/* 8032B5FC 0032853C  80 7C 00 B0 */	lwz r3, 0xb0(r28)
/* 8032B600 00328540  38 A4 6D 65 */	addi r5, r4, 0x004E6D65@l
/* 8032B604 00328544  4B FD 78 A9 */	bl TagSearch__Q22og6ScreenFP9J2DScreenUx
/* 8032B608 00328548  38 00 00 00 */	li r0, 0
/* 8032B60C 0032854C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8032B610 00328550  80 7C 00 B0 */	lwz r3, 0xb0(r28)
/* 8032B614 00328554  4B FF EE 2D */	bl setFurikoScreen__Q22og6ScreenFPQ29P2DScreen3Mgr
/* 8032B618 00328558  38 60 00 78 */	li r3, 0x78
/* 8032B61C 0032855C  4B CF 88 89 */	bl __nw__FUl
/* 8032B620 00328560  7C 60 1B 79 */	or. r0, r3, r3
/* 8032B624 00328564  41 82 00 0C */	beq .L_8032B630
/* 8032B628 00328568  4B FD E8 01 */	bl __ct__Q32og6Screen7MenuMgrFv
/* 8032B62C 0032856C  7C 60 1B 78 */	mr r0, r3
.L_8032B630:
/* 8032B630 00328570  3D 40 79 5F */	lis r10, 0x795F6972@ha
/* 8032B634 00328574  90 1C 00 B4 */	stw r0, 0xb4(r28)
/* 8032B638 00328578  38 0A 69 72 */	addi r0, r10, 0x795F6972@l
/* 8032B63C 0032857C  3C 80 6D 30 */	lis r4, 0x6D303179@ha
/* 8032B640 00328580  3C 60 50 6D */	lis r3, 0x506D3031@ha
/* 8032B644 00328584  90 01 00 0C */	stw r0, 0xc(r1)
/* 8032B648 00328588  39 23 30 31 */	addi r9, r3, 0x506D3031@l
/* 8032B64C 0032858C  38 C4 31 79 */	addi r6, r4, 0x6D303179@l
/* 8032B650 00328590  91 21 00 08 */	stw r9, 8(r1)
/* 8032B654 00328594  38 E4 31 6E */	addi r7, r4, 0x316e
/* 8032B658 00328598  3C 60 6E 5F */	lis r3, 0x6E5F696C@ha
/* 8032B65C 0032859C  38 A0 00 4E */	li r5, 0x4e
/* 8032B660 003285A0  90 E1 00 14 */	stw r7, 0x14(r1)
/* 8032B664 003285A4  39 60 00 54 */	li r11, 0x54
/* 8032B668 003285A8  38 83 69 6C */	addi r4, r3, 0x6E5F696C@l
/* 8032B66C 003285AC  38 03 69 72 */	addi r0, r3, 0x6972
/* 8032B670 003285B0  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8032B674 003285B4  7C C8 33 78 */	mr r8, r6
/* 8032B678 003285B8  39 4A 69 6C */	addi r10, r10, 0x696c
/* 8032B67C 003285BC  38 A0 00 4E */	li r5, 0x4e
/* 8032B680 003285C0  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 8032B684 003285C4  38 E0 00 54 */	li r7, 0x54
/* 8032B688 003285C8  91 61 00 18 */	stw r11, 0x18(r1)
/* 8032B68C 003285CC  90 81 00 24 */	stw r4, 0x24(r1)
/* 8032B690 003285D0  91 21 00 20 */	stw r9, 0x20(r1)
/* 8032B694 003285D4  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8032B698 003285D8  91 21 00 28 */	stw r9, 0x28(r1)
/* 8032B69C 003285DC  80 7C 00 B4 */	lwz r3, 0xb4(r28)
/* 8032B6A0 003285E0  80 9C 00 B0 */	lwz r4, 0xb0(r28)
/* 8032B6A4 003285E4  4B FD EB 61 */	bl init2taku__Q32og6Screen7MenuMgrFP9J2DScreenUxUxUxUxUxUxUxUx
/* 8032B6A8 003285E8  80 7C 00 B0 */	lwz r3, 0xb0(r28)
/* 8032B6AC 003285EC  3C 80 6D 30 */	lis r4, 0x6D303179@ha
/* 8032B6B0 003285F0  80 FC 00 CC */	lwz r7, 0xcc(r28)
/* 8032B6B4 003285F4  38 C4 31 79 */	addi r6, r4, 0x6D303179@l
/* 8032B6B8 003285F8  81 83 00 00 */	lwz r12, 0(r3)
/* 8032B6BC 003285FC  38 A0 00 54 */	li r5, 0x54
/* 8032B6C0 00328600  83 C7 00 10 */	lwz r30, 0x10(r7)
/* 8032B6C4 00328604  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8032B6C8 00328608  83 E7 00 14 */	lwz r31, 0x14(r7)
/* 8032B6CC 0032860C  7D 89 03 A6 */	mtctr r12
/* 8032B6D0 00328610  4E 80 04 21 */	bctrl 
/* 8032B6D4 00328614  93 E3 00 1C */	stw r31, 0x1c(r3)
/* 8032B6D8 00328618  3C 80 6D 30 */	lis r4, 0x6D30316E@ha
/* 8032B6DC 0032861C  38 C4 31 6E */	addi r6, r4, 0x6D30316E@l
/* 8032B6E0 00328620  38 A0 00 54 */	li r5, 0x54
/* 8032B6E4 00328624  93 C3 00 18 */	stw r30, 0x18(r3)
/* 8032B6E8 00328628  80 7C 00 B0 */	lwz r3, 0xb0(r28)
/* 8032B6EC 0032862C  80 9C 00 CC */	lwz r4, 0xcc(r28)
/* 8032B6F0 00328630  81 83 00 00 */	lwz r12, 0(r3)
/* 8032B6F4 00328634  83 C4 00 18 */	lwz r30, 0x18(r4)
/* 8032B6F8 00328638  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8032B6FC 0032863C  83 E4 00 1C */	lwz r31, 0x1c(r4)
/* 8032B700 00328640  7D 89 03 A6 */	mtctr r12
/* 8032B704 00328644  4E 80 04 21 */	bctrl 
/* 8032B708 00328648  93 E3 00 1C */	stw r31, 0x1c(r3)
/* 8032B70C 0032864C  93 C3 00 18 */	stw r30, 0x18(r3)
/* 8032B710 00328650  80 7C 00 B0 */	lwz r3, 0xb0(r28)
/* 8032B714 00328654  4B FD E6 ED */	bl setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr
/* 8032B718 00328658  3C C0 6D 30 */	lis r6, 0x6D303179@ha
/* 8032B71C 0032865C  80 9C 00 B0 */	lwz r4, 0xb0(r28)
/* 8032B720 00328660  7F A3 EB 78 */	mr r3, r29
/* 8032B724 00328664  38 A0 00 54 */	li r5, 0x54
/* 8032B728 00328668  38 C6 31 79 */	addi r6, r6, 0x6D303179@l
/* 8032B72C 0032866C  4B FD D1 C1 */	bl setMenuScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
/* 8032B730 00328670  90 7C 00 B8 */	stw r3, 0xb8(r28)
/* 8032B734 00328674  3C C0 6D 30 */	lis r6, 0x6D30316E@ha
/* 8032B738 00328678  7F A3 EB 78 */	mr r3, r29
/* 8032B73C 0032867C  38 A0 00 54 */	li r5, 0x54
/* 8032B740 00328680  80 9C 00 B0 */	lwz r4, 0xb0(r28)
/* 8032B744 00328684  38 C6 31 6E */	addi r6, r6, 0x6D30316E@l
/* 8032B748 00328688  4B FD D1 A5 */	bl setMenuScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
/* 8032B74C 0032868C  90 7C 00 BC */	stw r3, 0xbc(r28)
/* 8032B750 00328690  C0 22 FB A8 */	lfs f1, lbl_8051DF08@sda21(r2)
/* 8032B754 00328694  80 7C 00 B8 */	lwz r3, 0xb8(r28)
/* 8032B758 00328698  4B FD DC FD */	bl open__Q32og6Screen15AnimText_ScreenFf
/* 8032B75C 0032869C  80 7C 00 BC */	lwz r3, 0xbc(r28)
/* 8032B760 003286A0  C0 22 FB AC */	lfs f1, lbl_8051DF0C@sda21(r2)
/* 8032B764 003286A4  4B FD DC F1 */	bl open__Q32og6Screen15AnimText_ScreenFf
/* 8032B768 003286A8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8032B76C 003286AC  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8032B770 003286B0  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8032B774 003286B4  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8032B778 003286B8  83 81 00 30 */	lwz r28, 0x30(r1)
/* 8032B77C 003286BC  7C 08 03 A6 */	mtlr r0
/* 8032B780 003286C0  38 21 00 40 */	addi r1, r1, 0x40
/* 8032B784 003286C4  4E 80 00 20 */	blr 

.global doStart__Q32og9newScreen22ObjWorldMapInfoWindow0FPCQ26Screen13StartSceneArg
doStart__Q32og9newScreen22ObjWorldMapInfoWindow0FPCQ26Screen13StartSceneArg:
/* 8032B788 003286C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032B78C 003286CC  7C 08 02 A6 */	mflr r0
/* 8032B790 003286D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032B794 003286D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8032B798 003286D8  7C 7F 1B 78 */	mr r31, r3
/* 8032B79C 003286DC  80 63 00 CC */	lwz r3, 0xcc(r3)
/* 8032B7A0 003286E0  88 03 00 21 */	lbz r0, 0x21(r3)
/* 8032B7A4 003286E4  90 1F 00 D0 */	stw r0, 0xd0(r31)
/* 8032B7A8 003286E8  80 1F 00 D0 */	lwz r0, 0xd0(r31)
/* 8032B7AC 003286EC  80 7F 00 B4 */	lwz r3, 0xb4(r31)
/* 8032B7B0 003286F0  54 04 04 3E */	clrlwi r4, r0, 0x10
/* 8032B7B4 003286F4  4B FD F4 45 */	bl initSelNum__Q32og6Screen7MenuMgrFUs
/* 8032B7B8 003286F8  80 1F 00 D0 */	lwz r0, 0xd0(r31)
/* 8032B7BC 003286FC  7F E3 FB 78 */	mr r3, r31
/* 8032B7C0 00328700  90 1F 00 AC */	stw r0, 0xac(r31)
/* 8032B7C4 00328704  80 9F 00 AC */	lwz r4, 0xac(r31)
/* 8032B7C8 00328708  4B FF DE 41 */	bl blink_Menu__Q32og9newScreen15ObjSMenuPauseVSFi
/* 8032B7CC 0032870C  80 6D 97 A8 */	lwz r3, ogSound__2og@sda21(r13)
/* 8032B7D0 00328710  4B FE 15 AD */	bl setOpenWMapMenu__Q22og5SoundFv
/* 8032B7D4 00328714  3C A0 6B 6F */	lis r5, 0x6B6F3030@ha
/* 8032B7D8 00328718  3C 80 66 75 */	lis r4, 0x66757269@ha
/* 8032B7DC 0032871C  80 7F 00 B0 */	lwz r3, 0xb0(r31)
/* 8032B7E0 00328720  38 C5 30 30 */	addi r6, r5, 0x6B6F3030@l
/* 8032B7E4 00328724  38 A4 72 69 */	addi r5, r4, 0x66757269@l
/* 8032B7E8 00328728  4B FF EE C9 */	bl getFurikoPtr__Q22og6ScreenFPQ29P2DScreen3MgrUx
/* 8032B7EC 0032872C  4B FF E7 2D */	bl stop__Q32og6Screen15CallBack_FurikoFv
/* 8032B7F0 00328730  7F E3 FB 78 */	mr r3, r31
/* 8032B7F4 00328734  38 80 00 00 */	li r4, 0
/* 8032B7F8 00328738  4B FE B1 C9 */	bl start_LR__Q32og9newScreen12ObjSMenuBaseFPCQ26Screen13StartSceneArg
/* 8032B7FC 0032873C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032B800 00328740  38 60 00 01 */	li r3, 1
/* 8032B804 00328744  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8032B808 00328748  7C 08 03 A6 */	mtlr r0
/* 8032B80C 0032874C  38 21 00 10 */	addi r1, r1, 0x10
/* 8032B810 00328750  4E 80 00 20 */	blr 

.global doUpdateFadein__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
doUpdateFadein__Q32og9newScreen22ObjWorldMapInfoWindow0Fv:
/* 8032B814 00328754  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032B818 00328758  7C 08 02 A6 */	mflr r0
/* 8032B81C 0032875C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032B820 00328760  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8032B824 00328764  93 C1 00 08 */	stw r30, 8(r1)
/* 8032B828 00328768  7C 7E 1B 78 */	mr r30, r3
/* 8032B82C 0032876C  81 83 00 00 */	lwz r12, 0(r3)
/* 8032B830 00328770  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8032B834 00328774  7D 89 03 A6 */	mtctr r12
/* 8032B838 00328778  4E 80 04 21 */	bctrl 
/* 8032B83C 0032877C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8032B840 00328780  3C 60 80 51 */	lis r3, msBaseVal__Q32og9newScreen12ObjSMenuBase@ha
/* 8032B844 00328784  C0 3E 00 44 */	lfs f1, 0x44(r30)
/* 8032B848 00328788  38 63 3C F4 */	addi r3, r3, msBaseVal__Q32og9newScreen12ObjSMenuBase@l
/* 8032B84C 0032878C  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 8032B850 00328790  3B E0 00 00 */	li r31, 0
/* 8032B854 00328794  EC 01 00 2A */	fadds f0, f1, f0
/* 8032B858 00328798  D0 1E 00 44 */	stfs f0, 0x44(r30)
/* 8032B85C 0032879C  C0 3E 00 44 */	lfs f1, 0x44(r30)
/* 8032B860 003287A0  C0 43 00 08 */	lfs f2, 8(r3)
/* 8032B864 003287A4  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 8032B868 003287A8  40 81 00 08 */	ble .L_8032B870
/* 8032B86C 003287AC  3B E0 00 01 */	li r31, 1
.L_8032B870:
/* 8032B870 003287B0  4B FD 6E 2D */	bl calcSmooth0to1__Q22og6ScreenFff
/* 8032B874 003287B4  C0 42 FB B4 */	lfs f2, lbl_8051DF14@sda21(r2)
/* 8032B878 003287B8  7F E3 FB 78 */	mr r3, r31
/* 8032B87C 003287BC  C0 02 FB B0 */	lfs f0, lbl_8051DF10@sda21(r2)
/* 8032B880 003287C0  EC 22 08 28 */	fsubs f1, f2, f1
/* 8032B884 003287C4  EC 00 00 72 */	fmuls f0, f0, f1
/* 8032B888 003287C8  D0 1E 00 40 */	stfs f0, 0x40(r30)
/* 8032B88C 003287CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8032B890 003287D0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8032B894 003287D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032B898 003287D8  7C 08 03 A6 */	mtlr r0
/* 8032B89C 003287DC  38 21 00 10 */	addi r1, r1, 0x10
/* 8032B8A0 003287E0  4E 80 00 20 */	blr 

.global commonUpdate__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
commonUpdate__Q32og9newScreen22ObjWorldMapInfoWindow0Fv:
/* 8032B8A4 003287E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032B8A8 003287E8  7C 08 02 A6 */	mflr r0
/* 8032B8AC 003287EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032B8B0 003287F0  4B FF DD CD */	bl commonUpdate__Q32og9newScreen15ObjSMenuPauseVSFv
/* 8032B8B4 003287F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032B8B8 003287F8  7C 08 03 A6 */	mtlr r0
/* 8032B8BC 003287FC  38 21 00 10 */	addi r1, r1, 0x10
/* 8032B8C0 00328800  4E 80 00 20 */	blr 

.global out_cancel__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
out_cancel__Q32og9newScreen22ObjWorldMapInfoWindow0Fv:
/* 8032B8C4 00328804  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032B8C8 00328808  7C 08 02 A6 */	mflr r0
/* 8032B8CC 0032880C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032B8D0 00328810  38 00 00 00 */	li r0, 0
/* 8032B8D4 00328814  80 83 00 CC */	lwz r4, 0xcc(r3)
/* 8032B8D8 00328818  90 04 00 08 */	stw r0, 8(r4)
/* 8032B8DC 0032881C  81 83 00 00 */	lwz r12, 0(r3)
/* 8032B8E0 00328820  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8032B8E4 00328824  7D 89 03 A6 */	mtctr r12
/* 8032B8E8 00328828  4E 80 04 21 */	bctrl 
/* 8032B8EC 0032882C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032B8F0 00328830  7C 08 03 A6 */	mtlr r0
/* 8032B8F4 00328834  38 21 00 10 */	addi r1, r1, 0x10
/* 8032B8F8 00328838  4E 80 00 20 */	blr 

.global out_menu_0__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
out_menu_0__Q32og9newScreen22ObjWorldMapInfoWindow0Fv:
/* 8032B8FC 0032883C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032B900 00328840  7C 08 02 A6 */	mflr r0
/* 8032B904 00328844  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032B908 00328848  38 00 00 00 */	li r0, 0
/* 8032B90C 0032884C  80 83 00 CC */	lwz r4, 0xcc(r3)
/* 8032B910 00328850  90 04 00 08 */	stw r0, 8(r4)
/* 8032B914 00328854  81 83 00 00 */	lwz r12, 0(r3)
/* 8032B918 00328858  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8032B91C 0032885C  7D 89 03 A6 */	mtctr r12
/* 8032B920 00328860  4E 80 04 21 */	bctrl 
/* 8032B924 00328864  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032B928 00328868  7C 08 03 A6 */	mtlr r0
/* 8032B92C 0032886C  38 21 00 10 */	addi r1, r1, 0x10
/* 8032B930 00328870  4E 80 00 20 */	blr 

.global out_menu_1__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
out_menu_1__Q32og9newScreen22ObjWorldMapInfoWindow0Fv:
/* 8032B934 00328874  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032B938 00328878  7C 08 02 A6 */	mflr r0
/* 8032B93C 0032887C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032B940 00328880  38 00 00 01 */	li r0, 1
/* 8032B944 00328884  80 83 00 CC */	lwz r4, 0xcc(r3)
/* 8032B948 00328888  90 04 00 08 */	stw r0, 8(r4)
/* 8032B94C 0032888C  81 83 00 00 */	lwz r12, 0(r3)
/* 8032B950 00328890  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8032B954 00328894  7D 89 03 A6 */	mtctr r12
/* 8032B958 00328898  4E 80 04 21 */	bctrl 
/* 8032B95C 0032889C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032B960 003288A0  7C 08 03 A6 */	mtlr r0
/* 8032B964 003288A4  38 21 00 10 */	addi r1, r1, 0x10
/* 8032B968 003288A8  4E 80 00 20 */	blr 

.global out_L__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
out_L__Q32og9newScreen22ObjWorldMapInfoWindow0Fv:
/* 8032B96C 003288AC  38 00 00 02 */	li r0, 2
/* 8032B970 003288B0  90 03 00 38 */	stw r0, 0x38(r3)
/* 8032B974 003288B4  4E 80 00 20 */	blr 

.global doUpdateFadeoutFinish__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
doUpdateFadeoutFinish__Q32og9newScreen22ObjWorldMapInfoWindow0Fv:
/* 8032B978 003288B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032B97C 003288BC  7C 08 02 A6 */	mflr r0
/* 8032B980 003288C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032B984 003288C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8032B988 003288C8  7C 7F 1B 78 */	mr r31, r3
/* 8032B98C 003288CC  81 83 00 00 */	lwz r12, 0(r3)
/* 8032B990 003288D0  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 8032B994 003288D4  7D 89 03 A6 */	mtctr r12
/* 8032B998 003288D8  4E 80 04 21 */	bctrl 
/* 8032B99C 003288DC  7C 64 1B 78 */	mr r4, r3
/* 8032B9A0 003288E0  7F E3 FB 78 */	mr r3, r31
/* 8032B9A4 003288E4  4B FE A9 59 */	bl setFinishState__Q32og9newScreen12ObjSMenuBaseFl
/* 8032B9A8 003288E8  7F E3 FB 78 */	mr r3, r31
/* 8032B9AC 003288EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8032B9B0 003288F0  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 8032B9B4 003288F4  7D 89 03 A6 */	mtctr r12
/* 8032B9B8 003288F8  4E 80 04 21 */	bctrl 
/* 8032B9BC 003288FC  2C 03 00 00 */	cmpwi r3, 0
/* 8032B9C0 00328900  40 82 00 2C */	bne .L_8032B9EC
/* 8032B9C4 00328904  7F E3 FB 78 */	mr r3, r31
/* 8032B9C8 00328908  81 9F 00 00 */	lwz r12, 0(r31)
/* 8032B9CC 0032890C  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8032B9D0 00328910  7D 89 03 A6 */	mtctr r12
/* 8032B9D4 00328914  4E 80 04 21 */	bctrl 
/* 8032B9D8 00328918  38 80 00 00 */	li r4, 0
/* 8032B9DC 0032891C  38 A0 00 00 */	li r5, 0
/* 8032B9E0 00328920  38 C0 00 00 */	li r6, 0
/* 8032B9E4 00328924  38 E0 00 00 */	li r7, 0
/* 8032B9E8 00328928  48 12 68 9D */	bl setColorBG__Q26Screen9SceneBaseFUcUcUcUc
.L_8032B9EC:
/* 8032B9EC 0032892C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032B9F0 00328930  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8032B9F4 00328934  7C 08 03 A6 */	mtlr r0
/* 8032B9F8 00328938  38 21 00 10 */	addi r1, r1, 0x10
/* 8032B9FC 0032893C  4E 80 00 20 */	blr 

.global getResult__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
getResult__Q32og9newScreen22ObjWorldMapInfoWindow0Fv:
/* 8032BA00 00328940  80 63 00 CC */	lwz r3, 0xcc(r3)
/* 8032BA04 00328944  80 63 00 08 */	lwz r3, 8(r3)
/* 8032BA08 00328948  4E 80 00 20 */	blr 

.global __dt__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
__dt__Q32og9newScreen22ObjWorldMapInfoWindow0Fv:
/* 8032BA0C 0032894C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032BA10 00328950  7C 08 02 A6 */	mflr r0
/* 8032BA14 00328954  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032BA18 00328958  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8032BA1C 0032895C  7C 9F 23 78 */	mr r31, r4
/* 8032BA20 00328960  93 C1 00 08 */	stw r30, 8(r1)
/* 8032BA24 00328964  7C 7E 1B 79 */	or. r30, r3, r3
/* 8032BA28 00328968  41 82 00 30 */	beq .L_8032BA58
/* 8032BA2C 0032896C  3C A0 80 4E */	lis r5, __vt__Q32og9newScreen22ObjWorldMapInfoWindow0@ha
/* 8032BA30 00328970  38 80 00 00 */	li r4, 0
/* 8032BA34 00328974  38 A5 9D 50 */	addi r5, r5, __vt__Q32og9newScreen22ObjWorldMapInfoWindow0@l
/* 8032BA38 00328978  90 BE 00 00 */	stw r5, 0(r30)
/* 8032BA3C 0032897C  38 05 00 10 */	addi r0, r5, 0x10
/* 8032BA40 00328980  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8032BA44 00328984  4B FF D7 CD */	bl __dt__Q32og9newScreen15ObjSMenuPauseVSFv
/* 8032BA48 00328988  7F E0 07 35 */	extsh. r0, r31
/* 8032BA4C 0032898C  40 81 00 0C */	ble .L_8032BA58
/* 8032BA50 00328990  7F C3 F3 78 */	mr r3, r30
/* 8032BA54 00328994  4B CF 86 61 */	bl __dl__FPv
.L_8032BA58:
/* 8032BA58 00328998  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032BA5C 0032899C  7F C3 F3 78 */	mr r3, r30
/* 8032BA60 003289A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8032BA64 003289A4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8032BA68 003289A8  7C 08 03 A6 */	mtlr r0
/* 8032BA6C 003289AC  38 21 00 10 */	addi r1, r1, 0x10
/* 8032BA70 003289B0  4E 80 00 20 */	blr 

.global getSize__Q32og6Screen26DispMemberWorldMapInfoWin0Fv
getSize__Q32og6Screen26DispMemberWorldMapInfoWin0Fv:
/* 8032BA74 003289B4  38 60 00 28 */	li r3, 0x28
/* 8032BA78 003289B8  4E 80 00 20 */	blr 

.global getOwnerID__Q32og6Screen26DispMemberWorldMapInfoWin0Fv
getOwnerID__Q32og6Screen26DispMemberWorldMapInfoWin0Fv:
/* 8032BA7C 003289BC  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 8032BA80 003289C0  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 8032BA84 003289C4  4E 80 00 20 */	blr 

.global getMemberID__Q32og6Screen26DispMemberWorldMapInfoWin0Fv
getMemberID__Q32og6Screen26DispMemberWorldMapInfoWin0Fv:
/* 8032BA88 003289C8  3C 80 57 69 */	lis r4, 0x57696E30@ha
/* 8032BA8C 003289CC  3C 60 57 4D */	lis r3, 0x574D6170@ha
/* 8032BA90 003289D0  38 84 6E 30 */	addi r4, r4, 0x57696E30@l
/* 8032BA94 003289D4  38 63 61 70 */	addi r3, r3, 0x574D6170@l
/* 8032BA98 003289D8  4E 80 00 20 */	blr 

"@24@__dt__Q32og9newScreen22ObjWorldMapInfoWindow0Fv":
/* 8032BA9C 003289DC  38 63 FF E8 */	addi r3, r3, -24
/* 8032BAA0 003289E0  4B FF FF 6C */	b __dt__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
