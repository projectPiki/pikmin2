.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_vsGS_Title_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_80483458:
	.4byte 0
	.4byte 0
	.4byte 0
.balign 4
lbl_80483464:
	.asciz "vsGS_Title"
.balign 4
lbl_80483470:
	.asciz "caveinfo.txt"
.balign 4
lbl_80483480:
	.asciz "caveinfo_metal.txt"
.balign 4
lbl_80483494:
	.asciz "caveinfo_conc.txt"
.balign 4
lbl_804834A8:
	.asciz "caveinfo_tsuchi.txt"
.balign 4
lbl_804834BC: #Shift-JIS
	.4byte 0x83528393
	.4byte 0x834E838A
	.4byte 0x815B8367
	.byte 0x00
.balign 4
lbl_804834CC:
	.asciz "PSGame.h"
.balign 4
lbl_804834D8:
	.asciz "P2Assert"
.balign 4
lbl_804834E4:
	.asciz "PSScene.h"
.balign 4
lbl_804834F0:
	.asciz "from Morimun:STATE_GO:stageNo=%d:playType=%d\n"
.balign 4
lbl_80483520:
	.asciz "vsGS_Title.cpp"
.balign 4
lbl_80483530:
	.asciz "PikiContainer"
.balign 4
lbl_80483540:
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte 0x00000002
	.4byte 0xFFFFFFFF

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
govNAN___Q24Game5P2JST:
	.float 0.0
	.float 0.0
	.float 0.0
"cMaps__24@unnamed@vsGS_Title_cpp@": #local object
	.4byte lbl_80483470
	.4byte lbl_80483480
	.4byte lbl_80483494
	.4byte lbl_804834A8
lbl_804C0E04: #local object
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte dvdload__Q34Game6VsGame10TitleStateFv
.global __vt__Q28Morimura18DispMemberVsSelect
__vt__Q28Morimura18DispMemberVsSelect:
	.4byte 0
	.4byte 0
	.4byte getSize__Q28Morimura18DispMemberVsSelectFv
	.4byte getOwnerID__Q28Morimura18DispMemberVsSelectFv
	.4byte getMemberID__Q28Morimura18DispMemberVsSelectFv
	.4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
.global __vt__Q28Morimura25DispMemberChallengeSelect
__vt__Q28Morimura25DispMemberChallengeSelect:
	.4byte 0
	.4byte 0
	.4byte getSize__Q28Morimura25DispMemberChallengeSelectFv
	.4byte getOwnerID__Q28Morimura25DispMemberChallengeSelectFv
	.4byte getMemberID__Q28Morimura25DispMemberChallengeSelectFv
	.4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
.global __vt__Q34Game6VsGame10TitleState
__vt__Q34Game6VsGame10TitleState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSectionPQ24Game8StateArg
	.4byte exec__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSection
	.4byte cleanup__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSection
	.4byte "resume__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
	.4byte "restart__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
	.4byte "transit__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
	.4byte draw__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSectionR8Graphics
	.4byte pre2dDraw__Q34Game6VsGame5StateFR8GraphicsPQ24Game13VsGameSection
	.4byte onOrimaDown__Q34Game6VsGame5StateFPQ24Game13VsGameSectioni
	.4byte onMovieStart__Q34Game6VsGame5StateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl
	.4byte onMovieDone__Q34Game6VsGame5StateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl
	.4byte onNextFloor__Q34Game6VsGame5StateFPQ24Game13VsGameSectionPQ34Game8ItemHole4Item
	.4byte on_section_fadeout__Q34Game6VsGame5StateFPQ24Game13VsGameSection
	.4byte goingToCave__Q34Game6VsGame5StateFPQ24Game13VsGameSection
	.4byte onBattleFinished__Q34Game6VsGame5StateFPQ24Game13VsGameSectionib
	.4byte onRedOrBlueSuckStart__Q34Game6VsGame5StateFPQ24Game13VsGameSectionib
	.4byte isCardUsable__Q34Game6VsGame5StateFPQ24Game13VsGameSection
.global "__vt__36Delegate<Q34Game6VsGame10TitleState>"
"__vt__36Delegate<Q34Game6VsGame10TitleState>":
	.4byte 0
	.4byte 0
	.4byte "invoke__36Delegate<Q34Game6VsGame10TitleState>Fv"
.global __vt__Q34Game6VsGame5State
__vt__Q34Game6VsGame5State:
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSectionPQ24Game8StateArg"
	.4byte "exec__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
	.4byte "cleanup__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
	.4byte "resume__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
	.4byte "restart__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
	.4byte "transit__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
	.4byte draw__Q34Game6VsGame5StateFPQ24Game13VsGameSectionR8Graphics
	.4byte pre2dDraw__Q34Game6VsGame5StateFR8GraphicsPQ24Game13VsGameSection
	.4byte onOrimaDown__Q34Game6VsGame5StateFPQ24Game13VsGameSectioni
	.4byte onMovieStart__Q34Game6VsGame5StateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl
	.4byte onMovieDone__Q34Game6VsGame5StateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl
	.4byte onNextFloor__Q34Game6VsGame5StateFPQ24Game13VsGameSectionPQ34Game8ItemHole4Item
	.4byte on_section_fadeout__Q34Game6VsGame5StateFPQ24Game13VsGameSection
	.4byte goingToCave__Q34Game6VsGame5StateFPQ24Game13VsGameSection
	.4byte onBattleFinished__Q34Game6VsGame5StateFPQ24Game13VsGameSectionib
	.4byte onRedOrBlueSuckStart__Q34Game6VsGame5StateFPQ24Game13VsGameSectionib
	.4byte isCardUsable__Q34Game6VsGame5StateFPQ24Game13VsGameSection
.global "__vt__Q24Game32FSMState<Q24Game13VsGameSection>"
"__vt__Q24Game32FSMState<Q24Game13VsGameSection>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSectionPQ24Game8StateArg"
	.4byte "exec__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
	.4byte "cleanup__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
	.4byte "resume__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
	.4byte "restart__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
	.4byte "transit__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
gu32NAN___Q24Game5P2JST:
	.skip 0x4
gfNAN___Q24Game5P2JST:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051A250:
	.float 0.0
lbl_8051A254:
	.float 1.0
lbl_8051A258:
	.float -1.0
lbl_8051A25C:
	.float 0.5
lbl_8051A260:
	.float 0.999

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game6VsGame10TitleStateFv
__ct__Q34Game6VsGame10TitleStateFv:
/* 80228328 00225268  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8022832C 0022526C  7C 08 02 A6 */	mflr r0
/* 80228330 00225270  3C 80 80 4C */	lis r4, "__vt__Q24Game32FSMState<Q24Game13VsGameSection>"@ha
/* 80228334 00225274  38 A0 00 00 */	li r5, 0
/* 80228338 00225278  90 01 00 24 */	stw r0, 0x24(r1)
/* 8022833C 0022527C  38 04 0E E4 */	addi r0, r4, "__vt__Q24Game32FSMState<Q24Game13VsGameSection>"@l
/* 80228340 00225280  3C 80 80 4C */	lis r4, __vt__Q34Game6VsGame5State@ha
/* 80228344 00225284  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80228348 00225288  7C 7F 1B 78 */	mr r31, r3
/* 8022834C 0022528C  38 84 0E 98 */	addi r4, r4, __vt__Q34Game6VsGame5State@l
/* 80228350 00225290  90 03 00 00 */	stw r0, 0(r3)
/* 80228354 00225294  3C 60 80 4C */	lis r3, __vt__Q34Game6VsGame10TitleState@ha
/* 80228358 00225298  38 03 0E 40 */	addi r0, r3, __vt__Q34Game6VsGame10TitleState@l
/* 8022835C 0022529C  90 BF 00 04 */	stw r5, 4(r31)
/* 80228360 002252A0  38 60 00 B0 */	li r3, 0xb0
/* 80228364 002252A4  90 BF 00 08 */	stw r5, 8(r31)
/* 80228368 002252A8  90 9F 00 00 */	stw r4, 0(r31)
/* 8022836C 002252AC  90 1F 00 00 */	stw r0, 0(r31)
/* 80228370 002252B0  4B DF BB 35 */	bl __nw__FUl
/* 80228374 002252B4  7C 60 1B 79 */	or. r0, r3, r3
/* 80228378 002252B8  41 82 00 10 */	beq .L_80228388
/* 8022837C 002252BC  38 80 00 00 */	li r4, 0
/* 80228380 002252C0  48 1F CA D5 */	bl __ct__10ControllerFQ210JUTGamePad8EPadPort
/* 80228384 002252C4  7C 60 1B 78 */	mr r0, r3
.L_80228388:
/* 80228388 002252C8  90 1F 00 30 */	stw r0, 0x30(r31)
/* 8022838C 002252CC  38 60 00 14 */	li r3, 0x14
/* 80228390 002252D0  4B DF BB 15 */	bl __nw__FUl
/* 80228394 002252D4  28 03 00 00 */	cmplwi r3, 0
/* 80228398 002252D8  41 82 00 4C */	beq .L_802283E4
/* 8022839C 002252DC  3C 80 80 4C */	lis r4, lbl_804C0E04@ha
/* 802283A0 002252E0  3C A0 80 4B */	lis r5, __vt__9IDelegate@ha
/* 802283A4 002252E4  39 04 0E 04 */	addi r8, r4, lbl_804C0E04@l
/* 802283A8 002252E8  3C 80 80 4C */	lis r4, "__vt__36Delegate<Q34Game6VsGame10TitleState>"@ha
/* 802283AC 002252EC  80 E8 00 00 */	lwz r7, 0(r8)
/* 802283B0 002252F0  38 A5 0F 00 */	addi r5, r5, __vt__9IDelegate@l
/* 802283B4 002252F4  80 C8 00 04 */	lwz r6, 4(r8)
/* 802283B8 002252F8  38 04 0E 8C */	addi r0, r4, "__vt__36Delegate<Q34Game6VsGame10TitleState>"@l
/* 802283BC 002252FC  80 88 00 08 */	lwz r4, 8(r8)
/* 802283C0 00225300  90 E1 00 08 */	stw r7, 8(r1)
/* 802283C4 00225304  90 A3 00 00 */	stw r5, 0(r3)
/* 802283C8 00225308  90 03 00 00 */	stw r0, 0(r3)
/* 802283CC 0022530C  93 E3 00 04 */	stw r31, 4(r3)
/* 802283D0 00225310  90 E3 00 08 */	stw r7, 8(r3)
/* 802283D4 00225314  90 C3 00 0C */	stw r6, 0xc(r3)
/* 802283D8 00225318  90 C1 00 0C */	stw r6, 0xc(r1)
/* 802283DC 0022531C  90 81 00 10 */	stw r4, 0x10(r1)
/* 802283E0 00225320  90 83 00 10 */	stw r4, 0x10(r3)
.L_802283E4:
/* 802283E4 00225324  90 7F 00 1C */	stw r3, 0x1c(r31)
/* 802283E8 00225328  38 60 00 B0 */	li r3, 0xb0
/* 802283EC 0022532C  4B DF BA B9 */	bl __nw__FUl
/* 802283F0 00225330  7C 60 1B 79 */	or. r0, r3, r3
/* 802283F4 00225334  41 82 00 10 */	beq .L_80228404
/* 802283F8 00225338  38 80 00 01 */	li r4, 1
/* 802283FC 0022533C  48 1F CA 59 */	bl __ct__10ControllerFQ210JUTGamePad8EPadPort
/* 80228400 00225340  7C 60 1B 78 */	mr r0, r3
.L_80228404:
/* 80228404 00225344  90 1F 00 34 */	stw r0, 0x34(r31)
/* 80228408 00225348  7F E3 FB 78 */	mr r3, r31
/* 8022840C 0022534C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80228410 00225350  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80228414 00225354  7C 08 03 A6 */	mtlr r0
/* 80228418 00225358  38 21 00 20 */	addi r1, r1, 0x20
/* 8022841C 0022535C  4E 80 00 20 */	blr 

.if version == 1
.global init__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSectionPQ24Game8StateArg
init__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSectionPQ24Game8StateArg:
/* 80228420 00225360  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80228424 00225364  7C 08 02 A6 */	mflr r0
/* 80228428 00225368  90 01 00 24 */	stw r0, 0x24(r1)
/* 8022842C 0022536C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80228430 00225370  7C BF 2B 78 */	mr r31, r5
/* 80228434 00225374  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80228438 00225378  7C 9E 23 78 */	mr r30, r4
/* 8022843C 0022537C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80228440 00225380  7C 7D 1B 78 */	mr r29, r3
/* 80228444 00225384  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80228448 00225388  4B F3 2D A9 */	bl clearDeadCount__Q24Game7NaviMgrFv
/* 8022844C 0022538C  C0 02 BE F0 */	lfs f0, lbl_8051A250@sda21(r2)
/* 80228450 00225390  38 00 00 00 */	li r0, 0
/* 80228454 00225394  7F C3 F3 78 */	mr r3, r30
/* 80228458 00225398  D0 1E 01 F4 */	stfs f0, 0x218(r30)
/* 8022845C 0022539C  D0 1E 01 F0 */	stfs f0, 0x214(r30)
/* 80228460 002253A0  90 1E 03 BC */	stw r0, 0x3e0(r30)
/* 80228464 002253A4  D0 1E 03 C0 */	stfs f0, 0x3e4(r30)
/* 80228468 002253A8  4B F9 C4 59 */	bl clearGetDopeCount__Q24Game13VsGameSectionFv
/* 8022846C 002253AC  7F C3 F3 78 */	mr r3, r30
/* 80228470 002253B0  4B F9 C5 39 */	bl clearGetCherryCount__Q24Game13VsGameSectionFv
/* 80228474 002253B4  38 00 00 00 */	li r0, 0
/* 80228478 002253B8  28 1F 00 00 */	cmplwi r31, 0
/* 8022847C 002253BC  90 1E 03 24 */	stw r0, 0x348(r30)
/* 80228480 002253C0  41 82 00 18 */	beq .L_80228498
/* 80228484 002253C4  88 1F 00 00 */	lbz r0, 0(r31)
/* 80228488 002253C8  28 00 00 00 */	cmplwi r0, 0
/* 8022848C 002253CC  41 82 00 0C */	beq .L_80228498
/* 80228490 002253D0  7F C3 F3 78 */	mr r3, r30
/* 80228494 002253D4  4B F2 79 11 */	bl clearHeap__Q24Game15BaseGameSectionFv
.L_80228498:
/* 80228498 002253D8  38 00 00 01 */	li r0, 1
/* 8022849C 002253DC  3C 60 80 4C */	lis r3, "cMaps__24@unnamed@vsGS_Title_cpp@"@ha
/* 802284A0 002253E0  98 1E 02 05 */	stb r0, 0x229(r30)
/* 802284A4 002253E4  38 00 00 00 */	li r0, 0
/* 802284A8 002253E8  38 83 0D F4 */	addi r4, r3, "cMaps__24@unnamed@vsGS_Title_cpp@"@l
/* 802284AC 002253EC  38 7E 02 24 */	addi r3, r30, 0x248
/* 802284B0 002253F0  90 1E 02 08 */	stw r0, 0x22c(r30)
/* 802284B4 002253F4  90 1D 00 18 */	stw r0, 0x18(r29)
/* 802284B8 002253F8  90 1D 00 14 */	stw r0, 0x14(r29)
/* 802284BC 002253FC  98 1D 00 10 */	stb r0, 0x10(r29)
/* 802284C0 00225400  90 1D 00 2C */	stw r0, 0x2c(r29)
/* 802284C4 00225404  90 1D 00 24 */	stw r0, 0x24(r29)
/* 802284C8 00225408  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 802284CC 0022540C  54 00 10 3A */	slwi r0, r0, 2
/* 802284D0 00225410  7C 84 00 2E */	lwzx r4, r4, r0
/* 802284D4 00225414  4B EA 23 85 */	bl strcpy
/* 802284D8 00225418  38 00 00 00 */	li r0, 0
/* 802284DC 0022541C  90 1D 00 20 */	stw r0, 0x20(r29)
/* 802284E0 00225420  80 7E 02 0C */	lwz r3, 0x230(r30)
/* 802284E4 00225424  85 83 00 18 */	lwzu r12, 0x18(r3)
/* 802284E8 00225428  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802284EC 0022542C  7D 89 03 A6 */	mtctr r12
/* 802284F0 00225430  4E 80 04 21 */	bctrl 
/* 802284F4 00225434  90 7D 00 28 */	stw r3, 0x28(r29)
/* 802284F8 00225438  7F C3 F3 78 */	mr r3, r30
/* 802284FC 0022543C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80228500 00225440  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 80228504 00225444  7D 89 03 A6 */	mtctr r12
/* 80228508 00225448  4E 80 04 21 */	bctrl 
/* 8022850C 0022544C  7F C3 F3 78 */	mr r3, r30
/* 80228510 00225450  4B F9 93 35 */	bl initPlayData__Q24Game13VsGameSectionFv
/* 80228514 00225454  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80228518 00225458  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8022851C 0022545C  81 83 00 00 */	lwz r12, 0(r3)
/* 80228520 00225460  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80228524 00225464  7D 89 03 A6 */	mtctr r12
/* 80228528 00225468  4E 80 04 21 */	bctrl 
/* 8022852C 0022546C  38 00 00 00 */	li r0, 0
/* 80228530 00225470  90 1E 03 34 */	stw r0, 0x358(r30)
/* 80228534 00225474  90 1E 03 3C */	stw r0, 0x360(r30)
/* 80228538 00225478  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8022853C 0022547C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80228540 00225480  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80228544 00225484  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80228548 00225488  7C 08 03 A6 */	mtlr r0
/* 8022854C 0022548C  38 21 00 20 */	addi r1, r1, 0x20
/* 80228550 00225490  4E 80 00 20 */	blr 
.else
.global init__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSectionPQ24Game8StateArg
init__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSectionPQ24Game8StateArg:
/* 80228420 00225360  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80228424 00225364  7C 08 02 A6 */	mflr r0
/* 80228428 00225368  90 01 00 24 */	stw r0, 0x24(r1)
/* 8022842C 0022536C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80228430 00225370  7C BF 2B 78 */	mr r31, r5
/* 80228434 00225374  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80228438 00225378  7C 9E 23 78 */	mr r30, r4
/* 8022843C 0022537C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80228440 00225380  7C 7D 1B 78 */	mr r29, r3
/* 80228444 00225384  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80228448 00225388  4B F3 2D A9 */	bl clearDeadCount__Q24Game7NaviMgrFv
/* 8022844C 0022538C  C0 02 BE F0 */	lfs f0, lbl_8051A250@sda21(r2)
/* 80228450 00225390  38 00 00 00 */	li r0, 0
/* 80228454 00225394  7F C3 F3 78 */	mr r3, r30
/* 80228458 00225398  D0 1E 01 F4 */	stfs f0, 0x1f4(r30)
/* 8022845C 0022539C  D0 1E 01 F0 */	stfs f0, 0x1f0(r30)
/* 80228460 002253A0  90 1E 03 BC */	stw r0, 0x3bc(r30)
/* 80228464 002253A4  D0 1E 03 C0 */	stfs f0, 0x3c0(r30)
/* 80228468 002253A8  4B F9 C4 59 */	bl clearGetDopeCount__Q24Game13VsGameSectionFv
/* 8022846C 002253AC  7F C3 F3 78 */	mr r3, r30
/* 80228470 002253B0  4B F9 C5 39 */	bl clearGetCherryCount__Q24Game13VsGameSectionFv
/* 80228474 002253B4  38 00 00 00 */	li r0, 0
/* 80228478 002253B8  28 1F 00 00 */	cmplwi r31, 0
/* 8022847C 002253BC  90 1E 03 24 */	stw r0, 0x324(r30)
/* 80228480 002253C0  41 82 00 18 */	beq .L_80228498
/* 80228484 002253C4  88 1F 00 00 */	lbz r0, 0(r31)
/* 80228488 002253C8  28 00 00 00 */	cmplwi r0, 0
/* 8022848C 002253CC  41 82 00 0C */	beq .L_80228498
/* 80228490 002253D0  7F C3 F3 78 */	mr r3, r30
/* 80228494 002253D4  4B F2 79 11 */	bl clearHeap__Q24Game15BaseGameSectionFv
.L_80228498:
/* 80228498 002253D8  38 00 00 01 */	li r0, 1
/* 8022849C 002253DC  3C 60 80 4C */	lis r3, "cMaps__24@unnamed@vsGS_Title_cpp@"@ha
/* 802284A0 002253E0  98 1E 02 05 */	stb r0, 0x205(r30)
/* 802284A4 002253E4  38 00 00 00 */	li r0, 0
/* 802284A8 002253E8  38 83 0D F4 */	addi r4, r3, "cMaps__24@unnamed@vsGS_Title_cpp@"@l
/* 802284AC 002253EC  38 7E 02 24 */	addi r3, r30, 0x224
/* 802284B0 002253F0  90 1E 02 08 */	stw r0, 0x208(r30)
/* 802284B4 002253F4  90 1D 00 18 */	stw r0, 0x18(r29)
/* 802284B8 002253F8  90 1D 00 14 */	stw r0, 0x14(r29)
/* 802284BC 002253FC  98 1D 00 10 */	stb r0, 0x10(r29)
/* 802284C0 00225400  90 1D 00 2C */	stw r0, 0x2c(r29)
/* 802284C4 00225404  90 1D 00 24 */	stw r0, 0x24(r29)
/* 802284C8 00225408  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 802284CC 0022540C  54 00 10 3A */	slwi r0, r0, 2
/* 802284D0 00225410  7C 84 00 2E */	lwzx r4, r4, r0
/* 802284D4 00225414  4B EA 23 85 */	bl strcpy
/* 802284D8 00225418  38 00 00 00 */	li r0, 0
/* 802284DC 0022541C  90 1D 00 20 */	stw r0, 0x20(r29)
/* 802284E0 00225420  80 7E 02 0C */	lwz r3, 0x20c(r30)
/* 802284E4 00225424  85 83 00 18 */	lwzu r12, 0x18(r3)
/* 802284E8 00225428  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802284EC 0022542C  7D 89 03 A6 */	mtctr r12
/* 802284F0 00225430  4E 80 04 21 */	bctrl 
/* 802284F4 00225434  90 7D 00 28 */	stw r3, 0x28(r29)
/* 802284F8 00225438  7F C3 F3 78 */	mr r3, r30
/* 802284FC 0022543C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80228500 00225440  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 80228504 00225444  7D 89 03 A6 */	mtctr r12
/* 80228508 00225448  4E 80 04 21 */	bctrl 
/* 8022850C 0022544C  7F C3 F3 78 */	mr r3, r30
/* 80228510 00225450  4B F9 93 35 */	bl initPlayData__Q24Game13VsGameSectionFv
/* 80228514 00225454  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80228518 00225458  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8022851C 0022545C  81 83 00 00 */	lwz r12, 0(r3)
/* 80228520 00225460  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80228524 00225464  7D 89 03 A6 */	mtctr r12
/* 80228528 00225468  4E 80 04 21 */	bctrl 
/* 8022852C 0022546C  38 00 00 00 */	li r0, 0
/* 80228530 00225470  90 1E 03 34 */	stw r0, 0x334(r30)
/* 80228534 00225474  90 1E 03 3C */	stw r0, 0x33c(r30)
/* 80228538 00225478  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8022853C 0022547C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80228540 00225480  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80228544 00225484  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80228548 00225488  7C 08 03 A6 */	mtlr r0
/* 8022854C 0022548C  38 21 00 20 */	addi r1, r1, 0x20
/* 80228550 00225490  4E 80 00 20 */	blr 
.endif

.if version == 1
.global dvdload__Q34Game6VsGame10TitleStateFv
dvdload__Q34Game6VsGame10TitleStateFv:
/* 80228554 00225494  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80228558 00225498  7C 08 02 A6 */	mflr r0
/* 8022855C 0022549C  3C 80 80 48 */	lis r4, lbl_80483458@ha
/* 80228560 002254A0  90 01 00 64 */	stw r0, 0x64(r1)
/* 80228564 002254A4  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80228568 002254A8  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8022856C 002254AC  93 A1 00 54 */	stw r29, 0x54(r1)
/* 80228570 002254B0  7C 7D 1B 78 */	mr r29, r3
/* 80228574 002254B4  38 61 00 08 */	addi r3, r1, 8
/* 80228578 002254B8  93 81 00 50 */	stw r28, 0x50(r1)
/* 8022857C 002254BC  3B 84 34 58 */	addi r28, r4, lbl_80483458@l
/* 80228580 002254C0  48 10 CF 31 */	bl __ct__Q26PSGame9SceneInfoFv
/* 80228584 002254C4  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80228588 002254C8  38 60 00 00 */	li r3, 0
/* 8022858C 002254CC  80 04 00 44 */	lwz r0, 0x44(r4)
/* 80228590 002254D0  2C 00 00 02 */	cmpwi r0, 2
/* 80228594 002254D4  41 82 00 0C */	beq .L_802285A0
/* 80228598 002254D8  2C 00 00 03 */	cmpwi r0, 3
/* 8022859C 002254DC  40 82 00 08 */	bne .L_802285A4
.L_802285A0:
/* 802285A0 002254E0  38 60 00 01 */	li r3, 1
.L_802285A4:
/* 802285A4 002254E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802285A8 002254E8  41 82 00 10 */	beq .L_802285B8
/* 802285AC 002254EC  38 00 00 11 */	li r0, 0x11
/* 802285B0 002254F0  98 01 00 0E */	stb r0, 0xe(r1)
/* 802285B4 002254F4  48 00 00 0C */	b .L_802285C0
.L_802285B8:
/* 802285B8 002254F8  38 00 00 13 */	li r0, 0x13
/* 802285BC 002254FC  98 01 00 0E */	stb r0, 0xe(r1)
.L_802285C0:
/* 802285C0 00225500  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 802285C4 00225504  38 60 00 00 */	li r3, 0
/* 802285C8 00225508  98 61 00 0F */	stb r3, 0xf(r1)
/* 802285CC 0022550C  28 00 00 00 */	cmplwi r0, 0
/* 802285D0 00225510  40 82 00 18 */	bne .L_802285E8
/* 802285D4 00225514  38 7C 00 74 */	addi r3, r28, 0x74
/* 802285D8 00225518  38 BC 00 80 */	addi r5, r28, 0x80
/* 802285DC 0022551C  38 80 01 D3 */	li r4, 0x1d3
/* 802285E0 00225520  4C C6 31 82 */	crclr 6
/* 802285E4 00225524  4B E0 20 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802285E8:
/* 802285E8 00225528  80 6D 98 80 */	lwz r3, spSceneMgr__8PSSystem@sda21(r13)
/* 802285EC 0022552C  38 81 00 08 */	addi r4, r1, 8
/* 802285F0 00225530  81 83 00 00 */	lwz r12, 0(r3)
/* 802285F4 00225534  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802285F8 00225538  7D 89 03 A6 */	mtctr r12
/* 802285FC 0022553C  4E 80 04 21 */	bctrl 
/* 80228600 00225540  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80228604 00225544  28 00 00 00 */	cmplwi r0, 0
/* 80228608 00225548  40 82 00 18 */	bne .L_80228620
/* 8022860C 0022554C  38 7C 00 74 */	addi r3, r28, 0x74
/* 80228610 00225550  38 BC 00 80 */	addi r5, r28, 0x80
/* 80228614 00225554  38 80 01 D3 */	li r4, 0x1d3
/* 80228618 00225558  4C C6 31 82 */	crclr 6
/* 8022861C 0022555C  4B E0 20 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80228620:
/* 80228620 00225560  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80228624 00225564  80 1E 00 04 */	lwz r0, 4(r30)
/* 80228628 00225568  28 00 00 00 */	cmplwi r0, 0
/* 8022862C 0022556C  40 82 00 18 */	bne .L_80228644
/* 80228630 00225570  38 7C 00 8C */	addi r3, r28, 0x8c
/* 80228634 00225574  38 BC 00 80 */	addi r5, r28, 0x80
/* 80228638 00225578  38 80 00 C7 */	li r4, 0xc7
/* 8022863C 0022557C  4C C6 31 82 */	crclr 6
/* 80228640 00225580  4B E0 20 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80228644:
/* 80228644 00225584  80 7E 00 04 */	lwz r3, 4(r30)
/* 80228648 00225588  80 63 00 04 */	lwz r3, 4(r3)
/* 8022864C 0022558C  81 83 00 00 */	lwz r12, 0(r3)
/* 80228650 00225590  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80228654 00225594  7D 89 03 A6 */	mtctr r12
/* 80228658 00225598  4E 80 04 21 */	bctrl 
/* 8022865C 0022559C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80228660 002255A0  28 00 00 00 */	cmplwi r0, 0
/* 80228664 002255A4  40 82 00 18 */	bne .L_8022867C
/* 80228668 002255A8  38 7C 00 74 */	addi r3, r28, 0x74
/* 8022866C 002255AC  38 BC 00 80 */	addi r5, r28, 0x80
/* 80228670 002255B0  38 80 01 D3 */	li r4, 0x1d3
/* 80228674 002255B4  4C C6 31 82 */	crclr 6
/* 80228678 002255B8  4B E0 1F C9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022867C:
/* 8022867C 002255BC  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80228680 002255C0  80 1E 00 04 */	lwz r0, 4(r30)
/* 80228684 002255C4  28 00 00 00 */	cmplwi r0, 0
/* 80228688 002255C8  40 82 00 18 */	bne .L_802286A0
/* 8022868C 002255CC  38 7C 00 8C */	addi r3, r28, 0x8c
/* 80228690 002255D0  38 BC 00 80 */	addi r5, r28, 0x80
/* 80228694 002255D4  38 80 00 C7 */	li r4, 0xc7
/* 80228698 002255D8  4C C6 31 82 */	crclr 6
/* 8022869C 002255DC  4B E0 1F A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802286A0:
/* 802286A0 002255E0  80 7E 00 04 */	lwz r3, 4(r30)
/* 802286A4 002255E4  80 63 00 04 */	lwz r3, 4(r3)
/* 802286A8 002255E8  81 83 00 00 */	lwz r12, 0(r3)
/* 802286AC 002255EC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802286B0 002255F0  7D 89 03 A6 */	mtctr r12
/* 802286B4 002255F4  4E 80 04 21 */	bctrl 
/* 802286B8 002255F8  38 60 00 08 */	li r3, 8
/* 802286BC 002255FC  4B DF B7 E9 */	bl __nw__FUl
/* 802286C0 00225600  7C 60 1B 79 */	or. r0, r3, r3
/* 802286C4 00225604  41 82 00 10 */	beq .L_802286D4
/* 802286C8 00225608  38 80 00 1E */	li r4, 0x1e
/* 802286CC 0022560C  48 00 C9 D5 */	bl __ct__Q24Game21Challenge2D_TitleInfoFi
/* 802286D0 00225610  7C 60 1B 78 */	mr r0, r3
.L_802286D4:
/* 802286D4 00225614  90 1D 00 3C */	stw r0, 0x3c(r29)
/* 802286D8 00225618  38 60 00 08 */	li r3, 8
/* 802286DC 0022561C  4B DF B7 C9 */	bl __nw__FUl
/* 802286E0 00225620  7C 7C 1B 79 */	or. r28, r3, r3
/* 802286E4 00225624  41 82 00 2C */	beq .L_80228710
/* 802286E8 00225628  80 7D 00 38 */	lwz r3, 0x38(r29)
/* 802286EC 0022562C  80 63 02 10 */	lwz r3, 0x234(r3)
/* 802286F0 00225630  85 83 00 18 */	lwzu r12, 0x18(r3)
/* 802286F4 00225634  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802286F8 00225638  7D 89 03 A6 */	mtctr r12
/* 802286FC 0022563C  4E 80 04 21 */	bctrl 
/* 80228700 00225640  7C 64 1B 78 */	mr r4, r3
/* 80228704 00225644  7F 83 E3 78 */	mr r3, r28
/* 80228708 00225648  48 00 CA A9 */	bl __ct__Q24Game14Vs2D_TitleInfoFi
/* 8022870C 0022564C  7C 7C 1B 78 */	mr r28, r3
.L_80228710:
/* 80228710 00225650  93 9D 00 40 */	stw r28, 0x40(r29)
/* 80228714 00225654  3B 80 00 00 */	li r28, 0
.L_80228718:
/* 80228718 00225658  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8022871C 0022565C  48 1F A8 15 */	bl getPlayCommonData__6SystemFv
/* 80228720 00225660  7F 84 E3 78 */	mr r4, r28
/* 80228724 00225664  48 00 C1 1D */	bl challenge_get_CourseState__Q24Game14PlayCommonDataFi
/* 80228728 00225668  3B 9C 00 01 */	addi r28, r28, 1
/* 8022872C 0022566C  2C 1C 00 05 */	cmpwi r28, 5
/* 80228730 00225670  41 80 FF E8 */	blt .L_80228718
/* 80228734 00225674  3B C0 00 00 */	li r30, 0
.L_80228738:
/* 80228738 00225678  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8022873C 0022567C  48 1F A7 F5 */	bl getPlayCommonData__6SystemFv
/* 80228740 00225680  7F C4 F3 78 */	mr r4, r30
/* 80228744 00225684  48 00 C0 FD */	bl challenge_get_CourseState__Q24Game14PlayCommonDataFi
/* 80228748 00225688  7C 7C 1B 78 */	mr r28, r3
/* 8022874C 0022568C  80 7D 00 3C */	lwz r3, 0x3c(r29)
/* 80228750 00225690  7F C4 F3 78 */	mr r4, r30
/* 80228754 00225694  48 00 C9 E1 */	bl __cl__Q24Game21Challenge2D_TitleInfoFi
/* 80228758 00225698  80 BD 00 38 */	lwz r5, 0x38(r29)
/* 8022875C 0022569C  7C 7F 1B 78 */	mr r31, r3
/* 80228760 002256A0  7F C4 F3 78 */	mr r4, r30
/* 80228764 002256A4  80 65 02 0C */	lwz r3, 0x230(r5)
/* 80228768 002256A8  48 00 53 7D */	bl getStageData__Q34Game13ChallengeGame9StageListFi
/* 8022876C 002256AC  28 03 00 00 */	cmplwi r3, 0
/* 80228770 002256B0  41 82 01 30 */	beq .L_802288A0
/* 80228774 002256B4  80 03 00 6C */	lwz r0, 0x6c(r3)
/* 80228778 002256B8  38 C3 00 18 */	addi r6, r3, 0x18
/* 8022877C 002256BC  38 BC 00 04 */	addi r5, r28, 4
/* 80228780 002256C0  38 9C 00 10 */	addi r4, r28, 0x10
/* 80228784 002256C4  90 1F 00 00 */	stw r0, 0(r31)
/* 80228788 002256C8  38 00 00 00 */	li r0, 0
/* 8022878C 002256CC  C0 03 00 60 */	lfs f0, 0x60(r3)
/* 80228790 002256D0  FC 00 00 1E */	fctiwz f0, f0
/* 80228794 002256D4  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 80228798 002256D8  80 E1 00 44 */	lwz r7, 0x44(r1)
/* 8022879C 002256DC  90 FF 00 0C */	stw r7, 0xc(r31)
/* 802287A0 002256E0  80 E3 00 64 */	lwz r7, 0x64(r3)
/* 802287A4 002256E4  90 FF 00 04 */	stw r7, 4(r31)
/* 802287A8 002256E8  80 E3 00 68 */	lwz r7, 0x68(r3)
/* 802287AC 002256EC  90 FF 00 08 */	stw r7, 8(r31)
/* 802287B0 002256F0  90 DF 00 10 */	stw r6, 0x10(r31)
/* 802287B4 002256F4  90 BF 00 14 */	stw r5, 0x14(r31)
/* 802287B8 002256F8  90 9F 00 18 */	stw r4, 0x18(r31)
/* 802287BC 002256FC  80 63 00 74 */	lwz r3, 0x74(r3)
/* 802287C0 00225700  90 7F 00 1C */	stw r3, 0x1c(r31)
/* 802287C4 00225704  98 1F 00 20 */	stb r0, 0x20(r31)
/* 802287C8 00225708  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802287CC 0022570C  48 1F A7 65 */	bl getPlayCommonData__6SystemFv
/* 802287D0 00225710  7F C4 F3 78 */	mr r4, r30
/* 802287D4 00225714  48 00 C0 91 */	bl challenge_checkOpen__Q24Game14PlayCommonDataFi
/* 802287D8 00225718  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802287DC 0022571C  41 82 00 10 */	beq .L_802287EC
/* 802287E0 00225720  88 1F 00 20 */	lbz r0, 0x20(r31)
/* 802287E4 00225724  60 00 00 01 */	ori r0, r0, 1
/* 802287E8 00225728  98 1F 00 20 */	stb r0, 0x20(r31)
.L_802287EC:
/* 802287EC 0022572C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802287F0 00225730  48 1F A7 41 */	bl getPlayCommonData__6SystemFv
/* 802287F4 00225734  7F C4 F3 78 */	mr r4, r30
/* 802287F8 00225738  48 00 C0 99 */	bl challenge_checkClear__Q24Game14PlayCommonDataFi
/* 802287FC 0022573C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80228800 00225740  41 82 00 10 */	beq .L_80228810
/* 80228804 00225744  88 1F 00 20 */	lbz r0, 0x20(r31)
/* 80228808 00225748  60 00 00 02 */	ori r0, r0, 2
/* 8022880C 0022574C  98 1F 00 20 */	stb r0, 0x20(r31)
.L_80228810:
/* 80228810 00225750  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80228814 00225754  48 1F A7 1D */	bl getPlayCommonData__6SystemFv
/* 80228818 00225758  7F C4 F3 78 */	mr r4, r30
/* 8022881C 0022575C  48 00 C0 CD */	bl challenge_checkJustOpen__Q24Game14PlayCommonDataFi
/* 80228820 00225760  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80228824 00225764  41 82 00 10 */	beq .L_80228834
/* 80228828 00225768  88 1F 00 20 */	lbz r0, 0x20(r31)
/* 8022882C 0022576C  60 00 00 08 */	ori r0, r0, 8
/* 80228830 00225770  98 1F 00 20 */	stb r0, 0x20(r31)
.L_80228834:
/* 80228834 00225774  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80228838 00225778  48 1F A6 F9 */	bl getPlayCommonData__6SystemFv
/* 8022883C 0022577C  7F C4 F3 78 */	mr r4, r30
/* 80228840 00225780  48 00 C0 F5 */	bl challenge_checkJustClear__Q24Game14PlayCommonDataFi
/* 80228844 00225784  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80228848 00225788  41 82 00 10 */	beq .L_80228858
/* 8022884C 0022578C  88 1F 00 20 */	lbz r0, 0x20(r31)
/* 80228850 00225790  60 00 00 10 */	ori r0, r0, 0x10
/* 80228854 00225794  98 1F 00 20 */	stb r0, 0x20(r31)
.L_80228858:
/* 80228858 00225798  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8022885C 0022579C  48 1F A6 D5 */	bl getPlayCommonData__6SystemFv
/* 80228860 002257A0  7F C4 F3 78 */	mr r4, r30
/* 80228864 002257A4  48 00 C1 1D */	bl challenge_checkJustKunsho__Q24Game14PlayCommonDataFi
/* 80228868 002257A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022886C 002257AC  41 82 00 10 */	beq .L_8022887C
/* 80228870 002257B0  88 1F 00 20 */	lbz r0, 0x20(r31)
/* 80228874 002257B4  60 00 00 20 */	ori r0, r0, 0x20
/* 80228878 002257B8  98 1F 00 20 */	stb r0, 0x20(r31)
.L_8022887C:
/* 8022887C 002257BC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80228880 002257C0  48 1F A6 B1 */	bl getPlayCommonData__6SystemFv
/* 80228884 002257C4  7F C4 F3 78 */	mr r4, r30
/* 80228888 002257C8  48 00 C0 35 */	bl challenge_checkKunsho__Q24Game14PlayCommonDataFi
/* 8022888C 002257CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80228890 002257D0  41 82 00 10 */	beq .L_802288A0
/* 80228894 002257D4  88 1F 00 20 */	lbz r0, 0x20(r31)
/* 80228898 002257D8  60 00 00 04 */	ori r0, r0, 4
/* 8022889C 002257DC  98 1F 00 20 */	stb r0, 0x20(r31)
.L_802288A0:
/* 802288A0 002257E0  3B DE 00 01 */	addi r30, r30, 1
/* 802288A4 002257E4  2C 1E 00 1E */	cmpwi r30, 0x1e
/* 802288A8 002257E8  41 80 FE 90 */	blt .L_80228738
/* 802288AC 002257EC  3B 80 00 00 */	li r28, 0
.L_802288B0:
/* 802288B0 002257F0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802288B4 002257F4  48 1F A6 7D */	bl getPlayCommonData__6SystemFv
/* 802288B8 002257F8  7F 84 E3 78 */	mr r4, r28
/* 802288BC 002257FC  48 00 BF 85 */	bl challenge_get_CourseState__Q24Game14PlayCommonDataFi
/* 802288C0 00225800  3B 9C 00 01 */	addi r28, r28, 1
/* 802288C4 00225804  2C 1C 00 05 */	cmpwi r28, 5
/* 802288C8 00225808  41 80 FF E8 */	blt .L_802288B0
/* 802288CC 0022580C  3B 80 00 00 */	li r28, 0
/* 802288D0 00225810  48 00 00 38 */	b .L_80228908
.L_802288D4:
/* 802288D4 00225814  80 7D 00 40 */	lwz r3, 0x40(r29)
/* 802288D8 00225818  7F 84 E3 78 */	mr r4, r28
/* 802288DC 0022581C  48 00 C9 45 */	bl __cl__Q24Game14Vs2D_TitleInfoFi
/* 802288E0 00225820  80 BD 00 38 */	lwz r5, 0x38(r29)
/* 802288E4 00225824  7C 7E 1B 78 */	mr r30, r3
/* 802288E8 00225828  7F 84 E3 78 */	mr r4, r28
/* 802288EC 0022582C  80 65 02 10 */	lwz r3, 0x234(r5)
/* 802288F0 00225830  48 00 56 E5 */	bl getStageData__Q34Game6VsGame9StageListFi
/* 802288F4 00225834  28 03 00 00 */	cmplwi r3, 0
/* 802288F8 00225838  41 82 00 0C */	beq .L_80228904
/* 802288FC 0022583C  80 03 00 6C */	lwz r0, 0x6c(r3)
/* 80228900 00225840  90 1E 00 00 */	stw r0, 0(r30)
.L_80228904:
/* 80228904 00225844  3B 9C 00 01 */	addi r28, r28, 1
.L_80228908:
/* 80228908 00225848  80 7D 00 38 */	lwz r3, 0x38(r29)
/* 8022890C 0022584C  80 63 02 10 */	lwz r3, 0x234(r3)
/* 80228910 00225850  85 83 00 18 */	lwzu r12, 0x18(r3)
/* 80228914 00225854  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80228918 00225858  7D 89 03 A6 */	mtctr r12
/* 8022891C 0022585C  4E 80 04 21 */	bctrl 
/* 80228920 00225860  7C 1C 18 00 */	cmpw r28, r3
/* 80228924 00225864  41 80 FF B0 */	blt .L_802288D4
/* 80228928 00225868  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8022892C 0022586C  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80228930 00225870  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 80228934 00225874  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 80228938 00225878  83 81 00 50 */	lwz r28, 0x50(r1)
/* 8022893C 0022587C  7C 08 03 A6 */	mtlr r0
/* 80228940 00225880  38 21 00 60 */	addi r1, r1, 0x60
/* 80228944 00225884  4E 80 00 20 */	blr 
.else
.global dvdload__Q34Game6VsGame10TitleStateFv
dvdload__Q34Game6VsGame10TitleStateFv:
/* 80228554 00225494  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80228558 00225498  7C 08 02 A6 */	mflr r0
/* 8022855C 0022549C  3C 80 80 48 */	lis r4, lbl_80483458@ha
/* 80228560 002254A0  90 01 00 64 */	stw r0, 0x64(r1)
/* 80228564 002254A4  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80228568 002254A8  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8022856C 002254AC  93 A1 00 54 */	stw r29, 0x54(r1)
/* 80228570 002254B0  7C 7D 1B 78 */	mr r29, r3
/* 80228574 002254B4  38 61 00 08 */	addi r3, r1, 8
/* 80228578 002254B8  93 81 00 50 */	stw r28, 0x50(r1)
/* 8022857C 002254BC  3B 84 34 58 */	addi r28, r4, lbl_80483458@l
/* 80228580 002254C0  48 10 CF 31 */	bl __ct__Q26PSGame9SceneInfoFv
/* 80228584 002254C4  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80228588 002254C8  38 60 00 00 */	li r3, 0
/* 8022858C 002254CC  80 04 00 44 */	lwz r0, 0x44(r4)
/* 80228590 002254D0  2C 00 00 02 */	cmpwi r0, 2
/* 80228594 002254D4  41 82 00 0C */	beq .L_802285A0
/* 80228598 002254D8  2C 00 00 03 */	cmpwi r0, 3
/* 8022859C 002254DC  40 82 00 08 */	bne .L_802285A4
.L_802285A0:
/* 802285A0 002254E0  38 60 00 01 */	li r3, 1
.L_802285A4:
/* 802285A4 002254E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802285A8 002254E8  41 82 00 10 */	beq .L_802285B8
/* 802285AC 002254EC  38 00 00 11 */	li r0, 0x11
/* 802285B0 002254F0  98 01 00 0E */	stb r0, 0xe(r1)
/* 802285B4 002254F4  48 00 00 0C */	b .L_802285C0
.L_802285B8:
/* 802285B8 002254F8  38 00 00 13 */	li r0, 0x13
/* 802285BC 002254FC  98 01 00 0E */	stb r0, 0xe(r1)
.L_802285C0:
/* 802285C0 00225500  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 802285C4 00225504  38 60 00 00 */	li r3, 0
/* 802285C8 00225508  98 61 00 0F */	stb r3, 0xf(r1)
/* 802285CC 0022550C  28 00 00 00 */	cmplwi r0, 0
/* 802285D0 00225510  40 82 00 18 */	bne .L_802285E8
/* 802285D4 00225514  38 7C 00 74 */	addi r3, r28, 0x74
/* 802285D8 00225518  38 BC 00 80 */	addi r5, r28, 0x80
/* 802285DC 0022551C  38 80 01 D3 */	li r4, 0x1d3
/* 802285E0 00225520  4C C6 31 82 */	crclr 6
/* 802285E4 00225524  4B E0 20 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802285E8:
/* 802285E8 00225528  80 6D 98 80 */	lwz r3, spSceneMgr__8PSSystem@sda21(r13)
/* 802285EC 0022552C  38 81 00 08 */	addi r4, r1, 8
/* 802285F0 00225530  81 83 00 00 */	lwz r12, 0(r3)
/* 802285F4 00225534  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802285F8 00225538  7D 89 03 A6 */	mtctr r12
/* 802285FC 0022553C  4E 80 04 21 */	bctrl 
/* 80228600 00225540  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80228604 00225544  28 00 00 00 */	cmplwi r0, 0
/* 80228608 00225548  40 82 00 18 */	bne .L_80228620
/* 8022860C 0022554C  38 7C 00 74 */	addi r3, r28, 0x74
/* 80228610 00225550  38 BC 00 80 */	addi r5, r28, 0x80
/* 80228614 00225554  38 80 01 D3 */	li r4, 0x1d3
/* 80228618 00225558  4C C6 31 82 */	crclr 6
/* 8022861C 0022555C  4B E0 20 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80228620:
/* 80228620 00225560  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80228624 00225564  80 1E 00 04 */	lwz r0, 4(r30)
/* 80228628 00225568  28 00 00 00 */	cmplwi r0, 0
/* 8022862C 0022556C  40 82 00 18 */	bne .L_80228644
/* 80228630 00225570  38 7C 00 8C */	addi r3, r28, 0x8c
/* 80228634 00225574  38 BC 00 80 */	addi r5, r28, 0x80
/* 80228638 00225578  38 80 00 C7 */	li r4, 0xc7
/* 8022863C 0022557C  4C C6 31 82 */	crclr 6
/* 80228640 00225580  4B E0 20 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80228644:
/* 80228644 00225584  80 7E 00 04 */	lwz r3, 4(r30)
/* 80228648 00225588  80 63 00 04 */	lwz r3, 4(r3)
/* 8022864C 0022558C  81 83 00 00 */	lwz r12, 0(r3)
/* 80228650 00225590  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80228654 00225594  7D 89 03 A6 */	mtctr r12
/* 80228658 00225598  4E 80 04 21 */	bctrl 
/* 8022865C 0022559C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80228660 002255A0  28 00 00 00 */	cmplwi r0, 0
/* 80228664 002255A4  40 82 00 18 */	bne .L_8022867C
/* 80228668 002255A8  38 7C 00 74 */	addi r3, r28, 0x74
/* 8022866C 002255AC  38 BC 00 80 */	addi r5, r28, 0x80
/* 80228670 002255B0  38 80 01 D3 */	li r4, 0x1d3
/* 80228674 002255B4  4C C6 31 82 */	crclr 6
/* 80228678 002255B8  4B E0 1F C9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022867C:
/* 8022867C 002255BC  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80228680 002255C0  80 1E 00 04 */	lwz r0, 4(r30)
/* 80228684 002255C4  28 00 00 00 */	cmplwi r0, 0
/* 80228688 002255C8  40 82 00 18 */	bne .L_802286A0
/* 8022868C 002255CC  38 7C 00 8C */	addi r3, r28, 0x8c
/* 80228690 002255D0  38 BC 00 80 */	addi r5, r28, 0x80
/* 80228694 002255D4  38 80 00 C7 */	li r4, 0xc7
/* 80228698 002255D8  4C C6 31 82 */	crclr 6
/* 8022869C 002255DC  4B E0 1F A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802286A0:
/* 802286A0 002255E0  80 7E 00 04 */	lwz r3, 4(r30)
/* 802286A4 002255E4  80 63 00 04 */	lwz r3, 4(r3)
/* 802286A8 002255E8  81 83 00 00 */	lwz r12, 0(r3)
/* 802286AC 002255EC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802286B0 002255F0  7D 89 03 A6 */	mtctr r12
/* 802286B4 002255F4  4E 80 04 21 */	bctrl 
/* 802286B8 002255F8  38 60 00 08 */	li r3, 8
/* 802286BC 002255FC  4B DF B7 E9 */	bl __nw__FUl
/* 802286C0 00225600  7C 60 1B 79 */	or. r0, r3, r3
/* 802286C4 00225604  41 82 00 10 */	beq .L_802286D4
/* 802286C8 00225608  38 80 00 1E */	li r4, 0x1e
/* 802286CC 0022560C  48 00 C9 D5 */	bl __ct__Q24Game21Challenge2D_TitleInfoFi
/* 802286D0 00225610  7C 60 1B 78 */	mr r0, r3
.L_802286D4:
/* 802286D4 00225614  90 1D 00 3C */	stw r0, 0x3c(r29)
/* 802286D8 00225618  38 60 00 08 */	li r3, 8
/* 802286DC 0022561C  4B DF B7 C9 */	bl __nw__FUl
/* 802286E0 00225620  7C 7C 1B 79 */	or. r28, r3, r3
/* 802286E4 00225624  41 82 00 2C */	beq .L_80228710
/* 802286E8 00225628  80 7D 00 38 */	lwz r3, 0x38(r29)
/* 802286EC 0022562C  80 63 02 10 */	lwz r3, 0x210(r3)
/* 802286F0 00225630  85 83 00 18 */	lwzu r12, 0x18(r3)
/* 802286F4 00225634  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802286F8 00225638  7D 89 03 A6 */	mtctr r12
/* 802286FC 0022563C  4E 80 04 21 */	bctrl 
/* 80228700 00225640  7C 64 1B 78 */	mr r4, r3
/* 80228704 00225644  7F 83 E3 78 */	mr r3, r28
/* 80228708 00225648  48 00 CA A9 */	bl __ct__Q24Game14Vs2D_TitleInfoFi
/* 8022870C 0022564C  7C 7C 1B 78 */	mr r28, r3
.L_80228710:
/* 80228710 00225650  93 9D 00 40 */	stw r28, 0x40(r29)
/* 80228714 00225654  3B 80 00 00 */	li r28, 0
.L_80228718:
/* 80228718 00225658  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8022871C 0022565C  48 1F A8 15 */	bl getPlayCommonData__6SystemFv
/* 80228720 00225660  7F 84 E3 78 */	mr r4, r28
/* 80228724 00225664  48 00 C1 1D */	bl challenge_get_CourseState__Q24Game14PlayCommonDataFi
/* 80228728 00225668  3B 9C 00 01 */	addi r28, r28, 1
/* 8022872C 0022566C  2C 1C 00 05 */	cmpwi r28, 5
/* 80228730 00225670  41 80 FF E8 */	blt .L_80228718
/* 80228734 00225674  3B C0 00 00 */	li r30, 0
.L_80228738:
/* 80228738 00225678  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8022873C 0022567C  48 1F A7 F5 */	bl getPlayCommonData__6SystemFv
/* 80228740 00225680  7F C4 F3 78 */	mr r4, r30
/* 80228744 00225684  48 00 C0 FD */	bl challenge_get_CourseState__Q24Game14PlayCommonDataFi
/* 80228748 00225688  7C 7C 1B 78 */	mr r28, r3
/* 8022874C 0022568C  80 7D 00 3C */	lwz r3, 0x3c(r29)
/* 80228750 00225690  7F C4 F3 78 */	mr r4, r30
/* 80228754 00225694  48 00 C9 E1 */	bl __cl__Q24Game21Challenge2D_TitleInfoFi
/* 80228758 00225698  80 BD 00 38 */	lwz r5, 0x38(r29)
/* 8022875C 0022569C  7C 7F 1B 78 */	mr r31, r3
/* 80228760 002256A0  7F C4 F3 78 */	mr r4, r30
/* 80228764 002256A4  80 65 02 0C */	lwz r3, 0x20c(r5)
/* 80228768 002256A8  48 00 53 7D */	bl getStageData__Q34Game13ChallengeGame9StageListFi
/* 8022876C 002256AC  28 03 00 00 */	cmplwi r3, 0
/* 80228770 002256B0  41 82 01 30 */	beq .L_802288A0
/* 80228774 002256B4  80 03 00 6C */	lwz r0, 0x6c(r3)
/* 80228778 002256B8  38 C3 00 18 */	addi r6, r3, 0x18
/* 8022877C 002256BC  38 BC 00 04 */	addi r5, r28, 4
/* 80228780 002256C0  38 9C 00 10 */	addi r4, r28, 0x10
/* 80228784 002256C4  90 1F 00 00 */	stw r0, 0(r31)
/* 80228788 002256C8  38 00 00 00 */	li r0, 0
/* 8022878C 002256CC  C0 03 00 60 */	lfs f0, 0x60(r3)
/* 80228790 002256D0  FC 00 00 1E */	fctiwz f0, f0
/* 80228794 002256D4  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 80228798 002256D8  80 E1 00 44 */	lwz r7, 0x44(r1)
/* 8022879C 002256DC  90 FF 00 0C */	stw r7, 0xc(r31)
/* 802287A0 002256E0  80 E3 00 64 */	lwz r7, 0x64(r3)
/* 802287A4 002256E4  90 FF 00 04 */	stw r7, 4(r31)
/* 802287A8 002256E8  80 E3 00 68 */	lwz r7, 0x68(r3)
/* 802287AC 002256EC  90 FF 00 08 */	stw r7, 8(r31)
/* 802287B0 002256F0  90 DF 00 10 */	stw r6, 0x10(r31)
/* 802287B4 002256F4  90 BF 00 14 */	stw r5, 0x14(r31)
/* 802287B8 002256F8  90 9F 00 18 */	stw r4, 0x18(r31)
/* 802287BC 002256FC  80 63 00 74 */	lwz r3, 0x74(r3)
/* 802287C0 00225700  90 7F 00 1C */	stw r3, 0x1c(r31)
/* 802287C4 00225704  98 1F 00 20 */	stb r0, 0x20(r31)
/* 802287C8 00225708  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802287CC 0022570C  48 1F A7 65 */	bl getPlayCommonData__6SystemFv
/* 802287D0 00225710  7F C4 F3 78 */	mr r4, r30
/* 802287D4 00225714  48 00 C0 91 */	bl challenge_checkOpen__Q24Game14PlayCommonDataFi
/* 802287D8 00225718  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802287DC 0022571C  41 82 00 10 */	beq .L_802287EC
/* 802287E0 00225720  88 1F 00 20 */	lbz r0, 0x20(r31)
/* 802287E4 00225724  60 00 00 01 */	ori r0, r0, 1
/* 802287E8 00225728  98 1F 00 20 */	stb r0, 0x20(r31)
.L_802287EC:
/* 802287EC 0022572C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802287F0 00225730  48 1F A7 41 */	bl getPlayCommonData__6SystemFv
/* 802287F4 00225734  7F C4 F3 78 */	mr r4, r30
/* 802287F8 00225738  48 00 C0 99 */	bl challenge_checkClear__Q24Game14PlayCommonDataFi
/* 802287FC 0022573C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80228800 00225740  41 82 00 10 */	beq .L_80228810
/* 80228804 00225744  88 1F 00 20 */	lbz r0, 0x20(r31)
/* 80228808 00225748  60 00 00 02 */	ori r0, r0, 2
/* 8022880C 0022574C  98 1F 00 20 */	stb r0, 0x20(r31)
.L_80228810:
/* 80228810 00225750  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80228814 00225754  48 1F A7 1D */	bl getPlayCommonData__6SystemFv
/* 80228818 00225758  7F C4 F3 78 */	mr r4, r30
/* 8022881C 0022575C  48 00 C0 CD */	bl challenge_checkJustOpen__Q24Game14PlayCommonDataFi
/* 80228820 00225760  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80228824 00225764  41 82 00 10 */	beq .L_80228834
/* 80228828 00225768  88 1F 00 20 */	lbz r0, 0x20(r31)
/* 8022882C 0022576C  60 00 00 08 */	ori r0, r0, 8
/* 80228830 00225770  98 1F 00 20 */	stb r0, 0x20(r31)
.L_80228834:
/* 80228834 00225774  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80228838 00225778  48 1F A6 F9 */	bl getPlayCommonData__6SystemFv
/* 8022883C 0022577C  7F C4 F3 78 */	mr r4, r30
/* 80228840 00225780  48 00 C0 F5 */	bl challenge_checkJustClear__Q24Game14PlayCommonDataFi
/* 80228844 00225784  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80228848 00225788  41 82 00 10 */	beq .L_80228858
/* 8022884C 0022578C  88 1F 00 20 */	lbz r0, 0x20(r31)
/* 80228850 00225790  60 00 00 10 */	ori r0, r0, 0x10
/* 80228854 00225794  98 1F 00 20 */	stb r0, 0x20(r31)
.L_80228858:
/* 80228858 00225798  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8022885C 0022579C  48 1F A6 D5 */	bl getPlayCommonData__6SystemFv
/* 80228860 002257A0  7F C4 F3 78 */	mr r4, r30
/* 80228864 002257A4  48 00 C1 1D */	bl challenge_checkJustKunsho__Q24Game14PlayCommonDataFi
/* 80228868 002257A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022886C 002257AC  41 82 00 10 */	beq .L_8022887C
/* 80228870 002257B0  88 1F 00 20 */	lbz r0, 0x20(r31)
/* 80228874 002257B4  60 00 00 20 */	ori r0, r0, 0x20
/* 80228878 002257B8  98 1F 00 20 */	stb r0, 0x20(r31)
.L_8022887C:
/* 8022887C 002257BC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80228880 002257C0  48 1F A6 B1 */	bl getPlayCommonData__6SystemFv
/* 80228884 002257C4  7F C4 F3 78 */	mr r4, r30
/* 80228888 002257C8  48 00 C0 35 */	bl challenge_checkKunsho__Q24Game14PlayCommonDataFi
/* 8022888C 002257CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80228890 002257D0  41 82 00 10 */	beq .L_802288A0
/* 80228894 002257D4  88 1F 00 20 */	lbz r0, 0x20(r31)
/* 80228898 002257D8  60 00 00 04 */	ori r0, r0, 4
/* 8022889C 002257DC  98 1F 00 20 */	stb r0, 0x20(r31)
.L_802288A0:
/* 802288A0 002257E0  3B DE 00 01 */	addi r30, r30, 1
/* 802288A4 002257E4  2C 1E 00 1E */	cmpwi r30, 0x1e
/* 802288A8 002257E8  41 80 FE 90 */	blt .L_80228738
/* 802288AC 002257EC  3B 80 00 00 */	li r28, 0
.L_802288B0:
/* 802288B0 002257F0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802288B4 002257F4  48 1F A6 7D */	bl getPlayCommonData__6SystemFv
/* 802288B8 002257F8  7F 84 E3 78 */	mr r4, r28
/* 802288BC 002257FC  48 00 BF 85 */	bl challenge_get_CourseState__Q24Game14PlayCommonDataFi
/* 802288C0 00225800  3B 9C 00 01 */	addi r28, r28, 1
/* 802288C4 00225804  2C 1C 00 05 */	cmpwi r28, 5
/* 802288C8 00225808  41 80 FF E8 */	blt .L_802288B0
/* 802288CC 0022580C  3B 80 00 00 */	li r28, 0
/* 802288D0 00225810  48 00 00 38 */	b .L_80228908
.L_802288D4:
/* 802288D4 00225814  80 7D 00 40 */	lwz r3, 0x40(r29)
/* 802288D8 00225818  7F 84 E3 78 */	mr r4, r28
/* 802288DC 0022581C  48 00 C9 45 */	bl __cl__Q24Game14Vs2D_TitleInfoFi
/* 802288E0 00225820  80 BD 00 38 */	lwz r5, 0x38(r29)
/* 802288E4 00225824  7C 7E 1B 78 */	mr r30, r3
/* 802288E8 00225828  7F 84 E3 78 */	mr r4, r28
/* 802288EC 0022582C  80 65 02 10 */	lwz r3, 0x210(r5)
/* 802288F0 00225830  48 00 56 E5 */	bl getStageData__Q34Game6VsGame9StageListFi
/* 802288F4 00225834  28 03 00 00 */	cmplwi r3, 0
/* 802288F8 00225838  41 82 00 0C */	beq .L_80228904
/* 802288FC 0022583C  80 03 00 6C */	lwz r0, 0x6c(r3)
/* 80228900 00225840  90 1E 00 00 */	stw r0, 0(r30)
.L_80228904:
/* 80228904 00225844  3B 9C 00 01 */	addi r28, r28, 1
.L_80228908:
/* 80228908 00225848  80 7D 00 38 */	lwz r3, 0x38(r29)
/* 8022890C 0022584C  80 63 02 10 */	lwz r3, 0x210(r3)
/* 80228910 00225850  85 83 00 18 */	lwzu r12, 0x18(r3)
/* 80228914 00225854  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80228918 00225858  7D 89 03 A6 */	mtctr r12
/* 8022891C 0022585C  4E 80 04 21 */	bctrl 
/* 80228920 00225860  7C 1C 18 00 */	cmpw r28, r3
/* 80228924 00225864  41 80 FF B0 */	blt .L_802288D4
/* 80228928 00225868  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8022892C 0022586C  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80228930 00225870  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 80228934 00225874  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 80228938 00225878  83 81 00 50 */	lwz r28, 0x50(r1)
/* 8022893C 0022587C  7C 08 03 A6 */	mtlr r0
/* 80228940 00225880  38 21 00 60 */	addi r1, r1, 0x60
/* 80228944 00225884  4E 80 00 20 */	blr 
.endif

.global exec__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSection
exec__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSection:
/* 80228948 00225888  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8022894C 0022588C  7C 08 02 A6 */	mflr r0
/* 80228950 00225890  90 01 00 14 */	stw r0, 0x14(r1)
/* 80228954 00225894  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 80228958 00225898  80 05 00 44 */	lwz r0, 0x44(r5)
/* 8022895C 0022589C  2C 00 00 01 */	cmpwi r0, 1
/* 80228960 002258A0  40 82 00 0C */	bne .L_8022896C
/* 80228964 002258A4  48 00 03 29 */	bl execVs__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSection
/* 80228968 002258A8  48 00 00 08 */	b .L_80228970
.L_8022896C:
/* 8022896C 002258AC  48 00 00 15 */	bl execChallenge__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSection
.L_80228970:
/* 80228970 002258B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80228974 002258B4  7C 08 03 A6 */	mtlr r0
/* 80228978 002258B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8022897C 002258BC  4E 80 00 20 */	blr 

.if version == 1
.global execChallenge__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSection
execChallenge__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSection:
/* 80228980 002258C0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80228984 002258C4  7C 08 02 A6 */	mflr r0
/* 80228988 002258C8  90 01 00 54 */	stw r0, 0x54(r1)
/* 8022898C 002258CC  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80228990 002258D0  7C 9F 23 78 */	mr r31, r4
/* 80228994 002258D4  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80228998 002258D8  7C 7E 1B 78 */	mr r30, r3
/* 8022899C 002258DC  3C 60 80 48 */	lis r3, lbl_80483458@ha
/* 802289A0 002258E0  93 A1 00 44 */	stw r29, 0x44(r1)
/* 802289A4 002258E4  93 81 00 40 */	stw r28, 0x40(r1)
/* 802289A8 002258E8  3B 83 34 58 */	addi r28, r3, lbl_80483458@l
/* 802289AC 002258EC  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 802289B0 002258F0  2C 00 00 01 */	cmpwi r0, 1
/* 802289B4 002258F4  41 82 00 6C */	beq .L_80228A20
/* 802289B8 002258F8  40 80 00 10 */	bge .L_802289C8
/* 802289BC 002258FC  2C 00 00 00 */	cmpwi r0, 0
/* 802289C0 00225900  40 80 00 14 */	bge .L_802289D4
/* 802289C4 00225904  48 00 02 58 */	b .L_80228C1C
.L_802289C8:
/* 802289C8 00225908  2C 00 00 03 */	cmpwi r0, 3
/* 802289CC 0022590C  40 80 02 50 */	bge .L_80228C1C
/* 802289D0 00225910  48 00 01 08 */	b .L_80228AD8
.L_802289D4:
/* 802289D4 00225914  80 0D 88 2C */	lwz r0, sCurrentHeap__7JKRHeap@sda21(r13)
/* 802289D8 00225918  90 1E 00 18 */	stw r0, 0x18(r30)
/* 802289DC 0022591C  83 9E 00 18 */	lwz r28, 0x18(r30)
/* 802289E0 00225920  7F 83 E3 78 */	mr r3, r28
/* 802289E4 00225924  4B DF AD D1 */	bl getFreeSize__7JKRHeapFv
/* 802289E8 00225928  7F 84 E3 78 */	mr r4, r28
/* 802289EC 0022592C  38 A0 00 01 */	li r5, 1
/* 802289F0 00225930  4B DF 74 D9 */	bl create__10JKRExpHeapFUlP7JKRHeapb
/* 802289F4 00225934  90 7E 00 14 */	stw r3, 0x14(r30)
/* 802289F8 00225938  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 802289FC 0022593C  4B DF AB A9 */	bl becomeCurrentHeap__7JKRHeapFv
/* 80228A00 00225940  38 00 00 01 */	li r0, 1
/* 80228A04 00225944  38 9F 01 84 */	addi r4, r31, 0x1a8
/* 80228A08 00225948  98 1E 00 10 */	stb r0, 0x10(r30)
/* 80228A0C 0022594C  93 FE 00 38 */	stw r31, 0x38(r30)
/* 80228A10 00225950  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80228A14 00225954  80 BE 00 1C */	lwz r5, 0x1c(r30)
/* 80228A18 00225958  48 1F A5 21 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 80228A1C 0022595C  48 00 02 20 */	b .L_80228C3C
.L_80228A20:
/* 80228A20 00225960  80 1F 01 9C */	lwz r0, 0x1c0(r31)
/* 80228A24 00225964  2C 00 00 02 */	cmpwi r0, 2
/* 80228A28 00225968  40 82 02 14 */	bne .L_80228C3C
/* 80228A2C 0022596C  38 00 00 02 */	li r0, 2
/* 80228A30 00225970  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 80228A34 00225974  98 1E 00 10 */	stb r0, 0x10(r30)
/* 80228A38 00225978  38 80 00 00 */	li r4, 0
/* 80228A3C 0022597C  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 80228A40 00225980  3C 60 80 4C */	lis r3, __vt__Q28Morimura25DispMemberChallengeSelect@ha
/* 80228A44 00225984  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80228A48 00225988  38 63 0E 28 */	addi r3, r3, __vt__Q28Morimura25DispMemberChallengeSelect@l
/* 80228A4C 0022598C  38 00 FF FF */	li r0, -1
/* 80228A50 00225990  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 80228A54 00225994  90 81 00 20 */	stw r4, 0x20(r1)
/* 80228A58 00225998  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80228A5C 0022599C  90 81 00 24 */	stw r4, 0x24(r1)
/* 80228A60 002259A0  90 81 00 28 */	stw r4, 0x28(r1)
/* 80228A64 002259A4  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80228A68 002259A8  90 81 00 30 */	stw r4, 0x30(r1)
/* 80228A6C 002259AC  90 81 00 34 */	stw r4, 0x34(r1)
/* 80228A70 002259B0  90 81 00 38 */	stw r4, 0x38(r1)
/* 80228A74 002259B4  90 81 00 3C */	stw r4, 0x3c(r1)
/* 80228A78 002259B8  80 1E 00 3C */	lwz r0, 0x3c(r30)
/* 80228A7C 002259BC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80228A80 002259C0  80 1F 03 38 */	lwz r0, 0x35c(r31)
/* 80228A84 002259C4  90 01 00 30 */	stw r0, 0x30(r1)
/* 80228A88 002259C8  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 80228A8C 002259CC  90 01 00 28 */	stw r0, 0x28(r1)
/* 80228A90 002259D0  80 05 00 44 */	lwz r0, 0x44(r5)
/* 80228A94 002259D4  2C 00 00 01 */	cmpwi r0, 1
/* 80228A98 002259D8  41 82 00 0C */	beq .L_80228AA4
/* 80228A9C 002259DC  2C 00 00 03 */	cmpwi r0, 3
/* 80228AA0 002259E0  40 82 00 08 */	bne .L_80228AA8
.L_80228AA4:
/* 80228AA4 002259E4  38 80 00 01 */	li r4, 1
.L_80228AA8:
/* 80228AA8 002259E8  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 80228AAC 002259EC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80228AB0 002259F0  7C 04 00 D0 */	neg r0, r4
/* 80228AB4 002259F4  7C 00 23 78 */	or r0, r0, r4
/* 80228AB8 002259F8  54 00 0F FE */	srwi r0, r0, 0x1f
/* 80228ABC 002259FC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80228AC0 00225A00  80 9E 00 30 */	lwz r4, 0x30(r30)
/* 80228AC4 00225A04  48 1D 35 B5 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 80228AC8 00225A08  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80228ACC 00225A0C  38 81 00 1C */	addi r4, r1, 0x1c
/* 80228AD0 00225A10  48 1D 71 C1 */	bl open_ChallengeSelect__Q26Screen9Game2DMgrFRQ28Morimura25DispMemberChallengeSelect
/* 80228AD4 00225A14  48 00 01 68 */	b .L_80228C3C
.L_80228AD8:
/* 80228AD8 00225A18  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80228ADC 00225A1C  38 81 00 0C */	addi r4, r1, 0xc
/* 80228AE0 00225A20  38 A1 00 08 */	addi r5, r1, 8
/* 80228AE4 00225A24  48 1D 72 49 */	bl check_ChallengeSelect__Q26Screen9Game2DMgrFRiRi
/* 80228AE8 00225A28  2C 03 00 03 */	cmpwi r3, 3
/* 80228AEC 00225A2C  41 82 00 20 */	beq .L_80228B0C
/* 80228AF0 00225A30  40 80 01 2C */	bge .L_80228C1C
/* 80228AF4 00225A34  2C 03 00 02 */	cmpwi r3, 2
/* 80228AF8 00225A38  40 80 00 08 */	bge .L_80228B00
/* 80228AFC 00225A3C  48 00 01 20 */	b .L_80228C1C
.L_80228B00:
/* 80228B00 00225A40  38 00 00 01 */	li r0, 1
/* 80228B04 00225A44  98 1F 02 04 */	stb r0, 0x228(r31)
/* 80228B08 00225A48  48 00 01 34 */	b .L_80228C3C
.L_80228B0C:
/* 80228B0C 00225A4C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80228B10 00225A50  38 7C 00 98 */	addi r3, r28, 0x98
/* 80228B14 00225A54  80 A1 00 08 */	lwz r5, 8(r1)
/* 80228B18 00225A58  4C C6 31 82 */	crclr 6
/* 80228B1C 00225A5C  4B EC 4B D1 */	bl OSReport
/* 80228B20 00225A60  88 1F 01 74 */	lbz r0, 0x198(r31)
/* 80228B24 00225A64  28 00 00 00 */	cmplwi r0, 0
/* 80228B28 00225A68  41 82 00 14 */	beq .L_80228B3C
/* 80228B2C 00225A6C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80228B30 00225A70  38 00 00 01 */	li r0, 1
/* 80228B34 00225A74  90 03 00 44 */	stw r0, 0x44(r3)
/* 80228B38 00225A78  48 00 00 2C */	b .L_80228B64
.L_80228B3C:
/* 80228B3C 00225A7C  80 01 00 08 */	lwz r0, 8(r1)
/* 80228B40 00225A80  2C 00 00 00 */	cmpwi r0, 0
/* 80228B44 00225A84  40 82 00 14 */	bne .L_80228B58
/* 80228B48 00225A88  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80228B4C 00225A8C  38 00 00 02 */	li r0, 2
/* 80228B50 00225A90  90 03 00 44 */	stw r0, 0x44(r3)
/* 80228B54 00225A94  48 00 00 10 */	b .L_80228B64
.L_80228B58:
/* 80228B58 00225A98  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80228B5C 00225A9C  38 00 00 03 */	li r0, 3
/* 80228B60 00225AA0  90 03 00 44 */	stw r0, 0x44(r3)
.L_80228B64:
/* 80228B64 00225AA4  38 00 00 00 */	li r0, 0
/* 80228B68 00225AA8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80228B6C 00225AAC  90 01 00 10 */	stw r0, 0x10(r1)
/* 80228B70 00225AB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80228B74 00225AB4  98 01 00 18 */	stb r0, 0x18(r1)
/* 80228B78 00225AB8  80 7F 02 0C */	lwz r3, 0x230(r31)
/* 80228B7C 00225ABC  48 00 4F 69 */	bl getStageData__Q34Game13ChallengeGame9StageListFi
/* 80228B80 00225AC0  7C 7D 1B 79 */	or. r29, r3, r3
/* 80228B84 00225AC4  40 82 00 18 */	bne .L_80228B9C
/* 80228B88 00225AC8  38 7C 00 C8 */	addi r3, r28, 0xc8
/* 80228B8C 00225ACC  38 BC 00 80 */	addi r5, r28, 0x80
/* 80228B90 00225AD0  38 80 01 43 */	li r4, 0x143
/* 80228B94 00225AD4  4C C6 31 82 */	crclr 6
/* 80228B98 00225AD8  4B E0 1A A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80228B9C:
/* 80228B9C 00225ADC  93 BF 03 34 */	stw r29, 0x358(r31)
/* 80228BA0 00225AE0  38 7F 02 24 */	addi r3, r31, 0x248
/* 80228BA4 00225AE4  38 9D 00 20 */	addi r4, r29, 0x20
/* 80228BA8 00225AE8  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80228BAC 00225AEC  90 1F 03 38 */	stw r0, 0x35c(r31)
/* 80228BB0 00225AF0  4B EA 1C A9 */	bl strcpy
/* 80228BB4 00225AF4  38 00 00 00 */	li r0, 0
/* 80228BB8 00225AF8  38 7F 02 14 */	addi r3, r31, 0x238
/* 80228BBC 00225AFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80228BC0 00225B00  38 9D 00 18 */	addi r4, r29, 0x18
/* 80228BC4 00225B04  4B FC 87 35 */	bl __as__Q24Game13PikiContainerFRQ24Game13PikiContainer
/* 80228BC8 00225B08  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80228BCC 00225B0C  38 80 00 00 */	li r4, 0
/* 80228BD0 00225B10  80 BD 00 68 */	lwz r5, 0x68(r29)
/* 80228BD4 00225B14  4B FB F8 7D */	bl setDopeCount__Q24Game8PlayDataFii
/* 80228BD8 00225B18  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80228BDC 00225B1C  38 80 00 01 */	li r4, 1
/* 80228BE0 00225B20  80 BD 00 64 */	lwz r5, 0x64(r29)
/* 80228BE4 00225B24  4B FB F8 6D */	bl setDopeCount__Q24Game8PlayDataFii
/* 80228BE8 00225B28  C0 02 BE F0 */	lfs f0, lbl_8051A250@sda21(r2)
/* 80228BEC 00225B2C  38 7D 00 18 */	addi r3, r29, 0x18
/* 80228BF0 00225B30  38 9C 00 D8 */	addi r4, r28, 0xd8
/* 80228BF4 00225B34  D0 1F 03 C0 */	stfs f0, 0x3e4(r31)
/* 80228BF8 00225B38  4B FC 87 B1 */	bl dump__Q24Game13PikiContainerFPc
/* 80228BFC 00225B3C  7F C3 F3 78 */	mr r3, r30
/* 80228C00 00225B40  7F E4 FB 78 */	mr r4, r31
/* 80228C04 00225B44  81 9E 00 00 */	lwz r12, 0(r30)
/* 80228C08 00225B48  38 C1 00 10 */	addi r6, r1, 0x10
/* 80228C0C 00225B4C  38 A0 00 01 */	li r5, 1
/* 80228C10 00225B50  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80228C14 00225B54  7D 89 03 A6 */	mtctr r12
/* 80228C18 00225B58  4E 80 04 21 */	bctrl 
.L_80228C1C:
/* 80228C1C 00225B5C  7F E3 FB 78 */	mr r3, r31
/* 80228C20 00225B60  4B F3 C3 89 */	bl doUpdate__Q24Game14BaseHIOSectionFv
/* 80228C24 00225B64  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80228C28 00225B68  48 1D 34 05 */	bl update__Q26Screen9Game2DMgrFv
/* 80228C2C 00225B6C  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 80228C30 00225B70  28 03 00 00 */	cmplwi r3, 0
/* 80228C34 00225B74  41 82 00 08 */	beq .L_80228C3C
/* 80228C38 00225B78  48 19 09 79 */	bl update__14TParticle2dMgrFv
.L_80228C3C:
/* 80228C3C 00225B7C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80228C40 00225B80  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80228C44 00225B84  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80228C48 00225B88  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 80228C4C 00225B8C  83 81 00 40 */	lwz r28, 0x40(r1)
/* 80228C50 00225B90  7C 08 03 A6 */	mtlr r0
/* 80228C54 00225B94  38 21 00 50 */	addi r1, r1, 0x50
/* 80228C58 00225B98  4E 80 00 20 */	blr 
.else
.global execChallenge__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSection
execChallenge__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSection:
/* 80228980 002258C0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80228984 002258C4  7C 08 02 A6 */	mflr r0
/* 80228988 002258C8  90 01 00 54 */	stw r0, 0x54(r1)
/* 8022898C 002258CC  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80228990 002258D0  7C 9F 23 78 */	mr r31, r4
/* 80228994 002258D4  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80228998 002258D8  7C 7E 1B 78 */	mr r30, r3
/* 8022899C 002258DC  3C 60 80 48 */	lis r3, lbl_80483458@ha
/* 802289A0 002258E0  93 A1 00 44 */	stw r29, 0x44(r1)
/* 802289A4 002258E4  93 81 00 40 */	stw r28, 0x40(r1)
/* 802289A8 002258E8  3B 83 34 58 */	addi r28, r3, lbl_80483458@l
/* 802289AC 002258EC  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 802289B0 002258F0  2C 00 00 01 */	cmpwi r0, 1
/* 802289B4 002258F4  41 82 00 6C */	beq .L_80228A20
/* 802289B8 002258F8  40 80 00 10 */	bge .L_802289C8
/* 802289BC 002258FC  2C 00 00 00 */	cmpwi r0, 0
/* 802289C0 00225900  40 80 00 14 */	bge .L_802289D4
/* 802289C4 00225904  48 00 02 58 */	b .L_80228C1C
.L_802289C8:
/* 802289C8 00225908  2C 00 00 03 */	cmpwi r0, 3
/* 802289CC 0022590C  40 80 02 50 */	bge .L_80228C1C
/* 802289D0 00225910  48 00 01 08 */	b .L_80228AD8
.L_802289D4:
/* 802289D4 00225914  80 0D 88 2C */	lwz r0, sCurrentHeap__7JKRHeap@sda21(r13)
/* 802289D8 00225918  90 1E 00 18 */	stw r0, 0x18(r30)
/* 802289DC 0022591C  83 9E 00 18 */	lwz r28, 0x18(r30)
/* 802289E0 00225920  7F 83 E3 78 */	mr r3, r28
/* 802289E4 00225924  4B DF AD D1 */	bl getFreeSize__7JKRHeapFv
/* 802289E8 00225928  7F 84 E3 78 */	mr r4, r28
/* 802289EC 0022592C  38 A0 00 01 */	li r5, 1
/* 802289F0 00225930  4B DF 74 D9 */	bl create__10JKRExpHeapFUlP7JKRHeapb
/* 802289F4 00225934  90 7E 00 14 */	stw r3, 0x14(r30)
/* 802289F8 00225938  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 802289FC 0022593C  4B DF AB A9 */	bl becomeCurrentHeap__7JKRHeapFv
/* 80228A00 00225940  38 00 00 01 */	li r0, 1
/* 80228A04 00225944  38 9F 01 84 */	addi r4, r31, 0x184
/* 80228A08 00225948  98 1E 00 10 */	stb r0, 0x10(r30)
/* 80228A0C 0022594C  93 FE 00 38 */	stw r31, 0x38(r30)
/* 80228A10 00225950  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80228A14 00225954  80 BE 00 1C */	lwz r5, 0x1c(r30)
/* 80228A18 00225958  48 1F A5 21 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 80228A1C 0022595C  48 00 02 20 */	b .L_80228C3C
.L_80228A20:
/* 80228A20 00225960  80 1F 01 9C */	lwz r0, 0x19c(r31)
/* 80228A24 00225964  2C 00 00 02 */	cmpwi r0, 2
/* 80228A28 00225968  40 82 02 14 */	bne .L_80228C3C
/* 80228A2C 0022596C  38 00 00 02 */	li r0, 2
/* 80228A30 00225970  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 80228A34 00225974  98 1E 00 10 */	stb r0, 0x10(r30)
/* 80228A38 00225978  38 80 00 00 */	li r4, 0
/* 80228A3C 0022597C  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 80228A40 00225980  3C 60 80 4C */	lis r3, __vt__Q28Morimura25DispMemberChallengeSelect@ha
/* 80228A44 00225984  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80228A48 00225988  38 63 0E 28 */	addi r3, r3, __vt__Q28Morimura25DispMemberChallengeSelect@l
/* 80228A4C 0022598C  38 00 FF FF */	li r0, -1
/* 80228A50 00225990  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 80228A54 00225994  90 81 00 20 */	stw r4, 0x20(r1)
/* 80228A58 00225998  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80228A5C 0022599C  90 81 00 24 */	stw r4, 0x24(r1)
/* 80228A60 002259A0  90 81 00 28 */	stw r4, 0x28(r1)
/* 80228A64 002259A4  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80228A68 002259A8  90 81 00 30 */	stw r4, 0x30(r1)
/* 80228A6C 002259AC  90 81 00 34 */	stw r4, 0x34(r1)
/* 80228A70 002259B0  90 81 00 38 */	stw r4, 0x38(r1)
/* 80228A74 002259B4  90 81 00 3C */	stw r4, 0x3c(r1)
/* 80228A78 002259B8  80 1E 00 3C */	lwz r0, 0x3c(r30)
/* 80228A7C 002259BC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80228A80 002259C0  80 1F 03 38 */	lwz r0, 0x338(r31)
/* 80228A84 002259C4  90 01 00 30 */	stw r0, 0x30(r1)
/* 80228A88 002259C8  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 80228A8C 002259CC  90 01 00 28 */	stw r0, 0x28(r1)
/* 80228A90 002259D0  80 05 00 44 */	lwz r0, 0x44(r5)
/* 80228A94 002259D4  2C 00 00 01 */	cmpwi r0, 1
/* 80228A98 002259D8  41 82 00 0C */	beq .L_80228AA4
/* 80228A9C 002259DC  2C 00 00 03 */	cmpwi r0, 3
/* 80228AA0 002259E0  40 82 00 08 */	bne .L_80228AA8
.L_80228AA4:
/* 80228AA4 002259E4  38 80 00 01 */	li r4, 1
.L_80228AA8:
/* 80228AA8 002259E8  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 80228AAC 002259EC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80228AB0 002259F0  7C 04 00 D0 */	neg r0, r4
/* 80228AB4 002259F4  7C 00 23 78 */	or r0, r0, r4
/* 80228AB8 002259F8  54 00 0F FE */	srwi r0, r0, 0x1f
/* 80228ABC 002259FC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80228AC0 00225A00  80 9E 00 30 */	lwz r4, 0x30(r30)
/* 80228AC4 00225A04  48 1D 35 B5 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 80228AC8 00225A08  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80228ACC 00225A0C  38 81 00 1C */	addi r4, r1, 0x1c
/* 80228AD0 00225A10  48 1D 71 C1 */	bl open_ChallengeSelect__Q26Screen9Game2DMgrFRQ28Morimura25DispMemberChallengeSelect
/* 80228AD4 00225A14  48 00 01 68 */	b .L_80228C3C
.L_80228AD8:
/* 80228AD8 00225A18  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80228ADC 00225A1C  38 81 00 0C */	addi r4, r1, 0xc
/* 80228AE0 00225A20  38 A1 00 08 */	addi r5, r1, 8
/* 80228AE4 00225A24  48 1D 72 49 */	bl check_ChallengeSelect__Q26Screen9Game2DMgrFRiRi
/* 80228AE8 00225A28  2C 03 00 03 */	cmpwi r3, 3
/* 80228AEC 00225A2C  41 82 00 20 */	beq .L_80228B0C
/* 80228AF0 00225A30  40 80 01 2C */	bge .L_80228C1C
/* 80228AF4 00225A34  2C 03 00 02 */	cmpwi r3, 2
/* 80228AF8 00225A38  40 80 00 08 */	bge .L_80228B00
/* 80228AFC 00225A3C  48 00 01 20 */	b .L_80228C1C
.L_80228B00:
/* 80228B00 00225A40  38 00 00 01 */	li r0, 1
/* 80228B04 00225A44  98 1F 02 04 */	stb r0, 0x204(r31)
/* 80228B08 00225A48  48 00 01 34 */	b .L_80228C3C
.L_80228B0C:
/* 80228B0C 00225A4C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80228B10 00225A50  38 7C 00 98 */	addi r3, r28, 0x98
/* 80228B14 00225A54  80 A1 00 08 */	lwz r5, 8(r1)
/* 80228B18 00225A58  4C C6 31 82 */	crclr 6
/* 80228B1C 00225A5C  4B EC 4B D1 */	bl OSReport
/* 80228B20 00225A60  88 1F 01 74 */	lbz r0, 0x174(r31)
/* 80228B24 00225A64  28 00 00 00 */	cmplwi r0, 0
/* 80228B28 00225A68  41 82 00 14 */	beq .L_80228B3C
/* 80228B2C 00225A6C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80228B30 00225A70  38 00 00 01 */	li r0, 1
/* 80228B34 00225A74  90 03 00 44 */	stw r0, 0x44(r3)
/* 80228B38 00225A78  48 00 00 2C */	b .L_80228B64
.L_80228B3C:
/* 80228B3C 00225A7C  80 01 00 08 */	lwz r0, 8(r1)
/* 80228B40 00225A80  2C 00 00 00 */	cmpwi r0, 0
/* 80228B44 00225A84  40 82 00 14 */	bne .L_80228B58
/* 80228B48 00225A88  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80228B4C 00225A8C  38 00 00 02 */	li r0, 2
/* 80228B50 00225A90  90 03 00 44 */	stw r0, 0x44(r3)
/* 80228B54 00225A94  48 00 00 10 */	b .L_80228B64
.L_80228B58:
/* 80228B58 00225A98  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80228B5C 00225A9C  38 00 00 03 */	li r0, 3
/* 80228B60 00225AA0  90 03 00 44 */	stw r0, 0x44(r3)
.L_80228B64:
/* 80228B64 00225AA4  38 00 00 00 */	li r0, 0
/* 80228B68 00225AA8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80228B6C 00225AAC  90 01 00 10 */	stw r0, 0x10(r1)
/* 80228B70 00225AB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80228B74 00225AB4  98 01 00 18 */	stb r0, 0x18(r1)
/* 80228B78 00225AB8  80 7F 02 0C */	lwz r3, 0x20c(r31)
/* 80228B7C 00225ABC  48 00 4F 69 */	bl getStageData__Q34Game13ChallengeGame9StageListFi
/* 80228B80 00225AC0  7C 7D 1B 79 */	or. r29, r3, r3
/* 80228B84 00225AC4  40 82 00 18 */	bne .L_80228B9C
/* 80228B88 00225AC8  38 7C 00 C8 */	addi r3, r28, 0xc8
/* 80228B8C 00225ACC  38 BC 00 80 */	addi r5, r28, 0x80
/* 80228B90 00225AD0  38 80 01 43 */	li r4, 0x143
/* 80228B94 00225AD4  4C C6 31 82 */	crclr 6
/* 80228B98 00225AD8  4B E0 1A A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80228B9C:
/* 80228B9C 00225ADC  93 BF 03 34 */	stw r29, 0x334(r31)
/* 80228BA0 00225AE0  38 7F 02 24 */	addi r3, r31, 0x224
/* 80228BA4 00225AE4  38 9D 00 20 */	addi r4, r29, 0x20
/* 80228BA8 00225AE8  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80228BAC 00225AEC  90 1F 03 38 */	stw r0, 0x338(r31)
/* 80228BB0 00225AF0  4B EA 1C A9 */	bl strcpy
/* 80228BB4 00225AF4  38 00 00 00 */	li r0, 0
/* 80228BB8 00225AF8  38 7F 02 14 */	addi r3, r31, 0x214
/* 80228BBC 00225AFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80228BC0 00225B00  38 9D 00 18 */	addi r4, r29, 0x18
/* 80228BC4 00225B04  4B FC 87 35 */	bl __as__Q24Game13PikiContainerFRQ24Game13PikiContainer
/* 80228BC8 00225B08  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80228BCC 00225B0C  38 80 00 00 */	li r4, 0
/* 80228BD0 00225B10  80 BD 00 68 */	lwz r5, 0x68(r29)
/* 80228BD4 00225B14  4B FB F8 7D */	bl setDopeCount__Q24Game8PlayDataFii
/* 80228BD8 00225B18  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80228BDC 00225B1C  38 80 00 01 */	li r4, 1
/* 80228BE0 00225B20  80 BD 00 64 */	lwz r5, 0x64(r29)
/* 80228BE4 00225B24  4B FB F8 6D */	bl setDopeCount__Q24Game8PlayDataFii
/* 80228BE8 00225B28  C0 02 BE F0 */	lfs f0, lbl_8051A250@sda21(r2)
/* 80228BEC 00225B2C  38 7D 00 18 */	addi r3, r29, 0x18
/* 80228BF0 00225B30  38 9C 00 D8 */	addi r4, r28, 0xd8
/* 80228BF4 00225B34  D0 1F 03 C0 */	stfs f0, 0x3c0(r31)
/* 80228BF8 00225B38  4B FC 87 B1 */	bl dump__Q24Game13PikiContainerFPc
/* 80228BFC 00225B3C  7F C3 F3 78 */	mr r3, r30
/* 80228C00 00225B40  7F E4 FB 78 */	mr r4, r31
/* 80228C04 00225B44  81 9E 00 00 */	lwz r12, 0(r30)
/* 80228C08 00225B48  38 C1 00 10 */	addi r6, r1, 0x10
/* 80228C0C 00225B4C  38 A0 00 01 */	li r5, 1
/* 80228C10 00225B50  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80228C14 00225B54  7D 89 03 A6 */	mtctr r12
/* 80228C18 00225B58  4E 80 04 21 */	bctrl 
.L_80228C1C:
/* 80228C1C 00225B5C  7F E3 FB 78 */	mr r3, r31
/* 80228C20 00225B60  4B F3 C3 89 */	bl doUpdate__Q24Game14BaseHIOSectionFv
/* 80228C24 00225B64  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80228C28 00225B68  48 1D 34 05 */	bl update__Q26Screen9Game2DMgrFv
/* 80228C2C 00225B6C  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 80228C30 00225B70  28 03 00 00 */	cmplwi r3, 0
/* 80228C34 00225B74  41 82 00 08 */	beq .L_80228C3C
/* 80228C38 00225B78  48 19 09 79 */	bl update__14TParticle2dMgrFv
.L_80228C3C:
/* 80228C3C 00225B7C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80228C40 00225B80  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80228C44 00225B84  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80228C48 00225B88  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 80228C4C 00225B8C  83 81 00 40 */	lwz r28, 0x40(r1)
/* 80228C50 00225B90  7C 08 03 A6 */	mtlr r0
/* 80228C54 00225B94  38 21 00 50 */	addi r1, r1, 0x50
/* 80228C58 00225B98  4E 80 00 20 */	blr 
.endif

.global "transit__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
"transit__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg":
/* 80228C5C 00225B9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80228C60 00225BA0  7C 08 02 A6 */	mflr r0
/* 80228C64 00225BA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80228C68 00225BA8  80 63 00 08 */	lwz r3, 8(r3)
/* 80228C6C 00225BAC  81 83 00 00 */	lwz r12, 0(r3)
/* 80228C70 00225BB0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80228C74 00225BB4  7D 89 03 A6 */	mtctr r12
/* 80228C78 00225BB8  4E 80 04 21 */	bctrl 
/* 80228C7C 00225BBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80228C80 00225BC0  7C 08 03 A6 */	mtlr r0
/* 80228C84 00225BC4  38 21 00 10 */	addi r1, r1, 0x10
/* 80228C88 00225BC8  4E 80 00 20 */	blr 

.if version == 1
.global execVs__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSection
execVs__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSection:
/* 80228C8C 00225BCC  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80228C90 00225BD0  7C 08 02 A6 */	mflr r0
/* 80228C94 00225BD4  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80228C98 00225BD8  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 80228C9C 00225BDC  93 C1 00 98 */	stw r30, 0x98(r1)
/* 80228CA0 00225BE0  7C 9E 23 78 */	mr r30, r4
/* 80228CA4 00225BE4  93 A1 00 94 */	stw r29, 0x94(r1)
/* 80228CA8 00225BE8  7C 7D 1B 78 */	mr r29, r3
/* 80228CAC 00225BEC  3C 60 80 48 */	lis r3, lbl_80483458@ha
/* 80228CB0 00225BF0  93 81 00 90 */	stw r28, 0x90(r1)
/* 80228CB4 00225BF4  3B E3 34 58 */	addi r31, r3, lbl_80483458@l
/* 80228CB8 00225BF8  88 1D 00 10 */	lbz r0, 0x10(r29)
/* 80228CBC 00225BFC  2C 00 00 01 */	cmpwi r0, 1
/* 80228CC0 00225C00  41 82 00 6C */	beq .L_80228D2C
/* 80228CC4 00225C04  40 80 00 10 */	bge .L_80228CD4
/* 80228CC8 00225C08  2C 00 00 00 */	cmpwi r0, 0
/* 80228CCC 00225C0C  40 80 00 14 */	bge .L_80228CE0
/* 80228CD0 00225C10  48 00 03 AC */	b .L_8022907C
.L_80228CD4:
/* 80228CD4 00225C14  2C 00 00 03 */	cmpwi r0, 3
/* 80228CD8 00225C18  40 80 03 A4 */	bge .L_8022907C
/* 80228CDC 00225C1C  48 00 01 30 */	b .L_80228E0C
.L_80228CE0:
/* 80228CE0 00225C20  80 0D 88 2C */	lwz r0, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80228CE4 00225C24  90 1D 00 18 */	stw r0, 0x18(r29)
/* 80228CE8 00225C28  83 9D 00 18 */	lwz r28, 0x18(r29)
/* 80228CEC 00225C2C  7F 83 E3 78 */	mr r3, r28
/* 80228CF0 00225C30  4B DF AA C5 */	bl getFreeSize__7JKRHeapFv
/* 80228CF4 00225C34  7F 84 E3 78 */	mr r4, r28
/* 80228CF8 00225C38  38 A0 00 01 */	li r5, 1
/* 80228CFC 00225C3C  4B DF 71 CD */	bl create__10JKRExpHeapFUlP7JKRHeapb
/* 80228D00 00225C40  90 7D 00 14 */	stw r3, 0x14(r29)
/* 80228D04 00225C44  80 7D 00 14 */	lwz r3, 0x14(r29)
/* 80228D08 00225C48  4B DF A8 9D */	bl becomeCurrentHeap__7JKRHeapFv
/* 80228D0C 00225C4C  38 00 00 01 */	li r0, 1
/* 80228D10 00225C50  38 9E 01 84 */	addi r4, r30, 0x1a8
/* 80228D14 00225C54  98 1D 00 10 */	stb r0, 0x10(r29)
/* 80228D18 00225C58  93 DD 00 38 */	stw r30, 0x38(r29)
/* 80228D1C 00225C5C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80228D20 00225C60  80 BD 00 1C */	lwz r5, 0x1c(r29)
/* 80228D24 00225C64  48 1F A2 15 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 80228D28 00225C68  48 00 03 74 */	b .L_8022909C
.L_80228D2C:
/* 80228D2C 00225C6C  80 1E 01 9C */	lwz r0, 0x1c0(r30)
/* 80228D30 00225C70  2C 00 00 02 */	cmpwi r0, 2
/* 80228D34 00225C74  40 82 03 68 */	bne .L_8022909C
/* 80228D38 00225C78  38 00 00 02 */	li r0, 2
/* 80228D3C 00225C7C  3C C0 80 4C */	lis r6, __vt__Q28Morimura18DispMemberVsSelect@ha
/* 80228D40 00225C80  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 80228D44 00225C84  98 1D 00 10 */	stb r0, 0x10(r29)
/* 80228D48 00225C88  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 80228D4C 00225C8C  38 E0 00 00 */	li r7, 0
/* 80228D50 00225C90  90 01 00 58 */	stw r0, 0x58(r1)
/* 80228D54 00225C94  38 A0 FF FF */	li r5, -1
/* 80228D58 00225C98  38 80 00 03 */	li r4, 3
/* 80228D5C 00225C9C  38 C6 0E 10 */	addi r6, r6, __vt__Q28Morimura18DispMemberVsSelect@l
/* 80228D60 00225CA0  90 E1 00 5C */	stw r7, 0x5c(r1)
/* 80228D64 00225CA4  80 6D 94 10 */	lwz r3, mRedWinCount__Q24Game13VsGameSection@sda21(r13)
/* 80228D68 00225CA8  90 C1 00 58 */	stw r6, 0x58(r1)
/* 80228D6C 00225CAC  80 0D 94 14 */	lwz r0, mBlueWinCount__Q24Game13VsGameSection@sda21(r13)
/* 80228D70 00225CB0  90 E1 00 60 */	stw r7, 0x60(r1)
/* 80228D74 00225CB4  90 E1 00 64 */	stw r7, 0x64(r1)
/* 80228D78 00225CB8  90 E1 00 68 */	stw r7, 0x68(r1)
/* 80228D7C 00225CBC  90 A1 00 6C */	stw r5, 0x6c(r1)
/* 80228D80 00225CC0  90 E1 00 70 */	stw r7, 0x70(r1)
/* 80228D84 00225CC4  90 81 00 74 */	stw r4, 0x74(r1)
/* 80228D88 00225CC8  90 81 00 78 */	stw r4, 0x78(r1)
/* 80228D8C 00225CCC  90 E1 00 7C */	stw r7, 0x7c(r1)
/* 80228D90 00225CD0  90 E1 00 80 */	stw r7, 0x80(r1)
/* 80228D94 00225CD4  90 A1 00 84 */	stw r5, 0x84(r1)
/* 80228D98 00225CD8  90 E1 00 88 */	stw r7, 0x88(r1)
/* 80228D9C 00225CDC  90 E1 00 8C */	stw r7, 0x8c(r1)
/* 80228DA0 00225CE0  80 9D 00 40 */	lwz r4, 0x40(r29)
/* 80228DA4 00225CE4  90 81 00 60 */	stw r4, 0x60(r1)
/* 80228DA8 00225CE8  80 9E 03 40 */	lwz r4, 0x364(r30)
/* 80228DAC 00225CEC  90 81 00 70 */	stw r4, 0x70(r1)
/* 80228DB0 00225CF0  80 9D 00 14 */	lwz r4, 0x14(r29)
/* 80228DB4 00225CF4  90 81 00 64 */	stw r4, 0x64(r1)
/* 80228DB8 00225CF8  80 9E 03 44 */	lwz r4, 0x368(r30)
/* 80228DBC 00225CFC  90 81 00 74 */	stw r4, 0x74(r1)
/* 80228DC0 00225D00  80 9E 03 48 */	lwz r4, 0x36c(r30)
/* 80228DC4 00225D04  90 81 00 78 */	stw r4, 0x78(r1)
/* 80228DC8 00225D08  90 61 00 7C */	stw r3, 0x7c(r1)
/* 80228DCC 00225D0C  90 01 00 80 */	stw r0, 0x80(r1)
/* 80228DD0 00225D10  80 1E 03 4C */	lwz r0, 0x370(r30)
/* 80228DD4 00225D14  90 01 00 84 */	stw r0, 0x84(r1)
/* 80228DD8 00225D18  80 7E 02 10 */	lwz r3, 0x234(r30)
/* 80228DDC 00225D1C  85 83 00 18 */	lwzu r12, 0x18(r3)
/* 80228DE0 00225D20  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80228DE4 00225D24  7D 89 03 A6 */	mtctr r12
/* 80228DE8 00225D28  4E 80 04 21 */	bctrl 
/* 80228DEC 00225D2C  90 61 00 88 */	stw r3, 0x88(r1)
/* 80228DF0 00225D30  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80228DF4 00225D34  80 9D 00 30 */	lwz r4, 0x30(r29)
/* 80228DF8 00225D38  48 1D 32 81 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 80228DFC 00225D3C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80228E00 00225D40  38 81 00 58 */	addi r4, r1, 0x58
/* 80228E04 00225D44  48 1D 70 65 */	bl open_VsSelect__Q26Screen9Game2DMgrFRQ28Morimura18DispMemberVsSelect
/* 80228E08 00225D48  48 00 02 94 */	b .L_8022909C
.L_80228E0C:
/* 80228E0C 00225D4C  80 7D 00 30 */	lwz r3, 0x30(r29)
/* 80228E10 00225D50  C0 62 BE F0 */	lfs f3, lbl_8051A250@sda21(r2)
/* 80228E14 00225D54  C0 A3 00 5C */	lfs f5, 0x5c(r3)
/* 80228E18 00225D58  C0 C3 00 58 */	lfs f6, 0x58(r3)
/* 80228E1C 00225D5C  EC 85 01 72 */	fmuls f4, f5, f5
/* 80228E20 00225D60  C0 42 BE F4 */	lfs f2, lbl_8051A254@sda21(r2)
/* 80228E24 00225D64  EC 06 19 BA */	fmadds f0, f6, f6, f3
/* 80228E28 00225D68  C0 22 BE F8 */	lfs f1, lbl_8051A258@sda21(r2)
/* 80228E2C 00225D6C  80 BF 00 E8 */	lwz r5, 0xe8(r31)
/* 80228E30 00225D70  80 9F 00 EC */	lwz r4, 0xec(r31)
/* 80228E34 00225D74  EC 84 00 2A */	fadds f4, f4, f0
/* 80228E38 00225D78  80 7F 00 F0 */	lwz r3, 0xf0(r31)
/* 80228E3C 00225D7C  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 80228E40 00225D80  D0 61 00 28 */	stfs f3, 0x28(r1)
/* 80228E44 00225D84  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 80228E48 00225D88  D0 61 00 2C */	stfs f3, 0x2c(r1)
/* 80228E4C 00225D8C  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 80228E50 00225D90  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 80228E54 00225D94  D0 61 00 38 */	stfs f3, 0x38(r1)
/* 80228E58 00225D98  D0 61 00 3C */	stfs f3, 0x3c(r1)
/* 80228E5C 00225D9C  D0 61 00 40 */	stfs f3, 0x40(r1)
/* 80228E60 00225DA0  D0 61 00 44 */	stfs f3, 0x44(r1)
/* 80228E64 00225DA4  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 80228E68 00225DA8  D0 21 00 4C */	stfs f1, 0x4c(r1)
/* 80228E6C 00225DAC  D0 61 00 50 */	stfs f3, 0x50(r1)
/* 80228E70 00225DB0  D0 61 00 54 */	stfs f3, 0x54(r1)
/* 80228E74 00225DB4  90 A1 00 18 */	stw r5, 0x18(r1)
/* 80228E78 00225DB8  90 81 00 1C */	stw r4, 0x1c(r1)
/* 80228E7C 00225DBC  90 61 00 20 */	stw r3, 0x20(r1)
/* 80228E80 00225DC0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80228E84 00225DC4  40 81 00 14 */	ble .L_80228E98
/* 80228E88 00225DC8  40 81 00 14 */	ble .L_80228E9C
/* 80228E8C 00225DCC  FC 00 20 34 */	frsqrte f0, f4
/* 80228E90 00225DD0  EC 80 01 32 */	fmuls f4, f0, f4
/* 80228E94 00225DD4  48 00 00 08 */	b .L_80228E9C
.L_80228E98:
/* 80228E98 00225DD8  FC 80 18 90 */	fmr f4, f3
.L_80228E9C:
/* 80228E9C 00225DDC  C0 02 BE FC */	lfs f0, lbl_8051A25C@sda21(r2)
/* 80228EA0 00225DE0  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 80228EA4 00225DE4  40 81 00 C0 */	ble .L_80228F64
/* 80228EA8 00225DE8  C0 82 BE F0 */	lfs f4, lbl_8051A250@sda21(r2)
/* 80228EAC 00225DEC  38 00 00 00 */	li r0, 0
/* 80228EB0 00225DF0  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 80228EB4 00225DF4  C0 41 00 28 */	lfs f2, 0x28(r1)
/* 80228EB8 00225DF8  FC 20 20 90 */	fmr f1, f4
/* 80228EBC 00225DFC  EC 00 01 32 */	fmuls f0, f0, f4
/* 80228EC0 00225E00  C0 61 00 30 */	lfs f3, 0x30(r1)
/* 80228EC4 00225E04  EC 02 01 BA */	fmadds f0, f2, f6, f0
/* 80228EC8 00225E08  EC 03 01 7A */	fmadds f0, f3, f5, f0
/* 80228ECC 00225E0C  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 80228ED0 00225E10  40 81 00 0C */	ble .L_80228EDC
/* 80228ED4 00225E14  FC 80 00 90 */	fmr f4, f0
/* 80228ED8 00225E18  38 00 00 00 */	li r0, 0
.L_80228EDC:
/* 80228EDC 00225E1C  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 80228EE0 00225E20  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 80228EE4 00225E24  EC 00 00 72 */	fmuls f0, f0, f1
/* 80228EE8 00225E28  C0 61 00 3C */	lfs f3, 0x3c(r1)
/* 80228EEC 00225E2C  EC 02 01 BA */	fmadds f0, f2, f6, f0
/* 80228EF0 00225E30  EC 03 01 7A */	fmadds f0, f3, f5, f0
/* 80228EF4 00225E34  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 80228EF8 00225E38  40 81 00 0C */	ble .L_80228F04
/* 80228EFC 00225E3C  FC 80 00 90 */	fmr f4, f0
/* 80228F00 00225E40  38 00 00 01 */	li r0, 1
.L_80228F04:
/* 80228F04 00225E44  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 80228F08 00225E48  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 80228F0C 00225E4C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80228F10 00225E50  C0 61 00 48 */	lfs f3, 0x48(r1)
/* 80228F14 00225E54  EC 02 01 BA */	fmadds f0, f2, f6, f0
/* 80228F18 00225E58  EC 03 01 7A */	fmadds f0, f3, f5, f0
/* 80228F1C 00225E5C  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 80228F20 00225E60  40 81 00 0C */	ble .L_80228F2C
/* 80228F24 00225E64  FC 80 00 90 */	fmr f4, f0
/* 80228F28 00225E68  38 00 00 02 */	li r0, 2
.L_80228F2C:
/* 80228F2C 00225E6C  C0 01 00 50 */	lfs f0, 0x50(r1)
/* 80228F30 00225E70  C0 41 00 4C */	lfs f2, 0x4c(r1)
/* 80228F34 00225E74  EC 00 00 72 */	fmuls f0, f0, f1
/* 80228F38 00225E78  C0 61 00 54 */	lfs f3, 0x54(r1)
/* 80228F3C 00225E7C  EC 02 01 BA */	fmadds f0, f2, f6, f0
/* 80228F40 00225E80  EC 03 01 7A */	fmadds f0, f3, f5, f0
/* 80228F44 00225E84  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 80228F48 00225E88  40 81 00 08 */	ble .L_80228F50
/* 80228F4C 00225E8C  38 00 00 03 */	li r0, 3
.L_80228F50:
/* 80228F50 00225E90  54 00 10 3A */	slwi r0, r0, 2
/* 80228F54 00225E94  38 61 00 18 */	addi r3, r1, 0x18
/* 80228F58 00225E98  7C 03 00 2E */	lwzx r0, r3, r0
/* 80228F5C 00225E9C  90 1E 03 28 */	stw r0, 0x34c(r30)
/* 80228F60 00225EA0  48 00 00 0C */	b .L_80228F6C
.L_80228F64:
/* 80228F64 00225EA4  38 00 FF FE */	li r0, -2
/* 80228F68 00225EA8  90 1E 03 28 */	stw r0, 0x34c(r30)
.L_80228F6C:
/* 80228F6C 00225EAC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80228F70 00225EB0  38 81 00 08 */	addi r4, r1, 8
/* 80228F74 00225EB4  38 BE 03 44 */	addi r5, r30, 0x368
/* 80228F78 00225EB8  38 DE 03 48 */	addi r6, r30, 0x36c
/* 80228F7C 00225EBC  48 1D 6F 89 */	bl check_VsSelect__Q26Screen9Game2DMgrFRiRiRi
/* 80228F80 00225EC0  2C 03 00 03 */	cmpwi r3, 3
/* 80228F84 00225EC4  41 82 00 20 */	beq .L_80228FA4
/* 80228F88 00225EC8  40 80 00 F4 */	bge .L_8022907C
/* 80228F8C 00225ECC  2C 03 00 02 */	cmpwi r3, 2
/* 80228F90 00225ED0  40 80 00 08 */	bge .L_80228F98
/* 80228F94 00225ED4  48 00 00 E8 */	b .L_8022907C
.L_80228F98:
/* 80228F98 00225ED8  38 00 00 01 */	li r0, 1
/* 80228F9C 00225EDC  98 1E 02 04 */	stb r0, 0x228(r30)
/* 80228FA0 00225EE0  48 00 00 FC */	b .L_8022909C
.L_80228FA4:
/* 80228FA4 00225EE4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80228FA8 00225EE8  38 80 00 01 */	li r4, 1
/* 80228FAC 00225EEC  38 00 00 00 */	li r0, 0
/* 80228FB0 00225EF0  90 83 00 44 */	stw r4, 0x44(r3)
/* 80228FB4 00225EF4  90 01 00 0C */	stw r0, 0xc(r1)
/* 80228FB8 00225EF8  80 81 00 08 */	lwz r4, 8(r1)
/* 80228FBC 00225EFC  90 01 00 10 */	stw r0, 0x10(r1)
/* 80228FC0 00225F00  98 01 00 14 */	stb r0, 0x14(r1)
/* 80228FC4 00225F04  80 7E 02 10 */	lwz r3, 0x234(r30)
/* 80228FC8 00225F08  48 00 50 0D */	bl getStageData__Q34Game6VsGame9StageListFi
/* 80228FCC 00225F0C  7C 7C 1B 79 */	or. r28, r3, r3
/* 80228FD0 00225F10  40 82 00 18 */	bne .L_80228FE8
/* 80228FD4 00225F14  38 7F 00 C8 */	addi r3, r31, 0xc8
/* 80228FD8 00225F18  38 BF 00 80 */	addi r5, r31, 0x80
/* 80228FDC 00225F1C  38 80 01 C3 */	li r4, 0x1c3
/* 80228FE0 00225F20  4C C6 31 82 */	crclr 6
/* 80228FE4 00225F24  4B E0 16 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80228FE8:
/* 80228FE8 00225F28  93 9E 03 3C */	stw r28, 0x360(r30)
/* 80228FEC 00225F2C  38 7E 02 24 */	addi r3, r30, 0x248
/* 80228FF0 00225F30  38 9C 00 20 */	addi r4, r28, 0x20
/* 80228FF4 00225F34  80 01 00 08 */	lwz r0, 8(r1)
/* 80228FF8 00225F38  90 1E 03 40 */	stw r0, 0x364(r30)
/* 80228FFC 00225F3C  4B EA 18 5D */	bl strcpy
/* 80229000 00225F40  38 7E 02 A4 */	addi r3, r30, 0x2c8
/* 80229004 00225F44  38 9C 00 70 */	addi r4, r28, 0x70
/* 80229008 00225F48  4B EA 18 51 */	bl strcpy
/* 8022900C 00225F4C  38 00 00 00 */	li r0, 0
/* 80229010 00225F50  38 7E 02 14 */	addi r3, r30, 0x238
/* 80229014 00225F54  90 01 00 10 */	stw r0, 0x10(r1)
/* 80229018 00225F58  38 9C 00 18 */	addi r4, r28, 0x18
/* 8022901C 00225F5C  4B FC 82 DD */	bl __as__Q24Game13PikiContainerFRQ24Game13PikiContainer
/* 80229020 00225F60  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80229024 00225F64  38 80 00 00 */	li r4, 0
/* 80229028 00225F68  80 BC 00 68 */	lwz r5, 0x68(r28)
/* 8022902C 00225F6C  4B FB F4 25 */	bl setDopeCount__Q24Game8PlayDataFii
/* 80229030 00225F70  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80229034 00225F74  38 80 00 01 */	li r4, 1
/* 80229038 00225F78  80 BC 00 64 */	lwz r5, 0x64(r28)
/* 8022903C 00225F7C  4B FB F4 15 */	bl setDopeCount__Q24Game8PlayDataFii
/* 80229040 00225F80  C0 22 BF 00 */	lfs f1, lbl_8051A260@sda21(r2)
/* 80229044 00225F84  38 7C 00 18 */	addi r3, r28, 0x18
/* 80229048 00225F88  C0 1C 00 60 */	lfs f0, 0x60(r28)
/* 8022904C 00225F8C  38 9F 00 D8 */	addi r4, r31, 0xd8
/* 80229050 00225F90  EC 01 00 2A */	fadds f0, f1, f0
/* 80229054 00225F94  D0 1E 03 C0 */	stfs f0, 0x3e4(r30)
/* 80229058 00225F98  4B FC 83 51 */	bl dump__Q24Game13PikiContainerFPc
/* 8022905C 00225F9C  7F A3 EB 78 */	mr r3, r29
/* 80229060 00225FA0  7F C4 F3 78 */	mr r4, r30
/* 80229064 00225FA4  81 9D 00 00 */	lwz r12, 0(r29)
/* 80229068 00225FA8  38 C1 00 0C */	addi r6, r1, 0xc
/* 8022906C 00225FAC  38 A0 00 01 */	li r5, 1
/* 80229070 00225FB0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80229074 00225FB4  7D 89 03 A6 */	mtctr r12
/* 80229078 00225FB8  4E 80 04 21 */	bctrl 
.L_8022907C:
/* 8022907C 00225FBC  7F C3 F3 78 */	mr r3, r30
/* 80229080 00225FC0  4B F3 BF 29 */	bl doUpdate__Q24Game14BaseHIOSectionFv
/* 80229084 00225FC4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80229088 00225FC8  48 1D 2F A5 */	bl update__Q26Screen9Game2DMgrFv
/* 8022908C 00225FCC  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 80229090 00225FD0  28 03 00 00 */	cmplwi r3, 0
/* 80229094 00225FD4  41 82 00 08 */	beq .L_8022909C
/* 80229098 00225FD8  48 19 05 19 */	bl update__14TParticle2dMgrFv
.L_8022909C:
/* 8022909C 00225FDC  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 802290A0 00225FE0  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 802290A4 00225FE4  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 802290A8 00225FE8  83 A1 00 94 */	lwz r29, 0x94(r1)
/* 802290AC 00225FEC  83 81 00 90 */	lwz r28, 0x90(r1)
/* 802290B0 00225FF0  7C 08 03 A6 */	mtlr r0
/* 802290B4 00225FF4  38 21 00 A0 */	addi r1, r1, 0xa0
/* 802290B8 00225FF8  4E 80 00 20 */	blr 
.else
.global execVs__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSection
execVs__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSection:
/* 80228C8C 00225BCC  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80228C90 00225BD0  7C 08 02 A6 */	mflr r0
/* 80228C94 00225BD4  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80228C98 00225BD8  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 80228C9C 00225BDC  93 C1 00 98 */	stw r30, 0x98(r1)
/* 80228CA0 00225BE0  7C 9E 23 78 */	mr r30, r4
/* 80228CA4 00225BE4  93 A1 00 94 */	stw r29, 0x94(r1)
/* 80228CA8 00225BE8  7C 7D 1B 78 */	mr r29, r3
/* 80228CAC 00225BEC  3C 60 80 48 */	lis r3, lbl_80483458@ha
/* 80228CB0 00225BF0  93 81 00 90 */	stw r28, 0x90(r1)
/* 80228CB4 00225BF4  3B E3 34 58 */	addi r31, r3, lbl_80483458@l
/* 80228CB8 00225BF8  88 1D 00 10 */	lbz r0, 0x10(r29)
/* 80228CBC 00225BFC  2C 00 00 01 */	cmpwi r0, 1
/* 80228CC0 00225C00  41 82 00 6C */	beq .L_80228D2C
/* 80228CC4 00225C04  40 80 00 10 */	bge .L_80228CD4
/* 80228CC8 00225C08  2C 00 00 00 */	cmpwi r0, 0
/* 80228CCC 00225C0C  40 80 00 14 */	bge .L_80228CE0
/* 80228CD0 00225C10  48 00 03 AC */	b .L_8022907C
.L_80228CD4:
/* 80228CD4 00225C14  2C 00 00 03 */	cmpwi r0, 3
/* 80228CD8 00225C18  40 80 03 A4 */	bge .L_8022907C
/* 80228CDC 00225C1C  48 00 01 30 */	b .L_80228E0C
.L_80228CE0:
/* 80228CE0 00225C20  80 0D 88 2C */	lwz r0, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80228CE4 00225C24  90 1D 00 18 */	stw r0, 0x18(r29)
/* 80228CE8 00225C28  83 9D 00 18 */	lwz r28, 0x18(r29)
/* 80228CEC 00225C2C  7F 83 E3 78 */	mr r3, r28
/* 80228CF0 00225C30  4B DF AA C5 */	bl getFreeSize__7JKRHeapFv
/* 80228CF4 00225C34  7F 84 E3 78 */	mr r4, r28
/* 80228CF8 00225C38  38 A0 00 01 */	li r5, 1
/* 80228CFC 00225C3C  4B DF 71 CD */	bl create__10JKRExpHeapFUlP7JKRHeapb
/* 80228D00 00225C40  90 7D 00 14 */	stw r3, 0x14(r29)
/* 80228D04 00225C44  80 7D 00 14 */	lwz r3, 0x14(r29)
/* 80228D08 00225C48  4B DF A8 9D */	bl becomeCurrentHeap__7JKRHeapFv
/* 80228D0C 00225C4C  38 00 00 01 */	li r0, 1
/* 80228D10 00225C50  38 9E 01 84 */	addi r4, r30, 0x184
/* 80228D14 00225C54  98 1D 00 10 */	stb r0, 0x10(r29)
/* 80228D18 00225C58  93 DD 00 38 */	stw r30, 0x38(r29)
/* 80228D1C 00225C5C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80228D20 00225C60  80 BD 00 1C */	lwz r5, 0x1c(r29)
/* 80228D24 00225C64  48 1F A2 15 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 80228D28 00225C68  48 00 03 74 */	b .L_8022909C
.L_80228D2C:
/* 80228D2C 00225C6C  80 1E 01 9C */	lwz r0, 0x19c(r30)
/* 80228D30 00225C70  2C 00 00 02 */	cmpwi r0, 2
/* 80228D34 00225C74  40 82 03 68 */	bne .L_8022909C
/* 80228D38 00225C78  38 00 00 02 */	li r0, 2
/* 80228D3C 00225C7C  3C C0 80 4C */	lis r6, __vt__Q28Morimura18DispMemberVsSelect@ha
/* 80228D40 00225C80  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 80228D44 00225C84  98 1D 00 10 */	stb r0, 0x10(r29)
/* 80228D48 00225C88  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 80228D4C 00225C8C  38 E0 00 00 */	li r7, 0
/* 80228D50 00225C90  90 01 00 58 */	stw r0, 0x58(r1)
/* 80228D54 00225C94  38 A0 FF FF */	li r5, -1
/* 80228D58 00225C98  38 80 00 03 */	li r4, 3
/* 80228D5C 00225C9C  38 C6 0E 10 */	addi r6, r6, __vt__Q28Morimura18DispMemberVsSelect@l
/* 80228D60 00225CA0  90 E1 00 5C */	stw r7, 0x5c(r1)
/* 80228D64 00225CA4  80 6D 94 10 */	lwz r3, mRedWinCount__Q24Game13VsGameSection@sda21(r13)
/* 80228D68 00225CA8  90 C1 00 58 */	stw r6, 0x58(r1)
/* 80228D6C 00225CAC  80 0D 94 14 */	lwz r0, mBlueWinCount__Q24Game13VsGameSection@sda21(r13)
/* 80228D70 00225CB0  90 E1 00 60 */	stw r7, 0x60(r1)
/* 80228D74 00225CB4  90 E1 00 64 */	stw r7, 0x64(r1)
/* 80228D78 00225CB8  90 E1 00 68 */	stw r7, 0x68(r1)
/* 80228D7C 00225CBC  90 A1 00 6C */	stw r5, 0x6c(r1)
/* 80228D80 00225CC0  90 E1 00 70 */	stw r7, 0x70(r1)
/* 80228D84 00225CC4  90 81 00 74 */	stw r4, 0x74(r1)
/* 80228D88 00225CC8  90 81 00 78 */	stw r4, 0x78(r1)
/* 80228D8C 00225CCC  90 E1 00 7C */	stw r7, 0x7c(r1)
/* 80228D90 00225CD0  90 E1 00 80 */	stw r7, 0x80(r1)
/* 80228D94 00225CD4  90 A1 00 84 */	stw r5, 0x84(r1)
/* 80228D98 00225CD8  90 E1 00 88 */	stw r7, 0x88(r1)
/* 80228D9C 00225CDC  90 E1 00 8C */	stw r7, 0x8c(r1)
/* 80228DA0 00225CE0  80 9D 00 40 */	lwz r4, 0x40(r29)
/* 80228DA4 00225CE4  90 81 00 60 */	stw r4, 0x60(r1)
/* 80228DA8 00225CE8  80 9E 03 40 */	lwz r4, 0x340(r30)
/* 80228DAC 00225CEC  90 81 00 70 */	stw r4, 0x70(r1)
/* 80228DB0 00225CF0  80 9D 00 14 */	lwz r4, 0x14(r29)
/* 80228DB4 00225CF4  90 81 00 64 */	stw r4, 0x64(r1)
/* 80228DB8 00225CF8  80 9E 03 44 */	lwz r4, 0x344(r30)
/* 80228DBC 00225CFC  90 81 00 74 */	stw r4, 0x74(r1)
/* 80228DC0 00225D00  80 9E 03 48 */	lwz r4, 0x348(r30)
/* 80228DC4 00225D04  90 81 00 78 */	stw r4, 0x78(r1)
/* 80228DC8 00225D08  90 61 00 7C */	stw r3, 0x7c(r1)
/* 80228DCC 00225D0C  90 01 00 80 */	stw r0, 0x80(r1)
/* 80228DD0 00225D10  80 1E 03 4C */	lwz r0, 0x34c(r30)
/* 80228DD4 00225D14  90 01 00 84 */	stw r0, 0x84(r1)
/* 80228DD8 00225D18  80 7E 02 10 */	lwz r3, 0x210(r30)
/* 80228DDC 00225D1C  85 83 00 18 */	lwzu r12, 0x18(r3)
/* 80228DE0 00225D20  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80228DE4 00225D24  7D 89 03 A6 */	mtctr r12
/* 80228DE8 00225D28  4E 80 04 21 */	bctrl 
/* 80228DEC 00225D2C  90 61 00 88 */	stw r3, 0x88(r1)
/* 80228DF0 00225D30  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80228DF4 00225D34  80 9D 00 30 */	lwz r4, 0x30(r29)
/* 80228DF8 00225D38  48 1D 32 81 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 80228DFC 00225D3C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80228E00 00225D40  38 81 00 58 */	addi r4, r1, 0x58
/* 80228E04 00225D44  48 1D 70 65 */	bl open_VsSelect__Q26Screen9Game2DMgrFRQ28Morimura18DispMemberVsSelect
/* 80228E08 00225D48  48 00 02 94 */	b .L_8022909C
.L_80228E0C:
/* 80228E0C 00225D4C  80 7D 00 30 */	lwz r3, 0x30(r29)
/* 80228E10 00225D50  C0 62 BE F0 */	lfs f3, lbl_8051A250@sda21(r2)
/* 80228E14 00225D54  C0 A3 00 5C */	lfs f5, 0x5c(r3)
/* 80228E18 00225D58  C0 C3 00 58 */	lfs f6, 0x58(r3)
/* 80228E1C 00225D5C  EC 85 01 72 */	fmuls f4, f5, f5
/* 80228E20 00225D60  C0 42 BE F4 */	lfs f2, lbl_8051A254@sda21(r2)
/* 80228E24 00225D64  EC 06 19 BA */	fmadds f0, f6, f6, f3
/* 80228E28 00225D68  C0 22 BE F8 */	lfs f1, lbl_8051A258@sda21(r2)
/* 80228E2C 00225D6C  80 BF 00 E8 */	lwz r5, 0xe8(r31)
/* 80228E30 00225D70  80 9F 00 EC */	lwz r4, 0xec(r31)
/* 80228E34 00225D74  EC 84 00 2A */	fadds f4, f4, f0
/* 80228E38 00225D78  80 7F 00 F0 */	lwz r3, 0xf0(r31)
/* 80228E3C 00225D7C  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 80228E40 00225D80  D0 61 00 28 */	stfs f3, 0x28(r1)
/* 80228E44 00225D84  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 80228E48 00225D88  D0 61 00 2C */	stfs f3, 0x2c(r1)
/* 80228E4C 00225D8C  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 80228E50 00225D90  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 80228E54 00225D94  D0 61 00 38 */	stfs f3, 0x38(r1)
/* 80228E58 00225D98  D0 61 00 3C */	stfs f3, 0x3c(r1)
/* 80228E5C 00225D9C  D0 61 00 40 */	stfs f3, 0x40(r1)
/* 80228E60 00225DA0  D0 61 00 44 */	stfs f3, 0x44(r1)
/* 80228E64 00225DA4  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 80228E68 00225DA8  D0 21 00 4C */	stfs f1, 0x4c(r1)
/* 80228E6C 00225DAC  D0 61 00 50 */	stfs f3, 0x50(r1)
/* 80228E70 00225DB0  D0 61 00 54 */	stfs f3, 0x54(r1)
/* 80228E74 00225DB4  90 A1 00 18 */	stw r5, 0x18(r1)
/* 80228E78 00225DB8  90 81 00 1C */	stw r4, 0x1c(r1)
/* 80228E7C 00225DBC  90 61 00 20 */	stw r3, 0x20(r1)
/* 80228E80 00225DC0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80228E84 00225DC4  40 81 00 14 */	ble .L_80228E98
/* 80228E88 00225DC8  40 81 00 14 */	ble .L_80228E9C
/* 80228E8C 00225DCC  FC 00 20 34 */	frsqrte f0, f4
/* 80228E90 00225DD0  EC 80 01 32 */	fmuls f4, f0, f4
/* 80228E94 00225DD4  48 00 00 08 */	b .L_80228E9C
.L_80228E98:
/* 80228E98 00225DD8  FC 80 18 90 */	fmr f4, f3
.L_80228E9C:
/* 80228E9C 00225DDC  C0 02 BE FC */	lfs f0, lbl_8051A25C@sda21(r2)
/* 80228EA0 00225DE0  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 80228EA4 00225DE4  40 81 00 C0 */	ble .L_80228F64
/* 80228EA8 00225DE8  C0 82 BE F0 */	lfs f4, lbl_8051A250@sda21(r2)
/* 80228EAC 00225DEC  38 00 00 00 */	li r0, 0
/* 80228EB0 00225DF0  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 80228EB4 00225DF4  C0 41 00 28 */	lfs f2, 0x28(r1)
/* 80228EB8 00225DF8  FC 20 20 90 */	fmr f1, f4
/* 80228EBC 00225DFC  EC 00 01 32 */	fmuls f0, f0, f4
/* 80228EC0 00225E00  C0 61 00 30 */	lfs f3, 0x30(r1)
/* 80228EC4 00225E04  EC 02 01 BA */	fmadds f0, f2, f6, f0
/* 80228EC8 00225E08  EC 03 01 7A */	fmadds f0, f3, f5, f0
/* 80228ECC 00225E0C  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 80228ED0 00225E10  40 81 00 0C */	ble .L_80228EDC
/* 80228ED4 00225E14  FC 80 00 90 */	fmr f4, f0
/* 80228ED8 00225E18  38 00 00 00 */	li r0, 0
.L_80228EDC:
/* 80228EDC 00225E1C  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 80228EE0 00225E20  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 80228EE4 00225E24  EC 00 00 72 */	fmuls f0, f0, f1
/* 80228EE8 00225E28  C0 61 00 3C */	lfs f3, 0x3c(r1)
/* 80228EEC 00225E2C  EC 02 01 BA */	fmadds f0, f2, f6, f0
/* 80228EF0 00225E30  EC 03 01 7A */	fmadds f0, f3, f5, f0
/* 80228EF4 00225E34  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 80228EF8 00225E38  40 81 00 0C */	ble .L_80228F04
/* 80228EFC 00225E3C  FC 80 00 90 */	fmr f4, f0
/* 80228F00 00225E40  38 00 00 01 */	li r0, 1
.L_80228F04:
/* 80228F04 00225E44  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 80228F08 00225E48  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 80228F0C 00225E4C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80228F10 00225E50  C0 61 00 48 */	lfs f3, 0x48(r1)
/* 80228F14 00225E54  EC 02 01 BA */	fmadds f0, f2, f6, f0
/* 80228F18 00225E58  EC 03 01 7A */	fmadds f0, f3, f5, f0
/* 80228F1C 00225E5C  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 80228F20 00225E60  40 81 00 0C */	ble .L_80228F2C
/* 80228F24 00225E64  FC 80 00 90 */	fmr f4, f0
/* 80228F28 00225E68  38 00 00 02 */	li r0, 2
.L_80228F2C:
/* 80228F2C 00225E6C  C0 01 00 50 */	lfs f0, 0x50(r1)
/* 80228F30 00225E70  C0 41 00 4C */	lfs f2, 0x4c(r1)
/* 80228F34 00225E74  EC 00 00 72 */	fmuls f0, f0, f1
/* 80228F38 00225E78  C0 61 00 54 */	lfs f3, 0x54(r1)
/* 80228F3C 00225E7C  EC 02 01 BA */	fmadds f0, f2, f6, f0
/* 80228F40 00225E80  EC 03 01 7A */	fmadds f0, f3, f5, f0
/* 80228F44 00225E84  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 80228F48 00225E88  40 81 00 08 */	ble .L_80228F50
/* 80228F4C 00225E8C  38 00 00 03 */	li r0, 3
.L_80228F50:
/* 80228F50 00225E90  54 00 10 3A */	slwi r0, r0, 2
/* 80228F54 00225E94  38 61 00 18 */	addi r3, r1, 0x18
/* 80228F58 00225E98  7C 03 00 2E */	lwzx r0, r3, r0
/* 80228F5C 00225E9C  90 1E 03 28 */	stw r0, 0x328(r30)
/* 80228F60 00225EA0  48 00 00 0C */	b .L_80228F6C
.L_80228F64:
/* 80228F64 00225EA4  38 00 FF FE */	li r0, -2
/* 80228F68 00225EA8  90 1E 03 28 */	stw r0, 0x328(r30)
.L_80228F6C:
/* 80228F6C 00225EAC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80228F70 00225EB0  38 81 00 08 */	addi r4, r1, 8
/* 80228F74 00225EB4  38 BE 03 44 */	addi r5, r30, 0x344
/* 80228F78 00225EB8  38 DE 03 48 */	addi r6, r30, 0x348
/* 80228F7C 00225EBC  48 1D 6F 89 */	bl check_VsSelect__Q26Screen9Game2DMgrFRiRiRi
/* 80228F80 00225EC0  2C 03 00 03 */	cmpwi r3, 3
/* 80228F84 00225EC4  41 82 00 20 */	beq .L_80228FA4
/* 80228F88 00225EC8  40 80 00 F4 */	bge .L_8022907C
/* 80228F8C 00225ECC  2C 03 00 02 */	cmpwi r3, 2
/* 80228F90 00225ED0  40 80 00 08 */	bge .L_80228F98
/* 80228F94 00225ED4  48 00 00 E8 */	b .L_8022907C
.L_80228F98:
/* 80228F98 00225ED8  38 00 00 01 */	li r0, 1
/* 80228F9C 00225EDC  98 1E 02 04 */	stb r0, 0x204(r30)
/* 80228FA0 00225EE0  48 00 00 FC */	b .L_8022909C
.L_80228FA4:
/* 80228FA4 00225EE4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80228FA8 00225EE8  38 80 00 01 */	li r4, 1
/* 80228FAC 00225EEC  38 00 00 00 */	li r0, 0
/* 80228FB0 00225EF0  90 83 00 44 */	stw r4, 0x44(r3)
/* 80228FB4 00225EF4  90 01 00 0C */	stw r0, 0xc(r1)
/* 80228FB8 00225EF8  80 81 00 08 */	lwz r4, 8(r1)
/* 80228FBC 00225EFC  90 01 00 10 */	stw r0, 0x10(r1)
/* 80228FC0 00225F00  98 01 00 14 */	stb r0, 0x14(r1)
/* 80228FC4 00225F04  80 7E 02 10 */	lwz r3, 0x210(r30)
/* 80228FC8 00225F08  48 00 50 0D */	bl getStageData__Q34Game6VsGame9StageListFi
/* 80228FCC 00225F0C  7C 7C 1B 79 */	or. r28, r3, r3
/* 80228FD0 00225F10  40 82 00 18 */	bne .L_80228FE8
/* 80228FD4 00225F14  38 7F 00 C8 */	addi r3, r31, 0xc8
/* 80228FD8 00225F18  38 BF 00 80 */	addi r5, r31, 0x80
/* 80228FDC 00225F1C  38 80 01 C3 */	li r4, 0x1c3
/* 80228FE0 00225F20  4C C6 31 82 */	crclr 6
/* 80228FE4 00225F24  4B E0 16 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80228FE8:
/* 80228FE8 00225F28  93 9E 03 3C */	stw r28, 0x33c(r30)
/* 80228FEC 00225F2C  38 7E 02 24 */	addi r3, r30, 0x224
/* 80228FF0 00225F30  38 9C 00 20 */	addi r4, r28, 0x20
/* 80228FF4 00225F34  80 01 00 08 */	lwz r0, 8(r1)
/* 80228FF8 00225F38  90 1E 03 40 */	stw r0, 0x340(r30)
/* 80228FFC 00225F3C  4B EA 18 5D */	bl strcpy
/* 80229000 00225F40  38 7E 02 A4 */	addi r3, r30, 0x2a4
/* 80229004 00225F44  38 9C 00 70 */	addi r4, r28, 0x70
/* 80229008 00225F48  4B EA 18 51 */	bl strcpy
/* 8022900C 00225F4C  38 00 00 00 */	li r0, 0
/* 80229010 00225F50  38 7E 02 14 */	addi r3, r30, 0x214
/* 80229014 00225F54  90 01 00 10 */	stw r0, 0x10(r1)
/* 80229018 00225F58  38 9C 00 18 */	addi r4, r28, 0x18
/* 8022901C 00225F5C  4B FC 82 DD */	bl __as__Q24Game13PikiContainerFRQ24Game13PikiContainer
/* 80229020 00225F60  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80229024 00225F64  38 80 00 00 */	li r4, 0
/* 80229028 00225F68  80 BC 00 68 */	lwz r5, 0x68(r28)
/* 8022902C 00225F6C  4B FB F4 25 */	bl setDopeCount__Q24Game8PlayDataFii
/* 80229030 00225F70  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80229034 00225F74  38 80 00 01 */	li r4, 1
/* 80229038 00225F78  80 BC 00 64 */	lwz r5, 0x64(r28)
/* 8022903C 00225F7C  4B FB F4 15 */	bl setDopeCount__Q24Game8PlayDataFii
/* 80229040 00225F80  C0 22 BF 00 */	lfs f1, lbl_8051A260@sda21(r2)
/* 80229044 00225F84  38 7C 00 18 */	addi r3, r28, 0x18
/* 80229048 00225F88  C0 1C 00 60 */	lfs f0, 0x60(r28)
/* 8022904C 00225F8C  38 9F 00 D8 */	addi r4, r31, 0xd8
/* 80229050 00225F90  EC 01 00 2A */	fadds f0, f1, f0
/* 80229054 00225F94  D0 1E 03 C0 */	stfs f0, 0x3c0(r30)
/* 80229058 00225F98  4B FC 83 51 */	bl dump__Q24Game13PikiContainerFPc
/* 8022905C 00225F9C  7F A3 EB 78 */	mr r3, r29
/* 80229060 00225FA0  7F C4 F3 78 */	mr r4, r30
/* 80229064 00225FA4  81 9D 00 00 */	lwz r12, 0(r29)
/* 80229068 00225FA8  38 C1 00 0C */	addi r6, r1, 0xc
/* 8022906C 00225FAC  38 A0 00 01 */	li r5, 1
/* 80229070 00225FB0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80229074 00225FB4  7D 89 03 A6 */	mtctr r12
/* 80229078 00225FB8  4E 80 04 21 */	bctrl 
.L_8022907C:
/* 8022907C 00225FBC  7F C3 F3 78 */	mr r3, r30
/* 80229080 00225FC0  4B F3 BF 29 */	bl doUpdate__Q24Game14BaseHIOSectionFv
/* 80229084 00225FC4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80229088 00225FC8  48 1D 2F A5 */	bl update__Q26Screen9Game2DMgrFv
/* 8022908C 00225FCC  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 80229090 00225FD0  28 03 00 00 */	cmplwi r3, 0
/* 80229094 00225FD4  41 82 00 08 */	beq .L_8022909C
/* 80229098 00225FD8  48 19 05 19 */	bl update__14TParticle2dMgrFv
.L_8022909C:
/* 8022909C 00225FDC  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 802290A0 00225FE0  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 802290A4 00225FE4  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 802290A8 00225FE8  83 A1 00 94 */	lwz r29, 0x94(r1)
/* 802290AC 00225FEC  83 81 00 90 */	lwz r28, 0x90(r1)
/* 802290B0 00225FF0  7C 08 03 A6 */	mtlr r0
/* 802290B4 00225FF4  38 21 00 A0 */	addi r1, r1, 0xa0
/* 802290B8 00225FF8  4E 80 00 20 */	blr 
.endif

.global draw__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSectionR8Graphics
draw__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSectionR8Graphics:
/* 802290BC 00225FFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802290C0 00226000  7C 08 02 A6 */	mflr r0
/* 802290C4 00226004  90 01 00 14 */	stw r0, 0x14(r1)
/* 802290C8 00226008  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802290CC 0022600C  7C BF 2B 78 */	mr r31, r5
/* 802290D0 00226010  88 03 00 10 */	lbz r0, 0x10(r3)
/* 802290D4 00226014  28 00 00 02 */	cmplwi r0, 2
/* 802290D8 00226018  40 82 00 58 */	bne .L_80229130
/* 802290DC 0022601C  38 7F 01 90 */	addi r3, r31, 0x190
/* 802290E0 00226020  81 9F 01 90 */	lwz r12, 0x190(r31)
/* 802290E4 00226024  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802290E8 00226028  7D 89 03 A6 */	mtctr r12
/* 802290EC 0022602C  4E 80 04 21 */	bctrl 
/* 802290F0 00226030  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 802290F4 00226034  38 80 00 01 */	li r4, 1
/* 802290F8 00226038  38 A0 00 00 */	li r5, 0
/* 802290FC 0022603C  48 19 04 D9 */	bl draw__14TParticle2dMgrFUcUs
/* 80229100 00226040  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80229104 00226044  7F E4 FB 78 */	mr r4, r31
/* 80229108 00226048  48 1D 2F 49 */	bl draw__Q26Screen9Game2DMgrFR8Graphics
/* 8022910C 0022604C  38 7F 01 90 */	addi r3, r31, 0x190
/* 80229110 00226050  81 9F 01 90 */	lwz r12, 0x190(r31)
/* 80229114 00226054  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80229118 00226058  7D 89 03 A6 */	mtctr r12
/* 8022911C 0022605C  4E 80 04 21 */	bctrl 
/* 80229120 00226060  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 80229124 00226064  38 80 00 00 */	li r4, 0
/* 80229128 00226068  38 A0 00 00 */	li r5, 0
/* 8022912C 0022606C  48 19 04 A9 */	bl draw__14TParticle2dMgrFUcUs
.L_80229130:
/* 80229130 00226070  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80229134 00226074  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80229138 00226078  7C 08 03 A6 */	mtlr r0
/* 8022913C 0022607C  38 21 00 10 */	addi r1, r1, 0x10
/* 80229140 00226080  4E 80 00 20 */	blr 

.global cleanup__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSection
cleanup__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSection:
/* 80229144 00226084  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80229148 00226088  7C 08 02 A6 */	mflr r0
/* 8022914C 0022608C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80229150 00226090  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80229154 00226094  93 C1 00 08 */	stw r30, 8(r1)
/* 80229158 00226098  7C 7E 1B 78 */	mr r30, r3
/* 8022915C 0022609C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80229160 002260A0  28 00 00 00 */	cmplwi r0, 0
/* 80229164 002260A4  40 82 00 20 */	bne .L_80229184
/* 80229168 002260A8  3C 60 80 48 */	lis r3, lbl_804834CC@ha
/* 8022916C 002260AC  3C A0 80 48 */	lis r5, lbl_804834D8@ha
/* 80229170 002260B0  38 63 34 CC */	addi r3, r3, lbl_804834CC@l
/* 80229174 002260B4  38 80 01 D3 */	li r4, 0x1d3
/* 80229178 002260B8  38 A5 34 D8 */	addi r5, r5, lbl_804834D8@l
/* 8022917C 002260BC  4C C6 31 82 */	crclr 6
/* 80229180 002260C0  4B E0 14 C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80229184:
/* 80229184 002260C4  83 ED 98 80 */	lwz r31, spSceneMgr__8PSSystem@sda21(r13)
/* 80229188 002260C8  28 1F 00 00 */	cmplwi r31, 0
/* 8022918C 002260CC  40 82 00 20 */	bne .L_802291AC
/* 80229190 002260D0  3C 60 80 48 */	lis r3, lbl_804834CC@ha
/* 80229194 002260D4  3C A0 80 48 */	lis r5, lbl_804834D8@ha
/* 80229198 002260D8  38 63 34 CC */	addi r3, r3, lbl_804834CC@l
/* 8022919C 002260DC  38 80 01 DC */	li r4, 0x1dc
/* 802291A0 002260E0  38 A5 34 D8 */	addi r5, r5, lbl_804834D8@l
/* 802291A4 002260E4  4C C6 31 82 */	crclr 6
/* 802291A8 002260E8  4B E0 14 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802291AC:
/* 802291AC 002260EC  7F E3 FB 78 */	mr r3, r31
/* 802291B0 002260F0  48 11 90 31 */	bl deleteCurrentScene__Q28PSSystem8SceneMgrFv
/* 802291B4 002260F4  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 802291B8 002260F8  48 19 05 FD */	bl killAll__14TParticle2dMgrFv
/* 802291BC 002260FC  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 802291C0 00226100  4B DF A5 71 */	bl freeAll__7JKRHeapFv
/* 802291C4 00226104  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 802291C8 00226108  4B DF A3 ED */	bl destroy__7JKRHeapFv
/* 802291CC 0022610C  38 00 00 00 */	li r0, 0
/* 802291D0 00226110  90 1E 00 14 */	stw r0, 0x14(r30)
/* 802291D4 00226114  80 7E 00 18 */	lwz r3, 0x18(r30)
/* 802291D8 00226118  4B DF A3 CD */	bl becomeCurrentHeap__7JKRHeapFv
/* 802291DC 0022611C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802291E0 00226120  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802291E4 00226124  83 C1 00 08 */	lwz r30, 8(r1)
/* 802291E8 00226128  7C 08 03 A6 */	mtlr r0
/* 802291EC 0022612C  38 21 00 10 */	addi r1, r1, 0x10
/* 802291F0 00226130  4E 80 00 20 */	blr 

.global getSize__Q28Morimura18DispMemberVsSelectFv
getSize__Q28Morimura18DispMemberVsSelectFv:
/* 802291F4 00226134  38 60 00 38 */	li r3, 0x38
/* 802291F8 00226138  4E 80 00 20 */	blr 

.global getOwnerID__Q28Morimura18DispMemberVsSelectFv
getOwnerID__Q28Morimura18DispMemberVsSelectFv:
/* 802291FC 0022613C  3C 60 4D 52 */	lis r3, 0x4D524D52@ha
/* 80229200 00226140  38 63 4D 52 */	addi r3, r3, 0x4D524D52@l
/* 80229204 00226144  4E 80 00 20 */	blr 

.global getMemberID__Q28Morimura18DispMemberVsSelectFv
getMemberID__Q28Morimura18DispMemberVsSelectFv:
/* 80229208 00226148  3C 80 4C 45 */	lis r4, 0x4C454354@ha
/* 8022920C 0022614C  3C 60 56 53 */	lis r3, 0x56535345@ha
/* 80229210 00226150  38 84 43 54 */	addi r4, r4, 0x4C454354@l
/* 80229214 00226154  38 63 53 45 */	addi r3, r3, 0x56535345@l
/* 80229218 00226158  4E 80 00 20 */	blr 

.global getSize__Q28Morimura25DispMemberChallengeSelectFv
getSize__Q28Morimura25DispMemberChallengeSelectFv:
/* 8022921C 0022615C  38 60 00 24 */	li r3, 0x24
/* 80229220 00226160  4E 80 00 20 */	blr 

.global getOwnerID__Q28Morimura25DispMemberChallengeSelectFv
getOwnerID__Q28Morimura25DispMemberChallengeSelectFv:
/* 80229224 00226164  3C 60 4D 52 */	lis r3, 0x4D524D52@ha
/* 80229228 00226168  38 63 4D 52 */	addi r3, r3, 0x4D524D52@l
/* 8022922C 0022616C  4E 80 00 20 */	blr 

.global getMemberID__Q28Morimura25DispMemberChallengeSelectFv
getMemberID__Q28Morimura25DispMemberChallengeSelectFv:
/* 80229230 00226170  3C 80 4C 45 */	lis r4, 0x4C454354@ha
/* 80229234 00226174  3C 60 43 48 */	lis r3, 0x43485345@ha
/* 80229238 00226178  38 84 43 54 */	addi r4, r4, 0x4C454354@l
/* 8022923C 0022617C  38 63 53 45 */	addi r3, r3, 0x43485345@l
/* 80229240 00226180  4E 80 00 20 */	blr 

.global "resume__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
"resume__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection":
/* 80229244 00226184  4E 80 00 20 */	blr 

.global "restart__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
"restart__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection":
/* 80229248 00226188  4E 80 00 20 */	blr 

.global "invoke__36Delegate<Q34Game6VsGame10TitleState>Fv"
"invoke__36Delegate<Q34Game6VsGame10TitleState>Fv":
/* 8022924C 0022618C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80229250 00226190  7C 08 02 A6 */	mflr r0
/* 80229254 00226194  7C 64 1B 78 */	mr r4, r3
/* 80229258 00226198  90 01 00 14 */	stw r0, 0x14(r1)
/* 8022925C 0022619C  39 84 00 08 */	addi r12, r4, 8
/* 80229260 002261A0  80 63 00 04 */	lwz r3, 4(r3)
/* 80229264 002261A4  4B E9 88 C1 */	bl __ptmf_scall
/* 80229268 002261A8  60 00 00 00 */	nop 
/* 8022926C 002261AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80229270 002261B0  7C 08 03 A6 */	mtlr r0
/* 80229274 002261B4  38 21 00 10 */	addi r1, r1, 0x10
/* 80229278 002261B8  4E 80 00 20 */	blr 

__sinit_vsGS_Title_cpp: # static initializer
/* 8022927C 002261BC  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80229280 002261C0  38 00 FF FF */	li r0, -1
/* 80229284 002261C4  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80229288 002261C8  3C 60 80 4C */	lis r3, govNAN___Q24Game5P2JST@ha
/* 8022928C 002261CC  90 0D 95 E0 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 80229290 002261D0  D4 03 0D E8 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 80229294 002261D4  D0 0D 95 E4 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 80229298 002261D8  D0 03 00 04 */	stfs f0, 4(r3)
/* 8022929C 002261DC  D0 03 00 08 */	stfs f0, 8(r3)
/* 802292A0 002261E0  4E 80 00 20 */	blr 
