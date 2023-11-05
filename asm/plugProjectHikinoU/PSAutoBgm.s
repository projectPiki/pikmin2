.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8048FE60, local
	.asciz "PSAutoBgm.cpp"
.endobj lbl_8048FE60
.balign 4
.obj lbl_8048FE70, local
	.asciz "P2Assert"
.endobj lbl_8048FE70
.balign 4
.obj lbl_8048FE7C, local # Shift-JIS
	.4byte 0x8386836A
	.4byte 0x835D8393
	.4byte 0x837D8358
	.4byte 0x835E815B
	.4byte 0x83678389
	.4byte 0x8362834E
	.4byte 0x82CD8386
	.4byte 0x836A835D
	.4byte 0x83938367
	.4byte 0x83898362
	.4byte 0x834E82E6
	.4byte 0x82E88EE1
	.4byte 0x82A294D4
	.4byte 0x8D8682CC
	.4byte 0x83678389
	.4byte 0x8362834E
	.4byte 0x82C582A0
	.4byte 0x82E9954B
	.4byte 0x977682AA
	.4byte 0x82A082E8
	.4byte 0x82DC82B7
	.byte 0
.endobj lbl_8048FE7C
.balign 4
.obj lbl_8048FED4, local
	.asciz "PSAutoBgm.h"
.endobj lbl_8048FED4
.balign 4
.obj lbl_8048FEE0, local
	.asciz "not find(%s)"
.endobj lbl_8048FEE0

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q29PSAutoBgm7AutoBgm, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q29PSAutoBgm7AutoBgmFv
	.4byte init__Q28PSSystem11DirectedBgmFv
	.4byte scene1st__Q29PSAutoBgm7AutoBgmFPQ28PSSystem11TaskChecker
	.4byte startSeq__Q29PSAutoBgm7AutoBgmFv
	.4byte stopSeq__Q28PSSystem11DirectedBgmFUl
	.4byte pauseOn__Q29PSAutoBgm7AutoBgmFQ38PSSystem7SeqBase9PauseMode
	.4byte pauseOff__Q29PSAutoBgm7AutoBgmFv
	.4byte getCastType__Q29PSAutoBgm7AutoBgmFv
	.4byte getSeqType__Q28PSSystem6BgmSeqFv
	.4byte exec__Q28PSSystem7SeqBaseFv
	.4byte onPlayingFrame__Q28PSSystem11DirectedBgmFv
	.4byte isPlaying__Q28PSSystem7SeqBaseFv
	.4byte seqLoadAfter__Q28PSSystem7SeqBaseFv
	.4byte getHandleP__Q28PSSystem6BgmSeqFv
	.4byte setConfigVolume__Q28PSSystem7SeqBaseFv
	.4byte newSeqTrackRoot__Q29PSAutoBgm7AutoBgmFv
	.4byte newSeqTrackChild__Q28PSSystem11DirectedBgmFUcRQ28PSSystem12SeqTrackRoot
.endobj __vt__Q29PSAutoBgm7AutoBgm
.obj __vt__Q29PSAutoBgm19AutoBgmSeqTrackRoot, weak
	.4byte 0
	.4byte 0
	.4byte update__Q28PSSystem12SeqTrackRootFv
	.4byte init__Q28PSSystem12SeqTrackRootFP8JASTrack
	.4byte onStopSeq__Q28PSSystem12SeqTrackRootFv
	.4byte beatUpdate__Q29PSAutoBgm19AutoBgmSeqTrackRootFv
	.4byte onBeatTop__Q28PSSystem12SeqTrackRootFv
.endobj __vt__Q29PSAutoBgm19AutoBgmSeqTrackRoot
.obj __vt__Q29PSAutoBgm10MeloArrMgr, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q29PSAutoBgm10MeloArrMgrFv
.endobj __vt__Q29PSAutoBgm10MeloArrMgr
.obj __vt__Q29PSAutoBgm12ConductorMgr, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q29PSAutoBgm12ConductorMgrFv
	.4byte isTempBuffaMode__Q210JADUtility15DataLoadMgrNodeFv
	.4byte init__Q210JADUtility11DataMgrNodeFv
	.4byte getObjHeap__Q29PSAutoBgm12ConductorMgrFv
	.4byte getDataHeap__Q29PSAutoBgm12ConductorMgrFv
	.4byte "initInstance__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>FPvl"
	.4byte "initInstance__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>Fv"
	.4byte getPath__Q210JADUtility11DataMgrNodeFv
	.4byte setPath__Q210JADUtility11DataMgrNodeFPc
	.4byte getSaveTempHeap__Q29PSAutoBgm12ConductorMgrFv
	.4byte 0
	.4byte 0
	.4byte "@600@28@__dt__Q29PSAutoBgm12ConductorMgrFv"
	.4byte "@600@28@init__Q210JADUtility11DataMgrNodeFv"
.endobj __vt__Q29PSAutoBgm12ConductorMgr
.obj "__vt__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>Fv"
	.4byte isTempBuffaMode__Q210JADUtility15DataLoadMgrNodeFv
	.4byte init__Q210JADUtility11DataMgrNodeFv
	.4byte 0
	.4byte 0
	.4byte "initInstance__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>FPvl"
	.4byte "initInstance__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>Fv"
	.4byte getPath__Q210JADUtility11DataMgrNodeFv
	.4byte setPath__Q210JADUtility11DataMgrNodeFPc
	.4byte 0
	.4byte 0
	.4byte "@600@28@__dt__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>Fv"
	.4byte "@600@28@init__Q210JADUtility11DataMgrNodeFv"
.endobj "__vt__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>"
.obj __vt__Q29PSAutoBgm8OffCycle, weak
	.4byte 0
	.4byte 0
	.4byte play__Q29PSAutoBgm9CycleBaseFP8JASTrack
	.4byte getCycleType__Q29PSAutoBgm9CycleBaseFv
	.4byte avoidCheck__Q29PSAutoBgm9CycleBaseFv
.endobj __vt__Q29PSAutoBgm8OffCycle
.obj __vt__Q29PSAutoBgm7OnCycle, global
	.4byte 0
	.4byte 0
	.4byte play__Q29PSAutoBgm7OnCycleFP8JASTrack
	.4byte getCycleType__Q29PSAutoBgm7OnCycleFv
	.4byte avoidCheck__Q29PSAutoBgm7OnCycleFv
.endobj __vt__Q29PSAutoBgm7OnCycle
.obj __vt__Q29PSAutoBgm9CycleBase, global
	.4byte 0
	.4byte 0
	.4byte play__Q29PSAutoBgm9CycleBaseFP8JASTrack
	.4byte getCycleType__Q29PSAutoBgm9CycleBaseFv
	.4byte avoidCheck__Q29PSAutoBgm9CycleBaseFv
.endobj __vt__Q29PSAutoBgm9CycleBase
.obj __vt__Q29PSAutoBgm6Module, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q29PSAutoBgm6ModuleFv
	.4byte appendAfter__Q210JADUtility10PrmSetBaseFv
	.4byte load__Q210JADUtility10PrmSetBaseFR20JSUMemoryInputStream
	.4byte afterRemovingChildButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
	.4byte afterRemovingThisButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
	.4byte getEraseLink__Q210JADUtility10PrmSetBaseFv
	.4byte afterGetFromFree__Q29PSAutoBgm6ModuleFv
.endobj __vt__Q29PSAutoBgm6Module
.obj __vt__Q29PSAutoBgm5Track, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q29PSAutoBgm5TrackFv
	.4byte appendAfter__Q210JADUtility10PrmSetBaseFv
	.4byte "load__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FR20JSUMemoryInputStream"
	.4byte afterRemovingChildButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
	.4byte afterRemovingThisButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
	.4byte getEraseLink__Q210JADUtility10PrmSetBaseFv
	.4byte afterGetFromFree__Q29PSAutoBgm5TrackFv
	.4byte "getPrmObjHeap__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>Fv"
.endobj __vt__Q29PSAutoBgm5Track
.obj "__vt__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>Fv"
	.4byte appendAfter__Q210JADUtility10PrmSetBaseFv
	.4byte "load__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FR20JSUMemoryInputStream"
	.4byte afterRemovingChildButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
	.4byte afterRemovingThisButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
	.4byte getEraseLink__Q210JADUtility10PrmSetBaseFv
	.4byte afterGetFromFree__Q210JADUtility10PrmSetBaseFv
	.4byte "getPrmObjHeap__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>Fv"
.endobj "__vt__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>"
.obj __vt__Q210JADUtility10StrEditBox, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q210JADUtility10StrEditBoxFv
	.4byte save__Q210JADUtility6StrPrmFR21JSUMemoryOutputStream
	.4byte load__Q210JADUtility6StrPrmFR20JSUMemoryInputStream
.endobj __vt__Q210JADUtility10StrEditBox
.obj "__vt__Q210JADUtility12PrmSlider<s>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__Q210JADUtility12PrmSlider<s>Fv"
	.4byte "save__Q210JADUtility6Prm<s>FR21JSUMemoryOutputStream"
	.4byte "load__Q210JADUtility6Prm<s>FR20JSUMemoryInputStream"
.endobj "__vt__Q210JADUtility12PrmSlider<s>"
.obj "__vt__Q210JADUtility9PrmHio<s>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__Q210JADUtility9PrmHio<s>Fv"
	.4byte "save__Q210JADUtility6Prm<s>FR21JSUMemoryOutputStream"
	.4byte "load__Q210JADUtility6Prm<s>FR20JSUMemoryInputStream"
.endobj "__vt__Q210JADUtility9PrmHio<s>"
.obj "__vt__Q210JADUtility6Prm<s>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__Q210JADUtility6Prm<s>Fv"
	.4byte "save__Q210JADUtility6Prm<s>FR21JSUMemoryOutputStream"
	.4byte "load__Q210JADUtility6Prm<s>FR20JSUMemoryInputStream"
.endobj "__vt__Q210JADUtility6Prm<s>"
.obj __vt__Q29PSAutoBgm9Conductor, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q29PSAutoBgm9ConductorFv
	.4byte appendAfter__Q210JADUtility10PrmSetBaseFv
	.4byte "load__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>FR20JSUMemoryInputStream"
	.4byte afterRemovingChildButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
	.4byte afterRemovingThisButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
	.4byte getEraseLink__Q29PSAutoBgm9ConductorFv
	.4byte afterGetFromFree__Q210JADUtility10PrmSetBaseFv
	.4byte "getPrmObjHeap__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>Fv"
.endobj __vt__Q29PSAutoBgm9Conductor
.obj "__vt__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>Fv"
	.4byte appendAfter__Q210JADUtility10PrmSetBaseFv
	.4byte "load__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>FR20JSUMemoryInputStream"
	.4byte afterRemovingChildButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
	.4byte afterRemovingThisButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
	.4byte getEraseLink__Q210JADUtility10PrmSetBaseFv
	.4byte afterGetFromFree__Q210JADUtility10PrmSetBaseFv
	.4byte "getPrmObjHeap__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>Fv"
.endobj "__vt__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>"
.obj "__vt__Q210JADUtility18PrmRadioButton<Uc>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__Q210JADUtility18PrmRadioButton<Uc>Fv"
	.4byte "save__Q210JADUtility7Prm<Uc>FR21JSUMemoryOutputStream"
	.4byte "load__Q210JADUtility7Prm<Uc>FR20JSUMemoryInputStream"
.endobj "__vt__Q210JADUtility18PrmRadioButton<Uc>"
.obj "__vt__Q210JADUtility13PrmSlider<Uc>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__Q210JADUtility13PrmSlider<Uc>Fv"
	.4byte "save__Q210JADUtility7Prm<Uc>FR21JSUMemoryOutputStream"
	.4byte "load__Q210JADUtility7Prm<Uc>FR20JSUMemoryInputStream"
.endobj "__vt__Q210JADUtility13PrmSlider<Uc>"
.obj "__vt__Q210JADUtility10PrmHio<Uc>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__Q210JADUtility10PrmHio<Uc>Fv"
	.4byte "save__Q210JADUtility7Prm<Uc>FR21JSUMemoryOutputStream"
	.4byte "load__Q210JADUtility7Prm<Uc>FR20JSUMemoryInputStream"
.endobj "__vt__Q210JADUtility10PrmHio<Uc>"
.obj "__vt__Q210JADUtility7Prm<Uc>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__Q210JADUtility7Prm<Uc>Fv"
	.4byte "save__Q210JADUtility7Prm<Uc>FR21JSUMemoryOutputStream"
	.4byte "load__Q210JADUtility7Prm<Uc>FR20JSUMemoryInputStream"
.endobj "__vt__Q210JADUtility7Prm<Uc>"

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj sHeap__Q29PSAutoBgm12ConductorMgr, global
	.skip 0x4
.endobj sHeap__Q29PSAutoBgm12ConductorMgr
.obj sInstance__Q29PSAutoBgm15ConductorArcMgr, global
	.skip 0x4
.endobj sInstance__Q29PSAutoBgm15ConductorArcMgr

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051E160, local
	.asciz "\0"
.endobj lbl_8051E160
.balign 4
.obj lbl_8051E164, local
	.float 127.0
.endobj lbl_8051E164
.obj lbl_8051E168, local
	.float 0.0
.endobj lbl_8051E168
.obj lbl_8051E16C, local
	.float 1.0
.endobj lbl_8051E16C
.balign 8
.obj lbl_8051E170, local
	.8byte 0x4330000000000000
.endobj lbl_8051E170

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn "__dt__Q210JADUtility18PrmRadioButton<Uc>Fv", weak
/* 80338DB4 00335CF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80338DB8 00335CF8  7C 08 02 A6 */	mflr r0
/* 80338DBC 00335CFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80338DC0 00335D00  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80338DC4 00335D04  7C 9F 23 78 */	mr r31, r4
/* 80338DC8 00335D08  93 C1 00 08 */	stw r30, 8(r1)
/* 80338DCC 00335D0C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80338DD0 00335D10  41 82 00 70 */	beq .L_80338E40
/* 80338DD4 00335D14  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@ha
/* 80338DD8 00335D18  38 03 AD 18 */	addi r0, r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@l
/* 80338DDC 00335D1C  90 1E 00 00 */	stw r0, 0(r30)
/* 80338DE0 00335D20  41 82 00 50 */	beq .L_80338E30
/* 80338DE4 00335D24  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 80338DE8 00335D28  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 80338DEC 00335D2C  90 1E 00 00 */	stw r0, 0(r30)
/* 80338DF0 00335D30  41 82 00 40 */	beq .L_80338E30
/* 80338DF4 00335D34  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 80338DF8 00335D38  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 80338DFC 00335D3C  90 1E 00 00 */	stw r0, 0(r30)
/* 80338E00 00335D40  41 82 00 30 */	beq .L_80338E30
/* 80338E04 00335D44  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 80338E08 00335D48  34 1E 00 1C */	addic. r0, r30, 0x1c
/* 80338E0C 00335D4C  38 03 67 74 */	addi r0, r3, __vt__Q210JADUtility7PrmBase@l
/* 80338E10 00335D50  90 1E 00 00 */	stw r0, 0(r30)
/* 80338E14 00335D54  41 82 00 10 */	beq .L_80338E24
/* 80338E18 00335D58  38 7E 00 1C */	addi r3, r30, 0x1c
/* 80338E1C 00335D5C  38 80 00 00 */	li r4, 0
/* 80338E20 00335D60  4B CE D9 B1 */	bl __dt__10JSUPtrLinkFv
.L_80338E24:
/* 80338E24 00335D64  7F C3 F3 78 */	mr r3, r30
/* 80338E28 00335D68  38 80 00 00 */	li r4, 0
/* 80338E2C 00335D6C  4B CE 42 09 */	bl __dt__11JKRDisposerFv
.L_80338E30:
/* 80338E30 00335D70  7F E0 07 35 */	extsh. r0, r31
/* 80338E34 00335D74  40 81 00 0C */	ble .L_80338E40
/* 80338E38 00335D78  7F C3 F3 78 */	mr r3, r30
/* 80338E3C 00335D7C  4B CE B2 79 */	bl __dl__FPv
.L_80338E40:
/* 80338E40 00335D80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80338E44 00335D84  7F C3 F3 78 */	mr r3, r30
/* 80338E48 00335D88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80338E4C 00335D8C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80338E50 00335D90  7C 08 03 A6 */	mtlr r0
/* 80338E54 00335D94  38 21 00 10 */	addi r1, r1, 0x10
/* 80338E58 00335D98  4E 80 00 20 */	blr 
.endfn "__dt__Q210JADUtility18PrmRadioButton<Uc>Fv"

.fn "__dt__Q210JADUtility13PrmSlider<Uc>Fv", weak
/* 80338E5C 00335D9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80338E60 00335DA0  7C 08 02 A6 */	mflr r0
/* 80338E64 00335DA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80338E68 00335DA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80338E6C 00335DAC  7C 9F 23 78 */	mr r31, r4
/* 80338E70 00335DB0  93 C1 00 08 */	stw r30, 8(r1)
/* 80338E74 00335DB4  7C 7E 1B 79 */	or. r30, r3, r3
/* 80338E78 00335DB8  41 82 00 70 */	beq .L_80338EE8
/* 80338E7C 00335DBC  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
/* 80338E80 00335DC0  38 03 AD 2C */	addi r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
/* 80338E84 00335DC4  90 1E 00 00 */	stw r0, 0(r30)
/* 80338E88 00335DC8  41 82 00 50 */	beq .L_80338ED8
/* 80338E8C 00335DCC  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 80338E90 00335DD0  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 80338E94 00335DD4  90 1E 00 00 */	stw r0, 0(r30)
/* 80338E98 00335DD8  41 82 00 40 */	beq .L_80338ED8
/* 80338E9C 00335DDC  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 80338EA0 00335DE0  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 80338EA4 00335DE4  90 1E 00 00 */	stw r0, 0(r30)
/* 80338EA8 00335DE8  41 82 00 30 */	beq .L_80338ED8
/* 80338EAC 00335DEC  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 80338EB0 00335DF0  34 1E 00 1C */	addic. r0, r30, 0x1c
/* 80338EB4 00335DF4  38 03 67 74 */	addi r0, r3, __vt__Q210JADUtility7PrmBase@l
/* 80338EB8 00335DF8  90 1E 00 00 */	stw r0, 0(r30)
/* 80338EBC 00335DFC  41 82 00 10 */	beq .L_80338ECC
/* 80338EC0 00335E00  38 7E 00 1C */	addi r3, r30, 0x1c
/* 80338EC4 00335E04  38 80 00 00 */	li r4, 0
/* 80338EC8 00335E08  4B CE D9 09 */	bl __dt__10JSUPtrLinkFv
.L_80338ECC:
/* 80338ECC 00335E0C  7F C3 F3 78 */	mr r3, r30
/* 80338ED0 00335E10  38 80 00 00 */	li r4, 0
/* 80338ED4 00335E14  4B CE 41 61 */	bl __dt__11JKRDisposerFv
.L_80338ED8:
/* 80338ED8 00335E18  7F E0 07 35 */	extsh. r0, r31
/* 80338EDC 00335E1C  40 81 00 0C */	ble .L_80338EE8
/* 80338EE0 00335E20  7F C3 F3 78 */	mr r3, r30
/* 80338EE4 00335E24  4B CE B1 D1 */	bl __dl__FPv
.L_80338EE8:
/* 80338EE8 00335E28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80338EEC 00335E2C  7F C3 F3 78 */	mr r3, r30
/* 80338EF0 00335E30  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80338EF4 00335E34  83 C1 00 08 */	lwz r30, 8(r1)
/* 80338EF8 00335E38  7C 08 03 A6 */	mtlr r0
/* 80338EFC 00335E3C  38 21 00 10 */	addi r1, r1, 0x10
/* 80338F00 00335E40  4E 80 00 20 */	blr 
.endfn "__dt__Q210JADUtility13PrmSlider<Uc>Fv"

.fn "__dt__Q210JADUtility10PrmHio<Uc>Fv", weak
/* 80338F04 00335E44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80338F08 00335E48  7C 08 02 A6 */	mflr r0
/* 80338F0C 00335E4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80338F10 00335E50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80338F14 00335E54  7C 9F 23 78 */	mr r31, r4
/* 80338F18 00335E58  93 C1 00 08 */	stw r30, 8(r1)
/* 80338F1C 00335E5C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80338F20 00335E60  41 82 00 60 */	beq .L_80338F80
/* 80338F24 00335E64  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 80338F28 00335E68  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 80338F2C 00335E6C  90 1E 00 00 */	stw r0, 0(r30)
/* 80338F30 00335E70  41 82 00 40 */	beq .L_80338F70
/* 80338F34 00335E74  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 80338F38 00335E78  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 80338F3C 00335E7C  90 1E 00 00 */	stw r0, 0(r30)
/* 80338F40 00335E80  41 82 00 30 */	beq .L_80338F70
/* 80338F44 00335E84  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 80338F48 00335E88  34 1E 00 1C */	addic. r0, r30, 0x1c
/* 80338F4C 00335E8C  38 03 67 74 */	addi r0, r3, __vt__Q210JADUtility7PrmBase@l
/* 80338F50 00335E90  90 1E 00 00 */	stw r0, 0(r30)
/* 80338F54 00335E94  41 82 00 10 */	beq .L_80338F64
/* 80338F58 00335E98  38 7E 00 1C */	addi r3, r30, 0x1c
/* 80338F5C 00335E9C  38 80 00 00 */	li r4, 0
/* 80338F60 00335EA0  4B CE D8 71 */	bl __dt__10JSUPtrLinkFv
.L_80338F64:
/* 80338F64 00335EA4  7F C3 F3 78 */	mr r3, r30
/* 80338F68 00335EA8  38 80 00 00 */	li r4, 0
/* 80338F6C 00335EAC  4B CE 40 C9 */	bl __dt__11JKRDisposerFv
.L_80338F70:
/* 80338F70 00335EB0  7F E0 07 35 */	extsh. r0, r31
/* 80338F74 00335EB4  40 81 00 0C */	ble .L_80338F80
/* 80338F78 00335EB8  7F C3 F3 78 */	mr r3, r30
/* 80338F7C 00335EBC  4B CE B1 39 */	bl __dl__FPv
.L_80338F80:
/* 80338F80 00335EC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80338F84 00335EC4  7F C3 F3 78 */	mr r3, r30
/* 80338F88 00335EC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80338F8C 00335ECC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80338F90 00335ED0  7C 08 03 A6 */	mtlr r0
/* 80338F94 00335ED4  38 21 00 10 */	addi r1, r1, 0x10
/* 80338F98 00335ED8  4E 80 00 20 */	blr 
.endfn "__dt__Q210JADUtility10PrmHio<Uc>Fv"

.fn "__dt__Q210JADUtility7Prm<Uc>Fv", weak
/* 80338F9C 00335EDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80338FA0 00335EE0  7C 08 02 A6 */	mflr r0
/* 80338FA4 00335EE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80338FA8 00335EE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80338FAC 00335EEC  7C 9F 23 78 */	mr r31, r4
/* 80338FB0 00335EF0  93 C1 00 08 */	stw r30, 8(r1)
/* 80338FB4 00335EF4  7C 7E 1B 79 */	or. r30, r3, r3
/* 80338FB8 00335EF8  41 82 00 50 */	beq .L_80339008
/* 80338FBC 00335EFC  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 80338FC0 00335F00  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 80338FC4 00335F04  90 1E 00 00 */	stw r0, 0(r30)
/* 80338FC8 00335F08  41 82 00 30 */	beq .L_80338FF8
/* 80338FCC 00335F0C  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 80338FD0 00335F10  34 1E 00 1C */	addic. r0, r30, 0x1c
/* 80338FD4 00335F14  38 03 67 74 */	addi r0, r3, __vt__Q210JADUtility7PrmBase@l
/* 80338FD8 00335F18  90 1E 00 00 */	stw r0, 0(r30)
/* 80338FDC 00335F1C  41 82 00 10 */	beq .L_80338FEC
/* 80338FE0 00335F20  38 7E 00 1C */	addi r3, r30, 0x1c
/* 80338FE4 00335F24  38 80 00 00 */	li r4, 0
/* 80338FE8 00335F28  4B CE D7 E9 */	bl __dt__10JSUPtrLinkFv
.L_80338FEC:
/* 80338FEC 00335F2C  7F C3 F3 78 */	mr r3, r30
/* 80338FF0 00335F30  38 80 00 00 */	li r4, 0
/* 80338FF4 00335F34  4B CE 40 41 */	bl __dt__11JKRDisposerFv
.L_80338FF8:
/* 80338FF8 00335F38  7F E0 07 35 */	extsh. r0, r31
/* 80338FFC 00335F3C  40 81 00 0C */	ble .L_80339008
/* 80339000 00335F40  7F C3 F3 78 */	mr r3, r30
/* 80339004 00335F44  4B CE B0 B1 */	bl __dl__FPv
.L_80339008:
/* 80339008 00335F48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033900C 00335F4C  7F C3 F3 78 */	mr r3, r30
/* 80339010 00335F50  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80339014 00335F54  83 C1 00 08 */	lwz r30, 8(r1)
/* 80339018 00335F58  7C 08 03 A6 */	mtlr r0
/* 8033901C 00335F5C  38 21 00 10 */	addi r1, r1, 0x10
/* 80339020 00335F60  4E 80 00 20 */	blr 
.endfn "__dt__Q210JADUtility7Prm<Uc>Fv"

.fn __dt__Q29PSAutoBgm9ConductorFv, global
/* 80339024 00335F64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80339028 00335F68  7C 08 02 A6 */	mflr r0
/* 8033902C 00335F6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80339030 00335F70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80339034 00335F74  7C 9F 23 78 */	mr r31, r4
/* 80339038 00335F78  93 C1 00 08 */	stw r30, 8(r1)
/* 8033903C 00335F7C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80339040 00335F80  41 82 02 58 */	beq .L_80339298
/* 80339044 00335F84  3C 60 80 4E */	lis r3, __vt__Q29PSAutoBgm9Conductor@ha
/* 80339048 00335F88  34 1E 00 E8 */	addic. r0, r30, 0xe8
/* 8033904C 00335F8C  38 03 AC C8 */	addi r0, r3, __vt__Q29PSAutoBgm9Conductor@l
/* 80339050 00335F90  90 1E 00 00 */	stw r0, 0(r30)
/* 80339054 00335F94  41 82 00 68 */	beq .L_803390BC
/* 80339058 00335F98  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@ha
/* 8033905C 00335F9C  34 1E 00 E8 */	addic. r0, r30, 0xe8
/* 80339060 00335FA0  38 03 AD 18 */	addi r0, r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@l
/* 80339064 00335FA4  90 1E 00 E8 */	stw r0, 0xe8(r30)
/* 80339068 00335FA8  41 82 00 54 */	beq .L_803390BC
/* 8033906C 00335FAC  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 80339070 00335FB0  34 1E 00 E8 */	addic. r0, r30, 0xe8
/* 80339074 00335FB4  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 80339078 00335FB8  90 1E 00 E8 */	stw r0, 0xe8(r30)
/* 8033907C 00335FBC  41 82 00 40 */	beq .L_803390BC
/* 80339080 00335FC0  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 80339084 00335FC4  34 1E 00 E8 */	addic. r0, r30, 0xe8
/* 80339088 00335FC8  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 8033908C 00335FCC  90 1E 00 E8 */	stw r0, 0xe8(r30)
/* 80339090 00335FD0  41 82 00 2C */	beq .L_803390BC
/* 80339094 00335FD4  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 80339098 00335FD8  34 7E 01 04 */	addic. r3, r30, 0x104
/* 8033909C 00335FDC  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 803390A0 00335FE0  90 1E 00 E8 */	stw r0, 0xe8(r30)
/* 803390A4 00335FE4  41 82 00 0C */	beq .L_803390B0
/* 803390A8 00335FE8  38 80 00 00 */	li r4, 0
/* 803390AC 00335FEC  4B CE D7 25 */	bl __dt__10JSUPtrLinkFv
.L_803390B0:
/* 803390B0 00335FF0  38 7E 00 E8 */	addi r3, r30, 0xe8
/* 803390B4 00335FF4  38 80 00 00 */	li r4, 0
/* 803390B8 00335FF8  4B CE 3F 7D */	bl __dt__11JKRDisposerFv
.L_803390BC:
/* 803390BC 00335FFC  34 1E 00 B8 */	addic. r0, r30, 0xb8
/* 803390C0 00336000  41 82 00 68 */	beq .L_80339128
/* 803390C4 00336004  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
/* 803390C8 00336008  34 1E 00 B8 */	addic. r0, r30, 0xb8
/* 803390CC 0033600C  38 03 AD 2C */	addi r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
/* 803390D0 00336010  90 1E 00 B8 */	stw r0, 0xb8(r30)
/* 803390D4 00336014  41 82 00 54 */	beq .L_80339128
/* 803390D8 00336018  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 803390DC 0033601C  34 1E 00 B8 */	addic. r0, r30, 0xb8
/* 803390E0 00336020  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 803390E4 00336024  90 1E 00 B8 */	stw r0, 0xb8(r30)
/* 803390E8 00336028  41 82 00 40 */	beq .L_80339128
/* 803390EC 0033602C  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 803390F0 00336030  34 1E 00 B8 */	addic. r0, r30, 0xb8
/* 803390F4 00336034  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 803390F8 00336038  90 1E 00 B8 */	stw r0, 0xb8(r30)
/* 803390FC 0033603C  41 82 00 2C */	beq .L_80339128
/* 80339100 00336040  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 80339104 00336044  34 7E 00 D4 */	addic. r3, r30, 0xd4
/* 80339108 00336048  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 8033910C 0033604C  90 1E 00 B8 */	stw r0, 0xb8(r30)
/* 80339110 00336050  41 82 00 0C */	beq .L_8033911C
/* 80339114 00336054  38 80 00 00 */	li r4, 0
/* 80339118 00336058  4B CE D6 B9 */	bl __dt__10JSUPtrLinkFv
.L_8033911C:
/* 8033911C 0033605C  38 7E 00 B8 */	addi r3, r30, 0xb8
/* 80339120 00336060  38 80 00 00 */	li r4, 0
/* 80339124 00336064  4B CE 3F 11 */	bl __dt__11JKRDisposerFv
.L_80339128:
/* 80339128 00336068  34 1E 00 98 */	addic. r0, r30, 0x98
/* 8033912C 0033606C  41 82 00 10 */	beq .L_8033913C
/* 80339130 00336070  38 7E 00 98 */	addi r3, r30, 0x98
/* 80339134 00336074  38 80 00 00 */	li r4, 0
/* 80339138 00336078  4B CE D6 99 */	bl __dt__10JSUPtrLinkFv
.L_8033913C:
/* 8033913C 0033607C  28 1E 00 00 */	cmplwi r30, 0
/* 80339140 00336080  41 82 01 48 */	beq .L_80339288
/* 80339144 00336084  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>"@ha
/* 80339148 00336088  38 03 AC F0 */	addi r0, r3, "__vt__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>"@l
/* 8033914C 0033608C  90 1E 00 00 */	stw r0, 0(r30)
/* 80339150 00336090  48 00 00 24 */	b .L_80339174
.L_80339154:
/* 80339154 00336094  28 04 00 00 */	cmplwi r4, 0
/* 80339158 00336098  41 82 00 08 */	beq .L_80339160
/* 8033915C 0033609C  38 84 FF F4 */	addi r4, r4, -12
.L_80339160:
/* 80339160 003360A0  28 04 00 00 */	cmplwi r4, 0
/* 80339164 003360A4  41 82 00 08 */	beq .L_8033916C
/* 80339168 003360A8  38 84 00 0C */	addi r4, r4, 0xc
.L_8033916C:
/* 8033916C 003360AC  38 7E 00 2C */	addi r3, r30, 0x2c
/* 80339170 003360B0  4B CE DA B5 */	bl remove__10JSUPtrListFP10JSUPtrLink
.L_80339174:
/* 80339174 003360B4  80 9E 00 2C */	lwz r4, 0x2c(r30)
/* 80339178 003360B8  28 04 00 00 */	cmplwi r4, 0
/* 8033917C 003360BC  7C 80 23 78 */	mr r0, r4
/* 80339180 003360C0  41 82 00 08 */	beq .L_80339188
/* 80339184 003360C4  38 04 FF F4 */	addi r0, r4, -12
.L_80339188:
/* 80339188 003360C8  28 00 00 00 */	cmplwi r0, 0
/* 8033918C 003360CC  40 82 FF C8 */	bne .L_80339154
/* 80339190 003360D0  3C 80 80 34 */	lis r4, __dt__Q29PSAutoBgm5TrackFv@ha
/* 80339194 003360D4  80 7E 00 64 */	lwz r3, 0x64(r30)
/* 80339198 003360D8  38 84 97 D8 */	addi r4, r4, __dt__Q29PSAutoBgm5TrackFv@l
/* 8033919C 003360DC  4B D8 85 AD */	bl __destroy_new_array
/* 803391A0 003360E0  34 1E 00 68 */	addic. r0, r30, 0x68
/* 803391A4 003360E4  41 82 00 40 */	beq .L_803391E4
/* 803391A8 003360E8  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 803391AC 003360EC  34 1E 00 68 */	addic. r0, r30, 0x68
/* 803391B0 003360F0  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 803391B4 003360F4  90 1E 00 68 */	stw r0, 0x68(r30)
/* 803391B8 003360F8  41 82 00 2C */	beq .L_803391E4
/* 803391BC 003360FC  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 803391C0 00336100  34 7E 00 84 */	addic. r3, r30, 0x84
/* 803391C4 00336104  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 803391C8 00336108  90 1E 00 68 */	stw r0, 0x68(r30)
/* 803391CC 0033610C  41 82 00 0C */	beq .L_803391D8
/* 803391D0 00336110  38 80 00 00 */	li r4, 0
/* 803391D4 00336114  4B CE D5 FD */	bl __dt__10JSUPtrLinkFv
.L_803391D8:
/* 803391D8 00336118  38 7E 00 68 */	addi r3, r30, 0x68
/* 803391DC 0033611C  38 80 00 00 */	li r4, 0
/* 803391E0 00336120  4B CE 3E 55 */	bl __dt__11JKRDisposerFv
.L_803391E4:
/* 803391E4 00336124  28 1E 00 00 */	cmplwi r30, 0
/* 803391E8 00336128  41 82 00 A0 */	beq .L_80339288
/* 803391EC 0033612C  3C 60 80 4A */	lis r3, __vt__Q210JADUtility10PrmSetBase@ha
/* 803391F0 00336130  38 03 66 E0 */	addi r0, r3, __vt__Q210JADUtility10PrmSetBase@l
/* 803391F4 00336134  90 1E 00 00 */	stw r0, 0(r30)
/* 803391F8 00336138  48 00 00 0C */	b .L_80339204
.L_803391FC:
/* 803391FC 0033613C  38 7E 00 1C */	addi r3, r30, 0x1c
/* 80339200 00336140  4B CE DA 25 */	bl remove__10JSUPtrListFP10JSUPtrLink
.L_80339204:
/* 80339204 00336144  80 9E 00 1C */	lwz r4, 0x1c(r30)
/* 80339208 00336148  28 04 00 00 */	cmplwi r4, 0
/* 8033920C 0033614C  40 82 FF F0 */	bne .L_803391FC
/* 80339210 00336150  34 1E 00 2C */	addic. r0, r30, 0x2c
/* 80339214 00336154  41 82 00 54 */	beq .L_80339268
/* 80339218 00336158  3C 60 80 4A */	lis r3, __vt__Q210JADUtility10PrmSetTree@ha
/* 8033921C 0033615C  34 1E 00 2C */	addic. r0, r30, 0x2c
/* 80339220 00336160  38 03 67 04 */	addi r0, r3, __vt__Q210JADUtility10PrmSetTree@l
/* 80339224 00336164  90 1E 00 48 */	stw r0, 0x48(r30)
/* 80339228 00336168  41 82 00 40 */	beq .L_80339268
/* 8033922C 0033616C  3C 60 80 4A */	lis r3, "__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@ha
/* 80339230 00336170  34 1E 00 2C */	addic. r0, r30, 0x2c
/* 80339234 00336174  38 03 67 1C */	addi r0, r3, "__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@l
/* 80339238 00336178  90 1E 00 48 */	stw r0, 0x48(r30)
/* 8033923C 0033617C  41 82 00 2C */	beq .L_80339268
/* 80339240 00336180  34 1E 00 38 */	addic. r0, r30, 0x38
/* 80339244 00336184  41 82 00 10 */	beq .L_80339254
/* 80339248 00336188  38 7E 00 38 */	addi r3, r30, 0x38
/* 8033924C 0033618C  38 80 00 00 */	li r4, 0
/* 80339250 00336190  4B CE D5 81 */	bl __dt__10JSUPtrLinkFv
.L_80339254:
/* 80339254 00336194  34 1E 00 2C */	addic. r0, r30, 0x2c
/* 80339258 00336198  41 82 00 10 */	beq .L_80339268
/* 8033925C 0033619C  38 7E 00 2C */	addi r3, r30, 0x2c
/* 80339260 003361A0  38 80 00 00 */	li r4, 0
/* 80339264 003361A4  4B CE D6 05 */	bl __dt__10JSUPtrListFv
.L_80339268:
/* 80339268 003361A8  34 1E 00 1C */	addic. r0, r30, 0x1c
/* 8033926C 003361AC  41 82 00 10 */	beq .L_8033927C
/* 80339270 003361B0  38 7E 00 1C */	addi r3, r30, 0x1c
/* 80339274 003361B4  38 80 00 00 */	li r4, 0
/* 80339278 003361B8  4B CE D5 F1 */	bl __dt__10JSUPtrListFv
.L_8033927C:
/* 8033927C 003361BC  7F C3 F3 78 */	mr r3, r30
/* 80339280 003361C0  38 80 00 00 */	li r4, 0
/* 80339284 003361C4  4B CE 3D B1 */	bl __dt__11JKRDisposerFv
.L_80339288:
/* 80339288 003361C8  7F E0 07 35 */	extsh. r0, r31
/* 8033928C 003361CC  40 81 00 0C */	ble .L_80339298
/* 80339290 003361D0  7F C3 F3 78 */	mr r3, r30
/* 80339294 003361D4  4B CE AE 21 */	bl __dl__FPv
.L_80339298:
/* 80339298 003361D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033929C 003361DC  7F C3 F3 78 */	mr r3, r30
/* 803392A0 003361E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803392A4 003361E4  83 C1 00 08 */	lwz r30, 8(r1)
/* 803392A8 003361E8  7C 08 03 A6 */	mtlr r0
/* 803392AC 003361EC  38 21 00 10 */	addi r1, r1, 0x10
/* 803392B0 003361F0  4E 80 00 20 */	blr 
.endfn __dt__Q29PSAutoBgm9ConductorFv

.fn removeCallback__Q29PSAutoBgm9ConductorFUcPv, global
/* 803392B4 003361F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803392B8 003361F8  7C 08 02 A6 */	mflr r0
/* 803392BC 003361FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803392C0 00336200  80 64 00 B4 */	lwz r3, 0xb4(r4)
/* 803392C4 00336204  38 80 00 00 */	li r4, 0
/* 803392C8 00336208  81 83 00 10 */	lwz r12, 0x10(r3)
/* 803392CC 0033620C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803392D0 00336210  7D 89 03 A6 */	mtctr r12
/* 803392D4 00336214  4E 80 04 21 */	bctrl 
/* 803392D8 00336218  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803392DC 0033621C  7C 08 03 A6 */	mtlr r0
/* 803392E0 00336220  38 21 00 10 */	addi r1, r1, 0x10
/* 803392E4 00336224  4E 80 00 20 */	blr 
.endfn removeCallback__Q29PSAutoBgm9ConductorFUcPv

.fn seqCpuSync_AutoBgm__Q29PSAutoBgm9ConductorFP8JASTrackUsUlP8JASTrack, global
/* 803392E8 00336228  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803392EC 0033622C  7C 08 02 A6 */	mflr r0
/* 803392F0 00336230  90 01 00 24 */	stw r0, 0x24(r1)
/* 803392F4 00336234  54 A0 04 3E */	clrlwi r0, r5, 0x10
/* 803392F8 00336238  2C 00 06 00 */	cmpwi r0, 0x600
/* 803392FC 0033623C  BF 41 00 08 */	stmw r26, 8(r1)
/* 80339300 00336240  7C BD 2B 78 */	mr r29, r5
/* 80339304 00336244  7C 7A 1B 78 */	mr r26, r3
/* 80339308 00336248  7C 9C 23 78 */	mr r28, r4
/* 8033930C 0033624C  7C DE 33 78 */	mr r30, r6
/* 80339310 00336250  7C FF 3B 78 */	mr r31, r7
/* 80339314 00336254  41 82 00 50 */	beq .L_80339364
/* 80339318 00336258  40 80 00 10 */	bge .L_80339328
/* 8033931C 0033625C  2C 00 03 00 */	cmpwi r0, 0x300
/* 80339320 00336260  41 82 00 14 */	beq .L_80339334
/* 80339324 00336264  48 00 00 C8 */	b .L_803393EC
.L_80339328:
/* 80339328 00336268  2C 00 08 00 */	cmpwi r0, 0x800
/* 8033932C 0033626C  41 82 00 38 */	beq .L_80339364
/* 80339330 00336270  48 00 00 BC */	b .L_803393EC
.L_80339334:
/* 80339334 00336274  88 9A 00 E4 */	lbz r4, 0xe4(r26)
/* 80339338 00336278  7F 83 E3 78 */	mr r3, r28
/* 8033933C 0033627C  4B D6 92 61 */	bl setTempo__8JASTrackFUs
/* 80339340 00336280  7F 43 D3 78 */	mr r3, r26
/* 80339344 00336284  7F 84 E3 78 */	mr r4, r28
/* 80339348 00336288  48 00 00 BD */	bl createTables__Q29PSAutoBgm9ConductorFP8JASTrack
/* 8033934C 0033628C  38 00 00 00 */	li r0, 0
/* 80339350 00336290  7F 43 D3 78 */	mr r3, r26
/* 80339354 00336294  90 1A 00 B0 */	stw r0, 0xb0(r26)
/* 80339358 00336298  48 00 37 BD */	bl "getChildNum__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>Fv"
/* 8033935C 0033629C  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 80339360 003362A0  48 00 00 90 */	b .L_803393F0
.L_80339364:
/* 80339364 003362A4  57 C0 07 3E */	clrlwi r0, r30, 0x1c
/* 80339368 003362A8  7F 43 D3 78 */	mr r3, r26
/* 8033936C 003362AC  7C 1B 03 78 */	mr r27, r0
/* 80339370 003362B0  48 00 37 A5 */	bl "getChildNum__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>Fv"
/* 80339374 003362B4  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 80339378 003362B8  57 60 06 3E */	clrlwi r0, r27, 0x18
/* 8033937C 003362BC  7C 00 18 40 */	cmplw r0, r3
/* 80339380 003362C0  41 80 00 20 */	blt .L_803393A0
/* 80339384 003362C4  3C 60 80 49 */	lis r3, lbl_8048FE60@ha
/* 80339388 003362C8  3C A0 80 49 */	lis r5, lbl_8048FE70@ha
/* 8033938C 003362CC  38 63 FE 60 */	addi r3, r3, lbl_8048FE60@l
/* 80339390 003362D0  38 80 00 C3 */	li r4, 0xc3
/* 80339394 003362D4  38 A5 FE 70 */	addi r5, r5, lbl_8048FE70@l
/* 80339398 003362D8  4C C6 31 82 */	crclr 6
/* 8033939C 003362DC  4B CF 12 A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803393A0:
/* 803393A0 003362E0  7F 43 D3 78 */	mr r3, r26
/* 803393A4 003362E4  7F 64 DB 78 */	mr r4, r27
/* 803393A8 003362E8  48 00 3B 55 */	bl "getChild__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>FUc"
/* 803393AC 003362EC  7C 7B 1B 79 */	or. r27, r3, r3
/* 803393B0 003362F0  40 82 00 20 */	bne .L_803393D0
/* 803393B4 003362F4  3C 60 80 49 */	lis r3, lbl_8048FE60@ha
/* 803393B8 003362F8  3C A0 80 49 */	lis r5, lbl_8048FE70@ha
/* 803393BC 003362FC  38 63 FE 60 */	addi r3, r3, lbl_8048FE60@l
/* 803393C0 00336300  38 80 00 C5 */	li r4, 0xc5
/* 803393C4 00336304  38 A5 FE 70 */	addi r5, r5, lbl_8048FE70@l
/* 803393C8 00336308  4C C6 31 82 */	crclr 6
/* 803393CC 0033630C  4B CF 12 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803393D0:
/* 803393D0 00336310  7F 63 DB 78 */	mr r3, r27
/* 803393D4 00336314  7F 84 E3 78 */	mr r4, r28
/* 803393D8 00336318  7F A5 EB 78 */	mr r5, r29
/* 803393DC 0033631C  7F C6 F3 78 */	mr r6, r30
/* 803393E0 00336320  7F E7 FB 78 */	mr r7, r31
/* 803393E4 00336324  48 00 08 0D */	bl seqCpuSync_AutoBgm_Track__Q29PSAutoBgm5TrackFP8JASTrackUsUlP8JASTrack
/* 803393E8 00336328  48 00 00 08 */	b .L_803393F0
.L_803393EC:
/* 803393EC 0033632C  38 60 00 00 */	li r3, 0
.L_803393F0:
/* 803393F0 00336330  BB 41 00 08 */	lmw r26, 8(r1)
/* 803393F4 00336334  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803393F8 00336338  7C 08 03 A6 */	mtlr r0
/* 803393FC 0033633C  38 21 00 20 */	addi r1, r1, 0x20
/* 80339400 00336340  4E 80 00 20 */	blr 
.endfn seqCpuSync_AutoBgm__Q29PSAutoBgm9ConductorFP8JASTrackUsUlP8JASTrack

.fn createTables__Q29PSAutoBgm9ConductorFP8JASTrack, global
/* 80339404 00336344  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80339408 00336348  7C 08 02 A6 */	mflr r0
/* 8033940C 0033634C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80339410 00336350  38 A1 00 0A */	addi r5, r1, 0xa
/* 80339414 00336354  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80339418 00336358  7C 9F 23 78 */	mr r31, r4
/* 8033941C 0033635C  38 80 00 02 */	li r4, 2
/* 80339420 00336360  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80339424 00336364  7C 7E 1B 78 */	mr r30, r3
/* 80339428 00336368  7F E3 FB 78 */	mr r3, r31
/* 8033942C 0033636C  4B D6 8D 29 */	bl readPortAppDirect__8JASTrackFUlPUs
/* 80339430 00336370  7F E3 FB 78 */	mr r3, r31
/* 80339434 00336374  38 A1 00 08 */	addi r5, r1, 8
/* 80339438 00336378  38 80 00 03 */	li r4, 3
/* 8033943C 0033637C  4B D6 8D 19 */	bl readPortAppDirect__8JASTrackFUlPUs
/* 80339440 00336380  A0 E1 00 0A */	lhz r7, 0xa(r1)
/* 80339444 00336384  7F E3 FB 78 */	mr r3, r31
/* 80339448 00336388  A0 C1 00 08 */	lhz r6, 8(r1)
/* 8033944C 0033638C  38 A1 00 0A */	addi r5, r1, 0xa
/* 80339450 00336390  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 80339454 00336394  50 E6 80 1E */	rlwimi r6, r7, 0x10, 0, 0xf
/* 80339458 00336398  38 80 00 04 */	li r4, 4
/* 8033945C 0033639C  7C 06 02 14 */	add r0, r6, r0
/* 80339460 003363A0  90 1E 00 A8 */	stw r0, 0xa8(r30)
/* 80339464 003363A4  4B D6 8C F1 */	bl readPortAppDirect__8JASTrackFUlPUs
/* 80339468 003363A8  7F E3 FB 78 */	mr r3, r31
/* 8033946C 003363AC  38 A1 00 08 */	addi r5, r1, 8
/* 80339470 003363B0  38 80 00 05 */	li r4, 5
/* 80339474 003363B4  4B D6 8C E1 */	bl readPortAppDirect__8JASTrackFUlPUs
/* 80339478 003363B8  A0 81 00 0A */	lhz r4, 0xa(r1)
/* 8033947C 003363BC  A0 61 00 08 */	lhz r3, 8(r1)
/* 80339480 003363C0  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 80339484 003363C4  50 83 80 1E */	rlwimi r3, r4, 0x10, 0, 0xf
/* 80339488 003363C8  7C 03 02 14 */	add r0, r3, r0
/* 8033948C 003363CC  90 1E 00 AC */	stw r0, 0xac(r30)
/* 80339490 003363D0  80 1E 00 A8 */	lwz r0, 0xa8(r30)
/* 80339494 003363D4  28 00 00 00 */	cmplwi r0, 0
/* 80339498 003363D8  40 82 00 20 */	bne .L_803394B8
/* 8033949C 003363DC  3C 60 80 49 */	lis r3, lbl_8048FE60@ha
/* 803394A0 003363E0  3C A0 80 49 */	lis r5, lbl_8048FE70@ha
/* 803394A4 003363E4  38 63 FE 60 */	addi r3, r3, lbl_8048FE60@l
/* 803394A8 003363E8  38 80 00 E6 */	li r4, 0xe6
/* 803394AC 003363EC  38 A5 FE 70 */	addi r5, r5, lbl_8048FE70@l
/* 803394B0 003363F0  4C C6 31 82 */	crclr 6
/* 803394B4 003363F4  4B CF 11 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803394B8:
/* 803394B8 003363F8  80 1E 00 AC */	lwz r0, 0xac(r30)
/* 803394BC 003363FC  28 00 00 00 */	cmplwi r0, 0
/* 803394C0 00336400  40 82 00 20 */	bne .L_803394E0
/* 803394C4 00336404  3C 60 80 49 */	lis r3, lbl_8048FE60@ha
/* 803394C8 00336408  3C A0 80 49 */	lis r5, lbl_8048FE70@ha
/* 803394CC 0033640C  38 63 FE 60 */	addi r3, r3, lbl_8048FE60@l
/* 803394D0 00336410  38 80 00 E7 */	li r4, 0xe7
/* 803394D4 00336414  38 A5 FE 70 */	addi r5, r5, lbl_8048FE70@l
/* 803394D8 00336418  4C C6 31 82 */	crclr 6
/* 803394DC 0033641C  4B CF 11 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803394E0:
/* 803394E0 00336420  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803394E4 00336424  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803394E8 00336428  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803394EC 0033642C  7C 08 03 A6 */	mtlr r0
/* 803394F0 00336430  38 21 00 20 */	addi r1, r1, 0x20
/* 803394F4 00336434  4E 80 00 20 */	blr 
.endfn createTables__Q29PSAutoBgm9ConductorFP8JASTrack

.fn __ct__Q29PSAutoBgm5TrackFv, global
/* 803394F8 00336438  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803394FC 0033643C  7C 08 02 A6 */	mflr r0
/* 80339500 00336440  90 01 00 24 */	stw r0, 0x24(r1)
/* 80339504 00336444  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80339508 00336448  7C 7F 1B 78 */	mr r31, r3
/* 8033950C 0033644C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80339510 00336450  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80339514 00336454  93 81 00 10 */	stw r28, 0x10(r1)
/* 80339518 00336458  48 00 39 55 */	bl "__ct__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>Fv"
/* 8033951C 0033645C  3C 60 80 4E */	lis r3, __vt__Q29PSAutoBgm5Track@ha
/* 80339520 00336460  38 80 00 FF */	li r4, 0xff
/* 80339524 00336464  38 03 AC 28 */	addi r0, r3, __vt__Q29PSAutoBgm5Track@l
/* 80339528 00336468  3B BF 00 A0 */	addi r29, r31, 0xa0
/* 8033952C 0033646C  90 1F 00 00 */	stw r0, 0(r31)
/* 80339530 00336470  38 00 00 00 */	li r0, 0
/* 80339534 00336474  7F A3 EB 78 */	mr r3, r29
/* 80339538 00336478  98 9F 00 98 */	stb r4, 0x98(r31)
/* 8033953C 0033647C  98 9F 00 99 */	stb r4, 0x99(r31)
/* 80339540 00336480  90 1F 00 9C */	stw r0, 0x9c(r31)
/* 80339544 00336484  4B CE 3A 89 */	bl __ct__11JKRDisposerFv
/* 80339548 00336488  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 8033954C 0033648C  38 00 00 00 */	li r0, 0
/* 80339550 00336490  38 63 67 74 */	addi r3, r3, __vt__Q210JADUtility7PrmBase@l
/* 80339554 00336494  7F A4 EB 78 */	mr r4, r29
/* 80339558 00336498  90 7D 00 00 */	stw r3, 0(r29)
/* 8033955C 0033649C  38 7D 00 1C */	addi r3, r29, 0x1c
/* 80339560 003364A0  98 1D 00 18 */	stb r0, 0x18(r29)
/* 80339564 003364A4  4B CE D2 55 */	bl __ct__10JSUPtrLinkFPv
/* 80339568 003364A8  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility6Prm<s>"@ha
/* 8033956C 003364AC  3B DF 00 D0 */	addi r30, r31, 0xd0
/* 80339570 003364B0  38 03 AC B4 */	addi r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
/* 80339574 003364B4  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
/* 80339578 003364B8  90 1D 00 00 */	stw r0, 0(r29)
/* 8033957C 003364BC  38 03 AC A0 */	addi r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
/* 80339580 003364C0  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
/* 80339584 003364C4  90 1D 00 00 */	stw r0, 0(r29)
/* 80339588 003364C8  38 03 AC 8C */	addi r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
/* 8033958C 003364CC  90 1D 00 00 */	stw r0, 0(r29)
/* 80339590 003364D0  7F C3 F3 78 */	mr r3, r30
/* 80339594 003364D4  4B CE 3A 39 */	bl __ct__11JKRDisposerFv
/* 80339598 003364D8  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 8033959C 003364DC  38 00 00 00 */	li r0, 0
/* 803395A0 003364E0  38 63 67 74 */	addi r3, r3, __vt__Q210JADUtility7PrmBase@l
/* 803395A4 003364E4  7F C4 F3 78 */	mr r4, r30
/* 803395A8 003364E8  90 7E 00 00 */	stw r3, 0(r30)
/* 803395AC 003364EC  38 7E 00 1C */	addi r3, r30, 0x1c
/* 803395B0 003364F0  98 1E 00 18 */	stb r0, 0x18(r30)
/* 803395B4 003364F4  4B CE D2 05 */	bl __ct__10JSUPtrLinkFPv
/* 803395B8 003364F8  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 803395BC 003364FC  3B BF 01 00 */	addi r29, r31, 0x100
/* 803395C0 00336500  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 803395C4 00336504  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 803395C8 00336508  90 1E 00 00 */	stw r0, 0(r30)
/* 803395CC 0033650C  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 803395D0 00336510  7F BC EB 78 */	mr r28, r29
/* 803395D4 00336514  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@ha
/* 803395D8 00336518  90 1E 00 00 */	stw r0, 0(r30)
/* 803395DC 0033651C  38 03 AD 18 */	addi r0, r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@l
/* 803395E0 00336520  90 1E 00 00 */	stw r0, 0(r30)
/* 803395E4 00336524  7F A3 EB 78 */	mr r3, r29
/* 803395E8 00336528  4B CE 39 E5 */	bl __ct__11JKRDisposerFv
/* 803395EC 0033652C  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 803395F0 00336530  38 00 00 00 */	li r0, 0
/* 803395F4 00336534  38 63 67 74 */	addi r3, r3, __vt__Q210JADUtility7PrmBase@l
/* 803395F8 00336538  7F 84 E3 78 */	mr r4, r28
/* 803395FC 0033653C  90 7C 00 00 */	stw r3, 0(r28)
/* 80339600 00336540  38 7C 00 1C */	addi r3, r28, 0x1c
/* 80339604 00336544  98 1C 00 18 */	stb r0, 0x18(r28)
/* 80339608 00336548  4B CE D1 B1 */	bl __ct__10JSUPtrLinkFPv
/* 8033960C 0033654C  3C 80 80 4A */	lis r4, "__vt__Q210JADUtility7Prm<Pc>"@ha
/* 80339610 00336550  3C 60 80 4A */	lis r3, "__vt__Q210JADUtility10PrmHio<Pc>"@ha
/* 80339614 00336554  38 04 67 60 */	addi r0, r4, "__vt__Q210JADUtility7Prm<Pc>"@l
/* 80339618 00336558  3C 80 80 4A */	lis r4, __vt__Q210JADUtility6StrPrm@ha
/* 8033961C 0033655C  90 1D 00 00 */	stw r0, 0(r29)
/* 80339620 00336560  38 03 67 4C */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Pc>"@l
/* 80339624 00336564  3C 60 80 4E */	lis r3, __vt__Q210JADUtility10StrEditBox@ha
/* 80339628 00336568  38 C4 67 38 */	addi r6, r4, __vt__Q210JADUtility6StrPrm@l
/* 8033962C 0033656C  90 1D 00 00 */	stw r0, 0(r29)
/* 80339630 00336570  38 A0 00 08 */	li r5, 8
/* 80339634 00336574  38 80 00 00 */	li r4, 0
/* 80339638 00336578  38 03 AC 78 */	addi r0, r3, __vt__Q210JADUtility10StrEditBox@l
/* 8033963C 0033657C  90 DD 00 00 */	stw r6, 0(r29)
/* 80339640 00336580  38 60 00 08 */	li r3, 8
/* 80339644 00336584  90 BD 00 30 */	stw r5, 0x30(r29)
/* 80339648 00336588  90 9D 00 34 */	stw r4, 0x34(r29)
/* 8033964C 0033658C  90 9D 00 38 */	stw r4, 0x38(r29)
/* 80339650 00336590  90 1D 00 00 */	stw r0, 0(r29)
/* 80339654 00336594  4B CE A9 59 */	bl __nwa__FUl
/* 80339658 00336598  90 7D 00 2C */	stw r3, 0x2c(r29)
/* 8033965C 0033659C  38 82 FE 00 */	addi r4, r2, lbl_8051E160@sda21
/* 80339660 003365A0  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 80339664 003365A4  4B D9 11 F5 */	bl strcpy
/* 80339668 003365A8  3B 9F 01 3C */	addi r28, r31, 0x13c
/* 8033966C 003365AC  7F 83 E3 78 */	mr r3, r28
/* 80339670 003365B0  4B CE 39 5D */	bl __ct__11JKRDisposerFv
/* 80339674 003365B4  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 80339678 003365B8  38 00 00 00 */	li r0, 0
/* 8033967C 003365BC  38 63 67 74 */	addi r3, r3, __vt__Q210JADUtility7PrmBase@l
/* 80339680 003365C0  7F 84 E3 78 */	mr r4, r28
/* 80339684 003365C4  90 7C 00 00 */	stw r3, 0(r28)
/* 80339688 003365C8  38 7C 00 1C */	addi r3, r28, 0x1c
/* 8033968C 003365CC  98 1C 00 18 */	stb r0, 0x18(r28)
/* 80339690 003365D0  4B CE D1 29 */	bl __ct__10JSUPtrLinkFPv
/* 80339694 003365D4  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 80339698 003365D8  3B BF 01 6C */	addi r29, r31, 0x16c
/* 8033969C 003365DC  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 803396A0 003365E0  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 803396A4 003365E4  90 1C 00 00 */	stw r0, 0(r28)
/* 803396A8 003365E8  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 803396AC 003365EC  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
/* 803396B0 003365F0  90 1C 00 00 */	stw r0, 0(r28)
/* 803396B4 003365F4  38 03 AD 2C */	addi r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
/* 803396B8 003365F8  90 1C 00 00 */	stw r0, 0(r28)
/* 803396BC 003365FC  7F A3 EB 78 */	mr r3, r29
/* 803396C0 00336600  4B CE 39 0D */	bl __ct__11JKRDisposerFv
/* 803396C4 00336604  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 803396C8 00336608  38 00 00 00 */	li r0, 0
/* 803396CC 0033660C  38 63 67 74 */	addi r3, r3, __vt__Q210JADUtility7PrmBase@l
/* 803396D0 00336610  7F A4 EB 78 */	mr r4, r29
/* 803396D4 00336614  90 7D 00 00 */	stw r3, 0(r29)
/* 803396D8 00336618  38 7D 00 1C */	addi r3, r29, 0x1c
/* 803396DC 0033661C  98 1D 00 18 */	stb r0, 0x18(r29)
/* 803396E0 00336620  4B CE D0 D9 */	bl __ct__10JSUPtrLinkFPv
/* 803396E4 00336624  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 803396E8 00336628  3C 80 80 4E */	lis r4, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 803396EC 0033662C  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 803396F0 00336630  38 A0 00 00 */	li r5, 0
/* 803396F4 00336634  90 1D 00 00 */	stw r0, 0(r29)
/* 803396F8 00336638  38 04 AD 40 */	addi r0, r4, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 803396FC 0033663C  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
/* 80339700 00336640  38 9F 00 84 */	addi r4, r31, 0x84
/* 80339704 00336644  90 1D 00 00 */	stw r0, 0(r29)
/* 80339708 00336648  38 63 AD 2C */	addi r3, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
/* 8033970C 0033664C  38 00 00 03 */	li r0, 3
/* 80339710 00336650  90 7D 00 00 */	stw r3, 0(r29)
/* 80339714 00336654  38 7F 00 1C */	addi r3, r31, 0x1c
/* 80339718 00336658  90 BF 01 9C */	stw r5, 0x19c(r31)
/* 8033971C 0033665C  98 1F 00 18 */	stb r0, 0x18(r31)
/* 80339720 00336660  4B CE D1 C5 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 80339724 00336664  38 9F 00 BC */	addi r4, r31, 0xbc
/* 80339728 00336668  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8033972C 0033666C  4B CE D1 B9 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 80339730 00336670  38 9F 00 EC */	addi r4, r31, 0xec
/* 80339734 00336674  38 7F 00 1C */	addi r3, r31, 0x1c
/* 80339738 00336678  4B CE D1 AD */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8033973C 0033667C  38 9F 01 1C */	addi r4, r31, 0x11c
/* 80339740 00336680  38 7F 00 1C */	addi r3, r31, 0x1c
/* 80339744 00336684  4B CE D1 A1 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 80339748 00336688  38 9F 01 58 */	addi r4, r31, 0x158
/* 8033974C 0033668C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 80339750 00336690  4B CE D1 95 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 80339754 00336694  38 9F 01 88 */	addi r4, r31, 0x188
/* 80339758 00336698  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8033975C 0033669C  4B CE D1 89 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 80339760 003366A0  38 00 00 03 */	li r0, 3
/* 80339764 003366A4  3C 60 80 34 */	lis r3, removeCallback__Q29PSAutoBgm5TrackFUcPv@ha
/* 80339768 003366A8  98 1F 00 19 */	stb r0, 0x19(r31)
/* 8033976C 003366AC  38 03 9B B4 */	addi r0, r3, removeCallback__Q29PSAutoBgm5TrackFUcPv@l
/* 80339770 003366B0  7F E3 FB 78 */	mr r3, r31
/* 80339774 003366B4  90 1F 00 5C */	stw r0, 0x5c(r31)
/* 80339778 003366B8  93 FF 00 60 */	stw r31, 0x60(r31)
/* 8033977C 003366BC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80339780 003366C0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80339784 003366C4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80339788 003366C8  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8033978C 003366CC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80339790 003366D0  7C 08 03 A6 */	mtlr r0
/* 80339794 003366D4  38 21 00 20 */	addi r1, r1, 0x20
/* 80339798 003366D8  4E 80 00 20 */	blr 
.endfn __ct__Q29PSAutoBgm5TrackFv

.fn afterGetFromFree__Q29PSAutoBgm5TrackFv, global
/* 8033979C 003366DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803397A0 003366E0  7C 08 02 A6 */	mflr r0
/* 803397A4 003366E4  38 82 FE 00 */	addi r4, r2, lbl_8051E160@sda21
/* 803397A8 003366E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803397AC 003366EC  38 00 00 FF */	li r0, 0xff
/* 803397B0 003366F0  98 03 00 99 */	stb r0, 0x99(r3)
/* 803397B4 003366F4  38 00 00 00 */	li r0, 0
/* 803397B8 003366F8  B0 03 00 CC */	sth r0, 0xcc(r3)
/* 803397BC 003366FC  98 03 00 FC */	stb r0, 0xfc(r3)
/* 803397C0 00336700  80 63 01 2C */	lwz r3, 0x12c(r3)
/* 803397C4 00336704  4B D9 10 95 */	bl strcpy
/* 803397C8 00336708  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803397CC 0033670C  7C 08 03 A6 */	mtlr r0
/* 803397D0 00336710  38 21 00 10 */	addi r1, r1, 0x10
/* 803397D4 00336714  4E 80 00 20 */	blr 
.endfn afterGetFromFree__Q29PSAutoBgm5TrackFv

.fn __dt__Q29PSAutoBgm5TrackFv, global
/* 803397D8 00336718  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803397DC 0033671C  7C 08 02 A6 */	mflr r0
/* 803397E0 00336720  90 01 00 14 */	stw r0, 0x14(r1)
/* 803397E4 00336724  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803397E8 00336728  7C 9F 23 78 */	mr r31, r4
/* 803397EC 0033672C  93 C1 00 08 */	stw r30, 8(r1)
/* 803397F0 00336730  7C 7E 1B 79 */	or. r30, r3, r3
/* 803397F4 00336734  41 82 03 A4 */	beq .L_80339B98
/* 803397F8 00336738  3C 60 80 4E */	lis r3, __vt__Q29PSAutoBgm5Track@ha
/* 803397FC 0033673C  34 1E 01 6C */	addic. r0, r30, 0x16c
/* 80339800 00336740  38 03 AC 28 */	addi r0, r3, __vt__Q29PSAutoBgm5Track@l
/* 80339804 00336744  90 1E 00 00 */	stw r0, 0(r30)
/* 80339808 00336748  41 82 00 68 */	beq .L_80339870
/* 8033980C 0033674C  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
/* 80339810 00336750  34 1E 01 6C */	addic. r0, r30, 0x16c
/* 80339814 00336754  38 03 AD 2C */	addi r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
/* 80339818 00336758  90 1E 01 6C */	stw r0, 0x16c(r30)
/* 8033981C 0033675C  41 82 00 54 */	beq .L_80339870
/* 80339820 00336760  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 80339824 00336764  34 1E 01 6C */	addic. r0, r30, 0x16c
/* 80339828 00336768  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 8033982C 0033676C  90 1E 01 6C */	stw r0, 0x16c(r30)
/* 80339830 00336770  41 82 00 40 */	beq .L_80339870
/* 80339834 00336774  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 80339838 00336778  34 1E 01 6C */	addic. r0, r30, 0x16c
/* 8033983C 0033677C  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 80339840 00336780  90 1E 01 6C */	stw r0, 0x16c(r30)
/* 80339844 00336784  41 82 00 2C */	beq .L_80339870
/* 80339848 00336788  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 8033984C 0033678C  34 7E 01 88 */	addic. r3, r30, 0x188
/* 80339850 00336790  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 80339854 00336794  90 1E 01 6C */	stw r0, 0x16c(r30)
/* 80339858 00336798  41 82 00 0C */	beq .L_80339864
/* 8033985C 0033679C  38 80 00 00 */	li r4, 0
/* 80339860 003367A0  4B CE CF 71 */	bl __dt__10JSUPtrLinkFv
.L_80339864:
/* 80339864 003367A4  38 7E 01 6C */	addi r3, r30, 0x16c
/* 80339868 003367A8  38 80 00 00 */	li r4, 0
/* 8033986C 003367AC  4B CE 37 C9 */	bl __dt__11JKRDisposerFv
.L_80339870:
/* 80339870 003367B0  34 1E 01 3C */	addic. r0, r30, 0x13c
/* 80339874 003367B4  41 82 00 68 */	beq .L_803398DC
/* 80339878 003367B8  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
/* 8033987C 003367BC  34 1E 01 3C */	addic. r0, r30, 0x13c
/* 80339880 003367C0  38 03 AD 2C */	addi r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
/* 80339884 003367C4  90 1E 01 3C */	stw r0, 0x13c(r30)
/* 80339888 003367C8  41 82 00 54 */	beq .L_803398DC
/* 8033988C 003367CC  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 80339890 003367D0  34 1E 01 3C */	addic. r0, r30, 0x13c
/* 80339894 003367D4  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 80339898 003367D8  90 1E 01 3C */	stw r0, 0x13c(r30)
/* 8033989C 003367DC  41 82 00 40 */	beq .L_803398DC
/* 803398A0 003367E0  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 803398A4 003367E4  34 1E 01 3C */	addic. r0, r30, 0x13c
/* 803398A8 003367E8  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 803398AC 003367EC  90 1E 01 3C */	stw r0, 0x13c(r30)
/* 803398B0 003367F0  41 82 00 2C */	beq .L_803398DC
/* 803398B4 003367F4  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 803398B8 003367F8  34 7E 01 58 */	addic. r3, r30, 0x158
/* 803398BC 003367FC  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 803398C0 00336800  90 1E 01 3C */	stw r0, 0x13c(r30)
/* 803398C4 00336804  41 82 00 0C */	beq .L_803398D0
/* 803398C8 00336808  38 80 00 00 */	li r4, 0
/* 803398CC 0033680C  4B CE CF 05 */	bl __dt__10JSUPtrLinkFv
.L_803398D0:
/* 803398D0 00336810  38 7E 01 3C */	addi r3, r30, 0x13c
/* 803398D4 00336814  38 80 00 00 */	li r4, 0
/* 803398D8 00336818  4B CE 37 5D */	bl __dt__11JKRDisposerFv
.L_803398DC:
/* 803398DC 0033681C  34 1E 01 00 */	addic. r0, r30, 0x100
/* 803398E0 00336820  41 82 00 84 */	beq .L_80339964
/* 803398E4 00336824  3C 60 80 4E */	lis r3, __vt__Q210JADUtility10StrEditBox@ha
/* 803398E8 00336828  38 03 AC 78 */	addi r0, r3, __vt__Q210JADUtility10StrEditBox@l
/* 803398EC 0033682C  90 1E 01 00 */	stw r0, 0x100(r30)
/* 803398F0 00336830  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 803398F4 00336834  4B CE A7 E5 */	bl __dla__FPv
/* 803398F8 00336838  34 1E 01 00 */	addic. r0, r30, 0x100
/* 803398FC 0033683C  41 82 00 68 */	beq .L_80339964
/* 80339900 00336840  3C 60 80 4A */	lis r3, __vt__Q210JADUtility6StrPrm@ha
/* 80339904 00336844  34 1E 01 00 */	addic. r0, r30, 0x100
/* 80339908 00336848  38 03 67 38 */	addi r0, r3, __vt__Q210JADUtility6StrPrm@l
/* 8033990C 0033684C  90 1E 01 00 */	stw r0, 0x100(r30)
/* 80339910 00336850  41 82 00 54 */	beq .L_80339964
/* 80339914 00336854  3C 60 80 4A */	lis r3, "__vt__Q210JADUtility10PrmHio<Pc>"@ha
/* 80339918 00336858  34 1E 01 00 */	addic. r0, r30, 0x100
/* 8033991C 0033685C  38 03 67 4C */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Pc>"@l
/* 80339920 00336860  90 1E 01 00 */	stw r0, 0x100(r30)
/* 80339924 00336864  41 82 00 40 */	beq .L_80339964
/* 80339928 00336868  3C 60 80 4A */	lis r3, "__vt__Q210JADUtility7Prm<Pc>"@ha
/* 8033992C 0033686C  34 1E 01 00 */	addic. r0, r30, 0x100
/* 80339930 00336870  38 03 67 60 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Pc>"@l
/* 80339934 00336874  90 1E 01 00 */	stw r0, 0x100(r30)
/* 80339938 00336878  41 82 00 2C */	beq .L_80339964
/* 8033993C 0033687C  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 80339940 00336880  34 7E 01 1C */	addic. r3, r30, 0x11c
/* 80339944 00336884  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 80339948 00336888  90 1E 01 00 */	stw r0, 0x100(r30)
/* 8033994C 0033688C  41 82 00 0C */	beq .L_80339958
/* 80339950 00336890  38 80 00 00 */	li r4, 0
/* 80339954 00336894  4B CE CE 7D */	bl __dt__10JSUPtrLinkFv
.L_80339958:
/* 80339958 00336898  38 7E 01 00 */	addi r3, r30, 0x100
/* 8033995C 0033689C  38 80 00 00 */	li r4, 0
/* 80339960 003368A0  4B CE 36 D5 */	bl __dt__11JKRDisposerFv
.L_80339964:
/* 80339964 003368A4  34 1E 00 D0 */	addic. r0, r30, 0xd0
/* 80339968 003368A8  41 82 00 68 */	beq .L_803399D0
/* 8033996C 003368AC  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@ha
/* 80339970 003368B0  34 1E 00 D0 */	addic. r0, r30, 0xd0
/* 80339974 003368B4  38 03 AD 18 */	addi r0, r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@l
/* 80339978 003368B8  90 1E 00 D0 */	stw r0, 0xd0(r30)
/* 8033997C 003368BC  41 82 00 54 */	beq .L_803399D0
/* 80339980 003368C0  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 80339984 003368C4  34 1E 00 D0 */	addic. r0, r30, 0xd0
/* 80339988 003368C8  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 8033998C 003368CC  90 1E 00 D0 */	stw r0, 0xd0(r30)
/* 80339990 003368D0  41 82 00 40 */	beq .L_803399D0
/* 80339994 003368D4  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 80339998 003368D8  34 1E 00 D0 */	addic. r0, r30, 0xd0
/* 8033999C 003368DC  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 803399A0 003368E0  90 1E 00 D0 */	stw r0, 0xd0(r30)
/* 803399A4 003368E4  41 82 00 2C */	beq .L_803399D0
/* 803399A8 003368E8  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 803399AC 003368EC  34 7E 00 EC */	addic. r3, r30, 0xec
/* 803399B0 003368F0  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 803399B4 003368F4  90 1E 00 D0 */	stw r0, 0xd0(r30)
/* 803399B8 003368F8  41 82 00 0C */	beq .L_803399C4
/* 803399BC 003368FC  38 80 00 00 */	li r4, 0
/* 803399C0 00336900  4B CE CE 11 */	bl __dt__10JSUPtrLinkFv
.L_803399C4:
/* 803399C4 00336904  38 7E 00 D0 */	addi r3, r30, 0xd0
/* 803399C8 00336908  38 80 00 00 */	li r4, 0
/* 803399CC 0033690C  4B CE 36 69 */	bl __dt__11JKRDisposerFv
.L_803399D0:
/* 803399D0 00336910  34 1E 00 A0 */	addic. r0, r30, 0xa0
/* 803399D4 00336914  41 82 00 68 */	beq .L_80339A3C
/* 803399D8 00336918  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
/* 803399DC 0033691C  34 1E 00 A0 */	addic. r0, r30, 0xa0
/* 803399E0 00336920  38 03 AC 8C */	addi r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
/* 803399E4 00336924  90 1E 00 A0 */	stw r0, 0xa0(r30)
/* 803399E8 00336928  41 82 00 54 */	beq .L_80339A3C
/* 803399EC 0033692C  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
/* 803399F0 00336930  34 1E 00 A0 */	addic. r0, r30, 0xa0
/* 803399F4 00336934  38 03 AC A0 */	addi r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
/* 803399F8 00336938  90 1E 00 A0 */	stw r0, 0xa0(r30)
/* 803399FC 0033693C  41 82 00 40 */	beq .L_80339A3C
/* 80339A00 00336940  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility6Prm<s>"@ha
/* 80339A04 00336944  34 1E 00 A0 */	addic. r0, r30, 0xa0
/* 80339A08 00336948  38 03 AC B4 */	addi r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
/* 80339A0C 0033694C  90 1E 00 A0 */	stw r0, 0xa0(r30)
/* 80339A10 00336950  41 82 00 2C */	beq .L_80339A3C
/* 80339A14 00336954  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 80339A18 00336958  34 7E 00 BC */	addic. r3, r30, 0xbc
/* 80339A1C 0033695C  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 80339A20 00336960  90 1E 00 A0 */	stw r0, 0xa0(r30)
/* 80339A24 00336964  41 82 00 0C */	beq .L_80339A30
/* 80339A28 00336968  38 80 00 00 */	li r4, 0
/* 80339A2C 0033696C  4B CE CD A5 */	bl __dt__10JSUPtrLinkFv
.L_80339A30:
/* 80339A30 00336970  38 7E 00 A0 */	addi r3, r30, 0xa0
/* 80339A34 00336974  38 80 00 00 */	li r4, 0
/* 80339A38 00336978  4B CE 35 FD */	bl __dt__11JKRDisposerFv
.L_80339A3C:
/* 80339A3C 0033697C  28 1E 00 00 */	cmplwi r30, 0
/* 80339A40 00336980  41 82 01 48 */	beq .L_80339B88
/* 80339A44 00336984  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>"@ha
/* 80339A48 00336988  38 03 AC 50 */	addi r0, r3, "__vt__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>"@l
/* 80339A4C 0033698C  90 1E 00 00 */	stw r0, 0(r30)
/* 80339A50 00336990  48 00 00 24 */	b .L_80339A74
.L_80339A54:
/* 80339A54 00336994  28 04 00 00 */	cmplwi r4, 0
/* 80339A58 00336998  41 82 00 08 */	beq .L_80339A60
/* 80339A5C 0033699C  38 84 FF F4 */	addi r4, r4, -12
.L_80339A60:
/* 80339A60 003369A0  28 04 00 00 */	cmplwi r4, 0
/* 80339A64 003369A4  41 82 00 08 */	beq .L_80339A6C
/* 80339A68 003369A8  38 84 00 0C */	addi r4, r4, 0xc
.L_80339A6C:
/* 80339A6C 003369AC  38 7E 00 2C */	addi r3, r30, 0x2c
/* 80339A70 003369B0  4B CE D1 B5 */	bl remove__10JSUPtrListFP10JSUPtrLink
.L_80339A74:
/* 80339A74 003369B4  80 9E 00 2C */	lwz r4, 0x2c(r30)
/* 80339A78 003369B8  28 04 00 00 */	cmplwi r4, 0
/* 80339A7C 003369BC  7C 80 23 78 */	mr r0, r4
/* 80339A80 003369C0  41 82 00 08 */	beq .L_80339A88
/* 80339A84 003369C4  38 04 FF F4 */	addi r0, r4, -12
.L_80339A88:
/* 80339A88 003369C8  28 00 00 00 */	cmplwi r0, 0
/* 80339A8C 003369CC  40 82 FF C8 */	bne .L_80339A54
/* 80339A90 003369D0  3C 80 80 34 */	lis r4, __dt__Q29PSAutoBgm6ModuleFv@ha
/* 80339A94 003369D4  80 7E 00 64 */	lwz r3, 0x64(r30)
/* 80339A98 003369D8  38 84 A3 B0 */	addi r4, r4, __dt__Q29PSAutoBgm6ModuleFv@l
/* 80339A9C 003369DC  4B D8 7C AD */	bl __destroy_new_array
/* 80339AA0 003369E0  34 1E 00 68 */	addic. r0, r30, 0x68
/* 80339AA4 003369E4  41 82 00 40 */	beq .L_80339AE4
/* 80339AA8 003369E8  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 80339AAC 003369EC  34 1E 00 68 */	addic. r0, r30, 0x68
/* 80339AB0 003369F0  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 80339AB4 003369F4  90 1E 00 68 */	stw r0, 0x68(r30)
/* 80339AB8 003369F8  41 82 00 2C */	beq .L_80339AE4
/* 80339ABC 003369FC  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 80339AC0 00336A00  34 7E 00 84 */	addic. r3, r30, 0x84
/* 80339AC4 00336A04  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 80339AC8 00336A08  90 1E 00 68 */	stw r0, 0x68(r30)
/* 80339ACC 00336A0C  41 82 00 0C */	beq .L_80339AD8
/* 80339AD0 00336A10  38 80 00 00 */	li r4, 0
/* 80339AD4 00336A14  4B CE CC FD */	bl __dt__10JSUPtrLinkFv
.L_80339AD8:
/* 80339AD8 00336A18  38 7E 00 68 */	addi r3, r30, 0x68
/* 80339ADC 00336A1C  38 80 00 00 */	li r4, 0
/* 80339AE0 00336A20  4B CE 35 55 */	bl __dt__11JKRDisposerFv
.L_80339AE4:
/* 80339AE4 00336A24  28 1E 00 00 */	cmplwi r30, 0
/* 80339AE8 00336A28  41 82 00 A0 */	beq .L_80339B88
/* 80339AEC 00336A2C  3C 60 80 4A */	lis r3, __vt__Q210JADUtility10PrmSetBase@ha
/* 80339AF0 00336A30  38 03 66 E0 */	addi r0, r3, __vt__Q210JADUtility10PrmSetBase@l
/* 80339AF4 00336A34  90 1E 00 00 */	stw r0, 0(r30)
/* 80339AF8 00336A38  48 00 00 0C */	b .L_80339B04
.L_80339AFC:
/* 80339AFC 00336A3C  38 7E 00 1C */	addi r3, r30, 0x1c
/* 80339B00 00336A40  4B CE D1 25 */	bl remove__10JSUPtrListFP10JSUPtrLink
.L_80339B04:
/* 80339B04 00336A44  80 9E 00 1C */	lwz r4, 0x1c(r30)
/* 80339B08 00336A48  28 04 00 00 */	cmplwi r4, 0
/* 80339B0C 00336A4C  40 82 FF F0 */	bne .L_80339AFC
/* 80339B10 00336A50  34 1E 00 2C */	addic. r0, r30, 0x2c
/* 80339B14 00336A54  41 82 00 54 */	beq .L_80339B68
/* 80339B18 00336A58  3C 60 80 4A */	lis r3, __vt__Q210JADUtility10PrmSetTree@ha
/* 80339B1C 00336A5C  34 1E 00 2C */	addic. r0, r30, 0x2c
/* 80339B20 00336A60  38 03 67 04 */	addi r0, r3, __vt__Q210JADUtility10PrmSetTree@l
/* 80339B24 00336A64  90 1E 00 48 */	stw r0, 0x48(r30)
/* 80339B28 00336A68  41 82 00 40 */	beq .L_80339B68
/* 80339B2C 00336A6C  3C 60 80 4A */	lis r3, "__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@ha
/* 80339B30 00336A70  34 1E 00 2C */	addic. r0, r30, 0x2c
/* 80339B34 00336A74  38 03 67 1C */	addi r0, r3, "__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@l
/* 80339B38 00336A78  90 1E 00 48 */	stw r0, 0x48(r30)
/* 80339B3C 00336A7C  41 82 00 2C */	beq .L_80339B68
/* 80339B40 00336A80  34 1E 00 38 */	addic. r0, r30, 0x38
/* 80339B44 00336A84  41 82 00 10 */	beq .L_80339B54
/* 80339B48 00336A88  38 7E 00 38 */	addi r3, r30, 0x38
/* 80339B4C 00336A8C  38 80 00 00 */	li r4, 0
/* 80339B50 00336A90  4B CE CC 81 */	bl __dt__10JSUPtrLinkFv
.L_80339B54:
/* 80339B54 00336A94  34 1E 00 2C */	addic. r0, r30, 0x2c
/* 80339B58 00336A98  41 82 00 10 */	beq .L_80339B68
/* 80339B5C 00336A9C  38 7E 00 2C */	addi r3, r30, 0x2c
/* 80339B60 00336AA0  38 80 00 00 */	li r4, 0
/* 80339B64 00336AA4  4B CE CD 05 */	bl __dt__10JSUPtrListFv
.L_80339B68:
/* 80339B68 00336AA8  34 1E 00 1C */	addic. r0, r30, 0x1c
/* 80339B6C 00336AAC  41 82 00 10 */	beq .L_80339B7C
/* 80339B70 00336AB0  38 7E 00 1C */	addi r3, r30, 0x1c
/* 80339B74 00336AB4  38 80 00 00 */	li r4, 0
/* 80339B78 00336AB8  4B CE CC F1 */	bl __dt__10JSUPtrListFv
.L_80339B7C:
/* 80339B7C 00336ABC  7F C3 F3 78 */	mr r3, r30
/* 80339B80 00336AC0  38 80 00 00 */	li r4, 0
/* 80339B84 00336AC4  4B CE 34 B1 */	bl __dt__11JKRDisposerFv
.L_80339B88:
/* 80339B88 00336AC8  7F E0 07 35 */	extsh. r0, r31
/* 80339B8C 00336ACC  40 81 00 0C */	ble .L_80339B98
/* 80339B90 00336AD0  7F C3 F3 78 */	mr r3, r30
/* 80339B94 00336AD4  4B CE A5 21 */	bl __dl__FPv
.L_80339B98:
/* 80339B98 00336AD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80339B9C 00336ADC  7F C3 F3 78 */	mr r3, r30
/* 80339BA0 00336AE0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80339BA4 00336AE4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80339BA8 00336AE8  7C 08 03 A6 */	mtlr r0
/* 80339BAC 00336AEC  38 21 00 10 */	addi r1, r1, 0x10
/* 80339BB0 00336AF0  4E 80 00 20 */	blr 
.endfn __dt__Q29PSAutoBgm5TrackFv

.fn removeCallback__Q29PSAutoBgm5TrackFUcPv, global
/* 80339BB4 00336AF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80339BB8 00336AF8  7C 08 02 A6 */	mflr r0
/* 80339BBC 00336AFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80339BC0 00336B00  80 64 00 3C */	lwz r3, 0x3c(r4)
/* 80339BC4 00336B04  38 80 00 00 */	li r4, 0
/* 80339BC8 00336B08  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80339BCC 00336B0C  80 63 00 B4 */	lwz r3, 0xb4(r3)
/* 80339BD0 00336B10  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80339BD4 00336B14  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80339BD8 00336B18  7D 89 03 A6 */	mtctr r12
/* 80339BDC 00336B1C  4E 80 04 21 */	bctrl 
/* 80339BE0 00336B20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80339BE4 00336B24  7C 08 03 A6 */	mtlr r0
/* 80339BE8 00336B28  38 21 00 10 */	addi r1, r1, 0x10
/* 80339BEC 00336B2C  4E 80 00 20 */	blr 
.endfn removeCallback__Q29PSAutoBgm5TrackFUcPv

.fn seqCpuSync_AutoBgm_Track__Q29PSAutoBgm5TrackFP8JASTrackUsUlP8JASTrack, global
/* 80339BF0 00336B30  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80339BF4 00336B34  7C 08 02 A6 */	mflr r0
/* 80339BF8 00336B38  90 01 00 24 */	stw r0, 0x24(r1)
/* 80339BFC 00336B3C  BF 41 00 08 */	stmw r26, 8(r1)
/* 80339C00 00336B40  7C BB 2B 78 */	mr r27, r5
/* 80339C04 00336B44  57 60 04 3E */	clrlwi r0, r27, 0x10
/* 80339C08 00336B48  3C A0 80 49 */	lis r5, lbl_8048FE60@ha
/* 80339C0C 00336B4C  2C 00 08 00 */	cmpwi r0, 0x800
/* 80339C10 00336B50  7C 7F 1B 78 */	mr r31, r3
/* 80339C14 00336B54  7C 9A 23 78 */	mr r26, r4
/* 80339C18 00336B58  7C DD 33 78 */	mr r29, r6
/* 80339C1C 00336B5C  7C FC 3B 78 */	mr r28, r7
/* 80339C20 00336B60  3B C5 FE 60 */	addi r30, r5, lbl_8048FE60@l
/* 80339C24 00336B64  41 82 01 28 */	beq .L_80339D4C
/* 80339C28 00336B68  40 80 01 68 */	bge .L_80339D90
/* 80339C2C 00336B6C  2C 00 06 00 */	cmpwi r0, 0x600
/* 80339C30 00336B70  41 82 00 08 */	beq .L_80339C38
/* 80339C34 00336B74  48 00 01 5C */	b .L_80339D90
.L_80339C38:
/* 80339C38 00336B78  38 00 00 FF */	li r0, 0xff
/* 80339C3C 00336B7C  98 1F 00 99 */	stb r0, 0x99(r31)
/* 80339C40 00336B80  88 7F 01 68 */	lbz r3, 0x168(r31)
/* 80339C44 00336B84  28 03 00 10 */	cmplwi r3, 0x10
/* 80339C48 00336B88  41 82 00 5C */	beq .L_80339CA4
/* 80339C4C 00336B8C  88 1F 00 98 */	lbz r0, 0x98(r31)
/* 80339C50 00336B90  7C 03 00 40 */	cmplw r3, r0
/* 80339C54 00336B94  41 80 00 18 */	blt .L_80339C6C
/* 80339C58 00336B98  38 7E 00 00 */	addi r3, r30, 0
/* 80339C5C 00336B9C  38 BE 00 1C */	addi r5, r30, 0x1c
/* 80339C60 00336BA0  38 80 01 A0 */	li r4, 0x1a0
/* 80339C64 00336BA4  4C C6 31 82 */	crclr 6
/* 80339C68 00336BA8  4B CF 09 D9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80339C6C:
/* 80339C6C 00336BAC  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 80339C70 00336BB0  88 9F 01 68 */	lbz r4, 0x168(r31)
/* 80339C74 00336BB4  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80339C78 00336BB8  48 00 32 85 */	bl "getChild__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>FUc"
/* 80339C7C 00336BBC  90 7F 01 9C */	stw r3, 0x19c(r31)
/* 80339C80 00336BC0  80 1F 01 9C */	lwz r0, 0x19c(r31)
/* 80339C84 00336BC4  28 00 00 00 */	cmplwi r0, 0
/* 80339C88 00336BC8  40 82 00 24 */	bne .L_80339CAC
/* 80339C8C 00336BCC  38 7E 00 00 */	addi r3, r30, 0
/* 80339C90 00336BD0  38 BE 00 10 */	addi r5, r30, 0x10
/* 80339C94 00336BD4  38 80 01 A2 */	li r4, 0x1a2
/* 80339C98 00336BD8  4C C6 31 82 */	crclr 6
/* 80339C9C 00336BDC  4B CF 09 A5 */	bl panic_f__12JUTExceptionFPCciPCce
/* 80339CA0 00336BE0  48 00 00 0C */	b .L_80339CAC
.L_80339CA4:
/* 80339CA4 00336BE4  38 00 00 00 */	li r0, 0
/* 80339CA8 00336BE8  90 1F 01 9C */	stw r0, 0x19c(r31)
.L_80339CAC:
/* 80339CAC 00336BEC  7F E3 FB 78 */	mr r3, r31
/* 80339CB0 00336BF0  48 00 2E 75 */	bl "getChildNum__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>Fv"
/* 80339CB4 00336BF4  54 7D 06 3E */	clrlwi r29, r3, 0x18
/* 80339CB8 00336BF8  3B 80 00 00 */	li r28, 0
/* 80339CBC 00336BFC  3B C0 00 00 */	li r30, 0
/* 80339CC0 00336C00  48 00 00 18 */	b .L_80339CD8
.L_80339CC4:
/* 80339CC4 00336C04  7F E3 FB 78 */	mr r3, r31
/* 80339CC8 00336C08  7F 84 E3 78 */	mr r4, r28
/* 80339CCC 00336C0C  48 00 30 51 */	bl "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
/* 80339CD0 00336C10  9B C3 02 C1 */	stb r30, 0x2c1(r3)
/* 80339CD4 00336C14  3B 9C 00 01 */	addi r28, r28, 1
.L_80339CD8:
/* 80339CD8 00336C18  57 80 06 3E */	clrlwi r0, r28, 0x18
/* 80339CDC 00336C1C  7C 00 E8 40 */	cmplw r0, r29
/* 80339CE0 00336C20  41 80 FF E4 */	blt .L_80339CC4
/* 80339CE4 00336C24  80 7F 01 9C */	lwz r3, 0x19c(r31)
/* 80339CE8 00336C28  28 03 00 00 */	cmplwi r3, 0
/* 80339CEC 00336C2C  41 82 00 28 */	beq .L_80339D14
/* 80339CF0 00336C30  88 63 00 FC */	lbz r3, 0xfc(r3)
/* 80339CF4 00336C34  38 00 00 3C */	li r0, 0x3c
/* 80339CF8 00336C38  38 83 FF FF */	addi r4, r3, -1
/* 80339CFC 00336C3C  20 63 00 01 */	subfic r3, r3, 1
/* 80339D00 00336C40  7C 83 18 F8 */	nor r3, r4, r3
/* 80339D04 00336C44  7C 63 FE 70 */	srawi r3, r3, 0x1f
/* 80339D08 00336C48  7C 00 18 38 */	and r0, r0, r3
/* 80339D0C 00336C4C  54 03 04 3E */	clrlwi r3, r0, 0x10
/* 80339D10 00336C50  48 00 00 24 */	b .L_80339D34
.L_80339D14:
/* 80339D14 00336C54  88 7F 00 FC */	lbz r3, 0xfc(r31)
/* 80339D18 00336C58  38 00 00 3C */	li r0, 0x3c
/* 80339D1C 00336C5C  38 83 FF FF */	addi r4, r3, -1
/* 80339D20 00336C60  20 63 00 01 */	subfic r3, r3, 1
/* 80339D24 00336C64  7C 83 18 F8 */	nor r3, r4, r3
/* 80339D28 00336C68  7C 63 FE 70 */	srawi r3, r3, 0x1f
/* 80339D2C 00336C6C  7C 00 18 38 */	and r0, r0, r3
/* 80339D30 00336C70  54 03 04 3E */	clrlwi r3, r0, 0x10
.L_80339D34:
/* 80339D34 00336C74  A8 1F 00 CC */	lha r0, 0xcc(r31)
/* 80339D38 00336C78  54 00 04 3E */	clrlwi r0, r0, 0x10
/* 80339D3C 00336C7C  1C 00 00 78 */	mulli r0, r0, 0x78
/* 80339D40 00336C80  7C 03 02 14 */	add r0, r3, r0
/* 80339D44 00336C84  54 03 04 3E */	clrlwi r3, r0, 0x10
/* 80339D48 00336C88  48 00 00 4C */	b .L_80339D94
.L_80339D4C:
/* 80339D4C 00336C8C  48 00 00 5D */	bl incCurModule__Q29PSAutoBgm5TrackFv
/* 80339D50 00336C90  88 9F 00 99 */	lbz r4, 0x99(r31)
/* 80339D54 00336C94  7F E3 FB 78 */	mr r3, r31
/* 80339D58 00336C98  48 00 2F C5 */	bl "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
/* 80339D5C 00336C9C  28 03 00 00 */	cmplwi r3, 0
/* 80339D60 00336CA0  41 82 00 28 */	beq .L_80339D88
/* 80339D64 00336CA4  88 9F 00 99 */	lbz r4, 0x99(r31)
/* 80339D68 00336CA8  7F E3 FB 78 */	mr r3, r31
/* 80339D6C 00336CAC  48 00 2F B1 */	bl "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
/* 80339D70 00336CB0  7F 44 D3 78 */	mr r4, r26
/* 80339D74 00336CB4  7F 65 DB 78 */	mr r5, r27
/* 80339D78 00336CB8  7F A6 EB 78 */	mr r6, r29
/* 80339D7C 00336CBC  7F 87 E3 78 */	mr r7, r28
/* 80339D80 00336CC0  48 00 0D A1 */	bl seqCpuSync_AutoBgm_Module__Q29PSAutoBgm6ModuleFP8JASTrackUsUlP8JASTrack
/* 80339D84 00336CC4  48 00 00 10 */	b .L_80339D94
.L_80339D88:
/* 80339D88 00336CC8  38 60 00 00 */	li r3, 0
/* 80339D8C 00336CCC  48 00 00 08 */	b .L_80339D94
.L_80339D90:
/* 80339D90 00336CD0  38 60 00 00 */	li r3, 0
.L_80339D94:
/* 80339D94 00336CD4  BB 41 00 08 */	lmw r26, 8(r1)
/* 80339D98 00336CD8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80339D9C 00336CDC  7C 08 03 A6 */	mtlr r0
/* 80339DA0 00336CE0  38 21 00 20 */	addi r1, r1, 0x20
/* 80339DA4 00336CE4  4E 80 00 20 */	blr 
.endfn seqCpuSync_AutoBgm_Track__Q29PSAutoBgm5TrackFP8JASTrackUsUlP8JASTrack

.fn incCurModule__Q29PSAutoBgm5TrackFv, global
/* 80339DA8 00336CE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80339DAC 00336CEC  7C 08 02 A6 */	mflr r0
/* 80339DB0 00336CF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80339DB4 00336CF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80339DB8 00336CF8  7C 7F 1B 78 */	mr r31, r3
/* 80339DBC 00336CFC  88 03 00 99 */	lbz r0, 0x99(r3)
/* 80339DC0 00336D00  28 00 00 FF */	cmplwi r0, 0xff
/* 80339DC4 00336D04  40 82 00 10 */	bne .L_80339DD4
/* 80339DC8 00336D08  38 00 00 00 */	li r0, 0
/* 80339DCC 00336D0C  98 1F 00 99 */	stb r0, 0x99(r31)
/* 80339DD0 00336D10  48 00 00 24 */	b .L_80339DF4
.L_80339DD4:
/* 80339DD4 00336D14  48 00 2D 51 */	bl "getChildNum__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>Fv"
/* 80339DD8 00336D18  54 64 06 3E */	clrlwi r4, r3, 0x18
/* 80339DDC 00336D1C  88 7F 00 99 */	lbz r3, 0x99(r31)
/* 80339DE0 00336D20  38 04 FF FF */	addi r0, r4, -1
/* 80339DE4 00336D24  7C 03 00 00 */	cmpw r3, r0
/* 80339DE8 00336D28  41 82 00 0C */	beq .L_80339DF4
/* 80339DEC 00336D2C  38 03 00 01 */	addi r0, r3, 1
/* 80339DF0 00336D30  98 1F 00 99 */	stb r0, 0x99(r31)
.L_80339DF4:
/* 80339DF4 00336D34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80339DF8 00336D38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80339DFC 00336D3C  7C 08 03 A6 */	mtlr r0
/* 80339E00 00336D40  38 21 00 10 */	addi r1, r1, 0x10
/* 80339E04 00336D44  4E 80 00 20 */	blr 
.endfn incCurModule__Q29PSAutoBgm5TrackFv

.fn afterGetFromFree__Q29PSAutoBgm6ModuleFv, global
/* 80339E08 00336D48  38 A0 00 40 */	li r5, 0x40
/* 80339E0C 00336D4C  38 80 00 00 */	li r4, 0
/* 80339E10 00336D50  B0 A3 00 C0 */	sth r5, 0xc0(r3)
/* 80339E14 00336D54  38 00 00 60 */	li r0, 0x60
/* 80339E18 00336D58  98 83 01 80 */	stb r4, 0x180(r3)
/* 80339E1C 00336D5C  B0 83 01 B0 */	sth r4, 0x1b0(r3)
/* 80339E20 00336D60  B0 83 01 E0 */	sth r4, 0x1e0(r3)
/* 80339E24 00336D64  98 83 00 F0 */	stb r4, 0xf0(r3)
/* 80339E28 00336D68  B0 83 00 90 */	sth r4, 0x90(r3)
/* 80339E2C 00336D6C  98 83 01 20 */	stb r4, 0x120(r3)
/* 80339E30 00336D70  B0 83 02 10 */	sth r4, 0x210(r3)
/* 80339E34 00336D74  98 03 02 40 */	stb r0, 0x240(r3)
/* 80339E38 00336D78  98 A3 02 70 */	stb r5, 0x270(r3)
/* 80339E3C 00336D7C  90 83 02 A8 */	stw r4, 0x2a8(r3)
/* 80339E40 00336D80  90 83 02 B0 */	stw r4, 0x2b0(r3)
/* 80339E44 00336D84  98 83 02 B4 */	stb r4, 0x2b4(r3)
/* 80339E48 00336D88  B0 83 02 A4 */	sth r4, 0x2a4(r3)
/* 80339E4C 00336D8C  98 83 02 C1 */	stb r4, 0x2c1(r3)
/* 80339E50 00336D90  98 83 02 A0 */	stb r4, 0x2a0(r3)
/* 80339E54 00336D94  98 83 02 C0 */	stb r4, 0x2c0(r3)
/* 80339E58 00336D98  4E 80 00 20 */	blr 
.endfn afterGetFromFree__Q29PSAutoBgm6ModuleFv

.fn __ct__Q29PSAutoBgm6ModuleFv, global
/* 80339E5C 00336D9C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80339E60 00336DA0  7C 08 02 A6 */	mflr r0
/* 80339E64 00336DA4  38 80 00 01 */	li r4, 1
/* 80339E68 00336DA8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80339E6C 00336DAC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80339E70 00336DB0  7C 7F 1B 78 */	mr r31, r3
/* 80339E74 00336DB4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80339E78 00336DB8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80339E7C 00336DBC  4B D8 06 E9 */	bl __ct__Q210JADUtility10PrmSetBaseFb
/* 80339E80 00336DC0  3C 60 80 4E */	lis r3, __vt__Q29PSAutoBgm6Module@ha
/* 80339E84 00336DC4  3B BF 00 64 */	addi r29, r31, 0x64
/* 80339E88 00336DC8  38 03 AC 04 */	addi r0, r3, __vt__Q29PSAutoBgm6Module@l
/* 80339E8C 00336DCC  90 1F 00 00 */	stw r0, 0(r31)
/* 80339E90 00336DD0  7F A3 EB 78 */	mr r3, r29
/* 80339E94 00336DD4  4B CE 31 39 */	bl __ct__11JKRDisposerFv
/* 80339E98 00336DD8  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 80339E9C 00336DDC  38 00 00 00 */	li r0, 0
/* 80339EA0 00336DE0  38 63 67 74 */	addi r3, r3, __vt__Q210JADUtility7PrmBase@l
/* 80339EA4 00336DE4  7F A4 EB 78 */	mr r4, r29
/* 80339EA8 00336DE8  90 7D 00 00 */	stw r3, 0(r29)
/* 80339EAC 00336DEC  38 7D 00 1C */	addi r3, r29, 0x1c
/* 80339EB0 00336DF0  98 1D 00 18 */	stb r0, 0x18(r29)
/* 80339EB4 00336DF4  4B CE C9 05 */	bl __ct__10JSUPtrLinkFPv
/* 80339EB8 00336DF8  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility6Prm<s>"@ha
/* 80339EBC 00336DFC  3B DF 00 94 */	addi r30, r31, 0x94
/* 80339EC0 00336E00  38 03 AC B4 */	addi r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
/* 80339EC4 00336E04  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
/* 80339EC8 00336E08  90 1D 00 00 */	stw r0, 0(r29)
/* 80339ECC 00336E0C  38 03 AC A0 */	addi r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
/* 80339ED0 00336E10  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
/* 80339ED4 00336E14  90 1D 00 00 */	stw r0, 0(r29)
/* 80339ED8 00336E18  38 03 AC 8C */	addi r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
/* 80339EDC 00336E1C  90 1D 00 00 */	stw r0, 0(r29)
/* 80339EE0 00336E20  7F C3 F3 78 */	mr r3, r30
/* 80339EE4 00336E24  4B CE 30 E9 */	bl __ct__11JKRDisposerFv
/* 80339EE8 00336E28  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 80339EEC 00336E2C  38 00 00 00 */	li r0, 0
/* 80339EF0 00336E30  38 63 67 74 */	addi r3, r3, __vt__Q210JADUtility7PrmBase@l
/* 80339EF4 00336E34  7F C4 F3 78 */	mr r4, r30
/* 80339EF8 00336E38  90 7E 00 00 */	stw r3, 0(r30)
/* 80339EFC 00336E3C  38 7E 00 1C */	addi r3, r30, 0x1c
/* 80339F00 00336E40  98 1E 00 18 */	stb r0, 0x18(r30)
/* 80339F04 00336E44  4B CE C8 B5 */	bl __ct__10JSUPtrLinkFPv
/* 80339F08 00336E48  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility6Prm<s>"@ha
/* 80339F0C 00336E4C  3B BF 00 C4 */	addi r29, r31, 0xc4
/* 80339F10 00336E50  38 03 AC B4 */	addi r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
/* 80339F14 00336E54  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
/* 80339F18 00336E58  90 1E 00 00 */	stw r0, 0(r30)
/* 80339F1C 00336E5C  38 03 AC A0 */	addi r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
/* 80339F20 00336E60  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
/* 80339F24 00336E64  90 1E 00 00 */	stw r0, 0(r30)
/* 80339F28 00336E68  38 03 AC 8C */	addi r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
/* 80339F2C 00336E6C  90 1E 00 00 */	stw r0, 0(r30)
/* 80339F30 00336E70  7F A3 EB 78 */	mr r3, r29
/* 80339F34 00336E74  4B CE 30 99 */	bl __ct__11JKRDisposerFv
/* 80339F38 00336E78  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 80339F3C 00336E7C  38 00 00 00 */	li r0, 0
/* 80339F40 00336E80  38 63 67 74 */	addi r3, r3, __vt__Q210JADUtility7PrmBase@l
/* 80339F44 00336E84  7F A4 EB 78 */	mr r4, r29
/* 80339F48 00336E88  90 7D 00 00 */	stw r3, 0(r29)
/* 80339F4C 00336E8C  38 7D 00 1C */	addi r3, r29, 0x1c
/* 80339F50 00336E90  98 1D 00 18 */	stb r0, 0x18(r29)
/* 80339F54 00336E94  4B CE C8 65 */	bl __ct__10JSUPtrLinkFPv
/* 80339F58 00336E98  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 80339F5C 00336E9C  3B DF 00 F4 */	addi r30, r31, 0xf4
/* 80339F60 00336EA0  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 80339F64 00336EA4  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 80339F68 00336EA8  90 1D 00 00 */	stw r0, 0(r29)
/* 80339F6C 00336EAC  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 80339F70 00336EB0  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
/* 80339F74 00336EB4  90 1D 00 00 */	stw r0, 0(r29)
/* 80339F78 00336EB8  38 03 AD 2C */	addi r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
/* 80339F7C 00336EBC  90 1D 00 00 */	stw r0, 0(r29)
/* 80339F80 00336EC0  7F C3 F3 78 */	mr r3, r30
/* 80339F84 00336EC4  4B CE 30 49 */	bl __ct__11JKRDisposerFv
/* 80339F88 00336EC8  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 80339F8C 00336ECC  38 00 00 00 */	li r0, 0
/* 80339F90 00336ED0  38 63 67 74 */	addi r3, r3, __vt__Q210JADUtility7PrmBase@l
/* 80339F94 00336ED4  7F C4 F3 78 */	mr r4, r30
/* 80339F98 00336ED8  90 7E 00 00 */	stw r3, 0(r30)
/* 80339F9C 00336EDC  38 7E 00 1C */	addi r3, r30, 0x1c
/* 80339FA0 00336EE0  98 1E 00 18 */	stb r0, 0x18(r30)
/* 80339FA4 00336EE4  4B CE C8 15 */	bl __ct__10JSUPtrLinkFPv
/* 80339FA8 00336EE8  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 80339FAC 00336EEC  3B BF 01 24 */	addi r29, r31, 0x124
/* 80339FB0 00336EF0  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 80339FB4 00336EF4  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 80339FB8 00336EF8  90 1E 00 00 */	stw r0, 0(r30)
/* 80339FBC 00336EFC  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 80339FC0 00336F00  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@ha
/* 80339FC4 00336F04  90 1E 00 00 */	stw r0, 0(r30)
/* 80339FC8 00336F08  38 03 AD 18 */	addi r0, r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@l
/* 80339FCC 00336F0C  90 1E 00 00 */	stw r0, 0(r30)
/* 80339FD0 00336F10  7F A3 EB 78 */	mr r3, r29
/* 80339FD4 00336F14  4B CE 2F F9 */	bl __ct__11JKRDisposerFv
/* 80339FD8 00336F18  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 80339FDC 00336F1C  38 00 00 00 */	li r0, 0
/* 80339FE0 00336F20  38 63 67 74 */	addi r3, r3, __vt__Q210JADUtility7PrmBase@l
/* 80339FE4 00336F24  7F A4 EB 78 */	mr r4, r29
/* 80339FE8 00336F28  90 7D 00 00 */	stw r3, 0(r29)
/* 80339FEC 00336F2C  38 7D 00 1C */	addi r3, r29, 0x1c
/* 80339FF0 00336F30  98 1D 00 18 */	stb r0, 0x18(r29)
/* 80339FF4 00336F34  4B CE C7 C5 */	bl __ct__10JSUPtrLinkFPv
/* 80339FF8 00336F38  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 80339FFC 00336F3C  3B DF 01 54 */	addi r30, r31, 0x154
/* 8033A000 00336F40  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 8033A004 00336F44  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 8033A008 00336F48  90 1D 00 00 */	stw r0, 0(r29)
/* 8033A00C 00336F4C  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 8033A010 00336F50  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
/* 8033A014 00336F54  90 1D 00 00 */	stw r0, 0(r29)
/* 8033A018 00336F58  38 03 AD 2C */	addi r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
/* 8033A01C 00336F5C  90 1D 00 00 */	stw r0, 0(r29)
/* 8033A020 00336F60  7F C3 F3 78 */	mr r3, r30
/* 8033A024 00336F64  4B CE 2F A9 */	bl __ct__11JKRDisposerFv
/* 8033A028 00336F68  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 8033A02C 00336F6C  38 00 00 00 */	li r0, 0
/* 8033A030 00336F70  38 63 67 74 */	addi r3, r3, __vt__Q210JADUtility7PrmBase@l
/* 8033A034 00336F74  7F C4 F3 78 */	mr r4, r30
/* 8033A038 00336F78  90 7E 00 00 */	stw r3, 0(r30)
/* 8033A03C 00336F7C  38 7E 00 1C */	addi r3, r30, 0x1c
/* 8033A040 00336F80  98 1E 00 18 */	stb r0, 0x18(r30)
/* 8033A044 00336F84  4B CE C7 75 */	bl __ct__10JSUPtrLinkFPv
/* 8033A048 00336F88  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 8033A04C 00336F8C  3B BF 01 84 */	addi r29, r31, 0x184
/* 8033A050 00336F90  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 8033A054 00336F94  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 8033A058 00336F98  90 1E 00 00 */	stw r0, 0(r30)
/* 8033A05C 00336F9C  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 8033A060 00336FA0  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
/* 8033A064 00336FA4  90 1E 00 00 */	stw r0, 0(r30)
/* 8033A068 00336FA8  38 03 AD 2C */	addi r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
/* 8033A06C 00336FAC  90 1E 00 00 */	stw r0, 0(r30)
/* 8033A070 00336FB0  7F A3 EB 78 */	mr r3, r29
/* 8033A074 00336FB4  4B CE 2F 59 */	bl __ct__11JKRDisposerFv
/* 8033A078 00336FB8  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 8033A07C 00336FBC  38 00 00 00 */	li r0, 0
/* 8033A080 00336FC0  38 63 67 74 */	addi r3, r3, __vt__Q210JADUtility7PrmBase@l
/* 8033A084 00336FC4  7F A4 EB 78 */	mr r4, r29
/* 8033A088 00336FC8  90 7D 00 00 */	stw r3, 0(r29)
/* 8033A08C 00336FCC  38 7D 00 1C */	addi r3, r29, 0x1c
/* 8033A090 00336FD0  98 1D 00 18 */	stb r0, 0x18(r29)
/* 8033A094 00336FD4  4B CE C7 25 */	bl __ct__10JSUPtrLinkFPv
/* 8033A098 00336FD8  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility6Prm<s>"@ha
/* 8033A09C 00336FDC  3B DF 01 B4 */	addi r30, r31, 0x1b4
/* 8033A0A0 00336FE0  38 03 AC B4 */	addi r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
/* 8033A0A4 00336FE4  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
/* 8033A0A8 00336FE8  90 1D 00 00 */	stw r0, 0(r29)
/* 8033A0AC 00336FEC  38 03 AC A0 */	addi r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
/* 8033A0B0 00336FF0  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
/* 8033A0B4 00336FF4  90 1D 00 00 */	stw r0, 0(r29)
/* 8033A0B8 00336FF8  38 03 AC 8C */	addi r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
/* 8033A0BC 00336FFC  90 1D 00 00 */	stw r0, 0(r29)
/* 8033A0C0 00337000  7F C3 F3 78 */	mr r3, r30
/* 8033A0C4 00337004  4B CE 2F 09 */	bl __ct__11JKRDisposerFv
/* 8033A0C8 00337008  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 8033A0CC 0033700C  38 00 00 00 */	li r0, 0
/* 8033A0D0 00337010  38 63 67 74 */	addi r3, r3, __vt__Q210JADUtility7PrmBase@l
/* 8033A0D4 00337014  7F C4 F3 78 */	mr r4, r30
/* 8033A0D8 00337018  90 7E 00 00 */	stw r3, 0(r30)
/* 8033A0DC 0033701C  38 7E 00 1C */	addi r3, r30, 0x1c
/* 8033A0E0 00337020  98 1E 00 18 */	stb r0, 0x18(r30)
/* 8033A0E4 00337024  4B CE C6 D5 */	bl __ct__10JSUPtrLinkFPv
/* 8033A0E8 00337028  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility6Prm<s>"@ha
/* 8033A0EC 0033702C  3B BF 01 E4 */	addi r29, r31, 0x1e4
/* 8033A0F0 00337030  38 03 AC B4 */	addi r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
/* 8033A0F4 00337034  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
/* 8033A0F8 00337038  90 1E 00 00 */	stw r0, 0(r30)
/* 8033A0FC 0033703C  38 03 AC A0 */	addi r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
/* 8033A100 00337040  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
/* 8033A104 00337044  90 1E 00 00 */	stw r0, 0(r30)
/* 8033A108 00337048  38 03 AC 8C */	addi r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
/* 8033A10C 0033704C  90 1E 00 00 */	stw r0, 0(r30)
/* 8033A110 00337050  7F A3 EB 78 */	mr r3, r29
/* 8033A114 00337054  4B CE 2E B9 */	bl __ct__11JKRDisposerFv
/* 8033A118 00337058  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 8033A11C 0033705C  38 00 00 00 */	li r0, 0
/* 8033A120 00337060  38 63 67 74 */	addi r3, r3, __vt__Q210JADUtility7PrmBase@l
/* 8033A124 00337064  7F A4 EB 78 */	mr r4, r29
/* 8033A128 00337068  90 7D 00 00 */	stw r3, 0(r29)
/* 8033A12C 0033706C  38 7D 00 1C */	addi r3, r29, 0x1c
/* 8033A130 00337070  98 1D 00 18 */	stb r0, 0x18(r29)
/* 8033A134 00337074  4B CE C6 85 */	bl __ct__10JSUPtrLinkFPv
/* 8033A138 00337078  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility6Prm<s>"@ha
/* 8033A13C 0033707C  3B DF 02 14 */	addi r30, r31, 0x214
/* 8033A140 00337080  38 03 AC B4 */	addi r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
/* 8033A144 00337084  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
/* 8033A148 00337088  90 1D 00 00 */	stw r0, 0(r29)
/* 8033A14C 0033708C  38 03 AC A0 */	addi r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
/* 8033A150 00337090  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
/* 8033A154 00337094  90 1D 00 00 */	stw r0, 0(r29)
/* 8033A158 00337098  38 03 AC 8C */	addi r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
/* 8033A15C 0033709C  90 1D 00 00 */	stw r0, 0(r29)
/* 8033A160 003370A0  7F C3 F3 78 */	mr r3, r30
/* 8033A164 003370A4  4B CE 2E 69 */	bl __ct__11JKRDisposerFv
/* 8033A168 003370A8  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 8033A16C 003370AC  38 00 00 00 */	li r0, 0
/* 8033A170 003370B0  38 63 67 74 */	addi r3, r3, __vt__Q210JADUtility7PrmBase@l
/* 8033A174 003370B4  7F C4 F3 78 */	mr r4, r30
/* 8033A178 003370B8  90 7E 00 00 */	stw r3, 0(r30)
/* 8033A17C 003370BC  38 7E 00 1C */	addi r3, r30, 0x1c
/* 8033A180 003370C0  98 1E 00 18 */	stb r0, 0x18(r30)
/* 8033A184 003370C4  4B CE C6 35 */	bl __ct__10JSUPtrLinkFPv
/* 8033A188 003370C8  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 8033A18C 003370CC  3B BF 02 44 */	addi r29, r31, 0x244
/* 8033A190 003370D0  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 8033A194 003370D4  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 8033A198 003370D8  90 1E 00 00 */	stw r0, 0(r30)
/* 8033A19C 003370DC  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 8033A1A0 003370E0  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
/* 8033A1A4 003370E4  90 1E 00 00 */	stw r0, 0(r30)
/* 8033A1A8 003370E8  38 03 AD 2C */	addi r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
/* 8033A1AC 003370EC  90 1E 00 00 */	stw r0, 0(r30)
/* 8033A1B0 003370F0  7F A3 EB 78 */	mr r3, r29
/* 8033A1B4 003370F4  4B CE 2E 19 */	bl __ct__11JKRDisposerFv
/* 8033A1B8 003370F8  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 8033A1BC 003370FC  38 00 00 00 */	li r0, 0
/* 8033A1C0 00337100  38 63 67 74 */	addi r3, r3, __vt__Q210JADUtility7PrmBase@l
/* 8033A1C4 00337104  7F A4 EB 78 */	mr r4, r29
/* 8033A1C8 00337108  90 7D 00 00 */	stw r3, 0(r29)
/* 8033A1CC 0033710C  38 7D 00 1C */	addi r3, r29, 0x1c
/* 8033A1D0 00337110  98 1D 00 18 */	stb r0, 0x18(r29)
/* 8033A1D4 00337114  4B CE C5 E5 */	bl __ct__10JSUPtrLinkFPv
/* 8033A1D8 00337118  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 8033A1DC 0033711C  3B DF 02 74 */	addi r30, r31, 0x274
/* 8033A1E0 00337120  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 8033A1E4 00337124  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 8033A1E8 00337128  90 1D 00 00 */	stw r0, 0(r29)
/* 8033A1EC 0033712C  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 8033A1F0 00337130  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
/* 8033A1F4 00337134  90 1D 00 00 */	stw r0, 0(r29)
/* 8033A1F8 00337138  38 03 AD 2C */	addi r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
/* 8033A1FC 0033713C  90 1D 00 00 */	stw r0, 0(r29)
/* 8033A200 00337140  7F C3 F3 78 */	mr r3, r30
/* 8033A204 00337144  4B CE 2D C9 */	bl __ct__11JKRDisposerFv
/* 8033A208 00337148  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 8033A20C 0033714C  38 00 00 00 */	li r0, 0
/* 8033A210 00337150  38 63 67 74 */	addi r3, r3, __vt__Q210JADUtility7PrmBase@l
/* 8033A214 00337154  7F C4 F3 78 */	mr r4, r30
/* 8033A218 00337158  90 7E 00 00 */	stw r3, 0(r30)
/* 8033A21C 0033715C  38 7E 00 1C */	addi r3, r30, 0x1c
/* 8033A220 00337160  98 1E 00 18 */	stb r0, 0x18(r30)
/* 8033A224 00337164  4B CE C5 95 */	bl __ct__10JSUPtrLinkFPv
/* 8033A228 00337168  3C 80 80 4E */	lis r4, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 8033A22C 0033716C  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 8033A230 00337170  38 04 AD 54 */	addi r0, r4, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 8033A234 00337174  3C 80 80 4E */	lis r4, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@ha
/* 8033A238 00337178  90 1E 00 00 */	stw r0, 0(r30)
/* 8033A23C 0033717C  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 8033A240 00337180  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8033A244 00337184  38 A4 AD 18 */	addi r5, r4, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@l
/* 8033A248 00337188  90 1E 00 00 */	stw r0, 0(r30)
/* 8033A24C 0033718C  38 80 00 00 */	li r4, 0
/* 8033A250 00337190  38 03 FF FF */	addi r0, r3, 0x0000FFFF@l
/* 8033A254 00337194  38 60 00 68 */	li r3, 0x68
/* 8033A258 00337198  90 BE 00 00 */	stw r5, 0(r30)
/* 8033A25C 0033719C  38 A0 00 00 */	li r5, 0
/* 8033A260 003371A0  B0 9F 02 A4 */	sth r4, 0x2a4(r31)
/* 8033A264 003371A4  90 9F 02 A8 */	stw r4, 0x2a8(r31)
/* 8033A268 003371A8  98 9F 02 AC */	stb r4, 0x2ac(r31)
/* 8033A26C 003371AC  90 9F 02 B0 */	stw r4, 0x2b0(r31)
/* 8033A270 003371B0  98 9F 02 B4 */	stb r4, 0x2b4(r31)
/* 8033A274 003371B4  98 9F 02 C0 */	stb r4, 0x2c0(r31)
/* 8033A278 003371B8  98 9F 02 C1 */	stb r4, 0x2c1(r31)
/* 8033A27C 003371BC  B0 1F 02 C2 */	sth r0, 0x2c2(r31)
/* 8033A280 003371C0  80 8D 98 68 */	lwz r4, sHeap__Q29PSAutoBgm12ConductorMgr@sda21(r13)
/* 8033A284 003371C4  4B CE 9C BD */	bl __nw__FUlP7JKRHeapi
/* 8033A288 003371C8  7C 60 1B 79 */	or. r0, r3, r3
/* 8033A28C 003371CC  41 82 00 10 */	beq .L_8033A29C
/* 8033A290 003371D0  7F E4 FB 78 */	mr r4, r31
/* 8033A294 003371D4  48 00 0F F9 */	bl __ct__Q29PSAutoBgm7OnCycleFPQ29PSAutoBgm6Module
/* 8033A298 003371D8  7C 60 1B 78 */	mr r0, r3
.L_8033A29C:
/* 8033A29C 003371DC  90 1F 02 B8 */	stw r0, 0x2b8(r31)
/* 8033A2A0 003371E0  38 60 00 40 */	li r3, 0x40
/* 8033A2A4 003371E4  38 A0 00 00 */	li r5, 0
/* 8033A2A8 003371E8  80 8D 98 68 */	lwz r4, sHeap__Q29PSAutoBgm12ConductorMgr@sda21(r13)
/* 8033A2AC 003371EC  4B CE 9C 95 */	bl __nw__FUlP7JKRHeapi
/* 8033A2B0 003371F0  7C 60 1B 79 */	or. r0, r3, r3
/* 8033A2B4 003371F4  41 82 00 10 */	beq .L_8033A2C4
/* 8033A2B8 003371F8  7F E4 FB 78 */	mr r4, r31
/* 8033A2BC 003371FC  48 00 18 99 */	bl __ct__Q29PSAutoBgm8OffCycleFPQ29PSAutoBgm6Module
/* 8033A2C0 00337200  7C 60 1B 78 */	mr r0, r3
.L_8033A2C4:
/* 8033A2C4 00337204  90 1F 02 BC */	stw r0, 0x2bc(r31)
/* 8033A2C8 00337208  38 9F 00 80 */	addi r4, r31, 0x80
/* 8033A2CC 0033720C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8033A2D0 00337210  4B CE C6 15 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8033A2D4 00337214  38 9F 00 B0 */	addi r4, r31, 0xb0
/* 8033A2D8 00337218  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8033A2DC 0033721C  4B CE C6 09 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8033A2E0 00337220  38 9F 00 E0 */	addi r4, r31, 0xe0
/* 8033A2E4 00337224  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8033A2E8 00337228  4B CE C5 FD */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8033A2EC 0033722C  38 9F 01 10 */	addi r4, r31, 0x110
/* 8033A2F0 00337230  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8033A2F4 00337234  4B CE C5 F1 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8033A2F8 00337238  38 9F 01 40 */	addi r4, r31, 0x140
/* 8033A2FC 0033723C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8033A300 00337240  4B CE C5 E5 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8033A304 00337244  38 9F 01 70 */	addi r4, r31, 0x170
/* 8033A308 00337248  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8033A30C 0033724C  4B CE C5 D9 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8033A310 00337250  38 9F 01 A0 */	addi r4, r31, 0x1a0
/* 8033A314 00337254  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8033A318 00337258  4B CE C5 CD */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8033A31C 0033725C  38 9F 01 D0 */	addi r4, r31, 0x1d0
/* 8033A320 00337260  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8033A324 00337264  4B CE C5 C1 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8033A328 00337268  80 9F 02 B8 */	lwz r4, 0x2b8(r31)
/* 8033A32C 0033726C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8033A330 00337270  38 84 00 28 */	addi r4, r4, 0x28
/* 8033A334 00337274  4B CE C5 B1 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8033A338 00337278  80 9F 02 BC */	lwz r4, 0x2bc(r31)
/* 8033A33C 0033727C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8033A340 00337280  38 84 00 28 */	addi r4, r4, 0x28
/* 8033A344 00337284  4B CE C5 A1 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8033A348 00337288  38 9F 02 00 */	addi r4, r31, 0x200
/* 8033A34C 0033728C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8033A350 00337290  4B CE C5 95 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8033A354 00337294  38 9F 02 30 */	addi r4, r31, 0x230
/* 8033A358 00337298  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8033A35C 0033729C  4B CE C5 89 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8033A360 003372A0  38 9F 02 60 */	addi r4, r31, 0x260
/* 8033A364 003372A4  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8033A368 003372A8  4B CE C5 7D */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8033A36C 003372AC  38 9F 02 90 */	addi r4, r31, 0x290
/* 8033A370 003372B0  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8033A374 003372B4  4B CE C5 71 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8033A378 003372B8  38 00 00 15 */	li r0, 0x15
/* 8033A37C 003372BC  3C 60 80 34 */	lis r3, removeCallback__Q29PSAutoBgm6ModuleFUcPv@ha
/* 8033A380 003372C0  98 1F 00 19 */	stb r0, 0x19(r31)
/* 8033A384 003372C4  38 03 AA DC */	addi r0, r3, removeCallback__Q29PSAutoBgm6ModuleFUcPv@l
/* 8033A388 003372C8  7F E3 FB 78 */	mr r3, r31
/* 8033A38C 003372CC  90 1F 00 5C */	stw r0, 0x5c(r31)
/* 8033A390 003372D0  93 FF 00 60 */	stw r31, 0x60(r31)
/* 8033A394 003372D4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8033A398 003372D8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8033A39C 003372DC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8033A3A0 003372E0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8033A3A4 003372E4  7C 08 03 A6 */	mtlr r0
/* 8033A3A8 003372E8  38 21 00 20 */	addi r1, r1, 0x20
/* 8033A3AC 003372EC  4E 80 00 20 */	blr 
.endfn __ct__Q29PSAutoBgm6ModuleFv

.fn __dt__Q29PSAutoBgm6ModuleFv, global
/* 8033A3B0 003372F0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8033A3B4 003372F4  7C 08 02 A6 */	mflr r0
/* 8033A3B8 003372F8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8033A3BC 003372FC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8033A3C0 00337300  7C 9F 23 78 */	mr r31, r4
/* 8033A3C4 00337304  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8033A3C8 00337308  7C 7E 1B 79 */	or. r30, r3, r3
/* 8033A3CC 0033730C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8033A3D0 00337310  41 82 06 EC */	beq .L_8033AABC
/* 8033A3D4 00337314  3C 60 80 4E */	lis r3, __vt__Q29PSAutoBgm6Module@ha
/* 8033A3D8 00337318  38 03 AC 04 */	addi r0, r3, __vt__Q29PSAutoBgm6Module@l
/* 8033A3DC 0033731C  90 1E 00 00 */	stw r0, 0(r30)
/* 8033A3E0 00337320  83 BE 02 B8 */	lwz r29, 0x2b8(r30)
/* 8033A3E4 00337324  28 1D 00 00 */	cmplwi r29, 0
/* 8033A3E8 00337328  41 82 00 84 */	beq .L_8033A46C
/* 8033A3EC 0033732C  3C 60 80 4E */	lis r3, __vt__Q29PSAutoBgm9CycleBase@ha
/* 8033A3F0 00337330  34 1D 00 0C */	addic. r0, r29, 0xc
/* 8033A3F4 00337334  38 03 AB F0 */	addi r0, r3, __vt__Q29PSAutoBgm9CycleBase@l
/* 8033A3F8 00337338  90 1D 00 00 */	stw r0, 0(r29)
/* 8033A3FC 0033733C  41 82 00 68 */	beq .L_8033A464
/* 8033A400 00337340  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
/* 8033A404 00337344  34 1D 00 0C */	addic. r0, r29, 0xc
/* 8033A408 00337348  38 03 AD 2C */	addi r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
/* 8033A40C 0033734C  90 1D 00 0C */	stw r0, 0xc(r29)
/* 8033A410 00337350  41 82 00 54 */	beq .L_8033A464
/* 8033A414 00337354  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 8033A418 00337358  34 1D 00 0C */	addic. r0, r29, 0xc
/* 8033A41C 0033735C  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 8033A420 00337360  90 1D 00 0C */	stw r0, 0xc(r29)
/* 8033A424 00337364  41 82 00 40 */	beq .L_8033A464
/* 8033A428 00337368  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 8033A42C 0033736C  34 1D 00 0C */	addic. r0, r29, 0xc
/* 8033A430 00337370  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 8033A434 00337374  90 1D 00 0C */	stw r0, 0xc(r29)
/* 8033A438 00337378  41 82 00 2C */	beq .L_8033A464
/* 8033A43C 0033737C  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 8033A440 00337380  34 7D 00 28 */	addic. r3, r29, 0x28
/* 8033A444 00337384  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 8033A448 00337388  90 1D 00 0C */	stw r0, 0xc(r29)
/* 8033A44C 0033738C  41 82 00 0C */	beq .L_8033A458
/* 8033A450 00337390  38 80 00 00 */	li r4, 0
/* 8033A454 00337394  4B CE C3 7D */	bl __dt__10JSUPtrLinkFv
.L_8033A458:
/* 8033A458 00337398  38 7D 00 0C */	addi r3, r29, 0xc
/* 8033A45C 0033739C  38 80 00 00 */	li r4, 0
/* 8033A460 003373A0  4B CE 2B D5 */	bl __dt__11JKRDisposerFv
.L_8033A464:
/* 8033A464 003373A4  7F A3 EB 78 */	mr r3, r29
/* 8033A468 003373A8  4B CE 9C 4D */	bl __dl__FPv
.L_8033A46C:
/* 8033A46C 003373AC  83 BE 02 BC */	lwz r29, 0x2bc(r30)
/* 8033A470 003373B0  28 1D 00 00 */	cmplwi r29, 0
/* 8033A474 003373B4  41 82 00 84 */	beq .L_8033A4F8
/* 8033A478 003373B8  3C 60 80 4E */	lis r3, __vt__Q29PSAutoBgm9CycleBase@ha
/* 8033A47C 003373BC  34 1D 00 0C */	addic. r0, r29, 0xc
/* 8033A480 003373C0  38 03 AB F0 */	addi r0, r3, __vt__Q29PSAutoBgm9CycleBase@l
/* 8033A484 003373C4  90 1D 00 00 */	stw r0, 0(r29)
/* 8033A488 003373C8  41 82 00 68 */	beq .L_8033A4F0
/* 8033A48C 003373CC  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
/* 8033A490 003373D0  34 1D 00 0C */	addic. r0, r29, 0xc
/* 8033A494 003373D4  38 03 AD 2C */	addi r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
/* 8033A498 003373D8  90 1D 00 0C */	stw r0, 0xc(r29)
/* 8033A49C 003373DC  41 82 00 54 */	beq .L_8033A4F0
/* 8033A4A0 003373E0  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 8033A4A4 003373E4  34 1D 00 0C */	addic. r0, r29, 0xc
/* 8033A4A8 003373E8  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 8033A4AC 003373EC  90 1D 00 0C */	stw r0, 0xc(r29)
/* 8033A4B0 003373F0  41 82 00 40 */	beq .L_8033A4F0
/* 8033A4B4 003373F4  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 8033A4B8 003373F8  34 1D 00 0C */	addic. r0, r29, 0xc
/* 8033A4BC 003373FC  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 8033A4C0 00337400  90 1D 00 0C */	stw r0, 0xc(r29)
/* 8033A4C4 00337404  41 82 00 2C */	beq .L_8033A4F0
/* 8033A4C8 00337408  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 8033A4CC 0033740C  34 7D 00 28 */	addic. r3, r29, 0x28
/* 8033A4D0 00337410  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 8033A4D4 00337414  90 1D 00 0C */	stw r0, 0xc(r29)
/* 8033A4D8 00337418  41 82 00 0C */	beq .L_8033A4E4
/* 8033A4DC 0033741C  38 80 00 00 */	li r4, 0
/* 8033A4E0 00337420  4B CE C2 F1 */	bl __dt__10JSUPtrLinkFv
.L_8033A4E4:
/* 8033A4E4 00337424  38 7D 00 0C */	addi r3, r29, 0xc
/* 8033A4E8 00337428  38 80 00 00 */	li r4, 0
/* 8033A4EC 0033742C  4B CE 2B 49 */	bl __dt__11JKRDisposerFv
.L_8033A4F0:
/* 8033A4F0 00337430  7F A3 EB 78 */	mr r3, r29
/* 8033A4F4 00337434  4B CE 9B C1 */	bl __dl__FPv
.L_8033A4F8:
/* 8033A4F8 00337438  34 1E 02 74 */	addic. r0, r30, 0x274
/* 8033A4FC 0033743C  41 82 00 68 */	beq .L_8033A564
/* 8033A500 00337440  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@ha
/* 8033A504 00337444  34 1E 02 74 */	addic. r0, r30, 0x274
/* 8033A508 00337448  38 03 AD 18 */	addi r0, r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@l
/* 8033A50C 0033744C  90 1E 02 74 */	stw r0, 0x274(r30)
/* 8033A510 00337450  41 82 00 54 */	beq .L_8033A564
/* 8033A514 00337454  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 8033A518 00337458  34 1E 02 74 */	addic. r0, r30, 0x274
/* 8033A51C 0033745C  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 8033A520 00337460  90 1E 02 74 */	stw r0, 0x274(r30)
/* 8033A524 00337464  41 82 00 40 */	beq .L_8033A564
/* 8033A528 00337468  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 8033A52C 0033746C  34 1E 02 74 */	addic. r0, r30, 0x274
/* 8033A530 00337470  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 8033A534 00337474  90 1E 02 74 */	stw r0, 0x274(r30)
/* 8033A538 00337478  41 82 00 2C */	beq .L_8033A564
/* 8033A53C 0033747C  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 8033A540 00337480  34 7E 02 90 */	addic. r3, r30, 0x290
/* 8033A544 00337484  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 8033A548 00337488  90 1E 02 74 */	stw r0, 0x274(r30)
/* 8033A54C 0033748C  41 82 00 0C */	beq .L_8033A558
/* 8033A550 00337490  38 80 00 00 */	li r4, 0
/* 8033A554 00337494  4B CE C2 7D */	bl __dt__10JSUPtrLinkFv
.L_8033A558:
/* 8033A558 00337498  38 7E 02 74 */	addi r3, r30, 0x274
/* 8033A55C 0033749C  38 80 00 00 */	li r4, 0
/* 8033A560 003374A0  4B CE 2A D5 */	bl __dt__11JKRDisposerFv
.L_8033A564:
/* 8033A564 003374A4  34 1E 02 44 */	addic. r0, r30, 0x244
/* 8033A568 003374A8  41 82 00 68 */	beq .L_8033A5D0
/* 8033A56C 003374AC  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
/* 8033A570 003374B0  34 1E 02 44 */	addic. r0, r30, 0x244
/* 8033A574 003374B4  38 03 AD 2C */	addi r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
/* 8033A578 003374B8  90 1E 02 44 */	stw r0, 0x244(r30)
/* 8033A57C 003374BC  41 82 00 54 */	beq .L_8033A5D0
/* 8033A580 003374C0  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 8033A584 003374C4  34 1E 02 44 */	addic. r0, r30, 0x244
/* 8033A588 003374C8  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 8033A58C 003374CC  90 1E 02 44 */	stw r0, 0x244(r30)
/* 8033A590 003374D0  41 82 00 40 */	beq .L_8033A5D0
/* 8033A594 003374D4  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 8033A598 003374D8  34 1E 02 44 */	addic. r0, r30, 0x244
/* 8033A59C 003374DC  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 8033A5A0 003374E0  90 1E 02 44 */	stw r0, 0x244(r30)
/* 8033A5A4 003374E4  41 82 00 2C */	beq .L_8033A5D0
/* 8033A5A8 003374E8  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 8033A5AC 003374EC  34 7E 02 60 */	addic. r3, r30, 0x260
/* 8033A5B0 003374F0  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 8033A5B4 003374F4  90 1E 02 44 */	stw r0, 0x244(r30)
/* 8033A5B8 003374F8  41 82 00 0C */	beq .L_8033A5C4
/* 8033A5BC 003374FC  38 80 00 00 */	li r4, 0
/* 8033A5C0 00337500  4B CE C2 11 */	bl __dt__10JSUPtrLinkFv
.L_8033A5C4:
/* 8033A5C4 00337504  38 7E 02 44 */	addi r3, r30, 0x244
/* 8033A5C8 00337508  38 80 00 00 */	li r4, 0
/* 8033A5CC 0033750C  4B CE 2A 69 */	bl __dt__11JKRDisposerFv
.L_8033A5D0:
/* 8033A5D0 00337510  34 1E 02 14 */	addic. r0, r30, 0x214
/* 8033A5D4 00337514  41 82 00 68 */	beq .L_8033A63C
/* 8033A5D8 00337518  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
/* 8033A5DC 0033751C  34 1E 02 14 */	addic. r0, r30, 0x214
/* 8033A5E0 00337520  38 03 AD 2C */	addi r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
/* 8033A5E4 00337524  90 1E 02 14 */	stw r0, 0x214(r30)
/* 8033A5E8 00337528  41 82 00 54 */	beq .L_8033A63C
/* 8033A5EC 0033752C  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 8033A5F0 00337530  34 1E 02 14 */	addic. r0, r30, 0x214
/* 8033A5F4 00337534  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 8033A5F8 00337538  90 1E 02 14 */	stw r0, 0x214(r30)
/* 8033A5FC 0033753C  41 82 00 40 */	beq .L_8033A63C
/* 8033A600 00337540  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 8033A604 00337544  34 1E 02 14 */	addic. r0, r30, 0x214
/* 8033A608 00337548  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 8033A60C 0033754C  90 1E 02 14 */	stw r0, 0x214(r30)
/* 8033A610 00337550  41 82 00 2C */	beq .L_8033A63C
/* 8033A614 00337554  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 8033A618 00337558  34 7E 02 30 */	addic. r3, r30, 0x230
/* 8033A61C 0033755C  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 8033A620 00337560  90 1E 02 14 */	stw r0, 0x214(r30)
/* 8033A624 00337564  41 82 00 0C */	beq .L_8033A630
/* 8033A628 00337568  38 80 00 00 */	li r4, 0
/* 8033A62C 0033756C  4B CE C1 A5 */	bl __dt__10JSUPtrLinkFv
.L_8033A630:
/* 8033A630 00337570  38 7E 02 14 */	addi r3, r30, 0x214
/* 8033A634 00337574  38 80 00 00 */	li r4, 0
/* 8033A638 00337578  4B CE 29 FD */	bl __dt__11JKRDisposerFv
.L_8033A63C:
/* 8033A63C 0033757C  34 1E 01 E4 */	addic. r0, r30, 0x1e4
/* 8033A640 00337580  41 82 00 68 */	beq .L_8033A6A8
/* 8033A644 00337584  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
/* 8033A648 00337588  34 1E 01 E4 */	addic. r0, r30, 0x1e4
/* 8033A64C 0033758C  38 03 AC 8C */	addi r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
/* 8033A650 00337590  90 1E 01 E4 */	stw r0, 0x1e4(r30)
/* 8033A654 00337594  41 82 00 54 */	beq .L_8033A6A8
/* 8033A658 00337598  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
/* 8033A65C 0033759C  34 1E 01 E4 */	addic. r0, r30, 0x1e4
/* 8033A660 003375A0  38 03 AC A0 */	addi r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
/* 8033A664 003375A4  90 1E 01 E4 */	stw r0, 0x1e4(r30)
/* 8033A668 003375A8  41 82 00 40 */	beq .L_8033A6A8
/* 8033A66C 003375AC  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility6Prm<s>"@ha
/* 8033A670 003375B0  34 1E 01 E4 */	addic. r0, r30, 0x1e4
/* 8033A674 003375B4  38 03 AC B4 */	addi r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
/* 8033A678 003375B8  90 1E 01 E4 */	stw r0, 0x1e4(r30)
/* 8033A67C 003375BC  41 82 00 2C */	beq .L_8033A6A8
/* 8033A680 003375C0  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 8033A684 003375C4  34 7E 02 00 */	addic. r3, r30, 0x200
/* 8033A688 003375C8  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 8033A68C 003375CC  90 1E 01 E4 */	stw r0, 0x1e4(r30)
/* 8033A690 003375D0  41 82 00 0C */	beq .L_8033A69C
/* 8033A694 003375D4  38 80 00 00 */	li r4, 0
/* 8033A698 003375D8  4B CE C1 39 */	bl __dt__10JSUPtrLinkFv
.L_8033A69C:
/* 8033A69C 003375DC  38 7E 01 E4 */	addi r3, r30, 0x1e4
/* 8033A6A0 003375E0  38 80 00 00 */	li r4, 0
/* 8033A6A4 003375E4  4B CE 29 91 */	bl __dt__11JKRDisposerFv
.L_8033A6A8:
/* 8033A6A8 003375E8  34 1E 01 B4 */	addic. r0, r30, 0x1b4
/* 8033A6AC 003375EC  41 82 00 68 */	beq .L_8033A714
/* 8033A6B0 003375F0  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
/* 8033A6B4 003375F4  34 1E 01 B4 */	addic. r0, r30, 0x1b4
/* 8033A6B8 003375F8  38 03 AC 8C */	addi r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
/* 8033A6BC 003375FC  90 1E 01 B4 */	stw r0, 0x1b4(r30)
/* 8033A6C0 00337600  41 82 00 54 */	beq .L_8033A714
/* 8033A6C4 00337604  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
/* 8033A6C8 00337608  34 1E 01 B4 */	addic. r0, r30, 0x1b4
/* 8033A6CC 0033760C  38 03 AC A0 */	addi r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
/* 8033A6D0 00337610  90 1E 01 B4 */	stw r0, 0x1b4(r30)
/* 8033A6D4 00337614  41 82 00 40 */	beq .L_8033A714
/* 8033A6D8 00337618  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility6Prm<s>"@ha
/* 8033A6DC 0033761C  34 1E 01 B4 */	addic. r0, r30, 0x1b4
/* 8033A6E0 00337620  38 03 AC B4 */	addi r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
/* 8033A6E4 00337624  90 1E 01 B4 */	stw r0, 0x1b4(r30)
/* 8033A6E8 00337628  41 82 00 2C */	beq .L_8033A714
/* 8033A6EC 0033762C  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 8033A6F0 00337630  34 7E 01 D0 */	addic. r3, r30, 0x1d0
/* 8033A6F4 00337634  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 8033A6F8 00337638  90 1E 01 B4 */	stw r0, 0x1b4(r30)
/* 8033A6FC 0033763C  41 82 00 0C */	beq .L_8033A708
/* 8033A700 00337640  38 80 00 00 */	li r4, 0
/* 8033A704 00337644  4B CE C0 CD */	bl __dt__10JSUPtrLinkFv
.L_8033A708:
/* 8033A708 00337648  38 7E 01 B4 */	addi r3, r30, 0x1b4
/* 8033A70C 0033764C  38 80 00 00 */	li r4, 0
/* 8033A710 00337650  4B CE 29 25 */	bl __dt__11JKRDisposerFv
.L_8033A714:
/* 8033A714 00337654  34 1E 01 84 */	addic. r0, r30, 0x184
/* 8033A718 00337658  41 82 00 68 */	beq .L_8033A780
/* 8033A71C 0033765C  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
/* 8033A720 00337660  34 1E 01 84 */	addic. r0, r30, 0x184
/* 8033A724 00337664  38 03 AC 8C */	addi r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
/* 8033A728 00337668  90 1E 01 84 */	stw r0, 0x184(r30)
/* 8033A72C 0033766C  41 82 00 54 */	beq .L_8033A780
/* 8033A730 00337670  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
/* 8033A734 00337674  34 1E 01 84 */	addic. r0, r30, 0x184
/* 8033A738 00337678  38 03 AC A0 */	addi r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
/* 8033A73C 0033767C  90 1E 01 84 */	stw r0, 0x184(r30)
/* 8033A740 00337680  41 82 00 40 */	beq .L_8033A780
/* 8033A744 00337684  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility6Prm<s>"@ha
/* 8033A748 00337688  34 1E 01 84 */	addic. r0, r30, 0x184
/* 8033A74C 0033768C  38 03 AC B4 */	addi r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
/* 8033A750 00337690  90 1E 01 84 */	stw r0, 0x184(r30)
/* 8033A754 00337694  41 82 00 2C */	beq .L_8033A780
/* 8033A758 00337698  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 8033A75C 0033769C  34 7E 01 A0 */	addic. r3, r30, 0x1a0
/* 8033A760 003376A0  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 8033A764 003376A4  90 1E 01 84 */	stw r0, 0x184(r30)
/* 8033A768 003376A8  41 82 00 0C */	beq .L_8033A774
/* 8033A76C 003376AC  38 80 00 00 */	li r4, 0
/* 8033A770 003376B0  4B CE C0 61 */	bl __dt__10JSUPtrLinkFv
.L_8033A774:
/* 8033A774 003376B4  38 7E 01 84 */	addi r3, r30, 0x184
/* 8033A778 003376B8  38 80 00 00 */	li r4, 0
/* 8033A77C 003376BC  4B CE 28 B9 */	bl __dt__11JKRDisposerFv
.L_8033A780:
/* 8033A780 003376C0  34 1E 01 54 */	addic. r0, r30, 0x154
/* 8033A784 003376C4  41 82 00 68 */	beq .L_8033A7EC
/* 8033A788 003376C8  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
/* 8033A78C 003376CC  34 1E 01 54 */	addic. r0, r30, 0x154
/* 8033A790 003376D0  38 03 AD 2C */	addi r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
/* 8033A794 003376D4  90 1E 01 54 */	stw r0, 0x154(r30)
/* 8033A798 003376D8  41 82 00 54 */	beq .L_8033A7EC
/* 8033A79C 003376DC  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 8033A7A0 003376E0  34 1E 01 54 */	addic. r0, r30, 0x154
/* 8033A7A4 003376E4  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 8033A7A8 003376E8  90 1E 01 54 */	stw r0, 0x154(r30)
/* 8033A7AC 003376EC  41 82 00 40 */	beq .L_8033A7EC
/* 8033A7B0 003376F0  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 8033A7B4 003376F4  34 1E 01 54 */	addic. r0, r30, 0x154
/* 8033A7B8 003376F8  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 8033A7BC 003376FC  90 1E 01 54 */	stw r0, 0x154(r30)
/* 8033A7C0 00337700  41 82 00 2C */	beq .L_8033A7EC
/* 8033A7C4 00337704  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 8033A7C8 00337708  34 7E 01 70 */	addic. r3, r30, 0x170
/* 8033A7CC 0033770C  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 8033A7D0 00337710  90 1E 01 54 */	stw r0, 0x154(r30)
/* 8033A7D4 00337714  41 82 00 0C */	beq .L_8033A7E0
/* 8033A7D8 00337718  38 80 00 00 */	li r4, 0
/* 8033A7DC 0033771C  4B CE BF F5 */	bl __dt__10JSUPtrLinkFv
.L_8033A7E0:
/* 8033A7E0 00337720  38 7E 01 54 */	addi r3, r30, 0x154
/* 8033A7E4 00337724  38 80 00 00 */	li r4, 0
/* 8033A7E8 00337728  4B CE 28 4D */	bl __dt__11JKRDisposerFv
.L_8033A7EC:
/* 8033A7EC 0033772C  34 1E 01 24 */	addic. r0, r30, 0x124
/* 8033A7F0 00337730  41 82 00 68 */	beq .L_8033A858
/* 8033A7F4 00337734  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
/* 8033A7F8 00337738  34 1E 01 24 */	addic. r0, r30, 0x124
/* 8033A7FC 0033773C  38 03 AD 2C */	addi r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
/* 8033A800 00337740  90 1E 01 24 */	stw r0, 0x124(r30)
/* 8033A804 00337744  41 82 00 54 */	beq .L_8033A858
/* 8033A808 00337748  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 8033A80C 0033774C  34 1E 01 24 */	addic. r0, r30, 0x124
/* 8033A810 00337750  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 8033A814 00337754  90 1E 01 24 */	stw r0, 0x124(r30)
/* 8033A818 00337758  41 82 00 40 */	beq .L_8033A858
/* 8033A81C 0033775C  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 8033A820 00337760  34 1E 01 24 */	addic. r0, r30, 0x124
/* 8033A824 00337764  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 8033A828 00337768  90 1E 01 24 */	stw r0, 0x124(r30)
/* 8033A82C 0033776C  41 82 00 2C */	beq .L_8033A858
/* 8033A830 00337770  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 8033A834 00337774  34 7E 01 40 */	addic. r3, r30, 0x140
/* 8033A838 00337778  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 8033A83C 0033777C  90 1E 01 24 */	stw r0, 0x124(r30)
/* 8033A840 00337780  41 82 00 0C */	beq .L_8033A84C
/* 8033A844 00337784  38 80 00 00 */	li r4, 0
/* 8033A848 00337788  4B CE BF 89 */	bl __dt__10JSUPtrLinkFv
.L_8033A84C:
/* 8033A84C 0033778C  38 7E 01 24 */	addi r3, r30, 0x124
/* 8033A850 00337790  38 80 00 00 */	li r4, 0
/* 8033A854 00337794  4B CE 27 E1 */	bl __dt__11JKRDisposerFv
.L_8033A858:
/* 8033A858 00337798  34 1E 00 F4 */	addic. r0, r30, 0xf4
/* 8033A85C 0033779C  41 82 00 68 */	beq .L_8033A8C4
/* 8033A860 003377A0  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@ha
/* 8033A864 003377A4  34 1E 00 F4 */	addic. r0, r30, 0xf4
/* 8033A868 003377A8  38 03 AD 18 */	addi r0, r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@l
/* 8033A86C 003377AC  90 1E 00 F4 */	stw r0, 0xf4(r30)
/* 8033A870 003377B0  41 82 00 54 */	beq .L_8033A8C4
/* 8033A874 003377B4  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 8033A878 003377B8  34 1E 00 F4 */	addic. r0, r30, 0xf4
/* 8033A87C 003377BC  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 8033A880 003377C0  90 1E 00 F4 */	stw r0, 0xf4(r30)
/* 8033A884 003377C4  41 82 00 40 */	beq .L_8033A8C4
/* 8033A888 003377C8  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 8033A88C 003377CC  34 1E 00 F4 */	addic. r0, r30, 0xf4
/* 8033A890 003377D0  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 8033A894 003377D4  90 1E 00 F4 */	stw r0, 0xf4(r30)
/* 8033A898 003377D8  41 82 00 2C */	beq .L_8033A8C4
/* 8033A89C 003377DC  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 8033A8A0 003377E0  34 7E 01 10 */	addic. r3, r30, 0x110
/* 8033A8A4 003377E4  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 8033A8A8 003377E8  90 1E 00 F4 */	stw r0, 0xf4(r30)
/* 8033A8AC 003377EC  41 82 00 0C */	beq .L_8033A8B8
/* 8033A8B0 003377F0  38 80 00 00 */	li r4, 0
/* 8033A8B4 003377F4  4B CE BF 1D */	bl __dt__10JSUPtrLinkFv
.L_8033A8B8:
/* 8033A8B8 003377F8  38 7E 00 F4 */	addi r3, r30, 0xf4
/* 8033A8BC 003377FC  38 80 00 00 */	li r4, 0
/* 8033A8C0 00337800  4B CE 27 75 */	bl __dt__11JKRDisposerFv
.L_8033A8C4:
/* 8033A8C4 00337804  34 1E 00 C4 */	addic. r0, r30, 0xc4
/* 8033A8C8 00337808  41 82 00 68 */	beq .L_8033A930
/* 8033A8CC 0033780C  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
/* 8033A8D0 00337810  34 1E 00 C4 */	addic. r0, r30, 0xc4
/* 8033A8D4 00337814  38 03 AD 2C */	addi r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
/* 8033A8D8 00337818  90 1E 00 C4 */	stw r0, 0xc4(r30)
/* 8033A8DC 0033781C  41 82 00 54 */	beq .L_8033A930
/* 8033A8E0 00337820  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 8033A8E4 00337824  34 1E 00 C4 */	addic. r0, r30, 0xc4
/* 8033A8E8 00337828  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 8033A8EC 0033782C  90 1E 00 C4 */	stw r0, 0xc4(r30)
/* 8033A8F0 00337830  41 82 00 40 */	beq .L_8033A930
/* 8033A8F4 00337834  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 8033A8F8 00337838  34 1E 00 C4 */	addic. r0, r30, 0xc4
/* 8033A8FC 0033783C  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 8033A900 00337840  90 1E 00 C4 */	stw r0, 0xc4(r30)
/* 8033A904 00337844  41 82 00 2C */	beq .L_8033A930
/* 8033A908 00337848  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 8033A90C 0033784C  34 7E 00 E0 */	addic. r3, r30, 0xe0
/* 8033A910 00337850  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 8033A914 00337854  90 1E 00 C4 */	stw r0, 0xc4(r30)
/* 8033A918 00337858  41 82 00 0C */	beq .L_8033A924
/* 8033A91C 0033785C  38 80 00 00 */	li r4, 0
/* 8033A920 00337860  4B CE BE B1 */	bl __dt__10JSUPtrLinkFv
.L_8033A924:
/* 8033A924 00337864  38 7E 00 C4 */	addi r3, r30, 0xc4
/* 8033A928 00337868  38 80 00 00 */	li r4, 0
/* 8033A92C 0033786C  4B CE 27 09 */	bl __dt__11JKRDisposerFv
.L_8033A930:
/* 8033A930 00337870  34 1E 00 94 */	addic. r0, r30, 0x94
/* 8033A934 00337874  41 82 00 68 */	beq .L_8033A99C
/* 8033A938 00337878  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
/* 8033A93C 0033787C  34 1E 00 94 */	addic. r0, r30, 0x94
/* 8033A940 00337880  38 03 AC 8C */	addi r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
/* 8033A944 00337884  90 1E 00 94 */	stw r0, 0x94(r30)
/* 8033A948 00337888  41 82 00 54 */	beq .L_8033A99C
/* 8033A94C 0033788C  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
/* 8033A950 00337890  34 1E 00 94 */	addic. r0, r30, 0x94
/* 8033A954 00337894  38 03 AC A0 */	addi r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
/* 8033A958 00337898  90 1E 00 94 */	stw r0, 0x94(r30)
/* 8033A95C 0033789C  41 82 00 40 */	beq .L_8033A99C
/* 8033A960 003378A0  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility6Prm<s>"@ha
/* 8033A964 003378A4  34 1E 00 94 */	addic. r0, r30, 0x94
/* 8033A968 003378A8  38 03 AC B4 */	addi r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
/* 8033A96C 003378AC  90 1E 00 94 */	stw r0, 0x94(r30)
/* 8033A970 003378B0  41 82 00 2C */	beq .L_8033A99C
/* 8033A974 003378B4  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 8033A978 003378B8  34 7E 00 B0 */	addic. r3, r30, 0xb0
/* 8033A97C 003378BC  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 8033A980 003378C0  90 1E 00 94 */	stw r0, 0x94(r30)
/* 8033A984 003378C4  41 82 00 0C */	beq .L_8033A990
/* 8033A988 003378C8  38 80 00 00 */	li r4, 0
/* 8033A98C 003378CC  4B CE BE 45 */	bl __dt__10JSUPtrLinkFv
.L_8033A990:
/* 8033A990 003378D0  38 7E 00 94 */	addi r3, r30, 0x94
/* 8033A994 003378D4  38 80 00 00 */	li r4, 0
/* 8033A998 003378D8  4B CE 26 9D */	bl __dt__11JKRDisposerFv
.L_8033A99C:
/* 8033A99C 003378DC  34 1E 00 64 */	addic. r0, r30, 0x64
/* 8033A9A0 003378E0  41 82 00 68 */	beq .L_8033AA08
/* 8033A9A4 003378E4  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
/* 8033A9A8 003378E8  34 1E 00 64 */	addic. r0, r30, 0x64
/* 8033A9AC 003378EC  38 03 AC 8C */	addi r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
/* 8033A9B0 003378F0  90 1E 00 64 */	stw r0, 0x64(r30)
/* 8033A9B4 003378F4  41 82 00 54 */	beq .L_8033AA08
/* 8033A9B8 003378F8  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
/* 8033A9BC 003378FC  34 1E 00 64 */	addic. r0, r30, 0x64
/* 8033A9C0 00337900  38 03 AC A0 */	addi r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
/* 8033A9C4 00337904  90 1E 00 64 */	stw r0, 0x64(r30)
/* 8033A9C8 00337908  41 82 00 40 */	beq .L_8033AA08
/* 8033A9CC 0033790C  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility6Prm<s>"@ha
/* 8033A9D0 00337910  34 1E 00 64 */	addic. r0, r30, 0x64
/* 8033A9D4 00337914  38 03 AC B4 */	addi r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
/* 8033A9D8 00337918  90 1E 00 64 */	stw r0, 0x64(r30)
/* 8033A9DC 0033791C  41 82 00 2C */	beq .L_8033AA08
/* 8033A9E0 00337920  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 8033A9E4 00337924  34 7E 00 80 */	addic. r3, r30, 0x80
/* 8033A9E8 00337928  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 8033A9EC 0033792C  90 1E 00 64 */	stw r0, 0x64(r30)
/* 8033A9F0 00337930  41 82 00 0C */	beq .L_8033A9FC
/* 8033A9F4 00337934  38 80 00 00 */	li r4, 0
/* 8033A9F8 00337938  4B CE BD D9 */	bl __dt__10JSUPtrLinkFv
.L_8033A9FC:
/* 8033A9FC 0033793C  38 7E 00 64 */	addi r3, r30, 0x64
/* 8033AA00 00337940  38 80 00 00 */	li r4, 0
/* 8033AA04 00337944  4B CE 26 31 */	bl __dt__11JKRDisposerFv
.L_8033AA08:
/* 8033AA08 00337948  28 1E 00 00 */	cmplwi r30, 0
/* 8033AA0C 0033794C  41 82 00 A0 */	beq .L_8033AAAC
/* 8033AA10 00337950  3C 60 80 4A */	lis r3, __vt__Q210JADUtility10PrmSetBase@ha
/* 8033AA14 00337954  38 03 66 E0 */	addi r0, r3, __vt__Q210JADUtility10PrmSetBase@l
/* 8033AA18 00337958  90 1E 00 00 */	stw r0, 0(r30)
/* 8033AA1C 0033795C  48 00 00 0C */	b .L_8033AA28
.L_8033AA20:
/* 8033AA20 00337960  38 7E 00 1C */	addi r3, r30, 0x1c
/* 8033AA24 00337964  4B CE C2 01 */	bl remove__10JSUPtrListFP10JSUPtrLink
.L_8033AA28:
/* 8033AA28 00337968  80 9E 00 1C */	lwz r4, 0x1c(r30)
/* 8033AA2C 0033796C  28 04 00 00 */	cmplwi r4, 0
/* 8033AA30 00337970  40 82 FF F0 */	bne .L_8033AA20
/* 8033AA34 00337974  34 1E 00 2C */	addic. r0, r30, 0x2c
/* 8033AA38 00337978  41 82 00 54 */	beq .L_8033AA8C
/* 8033AA3C 0033797C  3C 60 80 4A */	lis r3, __vt__Q210JADUtility10PrmSetTree@ha
/* 8033AA40 00337980  34 1E 00 2C */	addic. r0, r30, 0x2c
/* 8033AA44 00337984  38 03 67 04 */	addi r0, r3, __vt__Q210JADUtility10PrmSetTree@l
/* 8033AA48 00337988  90 1E 00 48 */	stw r0, 0x48(r30)
/* 8033AA4C 0033798C  41 82 00 40 */	beq .L_8033AA8C
/* 8033AA50 00337990  3C 60 80 4A */	lis r3, "__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@ha
/* 8033AA54 00337994  34 1E 00 2C */	addic. r0, r30, 0x2c
/* 8033AA58 00337998  38 03 67 1C */	addi r0, r3, "__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@l
/* 8033AA5C 0033799C  90 1E 00 48 */	stw r0, 0x48(r30)
/* 8033AA60 003379A0  41 82 00 2C */	beq .L_8033AA8C
/* 8033AA64 003379A4  34 1E 00 38 */	addic. r0, r30, 0x38
/* 8033AA68 003379A8  41 82 00 10 */	beq .L_8033AA78
/* 8033AA6C 003379AC  38 7E 00 38 */	addi r3, r30, 0x38
/* 8033AA70 003379B0  38 80 00 00 */	li r4, 0
/* 8033AA74 003379B4  4B CE BD 5D */	bl __dt__10JSUPtrLinkFv
.L_8033AA78:
/* 8033AA78 003379B8  34 1E 00 2C */	addic. r0, r30, 0x2c
/* 8033AA7C 003379BC  41 82 00 10 */	beq .L_8033AA8C
/* 8033AA80 003379C0  38 7E 00 2C */	addi r3, r30, 0x2c
/* 8033AA84 003379C4  38 80 00 00 */	li r4, 0
/* 8033AA88 003379C8  4B CE BD E1 */	bl __dt__10JSUPtrListFv
.L_8033AA8C:
/* 8033AA8C 003379CC  34 1E 00 1C */	addic. r0, r30, 0x1c
/* 8033AA90 003379D0  41 82 00 10 */	beq .L_8033AAA0
/* 8033AA94 003379D4  38 7E 00 1C */	addi r3, r30, 0x1c
/* 8033AA98 003379D8  38 80 00 00 */	li r4, 0
/* 8033AA9C 003379DC  4B CE BD CD */	bl __dt__10JSUPtrListFv
.L_8033AAA0:
/* 8033AAA0 003379E0  7F C3 F3 78 */	mr r3, r30
/* 8033AAA4 003379E4  38 80 00 00 */	li r4, 0
/* 8033AAA8 003379E8  4B CE 25 8D */	bl __dt__11JKRDisposerFv
.L_8033AAAC:
/* 8033AAAC 003379EC  7F E0 07 35 */	extsh. r0, r31
/* 8033AAB0 003379F0  40 81 00 0C */	ble .L_8033AABC
/* 8033AAB4 003379F4  7F C3 F3 78 */	mr r3, r30
/* 8033AAB8 003379F8  4B CE 95 FD */	bl __dl__FPv
.L_8033AABC:
/* 8033AABC 003379FC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8033AAC0 00337A00  7F C3 F3 78 */	mr r3, r30
/* 8033AAC4 00337A04  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8033AAC8 00337A08  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8033AACC 00337A0C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8033AAD0 00337A10  7C 08 03 A6 */	mtlr r0
/* 8033AAD4 00337A14  38 21 00 20 */	addi r1, r1, 0x20
/* 8033AAD8 00337A18  4E 80 00 20 */	blr 
.endfn __dt__Q29PSAutoBgm6ModuleFv

.fn removeCallback__Q29PSAutoBgm6ModuleFUcPv, global
/* 8033AADC 00337A1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033AAE0 00337A20  7C 08 02 A6 */	mflr r0
/* 8033AAE4 00337A24  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033AAE8 00337A28  80 64 00 3C */	lwz r3, 0x3c(r4)
/* 8033AAEC 00337A2C  38 80 00 00 */	li r4, 0
/* 8033AAF0 00337A30  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8033AAF4 00337A34  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 8033AAF8 00337A38  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8033AAFC 00337A3C  80 63 00 B4 */	lwz r3, 0xb4(r3)
/* 8033AB00 00337A40  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8033AB04 00337A44  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8033AB08 00337A48  7D 89 03 A6 */	mtctr r12
/* 8033AB0C 00337A4C  4E 80 04 21 */	bctrl 
/* 8033AB10 00337A50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033AB14 00337A54  7C 08 03 A6 */	mtlr r0
/* 8033AB18 00337A58  38 21 00 10 */	addi r1, r1, 0x10
/* 8033AB1C 00337A5C  4E 80 00 20 */	blr 
.endfn removeCallback__Q29PSAutoBgm6ModuleFUcPv

.fn seqCpuSync_AutoBgm_Module__Q29PSAutoBgm6ModuleFP8JASTrackUsUlP8JASTrack, global
/* 8033AB20 00337A60  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8033AB24 00337A64  7C 08 02 A6 */	mflr r0
/* 8033AB28 00337A68  90 01 00 34 */	stw r0, 0x34(r1)
/* 8033AB2C 00337A6C  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8033AB30 00337A70  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8033AB34 00337A74  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8033AB38 00337A78  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8033AB3C 00337A7C  54 A0 04 3E */	clrlwi r0, r5, 0x10
/* 8033AB40 00337A80  7C 7E 1B 78 */	mr r30, r3
/* 8033AB44 00337A84  2C 00 08 00 */	cmpwi r0, 0x800
/* 8033AB48 00337A88  7C 9F 23 78 */	mr r31, r4
/* 8033AB4C 00337A8C  41 82 00 08 */	beq .L_8033AB54
/* 8033AB50 00337A90  48 00 01 C4 */	b .L_8033AD14
.L_8033AB54:
/* 8033AB54 00337A94  7F E3 FB 78 */	mr r3, r31
/* 8033AB58 00337A98  7F C4 F3 78 */	mr r4, r30
/* 8033AB5C 00337A9C  38 A0 00 14 */	li r5, 0x14
/* 8033AB60 00337AA0  4B FF D8 5D */	bl setObject__8PSSystemFP8JASTrackPvUc
/* 8033AB64 00337AA4  88 1E 01 50 */	lbz r0, 0x150(r30)
/* 8033AB68 00337AA8  7F E3 FB 78 */	mr r3, r31
/* 8033AB6C 00337AAC  88 BE 01 80 */	lbz r5, 0x180(r30)
/* 8033AB70 00337AB0  38 80 00 03 */	li r4, 3
/* 8033AB74 00337AB4  50 05 44 2E */	rlwimi r5, r0, 8, 0x10, 0x17
/* 8033AB78 00337AB8  54 A5 04 3E */	clrlwi r5, r5, 0x10
/* 8033AB7C 00337ABC  4B D6 75 71 */	bl writePortAppDirect__8JASTrackFUlUs
/* 8033AB80 00337AC0  88 7E 02 40 */	lbz r3, 0x240(r30)
/* 8033AB84 00337AC4  28 03 00 7F */	cmplwi r3, 0x7f
/* 8033AB88 00337AC8  40 81 00 0C */	ble .L_8033AB94
/* 8033AB8C 00337ACC  C0 42 FE 04 */	lfs f2, lbl_8051E164@sda21(r2)
/* 8033AB90 00337AD0  48 00 00 1C */	b .L_8033ABAC
.L_8033AB94:
/* 8033AB94 00337AD4  3C 00 43 30 */	lis r0, 0x4330
/* 8033AB98 00337AD8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8033AB9C 00337ADC  C8 22 FE 10 */	lfd f1, lbl_8051E170@sda21(r2)
/* 8033ABA0 00337AE0  90 01 00 08 */	stw r0, 8(r1)
/* 8033ABA4 00337AE4  C8 01 00 08 */	lfd f0, 8(r1)
/* 8033ABA8 00337AE8  EC 40 08 28 */	fsubs f2, f0, f1
.L_8033ABAC:
/* 8033ABAC 00337AEC  88 7E 02 70 */	lbz r3, 0x270(r30)
/* 8033ABB0 00337AF0  28 03 00 7F */	cmplwi r3, 0x7f
/* 8033ABB4 00337AF4  40 81 00 0C */	ble .L_8033ABC0
/* 8033ABB8 00337AF8  C3 E2 FE 04 */	lfs f31, lbl_8051E164@sda21(r2)
/* 8033ABBC 00337AFC  48 00 00 1C */	b .L_8033ABD8
.L_8033ABC0:
/* 8033ABC0 00337B00  3C 00 43 30 */	lis r0, 0x4330
/* 8033ABC4 00337B04  90 61 00 14 */	stw r3, 0x14(r1)
/* 8033ABC8 00337B08  C8 22 FE 10 */	lfd f1, lbl_8051E170@sda21(r2)
/* 8033ABCC 00337B0C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8033ABD0 00337B10  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8033ABD4 00337B14  EF E0 08 28 */	fsubs f31, f0, f1
.L_8033ABD8:
/* 8033ABD8 00337B18  C0 02 FE 04 */	lfs f0, lbl_8051E164@sda21(r2)
/* 8033ABDC 00337B1C  7F E3 FB 78 */	mr r3, r31
/* 8033ABE0 00337B20  38 80 00 00 */	li r4, 0
/* 8033ABE4 00337B24  38 A0 FF FF */	li r5, -1
/* 8033ABE8 00337B28  EC 22 00 24 */	fdivs f1, f2, f0
/* 8033ABEC 00337B2C  4B D6 62 0D */	bl setParam__8JASTrackFifi
/* 8033ABF0 00337B30  C0 02 FE 04 */	lfs f0, lbl_8051E164@sda21(r2)
/* 8033ABF4 00337B34  7F E3 FB 78 */	mr r3, r31
/* 8033ABF8 00337B38  38 80 00 03 */	li r4, 3
/* 8033ABFC 00337B3C  38 A0 FF FF */	li r5, -1
/* 8033AC00 00337B40  EC 3F 00 24 */	fdivs f1, f31, f0
/* 8033AC04 00337B44  4B D6 61 F5 */	bl setParam__8JASTrackFifi
/* 8033AC08 00337B48  A8 1E 02 10 */	lha r0, 0x210(r30)
/* 8033AC0C 00337B4C  38 80 00 00 */	li r4, 0
/* 8033AC10 00337B50  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8033AC14 00337B54  98 1F 03 56 */	stb r0, 0x356(r31)
/* 8033AC18 00337B58  38 03 FF FF */	addi r0, r3, 0x0000FFFF@l
/* 8033AC1C 00337B5C  B0 9E 02 A4 */	sth r4, 0x2a4(r30)
/* 8033AC20 00337B60  98 9E 02 C0 */	stb r4, 0x2c0(r30)
/* 8033AC24 00337B64  B0 1E 02 C2 */	sth r0, 0x2c2(r30)
/* 8033AC28 00337B68  80 7E 02 B8 */	lwz r3, 0x2b8(r30)
/* 8033AC2C 00337B6C  98 83 00 08 */	stb r4, 8(r3)
/* 8033AC30 00337B70  80 7E 02 BC */	lwz r3, 0x2bc(r30)
/* 8033AC34 00337B74  98 83 00 08 */	stb r4, 8(r3)
/* 8033AC38 00337B78  80 7E 02 B8 */	lwz r3, 0x2b8(r30)
/* 8033AC3C 00337B7C  88 03 00 38 */	lbz r0, 0x38(r3)
/* 8033AC40 00337B80  28 00 00 00 */	cmplwi r0, 0
/* 8033AC44 00337B84  40 82 00 18 */	bne .L_8033AC5C
/* 8033AC48 00337B88  80 7E 02 BC */	lwz r3, 0x2bc(r30)
/* 8033AC4C 00337B8C  88 03 00 38 */	lbz r0, 0x38(r3)
/* 8033AC50 00337B90  28 00 00 00 */	cmplwi r0, 0
/* 8033AC54 00337B94  40 82 00 08 */	bne .L_8033AC5C
/* 8033AC58 00337B98  38 80 00 01 */	li r4, 1
.L_8033AC5C:
/* 8033AC5C 00337B9C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8033AC60 00337BA0  41 82 00 20 */	beq .L_8033AC80
/* 8033AC64 00337BA4  3C 60 80 49 */	lis r3, lbl_8048FE60@ha
/* 8033AC68 00337BA8  3C A0 80 49 */	lis r5, lbl_8048FE70@ha
/* 8033AC6C 00337BAC  38 63 FE 60 */	addi r3, r3, lbl_8048FE60@l
/* 8033AC70 00337BB0  38 80 02 98 */	li r4, 0x298
/* 8033AC74 00337BB4  38 A5 FE 70 */	addi r5, r5, lbl_8048FE70@l
/* 8033AC78 00337BB8  4C C6 31 82 */	crclr 6
/* 8033AC7C 00337BBC  4B CE F9 C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8033AC80:
/* 8033AC80 00337BC0  88 1E 02 C1 */	lbz r0, 0x2c1(r30)
/* 8033AC84 00337BC4  28 00 00 00 */	cmplwi r0, 0
/* 8033AC88 00337BC8  40 82 00 18 */	bne .L_8033ACA0
/* 8033AC8C 00337BCC  7F C3 F3 78 */	mr r3, r30
/* 8033AC90 00337BD0  7F E4 FB 78 */	mr r4, r31
/* 8033AC94 00337BD4  48 00 00 A5 */	bl setTableAddress__Q29PSAutoBgm6ModuleFP8JASTrack
/* 8033AC98 00337BD8  38 00 00 01 */	li r0, 1
/* 8033AC9C 00337BDC  98 1E 02 C1 */	stb r0, 0x2c1(r30)
.L_8033ACA0:
/* 8033ACA0 00337BE0  80 7E 00 3C */	lwz r3, 0x3c(r30)
/* 8033ACA4 00337BE4  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8033ACA8 00337BE8  80 63 01 9C */	lwz r3, 0x19c(r3)
/* 8033ACAC 00337BEC  28 03 00 00 */	cmplwi r3, 0
/* 8033ACB0 00337BF0  41 82 00 30 */	beq .L_8033ACE0
/* 8033ACB4 00337BF4  38 80 00 00 */	li r4, 0
/* 8033ACB8 00337BF8  48 00 20 65 */	bl "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
/* 8033ACBC 00337BFC  88 63 02 A0 */	lbz r3, 0x2a0(r3)
/* 8033ACC0 00337C00  38 00 00 3C */	li r0, 0x3c
/* 8033ACC4 00337C04  38 83 FF FF */	addi r4, r3, -1
/* 8033ACC8 00337C08  20 63 00 01 */	subfic r3, r3, 1
/* 8033ACCC 00337C0C  7C 83 18 F8 */	nor r3, r4, r3
/* 8033ACD0 00337C10  7C 63 FE 70 */	srawi r3, r3, 0x1f
/* 8033ACD4 00337C14  7C 00 18 38 */	and r0, r0, r3
/* 8033ACD8 00337C18  54 03 04 3E */	clrlwi r3, r0, 0x10
/* 8033ACDC 00337C1C  48 00 00 24 */	b .L_8033AD00
.L_8033ACE0:
/* 8033ACE0 00337C20  88 7E 02 A0 */	lbz r3, 0x2a0(r30)
/* 8033ACE4 00337C24  38 00 00 3C */	li r0, 0x3c
/* 8033ACE8 00337C28  38 83 FF FF */	addi r4, r3, -1
/* 8033ACEC 00337C2C  20 63 00 01 */	subfic r3, r3, 1
/* 8033ACF0 00337C30  7C 83 18 F8 */	nor r3, r4, r3
/* 8033ACF4 00337C34  7C 63 FE 70 */	srawi r3, r3, 0x1f
/* 8033ACF8 00337C38  7C 00 18 38 */	and r0, r0, r3
/* 8033ACFC 00337C3C  54 03 04 3E */	clrlwi r3, r0, 0x10
.L_8033AD00:
/* 8033AD00 00337C40  A8 1E 00 90 */	lha r0, 0x90(r30)
/* 8033AD04 00337C44  1C 00 00 78 */	mulli r0, r0, 0x78
/* 8033AD08 00337C48  7C 03 02 14 */	add r0, r3, r0
/* 8033AD0C 00337C4C  54 03 04 3E */	clrlwi r3, r0, 0x10
/* 8033AD10 00337C50  48 00 00 08 */	b .L_8033AD18
.L_8033AD14:
/* 8033AD14 00337C54  38 60 00 00 */	li r3, 0
.L_8033AD18:
/* 8033AD18 00337C58  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8033AD1C 00337C5C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8033AD20 00337C60  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8033AD24 00337C64  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8033AD28 00337C68  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8033AD2C 00337C6C  7C 08 03 A6 */	mtlr r0
/* 8033AD30 00337C70  38 21 00 30 */	addi r1, r1, 0x30
/* 8033AD34 00337C74  4E 80 00 20 */	blr 
.endfn seqCpuSync_AutoBgm_Module__Q29PSAutoBgm6ModuleFP8JASTrackUsUlP8JASTrack

.fn setTableAddress__Q29PSAutoBgm6ModuleFP8JASTrack, global
/* 8033AD38 00337C78  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8033AD3C 00337C7C  7C 08 02 A6 */	mflr r0
/* 8033AD40 00337C80  90 01 00 24 */	stw r0, 0x24(r1)
/* 8033AD44 00337C84  BF 41 00 08 */	stmw r26, 8(r1)
/* 8033AD48 00337C88  7C 7E 1B 78 */	mr r30, r3
/* 8033AD4C 00337C8C  3B E0 00 00 */	li r31, 0
/* 8033AD50 00337C90  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 8033AD54 00337C94  A8 1E 01 B0 */	lha r0, 0x1b0(r30)
/* 8033AD58 00337C98  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8033AD5C 00337C9C  54 00 04 3E */	clrlwi r0, r0, 0x10
/* 8033AD60 00337CA0  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 8033AD64 00337CA4  1C 00 00 03 */	mulli r0, r0, 3
/* 8033AD68 00337CA8  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8033AD6C 00337CAC  80 63 00 A8 */	lwz r3, 0xa8(r3)
/* 8033AD70 00337CB0  7C A3 02 14 */	add r5, r3, r0
/* 8033AD74 00337CB4  7C 63 00 AE */	lbzx r3, r3, r0
/* 8033AD78 00337CB8  88 05 00 01 */	lbz r0, 1(r5)
/* 8033AD7C 00337CBC  88 A5 00 02 */	lbz r5, 2(r5)
/* 8033AD80 00337CC0  54 00 40 2E */	slwi r0, r0, 8
/* 8033AD84 00337CC4  50 60 82 1E */	rlwimi r0, r3, 0x10, 8, 0xf
/* 8033AD88 00337CC8  7C A0 03 78 */	or r0, r5, r0
/* 8033AD8C 00337CCC  90 1E 02 A8 */	stw r0, 0x2a8(r30)
/* 8033AD90 00337CD0  80 7E 02 A8 */	lwz r3, 0x2a8(r30)
/* 8033AD94 00337CD4  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8033AD98 00337CD8  7C 03 02 14 */	add r0, r3, r0
/* 8033AD9C 00337CDC  90 1E 02 A8 */	stw r0, 0x2a8(r30)
/* 8033ADA0 00337CE0  80 7E 00 3C */	lwz r3, 0x3c(r30)
/* 8033ADA4 00337CE4  A8 1E 01 E0 */	lha r0, 0x1e0(r30)
/* 8033ADA8 00337CE8  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8033ADAC 00337CEC  54 00 04 3E */	clrlwi r0, r0, 0x10
/* 8033ADB0 00337CF0  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 8033ADB4 00337CF4  1C 00 00 03 */	mulli r0, r0, 3
/* 8033ADB8 00337CF8  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8033ADBC 00337CFC  80 63 00 AC */	lwz r3, 0xac(r3)
/* 8033ADC0 00337D00  7C A3 02 14 */	add r5, r3, r0
/* 8033ADC4 00337D04  7C 63 00 AE */	lbzx r3, r3, r0
/* 8033ADC8 00337D08  88 05 00 01 */	lbz r0, 1(r5)
/* 8033ADCC 00337D0C  88 A5 00 02 */	lbz r5, 2(r5)
/* 8033ADD0 00337D10  54 00 40 2E */	slwi r0, r0, 8
/* 8033ADD4 00337D14  50 60 82 1E */	rlwimi r0, r3, 0x10, 8, 0xf
/* 8033ADD8 00337D18  7C A0 03 78 */	or r0, r5, r0
/* 8033ADDC 00337D1C  90 1E 02 B0 */	stw r0, 0x2b0(r30)
/* 8033ADE0 00337D20  80 7E 02 B0 */	lwz r3, 0x2b0(r30)
/* 8033ADE4 00337D24  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8033ADE8 00337D28  7C 03 02 14 */	add r0, r3, r0
/* 8033ADEC 00337D2C  90 1E 02 B0 */	stw r0, 0x2b0(r30)
/* 8033ADF0 00337D30  83 BE 02 A8 */	lwz r29, 0x2a8(r30)
/* 8033ADF4 00337D34  88 1D 00 00 */	lbz r0, 0(r29)
/* 8033ADF8 00337D38  88 9D 00 01 */	lbz r4, 1(r29)
/* 8033ADFC 00337D3C  88 7D 00 02 */	lbz r3, 2(r29)
/* 8033AE00 00337D40  48 00 00 44 */	b .L_8033AE44
.L_8033AE04:
/* 8033AE04 00337D44  3B FF 00 01 */	addi r31, r31, 1
/* 8033AE08 00337D48  57 FB 06 3E */	clrlwi r27, r31, 0x18
/* 8033AE0C 00337D4C  2C 1B 00 FF */	cmpwi r27, 0xff
/* 8033AE10 00337D50  41 80 00 20 */	blt .L_8033AE30
/* 8033AE14 00337D54  3C 60 80 49 */	lis r3, lbl_8048FE60@ha
/* 8033AE18 00337D58  3C A0 80 49 */	lis r5, lbl_8048FE70@ha
/* 8033AE1C 00337D5C  38 63 FE 60 */	addi r3, r3, lbl_8048FE60@l
/* 8033AE20 00337D60  38 80 02 D6 */	li r4, 0x2d6
/* 8033AE24 00337D64  38 A5 FE 70 */	addi r5, r5, lbl_8048FE70@l
/* 8033AE28 00337D68  4C C6 31 82 */	crclr 6
/* 8033AE2C 00337D6C  4B CE F8 15 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8033AE30:
/* 8033AE30 00337D70  1C 1B 00 03 */	mulli r0, r27, 3
/* 8033AE34 00337D74  7C 7D 02 14 */	add r3, r29, r0
/* 8033AE38 00337D78  88 03 00 00 */	lbz r0, 0(r3)
/* 8033AE3C 00337D7C  88 83 00 01 */	lbz r4, 1(r3)
/* 8033AE40 00337D80  88 63 00 02 */	lbz r3, 2(r3)
.L_8033AE44:
/* 8033AE44 00337D84  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8033AE48 00337D88  28 00 00 FF */	cmplwi r0, 0xff
/* 8033AE4C 00337D8C  40 82 FF B8 */	bne .L_8033AE04
/* 8033AE50 00337D90  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 8033AE54 00337D94  28 00 00 FF */	cmplwi r0, 0xff
/* 8033AE58 00337D98  40 82 FF AC */	bne .L_8033AE04
/* 8033AE5C 00337D9C  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8033AE60 00337DA0  28 00 00 FF */	cmplwi r0, 0xff
/* 8033AE64 00337DA4  40 82 FF A0 */	bne .L_8033AE04
/* 8033AE68 00337DA8  9B FE 02 AC */	stb r31, 0x2ac(r30)
/* 8033AE6C 00337DAC  3C 80 80 49 */	lis r4, lbl_8048FE60@ha
/* 8033AE70 00337DB0  3C 60 80 49 */	lis r3, lbl_8048FE70@ha
/* 8033AE74 00337DB4  3B 80 00 00 */	li r28, 0
/* 8033AE78 00337DB8  83 7E 02 B0 */	lwz r27, 0x2b0(r30)
/* 8033AE7C 00337DBC  3B A4 FE 60 */	addi r29, r4, lbl_8048FE60@l
/* 8033AE80 00337DC0  3B E3 FE 70 */	addi r31, r3, lbl_8048FE70@l
/* 8033AE84 00337DC4  88 1B 00 00 */	lbz r0, 0(r27)
/* 8033AE88 00337DC8  88 7B 00 01 */	lbz r3, 1(r27)
/* 8033AE8C 00337DCC  48 00 00 38 */	b .L_8033AEC4
.L_8033AE90:
/* 8033AE90 00337DD0  3B 9C 00 01 */	addi r28, r28, 1
/* 8033AE94 00337DD4  57 9A 06 3E */	clrlwi r26, r28, 0x18
/* 8033AE98 00337DD8  2C 1A 00 FF */	cmpwi r26, 0xff
/* 8033AE9C 00337DDC  41 80 00 18 */	blt .L_8033AEB4
/* 8033AEA0 00337DE0  7F A3 EB 78 */	mr r3, r29
/* 8033AEA4 00337DE4  7F E5 FB 78 */	mr r5, r31
/* 8033AEA8 00337DE8  38 80 02 EC */	li r4, 0x2ec
/* 8033AEAC 00337DEC  4C C6 31 82 */	crclr 6
/* 8033AEB0 00337DF0  4B CE F7 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8033AEB4:
/* 8033AEB4 00337DF4  57 40 08 3C */	slwi r0, r26, 1
/* 8033AEB8 00337DF8  7C 7B 02 14 */	add r3, r27, r0
/* 8033AEBC 00337DFC  88 03 00 00 */	lbz r0, 0(r3)
/* 8033AEC0 00337E00  88 63 00 01 */	lbz r3, 1(r3)
.L_8033AEC4:
/* 8033AEC4 00337E04  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8033AEC8 00337E08  28 00 00 FF */	cmplwi r0, 0xff
/* 8033AECC 00337E0C  40 82 FF C4 */	bne .L_8033AE90
/* 8033AED0 00337E10  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8033AED4 00337E14  28 00 00 FF */	cmplwi r0, 0xff
/* 8033AED8 00337E18  40 82 FF B8 */	bne .L_8033AE90
/* 8033AEDC 00337E1C  9B 9E 02 B4 */	stb r28, 0x2b4(r30)
/* 8033AEE0 00337E20  BB 41 00 08 */	lmw r26, 8(r1)
/* 8033AEE4 00337E24  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8033AEE8 00337E28  7C 08 03 A6 */	mtlr r0
/* 8033AEEC 00337E2C  38 21 00 20 */	addi r1, r1, 0x20
/* 8033AEF0 00337E30  4E 80 00 20 */	blr 
.endfn setTableAddress__Q29PSAutoBgm6ModuleFP8JASTrack

.fn cycleLoop__Q29PSAutoBgm6ModuleFP8JASTrack, global
/* 8033AEF4 00337E34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033AEF8 00337E38  7C 08 02 A6 */	mflr r0
/* 8033AEFC 00337E3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033AF00 00337E40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033AF04 00337E44  7C 7F 1B 78 */	mr r31, r3
/* 8033AF08 00337E48  93 C1 00 08 */	stw r30, 8(r1)
/* 8033AF0C 00337E4C  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 8033AF10 00337E50  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8033AF14 00337E54  88 83 00 99 */	lbz r4, 0x99(r3)
/* 8033AF18 00337E58  48 00 1E 05 */	bl "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
/* 8033AF1C 00337E5C  7C 03 F8 40 */	cmplw r3, r31
/* 8033AF20 00337E60  41 82 00 20 */	beq .L_8033AF40
/* 8033AF24 00337E64  3C 60 80 49 */	lis r3, lbl_8048FE60@ha
/* 8033AF28 00337E68  3C A0 80 49 */	lis r5, lbl_8048FE70@ha
/* 8033AF2C 00337E6C  38 63 FE 60 */	addi r3, r3, lbl_8048FE60@l
/* 8033AF30 00337E70  38 80 03 0B */	li r4, 0x30b
/* 8033AF34 00337E74  38 A5 FE 70 */	addi r5, r5, lbl_8048FE70@l
/* 8033AF38 00337E78  4C C6 31 82 */	crclr 6
/* 8033AF3C 00337E7C  4B CE F7 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8033AF40:
/* 8033AF40 00337E80  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8033AF44 00337E84  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8033AF48 00337E88  8B C3 00 99 */	lbz r30, 0x99(r3)
/* 8033AF4C 00337E8C  48 00 1B D9 */	bl "getChildNum__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>Fv"
/* 8033AF50 00337E90  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8033AF54 00337E94  38 03 FF FF */	addi r0, r3, -1
/* 8033AF58 00337E98  7C 1E 00 00 */	cmpw r30, r0
/* 8033AF5C 00337E9C  40 80 00 1C */	bge .L_8033AF78
/* 8033AF60 00337EA0  A0 7F 02 A4 */	lhz r3, 0x2a4(r31)
/* 8033AF64 00337EA4  A8 1F 00 C0 */	lha r0, 0xc0(r31)
/* 8033AF68 00337EA8  7C 03 00 00 */	cmpw r3, r0
/* 8033AF6C 00337EAC  41 80 00 0C */	blt .L_8033AF78
/* 8033AF70 00337EB0  38 60 00 01 */	li r3, 1
/* 8033AF74 00337EB4  48 00 00 BC */	b .L_8033B030
.L_8033AF78:
/* 8033AF78 00337EB8  88 9F 02 C0 */	lbz r4, 0x2c0(r31)
/* 8033AF7C 00337EBC  54 80 10 3A */	slwi r0, r4, 2
/* 8033AF80 00337EC0  7C 7F 02 14 */	add r3, r31, r0
/* 8033AF84 00337EC4  80 C3 02 B8 */	lwz r6, 0x2b8(r3)
/* 8033AF88 00337EC8  88 A6 00 38 */	lbz r5, 0x38(r6)
/* 8033AF8C 00337ECC  28 05 00 00 */	cmplwi r5, 0
/* 8033AF90 00337ED0  40 82 00 28 */	bne .L_8033AFB8
/* 8033AF94 00337ED4  38 64 00 01 */	addi r3, r4, 1
/* 8033AF98 00337ED8  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8033AF9C 00337EDC  98 7F 02 C0 */	stb r3, 0x2c0(r31)
/* 8033AFA0 00337EE0  28 00 00 02 */	cmplwi r0, 2
/* 8033AFA4 00337EE4  41 80 00 0C */	blt .L_8033AFB0
/* 8033AFA8 00337EE8  38 00 00 00 */	li r0, 0
/* 8033AFAC 00337EEC  98 1F 02 C0 */	stb r0, 0x2c0(r31)
.L_8033AFB0:
/* 8033AFB0 00337EF0  38 60 00 02 */	li r3, 2
/* 8033AFB4 00337EF4  48 00 00 7C */	b .L_8033B030
.L_8033AFB8:
/* 8033AFB8 00337EF8  88 66 00 08 */	lbz r3, 8(r6)
/* 8033AFBC 00337EFC  38 63 00 01 */	addi r3, r3, 1
/* 8033AFC0 00337F00  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8033AFC4 00337F04  98 66 00 08 */	stb r3, 8(r6)
/* 8033AFC8 00337F08  7C 00 28 40 */	cmplw r0, r5
/* 8033AFCC 00337F0C  40 81 00 0C */	ble .L_8033AFD8
/* 8033AFD0 00337F10  38 00 00 00 */	li r0, 0
/* 8033AFD4 00337F14  98 06 00 08 */	stb r0, 8(r6)
.L_8033AFD8:
/* 8033AFD8 00337F18  88 06 00 08 */	lbz r0, 8(r6)
/* 8033AFDC 00337F1C  28 00 00 00 */	cmplwi r0, 0
/* 8033AFE0 00337F20  40 82 00 2C */	bne .L_8033B00C
/* 8033AFE4 00337F24  88 7F 02 C0 */	lbz r3, 0x2c0(r31)
/* 8033AFE8 00337F28  38 63 00 01 */	addi r3, r3, 1
/* 8033AFEC 00337F2C  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8033AFF0 00337F30  98 7F 02 C0 */	stb r3, 0x2c0(r31)
/* 8033AFF4 00337F34  28 00 00 02 */	cmplwi r0, 2
/* 8033AFF8 00337F38  41 80 00 0C */	blt .L_8033B004
/* 8033AFFC 00337F3C  38 00 00 00 */	li r0, 0
/* 8033B000 00337F40  98 1F 02 C0 */	stb r0, 0x2c0(r31)
.L_8033B004:
/* 8033B004 00337F44  38 60 00 02 */	li r3, 2
/* 8033B008 00337F48  48 00 00 28 */	b .L_8033B030
.L_8033B00C:
/* 8033B00C 00337F4C  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8033B010 00337F50  28 00 00 01 */	cmplwi r0, 1
/* 8033B014 00337F54  40 82 00 18 */	bne .L_8033B02C
/* 8033B018 00337F58  80 1F 02 B8 */	lwz r0, 0x2b8(r31)
/* 8033B01C 00337F5C  7C 06 00 40 */	cmplw r6, r0
/* 8033B020 00337F60  40 82 00 0C */	bne .L_8033B02C
/* 8033B024 00337F64  38 60 00 03 */	li r3, 3
/* 8033B028 00337F68  48 00 00 08 */	b .L_8033B030
.L_8033B02C:
/* 8033B02C 00337F6C  38 60 00 00 */	li r3, 0
.L_8033B030:
/* 8033B030 00337F70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033B034 00337F74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033B038 00337F78  83 C1 00 08 */	lwz r30, 8(r1)
/* 8033B03C 00337F7C  7C 08 03 A6 */	mtlr r0
/* 8033B040 00337F80  38 21 00 10 */	addi r1, r1, 0x10
/* 8033B044 00337F84  4E 80 00 20 */	blr 
.endfn cycleLoop__Q29PSAutoBgm6ModuleFP8JASTrack

.fn cycleTop__Q29PSAutoBgm9CycleBaseFP8JASTrack, global
/* 8033B048 00337F88  38 00 00 00 */	li r0, 0
/* 8033B04C 00337F8C  98 03 00 3C */	stb r0, 0x3c(r3)
/* 8033B050 00337F90  38 60 00 00 */	li r3, 0
/* 8033B054 00337F94  4E 80 00 20 */	blr 
.endfn cycleTop__Q29PSAutoBgm9CycleBaseFP8JASTrack

.fn play__Q29PSAutoBgm9CycleBaseFP8JASTrack, global
/* 8033B058 00337F98  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8033B05C 00337F9C  7C 08 02 A6 */	mflr r0
/* 8033B060 00337FA0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8033B064 00337FA4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8033B068 00337FA8  7C 9F 23 78 */	mr r31, r4
/* 8033B06C 00337FAC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8033B070 00337FB0  7C 7E 1B 78 */	mr r30, r3
/* 8033B074 00337FB4  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8033B078 00337FB8  80 C3 00 04 */	lwz r6, 4(r3)
/* 8033B07C 00337FBC  88 06 01 20 */	lbz r0, 0x120(r6)
/* 8033B080 00337FC0  2C 00 00 01 */	cmpwi r0, 1
/* 8033B084 00337FC4  40 82 00 A4 */	bne .L_8033B128
/* 8033B088 00337FC8  88 BE 00 3C */	lbz r5, 0x3c(r30)
/* 8033B08C 00337FCC  88 06 02 B4 */	lbz r0, 0x2b4(r6)
/* 8033B090 00337FD0  7C 05 00 40 */	cmplw r5, r0
/* 8033B094 00337FD4  40 82 00 0C */	bne .L_8033B0A0
/* 8033B098 00337FD8  38 60 00 04 */	li r3, 4
/* 8033B09C 00337FDC  48 00 01 5C */	b .L_8033B1F8
.L_8033B0A0:
/* 8033B0A0 00337FE0  80 86 00 3C */	lwz r4, 0x3c(r6)
/* 8033B0A4 00337FE4  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8033B0A8 00337FE8  80 84 01 9C */	lwz r4, 0x19c(r4)
/* 8033B0AC 00337FEC  28 04 00 00 */	cmplwi r4, 0
/* 8033B0B0 00337FF0  40 82 00 44 */	bne .L_8033B0F4
/* 8033B0B4 00337FF4  38 05 00 01 */	addi r0, r5, 1
/* 8033B0B8 00337FF8  54 A6 0D FC */	rlwinm r6, r5, 1, 0x17, 0x1e
/* 8033B0BC 00337FFC  98 1E 00 3C */	stb r0, 0x3c(r30)
/* 8033B0C0 00338000  80 9E 00 04 */	lwz r4, 4(r30)
/* 8033B0C4 00338004  81 83 00 00 */	lwz r12, 0(r3)
/* 8033B0C8 00338008  80 A4 02 B0 */	lwz r5, 0x2b0(r4)
/* 8033B0CC 0033800C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8033B0D0 00338010  7C 85 32 14 */	add r4, r5, r6
/* 8033B0D4 00338014  7C A5 30 AE */	lbzx r5, r5, r6
/* 8033B0D8 00338018  88 04 00 01 */	lbz r0, 1(r4)
/* 8033B0DC 0033801C  50 A0 44 2E */	rlwimi r0, r5, 8, 0x10, 0x17
/* 8033B0E0 00338020  54 1D 04 3E */	clrlwi r29, r0, 0x10
/* 8033B0E4 00338024  7D 89 03 A6 */	mtctr r12
/* 8033B0E8 00338028  4E 80 04 21 */	bctrl 
/* 8033B0EC 0033802C  7F A5 1B 78 */	or r5, r29, r3
/* 8033B0F0 00338030  48 00 00 1C */	b .L_8033B10C
.L_8033B0F4:
/* 8033B0F4 00338034  38 05 00 01 */	addi r0, r5, 1
/* 8033B0F8 00338038  7C 83 23 78 */	mr r3, r4
/* 8033B0FC 0033803C  98 1E 00 3C */	stb r0, 0x3c(r30)
/* 8033B100 00338040  88 84 00 99 */	lbz r4, 0x99(r4)
/* 8033B104 00338044  48 00 1C 19 */	bl "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
/* 8033B108 00338048  A0 A3 02 B6 */	lhz r5, 0x2b6(r3)
.L_8033B10C:
/* 8033B10C 0033804C  80 DE 00 04 */	lwz r6, 4(r30)
/* 8033B110 00338050  7F E3 FB 78 */	mr r3, r31
/* 8033B114 00338054  38 80 00 08 */	li r4, 8
/* 8033B118 00338058  B0 A6 02 B6 */	sth r5, 0x2b6(r6)
/* 8033B11C 0033805C  4B D6 6F D1 */	bl writePortAppDirect__8JASTrackFUlUs
/* 8033B120 00338060  38 60 00 03 */	li r3, 3
/* 8033B124 00338064  48 00 00 D4 */	b .L_8033B1F8
.L_8033B128:
/* 8033B128 00338068  80 66 00 3C */	lwz r3, 0x3c(r6)
/* 8033B12C 0033806C  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8033B130 00338070  80 63 01 9C */	lwz r3, 0x19c(r3)
/* 8033B134 00338074  28 03 00 00 */	cmplwi r3, 0
/* 8033B138 00338078  40 82 00 98 */	bne .L_8033B1D0
/* 8033B13C 0033807C  3C 60 00 19 */	lis r3, 0x0019660D@ha
/* 8033B140 00338080  80 8D 98 5C */	lwz r4, oRandom__8PSSystem@sda21(r13)
/* 8033B144 00338084  38 03 66 0D */	addi r0, r3, 0x0019660D@l
/* 8033B148 00338088  88 A6 02 B4 */	lbz r5, 0x2b4(r6)
/* 8033B14C 0033808C  7C 64 01 D6 */	mullw r3, r4, r0
/* 8033B150 00338090  3C 00 43 30 */	lis r0, 0x4330
/* 8033B154 00338094  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8033B158 00338098  C8 42 FE 10 */	lfd f2, lbl_8051E170@sda21(r2)
/* 8033B15C 0033809C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8033B160 003380A0  C0 02 FE 0C */	lfs f0, lbl_8051E16C@sda21(r2)
/* 8033B164 003380A4  3C 63 3C 6F */	addis r3, r3, 0x3c6f
/* 8033B168 003380A8  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 8033B16C 003380AC  38 63 F3 5F */	addi r3, r3, -3233
/* 8033B170 003380B0  54 60 BA 7E */	srwi r0, r3, 9
/* 8033B174 003380B4  90 6D 98 5C */	stw r3, oRandom__8PSSystem@sda21(r13)
/* 8033B178 003380B8  64 00 3F 80 */	oris r0, r0, 0x3f80
/* 8033B17C 003380BC  EC 41 10 28 */	fsubs f2, f1, f2
/* 8033B180 003380C0  90 01 00 08 */	stw r0, 8(r1)
/* 8033B184 003380C4  80 7E 00 04 */	lwz r3, 4(r30)
/* 8033B188 003380C8  C0 21 00 08 */	lfs f1, 8(r1)
/* 8033B18C 003380CC  83 A3 02 B0 */	lwz r29, 0x2b0(r3)
/* 8033B190 003380D0  EC 01 00 28 */	fsubs f0, f1, f0
/* 8033B194 003380D4  EC 22 00 32 */	fmuls f1, f2, f0
/* 8033B198 003380D8  4B D8 69 B5 */	bl __cvt_fp2unsigned
/* 8033B19C 003380DC  54 60 0B FC */	rlwinm r0, r3, 1, 0xf, 0x1e
/* 8033B1A0 003380E0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8033B1A4 003380E4  7C BD 00 AE */	lbzx r5, r29, r0
/* 8033B1A8 003380E8  7C 9D 02 14 */	add r4, r29, r0
/* 8033B1AC 003380EC  88 04 00 01 */	lbz r0, 1(r4)
/* 8033B1B0 003380F0  7F C3 F3 78 */	mr r3, r30
/* 8033B1B4 003380F4  50 A0 44 2E */	rlwimi r0, r5, 8, 0x10, 0x17
/* 8033B1B8 003380F8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8033B1BC 003380FC  54 1D 04 3E */	clrlwi r29, r0, 0x10
/* 8033B1C0 00338100  7D 89 03 A6 */	mtctr r12
/* 8033B1C4 00338104  4E 80 04 21 */	bctrl 
/* 8033B1C8 00338108  7F BD 1B 78 */	or r29, r29, r3
/* 8033B1CC 0033810C  48 00 00 10 */	b .L_8033B1DC
.L_8033B1D0:
/* 8033B1D0 00338110  88 83 00 99 */	lbz r4, 0x99(r3)
/* 8033B1D4 00338114  48 00 1B 49 */	bl "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
/* 8033B1D8 00338118  A3 A3 02 B6 */	lhz r29, 0x2b6(r3)
.L_8033B1DC:
/* 8033B1DC 0033811C  7F E3 FB 78 */	mr r3, r31
/* 8033B1E0 00338120  7F A5 EB 78 */	mr r5, r29
/* 8033B1E4 00338124  38 80 00 08 */	li r4, 8
/* 8033B1E8 00338128  4B D6 6F 05 */	bl writePortAppDirect__8JASTrackFUlUs
/* 8033B1EC 0033812C  80 9E 00 04 */	lwz r4, 4(r30)
/* 8033B1F0 00338130  38 60 00 01 */	li r3, 1
/* 8033B1F4 00338134  B3 A4 02 B6 */	sth r29, 0x2b6(r4)
.L_8033B1F8:
/* 8033B1F8 00338138  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8033B1FC 0033813C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8033B200 00338140  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8033B204 00338144  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8033B208 00338148  7C 08 03 A6 */	mtlr r0
/* 8033B20C 0033814C  38 21 00 30 */	addi r1, r1, 0x30
/* 8033B210 00338150  4E 80 00 20 */	blr 
.endfn play__Q29PSAutoBgm9CycleBaseFP8JASTrack

.fn checkCloser__Q29PSAutoBgm9CycleBaseFP8JASTrack, global
/* 8033B214 00338154  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033B218 00338158  7C 08 02 A6 */	mflr r0
/* 8033B21C 0033815C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033B220 00338160  80 A3 00 04 */	lwz r5, 4(r3)
/* 8033B224 00338164  88 05 01 20 */	lbz r0, 0x120(r5)
/* 8033B228 00338168  2C 00 00 01 */	cmpwi r0, 1
/* 8033B22C 0033816C  40 82 00 1C */	bne .L_8033B248
/* 8033B230 00338170  88 83 00 3C */	lbz r4, 0x3c(r3)
/* 8033B234 00338174  88 05 02 B4 */	lbz r0, 0x2b4(r5)
/* 8033B238 00338178  7C 04 00 40 */	cmplw r4, r0
/* 8033B23C 0033817C  41 82 00 0C */	beq .L_8033B248
/* 8033B240 00338180  38 60 00 00 */	li r3, 0
/* 8033B244 00338184  48 00 00 38 */	b .L_8033B27C
.L_8033B248:
/* 8033B248 00338188  88 83 00 08 */	lbz r4, 8(r3)
/* 8033B24C 0033818C  88 03 00 38 */	lbz r0, 0x38(r3)
/* 8033B250 00338190  7C 04 00 40 */	cmplw r4, r0
/* 8033B254 00338194  40 82 00 24 */	bne .L_8033B278
/* 8033B258 00338198  81 83 00 00 */	lwz r12, 0(r3)
/* 8033B25C 0033819C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8033B260 003381A0  7D 89 03 A6 */	mtctr r12
/* 8033B264 003381A4  4E 80 04 21 */	bctrl 
/* 8033B268 003381A8  2C 03 00 00 */	cmpwi r3, 0
/* 8033B26C 003381AC  40 82 00 0C */	bne .L_8033B278
/* 8033B270 003381B0  38 60 00 01 */	li r3, 1
/* 8033B274 003381B4  48 00 00 08 */	b .L_8033B27C
.L_8033B278:
/* 8033B278 003381B8  38 60 00 00 */	li r3, 0
.L_8033B27C:
/* 8033B27C 003381BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033B280 003381C0  7C 08 03 A6 */	mtlr r0
/* 8033B284 003381C4  38 21 00 10 */	addi r1, r1, 0x10
/* 8033B288 003381C8  4E 80 00 20 */	blr 
.endfn checkCloser__Q29PSAutoBgm9CycleBaseFP8JASTrack

.fn __ct__Q29PSAutoBgm7OnCycleFPQ29PSAutoBgm6Module, global
/* 8033B28C 003381CC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8033B290 003381D0  7C 08 02 A6 */	mflr r0
/* 8033B294 003381D4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8033B298 003381D8  38 00 00 00 */	li r0, 0
/* 8033B29C 003381DC  BF 41 00 08 */	stmw r26, 8(r1)
/* 8033B2A0 003381E0  7C 7E 1B 78 */	mr r30, r3
/* 8033B2A4 003381E4  3C 60 80 4E */	lis r3, __vt__Q29PSAutoBgm9CycleBase@ha
/* 8033B2A8 003381E8  38 63 AB F0 */	addi r3, r3, __vt__Q29PSAutoBgm9CycleBase@l
/* 8033B2AC 003381EC  7F C5 F3 78 */	mr r5, r30
/* 8033B2B0 003381F0  7C BF 2B 78 */	mr r31, r5
/* 8033B2B4 003381F4  3B 5F 00 0C */	addi r26, r31, 0xc
/* 8033B2B8 003381F8  90 7E 00 00 */	stw r3, 0(r30)
/* 8033B2BC 003381FC  7F 43 D3 78 */	mr r3, r26
/* 8033B2C0 00338200  90 85 00 04 */	stw r4, 4(r5)
/* 8033B2C4 00338204  98 05 00 08 */	stb r0, 8(r5)
/* 8033B2C8 00338208  4B CE 1D 05 */	bl __ct__11JKRDisposerFv
/* 8033B2CC 0033820C  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 8033B2D0 00338210  38 00 00 00 */	li r0, 0
/* 8033B2D4 00338214  38 63 67 74 */	addi r3, r3, __vt__Q210JADUtility7PrmBase@l
/* 8033B2D8 00338218  7F 44 D3 78 */	mr r4, r26
/* 8033B2DC 0033821C  90 7A 00 00 */	stw r3, 0(r26)
/* 8033B2E0 00338220  38 7A 00 1C */	addi r3, r26, 0x1c
/* 8033B2E4 00338224  98 1A 00 18 */	stb r0, 0x18(r26)
/* 8033B2E8 00338228  4B CE B4 D1 */	bl __ct__10JSUPtrLinkFPv
/* 8033B2EC 0033822C  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 8033B2F0 00338230  3C 80 80 4E */	lis r4, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
/* 8033B2F4 00338234  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 8033B2F8 00338238  3B BE 00 40 */	addi r29, r30, 0x40
/* 8033B2FC 0033823C  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 8033B300 00338240  90 1A 00 00 */	stw r0, 0(r26)
/* 8033B304 00338244  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 8033B308 00338248  38 A4 AD 2C */	addi r5, r4, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
/* 8033B30C 0033824C  90 1A 00 00 */	stw r0, 0(r26)
/* 8033B310 00338250  3C 60 80 4E */	lis r3, __vt__Q29PSAutoBgm7OnCycle@ha
/* 8033B314 00338254  38 03 AB DC */	addi r0, r3, __vt__Q29PSAutoBgm7OnCycle@l
/* 8033B318 00338258  38 80 00 00 */	li r4, 0
/* 8033B31C 0033825C  90 BA 00 00 */	stw r5, 0(r26)
/* 8033B320 00338260  7F A3 EB 78 */	mr r3, r29
/* 8033B324 00338264  98 9F 00 3C */	stb r4, 0x3c(r31)
/* 8033B328 00338268  90 1E 00 00 */	stw r0, 0(r30)
/* 8033B32C 0033826C  4B CE B5 A5 */	bl initiate__10JSUPtrListFv
/* 8033B330 00338270  38 00 00 02 */	li r0, 2
/* 8033B334 00338274  3B 5D 00 10 */	addi r26, r29, 0x10
/* 8033B338 00338278  B0 1D 00 0C */	sth r0, 0xc(r29)
/* 8033B33C 0033827C  7F 43 D3 78 */	mr r3, r26
/* 8033B340 00338280  4B CE B5 91 */	bl initiate__10JSUPtrListFv
/* 8033B344 00338284  38 00 00 02 */	li r0, 2
/* 8033B348 00338288  38 60 00 38 */	li r3, 0x38
/* 8033B34C 0033828C  B0 1A 00 0C */	sth r0, 0xc(r26)
/* 8033B350 00338290  B0 1D 00 20 */	sth r0, 0x20(r29)
/* 8033B354 00338294  4B CE 8C 59 */	bl __nwa__FUl
/* 8033B358 00338298  3C 80 80 34 */	lis r4, "__ct__Q29PSAutoBgm11PrmLink<Us>Fv"@ha
/* 8033B35C 0033829C  3C A0 80 34 */	lis r5, "__dt__Q29PSAutoBgm11PrmLink<Us>Fv"@ha
/* 8033B360 003382A0  38 84 D0 EC */	addi r4, r4, "__ct__Q29PSAutoBgm11PrmLink<Us>Fv"@l
/* 8033B364 003382A4  38 C0 00 14 */	li r6, 0x14
/* 8033B368 003382A8  38 A5 B4 10 */	addi r5, r5, "__dt__Q29PSAutoBgm11PrmLink<Us>Fv"@l
/* 8033B36C 003382AC  38 E0 00 02 */	li r7, 2
/* 8033B370 003382B0  4B D8 66 81 */	bl __construct_new_array
/* 8033B374 003382B4  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 8033B378 003382B8  7C 7C 1B 78 */	mr r28, r3
/* 8033B37C 003382BC  3B E4 FF FF */	addi r31, r4, 0x0000FFFF@l
/* 8033B380 003382C0  3B 60 00 00 */	li r27, 0
/* 8033B384 003382C4  48 00 00 48 */	b .L_8033B3CC
.L_8033B388:
/* 8033B388 003382C8  57 60 06 3E */	clrlwi r0, r27, 0x18
/* 8033B38C 003382CC  1C 00 00 14 */	mulli r0, r0, 0x14
/* 8033B390 003382D0  7F 5C 02 14 */	add r26, r28, r0
/* 8033B394 003382D4  B3 FA 00 10 */	sth r31, 0x10(r26)
/* 8033B398 003382D8  80 7D 00 08 */	lwz r3, 8(r29)
/* 8033B39C 003382DC  A0 1D 00 0C */	lhz r0, 0xc(r29)
/* 8033B3A0 003382E0  7C 03 00 40 */	cmplw r3, r0
/* 8033B3A4 003382E4  41 80 00 18 */	blt .L_8033B3BC
/* 8033B3A8 003382E8  80 9D 00 00 */	lwz r4, 0(r29)
/* 8033B3AC 003382EC  28 04 00 00 */	cmplwi r4, 0
/* 8033B3B0 003382F0  41 82 00 0C */	beq .L_8033B3BC
/* 8033B3B4 003382F4  7F A3 EB 78 */	mr r3, r29
/* 8033B3B8 003382F8  4B CE B8 6D */	bl remove__10JSUPtrListFP10JSUPtrLink
.L_8033B3BC:
/* 8033B3BC 003382FC  7F A3 EB 78 */	mr r3, r29
/* 8033B3C0 00338300  7F 44 D3 78 */	mr r4, r26
/* 8033B3C4 00338304  4B CE B5 21 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8033B3C8 00338308  3B 7B 00 01 */	addi r27, r27, 1
.L_8033B3CC:
/* 8033B3CC 0033830C  57 60 06 3E */	clrlwi r0, r27, 0x18
/* 8033B3D0 00338310  2C 00 00 02 */	cmpwi r0, 2
/* 8033B3D4 00338314  41 80 FF B4 */	blt .L_8033B388
/* 8033B3D8 00338318  38 60 00 08 */	li r3, 8
/* 8033B3DC 0033831C  4B CE 8B D1 */	bl __nwa__FUl
/* 8033B3E0 00338320  90 7D 00 24 */	stw r3, 0x24(r29)
/* 8033B3E4 00338324  38 00 00 00 */	li r0, 0
/* 8033B3E8 00338328  7F C3 F3 78 */	mr r3, r30
/* 8033B3EC 0033832C  80 9D 00 24 */	lwz r4, 0x24(r29)
/* 8033B3F0 00338330  90 04 00 00 */	stw r0, 0(r4)
/* 8033B3F4 00338334  80 9D 00 24 */	lwz r4, 0x24(r29)
/* 8033B3F8 00338338  90 04 00 04 */	stw r0, 4(r4)
/* 8033B3FC 0033833C  BB 41 00 08 */	lmw r26, 8(r1)
/* 8033B400 00338340  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8033B404 00338344  7C 08 03 A6 */	mtlr r0
/* 8033B408 00338348  38 21 00 20 */	addi r1, r1, 0x20
/* 8033B40C 0033834C  4E 80 00 20 */	blr 
.endfn __ct__Q29PSAutoBgm7OnCycleFPQ29PSAutoBgm6Module

.fn "__dt__Q29PSAutoBgm11PrmLink<Us>Fv", weak
/* 8033B410 00338350  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033B414 00338354  7C 08 02 A6 */	mflr r0
/* 8033B418 00338358  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033B41C 0033835C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033B420 00338360  7C 9F 23 78 */	mr r31, r4
/* 8033B424 00338364  93 C1 00 08 */	stw r30, 8(r1)
/* 8033B428 00338368  7C 7E 1B 79 */	or. r30, r3, r3
/* 8033B42C 0033836C  41 82 00 20 */	beq .L_8033B44C
/* 8033B430 00338370  41 82 00 0C */	beq .L_8033B43C
/* 8033B434 00338374  38 80 00 00 */	li r4, 0
/* 8033B438 00338378  4B CE B3 99 */	bl __dt__10JSUPtrLinkFv
.L_8033B43C:
/* 8033B43C 0033837C  7F E0 07 35 */	extsh. r0, r31
/* 8033B440 00338380  40 81 00 0C */	ble .L_8033B44C
/* 8033B444 00338384  7F C3 F3 78 */	mr r3, r30
/* 8033B448 00338388  4B CE 8C 6D */	bl __dl__FPv
.L_8033B44C:
/* 8033B44C 0033838C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033B450 00338390  7F C3 F3 78 */	mr r3, r30
/* 8033B454 00338394  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033B458 00338398  83 C1 00 08 */	lwz r30, 8(r1)
/* 8033B45C 0033839C  7C 08 03 A6 */	mtlr r0
/* 8033B460 003383A0  38 21 00 10 */	addi r1, r1, 0x10
/* 8033B464 003383A4  4E 80 00 20 */	blr 
.endfn "__dt__Q29PSAutoBgm11PrmLink<Us>Fv"

.fn play__Q29PSAutoBgm7OnCycleFP8JASTrack, global
/* 8033B468 003383A8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8033B46C 003383AC  7C 08 02 A6 */	mflr r0
/* 8033B470 003383B0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8033B474 003383B4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8033B478 003383B8  7C 9F 23 78 */	mr r31, r4
/* 8033B47C 003383BC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8033B480 003383C0  7C 7E 1B 78 */	mr r30, r3
/* 8033B484 003383C4  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8033B488 003383C8  80 C3 00 04 */	lwz r6, 4(r3)
/* 8033B48C 003383CC  88 06 01 20 */	lbz r0, 0x120(r6)
/* 8033B490 003383D0  2C 00 00 01 */	cmpwi r0, 1
/* 8033B494 003383D4  40 82 01 A0 */	bne .L_8033B634
/* 8033B498 003383D8  40 82 00 A4 */	bne .L_8033B53C
/* 8033B49C 003383DC  88 BE 00 3C */	lbz r5, 0x3c(r30)
/* 8033B4A0 003383E0  88 06 02 B4 */	lbz r0, 0x2b4(r6)
/* 8033B4A4 003383E4  7C 05 00 40 */	cmplw r5, r0
/* 8033B4A8 003383E8  40 82 00 0C */	bne .L_8033B4B4
/* 8033B4AC 003383EC  38 00 00 04 */	li r0, 4
/* 8033B4B0 003383F0  48 00 01 5C */	b .L_8033B60C
.L_8033B4B4:
/* 8033B4B4 003383F4  80 86 00 3C */	lwz r4, 0x3c(r6)
/* 8033B4B8 003383F8  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8033B4BC 003383FC  80 84 01 9C */	lwz r4, 0x19c(r4)
/* 8033B4C0 00338400  28 04 00 00 */	cmplwi r4, 0
/* 8033B4C4 00338404  40 82 00 44 */	bne .L_8033B508
/* 8033B4C8 00338408  38 05 00 01 */	addi r0, r5, 1
/* 8033B4CC 0033840C  54 A6 0D FC */	rlwinm r6, r5, 1, 0x17, 0x1e
/* 8033B4D0 00338410  98 1E 00 3C */	stb r0, 0x3c(r30)
/* 8033B4D4 00338414  80 9E 00 04 */	lwz r4, 4(r30)
/* 8033B4D8 00338418  81 83 00 00 */	lwz r12, 0(r3)
/* 8033B4DC 0033841C  80 A4 02 B0 */	lwz r5, 0x2b0(r4)
/* 8033B4E0 00338420  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8033B4E4 00338424  7C 85 32 14 */	add r4, r5, r6
/* 8033B4E8 00338428  7C A5 30 AE */	lbzx r5, r5, r6
/* 8033B4EC 0033842C  88 04 00 01 */	lbz r0, 1(r4)
/* 8033B4F0 00338430  50 A0 44 2E */	rlwimi r0, r5, 8, 0x10, 0x17
/* 8033B4F4 00338434  54 1D 04 3E */	clrlwi r29, r0, 0x10
/* 8033B4F8 00338438  7D 89 03 A6 */	mtctr r12
/* 8033B4FC 0033843C  4E 80 04 21 */	bctrl 
/* 8033B500 00338440  7F A5 1B 78 */	or r5, r29, r3
/* 8033B504 00338444  48 00 00 1C */	b .L_8033B520
.L_8033B508:
/* 8033B508 00338448  38 05 00 01 */	addi r0, r5, 1
/* 8033B50C 0033844C  7C 83 23 78 */	mr r3, r4
/* 8033B510 00338450  98 1E 00 3C */	stb r0, 0x3c(r30)
/* 8033B514 00338454  88 84 00 99 */	lbz r4, 0x99(r4)
/* 8033B518 00338458  48 00 18 05 */	bl "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
/* 8033B51C 0033845C  A0 A3 02 B6 */	lhz r5, 0x2b6(r3)
.L_8033B520:
/* 8033B520 00338460  80 DE 00 04 */	lwz r6, 4(r30)
/* 8033B524 00338464  7F E3 FB 78 */	mr r3, r31
/* 8033B528 00338468  38 80 00 08 */	li r4, 8
/* 8033B52C 0033846C  B0 A6 02 B6 */	sth r5, 0x2b6(r6)
/* 8033B530 00338470  4B D6 6B BD */	bl writePortAppDirect__8JASTrackFUlUs
/* 8033B534 00338474  38 00 00 03 */	li r0, 3
/* 8033B538 00338478  48 00 00 D4 */	b .L_8033B60C
.L_8033B53C:
/* 8033B53C 0033847C  80 66 00 3C */	lwz r3, 0x3c(r6)
/* 8033B540 00338480  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8033B544 00338484  80 63 01 9C */	lwz r3, 0x19c(r3)
/* 8033B548 00338488  28 03 00 00 */	cmplwi r3, 0
/* 8033B54C 0033848C  40 82 00 98 */	bne .L_8033B5E4
/* 8033B550 00338490  3C 60 00 19 */	lis r3, 0x0019660D@ha
/* 8033B554 00338494  80 8D 98 5C */	lwz r4, oRandom__8PSSystem@sda21(r13)
/* 8033B558 00338498  38 03 66 0D */	addi r0, r3, 0x0019660D@l
/* 8033B55C 0033849C  88 A6 02 B4 */	lbz r5, 0x2b4(r6)
/* 8033B560 003384A0  7C 64 01 D6 */	mullw r3, r4, r0
/* 8033B564 003384A4  3C 00 43 30 */	lis r0, 0x4330
/* 8033B568 003384A8  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8033B56C 003384AC  C8 42 FE 10 */	lfd f2, lbl_8051E170@sda21(r2)
/* 8033B570 003384B0  90 01 00 10 */	stw r0, 0x10(r1)
/* 8033B574 003384B4  C0 02 FE 0C */	lfs f0, lbl_8051E16C@sda21(r2)
/* 8033B578 003384B8  3C 63 3C 6F */	addis r3, r3, 0x3c6f
/* 8033B57C 003384BC  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 8033B580 003384C0  38 63 F3 5F */	addi r3, r3, -3233
/* 8033B584 003384C4  54 60 BA 7E */	srwi r0, r3, 9
/* 8033B588 003384C8  90 6D 98 5C */	stw r3, oRandom__8PSSystem@sda21(r13)
/* 8033B58C 003384CC  64 00 3F 80 */	oris r0, r0, 0x3f80
/* 8033B590 003384D0  EC 41 10 28 */	fsubs f2, f1, f2
/* 8033B594 003384D4  90 01 00 0C */	stw r0, 0xc(r1)
/* 8033B598 003384D8  80 7E 00 04 */	lwz r3, 4(r30)
/* 8033B59C 003384DC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8033B5A0 003384E0  83 A3 02 B0 */	lwz r29, 0x2b0(r3)
/* 8033B5A4 003384E4  EC 01 00 28 */	fsubs f0, f1, f0
/* 8033B5A8 003384E8  EC 22 00 32 */	fmuls f1, f2, f0
/* 8033B5AC 003384EC  4B D8 65 A1 */	bl __cvt_fp2unsigned
/* 8033B5B0 003384F0  54 60 0B FC */	rlwinm r0, r3, 1, 0xf, 0x1e
/* 8033B5B4 003384F4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8033B5B8 003384F8  7C BD 00 AE */	lbzx r5, r29, r0
/* 8033B5BC 003384FC  7C 9D 02 14 */	add r4, r29, r0
/* 8033B5C0 00338500  88 04 00 01 */	lbz r0, 1(r4)
/* 8033B5C4 00338504  7F C3 F3 78 */	mr r3, r30
/* 8033B5C8 00338508  50 A0 44 2E */	rlwimi r0, r5, 8, 0x10, 0x17
/* 8033B5CC 0033850C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8033B5D0 00338510  54 1D 04 3E */	clrlwi r29, r0, 0x10
/* 8033B5D4 00338514  7D 89 03 A6 */	mtctr r12
/* 8033B5D8 00338518  4E 80 04 21 */	bctrl 
/* 8033B5DC 0033851C  7F BD 1B 78 */	or r29, r29, r3
/* 8033B5E0 00338520  48 00 00 10 */	b .L_8033B5F0
.L_8033B5E4:
/* 8033B5E4 00338524  88 83 00 99 */	lbz r4, 0x99(r3)
/* 8033B5E8 00338528  48 00 17 35 */	bl "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
/* 8033B5EC 0033852C  A3 A3 02 B6 */	lhz r29, 0x2b6(r3)
.L_8033B5F0:
/* 8033B5F0 00338530  7F E3 FB 78 */	mr r3, r31
/* 8033B5F4 00338534  7F A5 EB 78 */	mr r5, r29
/* 8033B5F8 00338538  38 80 00 08 */	li r4, 8
/* 8033B5FC 0033853C  4B D6 6A F1 */	bl writePortAppDirect__8JASTrackFUlUs
/* 8033B600 00338540  80 7E 00 04 */	lwz r3, 4(r30)
/* 8033B604 00338544  38 00 00 01 */	li r0, 1
/* 8033B608 00338548  B3 A3 02 B6 */	sth r29, 0x2b6(r3)
.L_8033B60C:
/* 8033B60C 0033854C  54 00 04 3E */	clrlwi r0, r0, 0x10
/* 8033B610 00338550  28 00 00 04 */	cmplwi r0, 4
/* 8033B614 00338554  40 82 00 0C */	bne .L_8033B620
/* 8033B618 00338558  38 60 00 04 */	li r3, 4
/* 8033B61C 0033855C  48 00 01 90 */	b .L_8033B7AC
.L_8033B620:
/* 8033B620 00338560  7F C3 F3 78 */	mr r3, r30
/* 8033B624 00338564  7F E4 FB 78 */	mr r4, r31
/* 8033B628 00338568  48 00 01 A1 */	bl setTip__Q29PSAutoBgm7OnCycleFP8JASTrack
/* 8033B62C 0033856C  38 60 00 02 */	li r3, 2
/* 8033B630 00338570  48 00 01 7C */	b .L_8033B7AC
.L_8033B634:
/* 8033B634 00338574  48 00 01 95 */	bl setTip__Q29PSAutoBgm7OnCycleFP8JASTrack
/* 8033B638 00338578  80 BE 00 04 */	lwz r5, 4(r30)
/* 8033B63C 0033857C  88 05 01 20 */	lbz r0, 0x120(r5)
/* 8033B640 00338580  2C 00 00 01 */	cmpwi r0, 1
/* 8033B644 00338584  40 82 00 98 */	bne .L_8033B6DC
/* 8033B648 00338588  88 9E 00 3C */	lbz r4, 0x3c(r30)
/* 8033B64C 0033858C  88 05 02 B4 */	lbz r0, 0x2b4(r5)
/* 8033B650 00338590  7C 04 00 40 */	cmplw r4, r0
/* 8033B654 00338594  41 82 01 54 */	beq .L_8033B7A8
/* 8033B658 00338598  80 65 00 3C */	lwz r3, 0x3c(r5)
/* 8033B65C 0033859C  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8033B660 003385A0  80 63 01 9C */	lwz r3, 0x19c(r3)
/* 8033B664 003385A4  28 03 00 00 */	cmplwi r3, 0
/* 8033B668 003385A8  40 82 00 48 */	bne .L_8033B6B0
/* 8033B66C 003385AC  38 04 00 01 */	addi r0, r4, 1
/* 8033B670 003385B0  7F C3 F3 78 */	mr r3, r30
/* 8033B674 003385B4  98 1E 00 3C */	stb r0, 0x3c(r30)
/* 8033B678 003385B8  54 80 0D FC */	rlwinm r0, r4, 1, 0x17, 0x1e
/* 8033B67C 003385BC  80 9E 00 04 */	lwz r4, 4(r30)
/* 8033B680 003385C0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8033B684 003385C4  80 A4 02 B0 */	lwz r5, 0x2b0(r4)
/* 8033B688 003385C8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8033B68C 003385CC  7C 85 02 14 */	add r4, r5, r0
/* 8033B690 003385D0  7C A5 00 AE */	lbzx r5, r5, r0
/* 8033B694 003385D4  88 04 00 01 */	lbz r0, 1(r4)
/* 8033B698 003385D8  50 A0 44 2E */	rlwimi r0, r5, 8, 0x10, 0x17
/* 8033B69C 003385DC  54 1D 04 3E */	clrlwi r29, r0, 0x10
/* 8033B6A0 003385E0  7D 89 03 A6 */	mtctr r12
/* 8033B6A4 003385E4  4E 80 04 21 */	bctrl 
/* 8033B6A8 003385E8  7F A5 1B 78 */	or r5, r29, r3
/* 8033B6AC 003385EC  48 00 00 18 */	b .L_8033B6C4
.L_8033B6B0:
/* 8033B6B0 003385F0  38 04 00 01 */	addi r0, r4, 1
/* 8033B6B4 003385F4  98 1E 00 3C */	stb r0, 0x3c(r30)
/* 8033B6B8 003385F8  88 83 00 99 */	lbz r4, 0x99(r3)
/* 8033B6BC 003385FC  48 00 16 61 */	bl "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
/* 8033B6C0 00338600  A0 A3 02 B6 */	lhz r5, 0x2b6(r3)
.L_8033B6C4:
/* 8033B6C4 00338604  80 DE 00 04 */	lwz r6, 4(r30)
/* 8033B6C8 00338608  7F E3 FB 78 */	mr r3, r31
/* 8033B6CC 0033860C  38 80 00 08 */	li r4, 8
/* 8033B6D0 00338610  B0 A6 02 B6 */	sth r5, 0x2b6(r6)
/* 8033B6D4 00338614  4B D6 6A 19 */	bl writePortAppDirect__8JASTrackFUlUs
/* 8033B6D8 00338618  48 00 00 D0 */	b .L_8033B7A8
.L_8033B6DC:
/* 8033B6DC 0033861C  80 65 00 3C */	lwz r3, 0x3c(r5)
/* 8033B6E0 00338620  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8033B6E4 00338624  80 63 01 9C */	lwz r3, 0x19c(r3)
/* 8033B6E8 00338628  28 03 00 00 */	cmplwi r3, 0
/* 8033B6EC 0033862C  40 82 00 98 */	bne .L_8033B784
/* 8033B6F0 00338630  3C 60 00 19 */	lis r3, 0x0019660D@ha
/* 8033B6F4 00338634  80 8D 98 5C */	lwz r4, oRandom__8PSSystem@sda21(r13)
/* 8033B6F8 00338638  38 03 66 0D */	addi r0, r3, 0x0019660D@l
/* 8033B6FC 0033863C  88 A5 02 B4 */	lbz r5, 0x2b4(r5)
/* 8033B700 00338640  7C 64 01 D6 */	mullw r3, r4, r0
/* 8033B704 00338644  3C 00 43 30 */	lis r0, 0x4330
/* 8033B708 00338648  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8033B70C 0033864C  C8 42 FE 10 */	lfd f2, lbl_8051E170@sda21(r2)
/* 8033B710 00338650  90 01 00 10 */	stw r0, 0x10(r1)
/* 8033B714 00338654  C0 02 FE 0C */	lfs f0, lbl_8051E16C@sda21(r2)
/* 8033B718 00338658  3C 63 3C 6F */	addis r3, r3, 0x3c6f
/* 8033B71C 0033865C  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 8033B720 00338660  38 63 F3 5F */	addi r3, r3, -3233
/* 8033B724 00338664  54 60 BA 7E */	srwi r0, r3, 9
/* 8033B728 00338668  90 6D 98 5C */	stw r3, oRandom__8PSSystem@sda21(r13)
/* 8033B72C 0033866C  64 00 3F 80 */	oris r0, r0, 0x3f80
/* 8033B730 00338670  EC 41 10 28 */	fsubs f2, f1, f2
/* 8033B734 00338674  90 01 00 08 */	stw r0, 8(r1)
/* 8033B738 00338678  80 7E 00 04 */	lwz r3, 4(r30)
/* 8033B73C 0033867C  C0 21 00 08 */	lfs f1, 8(r1)
/* 8033B740 00338680  83 A3 02 B0 */	lwz r29, 0x2b0(r3)
/* 8033B744 00338684  EC 01 00 28 */	fsubs f0, f1, f0
/* 8033B748 00338688  EC 22 00 32 */	fmuls f1, f2, f0
/* 8033B74C 0033868C  4B D8 64 01 */	bl __cvt_fp2unsigned
/* 8033B750 00338690  54 60 0B FC */	rlwinm r0, r3, 1, 0xf, 0x1e
/* 8033B754 00338694  81 9E 00 00 */	lwz r12, 0(r30)
/* 8033B758 00338698  7C BD 00 AE */	lbzx r5, r29, r0
/* 8033B75C 0033869C  7C 9D 02 14 */	add r4, r29, r0
/* 8033B760 003386A0  88 04 00 01 */	lbz r0, 1(r4)
/* 8033B764 003386A4  7F C3 F3 78 */	mr r3, r30
/* 8033B768 003386A8  50 A0 44 2E */	rlwimi r0, r5, 8, 0x10, 0x17
/* 8033B76C 003386AC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8033B770 003386B0  54 1D 04 3E */	clrlwi r29, r0, 0x10
/* 8033B774 003386B4  7D 89 03 A6 */	mtctr r12
/* 8033B778 003386B8  4E 80 04 21 */	bctrl 
/* 8033B77C 003386BC  7F BD 1B 78 */	or r29, r29, r3
/* 8033B780 003386C0  48 00 00 10 */	b .L_8033B790
.L_8033B784:
/* 8033B784 003386C4  88 83 00 99 */	lbz r4, 0x99(r3)
/* 8033B788 003386C8  48 00 15 95 */	bl "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
/* 8033B78C 003386CC  A3 A3 02 B6 */	lhz r29, 0x2b6(r3)
.L_8033B790:
/* 8033B790 003386D0  7F E3 FB 78 */	mr r3, r31
/* 8033B794 003386D4  7F A5 EB 78 */	mr r5, r29
/* 8033B798 003386D8  38 80 00 08 */	li r4, 8
/* 8033B79C 003386DC  4B D6 69 51 */	bl writePortAppDirect__8JASTrackFUlUs
/* 8033B7A0 003386E0  80 7E 00 04 */	lwz r3, 4(r30)
/* 8033B7A4 003386E4  B3 A3 02 B6 */	sth r29, 0x2b6(r3)
.L_8033B7A8:
/* 8033B7A8 003386E8  38 60 00 00 */	li r3, 0
.L_8033B7AC:
/* 8033B7AC 003386EC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8033B7B0 003386F0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8033B7B4 003386F4  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8033B7B8 003386F8  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8033B7BC 003386FC  7C 08 03 A6 */	mtlr r0
/* 8033B7C0 00338700  38 21 00 30 */	addi r1, r1, 0x30
/* 8033B7C4 00338704  4E 80 00 20 */	blr 
.endfn play__Q29PSAutoBgm7OnCycleFP8JASTrack

.fn setTip__Q29PSAutoBgm7OnCycleFP8JASTrack, global
/* 8033B7C8 00338708  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8033B7CC 0033870C  7C 08 02 A6 */	mflr r0
/* 8033B7D0 00338710  90 01 00 34 */	stw r0, 0x34(r1)
/* 8033B7D4 00338714  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 8033B7D8 00338718  7C 9D 23 78 */	mr r29, r4
/* 8033B7DC 0033871C  7C 7C 1B 78 */	mr r28, r3
/* 8033B7E0 00338720  80 83 00 04 */	lwz r4, 4(r3)
/* 8033B7E4 00338724  80 64 00 3C */	lwz r3, 0x3c(r4)
/* 8033B7E8 00338728  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8033B7EC 0033872C  80 63 01 9C */	lwz r3, 0x19c(r3)
/* 8033B7F0 00338730  28 03 00 00 */	cmplwi r3, 0
/* 8033B7F4 00338734  40 82 01 D4 */	bne .L_8033B9C8
/* 8033B7F8 00338738  8B E4 02 AC */	lbz r31, 0x2ac(r4)
/* 8033B7FC 0033873C  28 1F 00 01 */	cmplwi r31, 1
/* 8033B800 00338740  40 81 01 C0 */	ble .L_8033B9C0
/* 8033B804 00338744  3C 60 00 19 */	lis r3, 0x0019660D@ha
/* 8033B808 00338748  80 8D 98 5C */	lwz r4, oRandom__8PSSystem@sda21(r13)
/* 8033B80C 0033874C  38 63 66 0D */	addi r3, r3, 0x0019660D@l
/* 8033B810 00338750  3C 00 43 30 */	lis r0, 0x4330
/* 8033B814 00338754  7C 64 19 D6 */	mullw r3, r4, r3
/* 8033B818 00338758  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8033B81C 0033875C  C8 42 FE 10 */	lfd f2, lbl_8051E170@sda21(r2)
/* 8033B820 00338760  90 01 00 10 */	stw r0, 0x10(r1)
/* 8033B824 00338764  C0 02 FE 0C */	lfs f0, lbl_8051E16C@sda21(r2)
/* 8033B828 00338768  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 8033B82C 0033876C  3C 63 3C 6F */	addis r3, r3, 0x3c6f
/* 8033B830 00338770  EC 41 10 28 */	fsubs f2, f1, f2
/* 8033B834 00338774  38 63 F3 5F */	addi r3, r3, -3233
/* 8033B838 00338778  54 60 BA 7E */	srwi r0, r3, 9
/* 8033B83C 0033877C  90 6D 98 5C */	stw r3, oRandom__8PSSystem@sda21(r13)
/* 8033B840 00338780  64 00 3F 80 */	oris r0, r0, 0x3f80
/* 8033B844 00338784  90 01 00 0C */	stw r0, 0xc(r1)
/* 8033B848 00338788  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8033B84C 0033878C  EC 01 00 28 */	fsubs f0, f1, f0
/* 8033B850 00338790  EC 22 00 32 */	fmuls f1, f2, f0
/* 8033B854 00338794  4B D8 62 F9 */	bl __cvt_fp2unsigned
/* 8033B858 00338798  54 7E 04 3E */	clrlwi r30, r3, 0x10
/* 8033B85C 0033879C  7F 83 E3 78 */	mr r3, r28
/* 8033B860 003387A0  48 00 01 DD */	bl historiesAreSameAll__Q29PSAutoBgm7OnCycleFv
/* 8033B864 003387A4  7C 7B 1B 78 */	mr r27, r3
/* 8033B868 003387A8  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 8033B86C 003387AC  28 00 FF FF */	cmplwi r0, 0xffff
/* 8033B870 003387B0  41 82 00 78 */	beq .L_8033B8E8
/* 8033B874 003387B4  7C 00 F0 40 */	cmplw r0, r30
/* 8033B878 003387B8  40 82 00 70 */	bne .L_8033B8E8
/* 8033B87C 003387BC  3C 60 00 19 */	lis r3, 0x0019660D@ha
/* 8033B880 003387C0  80 8D 98 5C */	lwz r4, oRandom__8PSSystem@sda21(r13)
/* 8033B884 003387C4  38 03 66 0D */	addi r0, r3, 0x0019660D@l
/* 8033B888 003387C8  38 7F FF FF */	addi r3, r31, -1
/* 8033B88C 003387CC  7C 84 01 D6 */	mullw r4, r4, r0
/* 8033B890 003387D0  3C 00 43 30 */	lis r0, 0x4330
/* 8033B894 003387D4  90 61 00 14 */	stw r3, 0x14(r1)
/* 8033B898 003387D8  C8 42 FE 10 */	lfd f2, lbl_8051E170@sda21(r2)
/* 8033B89C 003387DC  90 01 00 10 */	stw r0, 0x10(r1)
/* 8033B8A0 003387E0  C0 02 FE 0C */	lfs f0, lbl_8051E16C@sda21(r2)
/* 8033B8A4 003387E4  3C 64 3C 6F */	addis r3, r4, 0x3c6f
/* 8033B8A8 003387E8  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 8033B8AC 003387EC  38 63 F3 5F */	addi r3, r3, -3233
/* 8033B8B0 003387F0  54 60 BA 7E */	srwi r0, r3, 9
/* 8033B8B4 003387F4  EC 41 10 28 */	fsubs f2, f1, f2
/* 8033B8B8 003387F8  64 00 3F 80 */	oris r0, r0, 0x3f80
/* 8033B8BC 003387FC  90 6D 98 5C */	stw r3, oRandom__8PSSystem@sda21(r13)
/* 8033B8C0 00338800  90 01 00 08 */	stw r0, 8(r1)
/* 8033B8C4 00338804  C0 21 00 08 */	lfs f1, 8(r1)
/* 8033B8C8 00338808  EC 01 00 28 */	fsubs f0, f1, f0
/* 8033B8CC 0033880C  EC 22 00 32 */	fmuls f1, f2, f0
/* 8033B8D0 00338810  4B D8 62 7D */	bl __cvt_fp2unsigned
/* 8033B8D4 00338814  54 7E 04 3E */	clrlwi r30, r3, 0x10
/* 8033B8D8 00338818  57 60 04 3E */	clrlwi r0, r27, 0x10
/* 8033B8DC 0033881C  7C 1E 00 40 */	cmplw r30, r0
/* 8033B8E0 00338820  41 80 00 08 */	blt .L_8033B8E8
/* 8033B8E4 00338824  3B DE 00 01 */	addi r30, r30, 1
.L_8033B8E8:
/* 8033B8E8 00338828  83 7C 00 40 */	lwz r27, 0x40(r28)
/* 8033B8EC 0033882C  28 1B 00 00 */	cmplwi r27, 0
/* 8033B8F0 00338830  41 82 00 10 */	beq .L_8033B900
/* 8033B8F4 00338834  7F 64 DB 78 */	mr r4, r27
/* 8033B8F8 00338838  38 7C 00 40 */	addi r3, r28, 0x40
/* 8033B8FC 0033883C  4B CE B3 29 */	bl remove__10JSUPtrListFP10JSUPtrLink
.L_8033B900:
/* 8033B900 00338840  28 1B 00 00 */	cmplwi r27, 0
/* 8033B904 00338844  40 82 00 1C */	bne .L_8033B920
/* 8033B908 00338848  83 7C 00 50 */	lwz r27, 0x50(r28)
/* 8033B90C 0033884C  28 1B 00 00 */	cmplwi r27, 0
/* 8033B910 00338850  41 82 00 10 */	beq .L_8033B920
/* 8033B914 00338854  7F 64 DB 78 */	mr r4, r27
/* 8033B918 00338858  38 7C 00 50 */	addi r3, r28, 0x50
/* 8033B91C 0033885C  4B CE B3 09 */	bl remove__10JSUPtrListFP10JSUPtrLink
.L_8033B920:
/* 8033B920 00338860  28 1B 00 00 */	cmplwi r27, 0
/* 8033B924 00338864  40 82 00 20 */	bne .L_8033B944
/* 8033B928 00338868  3C 60 80 49 */	lis r3, lbl_8048FED4@ha
/* 8033B92C 0033886C  3C A0 80 49 */	lis r5, lbl_8048FE70@ha
/* 8033B930 00338870  38 63 FE D4 */	addi r3, r3, lbl_8048FED4@l
/* 8033B934 00338874  38 80 01 55 */	li r4, 0x155
/* 8033B938 00338878  38 A5 FE 70 */	addi r5, r5, lbl_8048FE70@l
/* 8033B93C 0033887C  4C C6 31 82 */	crclr 6
/* 8033B940 00338880  4B CE ED 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8033B944:
/* 8033B944 00338884  80 7B 00 00 */	lwz r3, 0(r27)
/* 8033B948 00338888  3B E0 00 00 */	li r31, 0
/* 8033B94C 0033888C  B3 C3 00 00 */	sth r30, 0(r3)
/* 8033B950 00338890  80 7C 00 58 */	lwz r3, 0x58(r28)
/* 8033B954 00338894  A0 1C 00 5C */	lhz r0, 0x5c(r28)
/* 8033B958 00338898  7C 03 00 40 */	cmplw r3, r0
/* 8033B95C 0033889C  41 80 00 1C */	blt .L_8033B978
/* 8033B960 003388A0  83 FC 00 50 */	lwz r31, 0x50(r28)
/* 8033B964 003388A4  28 1F 00 00 */	cmplwi r31, 0
/* 8033B968 003388A8  41 82 00 10 */	beq .L_8033B978
/* 8033B96C 003388AC  7F E4 FB 78 */	mr r4, r31
/* 8033B970 003388B0  38 7C 00 50 */	addi r3, r28, 0x50
/* 8033B974 003388B4  4B CE B2 B1 */	bl remove__10JSUPtrListFP10JSUPtrLink
.L_8033B978:
/* 8033B978 003388B8  7F 64 DB 78 */	mr r4, r27
/* 8033B97C 003388BC  38 7C 00 50 */	addi r3, r28, 0x50
/* 8033B980 003388C0  4B CE AF 65 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8033B984 003388C4  28 1F 00 00 */	cmplwi r31, 0
/* 8033B988 003388C8  41 82 00 4C */	beq .L_8033B9D4
/* 8033B98C 003388CC  80 7C 00 48 */	lwz r3, 0x48(r28)
/* 8033B990 003388D0  A0 1C 00 4C */	lhz r0, 0x4c(r28)
/* 8033B994 003388D4  7C 03 00 40 */	cmplw r3, r0
/* 8033B998 003388D8  41 80 00 18 */	blt .L_8033B9B0
/* 8033B99C 003388DC  80 9C 00 40 */	lwz r4, 0x40(r28)
/* 8033B9A0 003388E0  28 04 00 00 */	cmplwi r4, 0
/* 8033B9A4 003388E4  41 82 00 0C */	beq .L_8033B9B0
/* 8033B9A8 003388E8  38 7C 00 40 */	addi r3, r28, 0x40
/* 8033B9AC 003388EC  4B CE B2 79 */	bl remove__10JSUPtrListFP10JSUPtrLink
.L_8033B9B0:
/* 8033B9B0 003388F0  7F E4 FB 78 */	mr r4, r31
/* 8033B9B4 003388F4  38 7C 00 40 */	addi r3, r28, 0x40
/* 8033B9B8 003388F8  4B CE AF 2D */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8033B9BC 003388FC  48 00 00 18 */	b .L_8033B9D4
.L_8033B9C0:
/* 8033B9C0 00338900  3B C0 00 00 */	li r30, 0
/* 8033B9C4 00338904  48 00 00 10 */	b .L_8033B9D4
.L_8033B9C8:
/* 8033B9C8 00338908  88 83 00 99 */	lbz r4, 0x99(r3)
/* 8033B9CC 0033890C  48 00 13 51 */	bl "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
/* 8033B9D0 00338910  A3 C3 02 C2 */	lhz r30, 0x2c2(r3)
.L_8033B9D4:
/* 8033B9D4 00338914  80 9C 00 04 */	lwz r4, 4(r28)
/* 8033B9D8 00338918  57 C0 04 3E */	clrlwi r0, r30, 0x10
/* 8033B9DC 0033891C  1C 00 00 03 */	mulli r0, r0, 3
/* 8033B9E0 00338920  7F A3 EB 78 */	mr r3, r29
/* 8033B9E4 00338924  B3 C4 02 C2 */	sth r30, 0x2c2(r4)
/* 8033B9E8 00338928  38 80 00 06 */	li r4, 6
/* 8033B9EC 0033892C  80 BC 00 04 */	lwz r5, 4(r28)
/* 8033B9F0 00338930  80 A5 02 A8 */	lwz r5, 0x2a8(r5)
/* 8033B9F4 00338934  7C C5 02 14 */	add r6, r5, r0
/* 8033B9F8 00338938  7C A5 00 AE */	lbzx r5, r5, r0
/* 8033B9FC 0033893C  88 06 00 01 */	lbz r0, 1(r6)
/* 8033BA00 00338940  88 C6 00 02 */	lbz r6, 2(r6)
/* 8033BA04 00338944  54 00 40 2E */	slwi r0, r0, 8
/* 8033BA08 00338948  50 A0 82 1E */	rlwimi r0, r5, 0x10, 8, 0xf
/* 8033BA0C 0033894C  7C DB 03 78 */	or r27, r6, r0
/* 8033BA10 00338950  57 65 84 3E */	srwi r5, r27, 0x10
/* 8033BA14 00338954  4B D6 66 D9 */	bl writePortAppDirect__8JASTrackFUlUs
/* 8033BA18 00338958  57 65 04 3E */	clrlwi r5, r27, 0x10
/* 8033BA1C 0033895C  7F A3 EB 78 */	mr r3, r29
/* 8033BA20 00338960  38 80 00 07 */	li r4, 7
/* 8033BA24 00338964  4B D6 66 C9 */	bl writePortAppDirect__8JASTrackFUlUs
/* 8033BA28 00338968  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 8033BA2C 0033896C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8033BA30 00338970  7C 08 03 A6 */	mtlr r0
/* 8033BA34 00338974  38 21 00 30 */	addi r1, r1, 0x30
/* 8033BA38 00338978  4E 80 00 20 */	blr 
.endfn setTip__Q29PSAutoBgm7OnCycleFP8JASTrack

.fn historiesAreSameAll__Q29PSAutoBgm7OnCycleFv, global
/* 8033BA3C 0033897C  80 83 00 58 */	lwz r4, 0x58(r3)
/* 8033BA40 00338980  A0 03 00 60 */	lhz r0, 0x60(r3)
/* 8033BA44 00338984  7C 04 00 40 */	cmplw r4, r0
/* 8033BA48 00338988  40 80 00 10 */	bge .L_8033BA58
/* 8033BA4C 0033898C  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8033BA50 00338990  38 63 FF FF */	addi r3, r3, 0x0000FFFF@l
/* 8033BA54 00338994  4E 80 00 20 */	blr 
.L_8033BA58:
/* 8033BA58 00338998  80 83 00 50 */	lwz r4, 0x50(r3)
/* 8033BA5C 0033899C  80 64 00 00 */	lwz r3, 0(r4)
/* 8033BA60 003389A0  80 A4 00 0C */	lwz r5, 0xc(r4)
/* 8033BA64 003389A4  A0 63 00 00 */	lhz r3, 0(r3)
/* 8033BA68 003389A8  48 00 00 24 */	b .L_8033BA8C
.L_8033BA6C:
/* 8033BA6C 003389AC  80 85 00 00 */	lwz r4, 0(r5)
/* 8033BA70 003389B0  A0 04 00 00 */	lhz r0, 0(r4)
/* 8033BA74 003389B4  7C 03 00 40 */	cmplw r3, r0
/* 8033BA78 003389B8  41 82 00 10 */	beq .L_8033BA88
/* 8033BA7C 003389BC  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8033BA80 003389C0  38 63 FF FF */	addi r3, r3, 0x0000FFFF@l
/* 8033BA84 003389C4  4E 80 00 20 */	blr 
.L_8033BA88:
/* 8033BA88 003389C8  80 A5 00 0C */	lwz r5, 0xc(r5)
.L_8033BA8C:
/* 8033BA8C 003389CC  28 05 00 00 */	cmplwi r5, 0
/* 8033BA90 003389D0  40 82 FF DC */	bne .L_8033BA6C
/* 8033BA94 003389D4  4E 80 00 20 */	blr 
.endfn historiesAreSameAll__Q29PSAutoBgm7OnCycleFv

.fn avoidCheck__Q29PSAutoBgm7OnCycleFv, global
/* 8033BA98 003389D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8033BA9C 003389DC  7C 08 02 A6 */	mflr r0
/* 8033BAA0 003389E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8033BAA4 003389E4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8033BAA8 003389E8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8033BAAC 003389EC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8033BAB0 003389F0  80 83 00 04 */	lwz r4, 4(r3)
/* 8033BAB4 003389F4  8B E3 00 08 */	lbz r31, 8(r3)
/* 8033BAB8 003389F8  80 64 00 3C */	lwz r3, 0x3c(r4)
/* 8033BABC 003389FC  83 C3 00 0C */	lwz r30, 0xc(r3)
/* 8033BAC0 00338A00  80 7E 00 3C */	lwz r3, 0x3c(r30)
/* 8033BAC4 00338A04  88 1E 00 98 */	lbz r0, 0x98(r30)
/* 8033BAC8 00338A08  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8033BACC 00338A0C  28 00 00 10 */	cmplwi r0, 0x10
/* 8033BAD0 00338A10  80 63 00 B4 */	lwz r3, 0xb4(r3)
/* 8033BAD4 00338A14  3B A3 03 3C */	addi r29, r3, 0x33c
/* 8033BAD8 00338A18  41 80 00 20 */	blt .L_8033BAF8
/* 8033BADC 00338A1C  3C 60 80 49 */	lis r3, lbl_8048FE60@ha
/* 8033BAE0 00338A20  3C A0 80 49 */	lis r5, lbl_8048FE70@ha
/* 8033BAE4 00338A24  38 63 FE 60 */	addi r3, r3, lbl_8048FE60@l
/* 8033BAE8 00338A28  38 80 01 E4 */	li r4, 0x1e4
/* 8033BAEC 00338A2C  38 A5 FE 70 */	addi r5, r5, lbl_8048FE70@l
/* 8033BAF0 00338A30  4C C6 31 82 */	crclr 6
/* 8033BAF4 00338A34  4B CE EB 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8033BAF8:
/* 8033BAF8 00338A38  38 00 00 FF */	li r0, 0xff
/* 8033BAFC 00338A3C  7F A3 EB 78 */	mr r3, r29
/* 8033BB00 00338A40  98 01 00 08 */	stb r0, 8(r1)
/* 8033BB04 00338A44  38 81 00 08 */	addi r4, r1, 8
/* 8033BB08 00338A48  98 01 00 09 */	stb r0, 9(r1)
/* 8033BB0C 00338A4C  88 1E 00 98 */	lbz r0, 0x98(r30)
/* 8033BB10 00338A50  98 01 00 08 */	stb r0, 8(r1)
/* 8033BB14 00338A54  9B E1 00 09 */	stb r31, 9(r1)
/* 8033BB18 00338A58  48 00 33 C1 */	bl isToAvoid__Q29PSAutoBgm10MeloArrMgrFRQ29PSAutoBgm10MeloArrArg
/* 8033BB1C 00338A5C  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8033BB20 00338A60  28 00 00 01 */	cmplwi r0, 1
/* 8033BB24 00338A64  40 82 00 10 */	bne .L_8033BB34
/* 8033BB28 00338A68  3C 60 00 01 */	lis r3, 0x00008000@ha
/* 8033BB2C 00338A6C  38 63 80 00 */	addi r3, r3, 0x00008000@l
/* 8033BB30 00338A70  48 00 00 08 */	b .L_8033BB38
.L_8033BB34:
/* 8033BB34 00338A74  38 60 00 00 */	li r3, 0
.L_8033BB38:
/* 8033BB38 00338A78  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8033BB3C 00338A7C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8033BB40 00338A80  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8033BB44 00338A84  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8033BB48 00338A88  7C 08 03 A6 */	mtlr r0
/* 8033BB4C 00338A8C  38 21 00 20 */	addi r1, r1, 0x20
/* 8033BB50 00338A90  4E 80 00 20 */	blr 
.endfn avoidCheck__Q29PSAutoBgm7OnCycleFv

.fn __ct__Q29PSAutoBgm8OffCycleFPQ29PSAutoBgm6Module, global
/* 8033BB54 00338A94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033BB58 00338A98  7C 08 02 A6 */	mflr r0
/* 8033BB5C 00338A9C  3C A0 80 4E */	lis r5, __vt__Q29PSAutoBgm9CycleBase@ha
/* 8033BB60 00338AA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033BB64 00338AA4  38 00 00 00 */	li r0, 0
/* 8033BB68 00338AA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033BB6C 00338AAC  93 C1 00 08 */	stw r30, 8(r1)
/* 8033BB70 00338AB0  7C 7E 1B 78 */	mr r30, r3
/* 8033BB74 00338AB4  38 65 AB F0 */	addi r3, r5, __vt__Q29PSAutoBgm9CycleBase@l
/* 8033BB78 00338AB8  90 7E 00 00 */	stw r3, 0(r30)
/* 8033BB7C 00338ABC  3B FE 00 0C */	addi r31, r30, 0xc
/* 8033BB80 00338AC0  7F E3 FB 78 */	mr r3, r31
/* 8033BB84 00338AC4  90 9E 00 04 */	stw r4, 4(r30)
/* 8033BB88 00338AC8  98 1E 00 08 */	stb r0, 8(r30)
/* 8033BB8C 00338ACC  4B CE 14 41 */	bl __ct__11JKRDisposerFv
/* 8033BB90 00338AD0  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 8033BB94 00338AD4  38 00 00 00 */	li r0, 0
/* 8033BB98 00338AD8  38 63 67 74 */	addi r3, r3, __vt__Q210JADUtility7PrmBase@l
/* 8033BB9C 00338ADC  7F E4 FB 78 */	mr r4, r31
/* 8033BBA0 00338AE0  90 7F 00 00 */	stw r3, 0(r31)
/* 8033BBA4 00338AE4  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8033BBA8 00338AE8  98 1F 00 18 */	stb r0, 0x18(r31)
/* 8033BBAC 00338AEC  4B CE AC 0D */	bl __ct__10JSUPtrLinkFPv
/* 8033BBB0 00338AF0  3C 80 80 4E */	lis r4, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 8033BBB4 00338AF4  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 8033BBB8 00338AF8  38 04 AD 54 */	addi r0, r4, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 8033BBBC 00338AFC  3C 80 80 4E */	lis r4, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
/* 8033BBC0 00338B00  90 1F 00 00 */	stw r0, 0(r31)
/* 8033BBC4 00338B04  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 8033BBC8 00338B08  3C 60 80 4E */	lis r3, __vt__Q29PSAutoBgm8OffCycle@ha
/* 8033BBCC 00338B0C  38 A4 AD 2C */	addi r5, r4, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
/* 8033BBD0 00338B10  90 1F 00 00 */	stw r0, 0(r31)
/* 8033BBD4 00338B14  38 80 00 00 */	li r4, 0
/* 8033BBD8 00338B18  38 03 AB C8 */	addi r0, r3, __vt__Q29PSAutoBgm8OffCycle@l
/* 8033BBDC 00338B1C  7F C3 F3 78 */	mr r3, r30
/* 8033BBE0 00338B20  90 BF 00 00 */	stw r5, 0(r31)
/* 8033BBE4 00338B24  98 9E 00 3C */	stb r4, 0x3c(r30)
/* 8033BBE8 00338B28  90 1E 00 00 */	stw r0, 0(r30)
/* 8033BBEC 00338B2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033BBF0 00338B30  83 C1 00 08 */	lwz r30, 8(r1)
/* 8033BBF4 00338B34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033BBF8 00338B38  7C 08 03 A6 */	mtlr r0
/* 8033BBFC 00338B3C  38 21 00 10 */	addi r1, r1, 0x10
/* 8033BC00 00338B40  4E 80 00 20 */	blr 
.endfn __ct__Q29PSAutoBgm8OffCycleFPQ29PSAutoBgm6Module

.fn __ct__Q29PSAutoBgm7AutoBgmFPCcPCcRCQ27JAInter9SoundInfoQ210JADUtility10AccessModePQ28PSSystem15DirectorMgrBase, global
/* 8033BC04 00338B44  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8033BC08 00338B48  7C 08 02 A6 */	mflr r0
/* 8033BC0C 00338B4C  3C E0 80 49 */	lis r7, lbl_8048FE60@ha
/* 8033BC10 00338B50  90 01 00 24 */	stw r0, 0x24(r1)
/* 8033BC14 00338B54  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8033BC18 00338B58  7C 9E 23 78 */	mr r30, r4
/* 8033BC1C 00338B5C  7C A4 2B 78 */	mr r4, r5
/* 8033BC20 00338B60  7C C5 33 78 */	mr r5, r6
/* 8033BC24 00338B64  7C 7D 1B 78 */	mr r29, r3
/* 8033BC28 00338B68  7D 06 43 78 */	mr r6, r8
/* 8033BC2C 00338B6C  3B E7 FE 60 */	addi r31, r7, lbl_8048FE60@l
/* 8033BC30 00338B70  4B FF 6C 81 */	bl __ct__Q28PSSystem11DirectedBgmFPCcRCQ27JAInter9SoundInfoPQ28PSSystem15DirectorMgrBase
/* 8033BC34 00338B74  3C 60 80 4E */	lis r3, __vt__Q29PSAutoBgm7AutoBgm@ha
/* 8033BC38 00338B78  3B 9D 00 B8 */	addi r28, r29, 0xb8
/* 8033BC3C 00338B7C  38 03 AA D8 */	addi r0, r3, __vt__Q29PSAutoBgm7AutoBgm@l
/* 8033BC40 00338B80  90 1D 00 10 */	stw r0, 0x10(r29)
/* 8033BC44 00338B84  38 7C 02 58 */	addi r3, r28, 0x258
/* 8033BC48 00338B88  90 7D 00 B8 */	stw r3, 0xb8(r29)
/* 8033BC4C 00338B8C  4B D7 EB AD */	bl __ct__Q210JADUtility11DataMgrBaseFv
/* 8033BC50 00338B90  7F 83 E3 78 */	mr r3, r28
/* 8033BC54 00338B94  38 80 00 00 */	li r4, 0
/* 8033BC58 00338B98  4B D7 EE 31 */	bl __ct__Q210JADUtility11DataMgrNodeFv
/* 8033BC5C 00338B9C  3C 80 80 4E */	lis r4, "__vt__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>"@ha
/* 8033BC60 00338BA0  3C 60 80 4E */	lis r3, __vt__Q29PSAutoBgm12ConductorMgr@ha
/* 8033BC64 00338BA4  38 84 AB 8C */	addi r4, r4, "__vt__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>"@l
/* 8033BC68 00338BA8  3B 7D 03 3C */	addi r27, r29, 0x33c
/* 8033BC6C 00338BAC  90 9C 00 04 */	stw r4, 4(r28)
/* 8033BC70 00338BB0  38 A3 AB 4C */	addi r5, r3, __vt__Q29PSAutoBgm12ConductorMgr@l
/* 8033BC74 00338BB4  38 E4 00 2C */	addi r7, r4, 0x2c
/* 8033BC78 00338BB8  39 1C 02 58 */	addi r8, r28, 0x258
/* 8033BC7C 00338BBC  80 9C 00 00 */	lwz r4, 0(r28)
/* 8033BC80 00338BC0  38 C0 00 00 */	li r6, 0
/* 8033BC84 00338BC4  38 05 00 30 */	addi r0, r5, 0x30
/* 8033BC88 00338BC8  7F 63 DB 78 */	mr r3, r27
/* 8033BC8C 00338BCC  90 E4 00 00 */	stw r7, 0(r4)
/* 8033BC90 00338BD0  38 80 00 00 */	li r4, 0
/* 8033BC94 00338BD4  81 3C 00 00 */	lwz r9, 0(r28)
/* 8033BC98 00338BD8  7C E9 40 50 */	subf r7, r9, r8
/* 8033BC9C 00338BDC  90 E9 00 1C */	stw r7, 0x1c(r9)
/* 8033BCA0 00338BE0  90 DC 02 50 */	stw r6, 0x250(r28)
/* 8033BCA4 00338BE4  93 BC 02 54 */	stw r29, 0x254(r28)
/* 8033BCA8 00338BE8  90 BC 00 04 */	stw r5, 4(r28)
/* 8033BCAC 00338BEC  80 BC 00 00 */	lwz r5, 0(r28)
/* 8033BCB0 00338BF0  90 05 00 00 */	stw r0, 0(r5)
/* 8033BCB4 00338BF4  80 BC 00 00 */	lwz r5, 0(r28)
/* 8033BCB8 00338BF8  7C 05 40 50 */	subf r0, r5, r8
/* 8033BCBC 00338BFC  90 05 00 1C */	stw r0, 0x1c(r5)
/* 8033BCC0 00338C00  90 DD 03 38 */	stw r6, 0x338(r29)
/* 8033BCC4 00338C04  4B D7 E5 29 */	bl __ct__10JADHioNodeFPCc
/* 8033BCC8 00338C08  3C 80 80 4E */	lis r4, __vt__Q29PSAutoBgm10MeloArrMgr@ha
/* 8033BCCC 00338C0C  38 7B 00 04 */	addi r3, r27, 4
/* 8033BCD0 00338C10  38 04 AB 40 */	addi r0, r4, __vt__Q29PSAutoBgm10MeloArrMgr@l
/* 8033BCD4 00338C14  90 1B 00 00 */	stw r0, 0(r27)
/* 8033BCD8 00338C18  4B CE AB F9 */	bl initiate__10JSUPtrListFv
/* 8033BCDC 00338C1C  38 00 00 00 */	li r0, 0
/* 8033BCE0 00338C20  7F C3 F3 78 */	mr r3, r30
/* 8033BCE4 00338C24  B0 1B 00 10 */	sth r0, 0x10(r27)
/* 8033BCE8 00338C28  98 1B 00 12 */	stb r0, 0x12(r27)
/* 8033BCEC 00338C2C  4B D8 EC 25 */	bl strlen
/* 8033BCF0 00338C30  38 63 00 01 */	addi r3, r3, 1
/* 8033BCF4 00338C34  4B CE 82 B9 */	bl __nwa__FUl
/* 8033BCF8 00338C38  90 7D 03 30 */	stw r3, 0x330(r29)
/* 8033BCFC 00338C3C  7F C4 F3 78 */	mr r4, r30
/* 8033BD00 00338C40  80 7D 03 30 */	lwz r3, 0x330(r29)
/* 8033BD04 00338C44  4B D8 EB 55 */	bl strcpy
/* 8033BD08 00338C48  80 0D 98 6C */	lwz r0, sInstance__Q29PSAutoBgm15ConductorArcMgr@sda21(r13)
/* 8033BD0C 00338C4C  28 00 00 00 */	cmplwi r0, 0
/* 8033BD10 00338C50  40 82 00 18 */	bne .L_8033BD28
/* 8033BD14 00338C54  38 7F 00 74 */	addi r3, r31, 0x74
/* 8033BD18 00338C58  38 BF 00 10 */	addi r5, r31, 0x10
/* 8033BD1C 00338C5C  38 80 02 DE */	li r4, 0x2de
/* 8033BD20 00338C60  4C C6 31 82 */	crclr 6
/* 8033BD24 00338C64  4B CE E9 1D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8033BD28:
/* 8033BD28 00338C68  80 0D 98 6C */	lwz r0, sInstance__Q29PSAutoBgm15ConductorArcMgr@sda21(r13)
/* 8033BD2C 00338C6C  28 00 00 00 */	cmplwi r0, 0
/* 8033BD30 00338C70  40 82 00 18 */	bne .L_8033BD48
/* 8033BD34 00338C74  38 7F 00 00 */	addi r3, r31, 0
/* 8033BD38 00338C78  38 BF 00 10 */	addi r5, r31, 0x10
/* 8033BD3C 00338C7C  38 80 04 77 */	li r4, 0x477
/* 8033BD40 00338C80  4C C6 31 82 */	crclr 6
/* 8033BD44 00338C84  4B CE E8 FD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8033BD48:
/* 8033BD48 00338C88  7F A3 EB 78 */	mr r3, r29
/* 8033BD4C 00338C8C  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8033BD50 00338C90  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8033BD54 00338C94  7C 08 03 A6 */	mtlr r0
/* 8033BD58 00338C98  38 21 00 20 */	addi r1, r1, 0x20
/* 8033BD5C 00338C9C  4E 80 00 20 */	blr 
.endfn __ct__Q29PSAutoBgm7AutoBgmFPCcPCcRCQ27JAInter9SoundInfoQ210JADUtility10AccessModePQ28PSSystem15DirectorMgrBase

.fn __dt__Q29PSAutoBgm10MeloArrMgrFv, weak
/* 8033BD60 00338CA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033BD64 00338CA4  7C 08 02 A6 */	mflr r0
/* 8033BD68 00338CA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033BD6C 00338CAC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033BD70 00338CB0  7C 9F 23 78 */	mr r31, r4
/* 8033BD74 00338CB4  93 C1 00 08 */	stw r30, 8(r1)
/* 8033BD78 00338CB8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8033BD7C 00338CBC  41 82 00 40 */	beq .L_8033BDBC
/* 8033BD80 00338CC0  3C 60 80 4E */	lis r3, __vt__Q29PSAutoBgm10MeloArrMgr@ha
/* 8033BD84 00338CC4  34 1E 00 04 */	addic. r0, r30, 4
/* 8033BD88 00338CC8  38 03 AB 40 */	addi r0, r3, __vt__Q29PSAutoBgm10MeloArrMgr@l
/* 8033BD8C 00338CCC  90 1E 00 00 */	stw r0, 0(r30)
/* 8033BD90 00338CD0  41 82 00 10 */	beq .L_8033BDA0
/* 8033BD94 00338CD4  38 7E 00 04 */	addi r3, r30, 4
/* 8033BD98 00338CD8  38 80 00 00 */	li r4, 0
/* 8033BD9C 00338CDC  4B CE AA CD */	bl __dt__10JSUPtrListFv
.L_8033BDA0:
/* 8033BDA0 00338CE0  7F C3 F3 78 */	mr r3, r30
/* 8033BDA4 00338CE4  38 80 00 00 */	li r4, 0
/* 8033BDA8 00338CE8  4B D7 E4 55 */	bl __dt__10JADHioNodeFv
/* 8033BDAC 00338CEC  7F E0 07 35 */	extsh. r0, r31
/* 8033BDB0 00338CF0  40 81 00 0C */	ble .L_8033BDBC
/* 8033BDB4 00338CF4  7F C3 F3 78 */	mr r3, r30
/* 8033BDB8 00338CF8  4B CE 82 FD */	bl __dl__FPv
.L_8033BDBC:
/* 8033BDBC 00338CFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033BDC0 00338D00  7F C3 F3 78 */	mr r3, r30
/* 8033BDC4 00338D04  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033BDC8 00338D08  83 C1 00 08 */	lwz r30, 8(r1)
/* 8033BDCC 00338D0C  7C 08 03 A6 */	mtlr r0
/* 8033BDD0 00338D10  38 21 00 10 */	addi r1, r1, 0x10
/* 8033BDD4 00338D14  4E 80 00 20 */	blr 
.endfn __dt__Q29PSAutoBgm10MeloArrMgrFv

.fn __dt__Q29PSAutoBgm12ConductorMgrFv, weak
/* 8033BDD8 00338D18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033BDDC 00338D1C  7C 08 02 A6 */	mflr r0
/* 8033BDE0 00338D20  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033BDE4 00338D24  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033BDE8 00338D28  7C 9F 23 78 */	mr r31, r4
/* 8033BDEC 00338D2C  93 C1 00 08 */	stw r30, 8(r1)
/* 8033BDF0 00338D30  7C 7E 1B 79 */	or. r30, r3, r3
/* 8033BDF4 00338D34  41 82 01 1C */	beq .L_8033BF10
/* 8033BDF8 00338D38  3C 60 80 4E */	lis r3, __vt__Q29PSAutoBgm12ConductorMgr@ha
/* 8033BDFC 00338D3C  38 9E 02 58 */	addi r4, r30, 0x258
/* 8033BE00 00338D40  38 63 AB 4C */	addi r3, r3, __vt__Q29PSAutoBgm12ConductorMgr@l
/* 8033BE04 00338D44  90 7E 00 04 */	stw r3, 4(r30)
/* 8033BE08 00338D48  38 03 00 30 */	addi r0, r3, 0x30
/* 8033BE0C 00338D4C  80 7E 00 00 */	lwz r3, 0(r30)
/* 8033BE10 00338D50  90 03 00 00 */	stw r0, 0(r3)
/* 8033BE14 00338D54  80 7E 00 00 */	lwz r3, 0(r30)
/* 8033BE18 00338D58  7C 03 20 50 */	subf r0, r3, r4
/* 8033BE1C 00338D5C  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8033BE20 00338D60  41 82 00 CC */	beq .L_8033BEEC
/* 8033BE24 00338D64  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>"@ha
/* 8033BE28 00338D68  38 63 AB 8C */	addi r3, r3, "__vt__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>"@l
/* 8033BE2C 00338D6C  90 7E 00 04 */	stw r3, 4(r30)
/* 8033BE30 00338D70  38 03 00 2C */	addi r0, r3, 0x2c
/* 8033BE34 00338D74  80 7E 00 00 */	lwz r3, 0(r30)
/* 8033BE38 00338D78  90 03 00 00 */	stw r0, 0(r3)
/* 8033BE3C 00338D7C  80 7E 00 00 */	lwz r3, 0(r30)
/* 8033BE40 00338D80  7C 03 20 50 */	subf r0, r3, r4
/* 8033BE44 00338D84  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8033BE48 00338D88  41 82 00 A4 */	beq .L_8033BEEC
/* 8033BE4C 00338D8C  3C 80 80 4A */	lis r4, __vt__Q210JADUtility11DataMgrNode@ha
/* 8033BE50 00338D90  38 7E 02 50 */	addi r3, r30, 0x250
/* 8033BE54 00338D94  38 84 67 88 */	addi r4, r4, __vt__Q210JADUtility11DataMgrNode@l
/* 8033BE58 00338D98  34 1E 02 14 */	addic. r0, r30, 0x214
/* 8033BE5C 00338D9C  90 9E 00 04 */	stw r4, 4(r30)
/* 8033BE60 00338DA0  38 04 00 2C */	addi r0, r4, 0x2c
/* 8033BE64 00338DA4  80 9E 00 00 */	lwz r4, 0(r30)
/* 8033BE68 00338DA8  90 04 00 00 */	stw r0, 0(r4)
/* 8033BE6C 00338DAC  80 9E 00 00 */	lwz r4, 0(r30)
/* 8033BE70 00338DB0  7C 04 18 50 */	subf r0, r4, r3
/* 8033BE74 00338DB4  90 04 00 1C */	stw r0, 0x1c(r4)
/* 8033BE78 00338DB8  41 82 00 68 */	beq .L_8033BEE0
/* 8033BE7C 00338DBC  3C 60 80 4A */	lis r3, __vt__Q210JADUtility6StrPrm@ha
/* 8033BE80 00338DC0  34 1E 02 14 */	addic. r0, r30, 0x214
/* 8033BE84 00338DC4  38 03 67 38 */	addi r0, r3, __vt__Q210JADUtility6StrPrm@l
/* 8033BE88 00338DC8  90 1E 02 14 */	stw r0, 0x214(r30)
/* 8033BE8C 00338DCC  41 82 00 54 */	beq .L_8033BEE0
/* 8033BE90 00338DD0  3C 60 80 4A */	lis r3, "__vt__Q210JADUtility10PrmHio<Pc>"@ha
/* 8033BE94 00338DD4  34 1E 02 14 */	addic. r0, r30, 0x214
/* 8033BE98 00338DD8  38 03 67 4C */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Pc>"@l
/* 8033BE9C 00338DDC  90 1E 02 14 */	stw r0, 0x214(r30)
/* 8033BEA0 00338DE0  41 82 00 40 */	beq .L_8033BEE0
/* 8033BEA4 00338DE4  3C 60 80 4A */	lis r3, "__vt__Q210JADUtility7Prm<Pc>"@ha
/* 8033BEA8 00338DE8  34 1E 02 14 */	addic. r0, r30, 0x214
/* 8033BEAC 00338DEC  38 03 67 60 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Pc>"@l
/* 8033BEB0 00338DF0  90 1E 02 14 */	stw r0, 0x214(r30)
/* 8033BEB4 00338DF4  41 82 00 2C */	beq .L_8033BEE0
/* 8033BEB8 00338DF8  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 8033BEBC 00338DFC  34 7E 02 30 */	addic. r3, r30, 0x230
/* 8033BEC0 00338E00  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 8033BEC4 00338E04  90 1E 02 14 */	stw r0, 0x214(r30)
/* 8033BEC8 00338E08  41 82 00 0C */	beq .L_8033BED4
/* 8033BECC 00338E0C  38 80 00 00 */	li r4, 0
/* 8033BED0 00338E10  4B CE A9 01 */	bl __dt__10JSUPtrLinkFv
.L_8033BED4:
/* 8033BED4 00338E14  38 7E 02 14 */	addi r3, r30, 0x214
/* 8033BED8 00338E18  38 80 00 00 */	li r4, 0
/* 8033BEDC 00338E1C  4B CE 11 59 */	bl __dt__11JKRDisposerFv
.L_8033BEE0:
/* 8033BEE0 00338E20  7F C3 F3 78 */	mr r3, r30
/* 8033BEE4 00338E24  38 80 00 00 */	li r4, 0
/* 8033BEE8 00338E28  4B D7 E9 CD */	bl __dt__Q210JADUtility15DataLoadMgrNodeFv
.L_8033BEEC:
/* 8033BEEC 00338E2C  7F E0 07 35 */	extsh. r0, r31
/* 8033BEF0 00338E30  41 82 00 10 */	beq .L_8033BF00
/* 8033BEF4 00338E34  38 7E 02 58 */	addi r3, r30, 0x258
/* 8033BEF8 00338E38  38 80 00 00 */	li r4, 0
/* 8033BEFC 00338E3C  4B D7 E9 41 */	bl __dt__Q210JADUtility11DataMgrBaseFv
.L_8033BF00:
/* 8033BF00 00338E40  7F E0 07 35 */	extsh. r0, r31
/* 8033BF04 00338E44  40 81 00 0C */	ble .L_8033BF10
/* 8033BF08 00338E48  7F C3 F3 78 */	mr r3, r30
/* 8033BF0C 00338E4C  4B CE 81 A9 */	bl __dl__FPv
.L_8033BF10:
/* 8033BF10 00338E50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033BF14 00338E54  7F C3 F3 78 */	mr r3, r30
/* 8033BF18 00338E58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033BF1C 00338E5C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8033BF20 00338E60  7C 08 03 A6 */	mtlr r0
/* 8033BF24 00338E64  38 21 00 10 */	addi r1, r1, 0x10
/* 8033BF28 00338E68  4E 80 00 20 */	blr 
.endfn __dt__Q29PSAutoBgm12ConductorMgrFv

.fn "__dt__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>Fv", weak
/* 8033BF2C 00338E6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033BF30 00338E70  7C 08 02 A6 */	mflr r0
/* 8033BF34 00338E74  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033BF38 00338E78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033BF3C 00338E7C  7C 9F 23 78 */	mr r31, r4
/* 8033BF40 00338E80  93 C1 00 08 */	stw r30, 8(r1)
/* 8033BF44 00338E84  7C 7E 1B 79 */	or. r30, r3, r3
/* 8033BF48 00338E88  41 82 00 F4 */	beq .L_8033C03C
/* 8033BF4C 00338E8C  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>"@ha
/* 8033BF50 00338E90  38 1E 02 58 */	addi r0, r30, 0x258
/* 8033BF54 00338E94  38 63 AB 8C */	addi r3, r3, "__vt__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>"@l
/* 8033BF58 00338E98  90 7E 00 04 */	stw r3, 4(r30)
/* 8033BF5C 00338E9C  38 83 00 2C */	addi r4, r3, 0x2c
/* 8033BF60 00338EA0  80 7E 00 00 */	lwz r3, 0(r30)
/* 8033BF64 00338EA4  90 83 00 00 */	stw r4, 0(r3)
/* 8033BF68 00338EA8  80 7E 00 00 */	lwz r3, 0(r30)
/* 8033BF6C 00338EAC  7C 03 00 50 */	subf r0, r3, r0
/* 8033BF70 00338EB0  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8033BF74 00338EB4  41 82 00 A4 */	beq .L_8033C018
/* 8033BF78 00338EB8  3C 80 80 4A */	lis r4, __vt__Q210JADUtility11DataMgrNode@ha
/* 8033BF7C 00338EBC  38 7E 02 50 */	addi r3, r30, 0x250
/* 8033BF80 00338EC0  38 84 67 88 */	addi r4, r4, __vt__Q210JADUtility11DataMgrNode@l
/* 8033BF84 00338EC4  34 1E 02 14 */	addic. r0, r30, 0x214
/* 8033BF88 00338EC8  90 9E 00 04 */	stw r4, 4(r30)
/* 8033BF8C 00338ECC  38 04 00 2C */	addi r0, r4, 0x2c
/* 8033BF90 00338ED0  80 9E 00 00 */	lwz r4, 0(r30)
/* 8033BF94 00338ED4  90 04 00 00 */	stw r0, 0(r4)
/* 8033BF98 00338ED8  80 9E 00 00 */	lwz r4, 0(r30)
/* 8033BF9C 00338EDC  7C 04 18 50 */	subf r0, r4, r3
/* 8033BFA0 00338EE0  90 04 00 1C */	stw r0, 0x1c(r4)
/* 8033BFA4 00338EE4  41 82 00 68 */	beq .L_8033C00C
/* 8033BFA8 00338EE8  3C 60 80 4A */	lis r3, __vt__Q210JADUtility6StrPrm@ha
/* 8033BFAC 00338EEC  34 1E 02 14 */	addic. r0, r30, 0x214
/* 8033BFB0 00338EF0  38 03 67 38 */	addi r0, r3, __vt__Q210JADUtility6StrPrm@l
/* 8033BFB4 00338EF4  90 1E 02 14 */	stw r0, 0x214(r30)
/* 8033BFB8 00338EF8  41 82 00 54 */	beq .L_8033C00C
/* 8033BFBC 00338EFC  3C 60 80 4A */	lis r3, "__vt__Q210JADUtility10PrmHio<Pc>"@ha
/* 8033BFC0 00338F00  34 1E 02 14 */	addic. r0, r30, 0x214
/* 8033BFC4 00338F04  38 03 67 4C */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Pc>"@l
/* 8033BFC8 00338F08  90 1E 02 14 */	stw r0, 0x214(r30)
/* 8033BFCC 00338F0C  41 82 00 40 */	beq .L_8033C00C
/* 8033BFD0 00338F10  3C 60 80 4A */	lis r3, "__vt__Q210JADUtility7Prm<Pc>"@ha
/* 8033BFD4 00338F14  34 1E 02 14 */	addic. r0, r30, 0x214
/* 8033BFD8 00338F18  38 03 67 60 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Pc>"@l
/* 8033BFDC 00338F1C  90 1E 02 14 */	stw r0, 0x214(r30)
/* 8033BFE0 00338F20  41 82 00 2C */	beq .L_8033C00C
/* 8033BFE4 00338F24  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 8033BFE8 00338F28  34 7E 02 30 */	addic. r3, r30, 0x230
/* 8033BFEC 00338F2C  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 8033BFF0 00338F30  90 1E 02 14 */	stw r0, 0x214(r30)
/* 8033BFF4 00338F34  41 82 00 0C */	beq .L_8033C000
/* 8033BFF8 00338F38  38 80 00 00 */	li r4, 0
/* 8033BFFC 00338F3C  4B CE A7 D5 */	bl __dt__10JSUPtrLinkFv
.L_8033C000:
/* 8033C000 00338F40  38 7E 02 14 */	addi r3, r30, 0x214
/* 8033C004 00338F44  38 80 00 00 */	li r4, 0
/* 8033C008 00338F48  4B CE 10 2D */	bl __dt__11JKRDisposerFv
.L_8033C00C:
/* 8033C00C 00338F4C  7F C3 F3 78 */	mr r3, r30
/* 8033C010 00338F50  38 80 00 00 */	li r4, 0
/* 8033C014 00338F54  4B D7 E8 A1 */	bl __dt__Q210JADUtility15DataLoadMgrNodeFv
.L_8033C018:
/* 8033C018 00338F58  7F E0 07 35 */	extsh. r0, r31
/* 8033C01C 00338F5C  41 82 00 10 */	beq .L_8033C02C
/* 8033C020 00338F60  38 7E 02 58 */	addi r3, r30, 0x258
/* 8033C024 00338F64  38 80 00 00 */	li r4, 0
/* 8033C028 00338F68  4B D7 E8 15 */	bl __dt__Q210JADUtility11DataMgrBaseFv
.L_8033C02C:
/* 8033C02C 00338F6C  7F E0 07 35 */	extsh. r0, r31
/* 8033C030 00338F70  40 81 00 0C */	ble .L_8033C03C
/* 8033C034 00338F74  7F C3 F3 78 */	mr r3, r30
/* 8033C038 00338F78  4B CE 80 7D */	bl __dl__FPv
.L_8033C03C:
/* 8033C03C 00338F7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033C040 00338F80  7F C3 F3 78 */	mr r3, r30
/* 8033C044 00338F84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033C048 00338F88  83 C1 00 08 */	lwz r30, 8(r1)
/* 8033C04C 00338F8C  7C 08 03 A6 */	mtlr r0
/* 8033C050 00338F90  38 21 00 10 */	addi r1, r1, 0x10
/* 8033C054 00338F94  4E 80 00 20 */	blr 
.endfn "__dt__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>Fv"

.fn startSeq__Q29PSAutoBgm7AutoBgmFv, global
/* 8033C058 00338F98  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8033C05C 00338F9C  7C 08 02 A6 */	mflr r0
/* 8033C060 00338FA0  90 01 00 54 */	stw r0, 0x54(r1)
/* 8033C064 00338FA4  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8033C068 00338FA8  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8033C06C 00338FAC  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 8033C070 00338FB0  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 8033C074 00338FB4  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 8033C078 00338FB8  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 8033C07C 00338FBC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8033C080 00338FC0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8033C084 00338FC4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8033C088 00338FC8  93 81 00 10 */	stw r28, 0x10(r1)
/* 8033C08C 00338FCC  7C 7C 1B 78 */	mr r28, r3
/* 8033C090 00338FD0  4B FF 6E 4D */	bl startSeq__Q28PSSystem11DirectedBgmFv
/* 8033C094 00338FD4  7F 83 E3 78 */	mr r3, r28
/* 8033C098 00338FD8  81 9C 00 10 */	lwz r12, 0x10(r28)
/* 8033C09C 00338FDC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8033C0A0 00338FE0  7D 89 03 A6 */	mtctr r12
/* 8033C0A4 00338FE4  4E 80 04 21 */	bctrl 
/* 8033C0A8 00338FE8  80 03 00 00 */	lwz r0, 0(r3)
/* 8033C0AC 00338FEC  28 00 00 00 */	cmplwi r0, 0
/* 8033C0B0 00338FF0  41 82 00 C0 */	beq .L_8033C170
/* 8033C0B4 00338FF4  7F 83 E3 78 */	mr r3, r28
/* 8033C0B8 00338FF8  81 9C 00 10 */	lwz r12, 0x10(r28)
/* 8033C0BC 00338FFC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8033C0C0 00339000  7D 89 03 A6 */	mtctr r12
/* 8033C0C4 00339004  4E 80 04 21 */	bctrl 
/* 8033C0C8 00339008  83 A3 00 00 */	lwz r29, 0(r3)
/* 8033C0CC 0033900C  3B C0 00 00 */	li r30, 0
/* 8033C0D0 00339010  83 9C 03 08 */	lwz r28, 0x308(r28)
/* 8033C0D4 00339014  3F E0 43 30 */	lis r31, 0x4330
/* 8033C0D8 00339018  CB A2 FE 10 */	lfd f29, lbl_8051E170@sda21(r2)
/* 8033C0DC 0033901C  C3 C2 FE 04 */	lfs f30, lbl_8051E164@sda21(r2)
/* 8033C0E0 00339020  C3 E2 FE 08 */	lfs f31, lbl_8051E168@sda21(r2)
/* 8033C0E4 00339024  48 00 00 74 */	b .L_8033C158
.L_8033C0E8:
/* 8033C0E8 00339028  7F 83 E3 78 */	mr r3, r28
/* 8033C0EC 0033902C  7F C4 F3 78 */	mr r4, r30
/* 8033C0F0 00339030  48 00 0E 0D */	bl "getChild__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>FUc"
/* 8033C0F4 00339034  9B C3 00 98 */	stb r30, 0x98(r3)
/* 8033C0F8 00339038  7F 83 E3 78 */	mr r3, r28
/* 8033C0FC 0033903C  7F C4 F3 78 */	mr r4, r30
/* 8033C100 00339040  48 00 0D FD */	bl "getChild__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>FUc"
/* 8033C104 00339044  7C 64 1B 78 */	mr r4, r3
/* 8033C108 00339048  93 E1 00 08 */	stw r31, 8(r1)
/* 8033C10C 0033904C  88 03 01 98 */	lbz r0, 0x198(r3)
/* 8033C110 00339050  7F A3 EB 78 */	mr r3, r29
/* 8033C114 00339054  88 84 00 98 */	lbz r4, 0x98(r4)
/* 8033C118 00339058  90 01 00 0C */	stw r0, 0xc(r1)
/* 8033C11C 0033905C  C8 01 00 08 */	lfd f0, 8(r1)
/* 8033C120 00339060  EC 00 E8 28 */	fsubs f0, f0, f29
/* 8033C124 00339064  EC 00 F0 24 */	fdivs f0, f0, f30
/* 8033C128 00339068  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8033C12C 0033906C  40 80 00 0C */	bge .L_8033C138
/* 8033C130 00339070  FC 20 F8 90 */	fmr f1, f31
/* 8033C134 00339074  48 00 00 18 */	b .L_8033C14C
.L_8033C138:
/* 8033C138 00339078  C0 22 FE 0C */	lfs f1, lbl_8051E16C@sda21(r2)
/* 8033C13C 0033907C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8033C140 00339080  40 81 00 08 */	ble .L_8033C148
/* 8033C144 00339084  48 00 00 08 */	b .L_8033C14C
.L_8033C148:
/* 8033C148 00339088  FC 20 00 90 */	fmr f1, f0
.L_8033C14C:
/* 8033C14C 0033908C  38 A0 00 00 */	li r5, 0
/* 8033C150 00339090  4B D7 83 8D */	bl setTrackFxmix__11JAISequenceFUcfUl
/* 8033C154 00339094  3B DE 00 01 */	addi r30, r30, 1
.L_8033C158:
/* 8033C158 00339098  7F 83 E3 78 */	mr r3, r28
/* 8033C15C 0033909C  48 00 09 B9 */	bl "getChildNum__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>Fv"
/* 8033C160 003390A0  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8033C164 003390A4  57 C0 06 3E */	clrlwi r0, r30, 0x18
/* 8033C168 003390A8  7C 00 18 40 */	cmplw r0, r3
/* 8033C16C 003390AC  41 80 FF 7C */	blt .L_8033C0E8
.L_8033C170:
/* 8033C170 003390B0  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8033C174 003390B4  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8033C178 003390B8  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 8033C17C 003390BC  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 8033C180 003390C0  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 8033C184 003390C4  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 8033C188 003390C8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8033C18C 003390CC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8033C190 003390D0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8033C194 003390D4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8033C198 003390D8  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8033C19C 003390DC  7C 08 03 A6 */	mtlr r0
/* 8033C1A0 003390E0  38 21 00 50 */	addi r1, r1, 0x50
/* 8033C1A4 003390E4  4E 80 00 20 */	blr 
.endfn startSeq__Q29PSAutoBgm7AutoBgmFv

.fn scene1st__Q29PSAutoBgm7AutoBgmFPQ28PSSystem11TaskChecker, global
/* 8033C1A8 003390E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033C1AC 003390EC  7C 08 02 A6 */	mflr r0
/* 8033C1B0 003390F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033C1B4 003390F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033C1B8 003390F8  7C 9F 23 78 */	mr r31, r4
/* 8033C1BC 003390FC  93 C1 00 08 */	stw r30, 8(r1)
/* 8033C1C0 00339100  7C 7E 1B 78 */	mr r30, r3
/* 8033C1C4 00339104  4B FF 5D E9 */	bl scene1st__Q28PSSystem7SeqBaseFPQ28PSSystem11TaskChecker
/* 8033C1C8 00339108  7F C3 F3 78 */	mr r3, r30
/* 8033C1CC 0033910C  7F E4 FB 78 */	mr r4, r31
/* 8033C1D0 00339110  48 00 00 1D */	bl loadConductor__Q29PSAutoBgm7AutoBgmFPQ28PSSystem11TaskChecker
/* 8033C1D4 00339114  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033C1D8 00339118  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033C1DC 0033911C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8033C1E0 00339120  7C 08 03 A6 */	mtlr r0
/* 8033C1E4 00339124  38 21 00 10 */	addi r1, r1, 0x10
/* 8033C1E8 00339128  4E 80 00 20 */	blr 
.endfn scene1st__Q29PSAutoBgm7AutoBgmFPQ28PSSystem11TaskChecker

.fn loadConductor__Q29PSAutoBgm7AutoBgmFPQ28PSSystem11TaskChecker, global
/* 8033C1EC 0033912C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8033C1F0 00339130  7C 08 02 A6 */	mflr r0
/* 8033C1F4 00339134  3C A0 80 49 */	lis r5, lbl_8048FE60@ha
/* 8033C1F8 00339138  90 01 00 24 */	stw r0, 0x24(r1)
/* 8033C1FC 0033913C  BF 41 00 08 */	stmw r26, 8(r1)
/* 8033C200 00339140  7C 7A 1B 78 */	mr r26, r3
/* 8033C204 00339144  7C 9F 23 78 */	mr r31, r4
/* 8033C208 00339148  3B A5 FE 60 */	addi r29, r5, lbl_8048FE60@l
/* 8033C20C 0033914C  80 0D 98 6C */	lwz r0, sInstance__Q29PSAutoBgm15ConductorArcMgr@sda21(r13)
/* 8033C210 00339150  28 00 00 00 */	cmplwi r0, 0
/* 8033C214 00339154  40 82 00 18 */	bne .L_8033C22C
/* 8033C218 00339158  38 7D 00 74 */	addi r3, r29, 0x74
/* 8033C21C 0033915C  38 BD 00 10 */	addi r5, r29, 0x10
/* 8033C220 00339160  38 80 02 DE */	li r4, 0x2de
/* 8033C224 00339164  4C C6 31 82 */	crclr 6
/* 8033C228 00339168  4B CE E4 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8033C22C:
/* 8033C22C 0033916C  80 6D 98 6C */	lwz r3, sInstance__Q29PSAutoBgm15ConductorArcMgr@sda21(r13)
/* 8033C230 00339170  83 83 00 04 */	lwz r28, 4(r3)
/* 8033C234 00339174  28 1C 00 00 */	cmplwi r28, 0
/* 8033C238 00339178  40 82 00 18 */	bne .L_8033C250
/* 8033C23C 0033917C  38 7D 00 00 */	addi r3, r29, 0
/* 8033C240 00339180  38 BD 00 10 */	addi r5, r29, 0x10
/* 8033C244 00339184  38 80 04 A8 */	li r4, 0x4a8
/* 8033C248 00339188  4C C6 31 82 */	crclr 6
/* 8033C24C 0033918C  4B CE E3 F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8033C250:
/* 8033C250 00339190  80 9A 03 30 */	lwz r4, 0x330(r26)
/* 8033C254 00339194  7F 83 E3 78 */	mr r3, r28
/* 8033C258 00339198  4B CD EB 85 */	bl findNameResource__10JKRArchiveCFPCc
/* 8033C25C 0033919C  7C 7E 1B 79 */	or. r30, r3, r3
/* 8033C260 003391A0  40 82 00 1C */	bne .L_8033C27C
/* 8033C264 003391A4  80 DA 03 30 */	lwz r6, 0x330(r26)
/* 8033C268 003391A8  38 7D 00 00 */	addi r3, r29, 0
/* 8033C26C 003391AC  38 BD 00 80 */	addi r5, r29, 0x80
/* 8033C270 003391B0  38 80 04 AB */	li r4, 0x4ab
/* 8033C274 003391B4  4C C6 31 82 */	crclr 6
/* 8033C278 003391B8  4B CE E3 C9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8033C27C:
/* 8033C27C 003391BC  80 1A 03 38 */	lwz r0, 0x338(r26)
/* 8033C280 003391C0  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 8033C284 003391C4  28 00 00 00 */	cmplwi r0, 0
/* 8033C288 003391C8  38 03 00 1F */	addi r0, r3, 0x1f
/* 8033C28C 003391CC  54 1B 00 34 */	rlwinm r27, r0, 0, 0, 0x1a
/* 8033C290 003391D0  41 82 00 18 */	beq .L_8033C2A8
/* 8033C294 003391D4  38 7D 00 00 */	addi r3, r29, 0
/* 8033C298 003391D8  38 BD 00 10 */	addi r5, r29, 0x10
/* 8033C29C 003391DC  38 80 04 B5 */	li r4, 0x4b5
/* 8033C2A0 003391E0  4C C6 31 82 */	crclr 6
/* 8033C2A4 003391E4  4B CE E3 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8033C2A8:
/* 8033C2A8 003391E8  7F 63 DB 78 */	mr r3, r27
/* 8033C2AC 003391EC  38 80 FF E0 */	li r4, -32
/* 8033C2B0 003391F0  38 A0 00 00 */	li r5, 0
/* 8033C2B4 003391F4  4B CE 73 2D */	bl alloc__7JKRHeapFUliP7JKRHeap
/* 8033C2B8 003391F8  90 7A 03 38 */	stw r3, 0x338(r26)
/* 8033C2BC 003391FC  80 1A 03 38 */	lwz r0, 0x338(r26)
/* 8033C2C0 00339200  28 00 00 00 */	cmplwi r0, 0
/* 8033C2C4 00339204  40 82 00 18 */	bne .L_8033C2DC
/* 8033C2C8 00339208  38 7D 00 00 */	addi r3, r29, 0
/* 8033C2CC 0033920C  38 BD 00 10 */	addi r5, r29, 0x10
/* 8033C2D0 00339210  38 80 04 B7 */	li r4, 0x4b7
/* 8033C2D4 00339214  4C C6 31 82 */	crclr 6
/* 8033C2D8 00339218  4B CE E3 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8033C2DC:
/* 8033C2DC 0033921C  28 1F 00 00 */	cmplwi r31, 0
/* 8033C2E0 00339220  7F 5D D3 78 */	mr r29, r26
/* 8033C2E4 00339224  41 82 00 20 */	beq .L_8033C304
/* 8033C2E8 00339228  7F E3 FB 78 */	mr r3, r31
/* 8033C2EC 0033922C  4B DB 38 7D */	bl OSLockMutex
/* 8033C2F0 00339230  88 9F 00 18 */	lbz r4, 0x18(r31)
/* 8033C2F4 00339234  7F E3 FB 78 */	mr r3, r31
/* 8033C2F8 00339238  38 04 00 01 */	addi r0, r4, 1
/* 8033C2FC 0033923C  98 1F 00 18 */	stb r0, 0x18(r31)
/* 8033C300 00339240  4B DB 39 45 */	bl OSUnlockMutex
.L_8033C304:
/* 8033C304 00339244  3C 60 80 34 */	lis r3, loadedCallback__Q29PSAutoBgm7AutoBgmFUlUl@ha
/* 8033C308 00339248  A0 9E 00 00 */	lhz r4, 0(r30)
/* 8033C30C 0033924C  38 E3 C3 6C */	addi r7, r3, loadedCallback__Q29PSAutoBgm7AutoBgmFUlUl@l
/* 8033C310 00339250  80 BA 03 38 */	lwz r5, 0x338(r26)
/* 8033C314 00339254  7F 83 E3 78 */	mr r3, r28
/* 8033C318 00339258  7F 66 DB 78 */	mr r6, r27
/* 8033C31C 0033925C  7F A8 EB 78 */	mr r8, r29
/* 8033C320 00339260  4B D6 B4 F1 */	bl loadResourceAsync__15JASResArcLoaderFP10JKRArchiveUsPUcUlPFUlUl_vUl
/* 8033C324 00339264  2C 03 00 01 */	cmpwi r3, 1
/* 8033C328 00339268  40 82 00 0C */	bne .L_8033C334
/* 8033C32C 0033926C  93 FA 03 34 */	stw r31, 0x334(r26)
/* 8033C330 00339270  48 00 00 28 */	b .L_8033C358
.L_8033C334:
/* 8033C334 00339274  28 1F 00 00 */	cmplwi r31, 0
/* 8033C338 00339278  41 82 00 20 */	beq .L_8033C358
/* 8033C33C 0033927C  7F E3 FB 78 */	mr r3, r31
/* 8033C340 00339280  4B DB 38 29 */	bl OSLockMutex
/* 8033C344 00339284  88 9F 00 18 */	lbz r4, 0x18(r31)
/* 8033C348 00339288  7F E3 FB 78 */	mr r3, r31
/* 8033C34C 0033928C  38 04 FF FF */	addi r0, r4, -1
/* 8033C350 00339290  98 1F 00 18 */	stb r0, 0x18(r31)
/* 8033C354 00339294  4B DB 38 F1 */	bl OSUnlockMutex
.L_8033C358:
/* 8033C358 00339298  BB 41 00 08 */	lmw r26, 8(r1)
/* 8033C35C 0033929C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8033C360 003392A0  7C 08 03 A6 */	mtlr r0
/* 8033C364 003392A4  38 21 00 20 */	addi r1, r1, 0x20
/* 8033C368 003392A8  4E 80 00 20 */	blr 
.endfn loadConductor__Q29PSAutoBgm7AutoBgmFPQ28PSSystem11TaskChecker

.fn loadedCallback__Q29PSAutoBgm7AutoBgmFUlUl, global
/* 8033C36C 003392AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033C370 003392B0  7C 08 02 A6 */	mflr r0
/* 8033C374 003392B4  7C 65 1B 78 */	mr r5, r3
/* 8033C378 003392B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033C37C 003392BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033C380 003392C0  7C 9F 23 78 */	mr r31, r4
/* 8033C384 003392C4  38 7F 00 B8 */	addi r3, r31, 0xb8
/* 8033C388 003392C8  80 84 03 38 */	lwz r4, 0x338(r4)
/* 8033C38C 003392CC  4B D7 E5 F9 */	bl initInstanceExt__Q210JADUtility15DataLoadMgrNodeFPvl
/* 8033C390 003392D0  80 7F 03 38 */	lwz r3, 0x338(r31)
/* 8033C394 003392D4  38 80 00 00 */	li r4, 0
/* 8033C398 003392D8  4B CE 72 D5 */	bl free__7JKRHeapFPvP7JKRHeap
/* 8033C39C 003392DC  38 00 00 00 */	li r0, 0
/* 8033C3A0 003392E0  90 1F 03 38 */	stw r0, 0x338(r31)
/* 8033C3A4 003392E4  83 FF 03 34 */	lwz r31, 0x334(r31)
/* 8033C3A8 003392E8  28 1F 00 00 */	cmplwi r31, 0
/* 8033C3AC 003392EC  41 82 00 20 */	beq .L_8033C3CC
/* 8033C3B0 003392F0  7F E3 FB 78 */	mr r3, r31
/* 8033C3B4 003392F4  4B DB 37 B5 */	bl OSLockMutex
/* 8033C3B8 003392F8  88 9F 00 18 */	lbz r4, 0x18(r31)
/* 8033C3BC 003392FC  7F E3 FB 78 */	mr r3, r31
/* 8033C3C0 00339300  38 04 FF FF */	addi r0, r4, -1
/* 8033C3C4 00339304  98 1F 00 18 */	stb r0, 0x18(r31)
/* 8033C3C8 00339308  4B DB 38 7D */	bl OSUnlockMutex
.L_8033C3CC:
/* 8033C3CC 0033930C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033C3D0 00339310  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033C3D4 00339314  7C 08 03 A6 */	mtlr r0
/* 8033C3D8 00339318  38 21 00 10 */	addi r1, r1, 0x10
/* 8033C3DC 0033931C  4E 80 00 20 */	blr 
.endfn loadedCallback__Q29PSAutoBgm7AutoBgmFUlUl

.fn pauseOn__Q29PSAutoBgm7AutoBgmFQ38PSSystem7SeqBase9PauseMode, global
/* 8033C3E0 00339320  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8033C3E4 00339324  7C 08 02 A6 */	mflr r0
/* 8033C3E8 00339328  90 01 00 24 */	stw r0, 0x24(r1)
/* 8033C3EC 0033932C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8033C3F0 00339330  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8033C3F4 00339334  7C 9E 23 78 */	mr r30, r4
/* 8033C3F8 00339338  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8033C3FC 0033933C  7C 7D 1B 78 */	mr r29, r3
/* 8033C400 00339340  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8033C404 00339344  2C 00 00 04 */	cmpwi r0, 4
/* 8033C408 00339348  40 82 01 24 */	bne .L_8033C52C
/* 8033C40C 0033934C  93 DD 00 44 */	stw r30, 0x44(r29)
/* 8033C410 00339350  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8033C414 00339354  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8033C418 00339358  7D 89 03 A6 */	mtctr r12
/* 8033C41C 0033935C  4E 80 04 21 */	bctrl 
/* 8033C420 00339360  28 03 00 00 */	cmplwi r3, 0
/* 8033C424 00339364  40 82 00 20 */	bne .L_8033C444
/* 8033C428 00339368  3C 60 80 49 */	lis r3, lbl_8048FE60@ha
/* 8033C42C 0033936C  3C A0 80 49 */	lis r5, lbl_8048FE70@ha
/* 8033C430 00339370  38 63 FE 60 */	addi r3, r3, lbl_8048FE60@l
/* 8033C434 00339374  38 80 05 1E */	li r4, 0x51e
/* 8033C438 00339378  38 A5 FE 70 */	addi r5, r5, lbl_8048FE70@l
/* 8033C43C 0033937C  4C C6 31 82 */	crclr 6
/* 8033C440 00339380  4B CE E2 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8033C444:
/* 8033C444 00339384  7F A3 EB 78 */	mr r3, r29
/* 8033C448 00339388  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 8033C44C 0033938C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8033C450 00339390  7D 89 03 A6 */	mtctr r12
/* 8033C454 00339394  4E 80 04 21 */	bctrl 
/* 8033C458 00339398  2C 1E 00 02 */	cmpwi r30, 2
/* 8033C45C 0033939C  80 63 00 00 */	lwz r3, 0(r3)
/* 8033C460 003393A0  3B E0 00 00 */	li r31, 0
/* 8033C464 003393A4  41 82 00 4C */	beq .L_8033C4B0
/* 8033C468 003393A8  40 80 00 14 */	bge .L_8033C47C
/* 8033C46C 003393AC  2C 1E 00 00 */	cmpwi r30, 0
/* 8033C470 003393B0  41 82 00 18 */	beq .L_8033C488
/* 8033C474 003393B4  40 80 00 1C */	bge .L_8033C490
/* 8033C478 003393B8  48 00 00 84 */	b .L_8033C4FC
.L_8033C47C:
/* 8033C47C 003393BC  2C 1E 00 04 */	cmpwi r30, 4
/* 8033C480 003393C0  40 80 00 7C */	bge .L_8033C4FC
/* 8033C484 003393C4  48 00 00 4C */	b .L_8033C4D0
.L_8033C488:
/* 8033C488 003393C8  38 00 00 01 */	li r0, 1
/* 8033C48C 003393CC  90 1D 00 44 */	stw r0, 0x44(r29)
.L_8033C490:
/* 8033C490 003393D0  28 03 00 00 */	cmplwi r3, 0
/* 8033C494 003393D4  41 82 00 14 */	beq .L_8033C4A8
/* 8033C498 003393D8  38 80 00 01 */	li r4, 1
/* 8033C49C 003393DC  38 A0 00 00 */	li r5, 0
/* 8033C4A0 003393E0  4B D7 8C B9 */	bl setPauseMode__8JAISoundFUcUc
/* 8033C4A4 003393E4  48 00 00 74 */	b .L_8033C518
.L_8033C4A8:
/* 8033C4A8 003393E8  3B E0 00 01 */	li r31, 1
/* 8033C4AC 003393EC  48 00 00 6C */	b .L_8033C518
.L_8033C4B0:
/* 8033C4B0 003393F0  28 03 00 00 */	cmplwi r3, 0
/* 8033C4B4 003393F4  41 82 00 14 */	beq .L_8033C4C8
/* 8033C4B8 003393F8  88 BD 00 48 */	lbz r5, 0x48(r29)
/* 8033C4BC 003393FC  38 80 00 01 */	li r4, 1
/* 8033C4C0 00339400  4B D7 8C 99 */	bl setPauseMode__8JAISoundFUcUc
/* 8033C4C4 00339404  48 00 00 54 */	b .L_8033C518
.L_8033C4C8:
/* 8033C4C8 00339408  3B E0 00 01 */	li r31, 1
/* 8033C4CC 0033940C  48 00 00 4C */	b .L_8033C518
.L_8033C4D0:
/* 8033C4D0 00339410  28 03 00 00 */	cmplwi r3, 0
/* 8033C4D4 00339414  41 82 00 20 */	beq .L_8033C4F4
/* 8033C4D8 00339418  7F A3 EB 78 */	mr r3, r29
/* 8033C4DC 0033941C  38 80 00 00 */	li r4, 0
/* 8033C4E0 00339420  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 8033C4E4 00339424  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8033C4E8 00339428  7D 89 03 A6 */	mtctr r12
/* 8033C4EC 0033942C  4E 80 04 21 */	bctrl 
/* 8033C4F0 00339430  48 00 00 28 */	b .L_8033C518
.L_8033C4F4:
/* 8033C4F4 00339434  3B E0 00 01 */	li r31, 1
/* 8033C4F8 00339438  48 00 00 20 */	b .L_8033C518
.L_8033C4FC:
/* 8033C4FC 0033943C  3C 60 80 49 */	lis r3, lbl_8048FE60@ha
/* 8033C500 00339440  3C A0 80 49 */	lis r5, lbl_8048FE70@ha
/* 8033C504 00339444  38 63 FE 60 */	addi r3, r3, lbl_8048FE60@l
/* 8033C508 00339448  38 80 05 48 */	li r4, 0x548
/* 8033C50C 0033944C  38 A5 FE 70 */	addi r5, r5, lbl_8048FE70@l
/* 8033C510 00339450  4C C6 31 82 */	crclr 6
/* 8033C514 00339454  4B CE E1 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8033C518:
/* 8033C518 00339458  57 E0 06 3E */	clrlwi r0, r31, 0x18
/* 8033C51C 0033945C  28 00 00 01 */	cmplwi r0, 1
/* 8033C520 00339460  40 82 00 0C */	bne .L_8033C52C
/* 8033C524 00339464  38 00 00 04 */	li r0, 4
/* 8033C528 00339468  90 1D 00 44 */	stw r0, 0x44(r29)
.L_8033C52C:
/* 8033C52C 0033946C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8033C530 00339470  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8033C534 00339474  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8033C538 00339478  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8033C53C 0033947C  7C 08 03 A6 */	mtlr r0
/* 8033C540 00339480  38 21 00 20 */	addi r1, r1, 0x20
/* 8033C544 00339484  4E 80 00 20 */	blr 
.endfn pauseOn__Q29PSAutoBgm7AutoBgmFQ38PSSystem7SeqBase9PauseMode

.fn pauseOff__Q29PSAutoBgm7AutoBgmFv, global
/* 8033C548 00339488  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033C54C 0033948C  7C 08 02 A6 */	mflr r0
/* 8033C550 00339490  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033C554 00339494  4B FF 56 21 */	bl pauseOff__Q28PSSystem7SeqBaseFv
/* 8033C558 00339498  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033C55C 0033949C  7C 08 03 A6 */	mtlr r0
/* 8033C560 003394A0  38 21 00 10 */	addi r1, r1, 0x10
/* 8033C564 003394A4  4E 80 00 20 */	blr 
.endfn pauseOff__Q29PSAutoBgm7AutoBgmFv

.section .text, "ax", unique, 1
.fn "__dt__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>Fv", weak
/* 8033C568 003394A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033C56C 003394AC  7C 08 02 A6 */	mflr r0
/* 8033C570 003394B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033C574 003394B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033C578 003394B8  7C 9F 23 78 */	mr r31, r4
/* 8033C57C 003394BC  93 C1 00 08 */	stw r30, 8(r1)
/* 8033C580 003394C0  7C 7E 1B 79 */	or. r30, r3, r3
/* 8033C584 003394C4  41 82 01 58 */	beq .L_8033C6DC
/* 8033C588 003394C8  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>"@ha
/* 8033C58C 003394CC  38 03 AC F0 */	addi r0, r3, "__vt__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>"@l
/* 8033C590 003394D0  90 1E 00 00 */	stw r0, 0(r30)
/* 8033C594 003394D4  48 00 00 24 */	b .L_8033C5B8
.L_8033C598:
/* 8033C598 003394D8  28 04 00 00 */	cmplwi r4, 0
/* 8033C59C 003394DC  41 82 00 08 */	beq .L_8033C5A4
/* 8033C5A0 003394E0  38 84 FF F4 */	addi r4, r4, -12
.L_8033C5A4:
/* 8033C5A4 003394E4  28 04 00 00 */	cmplwi r4, 0
/* 8033C5A8 003394E8  41 82 00 08 */	beq .L_8033C5B0
/* 8033C5AC 003394EC  38 84 00 0C */	addi r4, r4, 0xc
.L_8033C5B0:
/* 8033C5B0 003394F0  38 7E 00 2C */	addi r3, r30, 0x2c
/* 8033C5B4 003394F4  4B CE A6 71 */	bl remove__10JSUPtrListFP10JSUPtrLink
.L_8033C5B8:
/* 8033C5B8 003394F8  80 9E 00 2C */	lwz r4, 0x2c(r30)
/* 8033C5BC 003394FC  28 04 00 00 */	cmplwi r4, 0
/* 8033C5C0 00339500  7C 80 23 78 */	mr r0, r4
/* 8033C5C4 00339504  41 82 00 08 */	beq .L_8033C5CC
/* 8033C5C8 00339508  38 04 FF F4 */	addi r0, r4, -12
.L_8033C5CC:
/* 8033C5CC 0033950C  28 00 00 00 */	cmplwi r0, 0
/* 8033C5D0 00339510  40 82 FF C8 */	bne .L_8033C598
/* 8033C5D4 00339514  3C 80 80 34 */	lis r4, __dt__Q29PSAutoBgm5TrackFv@ha
/* 8033C5D8 00339518  80 7E 00 64 */	lwz r3, 0x64(r30)
/* 8033C5DC 0033951C  38 84 97 D8 */	addi r4, r4, __dt__Q29PSAutoBgm5TrackFv@l
/* 8033C5E0 00339520  4B D8 51 69 */	bl __destroy_new_array
/* 8033C5E4 00339524  34 1E 00 68 */	addic. r0, r30, 0x68
/* 8033C5E8 00339528  41 82 00 40 */	beq .L_8033C628
/* 8033C5EC 0033952C  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 8033C5F0 00339530  34 1E 00 68 */	addic. r0, r30, 0x68
/* 8033C5F4 00339534  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 8033C5F8 00339538  90 1E 00 68 */	stw r0, 0x68(r30)
/* 8033C5FC 0033953C  41 82 00 2C */	beq .L_8033C628
/* 8033C600 00339540  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 8033C604 00339544  34 7E 00 84 */	addic. r3, r30, 0x84
/* 8033C608 00339548  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 8033C60C 0033954C  90 1E 00 68 */	stw r0, 0x68(r30)
/* 8033C610 00339550  41 82 00 0C */	beq .L_8033C61C
/* 8033C614 00339554  38 80 00 00 */	li r4, 0
/* 8033C618 00339558  4B CE A1 B9 */	bl __dt__10JSUPtrLinkFv
.L_8033C61C:
/* 8033C61C 0033955C  38 7E 00 68 */	addi r3, r30, 0x68
/* 8033C620 00339560  38 80 00 00 */	li r4, 0
/* 8033C624 00339564  4B CE 0A 11 */	bl __dt__11JKRDisposerFv
.L_8033C628:
/* 8033C628 00339568  28 1E 00 00 */	cmplwi r30, 0
/* 8033C62C 0033956C  41 82 00 A0 */	beq .L_8033C6CC
/* 8033C630 00339570  3C 60 80 4A */	lis r3, __vt__Q210JADUtility10PrmSetBase@ha
/* 8033C634 00339574  38 03 66 E0 */	addi r0, r3, __vt__Q210JADUtility10PrmSetBase@l
/* 8033C638 00339578  90 1E 00 00 */	stw r0, 0(r30)
/* 8033C63C 0033957C  48 00 00 0C */	b .L_8033C648
.L_8033C640:
/* 8033C640 00339580  38 7E 00 1C */	addi r3, r30, 0x1c
/* 8033C644 00339584  4B CE A5 E1 */	bl remove__10JSUPtrListFP10JSUPtrLink
.L_8033C648:
/* 8033C648 00339588  80 9E 00 1C */	lwz r4, 0x1c(r30)
/* 8033C64C 0033958C  28 04 00 00 */	cmplwi r4, 0
/* 8033C650 00339590  40 82 FF F0 */	bne .L_8033C640
/* 8033C654 00339594  34 1E 00 2C */	addic. r0, r30, 0x2c
/* 8033C658 00339598  41 82 00 54 */	beq .L_8033C6AC
/* 8033C65C 0033959C  3C 60 80 4A */	lis r3, __vt__Q210JADUtility10PrmSetTree@ha
/* 8033C660 003395A0  34 1E 00 2C */	addic. r0, r30, 0x2c
/* 8033C664 003395A4  38 03 67 04 */	addi r0, r3, __vt__Q210JADUtility10PrmSetTree@l
/* 8033C668 003395A8  90 1E 00 48 */	stw r0, 0x48(r30)
/* 8033C66C 003395AC  41 82 00 40 */	beq .L_8033C6AC
/* 8033C670 003395B0  3C 60 80 4A */	lis r3, "__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@ha
/* 8033C674 003395B4  34 1E 00 2C */	addic. r0, r30, 0x2c
/* 8033C678 003395B8  38 03 67 1C */	addi r0, r3, "__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@l
/* 8033C67C 003395BC  90 1E 00 48 */	stw r0, 0x48(r30)
/* 8033C680 003395C0  41 82 00 2C */	beq .L_8033C6AC
/* 8033C684 003395C4  34 1E 00 38 */	addic. r0, r30, 0x38
/* 8033C688 003395C8  41 82 00 10 */	beq .L_8033C698
/* 8033C68C 003395CC  38 7E 00 38 */	addi r3, r30, 0x38
/* 8033C690 003395D0  38 80 00 00 */	li r4, 0
/* 8033C694 003395D4  4B CE A1 3D */	bl __dt__10JSUPtrLinkFv
.L_8033C698:
/* 8033C698 003395D8  34 1E 00 2C */	addic. r0, r30, 0x2c
/* 8033C69C 003395DC  41 82 00 10 */	beq .L_8033C6AC
/* 8033C6A0 003395E0  38 7E 00 2C */	addi r3, r30, 0x2c
/* 8033C6A4 003395E4  38 80 00 00 */	li r4, 0
/* 8033C6A8 003395E8  4B CE A1 C1 */	bl __dt__10JSUPtrListFv
.L_8033C6AC:
/* 8033C6AC 003395EC  34 1E 00 1C */	addic. r0, r30, 0x1c
/* 8033C6B0 003395F0  41 82 00 10 */	beq .L_8033C6C0
/* 8033C6B4 003395F4  38 7E 00 1C */	addi r3, r30, 0x1c
/* 8033C6B8 003395F8  38 80 00 00 */	li r4, 0
/* 8033C6BC 003395FC  4B CE A1 AD */	bl __dt__10JSUPtrListFv
.L_8033C6C0:
/* 8033C6C0 00339600  7F C3 F3 78 */	mr r3, r30
/* 8033C6C4 00339604  38 80 00 00 */	li r4, 0
/* 8033C6C8 00339608  4B CE 09 6D */	bl __dt__11JKRDisposerFv
.L_8033C6CC:
/* 8033C6CC 0033960C  7F E0 07 35 */	extsh. r0, r31
/* 8033C6D0 00339610  40 81 00 0C */	ble .L_8033C6DC
/* 8033C6D4 00339614  7F C3 F3 78 */	mr r3, r30
/* 8033C6D8 00339618  4B CE 79 DD */	bl __dl__FPv
.L_8033C6DC:
/* 8033C6DC 0033961C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033C6E0 00339620  7F C3 F3 78 */	mr r3, r30
/* 8033C6E4 00339624  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033C6E8 00339628  83 C1 00 08 */	lwz r30, 8(r1)
/* 8033C6EC 0033962C  7C 08 03 A6 */	mtlr r0
/* 8033C6F0 00339630  38 21 00 10 */	addi r1, r1, 0x10
/* 8033C6F4 00339634  4E 80 00 20 */	blr 
.endfn "__dt__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>Fv"

.fn __dt__Q210JADUtility10StrEditBoxFv, weak
/* 8033C6F8 00339638  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033C6FC 0033963C  7C 08 02 A6 */	mflr r0
/* 8033C700 00339640  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033C704 00339644  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033C708 00339648  7C 9F 23 78 */	mr r31, r4
/* 8033C70C 0033964C  93 C1 00 08 */	stw r30, 8(r1)
/* 8033C710 00339650  7C 7E 1B 79 */	or. r30, r3, r3
/* 8033C714 00339654  41 82 00 8C */	beq .L_8033C7A0
/* 8033C718 00339658  3C 60 80 4E */	lis r3, __vt__Q210JADUtility10StrEditBox@ha
/* 8033C71C 0033965C  38 03 AC 78 */	addi r0, r3, __vt__Q210JADUtility10StrEditBox@l
/* 8033C720 00339660  90 1E 00 00 */	stw r0, 0(r30)
/* 8033C724 00339664  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 8033C728 00339668  4B CE 79 B1 */	bl __dla__FPv
/* 8033C72C 0033966C  28 1E 00 00 */	cmplwi r30, 0
/* 8033C730 00339670  41 82 00 60 */	beq .L_8033C790
/* 8033C734 00339674  3C 60 80 4A */	lis r3, __vt__Q210JADUtility6StrPrm@ha
/* 8033C738 00339678  38 03 67 38 */	addi r0, r3, __vt__Q210JADUtility6StrPrm@l
/* 8033C73C 0033967C  90 1E 00 00 */	stw r0, 0(r30)
/* 8033C740 00339680  41 82 00 50 */	beq .L_8033C790
/* 8033C744 00339684  3C 60 80 4A */	lis r3, "__vt__Q210JADUtility10PrmHio<Pc>"@ha
/* 8033C748 00339688  38 03 67 4C */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Pc>"@l
/* 8033C74C 0033968C  90 1E 00 00 */	stw r0, 0(r30)
/* 8033C750 00339690  41 82 00 40 */	beq .L_8033C790
/* 8033C754 00339694  3C 60 80 4A */	lis r3, "__vt__Q210JADUtility7Prm<Pc>"@ha
/* 8033C758 00339698  38 03 67 60 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Pc>"@l
/* 8033C75C 0033969C  90 1E 00 00 */	stw r0, 0(r30)
/* 8033C760 003396A0  41 82 00 30 */	beq .L_8033C790
/* 8033C764 003396A4  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 8033C768 003396A8  34 1E 00 1C */	addic. r0, r30, 0x1c
/* 8033C76C 003396AC  38 03 67 74 */	addi r0, r3, __vt__Q210JADUtility7PrmBase@l
/* 8033C770 003396B0  90 1E 00 00 */	stw r0, 0(r30)
/* 8033C774 003396B4  41 82 00 10 */	beq .L_8033C784
/* 8033C778 003396B8  38 7E 00 1C */	addi r3, r30, 0x1c
/* 8033C77C 003396BC  38 80 00 00 */	li r4, 0
/* 8033C780 003396C0  4B CE A0 51 */	bl __dt__10JSUPtrLinkFv
.L_8033C784:
/* 8033C784 003396C4  7F C3 F3 78 */	mr r3, r30
/* 8033C788 003396C8  38 80 00 00 */	li r4, 0
/* 8033C78C 003396CC  4B CE 08 A9 */	bl __dt__11JKRDisposerFv
.L_8033C790:
/* 8033C790 003396D0  7F E0 07 35 */	extsh. r0, r31
/* 8033C794 003396D4  40 81 00 0C */	ble .L_8033C7A0
/* 8033C798 003396D8  7F C3 F3 78 */	mr r3, r30
/* 8033C79C 003396DC  4B CE 79 19 */	bl __dl__FPv
.L_8033C7A0:
/* 8033C7A0 003396E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033C7A4 003396E4  7F C3 F3 78 */	mr r3, r30
/* 8033C7A8 003396E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033C7AC 003396EC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8033C7B0 003396F0  7C 08 03 A6 */	mtlr r0
/* 8033C7B4 003396F4  38 21 00 10 */	addi r1, r1, 0x10
/* 8033C7B8 003396F8  4E 80 00 20 */	blr 
.endfn __dt__Q210JADUtility10StrEditBoxFv

.fn "__dt__Q210JADUtility12PrmSlider<s>Fv", weak
/* 8033C7BC 003396FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033C7C0 00339700  7C 08 02 A6 */	mflr r0
/* 8033C7C4 00339704  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033C7C8 00339708  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033C7CC 0033970C  7C 9F 23 78 */	mr r31, r4
/* 8033C7D0 00339710  93 C1 00 08 */	stw r30, 8(r1)
/* 8033C7D4 00339714  7C 7E 1B 79 */	or. r30, r3, r3
/* 8033C7D8 00339718  41 82 00 70 */	beq .L_8033C848
/* 8033C7DC 0033971C  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
/* 8033C7E0 00339720  38 03 AC 8C */	addi r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
/* 8033C7E4 00339724  90 1E 00 00 */	stw r0, 0(r30)
/* 8033C7E8 00339728  41 82 00 50 */	beq .L_8033C838
/* 8033C7EC 0033972C  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
/* 8033C7F0 00339730  38 03 AC A0 */	addi r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
/* 8033C7F4 00339734  90 1E 00 00 */	stw r0, 0(r30)
/* 8033C7F8 00339738  41 82 00 40 */	beq .L_8033C838
/* 8033C7FC 0033973C  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility6Prm<s>"@ha
/* 8033C800 00339740  38 03 AC B4 */	addi r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
/* 8033C804 00339744  90 1E 00 00 */	stw r0, 0(r30)
/* 8033C808 00339748  41 82 00 30 */	beq .L_8033C838
/* 8033C80C 0033974C  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 8033C810 00339750  34 1E 00 1C */	addic. r0, r30, 0x1c
/* 8033C814 00339754  38 03 67 74 */	addi r0, r3, __vt__Q210JADUtility7PrmBase@l
/* 8033C818 00339758  90 1E 00 00 */	stw r0, 0(r30)
/* 8033C81C 0033975C  41 82 00 10 */	beq .L_8033C82C
/* 8033C820 00339760  38 7E 00 1C */	addi r3, r30, 0x1c
/* 8033C824 00339764  38 80 00 00 */	li r4, 0
/* 8033C828 00339768  4B CE 9F A9 */	bl __dt__10JSUPtrLinkFv
.L_8033C82C:
/* 8033C82C 0033976C  7F C3 F3 78 */	mr r3, r30
/* 8033C830 00339770  38 80 00 00 */	li r4, 0
/* 8033C834 00339774  4B CE 08 01 */	bl __dt__11JKRDisposerFv
.L_8033C838:
/* 8033C838 00339778  7F E0 07 35 */	extsh. r0, r31
/* 8033C83C 0033977C  40 81 00 0C */	ble .L_8033C848
/* 8033C840 00339780  7F C3 F3 78 */	mr r3, r30
/* 8033C844 00339784  4B CE 78 71 */	bl __dl__FPv
.L_8033C848:
/* 8033C848 00339788  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033C84C 0033978C  7F C3 F3 78 */	mr r3, r30
/* 8033C850 00339790  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033C854 00339794  83 C1 00 08 */	lwz r30, 8(r1)
/* 8033C858 00339798  7C 08 03 A6 */	mtlr r0
/* 8033C85C 0033979C  38 21 00 10 */	addi r1, r1, 0x10
/* 8033C860 003397A0  4E 80 00 20 */	blr 
.endfn "__dt__Q210JADUtility12PrmSlider<s>Fv"

.fn "__dt__Q210JADUtility9PrmHio<s>Fv", weak
/* 8033C864 003397A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033C868 003397A8  7C 08 02 A6 */	mflr r0
/* 8033C86C 003397AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033C870 003397B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033C874 003397B4  7C 9F 23 78 */	mr r31, r4
/* 8033C878 003397B8  93 C1 00 08 */	stw r30, 8(r1)
/* 8033C87C 003397BC  7C 7E 1B 79 */	or. r30, r3, r3
/* 8033C880 003397C0  41 82 00 60 */	beq .L_8033C8E0
/* 8033C884 003397C4  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
/* 8033C888 003397C8  38 03 AC A0 */	addi r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
/* 8033C88C 003397CC  90 1E 00 00 */	stw r0, 0(r30)
/* 8033C890 003397D0  41 82 00 40 */	beq .L_8033C8D0
/* 8033C894 003397D4  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility6Prm<s>"@ha
/* 8033C898 003397D8  38 03 AC B4 */	addi r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
/* 8033C89C 003397DC  90 1E 00 00 */	stw r0, 0(r30)
/* 8033C8A0 003397E0  41 82 00 30 */	beq .L_8033C8D0
/* 8033C8A4 003397E4  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 8033C8A8 003397E8  34 1E 00 1C */	addic. r0, r30, 0x1c
/* 8033C8AC 003397EC  38 03 67 74 */	addi r0, r3, __vt__Q210JADUtility7PrmBase@l
/* 8033C8B0 003397F0  90 1E 00 00 */	stw r0, 0(r30)
/* 8033C8B4 003397F4  41 82 00 10 */	beq .L_8033C8C4
/* 8033C8B8 003397F8  38 7E 00 1C */	addi r3, r30, 0x1c
/* 8033C8BC 003397FC  38 80 00 00 */	li r4, 0
/* 8033C8C0 00339800  4B CE 9F 11 */	bl __dt__10JSUPtrLinkFv
.L_8033C8C4:
/* 8033C8C4 00339804  7F C3 F3 78 */	mr r3, r30
/* 8033C8C8 00339808  38 80 00 00 */	li r4, 0
/* 8033C8CC 0033980C  4B CE 07 69 */	bl __dt__11JKRDisposerFv
.L_8033C8D0:
/* 8033C8D0 00339810  7F E0 07 35 */	extsh. r0, r31
/* 8033C8D4 00339814  40 81 00 0C */	ble .L_8033C8E0
/* 8033C8D8 00339818  7F C3 F3 78 */	mr r3, r30
/* 8033C8DC 0033981C  4B CE 77 D9 */	bl __dl__FPv
.L_8033C8E0:
/* 8033C8E0 00339820  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033C8E4 00339824  7F C3 F3 78 */	mr r3, r30
/* 8033C8E8 00339828  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033C8EC 0033982C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8033C8F0 00339830  7C 08 03 A6 */	mtlr r0
/* 8033C8F4 00339834  38 21 00 10 */	addi r1, r1, 0x10
/* 8033C8F8 00339838  4E 80 00 20 */	blr 
.endfn "__dt__Q210JADUtility9PrmHio<s>Fv"

.fn "__dt__Q210JADUtility6Prm<s>Fv", weak
/* 8033C8FC 0033983C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033C900 00339840  7C 08 02 A6 */	mflr r0
/* 8033C904 00339844  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033C908 00339848  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033C90C 0033984C  7C 9F 23 78 */	mr r31, r4
/* 8033C910 00339850  93 C1 00 08 */	stw r30, 8(r1)
/* 8033C914 00339854  7C 7E 1B 79 */	or. r30, r3, r3
/* 8033C918 00339858  41 82 00 50 */	beq .L_8033C968
/* 8033C91C 0033985C  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility6Prm<s>"@ha
/* 8033C920 00339860  38 03 AC B4 */	addi r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
/* 8033C924 00339864  90 1E 00 00 */	stw r0, 0(r30)
/* 8033C928 00339868  41 82 00 30 */	beq .L_8033C958
/* 8033C92C 0033986C  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 8033C930 00339870  34 1E 00 1C */	addic. r0, r30, 0x1c
/* 8033C934 00339874  38 03 67 74 */	addi r0, r3, __vt__Q210JADUtility7PrmBase@l
/* 8033C938 00339878  90 1E 00 00 */	stw r0, 0(r30)
/* 8033C93C 0033987C  41 82 00 10 */	beq .L_8033C94C
/* 8033C940 00339880  38 7E 00 1C */	addi r3, r30, 0x1c
/* 8033C944 00339884  38 80 00 00 */	li r4, 0
/* 8033C948 00339888  4B CE 9E 89 */	bl __dt__10JSUPtrLinkFv
.L_8033C94C:
/* 8033C94C 0033988C  7F C3 F3 78 */	mr r3, r30
/* 8033C950 00339890  38 80 00 00 */	li r4, 0
/* 8033C954 00339894  4B CE 06 E1 */	bl __dt__11JKRDisposerFv
.L_8033C958:
/* 8033C958 00339898  7F E0 07 35 */	extsh. r0, r31
/* 8033C95C 0033989C  40 81 00 0C */	ble .L_8033C968
/* 8033C960 003398A0  7F C3 F3 78 */	mr r3, r30
/* 8033C964 003398A4  4B CE 77 51 */	bl __dl__FPv
.L_8033C968:
/* 8033C968 003398A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033C96C 003398AC  7F C3 F3 78 */	mr r3, r30
/* 8033C970 003398B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033C974 003398B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8033C978 003398B8  7C 08 03 A6 */	mtlr r0
/* 8033C97C 003398BC  38 21 00 10 */	addi r1, r1, 0x10
/* 8033C980 003398C0  4E 80 00 20 */	blr 
.endfn "__dt__Q210JADUtility6Prm<s>Fv"

.fn "__dt__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>Fv", weak
/* 8033C984 003398C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033C988 003398C8  7C 08 02 A6 */	mflr r0
/* 8033C98C 003398CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033C990 003398D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033C994 003398D4  7C 9F 23 78 */	mr r31, r4
/* 8033C998 003398D8  93 C1 00 08 */	stw r30, 8(r1)
/* 8033C99C 003398DC  7C 7E 1B 79 */	or. r30, r3, r3
/* 8033C9A0 003398E0  41 82 01 58 */	beq .L_8033CAF8
/* 8033C9A4 003398E4  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>"@ha
/* 8033C9A8 003398E8  38 03 AC 50 */	addi r0, r3, "__vt__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>"@l
/* 8033C9AC 003398EC  90 1E 00 00 */	stw r0, 0(r30)
/* 8033C9B0 003398F0  48 00 00 24 */	b .L_8033C9D4
.L_8033C9B4:
/* 8033C9B4 003398F4  28 04 00 00 */	cmplwi r4, 0
/* 8033C9B8 003398F8  41 82 00 08 */	beq .L_8033C9C0
/* 8033C9BC 003398FC  38 84 FF F4 */	addi r4, r4, -12
.L_8033C9C0:
/* 8033C9C0 00339900  28 04 00 00 */	cmplwi r4, 0
/* 8033C9C4 00339904  41 82 00 08 */	beq .L_8033C9CC
/* 8033C9C8 00339908  38 84 00 0C */	addi r4, r4, 0xc
.L_8033C9CC:
/* 8033C9CC 0033990C  38 7E 00 2C */	addi r3, r30, 0x2c
/* 8033C9D0 00339910  4B CE A2 55 */	bl remove__10JSUPtrListFP10JSUPtrLink
.L_8033C9D4:
/* 8033C9D4 00339914  80 9E 00 2C */	lwz r4, 0x2c(r30)
/* 8033C9D8 00339918  28 04 00 00 */	cmplwi r4, 0
/* 8033C9DC 0033991C  7C 80 23 78 */	mr r0, r4
/* 8033C9E0 00339920  41 82 00 08 */	beq .L_8033C9E8
/* 8033C9E4 00339924  38 04 FF F4 */	addi r0, r4, -12
.L_8033C9E8:
/* 8033C9E8 00339928  28 00 00 00 */	cmplwi r0, 0
/* 8033C9EC 0033992C  40 82 FF C8 */	bne .L_8033C9B4
/* 8033C9F0 00339930  3C 80 80 34 */	lis r4, __dt__Q29PSAutoBgm6ModuleFv@ha
/* 8033C9F4 00339934  80 7E 00 64 */	lwz r3, 0x64(r30)
/* 8033C9F8 00339938  38 84 A3 B0 */	addi r4, r4, __dt__Q29PSAutoBgm6ModuleFv@l
/* 8033C9FC 0033993C  4B D8 4D 4D */	bl __destroy_new_array
/* 8033CA00 00339940  34 1E 00 68 */	addic. r0, r30, 0x68
/* 8033CA04 00339944  41 82 00 40 */	beq .L_8033CA44
/* 8033CA08 00339948  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 8033CA0C 0033994C  34 1E 00 68 */	addic. r0, r30, 0x68
/* 8033CA10 00339950  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 8033CA14 00339954  90 1E 00 68 */	stw r0, 0x68(r30)
/* 8033CA18 00339958  41 82 00 2C */	beq .L_8033CA44
/* 8033CA1C 0033995C  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 8033CA20 00339960  34 7E 00 84 */	addic. r3, r30, 0x84
/* 8033CA24 00339964  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 8033CA28 00339968  90 1E 00 68 */	stw r0, 0x68(r30)
/* 8033CA2C 0033996C  41 82 00 0C */	beq .L_8033CA38
/* 8033CA30 00339970  38 80 00 00 */	li r4, 0
/* 8033CA34 00339974  4B CE 9D 9D */	bl __dt__10JSUPtrLinkFv
.L_8033CA38:
/* 8033CA38 00339978  38 7E 00 68 */	addi r3, r30, 0x68
/* 8033CA3C 0033997C  38 80 00 00 */	li r4, 0
/* 8033CA40 00339980  4B CE 05 F5 */	bl __dt__11JKRDisposerFv
.L_8033CA44:
/* 8033CA44 00339984  28 1E 00 00 */	cmplwi r30, 0
/* 8033CA48 00339988  41 82 00 A0 */	beq .L_8033CAE8
/* 8033CA4C 0033998C  3C 60 80 4A */	lis r3, __vt__Q210JADUtility10PrmSetBase@ha
/* 8033CA50 00339990  38 03 66 E0 */	addi r0, r3, __vt__Q210JADUtility10PrmSetBase@l
/* 8033CA54 00339994  90 1E 00 00 */	stw r0, 0(r30)
/* 8033CA58 00339998  48 00 00 0C */	b .L_8033CA64
.L_8033CA5C:
/* 8033CA5C 0033999C  38 7E 00 1C */	addi r3, r30, 0x1c
/* 8033CA60 003399A0  4B CE A1 C5 */	bl remove__10JSUPtrListFP10JSUPtrLink
.L_8033CA64:
/* 8033CA64 003399A4  80 9E 00 1C */	lwz r4, 0x1c(r30)
/* 8033CA68 003399A8  28 04 00 00 */	cmplwi r4, 0
/* 8033CA6C 003399AC  40 82 FF F0 */	bne .L_8033CA5C
/* 8033CA70 003399B0  34 1E 00 2C */	addic. r0, r30, 0x2c
/* 8033CA74 003399B4  41 82 00 54 */	beq .L_8033CAC8
/* 8033CA78 003399B8  3C 60 80 4A */	lis r3, __vt__Q210JADUtility10PrmSetTree@ha
/* 8033CA7C 003399BC  34 1E 00 2C */	addic. r0, r30, 0x2c
/* 8033CA80 003399C0  38 03 67 04 */	addi r0, r3, __vt__Q210JADUtility10PrmSetTree@l
/* 8033CA84 003399C4  90 1E 00 48 */	stw r0, 0x48(r30)
/* 8033CA88 003399C8  41 82 00 40 */	beq .L_8033CAC8
/* 8033CA8C 003399CC  3C 60 80 4A */	lis r3, "__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@ha
/* 8033CA90 003399D0  34 1E 00 2C */	addic. r0, r30, 0x2c
/* 8033CA94 003399D4  38 03 67 1C */	addi r0, r3, "__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@l
/* 8033CA98 003399D8  90 1E 00 48 */	stw r0, 0x48(r30)
/* 8033CA9C 003399DC  41 82 00 2C */	beq .L_8033CAC8
/* 8033CAA0 003399E0  34 1E 00 38 */	addic. r0, r30, 0x38
/* 8033CAA4 003399E4  41 82 00 10 */	beq .L_8033CAB4
/* 8033CAA8 003399E8  38 7E 00 38 */	addi r3, r30, 0x38
/* 8033CAAC 003399EC  38 80 00 00 */	li r4, 0
/* 8033CAB0 003399F0  4B CE 9D 21 */	bl __dt__10JSUPtrLinkFv
.L_8033CAB4:
/* 8033CAB4 003399F4  34 1E 00 2C */	addic. r0, r30, 0x2c
/* 8033CAB8 003399F8  41 82 00 10 */	beq .L_8033CAC8
/* 8033CABC 003399FC  38 7E 00 2C */	addi r3, r30, 0x2c
/* 8033CAC0 00339A00  38 80 00 00 */	li r4, 0
/* 8033CAC4 00339A04  4B CE 9D A5 */	bl __dt__10JSUPtrListFv
.L_8033CAC8:
/* 8033CAC8 00339A08  34 1E 00 1C */	addic. r0, r30, 0x1c
/* 8033CACC 00339A0C  41 82 00 10 */	beq .L_8033CADC
/* 8033CAD0 00339A10  38 7E 00 1C */	addi r3, r30, 0x1c
/* 8033CAD4 00339A14  38 80 00 00 */	li r4, 0
/* 8033CAD8 00339A18  4B CE 9D 91 */	bl __dt__10JSUPtrListFv
.L_8033CADC:
/* 8033CADC 00339A1C  7F C3 F3 78 */	mr r3, r30
/* 8033CAE0 00339A20  38 80 00 00 */	li r4, 0
/* 8033CAE4 00339A24  4B CE 05 51 */	bl __dt__11JKRDisposerFv
.L_8033CAE8:
/* 8033CAE8 00339A28  7F E0 07 35 */	extsh. r0, r31
/* 8033CAEC 00339A2C  40 81 00 0C */	ble .L_8033CAF8
/* 8033CAF0 00339A30  7F C3 F3 78 */	mr r3, r30
/* 8033CAF4 00339A34  4B CE 75 C1 */	bl __dl__FPv
.L_8033CAF8:
/* 8033CAF8 00339A38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033CAFC 00339A3C  7F C3 F3 78 */	mr r3, r30
/* 8033CB00 00339A40  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033CB04 00339A44  83 C1 00 08 */	lwz r30, 8(r1)
/* 8033CB08 00339A48  7C 08 03 A6 */	mtlr r0
/* 8033CB0C 00339A4C  38 21 00 10 */	addi r1, r1, 0x10
/* 8033CB10 00339A50  4E 80 00 20 */	blr 
.endfn "__dt__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>Fv"

.fn "getChildNum__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>Fv", weak
/* 8033CB14 00339A54  88 63 00 94 */	lbz r3, 0x94(r3)
/* 8033CB18 00339A58  4E 80 00 20 */	blr 
.endfn "getChildNum__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>Fv"

.fn "getPrmObjHeap__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>Fv", weak
/* 8033CB1C 00339A5C  38 60 00 00 */	li r3, 0
/* 8033CB20 00339A60  4E 80 00 20 */	blr 
.endfn "getPrmObjHeap__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>Fv"

.fn "getChildNum__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>Fv", weak
/* 8033CB24 00339A64  88 63 00 94 */	lbz r3, 0x94(r3)
/* 8033CB28 00339A68  4E 80 00 20 */	blr 
.endfn "getChildNum__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>Fv"

.fn "getPrmObjHeap__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>Fv", weak
/* 8033CB2C 00339A6C  38 60 00 00 */	li r3, 0
/* 8033CB30 00339A70  4E 80 00 20 */	blr 
.endfn "getPrmObjHeap__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>Fv"

.fn "save__Q210JADUtility6Prm<s>FR21JSUMemoryOutputStream", weak
/* 8033CB34 00339A74  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8033CB38 00339A78  7C 08 02 A6 */	mflr r0
/* 8033CB3C 00339A7C  38 A0 00 02 */	li r5, 2
/* 8033CB40 00339A80  90 01 00 24 */	stw r0, 0x24(r1)
/* 8033CB44 00339A84  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8033CB48 00339A88  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8033CB4C 00339A8C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8033CB50 00339A90  7C 9D 23 78 */	mr r29, r4
/* 8033CB54 00339A94  38 81 00 0A */	addi r4, r1, 0xa
/* 8033CB58 00339A98  93 81 00 10 */	stw r28, 0x10(r1)
/* 8033CB5C 00339A9C  7C 7C 1B 78 */	mr r28, r3
/* 8033CB60 00339AA0  A8 03 00 2C */	lha r0, 0x2c(r3)
/* 8033CB64 00339AA4  7F A3 EB 78 */	mr r3, r29
/* 8033CB68 00339AA8  B0 01 00 0A */	sth r0, 0xa(r1)
/* 8033CB6C 00339AAC  4B CE 96 75 */	bl write__15JSUOutputStreamFPCvl
/* 8033CB70 00339AB0  3B C0 00 00 */	li r30, 0
/* 8033CB74 00339AB4  7F DF F3 78 */	mr r31, r30
/* 8033CB78 00339AB8  48 00 00 1C */	b .L_8033CB94
.L_8033CB7C:
/* 8033CB7C 00339ABC  9B E1 00 08 */	stb r31, 8(r1)
/* 8033CB80 00339AC0  7F A3 EB 78 */	mr r3, r29
/* 8033CB84 00339AC4  38 81 00 08 */	addi r4, r1, 8
/* 8033CB88 00339AC8  38 A0 00 01 */	li r5, 1
/* 8033CB8C 00339ACC  4B CE 96 55 */	bl write__15JSUOutputStreamFPCvl
/* 8033CB90 00339AD0  3B DE 00 01 */	addi r30, r30, 1
.L_8033CB94:
/* 8033CB94 00339AD4  88 1C 00 18 */	lbz r0, 0x18(r28)
/* 8033CB98 00339AD8  57 C3 06 3E */	clrlwi r3, r30, 0x18
/* 8033CB9C 00339ADC  7C 03 00 40 */	cmplw r3, r0
/* 8033CBA0 00339AE0  41 80 FF DC */	blt .L_8033CB7C
/* 8033CBA4 00339AE4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8033CBA8 00339AE8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8033CBAC 00339AEC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8033CBB0 00339AF0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8033CBB4 00339AF4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8033CBB8 00339AF8  7C 08 03 A6 */	mtlr r0
/* 8033CBBC 00339AFC  38 21 00 20 */	addi r1, r1, 0x20
/* 8033CBC0 00339B00  4E 80 00 20 */	blr 
.endfn "save__Q210JADUtility6Prm<s>FR21JSUMemoryOutputStream"

.fn "load__Q210JADUtility6Prm<s>FR20JSUMemoryInputStream", weak
/* 8033CBC4 00339B04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033CBC8 00339B08  7C 08 02 A6 */	mflr r0
/* 8033CBCC 00339B0C  38 A0 00 02 */	li r5, 2
/* 8033CBD0 00339B10  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033CBD4 00339B14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033CBD8 00339B18  7C 9F 23 78 */	mr r31, r4
/* 8033CBDC 00339B1C  93 C1 00 08 */	stw r30, 8(r1)
/* 8033CBE0 00339B20  7C 7E 1B 78 */	mr r30, r3
/* 8033CBE4 00339B24  7F E3 FB 78 */	mr r3, r31
/* 8033CBE8 00339B28  38 9E 00 2C */	addi r4, r30, 0x2c
/* 8033CBEC 00339B2C  4B CE 97 E9 */	bl read__14JSUInputStreamFPvl
/* 8033CBF0 00339B30  88 9E 00 18 */	lbz r4, 0x18(r30)
/* 8033CBF4 00339B34  28 04 00 00 */	cmplwi r4, 0
/* 8033CBF8 00339B38  41 82 00 18 */	beq .L_8033CC10
/* 8033CBFC 00339B3C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8033CC00 00339B40  7F E3 FB 78 */	mr r3, r31
/* 8033CC04 00339B44  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8033CC08 00339B48  7D 89 03 A6 */	mtctr r12
/* 8033CC0C 00339B4C  4E 80 04 21 */	bctrl 
.L_8033CC10:
/* 8033CC10 00339B50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033CC14 00339B54  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033CC18 00339B58  83 C1 00 08 */	lwz r30, 8(r1)
/* 8033CC1C 00339B5C  7C 08 03 A6 */	mtlr r0
/* 8033CC20 00339B60  38 21 00 10 */	addi r1, r1, 0x10
/* 8033CC24 00339B64  4E 80 00 20 */	blr 
.endfn "load__Q210JADUtility6Prm<s>FR20JSUMemoryInputStream"

.fn "save__Q210JADUtility7Prm<Uc>FR21JSUMemoryOutputStream", weak
/* 8033CC28 00339B68  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8033CC2C 00339B6C  7C 08 02 A6 */	mflr r0
/* 8033CC30 00339B70  38 A0 00 01 */	li r5, 1
/* 8033CC34 00339B74  90 01 00 24 */	stw r0, 0x24(r1)
/* 8033CC38 00339B78  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8033CC3C 00339B7C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8033CC40 00339B80  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8033CC44 00339B84  7C 9D 23 78 */	mr r29, r4
/* 8033CC48 00339B88  38 81 00 09 */	addi r4, r1, 9
/* 8033CC4C 00339B8C  93 81 00 10 */	stw r28, 0x10(r1)
/* 8033CC50 00339B90  7C 7C 1B 78 */	mr r28, r3
/* 8033CC54 00339B94  88 03 00 2C */	lbz r0, 0x2c(r3)
/* 8033CC58 00339B98  7F A3 EB 78 */	mr r3, r29
/* 8033CC5C 00339B9C  98 01 00 09 */	stb r0, 9(r1)
/* 8033CC60 00339BA0  4B CE 95 81 */	bl write__15JSUOutputStreamFPCvl
/* 8033CC64 00339BA4  3B C0 00 00 */	li r30, 0
/* 8033CC68 00339BA8  7F DF F3 78 */	mr r31, r30
/* 8033CC6C 00339BAC  48 00 00 1C */	b .L_8033CC88
.L_8033CC70:
/* 8033CC70 00339BB0  9B E1 00 08 */	stb r31, 8(r1)
/* 8033CC74 00339BB4  7F A3 EB 78 */	mr r3, r29
/* 8033CC78 00339BB8  38 81 00 08 */	addi r4, r1, 8
/* 8033CC7C 00339BBC  38 A0 00 01 */	li r5, 1
/* 8033CC80 00339BC0  4B CE 95 61 */	bl write__15JSUOutputStreamFPCvl
/* 8033CC84 00339BC4  3B DE 00 01 */	addi r30, r30, 1
.L_8033CC88:
/* 8033CC88 00339BC8  88 1C 00 18 */	lbz r0, 0x18(r28)
/* 8033CC8C 00339BCC  57 C3 06 3E */	clrlwi r3, r30, 0x18
/* 8033CC90 00339BD0  7C 03 00 40 */	cmplw r3, r0
/* 8033CC94 00339BD4  41 80 FF DC */	blt .L_8033CC70
/* 8033CC98 00339BD8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8033CC9C 00339BDC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8033CCA0 00339BE0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8033CCA4 00339BE4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8033CCA8 00339BE8  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8033CCAC 00339BEC  7C 08 03 A6 */	mtlr r0
/* 8033CCB0 00339BF0  38 21 00 20 */	addi r1, r1, 0x20
/* 8033CCB4 00339BF4  4E 80 00 20 */	blr 
.endfn "save__Q210JADUtility7Prm<Uc>FR21JSUMemoryOutputStream"

.fn "load__Q210JADUtility7Prm<Uc>FR20JSUMemoryInputStream", weak
/* 8033CCB8 00339BF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033CCBC 00339BFC  7C 08 02 A6 */	mflr r0
/* 8033CCC0 00339C00  38 A0 00 01 */	li r5, 1
/* 8033CCC4 00339C04  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033CCC8 00339C08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033CCCC 00339C0C  7C 9F 23 78 */	mr r31, r4
/* 8033CCD0 00339C10  93 C1 00 08 */	stw r30, 8(r1)
/* 8033CCD4 00339C14  7C 7E 1B 78 */	mr r30, r3
/* 8033CCD8 00339C18  7F E3 FB 78 */	mr r3, r31
/* 8033CCDC 00339C1C  38 9E 00 2C */	addi r4, r30, 0x2c
/* 8033CCE0 00339C20  4B CE 96 F5 */	bl read__14JSUInputStreamFPvl
/* 8033CCE4 00339C24  88 9E 00 18 */	lbz r4, 0x18(r30)
/* 8033CCE8 00339C28  28 04 00 00 */	cmplwi r4, 0
/* 8033CCEC 00339C2C  41 82 00 18 */	beq .L_8033CD04
/* 8033CCF0 00339C30  81 9F 00 00 */	lwz r12, 0(r31)
/* 8033CCF4 00339C34  7F E3 FB 78 */	mr r3, r31
/* 8033CCF8 00339C38  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8033CCFC 00339C3C  7D 89 03 A6 */	mtctr r12
/* 8033CD00 00339C40  4E 80 04 21 */	bctrl 
.L_8033CD04:
/* 8033CD04 00339C44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033CD08 00339C48  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033CD0C 00339C4C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8033CD10 00339C50  7C 08 03 A6 */	mtlr r0
/* 8033CD14 00339C54  38 21 00 10 */	addi r1, r1, 0x10
/* 8033CD18 00339C58  4E 80 00 20 */	blr 
.endfn "load__Q210JADUtility7Prm<Uc>FR20JSUMemoryInputStream"

.fn "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc", weak
/* 8033CD1C 00339C5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033CD20 00339C60  7C 08 02 A6 */	mflr r0
/* 8033CD24 00339C64  38 63 00 2C */	addi r3, r3, 0x2c
/* 8033CD28 00339C68  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 8033CD2C 00339C6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033CD30 00339C70  4B CE 9F A5 */	bl getNthLink__10JSUPtrListCFUl
/* 8033CD34 00339C74  28 03 00 00 */	cmplwi r3, 0
/* 8033CD38 00339C78  41 82 00 0C */	beq .L_8033CD44
/* 8033CD3C 00339C7C  80 63 00 00 */	lwz r3, 0(r3)
/* 8033CD40 00339C80  48 00 00 08 */	b .L_8033CD48
.L_8033CD44:
/* 8033CD44 00339C84  38 60 00 00 */	li r3, 0
.L_8033CD48:
/* 8033CD48 00339C88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033CD4C 00339C8C  7C 08 03 A6 */	mtlr r0
/* 8033CD50 00339C90  38 21 00 10 */	addi r1, r1, 0x10
/* 8033CD54 00339C94  4E 80 00 20 */	blr 
.endfn "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"

.fn "load__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FR20JSUMemoryInputStream", weak
/* 8033CD58 00339C98  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8033CD5C 00339C9C  7C 08 02 A6 */	mflr r0
/* 8033CD60 00339CA0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8033CD64 00339CA4  BF 41 00 08 */	stmw r26, 8(r1)
/* 8033CD68 00339CA8  7C 7E 1B 78 */	mr r30, r3
/* 8033CD6C 00339CAC  7C 9F 23 78 */	mr r31, r4
/* 8033CD70 00339CB0  4B D7 D8 A1 */	bl load__Q210JADUtility10PrmSetBaseFR20JSUMemoryInputStream
/* 8033CD74 00339CB4  88 1E 00 94 */	lbz r0, 0x94(r30)
/* 8033CD78 00339CB8  28 00 00 00 */	cmplwi r0, 0
/* 8033CD7C 00339CBC  41 82 00 DC */	beq .L_8033CE58
/* 8033CD80 00339CC0  7F C3 F3 78 */	mr r3, r30
/* 8033CD84 00339CC4  83 8D 88 2C */	lwz r28, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8033CD88 00339CC8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8033CD8C 00339CCC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8033CD90 00339CD0  7D 89 03 A6 */	mtctr r12
/* 8033CD94 00339CD4  4E 80 04 21 */	bctrl 
/* 8033CD98 00339CD8  28 03 00 00 */	cmplwi r3, 0
/* 8033CD9C 00339CDC  41 82 00 1C */	beq .L_8033CDB8
/* 8033CDA0 00339CE0  7F C3 F3 78 */	mr r3, r30
/* 8033CDA4 00339CE4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8033CDA8 00339CE8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8033CDAC 00339CEC  7D 89 03 A6 */	mtctr r12
/* 8033CDB0 00339CF0  4E 80 04 21 */	bctrl 
/* 8033CDB4 00339CF4  4B CE 67 F1 */	bl becomeCurrentHeap__7JKRHeapFv
.L_8033CDB8:
/* 8033CDB8 00339CF8  8B BE 00 94 */	lbz r29, 0x94(r30)
/* 8033CDBC 00339CFC  1C 7D 02 C4 */	mulli r3, r29, 0x2c4
/* 8033CDC0 00339D00  38 63 00 10 */	addi r3, r3, 0x10
/* 8033CDC4 00339D04  4B CE 71 E9 */	bl __nwa__FUl
/* 8033CDC8 00339D08  3C 80 80 34 */	lis r4, __ct__Q29PSAutoBgm6ModuleFv@ha
/* 8033CDCC 00339D0C  3C A0 80 34 */	lis r5, __dt__Q29PSAutoBgm6ModuleFv@ha
/* 8033CDD0 00339D10  38 84 9E 5C */	addi r4, r4, __ct__Q29PSAutoBgm6ModuleFv@l
/* 8033CDD4 00339D14  7F A7 EB 78 */	mr r7, r29
/* 8033CDD8 00339D18  38 A5 A3 B0 */	addi r5, r5, __dt__Q29PSAutoBgm6ModuleFv@l
/* 8033CDDC 00339D1C  38 C0 02 C4 */	li r6, 0x2c4
/* 8033CDE0 00339D20  4B D8 4C 11 */	bl __construct_new_array
/* 8033CDE4 00339D24  7C 7D 1B 78 */	mr r29, r3
/* 8033CDE8 00339D28  3B 40 00 00 */	li r26, 0
/* 8033CDEC 00339D2C  48 00 00 54 */	b .L_8033CE40
.L_8033CDF0:
/* 8033CDF0 00339D30  57 40 06 3E */	clrlwi r0, r26, 0x18
/* 8033CDF4 00339D34  1C 00 02 C4 */	mulli r0, r0, 0x2c4
/* 8033CDF8 00339D38  7F 7D 02 14 */	add r27, r29, r0
/* 8033CDFC 00339D3C  34 9B 00 2C */	addic. r4, r27, 0x2c
/* 8033CE00 00339D40  41 82 00 08 */	beq .L_8033CE08
/* 8033CE04 00339D44  38 84 00 0C */	addi r4, r4, 0xc
.L_8033CE08:
/* 8033CE08 00339D48  38 7E 00 2C */	addi r3, r30, 0x2c
/* 8033CE0C 00339D4C  4B CE 9A D9 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8033CE10 00339D50  7F 63 DB 78 */	mr r3, r27
/* 8033CE14 00339D54  81 9B 00 00 */	lwz r12, 0(r27)
/* 8033CE18 00339D58  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8033CE1C 00339D5C  7D 89 03 A6 */	mtctr r12
/* 8033CE20 00339D60  4E 80 04 21 */	bctrl 
/* 8033CE24 00339D64  7F 63 DB 78 */	mr r3, r27
/* 8033CE28 00339D68  7F E4 FB 78 */	mr r4, r31
/* 8033CE2C 00339D6C  81 9B 00 00 */	lwz r12, 0(r27)
/* 8033CE30 00339D70  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8033CE34 00339D74  7D 89 03 A6 */	mtctr r12
/* 8033CE38 00339D78  4E 80 04 21 */	bctrl 
/* 8033CE3C 00339D7C  3B 5A 00 01 */	addi r26, r26, 1
.L_8033CE40:
/* 8033CE40 00339D80  88 1E 00 94 */	lbz r0, 0x94(r30)
/* 8033CE44 00339D84  57 43 06 3E */	clrlwi r3, r26, 0x18
/* 8033CE48 00339D88  7C 03 00 40 */	cmplw r3, r0
/* 8033CE4C 00339D8C  41 80 FF A4 */	blt .L_8033CDF0
/* 8033CE50 00339D90  7F 83 E3 78 */	mr r3, r28
/* 8033CE54 00339D94  4B CE 67 51 */	bl becomeCurrentHeap__7JKRHeapFv
.L_8033CE58:
/* 8033CE58 00339D98  BB 41 00 08 */	lmw r26, 8(r1)
/* 8033CE5C 00339D9C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8033CE60 00339DA0  7C 08 03 A6 */	mtlr r0
/* 8033CE64 00339DA4  38 21 00 20 */	addi r1, r1, 0x20
/* 8033CE68 00339DA8  4E 80 00 20 */	blr 
.endfn "load__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FR20JSUMemoryInputStream"

.fn "__ct__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>Fv", weak
/* 8033CE6C 00339DAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033CE70 00339DB0  7C 08 02 A6 */	mflr r0
/* 8033CE74 00339DB4  38 80 00 01 */	li r4, 1
/* 8033CE78 00339DB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033CE7C 00339DBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033CE80 00339DC0  7C 7F 1B 78 */	mr r31, r3
/* 8033CE84 00339DC4  93 C1 00 08 */	stw r30, 8(r1)
/* 8033CE88 00339DC8  4B D7 D6 DD */	bl __ct__Q210JADUtility10PrmSetBaseFb
/* 8033CE8C 00339DCC  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>"@ha
/* 8033CE90 00339DD0  38 00 00 00 */	li r0, 0
/* 8033CE94 00339DD4  38 63 AC 50 */	addi r3, r3, "__vt__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>"@l
/* 8033CE98 00339DD8  3B DF 00 68 */	addi r30, r31, 0x68
/* 8033CE9C 00339DDC  90 7F 00 00 */	stw r3, 0(r31)
/* 8033CEA0 00339DE0  7F C3 F3 78 */	mr r3, r30
/* 8033CEA4 00339DE4  90 1F 00 64 */	stw r0, 0x64(r31)
/* 8033CEA8 00339DE8  4B CE 01 25 */	bl __ct__11JKRDisposerFv
/* 8033CEAC 00339DEC  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 8033CEB0 00339DF0  38 00 00 00 */	li r0, 0
/* 8033CEB4 00339DF4  38 63 67 74 */	addi r3, r3, __vt__Q210JADUtility7PrmBase@l
/* 8033CEB8 00339DF8  7F C4 F3 78 */	mr r4, r30
/* 8033CEBC 00339DFC  90 7E 00 00 */	stw r3, 0(r30)
/* 8033CEC0 00339E00  38 7E 00 1C */	addi r3, r30, 0x1c
/* 8033CEC4 00339E04  98 1E 00 18 */	stb r0, 0x18(r30)
/* 8033CEC8 00339E08  4B CE 98 F1 */	bl __ct__10JSUPtrLinkFPv
/* 8033CECC 00339E0C  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 8033CED0 00339E10  38 00 00 00 */	li r0, 0
/* 8033CED4 00339E14  38 83 AD 54 */	addi r4, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 8033CED8 00339E18  7F E3 FB 78 */	mr r3, r31
/* 8033CEDC 00339E1C  90 9E 00 00 */	stw r4, 0(r30)
/* 8033CEE0 00339E20  98 1E 00 2C */	stb r0, 0x2c(r30)
/* 8033CEE4 00339E24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033CEE8 00339E28  83 C1 00 08 */	lwz r30, 8(r1)
/* 8033CEEC 00339E2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033CEF0 00339E30  7C 08 03 A6 */	mtlr r0
/* 8033CEF4 00339E34  38 21 00 10 */	addi r1, r1, 0x10
/* 8033CEF8 00339E38  4E 80 00 20 */	blr 
.endfn "__ct__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>Fv"

.fn "getChild__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>FUc", weak
/* 8033CEFC 00339E3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033CF00 00339E40  7C 08 02 A6 */	mflr r0
/* 8033CF04 00339E44  38 63 00 2C */	addi r3, r3, 0x2c
/* 8033CF08 00339E48  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 8033CF0C 00339E4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033CF10 00339E50  4B CE 9D C5 */	bl getNthLink__10JSUPtrListCFUl
/* 8033CF14 00339E54  28 03 00 00 */	cmplwi r3, 0
/* 8033CF18 00339E58  41 82 00 0C */	beq .L_8033CF24
/* 8033CF1C 00339E5C  80 63 00 00 */	lwz r3, 0(r3)
/* 8033CF20 00339E60  48 00 00 08 */	b .L_8033CF28
.L_8033CF24:
/* 8033CF24 00339E64  38 60 00 00 */	li r3, 0
.L_8033CF28:
/* 8033CF28 00339E68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033CF2C 00339E6C  7C 08 03 A6 */	mtlr r0
/* 8033CF30 00339E70  38 21 00 10 */	addi r1, r1, 0x10
/* 8033CF34 00339E74  4E 80 00 20 */	blr 
.endfn "getChild__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>FUc"

.fn "load__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>FR20JSUMemoryInputStream", weak
/* 8033CF38 00339E78  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8033CF3C 00339E7C  7C 08 02 A6 */	mflr r0
/* 8033CF40 00339E80  90 01 00 24 */	stw r0, 0x24(r1)
/* 8033CF44 00339E84  BF 41 00 08 */	stmw r26, 8(r1)
/* 8033CF48 00339E88  7C 7E 1B 78 */	mr r30, r3
/* 8033CF4C 00339E8C  7C 9F 23 78 */	mr r31, r4
/* 8033CF50 00339E90  4B D7 D6 C1 */	bl load__Q210JADUtility10PrmSetBaseFR20JSUMemoryInputStream
/* 8033CF54 00339E94  88 1E 00 94 */	lbz r0, 0x94(r30)
/* 8033CF58 00339E98  28 00 00 00 */	cmplwi r0, 0
/* 8033CF5C 00339E9C  41 82 00 DC */	beq .L_8033D038
/* 8033CF60 00339EA0  7F C3 F3 78 */	mr r3, r30
/* 8033CF64 00339EA4  83 8D 88 2C */	lwz r28, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8033CF68 00339EA8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8033CF6C 00339EAC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8033CF70 00339EB0  7D 89 03 A6 */	mtctr r12
/* 8033CF74 00339EB4  4E 80 04 21 */	bctrl 
/* 8033CF78 00339EB8  28 03 00 00 */	cmplwi r3, 0
/* 8033CF7C 00339EBC  41 82 00 1C */	beq .L_8033CF98
/* 8033CF80 00339EC0  7F C3 F3 78 */	mr r3, r30
/* 8033CF84 00339EC4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8033CF88 00339EC8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8033CF8C 00339ECC  7D 89 03 A6 */	mtctr r12
/* 8033CF90 00339ED0  4E 80 04 21 */	bctrl 
/* 8033CF94 00339ED4  4B CE 66 11 */	bl becomeCurrentHeap__7JKRHeapFv
.L_8033CF98:
/* 8033CF98 00339ED8  8B BE 00 94 */	lbz r29, 0x94(r30)
/* 8033CF9C 00339EDC  1C 7D 01 A0 */	mulli r3, r29, 0x1a0
/* 8033CFA0 00339EE0  38 63 00 10 */	addi r3, r3, 0x10
/* 8033CFA4 00339EE4  4B CE 70 09 */	bl __nwa__FUl
/* 8033CFA8 00339EE8  3C 80 80 34 */	lis r4, __ct__Q29PSAutoBgm5TrackFv@ha
/* 8033CFAC 00339EEC  3C A0 80 34 */	lis r5, __dt__Q29PSAutoBgm5TrackFv@ha
/* 8033CFB0 00339EF0  38 84 94 F8 */	addi r4, r4, __ct__Q29PSAutoBgm5TrackFv@l
/* 8033CFB4 00339EF4  7F A7 EB 78 */	mr r7, r29
/* 8033CFB8 00339EF8  38 A5 97 D8 */	addi r5, r5, __dt__Q29PSAutoBgm5TrackFv@l
/* 8033CFBC 00339EFC  38 C0 01 A0 */	li r6, 0x1a0
/* 8033CFC0 00339F00  4B D8 4A 31 */	bl __construct_new_array
/* 8033CFC4 00339F04  7C 7D 1B 78 */	mr r29, r3
/* 8033CFC8 00339F08  3B 40 00 00 */	li r26, 0
/* 8033CFCC 00339F0C  48 00 00 54 */	b .L_8033D020
.L_8033CFD0:
/* 8033CFD0 00339F10  57 40 06 3E */	clrlwi r0, r26, 0x18
/* 8033CFD4 00339F14  1C 00 01 A0 */	mulli r0, r0, 0x1a0
/* 8033CFD8 00339F18  7F 7D 02 14 */	add r27, r29, r0
/* 8033CFDC 00339F1C  34 9B 00 2C */	addic. r4, r27, 0x2c
/* 8033CFE0 00339F20  41 82 00 08 */	beq .L_8033CFE8
/* 8033CFE4 00339F24  38 84 00 0C */	addi r4, r4, 0xc
.L_8033CFE8:
/* 8033CFE8 00339F28  38 7E 00 2C */	addi r3, r30, 0x2c
/* 8033CFEC 00339F2C  4B CE 98 F9 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8033CFF0 00339F30  7F 63 DB 78 */	mr r3, r27
/* 8033CFF4 00339F34  81 9B 00 00 */	lwz r12, 0(r27)
/* 8033CFF8 00339F38  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8033CFFC 00339F3C  7D 89 03 A6 */	mtctr r12
/* 8033D000 00339F40  4E 80 04 21 */	bctrl 
/* 8033D004 00339F44  7F 63 DB 78 */	mr r3, r27
/* 8033D008 00339F48  7F E4 FB 78 */	mr r4, r31
/* 8033D00C 00339F4C  81 9B 00 00 */	lwz r12, 0(r27)
/* 8033D010 00339F50  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8033D014 00339F54  7D 89 03 A6 */	mtctr r12
/* 8033D018 00339F58  4E 80 04 21 */	bctrl 
/* 8033D01C 00339F5C  3B 5A 00 01 */	addi r26, r26, 1
.L_8033D020:
/* 8033D020 00339F60  88 1E 00 94 */	lbz r0, 0x94(r30)
/* 8033D024 00339F64  57 43 06 3E */	clrlwi r3, r26, 0x18
/* 8033D028 00339F68  7C 03 00 40 */	cmplw r3, r0
/* 8033D02C 00339F6C  41 80 FF A4 */	blt .L_8033CFD0
/* 8033D030 00339F70  7F 83 E3 78 */	mr r3, r28
/* 8033D034 00339F74  4B CE 65 71 */	bl becomeCurrentHeap__7JKRHeapFv
.L_8033D038:
/* 8033D038 00339F78  BB 41 00 08 */	lmw r26, 8(r1)
/* 8033D03C 00339F7C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8033D040 00339F80  7C 08 03 A6 */	mtlr r0
/* 8033D044 00339F84  38 21 00 20 */	addi r1, r1, 0x20
/* 8033D048 00339F88  4E 80 00 20 */	blr 
.endfn "load__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>FR20JSUMemoryInputStream"

.fn "__ct__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>Fv", weak
/* 8033D04C 00339F8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033D050 00339F90  7C 08 02 A6 */	mflr r0
/* 8033D054 00339F94  38 80 00 01 */	li r4, 1
/* 8033D058 00339F98  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033D05C 00339F9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033D060 00339FA0  7C 7F 1B 78 */	mr r31, r3
/* 8033D064 00339FA4  93 C1 00 08 */	stw r30, 8(r1)
/* 8033D068 00339FA8  4B D7 D4 FD */	bl __ct__Q210JADUtility10PrmSetBaseFb
/* 8033D06C 00339FAC  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>"@ha
/* 8033D070 00339FB0  38 00 00 00 */	li r0, 0
/* 8033D074 00339FB4  38 63 AC F0 */	addi r3, r3, "__vt__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>"@l
/* 8033D078 00339FB8  3B DF 00 68 */	addi r30, r31, 0x68
/* 8033D07C 00339FBC  90 7F 00 00 */	stw r3, 0(r31)
/* 8033D080 00339FC0  7F C3 F3 78 */	mr r3, r30
/* 8033D084 00339FC4  90 1F 00 64 */	stw r0, 0x64(r31)
/* 8033D088 00339FC8  4B CD FF 45 */	bl __ct__11JKRDisposerFv
/* 8033D08C 00339FCC  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 8033D090 00339FD0  38 00 00 00 */	li r0, 0
/* 8033D094 00339FD4  38 63 67 74 */	addi r3, r3, __vt__Q210JADUtility7PrmBase@l
/* 8033D098 00339FD8  7F C4 F3 78 */	mr r4, r30
/* 8033D09C 00339FDC  90 7E 00 00 */	stw r3, 0(r30)
/* 8033D0A0 00339FE0  38 7E 00 1C */	addi r3, r30, 0x1c
/* 8033D0A4 00339FE4  98 1E 00 18 */	stb r0, 0x18(r30)
/* 8033D0A8 00339FE8  4B CE 97 11 */	bl __ct__10JSUPtrLinkFPv
/* 8033D0AC 00339FEC  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 8033D0B0 00339FF0  38 00 00 00 */	li r0, 0
/* 8033D0B4 00339FF4  38 83 AD 54 */	addi r4, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 8033D0B8 00339FF8  7F E3 FB 78 */	mr r3, r31
/* 8033D0BC 00339FFC  90 9E 00 00 */	stw r4, 0(r30)
/* 8033D0C0 0033A000  98 1E 00 2C */	stb r0, 0x2c(r30)
/* 8033D0C4 0033A004  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033D0C8 0033A008  83 C1 00 08 */	lwz r30, 8(r1)
/* 8033D0CC 0033A00C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033D0D0 0033A010  7C 08 03 A6 */	mtlr r0
/* 8033D0D4 0033A014  38 21 00 10 */	addi r1, r1, 0x10
/* 8033D0D8 0033A018  4E 80 00 20 */	blr 
.endfn "__ct__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>Fv"

.section .text, "ax", unique, 2
.fn avoidCheck__Q29PSAutoBgm9CycleBaseFv, weak
/* 8033D0DC 0033A01C  38 60 00 00 */	li r3, 0
/* 8033D0E0 0033A020  4E 80 00 20 */	blr 
.endfn avoidCheck__Q29PSAutoBgm9CycleBaseFv

.fn getCycleType__Q29PSAutoBgm9CycleBaseFv, weak
/* 8033D0E4 0033A024  38 60 00 01 */	li r3, 1
/* 8033D0E8 0033A028  4E 80 00 20 */	blr 
.endfn getCycleType__Q29PSAutoBgm9CycleBaseFv

.fn "__ct__Q29PSAutoBgm11PrmLink<Us>Fv", weak
/* 8033D0EC 0033A02C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033D0F0 0033A030  7C 08 02 A6 */	mflr r0
/* 8033D0F4 0033A034  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033D0F8 0033A038  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033D0FC 0033A03C  7C 7F 1B 78 */	mr r31, r3
/* 8033D100 0033A040  38 9F 00 10 */	addi r4, r31, 0x10
/* 8033D104 0033A044  4B CE 96 B5 */	bl __ct__10JSUPtrLinkFPv
/* 8033D108 0033A048  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033D10C 0033A04C  7F E3 FB 78 */	mr r3, r31
/* 8033D110 0033A050  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033D114 0033A054  7C 08 03 A6 */	mtlr r0
/* 8033D118 0033A058  38 21 00 10 */	addi r1, r1, 0x10
/* 8033D11C 0033A05C  4E 80 00 20 */	blr 
.endfn "__ct__Q29PSAutoBgm11PrmLink<Us>Fv"

.fn __dt__Q29PSAutoBgm7AutoBgmFv, weak
/* 8033D120 0033A060  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8033D124 0033A064  7C 08 02 A6 */	mflr r0
/* 8033D128 0033A068  90 01 00 24 */	stw r0, 0x24(r1)
/* 8033D12C 0033A06C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8033D130 0033A070  7C 9F 23 78 */	mr r31, r4
/* 8033D134 0033A074  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8033D138 0033A078  7C 7E 1B 79 */	or. r30, r3, r3
/* 8033D13C 0033A07C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8033D140 0033A080  41 82 01 84 */	beq .L_8033D2C4
/* 8033D144 0033A084  3C 60 80 4E */	lis r3, __vt__Q29PSAutoBgm7AutoBgm@ha
/* 8033D148 0033A088  38 80 00 00 */	li r4, 0
/* 8033D14C 0033A08C  38 03 AA D8 */	addi r0, r3, __vt__Q29PSAutoBgm7AutoBgm@l
/* 8033D150 0033A090  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8033D154 0033A094  80 7E 03 38 */	lwz r3, 0x338(r30)
/* 8033D158 0033A098  4B CE 65 15 */	bl free__7JKRHeapFPvP7JKRHeap
/* 8033D15C 0033A09C  34 1E 03 3C */	addic. r0, r30, 0x33c
/* 8033D160 0033A0A0  41 82 00 2C */	beq .L_8033D18C
/* 8033D164 0033A0A4  3C 80 80 4E */	lis r4, __vt__Q29PSAutoBgm10MeloArrMgr@ha
/* 8033D168 0033A0A8  34 7E 03 40 */	addic. r3, r30, 0x340
/* 8033D16C 0033A0AC  38 04 AB 40 */	addi r0, r4, __vt__Q29PSAutoBgm10MeloArrMgr@l
/* 8033D170 0033A0B0  90 1E 03 3C */	stw r0, 0x33c(r30)
/* 8033D174 0033A0B4  41 82 00 0C */	beq .L_8033D180
/* 8033D178 0033A0B8  38 80 00 00 */	li r4, 0
/* 8033D17C 0033A0BC  4B CE 96 ED */	bl __dt__10JSUPtrListFv
.L_8033D180:
/* 8033D180 0033A0C0  38 7E 03 3C */	addi r3, r30, 0x33c
/* 8033D184 0033A0C4  38 80 00 00 */	li r4, 0
/* 8033D188 0033A0C8  4B D7 D0 75 */	bl __dt__10JADHioNodeFv
.L_8033D18C:
/* 8033D18C 0033A0CC  34 1E 00 B8 */	addic. r0, r30, 0xb8
/* 8033D190 0033A0D0  41 82 01 04 */	beq .L_8033D294
/* 8033D194 0033A0D4  3C 60 80 4E */	lis r3, __vt__Q29PSAutoBgm12ConductorMgr@ha
/* 8033D198 0033A0D8  38 9E 03 10 */	addi r4, r30, 0x310
/* 8033D19C 0033A0DC  38 63 AB 4C */	addi r3, r3, __vt__Q29PSAutoBgm12ConductorMgr@l
/* 8033D1A0 0033A0E0  34 1E 00 B8 */	addic. r0, r30, 0xb8
/* 8033D1A4 0033A0E4  90 7E 00 BC */	stw r3, 0xbc(r30)
/* 8033D1A8 0033A0E8  38 03 00 30 */	addi r0, r3, 0x30
/* 8033D1AC 0033A0EC  80 7E 00 B8 */	lwz r3, 0xb8(r30)
/* 8033D1B0 0033A0F0  90 03 00 00 */	stw r0, 0(r3)
/* 8033D1B4 0033A0F4  80 7E 00 B8 */	lwz r3, 0xb8(r30)
/* 8033D1B8 0033A0F8  7C 03 20 50 */	subf r0, r3, r4
/* 8033D1BC 0033A0FC  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8033D1C0 0033A100  41 82 00 C8 */	beq .L_8033D288
/* 8033D1C4 0033A104  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>"@ha
/* 8033D1C8 0033A108  34 1E 00 B8 */	addic. r0, r30, 0xb8
/* 8033D1CC 0033A10C  38 63 AB 8C */	addi r3, r3, "__vt__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>"@l
/* 8033D1D0 0033A110  90 7E 00 BC */	stw r3, 0xbc(r30)
/* 8033D1D4 0033A114  38 03 00 2C */	addi r0, r3, 0x2c
/* 8033D1D8 0033A118  80 7E 00 B8 */	lwz r3, 0xb8(r30)
/* 8033D1DC 0033A11C  90 03 00 00 */	stw r0, 0(r3)
/* 8033D1E0 0033A120  80 7E 00 B8 */	lwz r3, 0xb8(r30)
/* 8033D1E4 0033A124  7C 03 20 50 */	subf r0, r3, r4
/* 8033D1E8 0033A128  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8033D1EC 0033A12C  41 82 00 9C */	beq .L_8033D288
/* 8033D1F0 0033A130  3C 60 80 4A */	lis r3, __vt__Q210JADUtility11DataMgrNode@ha
/* 8033D1F4 0033A134  38 1E 03 08 */	addi r0, r30, 0x308
/* 8033D1F8 0033A138  38 63 67 88 */	addi r3, r3, __vt__Q210JADUtility11DataMgrNode@l
/* 8033D1FC 0033A13C  37 BE 02 CC */	addic. r29, r30, 0x2cc
/* 8033D200 0033A140  90 7E 00 BC */	stw r3, 0xbc(r30)
/* 8033D204 0033A144  38 83 00 2C */	addi r4, r3, 0x2c
/* 8033D208 0033A148  80 7E 00 B8 */	lwz r3, 0xb8(r30)
/* 8033D20C 0033A14C  90 83 00 00 */	stw r4, 0(r3)
/* 8033D210 0033A150  80 7E 00 B8 */	lwz r3, 0xb8(r30)
/* 8033D214 0033A154  7C 03 00 50 */	subf r0, r3, r0
/* 8033D218 0033A158  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8033D21C 0033A15C  41 82 00 60 */	beq .L_8033D27C
/* 8033D220 0033A160  3C 60 80 4A */	lis r3, __vt__Q210JADUtility6StrPrm@ha
/* 8033D224 0033A164  28 1D 00 00 */	cmplwi r29, 0
/* 8033D228 0033A168  38 03 67 38 */	addi r0, r3, __vt__Q210JADUtility6StrPrm@l
/* 8033D22C 0033A16C  90 1E 02 CC */	stw r0, 0x2cc(r30)
/* 8033D230 0033A170  41 82 00 4C */	beq .L_8033D27C
/* 8033D234 0033A174  3C 60 80 4A */	lis r3, "__vt__Q210JADUtility10PrmHio<Pc>"@ha
/* 8033D238 0033A178  38 03 67 4C */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Pc>"@l
/* 8033D23C 0033A17C  90 1E 02 CC */	stw r0, 0x2cc(r30)
/* 8033D240 0033A180  41 82 00 3C */	beq .L_8033D27C
/* 8033D244 0033A184  3C 60 80 4A */	lis r3, "__vt__Q210JADUtility7Prm<Pc>"@ha
/* 8033D248 0033A188  38 03 67 60 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Pc>"@l
/* 8033D24C 0033A18C  90 1E 02 CC */	stw r0, 0x2cc(r30)
/* 8033D250 0033A190  41 82 00 2C */	beq .L_8033D27C
/* 8033D254 0033A194  3C 80 80 4A */	lis r4, __vt__Q210JADUtility7PrmBase@ha
/* 8033D258 0033A198  34 7D 00 1C */	addic. r3, r29, 0x1c
/* 8033D25C 0033A19C  38 04 67 74 */	addi r0, r4, __vt__Q210JADUtility7PrmBase@l
/* 8033D260 0033A1A0  90 1E 02 CC */	stw r0, 0x2cc(r30)
/* 8033D264 0033A1A4  41 82 00 0C */	beq .L_8033D270
/* 8033D268 0033A1A8  38 80 00 00 */	li r4, 0
/* 8033D26C 0033A1AC  4B CE 95 65 */	bl __dt__10JSUPtrLinkFv
.L_8033D270:
/* 8033D270 0033A1B0  7F A3 EB 78 */	mr r3, r29
/* 8033D274 0033A1B4  38 80 00 00 */	li r4, 0
/* 8033D278 0033A1B8  4B CD FD BD */	bl __dt__11JKRDisposerFv
.L_8033D27C:
/* 8033D27C 0033A1BC  38 7E 00 B8 */	addi r3, r30, 0xb8
/* 8033D280 0033A1C0  38 80 00 00 */	li r4, 0
/* 8033D284 0033A1C4  4B D7 D6 31 */	bl __dt__Q210JADUtility15DataLoadMgrNodeFv
.L_8033D288:
/* 8033D288 0033A1C8  38 7E 03 10 */	addi r3, r30, 0x310
/* 8033D28C 0033A1CC  38 80 00 00 */	li r4, 0
/* 8033D290 0033A1D0  4B D7 D5 AD */	bl __dt__Q210JADUtility11DataMgrBaseFv
.L_8033D294:
/* 8033D294 0033A1D4  28 1E 00 00 */	cmplwi r30, 0
/* 8033D298 0033A1D8  41 82 00 1C */	beq .L_8033D2B4
/* 8033D29C 0033A1DC  3C 80 80 4E */	lis r4, __vt__Q28PSSystem11DirectedBgm@ha
/* 8033D2A0 0033A1E0  7F C3 F3 78 */	mr r3, r30
/* 8033D2A4 0033A1E4  38 04 A5 5C */	addi r0, r4, __vt__Q28PSSystem11DirectedBgm@l
/* 8033D2A8 0033A1E8  38 80 00 00 */	li r4, 0
/* 8033D2AC 0033A1EC  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8033D2B0 0033A1F0  4B FF 4E A9 */	bl __dt__Q28PSSystem6BgmSeqFv
.L_8033D2B4:
/* 8033D2B4 0033A1F4  7F E0 07 35 */	extsh. r0, r31
/* 8033D2B8 0033A1F8  40 81 00 0C */	ble .L_8033D2C4
/* 8033D2BC 0033A1FC  7F C3 F3 78 */	mr r3, r30
/* 8033D2C0 0033A200  4B CE 6D F5 */	bl __dl__FPv
.L_8033D2C4:
/* 8033D2C4 0033A204  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8033D2C8 0033A208  7F C3 F3 78 */	mr r3, r30
/* 8033D2CC 0033A20C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8033D2D0 0033A210  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8033D2D4 0033A214  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8033D2D8 0033A218  7C 08 03 A6 */	mtlr r0
/* 8033D2DC 0033A21C  38 21 00 20 */	addi r1, r1, 0x20
/* 8033D2E0 0033A220  4E 80 00 20 */	blr 
.endfn __dt__Q29PSAutoBgm7AutoBgmFv

.fn getCastType__Q29PSAutoBgm7AutoBgmFv, weak
/* 8033D2E4 0033A224  38 60 00 03 */	li r3, 3
/* 8033D2E8 0033A228  4E 80 00 20 */	blr 
.endfn getCastType__Q29PSAutoBgm7AutoBgmFv

.fn newSeqTrackRoot__Q29PSAutoBgm7AutoBgmFv, weak
/* 8033D2EC 0033A22C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033D2F0 0033A230  7C 08 02 A6 */	mflr r0
/* 8033D2F4 0033A234  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033D2F8 0033A238  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033D2FC 0033A23C  7C 7F 1B 78 */	mr r31, r3
/* 8033D300 0033A240  38 60 02 C8 */	li r3, 0x2c8
/* 8033D304 0033A244  93 C1 00 08 */	stw r30, 8(r1)
/* 8033D308 0033A248  4B CE 6B 9D */	bl __nw__FUl
/* 8033D30C 0033A24C  7C 60 1B 79 */	or. r0, r3, r3
/* 8033D310 0033A250  41 82 00 48 */	beq .L_8033D358
/* 8033D314 0033A254  7C 1E 03 78 */	mr r30, r0
/* 8033D318 0033A258  48 00 4F F5 */	bl __ct__Q28PSSystem12SeqTrackRootFv
/* 8033D31C 0033A25C  3C 80 80 4E */	lis r4, __vt__Q29PSAutoBgm19AutoBgmSeqTrackRoot@ha
/* 8033D320 0033A260  38 7F 00 B8 */	addi r3, r31, 0xb8
/* 8033D324 0033A264  38 84 AB 24 */	addi r4, r4, __vt__Q29PSAutoBgm19AutoBgmSeqTrackRoot@l
/* 8033D328 0033A268  34 1F 00 B8 */	addic. r0, r31, 0xb8
/* 8033D32C 0033A26C  90 9E 00 00 */	stw r4, 0(r30)
/* 8033D330 0033A270  90 7E 02 C4 */	stw r3, 0x2c4(r30)
/* 8033D334 0033A274  40 82 00 20 */	bne .L_8033D354
/* 8033D338 0033A278  3C 60 80 49 */	lis r3, lbl_8048FED4@ha
/* 8033D33C 0033A27C  3C A0 80 49 */	lis r5, lbl_8048FE70@ha
/* 8033D340 0033A280  38 63 FE D4 */	addi r3, r3, lbl_8048FED4@l
/* 8033D344 0033A284  38 80 02 F3 */	li r4, 0x2f3
/* 8033D348 0033A288  38 A5 FE 70 */	addi r5, r5, lbl_8048FE70@l
/* 8033D34C 0033A28C  4C C6 31 82 */	crclr 6
/* 8033D350 0033A290  4B CE D2 F1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8033D354:
/* 8033D354 0033A294  7F C0 F3 78 */	mr r0, r30
.L_8033D358:
/* 8033D358 0033A298  7C 03 03 78 */	mr r3, r0
/* 8033D35C 0033A29C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033D360 0033A2A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033D364 0033A2A4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8033D368 0033A2A8  7C 08 03 A6 */	mtlr r0
/* 8033D36C 0033A2AC  38 21 00 10 */	addi r1, r1, 0x10
/* 8033D370 0033A2B0  4E 80 00 20 */	blr 
.endfn newSeqTrackRoot__Q29PSAutoBgm7AutoBgmFv

.fn beatUpdate__Q29PSAutoBgm19AutoBgmSeqTrackRootFv, weak
/* 8033D374 0033A2B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033D378 0033A2B8  7C 08 02 A6 */	mflr r0
/* 8033D37C 0033A2BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033D380 0033A2C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033D384 0033A2C4  7C 7F 1B 78 */	mr r31, r3
/* 8033D388 0033A2C8  93 C1 00 08 */	stw r30, 8(r1)
/* 8033D38C 0033A2CC  48 00 55 3D */	bl beatUpdate__Q28PSSystem12SeqTrackRootFv
/* 8033D390 0033A2D0  80 7F 02 C4 */	lwz r3, 0x2c4(r31)
/* 8033D394 0033A2D4  83 C3 02 50 */	lwz r30, 0x250(r3)
/* 8033D398 0033A2D8  28 1E 00 00 */	cmplwi r30, 0
/* 8033D39C 0033A2DC  40 82 00 20 */	bne .L_8033D3BC
/* 8033D3A0 0033A2E0  3C 60 80 49 */	lis r3, lbl_8048FED4@ha
/* 8033D3A4 0033A2E4  3C A0 80 49 */	lis r5, lbl_8048FE70@ha
/* 8033D3A8 0033A2E8  38 63 FE D4 */	addi r3, r3, lbl_8048FED4@l
/* 8033D3AC 0033A2EC  38 80 02 F8 */	li r4, 0x2f8
/* 8033D3B0 0033A2F0  38 A5 FE 70 */	addi r5, r5, lbl_8048FE70@l
/* 8033D3B4 0033A2F4  4C C6 31 82 */	crclr 6
/* 8033D3B8 0033A2F8  4B CE D2 89 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8033D3BC:
/* 8033D3BC 0033A2FC  88 1F 00 3C */	lbz r0, 0x3c(r31)
/* 8033D3C0 0033A300  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8033D3C4 0033A304  41 82 00 64 */	beq .L_8033D428
/* 8033D3C8 0033A308  80 7E 00 B0 */	lwz r3, 0xb0(r30)
/* 8033D3CC 0033A30C  3B E0 00 00 */	li r31, 0
/* 8033D3D0 0033A310  38 03 00 01 */	addi r0, r3, 1
/* 8033D3D4 0033A314  90 1E 00 B0 */	stw r0, 0xb0(r30)
/* 8033D3D8 0033A318  48 00 00 30 */	b .L_8033D408
.L_8033D3DC:
/* 8033D3DC 0033A31C  7F C3 F3 78 */	mr r3, r30
/* 8033D3E0 0033A320  7F E4 FB 78 */	mr r4, r31
/* 8033D3E4 0033A324  4B FF FB 19 */	bl "getChild__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>FUc"
/* 8033D3E8 0033A328  88 83 00 99 */	lbz r4, 0x99(r3)
/* 8033D3EC 0033A32C  28 04 00 FF */	cmplwi r4, 0xff
/* 8033D3F0 0033A330  41 82 00 14 */	beq .L_8033D404
/* 8033D3F4 0033A334  4B FF F9 29 */	bl "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
/* 8033D3F8 0033A338  A0 83 02 A4 */	lhz r4, 0x2a4(r3)
/* 8033D3FC 0033A33C  38 04 00 01 */	addi r0, r4, 1
/* 8033D400 0033A340  B0 03 02 A4 */	sth r0, 0x2a4(r3)
.L_8033D404:
/* 8033D404 0033A344  3B FF 00 01 */	addi r31, r31, 1
.L_8033D408:
/* 8033D408 0033A348  7F C3 F3 78 */	mr r3, r30
/* 8033D40C 0033A34C  4B FF F7 09 */	bl "getChildNum__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>Fv"
/* 8033D410 0033A350  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8033D414 0033A354  57 E0 06 3E */	clrlwi r0, r31, 0x18
/* 8033D418 0033A358  7C 00 18 40 */	cmplw r0, r3
/* 8033D41C 0033A35C  41 80 FF C0 */	blt .L_8033D3DC
/* 8033D420 0033A360  88 7E 01 14 */	lbz r3, 0x114(r30)
/* 8033D424 0033A364  48 00 00 08 */	b .L_8033D42C
.L_8033D428:
/* 8033D428 0033A368  88 7E 01 14 */	lbz r3, 0x114(r30)
.L_8033D42C:
/* 8033D42C 0033A36C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033D430 0033A370  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033D434 0033A374  83 C1 00 08 */	lwz r30, 8(r1)
/* 8033D438 0033A378  7C 08 03 A6 */	mtlr r0
/* 8033D43C 0033A37C  38 21 00 10 */	addi r1, r1, 0x10
/* 8033D440 0033A380  4E 80 00 20 */	blr 
.endfn beatUpdate__Q29PSAutoBgm19AutoBgmSeqTrackRootFv

.fn getSaveTempHeap__Q29PSAutoBgm12ConductorMgrFv, weak
/* 8033D444 0033A384  80 6D 98 68 */	lwz r3, sHeap__Q29PSAutoBgm12ConductorMgr@sda21(r13)
/* 8033D448 0033A388  4E 80 00 20 */	blr 
.endfn getSaveTempHeap__Q29PSAutoBgm12ConductorMgrFv

.fn getObjHeap__Q29PSAutoBgm12ConductorMgrFv, weak
/* 8033D44C 0033A38C  80 6D 98 68 */	lwz r3, sHeap__Q29PSAutoBgm12ConductorMgr@sda21(r13)
/* 8033D450 0033A390  4E 80 00 20 */	blr 
.endfn getObjHeap__Q29PSAutoBgm12ConductorMgrFv

.fn getDataHeap__Q29PSAutoBgm12ConductorMgrFv, weak
/* 8033D454 0033A394  80 6D 98 68 */	lwz r3, sHeap__Q29PSAutoBgm12ConductorMgr@sda21(r13)
/* 8033D458 0033A398  4E 80 00 20 */	blr 
.endfn getDataHeap__Q29PSAutoBgm12ConductorMgrFv

.fn getCycleType__Q29PSAutoBgm7OnCycleFv, weak
/* 8033D45C 0033A39C  38 60 00 00 */	li r3, 0
/* 8033D460 0033A3A0  4E 80 00 20 */	blr 
.endfn getCycleType__Q29PSAutoBgm7OnCycleFv

.fn getEraseLink__Q29PSAutoBgm9ConductorFv, weak
/* 8033D464 0033A3A4  38 63 00 98 */	addi r3, r3, 0x98
/* 8033D468 0033A3A8  4E 80 00 20 */	blr 
.endfn getEraseLink__Q29PSAutoBgm9ConductorFv

.section .text, "ax", unique, 3
.fn onBeatTop__Q28PSSystem12SeqTrackRootFv, weak
/* 8033D46C 0033A3AC  4E 80 00 20 */	blr 
.endfn onBeatTop__Q28PSSystem12SeqTrackRootFv

.section .text, "ax", unique, 4
.fn "initInstance__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>Fv", weak
/* 8033D470 0033A3B0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8033D474 0033A3B4  7C 08 02 A6 */	mflr r0
/* 8033D478 0033A3B8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8033D47C 0033A3BC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8033D480 0033A3C0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8033D484 0033A3C4  7C 7E 1B 78 */	mr r30, r3
/* 8033D488 0033A3C8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8033D48C 0033A3CC  93 81 00 10 */	stw r28, 0x10(r1)
/* 8033D490 0033A3D0  80 03 02 50 */	lwz r0, 0x250(r3)
/* 8033D494 0033A3D4  28 00 00 00 */	cmplwi r0, 0
/* 8033D498 0033A3D8  40 82 01 58 */	bne .L_8033D5F0
/* 8033D49C 0033A3DC  81 83 00 04 */	lwz r12, 4(r3)
/* 8033D4A0 0033A3E0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8033D4A4 0033A3E4  7D 89 03 A6 */	mtctr r12
/* 8033D4A8 0033A3E8  4E 80 04 21 */	bctrl 
/* 8033D4AC 0033A3EC  7C 64 1B 78 */	mr r4, r3
/* 8033D4B0 0033A3F0  38 60 01 1C */	li r3, 0x11c
/* 8033D4B4 0033A3F4  38 A0 00 00 */	li r5, 0
/* 8033D4B8 0033A3F8  4B CE 6A 89 */	bl __nw__FUlP7JKRHeapi
/* 8033D4BC 0033A3FC  7C 7F 1B 79 */	or. r31, r3, r3
/* 8033D4C0 0033A400  41 82 01 24 */	beq .L_8033D5E4
/* 8033D4C4 0033A404  83 BE 02 54 */	lwz r29, 0x254(r30)
/* 8033D4C8 0033A408  4B FF FB 85 */	bl "__ct__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>Fv"
/* 8033D4CC 0033A40C  3C 60 80 4E */	lis r3, __vt__Q29PSAutoBgm9Conductor@ha
/* 8033D4D0 0033A410  7F E4 FB 78 */	mr r4, r31
/* 8033D4D4 0033A414  38 03 AC C8 */	addi r0, r3, __vt__Q29PSAutoBgm9Conductor@l
/* 8033D4D8 0033A418  38 7F 00 98 */	addi r3, r31, 0x98
/* 8033D4DC 0033A41C  90 1F 00 00 */	stw r0, 0(r31)
/* 8033D4E0 0033A420  4B CE 92 D9 */	bl __ct__10JSUPtrLinkFPv
/* 8033D4E4 0033A424  38 00 00 00 */	li r0, 0
/* 8033D4E8 0033A428  3B 9F 00 B8 */	addi r28, r31, 0xb8
/* 8033D4EC 0033A42C  90 1F 00 A8 */	stw r0, 0xa8(r31)
/* 8033D4F0 0033A430  7F 83 E3 78 */	mr r3, r28
/* 8033D4F4 0033A434  90 1F 00 AC */	stw r0, 0xac(r31)
/* 8033D4F8 0033A438  90 1F 00 B0 */	stw r0, 0xb0(r31)
/* 8033D4FC 0033A43C  93 BF 00 B4 */	stw r29, 0xb4(r31)
/* 8033D500 0033A440  4B CD FA CD */	bl __ct__11JKRDisposerFv
/* 8033D504 0033A444  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 8033D508 0033A448  38 00 00 00 */	li r0, 0
/* 8033D50C 0033A44C  38 63 67 74 */	addi r3, r3, __vt__Q210JADUtility7PrmBase@l
/* 8033D510 0033A450  7F 84 E3 78 */	mr r4, r28
/* 8033D514 0033A454  90 7C 00 00 */	stw r3, 0(r28)
/* 8033D518 0033A458  38 7C 00 1C */	addi r3, r28, 0x1c
/* 8033D51C 0033A45C  98 1C 00 18 */	stb r0, 0x18(r28)
/* 8033D520 0033A460  4B CE 92 99 */	bl __ct__10JSUPtrLinkFPv
/* 8033D524 0033A464  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 8033D528 0033A468  3B BF 00 E8 */	addi r29, r31, 0xe8
/* 8033D52C 0033A46C  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 8033D530 0033A470  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 8033D534 0033A474  90 1C 00 00 */	stw r0, 0(r28)
/* 8033D538 0033A478  38 03 AD 40 */	addi r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 8033D53C 0033A47C  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
/* 8033D540 0033A480  90 1C 00 00 */	stw r0, 0(r28)
/* 8033D544 0033A484  38 03 AD 2C */	addi r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
/* 8033D548 0033A488  90 1C 00 00 */	stw r0, 0(r28)
/* 8033D54C 0033A48C  7F A3 EB 78 */	mr r3, r29
/* 8033D550 0033A490  4B CD FA 7D */	bl __ct__11JKRDisposerFv
/* 8033D554 0033A494  3C 60 80 4A */	lis r3, __vt__Q210JADUtility7PrmBase@ha
/* 8033D558 0033A498  38 00 00 00 */	li r0, 0
/* 8033D55C 0033A49C  38 63 67 74 */	addi r3, r3, __vt__Q210JADUtility7PrmBase@l
/* 8033D560 0033A4A0  7F A4 EB 78 */	mr r4, r29
/* 8033D564 0033A4A4  90 7D 00 00 */	stw r3, 0(r29)
/* 8033D568 0033A4A8  38 7D 00 1C */	addi r3, r29, 0x1c
/* 8033D56C 0033A4AC  98 1D 00 18 */	stb r0, 0x18(r29)
/* 8033D570 0033A4B0  4B CE 92 49 */	bl __ct__10JSUPtrLinkFPv
/* 8033D574 0033A4B4  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
/* 8033D578 0033A4B8  3C 80 80 4E */	lis r4, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
/* 8033D57C 0033A4BC  38 03 AD 54 */	addi r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
/* 8033D580 0033A4C0  90 1D 00 00 */	stw r0, 0(r29)
/* 8033D584 0033A4C4  38 04 AD 40 */	addi r0, r4, "__vt__Q210JADUtility10PrmHio<Uc>"@l
/* 8033D588 0033A4C8  3C 60 80 4E */	lis r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@ha
/* 8033D58C 0033A4CC  38 9F 01 04 */	addi r4, r31, 0x104
/* 8033D590 0033A4D0  90 1D 00 00 */	stw r0, 0(r29)
/* 8033D594 0033A4D4  38 A3 AD 18 */	addi r5, r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@l
/* 8033D598 0033A4D8  38 00 00 64 */	li r0, 0x64
/* 8033D59C 0033A4DC  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8033D5A0 0033A4E0  90 BD 00 00 */	stw r5, 0(r29)
/* 8033D5A4 0033A4E4  98 1F 01 18 */	stb r0, 0x118(r31)
/* 8033D5A8 0033A4E8  4B CE 93 3D */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8033D5AC 0033A4EC  38 9F 00 D4 */	addi r4, r31, 0xd4
/* 8033D5B0 0033A4F0  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8033D5B4 0033A4F4  4B CE 93 31 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8033D5B8 0033A4F8  38 9F 00 84 */	addi r4, r31, 0x84
/* 8033D5BC 0033A4FC  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8033D5C0 0033A500  4B CE 93 25 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8033D5C4 0033A504  38 00 00 11 */	li r0, 0x11
/* 8033D5C8 0033A508  3C 60 80 34 */	lis r3, removeCallback__Q29PSAutoBgm9ConductorFUcPv@ha
/* 8033D5CC 0033A50C  98 1F 00 19 */	stb r0, 0x19(r31)
/* 8033D5D0 0033A510  38 03 92 B4 */	addi r0, r3, removeCallback__Q29PSAutoBgm9ConductorFUcPv@l
/* 8033D5D4 0033A514  88 7F 00 E4 */	lbz r3, 0xe4(r31)
/* 8033D5D8 0033A518  98 7F 01 18 */	stb r3, 0x118(r31)
/* 8033D5DC 0033A51C  90 1F 00 5C */	stw r0, 0x5c(r31)
/* 8033D5E0 0033A520  93 FF 00 60 */	stw r31, 0x60(r31)
.L_8033D5E4:
/* 8033D5E4 0033A524  93 FE 02 50 */	stw r31, 0x250(r30)
/* 8033D5E8 0033A528  38 60 00 01 */	li r3, 1
/* 8033D5EC 0033A52C  48 00 00 08 */	b .L_8033D5F4
.L_8033D5F0:
/* 8033D5F0 0033A530  38 60 00 00 */	li r3, 0
.L_8033D5F4:
/* 8033D5F4 0033A534  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8033D5F8 0033A538  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8033D5FC 0033A53C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8033D600 0033A540  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8033D604 0033A544  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8033D608 0033A548  7C 08 03 A6 */	mtlr r0
/* 8033D60C 0033A54C  38 21 00 20 */	addi r1, r1, 0x20
/* 8033D610 0033A550  4E 80 00 20 */	blr 
.endfn "initInstance__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>Fv"

.fn "initInstance__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>FPvl", weak
/* 8033D614 0033A554  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8033D618 0033A558  7C 08 02 A6 */	mflr r0
/* 8033D61C 0033A55C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8033D620 0033A560  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8033D624 0033A564  7C BF 2B 78 */	mr r31, r5
/* 8033D628 0033A568  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8033D62C 0033A56C  7C 9E 23 78 */	mr r30, r4
/* 8033D630 0033A570  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8033D634 0033A574  7C 7D 1B 78 */	mr r29, r3
/* 8033D638 0033A578  81 83 00 04 */	lwz r12, 4(r3)
/* 8033D63C 0033A57C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8033D640 0033A580  7D 89 03 A6 */	mtctr r12
/* 8033D644 0033A584  4E 80 04 21 */	bctrl 
/* 8033D648 0033A588  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8033D64C 0033A58C  41 82 00 90 */	beq .L_8033D6DC
/* 8033D650 0033A590  3C 80 80 4A */	lis r4, __vt__10JSUIosBase@ha
/* 8033D654 0033A594  3C A0 80 4A */	lis r5, __vt__20JSURandomInputStream@ha
/* 8033D658 0033A598  38 04 00 30 */	addi r0, r4, __vt__10JSUIosBase@l
/* 8033D65C 0033A59C  38 C0 00 00 */	li r6, 0
/* 8033D660 0033A5A0  3C 80 80 4A */	lis r4, __vt__14JSUInputStream@ha
/* 8033D664 0033A5A4  90 01 00 08 */	stw r0, 8(r1)
/* 8033D668 0033A5A8  38 04 00 64 */	addi r0, r4, __vt__14JSUInputStream@l
/* 8033D66C 0033A5AC  38 A5 00 40 */	addi r5, r5, __vt__20JSURandomInputStream@l
/* 8033D670 0033A5B0  90 01 00 08 */	stw r0, 8(r1)
/* 8033D674 0033A5B4  3C 80 80 4A */	lis r4, __vt__20JSUMemoryInputStream@ha
/* 8033D678 0033A5B8  38 04 00 80 */	addi r0, r4, __vt__20JSUMemoryInputStream@l
/* 8033D67C 0033A5BC  38 61 00 08 */	addi r3, r1, 8
/* 8033D680 0033A5C0  90 A1 00 08 */	stw r5, 8(r1)
/* 8033D684 0033A5C4  7F C4 F3 78 */	mr r4, r30
/* 8033D688 0033A5C8  7F E5 FB 78 */	mr r5, r31
/* 8033D68C 0033A5CC  98 C1 00 0C */	stb r6, 0xc(r1)
/* 8033D690 0033A5D0  90 01 00 08 */	stw r0, 8(r1)
/* 8033D694 0033A5D4  4B CE 96 C9 */	bl setBuffer__20JSUMemoryInputStreamFPCvl
/* 8033D698 0033A5D8  80 7D 02 50 */	lwz r3, 0x250(r29)
/* 8033D69C 0033A5DC  38 81 00 08 */	addi r4, r1, 8
/* 8033D6A0 0033A5E0  81 83 00 00 */	lwz r12, 0(r3)
/* 8033D6A4 0033A5E4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8033D6A8 0033A5E8  7D 89 03 A6 */	mtctr r12
/* 8033D6AC 0033A5EC  4E 80 04 21 */	bctrl 
/* 8033D6B0 0033A5F0  3C 60 80 4A */	lis r3, __vt__20JSUMemoryInputStream@ha
/* 8033D6B4 0033A5F4  3C 80 80 4A */	lis r4, __vt__20JSURandomInputStream@ha
/* 8033D6B8 0033A5F8  38 03 00 80 */	addi r0, r3, __vt__20JSUMemoryInputStream@l
/* 8033D6BC 0033A5FC  38 61 00 08 */	addi r3, r1, 8
/* 8033D6C0 0033A600  90 01 00 08 */	stw r0, 8(r1)
/* 8033D6C4 0033A604  38 04 00 40 */	addi r0, r4, __vt__20JSURandomInputStream@l
/* 8033D6C8 0033A608  38 80 00 00 */	li r4, 0
/* 8033D6CC 0033A60C  90 01 00 08 */	stw r0, 8(r1)
/* 8033D6D0 0033A610  4B CE 8C A9 */	bl __dt__14JSUInputStreamFv
/* 8033D6D4 0033A614  38 60 00 01 */	li r3, 1
/* 8033D6D8 0033A618  48 00 00 08 */	b .L_8033D6E0
.L_8033D6DC:
/* 8033D6DC 0033A61C  38 60 00 00 */	li r3, 0
.L_8033D6E0:
/* 8033D6E0 0033A620  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8033D6E4 0033A624  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8033D6E8 0033A628  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8033D6EC 0033A62C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8033D6F0 0033A630  7C 08 03 A6 */	mtlr r0
/* 8033D6F4 0033A634  38 21 00 30 */	addi r1, r1, 0x30
/* 8033D6F8 0033A638  4E 80 00 20 */	blr 
.endfn "initInstance__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>FPvl"

.fn "@600@28@__dt__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>Fv", weak
/* 8033D6FC 0033A63C  39 60 00 1C */	li r11, 0x1c
/* 8033D700 0033A640  7D 63 58 2E */	lwzx r11, r3, r11
/* 8033D704 0033A644  7C 63 5A 14 */	add r3, r3, r11
/* 8033D708 0033A648  38 63 FD A8 */	addi r3, r3, -600
/* 8033D70C 0033A64C  4B FF E8 20 */	b "__dt__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>Fv"
.endfn "@600@28@__dt__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>Fv"

.fn "@600@28@init__Q210JADUtility11DataMgrNodeFv", weak
/* 8033D710 0033A650  39 60 00 1C */	li r11, 0x1c
/* 8033D714 0033A654  7D 63 58 2E */	lwzx r11, r3, r11
/* 8033D718 0033A658  7C 63 5A 14 */	add r3, r3, r11
/* 8033D71C 0033A65C  38 63 FD A8 */	addi r3, r3, -600
/* 8033D720 0033A660  4B D7 DA 78 */	b init__Q210JADUtility11DataMgrNodeFv
.endfn "@600@28@init__Q210JADUtility11DataMgrNodeFv"

.fn "@600@28@__dt__Q29PSAutoBgm12ConductorMgrFv", weak
/* 8033D724 0033A664  39 60 00 1C */	li r11, 0x1c
/* 8033D728 0033A668  7D 63 58 2E */	lwzx r11, r3, r11
/* 8033D72C 0033A66C  7C 63 5A 14 */	add r3, r3, r11
/* 8033D730 0033A670  38 63 FD A8 */	addi r3, r3, -600
/* 8033D734 0033A674  4B FF E6 A4 */	b __dt__Q29PSAutoBgm12ConductorMgrFv
.endfn "@600@28@__dt__Q29PSAutoBgm12ConductorMgrFv"
