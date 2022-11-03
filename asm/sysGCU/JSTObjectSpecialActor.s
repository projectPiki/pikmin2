.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
	.4byte __sinit_JSTObjectSpecialActor_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_8049A858:
	.asciz "JSTObjectSpecialActor.cpp"
.balign 4
lbl_8049A874:
	.asciz "comand %d not implemented !\n"
.balign 4
lbl_8049A894:
	.asciz "too many commands !\n"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
govNAN___Q24Game5P2JST:
	.float 0.0
	.float 0.0
	.float 0.0
.global __vt__Q34Game5P2JST18ObjectSpecialActor
__vt__Q34Game5P2JST18ObjectSpecialActor:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game5P2JST18ObjectSpecialActorFv
	.4byte JSGFGetType__Q26JStage6TActorCFv
	.4byte JSGGetName__Q34Game5P2JST11ObjectActorCFv
	.4byte JSGUpdate__Q26JStage7TObjectFv
	.4byte JSGGetFlag__Q34Game5P2JST11ObjectActorCFv
	.4byte JSGSetFlag__Q34Game5P2JST11ObjectActorFUl
	.4byte JSGGetData__Q26JStage7TObjectCFUlPvUl
	.4byte JSGSetData__Q34Game5P2JST11ObjectActorFUlPCvUl
	.4byte JSGGetParent__Q26JStage7TObjectCFPPQ26JStage7TObjectPUl
	.4byte JSGSetParent__Q26JStage7TObjectFPQ26JStage7TObjectUl
	.4byte JSGSetRelation__Q26JStage7TObjectFbPQ26JStage7TObjectUl
	.4byte JSGFindNodeID__Q34Game5P2JST11ObjectActorCFPCc
	.4byte JSGGetNodeTransformation__Q34Game5P2JST11ObjectActorCFUlPA4_f
	.4byte JSGGetTranslation__Q34Game5P2JST11ObjectActorCFP3Vec
	.4byte JSGSetTranslation__Q34Game5P2JST11ObjectActorFRC3Vec
	.4byte JSGGetScaling__Q34Game5P2JST11ObjectActorCFP3Vec
	.4byte JSGSetScaling__Q34Game5P2JST11ObjectActorFRC3Vec
	.4byte JSGGetRotation__Q34Game5P2JST11ObjectActorCFP3Vec
	.4byte JSGSetRotation__Q34Game5P2JST11ObjectActorFRC3Vec
	.4byte JSGGetShape__Q34Game5P2JST11ObjectActorCFv
	.4byte JSGSetShape__Q34Game5P2JST11ObjectActorFUl
	.4byte JSGGetAnimation__Q34Game5P2JST11ObjectActorCFv
	.4byte JSGSetAnimation__Q34Game5P2JST18ObjectSpecialActorFUl
	.4byte JSGGetAnimationFrame__Q34Game5P2JST11ObjectActorCFv
	.4byte JSGSetAnimationFrame__Q34Game5P2JST11ObjectActorFf
	.4byte JSGGetAnimationFrameMax__Q34Game5P2JST11ObjectActorCFv
	.4byte JSGGetAnimationTransition__Q26JStage6TActorCFv
	.4byte JSGSetAnimationTransition__Q26JStage6TActorFf
	.4byte JSGGetTextureAnimation__Q26JStage6TActorCFv
	.4byte JSGSetTextureAnimation__Q26JStage6TActorFUl
	.4byte JSGGetTextureAnimationFrame__Q26JStage6TActorCFv
	.4byte JSGSetTextureAnimationFrame__Q26JStage6TActorFf
	.4byte JSGGetTextureAnimationFrameMax__Q26JStage6TActorCFv
	.4byte 0
	.4byte 0
	.4byte "@4@reset__Q34Game5P2JST18ObjectSpecialActorFv"
	.4byte "@4@update__Q34Game5P2JST18ObjectSpecialActorFv"
	.4byte "@4@start__Q34Game5P2JST11ObjectActorFv"
	.4byte "@4@stop__Q34Game5P2JST18ObjectSpecialActorFv"
	.4byte "@4@parseUserData___Q34Game5P2JST18ObjectSpecialActorFUlPCv"
	.4byte reset__Q34Game5P2JST18ObjectSpecialActorFv
	.4byte update__Q34Game5P2JST18ObjectSpecialActorFv
	.4byte entry__Q34Game5P2JST11ObjectActorFv
	.4byte start__Q34Game5P2JST11ObjectActorFv
	.4byte stop__Q34Game5P2JST18ObjectSpecialActorFv
	.4byte setShape__Q34Game5P2JST11ObjectActorFv
	.4byte setAnim__Q34Game5P2JST11ObjectActorFv
	.4byte mountArchive__Q34Game5P2JST11ObjectActorFv
	.4byte parseUserData___Q34Game5P2JST18ObjectSpecialActorFUlPCv

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
gu32NAN___Q24Game5P2JST:
	.skip 0x4
gfNAN___Q24Game5P2JST:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_80520860:
	.float 0.0
lbl_80520864:
	.float 1.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game5P2JST18ObjectSpecialActorFPCcPQ24Game11MoviePlayer
__ct__Q34Game5P2JST18ObjectSpecialActorFPCcPQ24Game11MoviePlayer:
/* 80437400 00434340  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80437404 00434344  7C 08 02 A6 */	mflr r0
/* 80437408 00434348  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043740C 0043434C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80437410 00434350  7C 7F 1B 78 */	mr r31, r3
/* 80437414 00434354  4B FF 75 4D */	bl __ct__Q34Game5P2JST11ObjectActorFPCcPQ24Game11MoviePlayer
/* 80437418 00434358  3C 80 80 4F */	lis r4, __vt__Q34Game5P2JST18ObjectSpecialActor@ha
/* 8043741C 0043435C  7F E3 FB 78 */	mr r3, r31
/* 80437420 00434360  38 84 C8 2C */	addi r4, r4, __vt__Q34Game5P2JST18ObjectSpecialActor@l
/* 80437424 00434364  90 9F 00 00 */	stw r4, 0(r31)
/* 80437428 00434368  38 04 00 8C */	addi r0, r4, 0x8c
/* 8043742C 0043436C  90 1F 00 04 */	stw r0, 4(r31)
/* 80437430 00434370  81 9F 00 00 */	lwz r12, 0(r31)
/* 80437434 00434374  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80437438 00434378  7D 89 03 A6 */	mtctr r12
/* 8043743C 0043437C  4E 80 04 21 */	bctrl 
/* 80437440 00434380  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80437444 00434384  7F E3 FB 78 */	mr r3, r31
/* 80437448 00434388  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8043744C 0043438C  7C 08 03 A6 */	mtlr r0
/* 80437450 00434390  38 21 00 10 */	addi r1, r1, 0x10
/* 80437454 00434394  4E 80 00 20 */	blr 

.global reset__Q34Game5P2JST18ObjectSpecialActorFv
reset__Q34Game5P2JST18ObjectSpecialActorFv:
/* 80437458 00434398  38 80 00 00 */	li r4, 0
/* 8043745C 0043439C  38 00 FF FF */	li r0, -1
/* 80437460 004343A0  90 83 00 70 */	stw r4, 0x70(r3)
/* 80437464 004343A4  C0 02 25 00 */	lfs f0, lbl_80520860@sda21(r2)
/* 80437468 004343A8  90 03 00 74 */	stw r0, 0x74(r3)
/* 8043746C 004343AC  90 03 00 78 */	stw r0, 0x78(r3)
/* 80437470 004343B0  90 03 00 7C */	stw r0, 0x7c(r3)
/* 80437474 004343B4  90 03 00 80 */	stw r0, 0x80(r3)
/* 80437478 004343B8  90 03 00 84 */	stw r0, 0x84(r3)
/* 8043747C 004343BC  90 03 00 88 */	stw r0, 0x88(r3)
/* 80437480 004343C0  90 03 00 8C */	stw r0, 0x8c(r3)
/* 80437484 004343C4  90 03 00 90 */	stw r0, 0x90(r3)
/* 80437488 004343C8  90 03 00 94 */	stw r0, 0x94(r3)
/* 8043748C 004343CC  90 03 00 98 */	stw r0, 0x98(r3)
/* 80437490 004343D0  90 03 00 9C */	stw r0, 0x9c(r3)
/* 80437494 004343D4  90 03 00 A0 */	stw r0, 0xa0(r3)
/* 80437498 004343D8  90 03 00 A4 */	stw r0, 0xa4(r3)
/* 8043749C 004343DC  90 03 00 A8 */	stw r0, 0xa8(r3)
/* 804374A0 004343E0  90 03 00 AC */	stw r0, 0xac(r3)
/* 804374A4 004343E4  90 03 00 B0 */	stw r0, 0xb0(r3)
/* 804374A8 004343E8  98 83 00 B4 */	stb r4, 0xb4(r3)
/* 804374AC 004343EC  D0 03 00 B8 */	stfs f0, 0xb8(r3)
/* 804374B0 004343F0  4E 80 00 20 */	blr 

.global stop__Q34Game5P2JST18ObjectSpecialActorFv
stop__Q34Game5P2JST18ObjectSpecialActorFv:
/* 804374B4 004343F4  4E 80 00 20 */	blr 

.global update__Q34Game5P2JST18ObjectSpecialActorFv
update__Q34Game5P2JST18ObjectSpecialActorFv:
/* 804374B8 004343F8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 804374BC 004343FC  7C 08 02 A6 */	mflr r0
/* 804374C0 00434400  C0 22 25 00 */	lfs f1, lbl_80520860@sda21(r2)
/* 804374C4 00434404  90 01 00 24 */	stw r0, 0x24(r1)
/* 804374C8 00434408  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 804374CC 0043440C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 804374D0 00434410  93 A1 00 14 */	stw r29, 0x14(r1)
/* 804374D4 00434414  7C 7D 1B 78 */	mr r29, r3
/* 804374D8 00434418  C0 43 00 B8 */	lfs f2, 0xb8(r3)
/* 804374DC 0043441C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 804374E0 00434420  40 81 00 2C */	ble .L_8043750C
/* 804374E4 00434424  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804374E8 00434428  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 804374EC 0043442C  EC 02 00 28 */	fsubs f0, f2, f0
/* 804374F0 00434430  D0 1D 00 B8 */	stfs f0, 0xb8(r29)
/* 804374F4 00434434  C0 1D 00 B8 */	lfs f0, 0xb8(r29)
/* 804374F8 00434438  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 804374FC 0043443C  4C 40 13 82 */	cror 2, 0, 2
/* 80437500 00434440  40 82 00 0C */	bne .L_8043750C
/* 80437504 00434444  38 00 00 01 */	li r0, 1
/* 80437508 00434448  98 1D 00 B4 */	stb r0, 0xb4(r29)
.L_8043750C:
/* 8043750C 0043444C  88 1D 00 B4 */	lbz r0, 0xb4(r29)
/* 80437510 00434450  28 00 00 00 */	cmplwi r0, 0
/* 80437514 00434454  41 82 00 18 */	beq .L_8043752C
/* 80437518 00434458  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8043751C 0043445C  81 83 00 00 */	lwz r12, 0(r3)
/* 80437520 00434460  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 80437524 00434464  7D 89 03 A6 */	mtctr r12
/* 80437528 00434468  4E 80 04 21 */	bctrl 
.L_8043752C:
/* 8043752C 0043446C  7F BF EB 78 */	mr r31, r29
/* 80437530 00434470  3B C0 00 00 */	li r30, 0
/* 80437534 00434474  48 00 01 64 */	b .L_80437698
.L_80437538:
/* 80437538 00434478  80 9F 00 74 */	lwz r4, 0x74(r31)
/* 8043753C 0043447C  2C 04 00 64 */	cmpwi r4, 0x64
/* 80437540 00434480  41 81 00 20 */	bgt .L_80437560
/* 80437544 00434484  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80437548 00434488  80 63 00 58 */	lwz r3, 0x58(r3)
/* 8043754C 0043448C  81 83 00 00 */	lwz r12, 0(r3)
/* 80437550 00434490  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 80437554 00434494  7D 89 03 A6 */	mtctr r12
/* 80437558 00434498  4E 80 04 21 */	bctrl 
/* 8043755C 0043449C  48 00 01 34 */	b .L_80437690
.L_80437560:
/* 80437560 004344A0  2C 04 00 C8 */	cmpwi r4, 0xc8
/* 80437564 004344A4  41 81 00 40 */	bgt .L_804375A4
/* 80437568 004344A8  2C 04 00 66 */	cmpwi r4, 0x66
/* 8043756C 004344AC  41 82 00 28 */	beq .L_80437594
/* 80437570 004344B0  40 80 01 20 */	bge .L_80437690
/* 80437574 004344B4  2C 04 00 65 */	cmpwi r4, 0x65
/* 80437578 004344B8  40 80 00 08 */	bge .L_80437580
/* 8043757C 004344BC  48 00 01 14 */	b .L_80437690
.L_80437580:
/* 80437580 004344C0  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80437584 004344C4  38 80 00 02 */	li r4, 2
/* 80437588 004344C8  38 A0 00 00 */	li r5, 0
/* 8043758C 004344CC  4B E1 AF C1 */	bl startDemoCamera__Q24Game9CameraMgrFii
/* 80437590 004344D0  48 00 01 00 */	b .L_80437690
.L_80437594:
/* 80437594 004344D4  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80437598 004344D8  38 80 00 02 */	li r4, 2
/* 8043759C 004344DC  4B E1 B0 41 */	bl finishDemoCamera__Q24Game9CameraMgrFi
/* 804375A0 004344E0  48 00 00 F0 */	b .L_80437690
.L_804375A4:
/* 804375A4 004344E4  2C 04 01 2C */	cmpwi r4, 0x12c
/* 804375A8 004344E8  41 81 00 60 */	bgt .L_80437608
/* 804375AC 004344EC  2C 04 00 CB */	cmpwi r4, 0xcb
/* 804375B0 004344F0  41 82 00 38 */	beq .L_804375E8
/* 804375B4 004344F4  40 80 00 DC */	bge .L_80437690
/* 804375B8 004344F8  2C 04 00 C9 */	cmpwi r4, 0xc9
/* 804375BC 004344FC  41 82 00 0C */	beq .L_804375C8
/* 804375C0 00434500  48 00 00 D0 */	b .L_80437690
/* 804375C4 00434504  48 00 00 CC */	b .L_80437690
.L_804375C8:
/* 804375C8 00434508  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 804375CC 0043450C  80 03 01 F0 */	lwz r0, 0x1f0(r3)
/* 804375D0 00434510  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 804375D4 00434514  40 82 00 BC */	bne .L_80437690
/* 804375D8 00434518  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 804375DC 0043451C  80 63 00 58 */	lwz r3, 0x58(r3)
/* 804375E0 00434520  4B E0 42 2D */	bl startKantei2D__Q24Game15BaseGameSectionFv
/* 804375E4 00434524  48 00 00 AC */	b .L_80437690
.L_804375E8:
/* 804375E8 00434528  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 804375EC 0043452C  80 03 01 F0 */	lwz r0, 0x1f0(r3)
/* 804375F0 00434530  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 804375F4 00434534  40 82 00 9C */	bne .L_80437690
/* 804375F8 00434538  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 804375FC 0043453C  80 63 00 58 */	lwz r3, 0x58(r3)
/* 80437600 00434540  4B E0 42 0D */	bl startKantei2D__Q24Game15BaseGameSectionFv
/* 80437604 00434544  48 00 00 8C */	b .L_80437690
.L_80437608:
/* 80437608 00434548  2C 04 01 90 */	cmpwi r4, 0x190
/* 8043760C 0043454C  41 81 00 64 */	bgt .L_80437670
/* 80437610 00434550  2C 04 01 2E */	cmpwi r4, 0x12e
/* 80437614 00434554  41 82 00 38 */	beq .L_8043764C
/* 80437618 00434558  40 80 00 78 */	bge .L_80437690
/* 8043761C 0043455C  2C 04 01 2D */	cmpwi r4, 0x12d
/* 80437620 00434560  40 80 00 08 */	bge .L_80437628
/* 80437624 00434564  48 00 00 6C */	b .L_80437690
.L_80437628:
/* 80437628 00434568  C0 02 25 04 */	lfs f0, lbl_80520864@sda21(r2)
/* 8043762C 0043456C  D0 1D 00 B8 */	stfs f0, 0xb8(r29)
/* 80437630 00434570  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80437634 00434574  C0 3D 00 B8 */	lfs f1, 0xb8(r29)
/* 80437638 00434578  81 83 00 00 */	lwz r12, 0(r3)
/* 8043763C 0043457C  81 8C 00 90 */	lwz r12, 0x90(r12)
/* 80437640 00434580  7D 89 03 A6 */	mtctr r12
/* 80437644 00434584  4E 80 04 21 */	bctrl 
/* 80437648 00434588  48 00 00 48 */	b .L_80437690
.L_8043764C:
/* 8043764C 0043458C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80437650 00434590  C0 22 25 04 */	lfs f1, lbl_80520864@sda21(r2)
/* 80437654 00434594  81 83 00 00 */	lwz r12, 0(r3)
/* 80437658 00434598  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 8043765C 0043459C  7D 89 03 A6 */	mtctr r12
/* 80437660 004345A0  4E 80 04 21 */	bctrl 
/* 80437664 004345A4  38 00 00 00 */	li r0, 0
/* 80437668 004345A8  98 1D 00 B4 */	stb r0, 0xb4(r29)
/* 8043766C 004345AC  48 00 00 24 */	b .L_80437690
.L_80437670:
/* 80437670 004345B0  3C 60 80 4A */	lis r3, lbl_8049A858@ha
/* 80437674 004345B4  3C A0 80 4A */	lis r5, lbl_8049A874@ha
/* 80437678 004345B8  7C 86 23 78 */	mr r6, r4
/* 8043767C 004345BC  38 80 00 A6 */	li r4, 0xa6
/* 80437680 004345C0  38 63 A8 58 */	addi r3, r3, lbl_8049A858@l
/* 80437684 004345C4  38 A5 A8 74 */	addi r5, r5, lbl_8049A874@l
/* 80437688 004345C8  4C C6 31 82 */	crclr 6
/* 8043768C 004345CC  4B BF 2F B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80437690:
/* 80437690 004345D0  3B FF 00 04 */	addi r31, r31, 4
/* 80437694 004345D4  3B DE 00 01 */	addi r30, r30, 1
.L_80437698:
/* 80437698 004345D8  80 1D 00 70 */	lwz r0, 0x70(r29)
/* 8043769C 004345DC  7C 1E 00 00 */	cmpw r30, r0
/* 804376A0 004345E0  41 80 FE 98 */	blt .L_80437538
/* 804376A4 004345E4  38 60 00 00 */	li r3, 0
/* 804376A8 004345E8  38 00 FF FF */	li r0, -1
/* 804376AC 004345EC  90 7D 00 70 */	stw r3, 0x70(r29)
/* 804376B0 004345F0  90 1D 00 74 */	stw r0, 0x74(r29)
/* 804376B4 004345F4  90 1D 00 78 */	stw r0, 0x78(r29)
/* 804376B8 004345F8  90 1D 00 7C */	stw r0, 0x7c(r29)
/* 804376BC 004345FC  90 1D 00 80 */	stw r0, 0x80(r29)
/* 804376C0 00434600  90 1D 00 84 */	stw r0, 0x84(r29)
/* 804376C4 00434604  90 1D 00 88 */	stw r0, 0x88(r29)
/* 804376C8 00434608  90 1D 00 8C */	stw r0, 0x8c(r29)
/* 804376CC 0043460C  90 1D 00 90 */	stw r0, 0x90(r29)
/* 804376D0 00434610  90 1D 00 94 */	stw r0, 0x94(r29)
/* 804376D4 00434614  90 1D 00 98 */	stw r0, 0x98(r29)
/* 804376D8 00434618  90 1D 00 9C */	stw r0, 0x9c(r29)
/* 804376DC 0043461C  90 1D 00 A0 */	stw r0, 0xa0(r29)
/* 804376E0 00434620  90 1D 00 A4 */	stw r0, 0xa4(r29)
/* 804376E4 00434624  90 1D 00 A8 */	stw r0, 0xa8(r29)
/* 804376E8 00434628  90 1D 00 AC */	stw r0, 0xac(r29)
/* 804376EC 0043462C  90 1D 00 B0 */	stw r0, 0xb0(r29)
/* 804376F0 00434630  80 01 00 24 */	lwz r0, 0x24(r1)
/* 804376F4 00434634  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 804376F8 00434638  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 804376FC 0043463C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80437700 00434640  7C 08 03 A6 */	mtlr r0
/* 80437704 00434644  38 21 00 20 */	addi r1, r1, 0x20
/* 80437708 00434648  4E 80 00 20 */	blr 

.global JSGSetAnimation__Q34Game5P2JST18ObjectSpecialActorFUl
JSGSetAnimation__Q34Game5P2JST18ObjectSpecialActorFUl:
/* 8043770C 0043464C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80437710 00434650  7C 08 02 A6 */	mflr r0
/* 80437714 00434654  90 01 00 14 */	stw r0, 0x14(r1)
/* 80437718 00434658  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8043771C 0043465C  7C 9F 23 78 */	mr r31, r4
/* 80437720 00434660  93 C1 00 08 */	stw r30, 8(r1)
/* 80437724 00434664  7C 7E 1B 78 */	mr r30, r3
/* 80437728 00434668  81 83 00 00 */	lwz r12, 0(r3)
/* 8043772C 0043466C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80437730 00434670  7D 89 03 A6 */	mtctr r12
/* 80437734 00434674  4E 80 04 21 */	bctrl 
/* 80437738 00434678  80 1E 00 70 */	lwz r0, 0x70(r30)
/* 8043773C 0043467C  2C 00 00 10 */	cmpwi r0, 0x10
/* 80437740 00434680  41 80 00 20 */	blt .L_80437760
/* 80437744 00434684  3C 60 80 4A */	lis r3, lbl_8049A858@ha
/* 80437748 00434688  3C A0 80 4A */	lis r5, lbl_8049A894@ha
/* 8043774C 0043468C  38 63 A8 58 */	addi r3, r3, lbl_8049A858@l
/* 80437750 00434690  38 80 00 BB */	li r4, 0xbb
/* 80437754 00434694  38 A5 A8 94 */	addi r5, r5, lbl_8049A894@l
/* 80437758 00434698  4C C6 31 82 */	crclr 6
/* 8043775C 0043469C  4B BF 2E E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80437760:
/* 80437760 004346A0  80 9E 00 70 */	lwz r4, 0x70(r30)
/* 80437764 004346A4  38 64 00 01 */	addi r3, r4, 1
/* 80437768 004346A8  54 80 10 3A */	slwi r0, r4, 2
/* 8043776C 004346AC  90 7E 00 70 */	stw r3, 0x70(r30)
/* 80437770 004346B0  7C 7E 02 14 */	add r3, r30, r0
/* 80437774 004346B4  93 E3 00 74 */	stw r31, 0x74(r3)
/* 80437778 004346B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8043777C 004346BC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80437780 004346C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80437784 004346C4  7C 08 03 A6 */	mtlr r0
/* 80437788 004346C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8043778C 004346CC  4E 80 00 20 */	blr 

.global parseUserData___Q34Game5P2JST18ObjectSpecialActorFUlPCv
parseUserData___Q34Game5P2JST18ObjectSpecialActorFUlPCv:
/* 80437790 004346D0  4E 80 00 20 */	blr 

.global __dt__Q34Game5P2JST18ObjectSpecialActorFv
__dt__Q34Game5P2JST18ObjectSpecialActorFv:
/* 80437794 004346D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80437798 004346D8  7C 08 02 A6 */	mflr r0
/* 8043779C 004346DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 804377A0 004346E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804377A4 004346E4  7C 9F 23 78 */	mr r31, r4
/* 804377A8 004346E8  93 C1 00 08 */	stw r30, 8(r1)
/* 804377AC 004346EC  7C 7E 1B 79 */	or. r30, r3, r3
/* 804377B0 004346F0  41 82 00 30 */	beq .L_804377E0
/* 804377B4 004346F4  3C A0 80 4F */	lis r5, __vt__Q34Game5P2JST18ObjectSpecialActor@ha
/* 804377B8 004346F8  38 80 00 00 */	li r4, 0
/* 804377BC 004346FC  38 A5 C8 2C */	addi r5, r5, __vt__Q34Game5P2JST18ObjectSpecialActor@l
/* 804377C0 00434700  90 BE 00 00 */	stw r5, 0(r30)
/* 804377C4 00434704  38 05 00 8C */	addi r0, r5, 0x8c
/* 804377C8 00434708  90 1E 00 04 */	stw r0, 4(r30)
/* 804377CC 0043470C  4B FF 72 65 */	bl __dt__Q34Game5P2JST11ObjectActorFv
/* 804377D0 00434710  7F E0 07 35 */	extsh. r0, r31
/* 804377D4 00434714  40 81 00 0C */	ble .L_804377E0
/* 804377D8 00434718  7F C3 F3 78 */	mr r3, r30
/* 804377DC 0043471C  4B BE C8 D9 */	bl __dl__FPv
.L_804377E0:
/* 804377E0 00434720  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804377E4 00434724  7F C3 F3 78 */	mr r3, r30
/* 804377E8 00434728  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804377EC 0043472C  83 C1 00 08 */	lwz r30, 8(r1)
/* 804377F0 00434730  7C 08 03 A6 */	mtlr r0
/* 804377F4 00434734  38 21 00 10 */	addi r1, r1, 0x10
/* 804377F8 00434738  4E 80 00 20 */	blr 

__sinit_JSTObjectSpecialActor_cpp: # static initializer
/* 804377FC 0043473C  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80437800 00434740  38 00 FF FF */	li r0, -1
/* 80437804 00434744  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80437808 00434748  3C 60 80 4F */	lis r3, govNAN___Q24Game5P2JST@ha
/* 8043780C 0043474C  90 0D 9B C8 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 80437810 00434750  D4 03 C8 20 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 80437814 00434754  D0 0D 9B CC */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 80437818 00434758  D0 03 00 04 */	stfs f0, 4(r3)
/* 8043781C 0043475C  D0 03 00 08 */	stfs f0, 8(r3)
/* 80437820 00434760  4E 80 00 20 */	blr 

.global "@4@parseUserData___Q34Game5P2JST18ObjectSpecialActorFUlPCv"
"@4@parseUserData___Q34Game5P2JST18ObjectSpecialActorFUlPCv":
/* 80437824 00434764  38 63 FF FC */	addi r3, r3, -4
/* 80437828 00434768  4B FF FF 68 */	b parseUserData___Q34Game5P2JST18ObjectSpecialActorFUlPCv

.global "@4@stop__Q34Game5P2JST18ObjectSpecialActorFv"
"@4@stop__Q34Game5P2JST18ObjectSpecialActorFv":
/* 8043782C 0043476C  38 63 FF FC */	addi r3, r3, -4
/* 80437830 00434770  4B FF FC 84 */	b stop__Q34Game5P2JST18ObjectSpecialActorFv

.global "@4@update__Q34Game5P2JST18ObjectSpecialActorFv"
"@4@update__Q34Game5P2JST18ObjectSpecialActorFv":
/* 80437834 00434774  38 63 FF FC */	addi r3, r3, -4
/* 80437838 00434778  4B FF FC 80 */	b update__Q34Game5P2JST18ObjectSpecialActorFv

.global "@4@reset__Q34Game5P2JST18ObjectSpecialActorFv"
"@4@reset__Q34Game5P2JST18ObjectSpecialActorFv":
/* 8043783C 0043477C  38 63 FF FC */	addi r3, r3, -4
/* 80437840 00434780  4B FF FC 18 */	b reset__Q34Game5P2JST18ObjectSpecialActorFv
