#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048FE60
    lbl_8048FE60:
        .4byte 0x50534175
        .4byte 0x746F4267
        .4byte 0x6D2E6370
        .4byte 0x70000000
    .global lbl_8048FE70
    lbl_8048FE70:
        .asciz "P2Assert"
        .skip 3
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
        .4byte 0x00000000
    .global lbl_8048FED4
    lbl_8048FED4:
        .4byte 0x50534175
        .4byte 0x746F4267
        .4byte 0x6D2E6800
        .4byte 0x6E6F7420
        .4byte 0x66696E64
        .4byte 0x28257329
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q29PSAutoBgm7AutoBgm
    __vt__Q29PSAutoBgm7AutoBgm:
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
        .4byte
   newSeqTrackChild__Q28PSSystem11DirectedBgmFUcRQ28PSSystem12SeqTrackRoot
    .global __vt__Q29PSAutoBgm19AutoBgmSeqTrackRoot
    __vt__Q29PSAutoBgm19AutoBgmSeqTrackRoot:
        .4byte 0
        .4byte 0
        .4byte update__Q28PSSystem12SeqTrackRootFv
        .4byte init__Q28PSSystem12SeqTrackRootFP8JASTrack
        .4byte onStopSeq__Q28PSSystem12SeqTrackRootFv
        .4byte beatUpdate__Q29PSAutoBgm19AutoBgmSeqTrackRootFv
        .4byte onBeatTop__Q28PSSystem12SeqTrackRootFv
    .global __vt__Q29PSAutoBgm10MeloArrMgr
    __vt__Q29PSAutoBgm10MeloArrMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q29PSAutoBgm10MeloArrMgrFv
    .global __vt__Q29PSAutoBgm12ConductorMgr
    __vt__Q29PSAutoBgm12ConductorMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q29PSAutoBgm12ConductorMgrFv
        .4byte isTempBuffaMode__Q210JADUtility15DataLoadMgrNodeFv
        .4byte init__Q210JADUtility11DataMgrNodeFv
        .4byte getObjHeap__Q29PSAutoBgm12ConductorMgrFv
        .4byte getDataHeap__Q29PSAutoBgm12ConductorMgrFv
        .4byte
   "initInstance__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>FPvl"
        .4byte
   "initInstance__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>Fv"
        .4byte getPath__Q210JADUtility11DataMgrNodeFv
        .4byte setPath__Q210JADUtility11DataMgrNodeFPc
        .4byte getSaveTempHeap__Q29PSAutoBgm12ConductorMgrFv
        .4byte 0
        .4byte 0
        .4byte "@600@28@__dt__Q29PSAutoBgm12ConductorMgrFv"
        .4byte "@600@28@init__Q210JADUtility11DataMgrNodeFv"
    .global
   "__vt__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>"
    "__vt__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>":
        .4byte 0
        .4byte 0
        .4byte
   "__dt__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>Fv"
        .4byte isTempBuffaMode__Q210JADUtility15DataLoadMgrNodeFv
        .4byte init__Q210JADUtility11DataMgrNodeFv
        .4byte 0
        .4byte 0
        .4byte
   "initInstance__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>FPvl"
        .4byte
   "initInstance__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>Fv"
        .4byte getPath__Q210JADUtility11DataMgrNodeFv
        .4byte setPath__Q210JADUtility11DataMgrNodeFPc
        .4byte 0
        .4byte 0
        .4byte
   "@600@28@__dt__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>Fv"
        .4byte "@600@28@init__Q210JADUtility11DataMgrNodeFv"
    .global __vt__Q29PSAutoBgm8OffCycle
    __vt__Q29PSAutoBgm8OffCycle:
        .4byte 0
        .4byte 0
        .4byte play__Q29PSAutoBgm9CycleBaseFP8JASTrack
        .4byte getCycleType__Q29PSAutoBgm9CycleBaseFv
        .4byte avoidCheck__Q29PSAutoBgm9CycleBaseFv
    .global __vt__Q29PSAutoBgm7OnCycle
    __vt__Q29PSAutoBgm7OnCycle:
        .4byte 0
        .4byte 0
        .4byte play__Q29PSAutoBgm7OnCycleFP8JASTrack
        .4byte getCycleType__Q29PSAutoBgm7OnCycleFv
        .4byte avoidCheck__Q29PSAutoBgm7OnCycleFv
    .global __vt__Q29PSAutoBgm9CycleBase
    __vt__Q29PSAutoBgm9CycleBase:
        .4byte 0
        .4byte 0
        .4byte play__Q29PSAutoBgm9CycleBaseFP8JASTrack
        .4byte getCycleType__Q29PSAutoBgm9CycleBaseFv
        .4byte avoidCheck__Q29PSAutoBgm9CycleBaseFv
    .global __vt__Q29PSAutoBgm6Module
    __vt__Q29PSAutoBgm6Module:
        .4byte 0
        .4byte 0
        .4byte __dt__Q29PSAutoBgm6ModuleFv
        .4byte appendAfter__Q210JADUtility10PrmSetBaseFv
        .4byte load__Q210JADUtility10PrmSetBaseFR20JSUMemoryInputStream
        .4byte
   afterRemovingChildButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
        .4byte
   afterRemovingThisButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
        .4byte getEraseLink__Q210JADUtility10PrmSetBaseFv
        .4byte afterGetFromFree__Q29PSAutoBgm6ModuleFv
    .global __vt__Q29PSAutoBgm5Track
    __vt__Q29PSAutoBgm5Track:
        .4byte 0
        .4byte 0
        .4byte __dt__Q29PSAutoBgm5TrackFv
        .4byte appendAfter__Q210JADUtility10PrmSetBaseFv
        .4byte
   "load__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FR20JSUMemoryInputStream"
        .4byte
   afterRemovingChildButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
        .4byte
   afterRemovingThisButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
        .4byte getEraseLink__Q210JADUtility10PrmSetBaseFv
        .4byte afterGetFromFree__Q29PSAutoBgm5TrackFv
        .4byte "getPrmObjHeap__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>Fv"
    .global "__vt__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>"
    "__vt__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>":
        .4byte 0
        .4byte 0
        .4byte "__dt__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>Fv"
        .4byte appendAfter__Q210JADUtility10PrmSetBaseFv
        .4byte
   "load__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FR20JSUMemoryInputStream"
        .4byte
   afterRemovingChildButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
        .4byte
   afterRemovingThisButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
        .4byte getEraseLink__Q210JADUtility10PrmSetBaseFv
        .4byte afterGetFromFree__Q210JADUtility10PrmSetBaseFv
        .4byte "getPrmObjHeap__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>Fv"
    .global __vt__Q210JADUtility10StrEditBox
    __vt__Q210JADUtility10StrEditBox:
        .4byte 0
        .4byte 0
        .4byte __dt__Q210JADUtility10StrEditBoxFv
        .4byte save__Q210JADUtility6StrPrmFR21JSUMemoryOutputStream
        .4byte load__Q210JADUtility6StrPrmFR20JSUMemoryInputStream
    .global "__vt__Q210JADUtility12PrmSlider<s>"
    "__vt__Q210JADUtility12PrmSlider<s>":
        .4byte 0
        .4byte 0
        .4byte "__dt__Q210JADUtility12PrmSlider<s>Fv"
        .4byte "save__Q210JADUtility6Prm<s>FR21JSUMemoryOutputStream"
        .4byte "load__Q210JADUtility6Prm<s>FR20JSUMemoryInputStream"
    .global "__vt__Q210JADUtility9PrmHio<s>"
    "__vt__Q210JADUtility9PrmHio<s>":
        .4byte 0
        .4byte 0
        .4byte "__dt__Q210JADUtility9PrmHio<s>Fv"
        .4byte "save__Q210JADUtility6Prm<s>FR21JSUMemoryOutputStream"
        .4byte "load__Q210JADUtility6Prm<s>FR20JSUMemoryInputStream"
    .global "__vt__Q210JADUtility6Prm<s>"
    "__vt__Q210JADUtility6Prm<s>":
        .4byte 0
        .4byte 0
        .4byte "__dt__Q210JADUtility6Prm<s>Fv"
        .4byte "save__Q210JADUtility6Prm<s>FR21JSUMemoryOutputStream"
        .4byte "load__Q210JADUtility6Prm<s>FR20JSUMemoryInputStream"
    .global __vt__Q29PSAutoBgm9Conductor
    __vt__Q29PSAutoBgm9Conductor:
        .4byte 0
        .4byte 0
        .4byte __dt__Q29PSAutoBgm9ConductorFv
        .4byte appendAfter__Q210JADUtility10PrmSetBaseFv
        .4byte
   "load__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>FR20JSUMemoryInputStream"
        .4byte
   afterRemovingChildButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
        .4byte
   afterRemovingThisButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
        .4byte getEraseLink__Q29PSAutoBgm9ConductorFv
        .4byte afterGetFromFree__Q210JADUtility10PrmSetBaseFv
        .4byte "getPrmObjHeap__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>Fv"
    .global "__vt__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>"
    "__vt__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>":
        .4byte 0
        .4byte 0
        .4byte "__dt__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>Fv"
        .4byte appendAfter__Q210JADUtility10PrmSetBaseFv
        .4byte
   "load__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>FR20JSUMemoryInputStream"
        .4byte
   afterRemovingChildButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
        .4byte
   afterRemovingThisButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
        .4byte getEraseLink__Q210JADUtility10PrmSetBaseFv
        .4byte afterGetFromFree__Q210JADUtility10PrmSetBaseFv
        .4byte "getPrmObjHeap__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>Fv"
    .global "__vt__Q210JADUtility18PrmRadioButton<Uc>"
    "__vt__Q210JADUtility18PrmRadioButton<Uc>":
        .4byte 0
        .4byte 0
        .4byte "__dt__Q210JADUtility18PrmRadioButton<Uc>Fv"
        .4byte "save__Q210JADUtility7Prm<Uc>FR21JSUMemoryOutputStream"
        .4byte "load__Q210JADUtility7Prm<Uc>FR20JSUMemoryInputStream"
    .global "__vt__Q210JADUtility13PrmSlider<Uc>"
    "__vt__Q210JADUtility13PrmSlider<Uc>":
        .4byte 0
        .4byte 0
        .4byte "__dt__Q210JADUtility13PrmSlider<Uc>Fv"
        .4byte "save__Q210JADUtility7Prm<Uc>FR21JSUMemoryOutputStream"
        .4byte "load__Q210JADUtility7Prm<Uc>FR20JSUMemoryInputStream"
    .global "__vt__Q210JADUtility10PrmHio<Uc>"
    "__vt__Q210JADUtility10PrmHio<Uc>":
        .4byte 0
        .4byte 0
        .4byte "__dt__Q210JADUtility10PrmHio<Uc>Fv"
        .4byte "save__Q210JADUtility7Prm<Uc>FR21JSUMemoryOutputStream"
        .4byte "load__Q210JADUtility7Prm<Uc>FR20JSUMemoryInputStream"
    .global "__vt__Q210JADUtility7Prm<Uc>"
    "__vt__Q210JADUtility7Prm<Uc>":
        .4byte 0
        .4byte 0
        .4byte "__dt__Q210JADUtility7Prm<Uc>Fv"
        .4byte "save__Q210JADUtility7Prm<Uc>FR21JSUMemoryOutputStream"
        .4byte "load__Q210JADUtility7Prm<Uc>FR20JSUMemoryInputStream"

    .section .sbss # 0x80514D80 - 0x80516360
    .global sHeap__Q29PSAutoBgm12ConductorMgr
    sHeap__Q29PSAutoBgm12ConductorMgr:
        .skip 0x4
    .global sInstance__Q29PSAutoBgm15ConductorArcMgr
    sInstance__Q29PSAutoBgm15ConductorArcMgr:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051E160
    lbl_8051E160:
        .4byte 0x00000000
    .global lbl_8051E164
    lbl_8051E164:
        .4byte 0x42FE0000
    .global lbl_8051E168
    lbl_8051E168:
        .4byte 0x00000000
    .global lbl_8051E16C
    lbl_8051E16C:
        .float 1.0
    .global lbl_8051E170
    lbl_8051E170:
        .4byte 0x43300000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80338DB4
 * Size:	0000A8
 */
void JADUtility::PrmRadioButton<unsigned char>::~PrmRadioButton()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80338E40
	lis      r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@ha
	addi     r0, r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@l
	stw      r0, 0(r30)
	beq      lbl_80338E30
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	stw      r0, 0(r30)
	beq      lbl_80338E30
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	stw      r0, 0(r30)
	beq      lbl_80338E30
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	addic.   r0, r30, 0x1c
	addi     r0, r3, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0(r30)
	beq      lbl_80338E24
	addi     r3, r30, 0x1c
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_80338E24:
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_80338E30:
	extsh.   r0, r31
	ble      lbl_80338E40
	mr       r3, r30
	bl       __dl__FPv

lbl_80338E40:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80338E5C
 * Size:	0000A8
 */
void JADUtility::PrmSlider<unsigned char>::~PrmSlider()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80338EE8
	lis      r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
	addi     r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
	stw      r0, 0(r30)
	beq      lbl_80338ED8
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	stw      r0, 0(r30)
	beq      lbl_80338ED8
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	stw      r0, 0(r30)
	beq      lbl_80338ED8
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	addic.   r0, r30, 0x1c
	addi     r0, r3, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0(r30)
	beq      lbl_80338ECC
	addi     r3, r30, 0x1c
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_80338ECC:
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_80338ED8:
	extsh.   r0, r31
	ble      lbl_80338EE8
	mr       r3, r30
	bl       __dl__FPv

lbl_80338EE8:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80338F04
 * Size:	000098
 */
void JADUtility::PrmHio<unsigned char>::~PrmHio()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80338F80
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	stw      r0, 0(r30)
	beq      lbl_80338F70
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	stw      r0, 0(r30)
	beq      lbl_80338F70
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	addic.   r0, r30, 0x1c
	addi     r0, r3, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0(r30)
	beq      lbl_80338F64
	addi     r3, r30, 0x1c
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_80338F64:
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_80338F70:
	extsh.   r0, r31
	ble      lbl_80338F80
	mr       r3, r30
	bl       __dl__FPv

lbl_80338F80:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80338F9C
 * Size:	000088
 */
void JADUtility::Prm<unsigned char>::~Prm()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80339008
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	stw      r0, 0(r30)
	beq      lbl_80338FF8
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	addic.   r0, r30, 0x1c
	addi     r0, r3, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0(r30)
	beq      lbl_80338FEC
	addi     r3, r30, 0x1c
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_80338FEC:
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_80338FF8:
	extsh.   r0, r31
	ble      lbl_80339008
	mr       r3, r30
	bl       __dl__FPv

lbl_80339008:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80339024
 * Size:	000290
 */
PSAutoBgm::Conductor::~Conductor()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80339298
	lis      r3, __vt__Q29PSAutoBgm9Conductor@ha
	addic.   r0, r30, 0xe8
	addi     r0, r3, __vt__Q29PSAutoBgm9Conductor@l
	stw      r0, 0(r30)
	beq      lbl_803390BC
	lis      r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@ha
	addic.   r0, r30, 0xe8
	addi     r0, r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@l
	stw      r0, 0xe8(r30)
	beq      lbl_803390BC
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	addic.   r0, r30, 0xe8
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	stw      r0, 0xe8(r30)
	beq      lbl_803390BC
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addic.   r0, r30, 0xe8
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	stw      r0, 0xe8(r30)
	beq      lbl_803390BC
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r30, 0x104
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0xe8(r30)
	beq      lbl_803390B0
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_803390B0:
	addi     r3, r30, 0xe8
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_803390BC:
	addic.   r0, r30, 0xb8
	beq      lbl_80339128
	lis      r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
	addic.   r0, r30, 0xb8
	addi     r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
	stw      r0, 0xb8(r30)
	beq      lbl_80339128
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	addic.   r0, r30, 0xb8
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	stw      r0, 0xb8(r30)
	beq      lbl_80339128
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addic.   r0, r30, 0xb8
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	stw      r0, 0xb8(r30)
	beq      lbl_80339128
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r30, 0xd4
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0xb8(r30)
	beq      lbl_8033911C
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033911C:
	addi     r3, r30, 0xb8
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_80339128:
	addic.   r0, r30, 0x98
	beq      lbl_8033913C
	addi     r3, r30, 0x98
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033913C:
	cmplwi   r30, 0
	beq      lbl_80339288
	lis      r3, "__vt__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>"@ha
	addi     r0, r3, "__vt__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>"@l
	stw      r0, 0(r30)
	b        lbl_80339174

lbl_80339154:
	cmplwi   r4, 0
	beq      lbl_80339160
	addi     r4, r4, -12

lbl_80339160:
	cmplwi   r4, 0
	beq      lbl_8033916C
	addi     r4, r4, 0xc

lbl_8033916C:
	addi     r3, r30, 0x2c
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_80339174:
	lwz      r4, 0x2c(r30)
	cmplwi   r4, 0
	mr       r0, r4
	beq      lbl_80339188
	addi     r0, r4, -12

lbl_80339188:
	cmplwi   r0, 0
	bne      lbl_80339154
	lis      r4, __dt__Q29PSAutoBgm5TrackFv@ha
	lwz      r3, 0x64(r30)
	addi     r4, r4, __dt__Q29PSAutoBgm5TrackFv@l
	bl       __destroy_new_array
	addic.   r0, r30, 0x68
	beq      lbl_803391E4
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addic.   r0, r30, 0x68
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	stw      r0, 0x68(r30)
	beq      lbl_803391E4
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r30, 0x84
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0x68(r30)
	beq      lbl_803391D8
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_803391D8:
	addi     r3, r30, 0x68
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_803391E4:
	cmplwi   r30, 0
	beq      lbl_80339288
	lis      r3, __vt__Q210JADUtility10PrmSetBase@ha
	addi     r0, r3, __vt__Q210JADUtility10PrmSetBase@l
	stw      r0, 0(r30)
	b        lbl_80339204

lbl_803391FC:
	addi     r3, r30, 0x1c
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_80339204:
	lwz      r4, 0x1c(r30)
	cmplwi   r4, 0
	bne      lbl_803391FC
	addic.   r0, r30, 0x2c
	beq      lbl_80339268
	lis      r3, __vt__Q210JADUtility10PrmSetTree@ha
	addic.   r0, r30, 0x2c
	addi     r0, r3, __vt__Q210JADUtility10PrmSetTree@l
	stw      r0, 0x48(r30)
	beq      lbl_80339268
	lis      r3, "__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@ha
	addic.   r0, r30, 0x2c
	addi     r0, r3,
"__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@l stw      r0,
0x48(r30) beq      lbl_80339268 addic.   r0, r30, 0x38 beq      lbl_80339254
	addi     r3, r30, 0x38
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_80339254:
	addic.   r0, r30, 0x2c
	beq      lbl_80339268
	addi     r3, r30, 0x2c
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_80339268:
	addic.   r0, r30, 0x1c
	beq      lbl_8033927C
	addi     r3, r30, 0x1c
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_8033927C:
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_80339288:
	extsh.   r0, r31
	ble      lbl_80339298
	mr       r3, r30
	bl       __dl__FPv

lbl_80339298:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803392B4
 * Size:	000034
 */
void PSAutoBgm::Conductor::removeCallback(unsigned char, void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0xb4(r4)
	li       r4, 0
	lwz      r12, 0x10(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803392E8
 * Size:	00011C
 */
void PSAutoBgm::Conductor::seqCpuSync_AutoBgm(JASTrack*, unsigned short, unsigned long, JASTrack*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r5,0,16,31
	  cmpwi     r0, 0x600
	  stmw      r26, 0x8(r1)
	  mr        r29, r5
	  mr        r26, r3
	  mr        r28, r4
	  mr        r30, r6
	  mr        r31, r7
	  beq-      .loc_0x7C
	  bge-      .loc_0x40
	  cmpwi     r0, 0x300
	  beq-      .loc_0x4C
	  b         .loc_0x104

	.loc_0x40:
	  cmpwi     r0, 0x800
	  beq-      .loc_0x7C
	  b         .loc_0x104

	.loc_0x4C:
	  lbz       r4, 0xE4(r26)
	  mr        r3, r28
	  bl        -0x296DA0
	  mr        r3, r26
	  mr        r4, r28
	  bl        .loc_0x11C
	  li        r0, 0
	  mr        r3, r26
	  stw       r0, 0xB0(r26)
	  bl        0x37BC
	  rlwinm    r3,r3,0,24,31
	  b         .loc_0x108

	.loc_0x7C:
	  rlwinm    r0,r30,0,28,31
	  mr        r3, r26
	  mr        r27, r0
	  bl        0x37A4
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r0,r27,0,24,31
	  cmplw     r0, r3
	  blt-      .loc_0xB8
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x1A0
	  li        r4, 0xC3
	  subi      r5, r5, 0x190
	  crclr     6, 0x6
	  bl        -0x30ED5C

	.loc_0xB8:
	  mr        r3, r26
	  mr        r4, r27
	  bl        0x3B54
	  mr.       r27, r3
	  bne-      .loc_0xE8
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x1A0
	  li        r4, 0xC5
	  subi      r5, r5, 0x190
	  crclr     6, 0x6
	  bl        -0x30ED8C

	.loc_0xE8:
	  mr        r3, r27
	  mr        r4, r28
	  mr        r5, r29
	  mr        r6, r30
	  mr        r7, r31
	  bl        0x80C
	  b         .loc_0x108

	.loc_0x104:
	  li        r3, 0

	.loc_0x108:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x11C:
	*/
}

/*
 * --INFO--
 * Address:	80339404
 * Size:	0000F4
 */
void PSAutoBgm::Conductor::createTables(JASTrack*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	addi     r5, r1, 0xa
	stw      r31, 0x1c(r1)
	mr       r31, r4
	li       r4, 2
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r3, r31
	bl       readPortAppDirect__8JASTrackFUlPUs
	mr       r3, r31
	addi     r5, r1, 8
	li       r4, 3
	bl       readPortAppDirect__8JASTrackFUlPUs
	lhz      r7, 0xa(r1)
	mr       r3, r31
	lhz      r6, 8(r1)
	addi     r5, r1, 0xa
	lwz      r0, 0xc(r31)
	rlwimi   r6, r7, 0x10, 0, 0xf
	li       r4, 4
	add      r0, r6, r0
	stw      r0, 0xa8(r30)
	bl       readPortAppDirect__8JASTrackFUlPUs
	mr       r3, r31
	addi     r5, r1, 8
	li       r4, 5
	bl       readPortAppDirect__8JASTrackFUlPUs
	lhz      r4, 0xa(r1)
	lhz      r3, 8(r1)
	lwz      r0, 0xc(r31)
	rlwimi   r3, r4, 0x10, 0, 0xf
	add      r0, r3, r0
	stw      r0, 0xac(r30)
	lwz      r0, 0xa8(r30)
	cmplwi   r0, 0
	bne      lbl_803394B8
	lis      r3, lbl_8048FE60@ha
	lis      r5, lbl_8048FE70@ha
	addi     r3, r3, lbl_8048FE60@l
	li       r4, 0xe6
	addi     r5, r5, lbl_8048FE70@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803394B8:
	lwz      r0, 0xac(r30)
	cmplwi   r0, 0
	bne      lbl_803394E0
	lis      r3, lbl_8048FE60@ha
	lis      r5, lbl_8048FE70@ha
	addi     r3, r3, lbl_8048FE60@l
	li       r4, 0xe7
	addi     r5, r5, lbl_8048FE70@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803394E0:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803394F8
 * Size:	0002A4
 */
PSAutoBgm::Track::Track()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	bl       "__ct__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>Fv"
	lis      r3, __vt__Q29PSAutoBgm5Track@ha
	li       r4, 0xff
	addi     r0, r3, __vt__Q29PSAutoBgm5Track@l
	addi     r29, r31, 0xa0
	stw      r0, 0(r31)
	li       r0, 0
	mr       r3, r29
	stb      r4, 0x98(r31)
	stb      r4, 0x99(r31)
	stw      r0, 0x9c(r31)
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q210JADUtility7PrmBase@l
	mr       r4, r29
	stw      r3, 0(r29)
	addi     r3, r29, 0x1c
	stb      r0, 0x18(r29)
	bl       __ct__10JSUPtrLinkFPv
	lis      r3, "__vt__Q210JADUtility6Prm<s>"@ha
	addi     r30, r31, 0xd0
	addi     r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
	lis      r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
	stw      r0, 0(r29)
	addi     r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
	lis      r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
	stw      r0, 0(r29)
	addi     r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
	stw      r0, 0(r29)
	mr       r3, r30
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q210JADUtility7PrmBase@l
	mr       r4, r30
	stw      r3, 0(r30)
	addi     r3, r30, 0x1c
	stb      r0, 0x18(r30)
	bl       __ct__10JSUPtrLinkFPv
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addi     r29, r31, 0x100
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	stw      r0, 0(r30)
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	mr       r28, r29
	lis      r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@ha
	stw      r0, 0(r30)
	addi     r0, r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@l
	stw      r0, 0(r30)
	mr       r3, r29
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q210JADUtility7PrmBase@l
	mr       r4, r28
	stw      r3, 0(r28)
	addi     r3, r28, 0x1c
	stb      r0, 0x18(r28)
	bl       __ct__10JSUPtrLinkFPv
	lis      r4, "__vt__Q210JADUtility7Prm<Pc>"@ha
	lis      r3, "__vt__Q210JADUtility10PrmHio<Pc>"@ha
	addi     r0, r4, "__vt__Q210JADUtility7Prm<Pc>"@l
	lis      r4, __vt__Q210JADUtility6StrPrm@ha
	stw      r0, 0(r29)
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Pc>"@l
	lis      r3, __vt__Q210JADUtility10StrEditBox@ha
	addi     r6, r4, __vt__Q210JADUtility6StrPrm@l
	stw      r0, 0(r29)
	li       r5, 8
	li       r4, 0
	addi     r0, r3, __vt__Q210JADUtility10StrEditBox@l
	stw      r6, 0(r29)
	li       r3, 8
	stw      r5, 0x30(r29)
	stw      r4, 0x34(r29)
	stw      r4, 0x38(r29)
	stw      r0, 0(r29)
	bl       __nwa__FUl
	stw      r3, 0x2c(r29)
	addi     r4, r2, lbl_8051E160@sda21
	lwz      r3, 0x2c(r29)
	bl       strcpy
	addi     r28, r31, 0x13c
	mr       r3, r28
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q210JADUtility7PrmBase@l
	mr       r4, r28
	stw      r3, 0(r28)
	addi     r3, r28, 0x1c
	stb      r0, 0x18(r28)
	bl       __ct__10JSUPtrLinkFPv
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addi     r29, r31, 0x16c
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	stw      r0, 0(r28)
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	lis      r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
	stw      r0, 0(r28)
	addi     r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
	stw      r0, 0(r28)
	mr       r3, r29
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q210JADUtility7PrmBase@l
	mr       r4, r29
	stw      r3, 0(r29)
	addi     r3, r29, 0x1c
	stb      r0, 0x18(r29)
	bl       __ct__10JSUPtrLinkFPv
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	lis      r4, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	li       r5, 0
	stw      r0, 0(r29)
	addi     r0, r4, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	lis      r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
	addi     r4, r31, 0x84
	stw      r0, 0(r29)
	addi     r3, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
	li       r0, 3
	stw      r3, 0(r29)
	addi     r3, r31, 0x1c
	stw      r5, 0x19c(r31)
	stb      r0, 0x18(r31)
	bl       append__10JSUPtrListFP10JSUPtrLink
	addi     r4, r31, 0xbc
	addi     r3, r31, 0x1c
	bl       append__10JSUPtrListFP10JSUPtrLink
	addi     r4, r31, 0xec
	addi     r3, r31, 0x1c
	bl       append__10JSUPtrListFP10JSUPtrLink
	addi     r4, r31, 0x11c
	addi     r3, r31, 0x1c
	bl       append__10JSUPtrListFP10JSUPtrLink
	addi     r4, r31, 0x158
	addi     r3, r31, 0x1c
	bl       append__10JSUPtrListFP10JSUPtrLink
	addi     r4, r31, 0x188
	addi     r3, r31, 0x1c
	bl       append__10JSUPtrListFP10JSUPtrLink
	li       r0, 3
	lis      r3, removeCallback__Q29PSAutoBgm5TrackFUcPv@ha
	stb      r0, 0x19(r31)
	addi     r0, r3, removeCallback__Q29PSAutoBgm5TrackFUcPv@l
	mr       r3, r31
	stw      r0, 0x5c(r31)
	stw      r31, 0x60(r31)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033979C
 * Size:	00003C
 */
void PSAutoBgm::Track::afterGetFromFree()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r4, r2, lbl_8051E160@sda21
	stw      r0, 0x14(r1)
	li       r0, 0xff
	stb      r0, 0x99(r3)
	li       r0, 0
	sth      r0, 0xcc(r3)
	stb      r0, 0xfc(r3)
	lwz      r3, 0x12c(r3)
	bl       strcpy
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803397D8
 * Size:	0003DC
 */
PSAutoBgm::Track::~Track()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80339B98
	lis      r3, __vt__Q29PSAutoBgm5Track@ha
	addic.   r0, r30, 0x16c
	addi     r0, r3, __vt__Q29PSAutoBgm5Track@l
	stw      r0, 0(r30)
	beq      lbl_80339870
	lis      r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
	addic.   r0, r30, 0x16c
	addi     r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
	stw      r0, 0x16c(r30)
	beq      lbl_80339870
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	addic.   r0, r30, 0x16c
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	stw      r0, 0x16c(r30)
	beq      lbl_80339870
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addic.   r0, r30, 0x16c
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	stw      r0, 0x16c(r30)
	beq      lbl_80339870
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r30, 0x188
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0x16c(r30)
	beq      lbl_80339864
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_80339864:
	addi     r3, r30, 0x16c
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_80339870:
	addic.   r0, r30, 0x13c
	beq      lbl_803398DC
	lis      r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
	addic.   r0, r30, 0x13c
	addi     r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
	stw      r0, 0x13c(r30)
	beq      lbl_803398DC
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	addic.   r0, r30, 0x13c
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	stw      r0, 0x13c(r30)
	beq      lbl_803398DC
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addic.   r0, r30, 0x13c
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	stw      r0, 0x13c(r30)
	beq      lbl_803398DC
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r30, 0x158
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0x13c(r30)
	beq      lbl_803398D0
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_803398D0:
	addi     r3, r30, 0x13c
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_803398DC:
	addic.   r0, r30, 0x100
	beq      lbl_80339964
	lis      r3, __vt__Q210JADUtility10StrEditBox@ha
	addi     r0, r3, __vt__Q210JADUtility10StrEditBox@l
	stw      r0, 0x100(r30)
	lwz      r3, 0x12c(r30)
	bl       __dla__FPv
	addic.   r0, r30, 0x100
	beq      lbl_80339964
	lis      r3, __vt__Q210JADUtility6StrPrm@ha
	addic.   r0, r30, 0x100
	addi     r0, r3, __vt__Q210JADUtility6StrPrm@l
	stw      r0, 0x100(r30)
	beq      lbl_80339964
	lis      r3, "__vt__Q210JADUtility10PrmHio<Pc>"@ha
	addic.   r0, r30, 0x100
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Pc>"@l
	stw      r0, 0x100(r30)
	beq      lbl_80339964
	lis      r3, "__vt__Q210JADUtility7Prm<Pc>"@ha
	addic.   r0, r30, 0x100
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Pc>"@l
	stw      r0, 0x100(r30)
	beq      lbl_80339964
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r30, 0x11c
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0x100(r30)
	beq      lbl_80339958
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_80339958:
	addi     r3, r30, 0x100
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_80339964:
	addic.   r0, r30, 0xd0
	beq      lbl_803399D0
	lis      r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@ha
	addic.   r0, r30, 0xd0
	addi     r0, r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@l
	stw      r0, 0xd0(r30)
	beq      lbl_803399D0
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	addic.   r0, r30, 0xd0
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	stw      r0, 0xd0(r30)
	beq      lbl_803399D0
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addic.   r0, r30, 0xd0
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	stw      r0, 0xd0(r30)
	beq      lbl_803399D0
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r30, 0xec
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0xd0(r30)
	beq      lbl_803399C4
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_803399C4:
	addi     r3, r30, 0xd0
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_803399D0:
	addic.   r0, r30, 0xa0
	beq      lbl_80339A3C
	lis      r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
	addic.   r0, r30, 0xa0
	addi     r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
	stw      r0, 0xa0(r30)
	beq      lbl_80339A3C
	lis      r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
	addic.   r0, r30, 0xa0
	addi     r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
	stw      r0, 0xa0(r30)
	beq      lbl_80339A3C
	lis      r3, "__vt__Q210JADUtility6Prm<s>"@ha
	addic.   r0, r30, 0xa0
	addi     r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
	stw      r0, 0xa0(r30)
	beq      lbl_80339A3C
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r30, 0xbc
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0xa0(r30)
	beq      lbl_80339A30
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_80339A30:
	addi     r3, r30, 0xa0
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_80339A3C:
	cmplwi   r30, 0
	beq      lbl_80339B88
	lis      r3, "__vt__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>"@ha
	addi     r0, r3, "__vt__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>"@l
	stw      r0, 0(r30)
	b        lbl_80339A74

lbl_80339A54:
	cmplwi   r4, 0
	beq      lbl_80339A60
	addi     r4, r4, -12

lbl_80339A60:
	cmplwi   r4, 0
	beq      lbl_80339A6C
	addi     r4, r4, 0xc

lbl_80339A6C:
	addi     r3, r30, 0x2c
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_80339A74:
	lwz      r4, 0x2c(r30)
	cmplwi   r4, 0
	mr       r0, r4
	beq      lbl_80339A88
	addi     r0, r4, -12

lbl_80339A88:
	cmplwi   r0, 0
	bne      lbl_80339A54
	lis      r4, __dt__Q29PSAutoBgm6ModuleFv@ha
	lwz      r3, 0x64(r30)
	addi     r4, r4, __dt__Q29PSAutoBgm6ModuleFv@l
	bl       __destroy_new_array
	addic.   r0, r30, 0x68
	beq      lbl_80339AE4
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addic.   r0, r30, 0x68
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	stw      r0, 0x68(r30)
	beq      lbl_80339AE4
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r30, 0x84
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0x68(r30)
	beq      lbl_80339AD8
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_80339AD8:
	addi     r3, r30, 0x68
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_80339AE4:
	cmplwi   r30, 0
	beq      lbl_80339B88
	lis      r3, __vt__Q210JADUtility10PrmSetBase@ha
	addi     r0, r3, __vt__Q210JADUtility10PrmSetBase@l
	stw      r0, 0(r30)
	b        lbl_80339B04

lbl_80339AFC:
	addi     r3, r30, 0x1c
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_80339B04:
	lwz      r4, 0x1c(r30)
	cmplwi   r4, 0
	bne      lbl_80339AFC
	addic.   r0, r30, 0x2c
	beq      lbl_80339B68
	lis      r3, __vt__Q210JADUtility10PrmSetTree@ha
	addic.   r0, r30, 0x2c
	addi     r0, r3, __vt__Q210JADUtility10PrmSetTree@l
	stw      r0, 0x48(r30)
	beq      lbl_80339B68
	lis      r3, "__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@ha
	addic.   r0, r30, 0x2c
	addi     r0, r3,
"__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@l stw      r0,
0x48(r30) beq      lbl_80339B68 addic.   r0, r30, 0x38 beq      lbl_80339B54
	addi     r3, r30, 0x38
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_80339B54:
	addic.   r0, r30, 0x2c
	beq      lbl_80339B68
	addi     r3, r30, 0x2c
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_80339B68:
	addic.   r0, r30, 0x1c
	beq      lbl_80339B7C
	addi     r3, r30, 0x1c
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_80339B7C:
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_80339B88:
	extsh.   r0, r31
	ble      lbl_80339B98
	mr       r3, r30
	bl       __dl__FPv

lbl_80339B98:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80339BB4
 * Size:	00003C
 */
void PSAutoBgm::Track::removeCallback(unsigned char, void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x3c(r4)
	li       r4, 0
	lwz      r3, 0xc(r3)
	lwz      r3, 0xb4(r3)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80339BF0
 * Size:	0001B8
 */
void PSAutoBgm::Track::seqCpuSync_AutoBgm_Track(JASTrack*, unsigned short, unsigned long, JASTrack*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r27, r5
	  rlwinm    r0,r27,0,16,31
	  lis       r5, 0x8049
	  cmpwi     r0, 0x800
	  mr        r31, r3
	  mr        r26, r4
	  mr        r29, r6
	  mr        r28, r7
	  subi      r30, r5, 0x1A0
	  beq-      .loc_0x15C
	  bge-      .loc_0x1A0
	  cmpwi     r0, 0x600
	  beq-      .loc_0x48
	  b         .loc_0x1A0

	.loc_0x48:
	  li        r0, 0xFF
	  stb       r0, 0x99(r31)
	  lbz       r3, 0x168(r31)
	  cmplwi    r3, 0x10
	  beq-      .loc_0xB4
	  lbz       r0, 0x98(r31)
	  cmplw     r3, r0
	  blt-      .loc_0x7C
	  addi      r3, r30, 0
	  addi      r5, r30, 0x1C
	  li        r4, 0x1A0
	  crclr     6, 0x6
	  bl        -0x30F628

	.loc_0x7C:
	  lwz       r3, 0x3C(r31)
	  lbz       r4, 0x168(r31)
	  lwz       r3, 0xC(r3)
	  bl        0x3284
	  stw       r3, 0x19C(r31)
	  lwz       r0, 0x19C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xBC
	  addi      r3, r30, 0
	  addi      r5, r30, 0x10
	  li        r4, 0x1A2
	  crclr     6, 0x6
	  bl        -0x30F65C
	  b         .loc_0xBC

	.loc_0xB4:
	  li        r0, 0
	  stw       r0, 0x19C(r31)

	.loc_0xBC:
	  mr        r3, r31
	  bl        0x2E74
	  rlwinm    r29,r3,0,24,31
	  li        r28, 0
	  li        r30, 0
	  b         .loc_0xE8

	.loc_0xD4:
	  mr        r3, r31
	  mr        r4, r28
	  bl        0x3050
	  stb       r30, 0x2C1(r3)
	  addi      r28, r28, 0x1

	.loc_0xE8:
	  rlwinm    r0,r28,0,24,31
	  cmplw     r0, r29
	  blt+      .loc_0xD4
	  lwz       r3, 0x19C(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x124
	  lbz       r3, 0xFC(r3)
	  li        r0, 0x3C
	  subi      r4, r3, 0x1
	  subfic    r3, r3, 0x1
	  nor       r3, r4, r3
	  srawi     r3, r3, 0x1F
	  and       r0, r0, r3
	  rlwinm    r3,r0,0,16,31
	  b         .loc_0x144

	.loc_0x124:
	  lbz       r3, 0xFC(r31)
	  li        r0, 0x3C
	  subi      r4, r3, 0x1
	  subfic    r3, r3, 0x1
	  nor       r3, r4, r3
	  srawi     r3, r3, 0x1F
	  and       r0, r0, r3
	  rlwinm    r3,r0,0,16,31

	.loc_0x144:
	  lha       r0, 0xCC(r31)
	  rlwinm    r0,r0,0,16,31
	  mulli     r0, r0, 0x78
	  add       r0, r3, r0
	  rlwinm    r3,r0,0,16,31
	  b         .loc_0x1A4

	.loc_0x15C:
	  bl        .loc_0x1B8
	  lbz       r4, 0x99(r31)
	  mr        r3, r31
	  bl        0x2FC4
	  cmplwi    r3, 0
	  beq-      .loc_0x198
	  lbz       r4, 0x99(r31)
	  mr        r3, r31
	  bl        0x2FB0
	  mr        r4, r26
	  mr        r5, r27
	  mr        r6, r29
	  mr        r7, r28
	  bl        0xDA0
	  b         .loc_0x1A4

	.loc_0x198:
	  li        r3, 0
	  b         .loc_0x1A4

	.loc_0x1A0:
	  li        r3, 0

	.loc_0x1A4:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x1B8:
	*/
}

/*
 * --INFO--
 * Address:	80339DA8
 * Size:	000060
 */
void PSAutoBgm::Track::incCurModule()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0x99(r3)
	cmplwi   r0, 0xff
	bne      lbl_80339DD4
	li       r0, 0
	stb      r0, 0x99(r31)
	b        lbl_80339DF4

lbl_80339DD4:
	bl       "getChildNum__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>Fv"
	clrlwi   r4, r3, 0x18
	lbz      r3, 0x99(r31)
	addi     r0, r4, -1
	cmpw     r3, r0
	beq      lbl_80339DF4
	addi     r0, r3, 1
	stb      r0, 0x99(r31)

lbl_80339DF4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80339E08
 * Size:	000054
 */
void PSAutoBgm::Module::afterGetFromFree()
{
	/*
	li       r5, 0x40
	li       r4, 0
	sth      r5, 0xc0(r3)
	li       r0, 0x60
	stb      r4, 0x180(r3)
	sth      r4, 0x1b0(r3)
	sth      r4, 0x1e0(r3)
	stb      r4, 0xf0(r3)
	sth      r4, 0x90(r3)
	stb      r4, 0x120(r3)
	sth      r4, 0x210(r3)
	stb      r0, 0x240(r3)
	stb      r5, 0x270(r3)
	stw      r4, 0x2a8(r3)
	stw      r4, 0x2b0(r3)
	stb      r4, 0x2b4(r3)
	sth      r4, 0x2a4(r3)
	stb      r4, 0x2c1(r3)
	stb      r4, 0x2a0(r3)
	stb      r4, 0x2c0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80339E5C
 * Size:	000554
 */
PSAutoBgm::Module::Module()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r4, 1
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	bl       __ct__Q210JADUtility10PrmSetBaseFb
	lis      r3, __vt__Q29PSAutoBgm6Module@ha
	addi     r29, r31, 0x64
	addi     r0, r3, __vt__Q29PSAutoBgm6Module@l
	stw      r0, 0(r31)
	mr       r3, r29
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q210JADUtility7PrmBase@l
	mr       r4, r29
	stw      r3, 0(r29)
	addi     r3, r29, 0x1c
	stb      r0, 0x18(r29)
	bl       __ct__10JSUPtrLinkFPv
	lis      r3, "__vt__Q210JADUtility6Prm<s>"@ha
	addi     r30, r31, 0x94
	addi     r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
	lis      r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
	stw      r0, 0(r29)
	addi     r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
	lis      r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
	stw      r0, 0(r29)
	addi     r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
	stw      r0, 0(r29)
	mr       r3, r30
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q210JADUtility7PrmBase@l
	mr       r4, r30
	stw      r3, 0(r30)
	addi     r3, r30, 0x1c
	stb      r0, 0x18(r30)
	bl       __ct__10JSUPtrLinkFPv
	lis      r3, "__vt__Q210JADUtility6Prm<s>"@ha
	addi     r29, r31, 0xc4
	addi     r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
	lis      r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
	stw      r0, 0(r30)
	addi     r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
	lis      r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
	stw      r0, 0(r30)
	addi     r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
	stw      r0, 0(r30)
	mr       r3, r29
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q210JADUtility7PrmBase@l
	mr       r4, r29
	stw      r3, 0(r29)
	addi     r3, r29, 0x1c
	stb      r0, 0x18(r29)
	bl       __ct__10JSUPtrLinkFPv
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addi     r30, r31, 0xf4
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	stw      r0, 0(r29)
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	lis      r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
	stw      r0, 0(r29)
	addi     r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
	stw      r0, 0(r29)
	mr       r3, r30
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q210JADUtility7PrmBase@l
	mr       r4, r30
	stw      r3, 0(r30)
	addi     r3, r30, 0x1c
	stb      r0, 0x18(r30)
	bl       __ct__10JSUPtrLinkFPv
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addi     r29, r31, 0x124
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	stw      r0, 0(r30)
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	lis      r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@ha
	stw      r0, 0(r30)
	addi     r0, r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@l
	stw      r0, 0(r30)
	mr       r3, r29
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q210JADUtility7PrmBase@l
	mr       r4, r29
	stw      r3, 0(r29)
	addi     r3, r29, 0x1c
	stb      r0, 0x18(r29)
	bl       __ct__10JSUPtrLinkFPv
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addi     r30, r31, 0x154
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	stw      r0, 0(r29)
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	lis      r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
	stw      r0, 0(r29)
	addi     r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
	stw      r0, 0(r29)
	mr       r3, r30
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q210JADUtility7PrmBase@l
	mr       r4, r30
	stw      r3, 0(r30)
	addi     r3, r30, 0x1c
	stb      r0, 0x18(r30)
	bl       __ct__10JSUPtrLinkFPv
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addi     r29, r31, 0x184
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	stw      r0, 0(r30)
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	lis      r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
	stw      r0, 0(r30)
	addi     r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
	stw      r0, 0(r30)
	mr       r3, r29
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q210JADUtility7PrmBase@l
	mr       r4, r29
	stw      r3, 0(r29)
	addi     r3, r29, 0x1c
	stb      r0, 0x18(r29)
	bl       __ct__10JSUPtrLinkFPv
	lis      r3, "__vt__Q210JADUtility6Prm<s>"@ha
	addi     r30, r31, 0x1b4
	addi     r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
	lis      r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
	stw      r0, 0(r29)
	addi     r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
	lis      r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
	stw      r0, 0(r29)
	addi     r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
	stw      r0, 0(r29)
	mr       r3, r30
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q210JADUtility7PrmBase@l
	mr       r4, r30
	stw      r3, 0(r30)
	addi     r3, r30, 0x1c
	stb      r0, 0x18(r30)
	bl       __ct__10JSUPtrLinkFPv
	lis      r3, "__vt__Q210JADUtility6Prm<s>"@ha
	addi     r29, r31, 0x1e4
	addi     r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
	lis      r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
	stw      r0, 0(r30)
	addi     r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
	lis      r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
	stw      r0, 0(r30)
	addi     r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
	stw      r0, 0(r30)
	mr       r3, r29
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q210JADUtility7PrmBase@l
	mr       r4, r29
	stw      r3, 0(r29)
	addi     r3, r29, 0x1c
	stb      r0, 0x18(r29)
	bl       __ct__10JSUPtrLinkFPv
	lis      r3, "__vt__Q210JADUtility6Prm<s>"@ha
	addi     r30, r31, 0x214
	addi     r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
	lis      r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
	stw      r0, 0(r29)
	addi     r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
	lis      r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
	stw      r0, 0(r29)
	addi     r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
	stw      r0, 0(r29)
	mr       r3, r30
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q210JADUtility7PrmBase@l
	mr       r4, r30
	stw      r3, 0(r30)
	addi     r3, r30, 0x1c
	stb      r0, 0x18(r30)
	bl       __ct__10JSUPtrLinkFPv
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addi     r29, r31, 0x244
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	stw      r0, 0(r30)
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	lis      r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
	stw      r0, 0(r30)
	addi     r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
	stw      r0, 0(r30)
	mr       r3, r29
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q210JADUtility7PrmBase@l
	mr       r4, r29
	stw      r3, 0(r29)
	addi     r3, r29, 0x1c
	stb      r0, 0x18(r29)
	bl       __ct__10JSUPtrLinkFPv
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addi     r30, r31, 0x274
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	stw      r0, 0(r29)
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	lis      r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
	stw      r0, 0(r29)
	addi     r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
	stw      r0, 0(r29)
	mr       r3, r30
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q210JADUtility7PrmBase@l
	mr       r4, r30
	stw      r3, 0(r30)
	addi     r3, r30, 0x1c
	stb      r0, 0x18(r30)
	bl       __ct__10JSUPtrLinkFPv
	lis      r4, "__vt__Q210JADUtility7Prm<Uc>"@ha
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	addi     r0, r4, "__vt__Q210JADUtility7Prm<Uc>"@l
	lis      r4, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@ha
	stw      r0, 0(r30)
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	lis      r3, 0x0000FFFF@ha
	addi     r5, r4, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@l
	stw      r0, 0(r30)
	li       r4, 0
	addi     r0, r3, 0x0000FFFF@l
	li       r3, 0x68
	stw      r5, 0(r30)
	li       r5, 0
	sth      r4, 0x2a4(r31)
	stw      r4, 0x2a8(r31)
	stb      r4, 0x2ac(r31)
	stw      r4, 0x2b0(r31)
	stb      r4, 0x2b4(r31)
	stb      r4, 0x2c0(r31)
	stb      r4, 0x2c1(r31)
	sth      r0, 0x2c2(r31)
	lwz      r4, sHeap__Q29PSAutoBgm12ConductorMgr@sda21(r13)
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_8033A29C
	mr       r4, r31
	bl       __ct__Q29PSAutoBgm7OnCycleFPQ29PSAutoBgm6Module
	mr       r0, r3

lbl_8033A29C:
	stw      r0, 0x2b8(r31)
	li       r3, 0x40
	li       r5, 0
	lwz      r4, sHeap__Q29PSAutoBgm12ConductorMgr@sda21(r13)
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_8033A2C4
	mr       r4, r31
	bl       __ct__Q29PSAutoBgm8OffCycleFPQ29PSAutoBgm6Module
	mr       r0, r3

lbl_8033A2C4:
	stw      r0, 0x2bc(r31)
	addi     r4, r31, 0x80
	addi     r3, r31, 0x1c
	bl       append__10JSUPtrListFP10JSUPtrLink
	addi     r4, r31, 0xb0
	addi     r3, r31, 0x1c
	bl       append__10JSUPtrListFP10JSUPtrLink
	addi     r4, r31, 0xe0
	addi     r3, r31, 0x1c
	bl       append__10JSUPtrListFP10JSUPtrLink
	addi     r4, r31, 0x110
	addi     r3, r31, 0x1c
	bl       append__10JSUPtrListFP10JSUPtrLink
	addi     r4, r31, 0x140
	addi     r3, r31, 0x1c
	bl       append__10JSUPtrListFP10JSUPtrLink
	addi     r4, r31, 0x170
	addi     r3, r31, 0x1c
	bl       append__10JSUPtrListFP10JSUPtrLink
	addi     r4, r31, 0x1a0
	addi     r3, r31, 0x1c
	bl       append__10JSUPtrListFP10JSUPtrLink
	addi     r4, r31, 0x1d0
	addi     r3, r31, 0x1c
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, 0x2b8(r31)
	addi     r3, r31, 0x1c
	addi     r4, r4, 0x28
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, 0x2bc(r31)
	addi     r3, r31, 0x1c
	addi     r4, r4, 0x28
	bl       append__10JSUPtrListFP10JSUPtrLink
	addi     r4, r31, 0x200
	addi     r3, r31, 0x1c
	bl       append__10JSUPtrListFP10JSUPtrLink
	addi     r4, r31, 0x230
	addi     r3, r31, 0x1c
	bl       append__10JSUPtrListFP10JSUPtrLink
	addi     r4, r31, 0x260
	addi     r3, r31, 0x1c
	bl       append__10JSUPtrListFP10JSUPtrLink
	addi     r4, r31, 0x290
	addi     r3, r31, 0x1c
	bl       append__10JSUPtrListFP10JSUPtrLink
	li       r0, 0x15
	lis      r3, removeCallback__Q29PSAutoBgm6ModuleFUcPv@ha
	stb      r0, 0x19(r31)
	addi     r0, r3, removeCallback__Q29PSAutoBgm6ModuleFUcPv@l
	mr       r3, r31
	stw      r0, 0x5c(r31)
	stw      r31, 0x60(r31)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033A3B0
 * Size:	00072C
 */
PSAutoBgm::Module::~Module()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	or.      r30, r3, r3
	stw      r29, 0x14(r1)
	beq      lbl_8033AABC
	lis      r3, __vt__Q29PSAutoBgm6Module@ha
	addi     r0, r3, __vt__Q29PSAutoBgm6Module@l
	stw      r0, 0(r30)
	lwz      r29, 0x2b8(r30)
	cmplwi   r29, 0
	beq      lbl_8033A46C
	lis      r3, __vt__Q29PSAutoBgm9CycleBase@ha
	addic.   r0, r29, 0xc
	addi     r0, r3, __vt__Q29PSAutoBgm9CycleBase@l
	stw      r0, 0(r29)
	beq      lbl_8033A464
	lis      r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
	addic.   r0, r29, 0xc
	addi     r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
	stw      r0, 0xc(r29)
	beq      lbl_8033A464
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	addic.   r0, r29, 0xc
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	stw      r0, 0xc(r29)
	beq      lbl_8033A464
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addic.   r0, r29, 0xc
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	stw      r0, 0xc(r29)
	beq      lbl_8033A464
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r29, 0x28
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0xc(r29)
	beq      lbl_8033A458
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033A458:
	addi     r3, r29, 0xc
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_8033A464:
	mr       r3, r29
	bl       __dl__FPv

lbl_8033A46C:
	lwz      r29, 0x2bc(r30)
	cmplwi   r29, 0
	beq      lbl_8033A4F8
	lis      r3, __vt__Q29PSAutoBgm9CycleBase@ha
	addic.   r0, r29, 0xc
	addi     r0, r3, __vt__Q29PSAutoBgm9CycleBase@l
	stw      r0, 0(r29)
	beq      lbl_8033A4F0
	lis      r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
	addic.   r0, r29, 0xc
	addi     r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
	stw      r0, 0xc(r29)
	beq      lbl_8033A4F0
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	addic.   r0, r29, 0xc
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	stw      r0, 0xc(r29)
	beq      lbl_8033A4F0
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addic.   r0, r29, 0xc
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	stw      r0, 0xc(r29)
	beq      lbl_8033A4F0
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r29, 0x28
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0xc(r29)
	beq      lbl_8033A4E4
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033A4E4:
	addi     r3, r29, 0xc
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_8033A4F0:
	mr       r3, r29
	bl       __dl__FPv

lbl_8033A4F8:
	addic.   r0, r30, 0x274
	beq      lbl_8033A564
	lis      r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@ha
	addic.   r0, r30, 0x274
	addi     r0, r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@l
	stw      r0, 0x274(r30)
	beq      lbl_8033A564
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	addic.   r0, r30, 0x274
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	stw      r0, 0x274(r30)
	beq      lbl_8033A564
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addic.   r0, r30, 0x274
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	stw      r0, 0x274(r30)
	beq      lbl_8033A564
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r30, 0x290
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0x274(r30)
	beq      lbl_8033A558
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033A558:
	addi     r3, r30, 0x274
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_8033A564:
	addic.   r0, r30, 0x244
	beq      lbl_8033A5D0
	lis      r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
	addic.   r0, r30, 0x244
	addi     r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
	stw      r0, 0x244(r30)
	beq      lbl_8033A5D0
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	addic.   r0, r30, 0x244
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	stw      r0, 0x244(r30)
	beq      lbl_8033A5D0
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addic.   r0, r30, 0x244
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	stw      r0, 0x244(r30)
	beq      lbl_8033A5D0
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r30, 0x260
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0x244(r30)
	beq      lbl_8033A5C4
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033A5C4:
	addi     r3, r30, 0x244
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_8033A5D0:
	addic.   r0, r30, 0x214
	beq      lbl_8033A63C
	lis      r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
	addic.   r0, r30, 0x214
	addi     r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
	stw      r0, 0x214(r30)
	beq      lbl_8033A63C
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	addic.   r0, r30, 0x214
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	stw      r0, 0x214(r30)
	beq      lbl_8033A63C
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addic.   r0, r30, 0x214
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	stw      r0, 0x214(r30)
	beq      lbl_8033A63C
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r30, 0x230
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0x214(r30)
	beq      lbl_8033A630
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033A630:
	addi     r3, r30, 0x214
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_8033A63C:
	addic.   r0, r30, 0x1e4
	beq      lbl_8033A6A8
	lis      r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
	addic.   r0, r30, 0x1e4
	addi     r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
	stw      r0, 0x1e4(r30)
	beq      lbl_8033A6A8
	lis      r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
	addic.   r0, r30, 0x1e4
	addi     r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
	stw      r0, 0x1e4(r30)
	beq      lbl_8033A6A8
	lis      r3, "__vt__Q210JADUtility6Prm<s>"@ha
	addic.   r0, r30, 0x1e4
	addi     r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
	stw      r0, 0x1e4(r30)
	beq      lbl_8033A6A8
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r30, 0x200
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0x1e4(r30)
	beq      lbl_8033A69C
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033A69C:
	addi     r3, r30, 0x1e4
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_8033A6A8:
	addic.   r0, r30, 0x1b4
	beq      lbl_8033A714
	lis      r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
	addic.   r0, r30, 0x1b4
	addi     r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
	stw      r0, 0x1b4(r30)
	beq      lbl_8033A714
	lis      r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
	addic.   r0, r30, 0x1b4
	addi     r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
	stw      r0, 0x1b4(r30)
	beq      lbl_8033A714
	lis      r3, "__vt__Q210JADUtility6Prm<s>"@ha
	addic.   r0, r30, 0x1b4
	addi     r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
	stw      r0, 0x1b4(r30)
	beq      lbl_8033A714
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r30, 0x1d0
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0x1b4(r30)
	beq      lbl_8033A708
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033A708:
	addi     r3, r30, 0x1b4
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_8033A714:
	addic.   r0, r30, 0x184
	beq      lbl_8033A780
	lis      r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
	addic.   r0, r30, 0x184
	addi     r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
	stw      r0, 0x184(r30)
	beq      lbl_8033A780
	lis      r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
	addic.   r0, r30, 0x184
	addi     r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
	stw      r0, 0x184(r30)
	beq      lbl_8033A780
	lis      r3, "__vt__Q210JADUtility6Prm<s>"@ha
	addic.   r0, r30, 0x184
	addi     r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
	stw      r0, 0x184(r30)
	beq      lbl_8033A780
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r30, 0x1a0
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0x184(r30)
	beq      lbl_8033A774
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033A774:
	addi     r3, r30, 0x184
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_8033A780:
	addic.   r0, r30, 0x154
	beq      lbl_8033A7EC
	lis      r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
	addic.   r0, r30, 0x154
	addi     r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
	stw      r0, 0x154(r30)
	beq      lbl_8033A7EC
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	addic.   r0, r30, 0x154
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	stw      r0, 0x154(r30)
	beq      lbl_8033A7EC
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addic.   r0, r30, 0x154
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	stw      r0, 0x154(r30)
	beq      lbl_8033A7EC
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r30, 0x170
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0x154(r30)
	beq      lbl_8033A7E0
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033A7E0:
	addi     r3, r30, 0x154
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_8033A7EC:
	addic.   r0, r30, 0x124
	beq      lbl_8033A858
	lis      r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
	addic.   r0, r30, 0x124
	addi     r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
	stw      r0, 0x124(r30)
	beq      lbl_8033A858
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	addic.   r0, r30, 0x124
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	stw      r0, 0x124(r30)
	beq      lbl_8033A858
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addic.   r0, r30, 0x124
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	stw      r0, 0x124(r30)
	beq      lbl_8033A858
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r30, 0x140
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0x124(r30)
	beq      lbl_8033A84C
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033A84C:
	addi     r3, r30, 0x124
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_8033A858:
	addic.   r0, r30, 0xf4
	beq      lbl_8033A8C4
	lis      r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@ha
	addic.   r0, r30, 0xf4
	addi     r0, r3, "__vt__Q210JADUtility18PrmRadioButton<Uc>"@l
	stw      r0, 0xf4(r30)
	beq      lbl_8033A8C4
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	addic.   r0, r30, 0xf4
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	stw      r0, 0xf4(r30)
	beq      lbl_8033A8C4
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addic.   r0, r30, 0xf4
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	stw      r0, 0xf4(r30)
	beq      lbl_8033A8C4
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r30, 0x110
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0xf4(r30)
	beq      lbl_8033A8B8
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033A8B8:
	addi     r3, r30, 0xf4
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_8033A8C4:
	addic.   r0, r30, 0xc4
	beq      lbl_8033A930
	lis      r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
	addic.   r0, r30, 0xc4
	addi     r0, r3, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
	stw      r0, 0xc4(r30)
	beq      lbl_8033A930
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	addic.   r0, r30, 0xc4
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	stw      r0, 0xc4(r30)
	beq      lbl_8033A930
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addic.   r0, r30, 0xc4
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	stw      r0, 0xc4(r30)
	beq      lbl_8033A930
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r30, 0xe0
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0xc4(r30)
	beq      lbl_8033A924
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033A924:
	addi     r3, r30, 0xc4
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_8033A930:
	addic.   r0, r30, 0x94
	beq      lbl_8033A99C
	lis      r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
	addic.   r0, r30, 0x94
	addi     r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
	stw      r0, 0x94(r30)
	beq      lbl_8033A99C
	lis      r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
	addic.   r0, r30, 0x94
	addi     r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
	stw      r0, 0x94(r30)
	beq      lbl_8033A99C
	lis      r3, "__vt__Q210JADUtility6Prm<s>"@ha
	addic.   r0, r30, 0x94
	addi     r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
	stw      r0, 0x94(r30)
	beq      lbl_8033A99C
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r30, 0xb0
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0x94(r30)
	beq      lbl_8033A990
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033A990:
	addi     r3, r30, 0x94
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_8033A99C:
	addic.   r0, r30, 0x64
	beq      lbl_8033AA08
	lis      r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
	addic.   r0, r30, 0x64
	addi     r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
	stw      r0, 0x64(r30)
	beq      lbl_8033AA08
	lis      r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
	addic.   r0, r30, 0x64
	addi     r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
	stw      r0, 0x64(r30)
	beq      lbl_8033AA08
	lis      r3, "__vt__Q210JADUtility6Prm<s>"@ha
	addic.   r0, r30, 0x64
	addi     r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
	stw      r0, 0x64(r30)
	beq      lbl_8033AA08
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r30, 0x80
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0x64(r30)
	beq      lbl_8033A9FC
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033A9FC:
	addi     r3, r30, 0x64
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_8033AA08:
	cmplwi   r30, 0
	beq      lbl_8033AAAC
	lis      r3, __vt__Q210JADUtility10PrmSetBase@ha
	addi     r0, r3, __vt__Q210JADUtility10PrmSetBase@l
	stw      r0, 0(r30)
	b        lbl_8033AA28

lbl_8033AA20:
	addi     r3, r30, 0x1c
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_8033AA28:
	lwz      r4, 0x1c(r30)
	cmplwi   r4, 0
	bne      lbl_8033AA20
	addic.   r0, r30, 0x2c
	beq      lbl_8033AA8C
	lis      r3, __vt__Q210JADUtility10PrmSetTree@ha
	addic.   r0, r30, 0x2c
	addi     r0, r3, __vt__Q210JADUtility10PrmSetTree@l
	stw      r0, 0x48(r30)
	beq      lbl_8033AA8C
	lis      r3, "__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@ha
	addic.   r0, r30, 0x2c
	addi     r0, r3,
"__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@l stw      r0,
0x48(r30) beq      lbl_8033AA8C addic.   r0, r30, 0x38 beq      lbl_8033AA78
	addi     r3, r30, 0x38
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033AA78:
	addic.   r0, r30, 0x2c
	beq      lbl_8033AA8C
	addi     r3, r30, 0x2c
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_8033AA8C:
	addic.   r0, r30, 0x1c
	beq      lbl_8033AAA0
	addi     r3, r30, 0x1c
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_8033AAA0:
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_8033AAAC:
	extsh.   r0, r31
	ble      lbl_8033AABC
	mr       r3, r30
	bl       __dl__FPv

lbl_8033AABC:
	lwz      r0, 0x24(r1)
	mr       r3, r30
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033AADC
 * Size:	000044
 */
void PSAutoBgm::Module::removeCallback(unsigned char, void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x3c(r4)
	li       r4, 0
	lwz      r3, 0xc(r3)
	lwz      r3, 0x3c(r3)
	lwz      r3, 0xc(r3)
	lwz      r3, 0xb4(r3)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033AB20
 * Size:	000218
 */
void PSAutoBgm::Module::seqCpuSync_AutoBgm_Module(JASTrack*, unsigned short, unsigned long, JASTrack*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  rlwinm    r0,r5,0,16,31
	  mr        r30, r3
	  cmpwi     r0, 0x800
	  mr        r31, r4
	  beq-      .loc_0x34
	  b         .loc_0x1F4

	.loc_0x34:
	  mr        r3, r31
	  mr        r4, r30
	  li        r5, 0x14
	  bl        -0x27A4
	  lbz       r0, 0x150(r30)
	  mr        r3, r31
	  lbz       r5, 0x180(r30)
	  li        r4, 0x3
	  rlwimi    r5,r0,8,16,23
	  rlwinm    r5,r5,0,16,31
	  bl        -0x298A90
	  lbz       r3, 0x240(r30)
	  cmplwi    r3, 0x7F
	  ble-      .loc_0x74
	  lfs       f2, -0x1FC(r2)
	  b         .loc_0x8C

	.loc_0x74:
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f1, -0x1F0(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f2, f0, f1

	.loc_0x8C:
	  lbz       r3, 0x270(r30)
	  cmplwi    r3, 0x7F
	  ble-      .loc_0xA0
	  lfs       f31, -0x1FC(r2)
	  b         .loc_0xB8

	.loc_0xA0:
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lfd       f1, -0x1F0(r2)
	  stw       r0, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f31, f0, f1

	.loc_0xB8:
	  lfs       f0, -0x1FC(r2)
	  mr        r3, r31
	  li        r4, 0
	  li        r5, -0x1
	  fdivs     f1, f2, f0
	  bl        -0x299DF4
	  lfs       f0, -0x1FC(r2)
	  mr        r3, r31
	  li        r4, 0x3
	  li        r5, -0x1
	  fdivs     f1, f31, f0
	  bl        -0x299E0C
	  lha       r0, 0x210(r30)
	  li        r4, 0
	  lis       r3, 0x1
	  stb       r0, 0x356(r31)
	  subi      r0, r3, 0x1
	  sth       r4, 0x2A4(r30)
	  stb       r4, 0x2C0(r30)
	  sth       r0, 0x2C2(r30)
	  lwz       r3, 0x2B8(r30)
	  stb       r4, 0x8(r3)
	  lwz       r3, 0x2BC(r30)
	  stb       r4, 0x8(r3)
	  lwz       r3, 0x2B8(r30)
	  lbz       r0, 0x38(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x13C
	  lwz       r3, 0x2BC(r30)
	  lbz       r0, 0x38(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x13C
	  li        r4, 0x1

	.loc_0x13C:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x160
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x1A0
	  li        r4, 0x298
	  subi      r5, r5, 0x190
	  crclr     6, 0x6
	  bl        -0x31063C

	.loc_0x160:
	  lbz       r0, 0x2C1(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x180
	  mr        r3, r30
	  mr        r4, r31
	  bl        .loc_0x218
	  li        r0, 0x1
	  stb       r0, 0x2C1(r30)

	.loc_0x180:
	  lwz       r3, 0x3C(r30)
	  lwz       r3, 0xC(r3)
	  lwz       r3, 0x19C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x1C0
	  li        r4, 0
	  bl        0x2064
	  lbz       r3, 0x2A0(r3)
	  li        r0, 0x3C
	  subi      r4, r3, 0x1
	  subfic    r3, r3, 0x1
	  nor       r3, r4, r3
	  srawi     r3, r3, 0x1F
	  and       r0, r0, r3
	  rlwinm    r3,r0,0,16,31
	  b         .loc_0x1E0

	.loc_0x1C0:
	  lbz       r3, 0x2A0(r30)
	  li        r0, 0x3C
	  subi      r4, r3, 0x1
	  subfic    r3, r3, 0x1
	  nor       r3, r4, r3
	  srawi     r3, r3, 0x1F
	  and       r0, r0, r3
	  rlwinm    r3,r0,0,16,31

	.loc_0x1E0:
	  lha       r0, 0x90(r30)
	  mulli     r0, r0, 0x78
	  add       r0, r3, r0
	  rlwinm    r3,r0,0,16,31
	  b         .loc_0x1F8

	.loc_0x1F4:
	  li        r3, 0

	.loc_0x1F8:
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x218:
	*/
}

/*
 * --INFO--
 * Address:	8033AD38
 * Size:	0001BC
 */
void PSAutoBgm::Module::setTableAddress(JASTrack*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r30, r3
	li       r31, 0
	lwz      r3, 0x3c(r3)
	lha      r0, 0x1b0(r30)
	lwz      r3, 0xc(r3)
	clrlwi   r0, r0, 0x10
	lwz      r3, 0x3c(r3)
	mulli    r0, r0, 3
	lwz      r3, 0xc(r3)
	lwz      r3, 0xa8(r3)
	add      r5, r3, r0
	lbzx     r3, r3, r0
	lbz      r0, 1(r5)
	lbz      r5, 2(r5)
	slwi     r0, r0, 8
	rlwimi   r0, r3, 0x10, 8, 0xf
	or       r0, r5, r0
	stw      r0, 0x2a8(r30)
	lwz      r3, 0x2a8(r30)
	lwz      r0, 0xc(r4)
	add      r0, r3, r0
	stw      r0, 0x2a8(r30)
	lwz      r3, 0x3c(r30)
	lha      r0, 0x1e0(r30)
	lwz      r3, 0xc(r3)
	clrlwi   r0, r0, 0x10
	lwz      r3, 0x3c(r3)
	mulli    r0, r0, 3
	lwz      r3, 0xc(r3)
	lwz      r3, 0xac(r3)
	add      r5, r3, r0
	lbzx     r3, r3, r0
	lbz      r0, 1(r5)
	lbz      r5, 2(r5)
	slwi     r0, r0, 8
	rlwimi   r0, r3, 0x10, 8, 0xf
	or       r0, r5, r0
	stw      r0, 0x2b0(r30)
	lwz      r3, 0x2b0(r30)
	lwz      r0, 0xc(r4)
	add      r0, r3, r0
	stw      r0, 0x2b0(r30)
	lwz      r29, 0x2a8(r30)
	lbz      r0, 0(r29)
	lbz      r4, 1(r29)
	lbz      r3, 2(r29)
	b        lbl_8033AE44

lbl_8033AE04:
	addi     r31, r31, 1
	clrlwi   r27, r31, 0x18
	cmpwi    r27, 0xff
	blt      lbl_8033AE30
	lis      r3, lbl_8048FE60@ha
	lis      r5, lbl_8048FE70@ha
	addi     r3, r3, lbl_8048FE60@l
	li       r4, 0x2d6
	addi     r5, r5, lbl_8048FE70@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033AE30:
	mulli    r0, r27, 3
	add      r3, r29, r0
	lbz      r0, 0(r3)
	lbz      r4, 1(r3)
	lbz      r3, 2(r3)

lbl_8033AE44:
	clrlwi   r0, r0, 0x18
	cmplwi   r0, 0xff
	bne      lbl_8033AE04
	clrlwi   r0, r4, 0x18
	cmplwi   r0, 0xff
	bne      lbl_8033AE04
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 0xff
	bne      lbl_8033AE04
	stb      r31, 0x2ac(r30)
	lis      r4, lbl_8048FE60@ha
	lis      r3, lbl_8048FE70@ha
	li       r28, 0
	lwz      r27, 0x2b0(r30)
	addi     r29, r4, lbl_8048FE60@l
	addi     r31, r3, lbl_8048FE70@l
	lbz      r0, 0(r27)
	lbz      r3, 1(r27)
	b        lbl_8033AEC4

lbl_8033AE90:
	addi     r28, r28, 1
	clrlwi   r26, r28, 0x18
	cmpwi    r26, 0xff
	blt      lbl_8033AEB4
	mr       r3, r29
	mr       r5, r31
	li       r4, 0x2ec
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033AEB4:
	slwi     r0, r26, 1
	add      r3, r27, r0
	lbz      r0, 0(r3)
	lbz      r3, 1(r3)

lbl_8033AEC4:
	clrlwi   r0, r0, 0x18
	cmplwi   r0, 0xff
	bne      lbl_8033AE90
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 0xff
	bne      lbl_8033AE90
	stb      r28, 0x2b4(r30)
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033AEF4
 * Size:	000154
 */
void PSAutoBgm::Module::cycleLoop(JASTrack*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	lwz      r3, 0x3c(r3)
	lwz      r3, 0xc(r3)
	lbz      r4, 0x99(r3)
	bl       "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
	cmplw    r3, r31
	beq      lbl_8033AF40
	lis      r3, lbl_8048FE60@ha
	lis      r5, lbl_8048FE70@ha
	addi     r3, r3, lbl_8048FE60@l
	li       r4, 0x30b
	addi     r5, r5, lbl_8048FE70@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033AF40:
	lwz      r3, 0x3c(r31)
	lwz      r3, 0xc(r3)
	lbz      r30, 0x99(r3)
	bl       "getChildNum__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>Fv"
	clrlwi   r3, r3, 0x18
	addi     r0, r3, -1
	cmpw     r30, r0
	bge      lbl_8033AF78
	lhz      r3, 0x2a4(r31)
	lha      r0, 0xc0(r31)
	cmpw     r3, r0
	blt      lbl_8033AF78
	li       r3, 1
	b        lbl_8033B030

lbl_8033AF78:
	lbz      r4, 0x2c0(r31)
	slwi     r0, r4, 2
	add      r3, r31, r0
	lwz      r6, 0x2b8(r3)
	lbz      r5, 0x38(r6)
	cmplwi   r5, 0
	bne      lbl_8033AFB8
	addi     r3, r4, 1
	clrlwi   r0, r3, 0x18
	stb      r3, 0x2c0(r31)
	cmplwi   r0, 2
	blt      lbl_8033AFB0
	li       r0, 0
	stb      r0, 0x2c0(r31)

lbl_8033AFB0:
	li       r3, 2
	b        lbl_8033B030

lbl_8033AFB8:
	lbz      r3, 8(r6)
	addi     r3, r3, 1
	clrlwi   r0, r3, 0x18
	stb      r3, 8(r6)
	cmplw    r0, r5
	ble      lbl_8033AFD8
	li       r0, 0
	stb      r0, 8(r6)

lbl_8033AFD8:
	lbz      r0, 8(r6)
	cmplwi   r0, 0
	bne      lbl_8033B00C
	lbz      r3, 0x2c0(r31)
	addi     r3, r3, 1
	clrlwi   r0, r3, 0x18
	stb      r3, 0x2c0(r31)
	cmplwi   r0, 2
	blt      lbl_8033B004
	li       r0, 0
	stb      r0, 0x2c0(r31)

lbl_8033B004:
	li       r3, 2
	b        lbl_8033B030

lbl_8033B00C:
	clrlwi   r0, r0, 0x18
	cmplwi   r0, 1
	bne      lbl_8033B02C
	lwz      r0, 0x2b8(r31)
	cmplw    r6, r0
	bne      lbl_8033B02C
	li       r3, 3
	b        lbl_8033B030

lbl_8033B02C:
	li       r3, 0

lbl_8033B030:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033B048
 * Size:	000010
 */
void PSAutoBgm::CycleBase::cycleTop(JASTrack*)
{
	/*
	li       r0, 0
	stb      r0, 0x3c(r3)
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033B058
 * Size:	0001BC
 */
void PSAutoBgm::CycleBase::play(JASTrack*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	stw      r29, 0x24(r1)
	lwz      r6, 4(r3)
	lbz      r0, 0x120(r6)
	cmpwi    r0, 1
	bne      lbl_8033B128
	lbz      r5, 0x3c(r30)
	lbz      r0, 0x2b4(r6)
	cmplw    r5, r0
	bne      lbl_8033B0A0
	li       r3, 4
	b        lbl_8033B1F8

lbl_8033B0A0:
	lwz      r4, 0x3c(r6)
	lwz      r4, 0xc(r4)
	lwz      r4, 0x19c(r4)
	cmplwi   r4, 0
	bne      lbl_8033B0F4
	addi     r0, r5, 1
	rlwinm   r6, r5, 1, 0x17, 0x1e
	stb      r0, 0x3c(r30)
	lwz      r4, 4(r30)
	lwz      r12, 0(r3)
	lwz      r5, 0x2b0(r4)
	lwz      r12, 0x10(r12)
	add      r4, r5, r6
	lbzx     r5, r5, r6
	lbz      r0, 1(r4)
	rlwimi   r0, r5, 8, 0x10, 0x17
	clrlwi   r29, r0, 0x10
	mtctr    r12
	bctrl
	or       r5, r29, r3
	b        lbl_8033B10C

lbl_8033B0F4:
	addi     r0, r5, 1
	mr       r3, r4
	stb      r0, 0x3c(r30)
	lbz      r4, 0x99(r4)
	bl       "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
	lhz      r5, 0x2b6(r3)

lbl_8033B10C:
	lwz      r6, 4(r30)
	mr       r3, r31
	li       r4, 8
	sth      r5, 0x2b6(r6)
	bl       writePortAppDirect__8JASTrackFUlUs
	li       r3, 3
	b        lbl_8033B1F8

lbl_8033B128:
	lwz      r3, 0x3c(r6)
	lwz      r3, 0xc(r3)
	lwz      r3, 0x19c(r3)
	cmplwi   r3, 0
	bne      lbl_8033B1D0
	lis      r3, 0x0019660D@ha
	lwz      r4, oRandom__8PSSystem@sda21(r13)
	addi     r0, r3, 0x0019660D@l
	lbz      r5, 0x2b4(r6)
	mullw    r3, r4, r0
	lis      r0, 0x4330
	stw      r5, 0x14(r1)
	lfd      f2, lbl_8051E170@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f0, lbl_8051E16C@sda21(r2)
	addis    r3, r3, 0x3c6f
	lfd      f1, 0x10(r1)
	addi     r3, r3, -3233
	srwi     r0, r3, 9
	stw      r3, oRandom__8PSSystem@sda21(r13)
	oris     r0, r0, 0x3f80
	fsubs    f2, f1, f2
	stw      r0, 8(r1)
	lwz      r3, 4(r30)
	lfs      f1, 8(r1)
	lwz      r29, 0x2b0(r3)
	fsubs    f0, f1, f0
	fmuls    f1, f2, f0
	bl       __cvt_fp2unsigned
	rlwinm   r0, r3, 1, 0xf, 0x1e
	lwz      r12, 0(r30)
	lbzx     r5, r29, r0
	add      r4, r29, r0
	lbz      r0, 1(r4)
	mr       r3, r30
	rlwimi   r0, r5, 8, 0x10, 0x17
	lwz      r12, 0x10(r12)
	clrlwi   r29, r0, 0x10
	mtctr    r12
	bctrl
	or       r29, r29, r3
	b        lbl_8033B1DC

lbl_8033B1D0:
	lbz      r4, 0x99(r3)
	bl       "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
	lhz      r29, 0x2b6(r3)

lbl_8033B1DC:
	mr       r3, r31
	mr       r5, r29
	li       r4, 8
	bl       writePortAppDirect__8JASTrackFUlUs
	lwz      r4, 4(r30)
	li       r3, 1
	sth      r29, 0x2b6(r4)

lbl_8033B1F8:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033B214
 * Size:	000078
 */
void PSAutoBgm::CycleBase::checkCloser(JASTrack*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r5, 4(r3)
	lbz      r0, 0x120(r5)
	cmpwi    r0, 1
	bne      lbl_8033B248
	lbz      r4, 0x3c(r3)
	lbz      r0, 0x2b4(r5)
	cmplw    r4, r0
	beq      lbl_8033B248
	li       r3, 0
	b        lbl_8033B27C

lbl_8033B248:
	lbz      r4, 8(r3)
	lbz      r0, 0x38(r3)
	cmplw    r4, r0
	bne      lbl_8033B278
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_8033B278
	li       r3, 1
	b        lbl_8033B27C

lbl_8033B278:
	li       r3, 0

lbl_8033B27C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033B28C
 * Size:	000184
 */
PSAutoBgm::OnCycle::OnCycle(PSAutoBgm::Module*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stmw     r26, 8(r1)
	mr       r30, r3
	lis      r3, __vt__Q29PSAutoBgm9CycleBase@ha
	addi     r3, r3, __vt__Q29PSAutoBgm9CycleBase@l
	mr       r5, r30
	mr       r31, r5
	addi     r26, r31, 0xc
	stw      r3, 0(r30)
	mr       r3, r26
	stw      r4, 4(r5)
	stb      r0, 8(r5)
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q210JADUtility7PrmBase@l
	mr       r4, r26
	stw      r3, 0(r26)
	addi     r3, r26, 0x1c
	stb      r0, 0x18(r26)
	bl       __ct__10JSUPtrLinkFPv
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	lis      r4, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	addi     r29, r30, 0x40
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	stw      r0, 0(r26)
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	addi     r5, r4, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
	stw      r0, 0(r26)
	lis      r3, __vt__Q29PSAutoBgm7OnCycle@ha
	addi     r0, r3, __vt__Q29PSAutoBgm7OnCycle@l
	li       r4, 0
	stw      r5, 0(r26)
	mr       r3, r29
	stb      r4, 0x3c(r31)
	stw      r0, 0(r30)
	bl       initiate__10JSUPtrListFv
	li       r0, 2
	addi     r26, r29, 0x10
	sth      r0, 0xc(r29)
	mr       r3, r26
	bl       initiate__10JSUPtrListFv
	li       r0, 2
	li       r3, 0x38
	sth      r0, 0xc(r26)
	sth      r0, 0x20(r29)
	bl       __nwa__FUl
	lis      r4, "__ct__Q29PSAutoBgm11PrmLink<Us>Fv"@ha
	lis      r5, "__dt__Q29PSAutoBgm11PrmLink<Us>Fv"@ha
	addi     r4, r4, "__ct__Q29PSAutoBgm11PrmLink<Us>Fv"@l
	li       r6, 0x14
	addi     r5, r5, "__dt__Q29PSAutoBgm11PrmLink<Us>Fv"@l
	li       r7, 2
	bl       __construct_new_array
	lis      r4, 0x0000FFFF@ha
	mr       r28, r3
	addi     r31, r4, 0x0000FFFF@l
	li       r27, 0
	b        lbl_8033B3CC

lbl_8033B388:
	clrlwi   r0, r27, 0x18
	mulli    r0, r0, 0x14
	add      r26, r28, r0
	sth      r31, 0x10(r26)
	lwz      r3, 8(r29)
	lhz      r0, 0xc(r29)
	cmplw    r3, r0
	blt      lbl_8033B3BC
	lwz      r4, 0(r29)
	cmplwi   r4, 0
	beq      lbl_8033B3BC
	mr       r3, r29
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_8033B3BC:
	mr       r3, r29
	mr       r4, r26
	bl       append__10JSUPtrListFP10JSUPtrLink
	addi     r27, r27, 1

lbl_8033B3CC:
	clrlwi   r0, r27, 0x18
	cmpwi    r0, 2
	blt      lbl_8033B388
	li       r3, 8
	bl       __nwa__FUl
	stw      r3, 0x24(r29)
	li       r0, 0
	mr       r3, r30
	lwz      r4, 0x24(r29)
	stw      r0, 0(r4)
	lwz      r4, 0x24(r29)
	stw      r0, 4(r4)
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033B410
 * Size:	000058
 */
void PSAutoBgm::PrmLink<unsigned short>::~PrmLink()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8033B44C
	beq      lbl_8033B43C
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033B43C:
	extsh.   r0, r31
	ble      lbl_8033B44C
	mr       r3, r30
	bl       __dl__FPv

lbl_8033B44C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033B468
 * Size:	000360
 */
void PSAutoBgm::OnCycle::play(JASTrack*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	stw      r29, 0x24(r1)
	lwz      r6, 4(r3)
	lbz      r0, 0x120(r6)
	cmpwi    r0, 1
	bne      lbl_8033B634
	bne      lbl_8033B53C
	lbz      r5, 0x3c(r30)
	lbz      r0, 0x2b4(r6)
	cmplw    r5, r0
	bne      lbl_8033B4B4
	li       r0, 4
	b        lbl_8033B60C

lbl_8033B4B4:
	lwz      r4, 0x3c(r6)
	lwz      r4, 0xc(r4)
	lwz      r4, 0x19c(r4)
	cmplwi   r4, 0
	bne      lbl_8033B508
	addi     r0, r5, 1
	rlwinm   r6, r5, 1, 0x17, 0x1e
	stb      r0, 0x3c(r30)
	lwz      r4, 4(r30)
	lwz      r12, 0(r3)
	lwz      r5, 0x2b0(r4)
	lwz      r12, 0x10(r12)
	add      r4, r5, r6
	lbzx     r5, r5, r6
	lbz      r0, 1(r4)
	rlwimi   r0, r5, 8, 0x10, 0x17
	clrlwi   r29, r0, 0x10
	mtctr    r12
	bctrl
	or       r5, r29, r3
	b        lbl_8033B520

lbl_8033B508:
	addi     r0, r5, 1
	mr       r3, r4
	stb      r0, 0x3c(r30)
	lbz      r4, 0x99(r4)
	bl       "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
	lhz      r5, 0x2b6(r3)

lbl_8033B520:
	lwz      r6, 4(r30)
	mr       r3, r31
	li       r4, 8
	sth      r5, 0x2b6(r6)
	bl       writePortAppDirect__8JASTrackFUlUs
	li       r0, 3
	b        lbl_8033B60C

lbl_8033B53C:
	lwz      r3, 0x3c(r6)
	lwz      r3, 0xc(r3)
	lwz      r3, 0x19c(r3)
	cmplwi   r3, 0
	bne      lbl_8033B5E4
	lis      r3, 0x0019660D@ha
	lwz      r4, oRandom__8PSSystem@sda21(r13)
	addi     r0, r3, 0x0019660D@l
	lbz      r5, 0x2b4(r6)
	mullw    r3, r4, r0
	lis      r0, 0x4330
	stw      r5, 0x14(r1)
	lfd      f2, lbl_8051E170@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f0, lbl_8051E16C@sda21(r2)
	addis    r3, r3, 0x3c6f
	lfd      f1, 0x10(r1)
	addi     r3, r3, -3233
	srwi     r0, r3, 9
	stw      r3, oRandom__8PSSystem@sda21(r13)
	oris     r0, r0, 0x3f80
	fsubs    f2, f1, f2
	stw      r0, 0xc(r1)
	lwz      r3, 4(r30)
	lfs      f1, 0xc(r1)
	lwz      r29, 0x2b0(r3)
	fsubs    f0, f1, f0
	fmuls    f1, f2, f0
	bl       __cvt_fp2unsigned
	rlwinm   r0, r3, 1, 0xf, 0x1e
	lwz      r12, 0(r30)
	lbzx     r5, r29, r0
	add      r4, r29, r0
	lbz      r0, 1(r4)
	mr       r3, r30
	rlwimi   r0, r5, 8, 0x10, 0x17
	lwz      r12, 0x10(r12)
	clrlwi   r29, r0, 0x10
	mtctr    r12
	bctrl
	or       r29, r29, r3
	b        lbl_8033B5F0

lbl_8033B5E4:
	lbz      r4, 0x99(r3)
	bl       "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
	lhz      r29, 0x2b6(r3)

lbl_8033B5F0:
	mr       r3, r31
	mr       r5, r29
	li       r4, 8
	bl       writePortAppDirect__8JASTrackFUlUs
	lwz      r3, 4(r30)
	li       r0, 1
	sth      r29, 0x2b6(r3)

lbl_8033B60C:
	clrlwi   r0, r0, 0x10
	cmplwi   r0, 4
	bne      lbl_8033B620
	li       r3, 4
	b        lbl_8033B7AC

lbl_8033B620:
	mr       r3, r30
	mr       r4, r31
	bl       setTip__Q29PSAutoBgm7OnCycleFP8JASTrack
	li       r3, 2
	b        lbl_8033B7AC

lbl_8033B634:
	bl       setTip__Q29PSAutoBgm7OnCycleFP8JASTrack
	lwz      r5, 4(r30)
	lbz      r0, 0x120(r5)
	cmpwi    r0, 1
	bne      lbl_8033B6DC
	lbz      r4, 0x3c(r30)
	lbz      r0, 0x2b4(r5)
	cmplw    r4, r0
	beq      lbl_8033B7A8
	lwz      r3, 0x3c(r5)
	lwz      r3, 0xc(r3)
	lwz      r3, 0x19c(r3)
	cmplwi   r3, 0
	bne      lbl_8033B6B0
	addi     r0, r4, 1
	mr       r3, r30
	stb      r0, 0x3c(r30)
	rlwinm   r0, r4, 1, 0x17, 0x1e
	lwz      r4, 4(r30)
	lwz      r12, 0(r30)
	lwz      r5, 0x2b0(r4)
	lwz      r12, 0x10(r12)
	add      r4, r5, r0
	lbzx     r5, r5, r0
	lbz      r0, 1(r4)
	rlwimi   r0, r5, 8, 0x10, 0x17
	clrlwi   r29, r0, 0x10
	mtctr    r12
	bctrl
	or       r5, r29, r3
	b        lbl_8033B6C4

lbl_8033B6B0:
	addi     r0, r4, 1
	stb      r0, 0x3c(r30)
	lbz      r4, 0x99(r3)
	bl       "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
	lhz      r5, 0x2b6(r3)

lbl_8033B6C4:
	lwz      r6, 4(r30)
	mr       r3, r31
	li       r4, 8
	sth      r5, 0x2b6(r6)
	bl       writePortAppDirect__8JASTrackFUlUs
	b        lbl_8033B7A8

lbl_8033B6DC:
	lwz      r3, 0x3c(r5)
	lwz      r3, 0xc(r3)
	lwz      r3, 0x19c(r3)
	cmplwi   r3, 0
	bne      lbl_8033B784
	lis      r3, 0x0019660D@ha
	lwz      r4, oRandom__8PSSystem@sda21(r13)
	addi     r0, r3, 0x0019660D@l
	lbz      r5, 0x2b4(r5)
	mullw    r3, r4, r0
	lis      r0, 0x4330
	stw      r5, 0x14(r1)
	lfd      f2, lbl_8051E170@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f0, lbl_8051E16C@sda21(r2)
	addis    r3, r3, 0x3c6f
	lfd      f1, 0x10(r1)
	addi     r3, r3, -3233
	srwi     r0, r3, 9
	stw      r3, oRandom__8PSSystem@sda21(r13)
	oris     r0, r0, 0x3f80
	fsubs    f2, f1, f2
	stw      r0, 8(r1)
	lwz      r3, 4(r30)
	lfs      f1, 8(r1)
	lwz      r29, 0x2b0(r3)
	fsubs    f0, f1, f0
	fmuls    f1, f2, f0
	bl       __cvt_fp2unsigned
	rlwinm   r0, r3, 1, 0xf, 0x1e
	lwz      r12, 0(r30)
	lbzx     r5, r29, r0
	add      r4, r29, r0
	lbz      r0, 1(r4)
	mr       r3, r30
	rlwimi   r0, r5, 8, 0x10, 0x17
	lwz      r12, 0x10(r12)
	clrlwi   r29, r0, 0x10
	mtctr    r12
	bctrl
	or       r29, r29, r3
	b        lbl_8033B790

lbl_8033B784:
	lbz      r4, 0x99(r3)
	bl       "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
	lhz      r29, 0x2b6(r3)

lbl_8033B790:
	mr       r3, r31
	mr       r5, r29
	li       r4, 8
	bl       writePortAppDirect__8JASTrackFUlUs
	lwz      r3, 4(r30)
	sth      r29, 0x2b6(r3)

lbl_8033B7A8:
	li       r3, 0

lbl_8033B7AC:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033B7C8
 * Size:	000274
 */
void PSAutoBgm::OnCycle::setTip(JASTrack*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r29, r4
	mr       r28, r3
	lwz      r4, 4(r3)
	lwz      r3, 0x3c(r4)
	lwz      r3, 0xc(r3)
	lwz      r3, 0x19c(r3)
	cmplwi   r3, 0
	bne      lbl_8033B9C8
	lbz      r31, 0x2ac(r4)
	cmplwi   r31, 1
	ble      lbl_8033B9C0
	lis      r3, 0x0019660D@ha
	lwz      r4, oRandom__8PSSystem@sda21(r13)
	addi     r3, r3, 0x0019660D@l
	lis      r0, 0x4330
	mullw    r3, r4, r3
	stw      r31, 0x14(r1)
	lfd      f2, lbl_8051E170@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f0, lbl_8051E16C@sda21(r2)
	lfd      f1, 0x10(r1)
	addis    r3, r3, 0x3c6f
	fsubs    f2, f1, f2
	addi     r3, r3, -3233
	srwi     r0, r3, 9
	stw      r3, oRandom__8PSSystem@sda21(r13)
	oris     r0, r0, 0x3f80
	stw      r0, 0xc(r1)
	lfs      f1, 0xc(r1)
	fsubs    f0, f1, f0
	fmuls    f1, f2, f0
	bl       __cvt_fp2unsigned
	clrlwi   r30, r3, 0x10
	mr       r3, r28
	bl       historiesAreSameAll__Q29PSAutoBgm7OnCycleFv
	mr       r27, r3
	clrlwi   r0, r3, 0x10
	cmplwi   r0, 0xffff
	beq      lbl_8033B8E8
	cmplw    r0, r30
	bne      lbl_8033B8E8
	lis      r3, 0x0019660D@ha
	lwz      r4, oRandom__8PSSystem@sda21(r13)
	addi     r0, r3, 0x0019660D@l
	addi     r3, r31, -1
	mullw    r4, r4, r0
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f2, lbl_8051E170@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f0, lbl_8051E16C@sda21(r2)
	addis    r3, r4, 0x3c6f
	lfd      f1, 0x10(r1)
	addi     r3, r3, -3233
	srwi     r0, r3, 9
	fsubs    f2, f1, f2
	oris     r0, r0, 0x3f80
	stw      r3, oRandom__8PSSystem@sda21(r13)
	stw      r0, 8(r1)
	lfs      f1, 8(r1)
	fsubs    f0, f1, f0
	fmuls    f1, f2, f0
	bl       __cvt_fp2unsigned
	clrlwi   r30, r3, 0x10
	clrlwi   r0, r27, 0x10
	cmplw    r30, r0
	blt      lbl_8033B8E8
	addi     r30, r30, 1

lbl_8033B8E8:
	lwz      r27, 0x40(r28)
	cmplwi   r27, 0
	beq      lbl_8033B900
	mr       r4, r27
	addi     r3, r28, 0x40
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_8033B900:
	cmplwi   r27, 0
	bne      lbl_8033B920
	lwz      r27, 0x50(r28)
	cmplwi   r27, 0
	beq      lbl_8033B920
	mr       r4, r27
	addi     r3, r28, 0x50
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_8033B920:
	cmplwi   r27, 0
	bne      lbl_8033B944
	lis      r3, lbl_8048FED4@ha
	lis      r5, lbl_8048FE70@ha
	addi     r3, r3, lbl_8048FED4@l
	li       r4, 0x155
	addi     r5, r5, lbl_8048FE70@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033B944:
	lwz      r3, 0(r27)
	li       r31, 0
	sth      r30, 0(r3)
	lwz      r3, 0x58(r28)
	lhz      r0, 0x5c(r28)
	cmplw    r3, r0
	blt      lbl_8033B978
	lwz      r31, 0x50(r28)
	cmplwi   r31, 0
	beq      lbl_8033B978
	mr       r4, r31
	addi     r3, r28, 0x50
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_8033B978:
	mr       r4, r27
	addi     r3, r28, 0x50
	bl       append__10JSUPtrListFP10JSUPtrLink
	cmplwi   r31, 0
	beq      lbl_8033B9D4
	lwz      r3, 0x48(r28)
	lhz      r0, 0x4c(r28)
	cmplw    r3, r0
	blt      lbl_8033B9B0
	lwz      r4, 0x40(r28)
	cmplwi   r4, 0
	beq      lbl_8033B9B0
	addi     r3, r28, 0x40
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_8033B9B0:
	mr       r4, r31
	addi     r3, r28, 0x40
	bl       append__10JSUPtrListFP10JSUPtrLink
	b        lbl_8033B9D4

lbl_8033B9C0:
	li       r30, 0
	b        lbl_8033B9D4

lbl_8033B9C8:
	lbz      r4, 0x99(r3)
	bl       "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
	lhz      r30, 0x2c2(r3)

lbl_8033B9D4:
	lwz      r4, 4(r28)
	clrlwi   r0, r30, 0x10
	mulli    r0, r0, 3
	mr       r3, r29
	sth      r30, 0x2c2(r4)
	li       r4, 6
	lwz      r5, 4(r28)
	lwz      r5, 0x2a8(r5)
	add      r6, r5, r0
	lbzx     r5, r5, r0
	lbz      r0, 1(r6)
	lbz      r6, 2(r6)
	slwi     r0, r0, 8
	rlwimi   r0, r5, 0x10, 8, 0xf
	or       r27, r6, r0
	srwi     r5, r27, 0x10
	bl       writePortAppDirect__8JASTrackFUlUs
	clrlwi   r5, r27, 0x10
	mr       r3, r29
	li       r4, 7
	bl       writePortAppDirect__8JASTrackFUlUs
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033BA3C
 * Size:	00005C
 */
void PSAutoBgm::OnCycle::historiesAreSameAll()
{
	/*
	lwz      r4, 0x58(r3)
	lhz      r0, 0x60(r3)
	cmplw    r4, r0
	bge      lbl_8033BA58
	lis      r3, 0x0000FFFF@ha
	addi     r3, r3, 0x0000FFFF@l
	blr

lbl_8033BA58:
	lwz      r4, 0x50(r3)
	lwz      r3, 0(r4)
	lwz      r5, 0xc(r4)
	lhz      r3, 0(r3)
	b        lbl_8033BA8C

lbl_8033BA6C:
	lwz      r4, 0(r5)
	lhz      r0, 0(r4)
	cmplw    r3, r0
	beq      lbl_8033BA88
	lis      r3, 0x0000FFFF@ha
	addi     r3, r3, 0x0000FFFF@l
	blr

lbl_8033BA88:
	lwz      r5, 0xc(r5)

lbl_8033BA8C:
	cmplwi   r5, 0
	bne      lbl_8033BA6C
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033BA98
 * Size:	0000BC
 */
void PSAutoBgm::OnCycle::avoidCheck()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r4, 4(r3)
	lbz      r31, 8(r3)
	lwz      r3, 0x3c(r4)
	lwz      r30, 0xc(r3)
	lwz      r3, 0x3c(r30)
	lbz      r0, 0x98(r30)
	lwz      r3, 0xc(r3)
	cmplwi   r0, 0x10
	lwz      r3, 0xb4(r3)
	addi     r29, r3, 0x33c
	blt      lbl_8033BAF8
	lis      r3, lbl_8048FE60@ha
	lis      r5, lbl_8048FE70@ha
	addi     r3, r3, lbl_8048FE60@l
	li       r4, 0x1e4
	addi     r5, r5, lbl_8048FE70@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033BAF8:
	li       r0, 0xff
	mr       r3, r29
	stb      r0, 8(r1)
	addi     r4, r1, 8
	stb      r0, 9(r1)
	lbz      r0, 0x98(r30)
	stb      r0, 8(r1)
	stb      r31, 9(r1)
	bl       isToAvoid__Q29PSAutoBgm10MeloArrMgrFRQ29PSAutoBgm10MeloArrArg
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	bne      lbl_8033BB34
	lis      r3, 0x00008000@ha
	addi     r3, r3, 0x00008000@l
	b        lbl_8033BB38

lbl_8033BB34:
	li       r3, 0

lbl_8033BB38:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033BB54
 * Size:	0000B0
 */
PSAutoBgm::OffCycle::OffCycle(PSAutoBgm::Module*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, __vt__Q29PSAutoBgm9CycleBase@ha
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r5, __vt__Q29PSAutoBgm9CycleBase@l
	stw      r3, 0(r30)
	addi     r31, r30, 0xc
	mr       r3, r31
	stw      r4, 4(r30)
	stb      r0, 8(r30)
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q210JADUtility7PrmBase@l
	mr       r4, r31
	stw      r3, 0(r31)
	addi     r3, r31, 0x1c
	stb      r0, 0x18(r31)
	bl       __ct__10JSUPtrLinkFPv
	lis      r4, "__vt__Q210JADUtility7Prm<Uc>"@ha
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	addi     r0, r4, "__vt__Q210JADUtility7Prm<Uc>"@l
	lis      r4, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
	stw      r0, 0(r31)
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	lis      r3, __vt__Q29PSAutoBgm8OffCycle@ha
	addi     r5, r4, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
	stw      r0, 0(r31)
	li       r4, 0
	addi     r0, r3, __vt__Q29PSAutoBgm8OffCycle@l
	mr       r3, r30
	stw      r5, 0(r31)
	stb      r4, 0x3c(r30)
	stw      r0, 0(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033BC04
 * Size:	00015C
 */
PSAutoBgm::AutoBgm::AutoBgm(const char*, const char*, const JAInter::SoundInfo&, JADUtility::AccessMode, PSSystem::DirectorMgrBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r7, 0x8049
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r30, r4
	  mr        r4, r5
	  mr        r5, r6
	  mr        r29, r3
	  mr        r6, r8
	  subi      r31, r7, 0x1A0
	  bl        -0x9380
	  lis       r3, 0x804E
	  addi      r28, r29, 0xB8
	  subi      r0, r3, 0x5528
	  stw       r0, 0x10(r29)
	  addi      r3, r28, 0x258
	  stw       r3, 0xB8(r29)
	  bl        -0x281454
	  mr        r3, r28
	  li        r4, 0
	  bl        -0x2811D0
	  lis       r4, 0x804E
	  lis       r3, 0x804E
	  subi      r4, r4, 0x5474
	  addi      r27, r29, 0x33C
	  stw       r4, 0x4(r28)
	  subi      r5, r3, 0x54B4
	  addi      r7, r4, 0x2C
	  addi      r8, r28, 0x258
	  lwz       r4, 0x0(r28)
	  li        r6, 0
	  addi      r0, r5, 0x30
	  mr        r3, r27
	  stw       r7, 0x0(r4)
	  li        r4, 0
	  lwz       r9, 0x0(r28)
	  sub       r7, r8, r9
	  stw       r7, 0x1C(r9)
	  stw       r6, 0x250(r28)
	  stw       r29, 0x254(r28)
	  stw       r5, 0x4(r28)
	  lwz       r5, 0x0(r28)
	  stw       r0, 0x0(r5)
	  lwz       r5, 0x0(r28)
	  sub       r0, r8, r5
	  stw       r0, 0x1C(r5)
	  stw       r6, 0x338(r29)
	  bl        -0x281AD8
	  lis       r4, 0x804E
	  addi      r3, r27, 0x4
	  subi      r0, r4, 0x54C0
	  stw       r0, 0x0(r27)
	  bl        -0x315408
	  li        r0, 0
	  mr        r3, r30
	  sth       r0, 0x10(r27)
	  stb       r0, 0x12(r27)
	  bl        -0x2713DC
	  addi      r3, r3, 0x1
	  bl        -0x317D48
	  stw       r3, 0x330(r29)
	  mr        r4, r30
	  lwz       r3, 0x330(r29)
	  bl        -0x2714AC
	  lwz       r0, -0x6794(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  addi      r3, r31, 0x74
	  addi      r5, r31, 0x10
	  li        r4, 0x2DE
	  crclr     6, 0x6
	  bl        -0x3116E4

	.loc_0x124:
	  lwz       r0, -0x6794(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x144
	  addi      r3, r31, 0
	  addi      r5, r31, 0x10
	  li        r4, 0x477
	  crclr     6, 0x6
	  bl        -0x311704

	.loc_0x144:
	  mr        r3, r29
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033BD60
 * Size:	000078
 */
PSAutoBgm::MeloArrMgr::~MeloArrMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8033BDBC
	lis      r3, __vt__Q29PSAutoBgm10MeloArrMgr@ha
	addic.   r0, r30, 4
	addi     r0, r3, __vt__Q29PSAutoBgm10MeloArrMgr@l
	stw      r0, 0(r30)
	beq      lbl_8033BDA0
	addi     r3, r30, 4
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_8033BDA0:
	mr       r3, r30
	li       r4, 0
	bl       __dt__10JADHioNodeFv
	extsh.   r0, r31
	ble      lbl_8033BDBC
	mr       r3, r30
	bl       __dl__FPv

lbl_8033BDBC:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033BDD8
 * Size:	000154
 */
PSAutoBgm::ConductorMgr::~ConductorMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8033BF10
	lis      r3, __vt__Q29PSAutoBgm12ConductorMgr@ha
	addi     r4, r30, 0x258
	addi     r3, r3, __vt__Q29PSAutoBgm12ConductorMgr@l
	stw      r3, 4(r30)
	addi     r0, r3, 0x30
	lwz      r3, 0(r30)
	stw      r0, 0(r3)
	lwz      r3, 0(r30)
	subf     r0, r3, r4
	stw      r0, 0x1c(r3)
	beq      lbl_8033BEEC
	lis      r3,
"__vt__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>"@ha
	addi     r3, r3,
"__vt__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>"@l
	stw      r3, 4(r30)
	addi     r0, r3, 0x2c
	lwz      r3, 0(r30)
	stw      r0, 0(r3)
	lwz      r3, 0(r30)
	subf     r0, r3, r4
	stw      r0, 0x1c(r3)
	beq      lbl_8033BEEC
	lis      r4, __vt__Q210JADUtility11DataMgrNode@ha
	addi     r3, r30, 0x250
	addi     r4, r4, __vt__Q210JADUtility11DataMgrNode@l
	addic.   r0, r30, 0x214
	stw      r4, 4(r30)
	addi     r0, r4, 0x2c
	lwz      r4, 0(r30)
	stw      r0, 0(r4)
	lwz      r4, 0(r30)
	subf     r0, r4, r3
	stw      r0, 0x1c(r4)
	beq      lbl_8033BEE0
	lis      r3, __vt__Q210JADUtility6StrPrm@ha
	addic.   r0, r30, 0x214
	addi     r0, r3, __vt__Q210JADUtility6StrPrm@l
	stw      r0, 0x214(r30)
	beq      lbl_8033BEE0
	lis      r3, "__vt__Q210JADUtility10PrmHio<Pc>"@ha
	addic.   r0, r30, 0x214
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Pc>"@l
	stw      r0, 0x214(r30)
	beq      lbl_8033BEE0
	lis      r3, "__vt__Q210JADUtility7Prm<Pc>"@ha
	addic.   r0, r30, 0x214
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Pc>"@l
	stw      r0, 0x214(r30)
	beq      lbl_8033BEE0
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r30, 0x230
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0x214(r30)
	beq      lbl_8033BED4
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033BED4:
	addi     r3, r30, 0x214
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_8033BEE0:
	mr       r3, r30
	li       r4, 0
	bl       __dt__Q210JADUtility15DataLoadMgrNodeFv

lbl_8033BEEC:
	extsh.   r0, r31
	beq      lbl_8033BF00
	addi     r3, r30, 0x258
	li       r4, 0
	bl       __dt__Q210JADUtility11DataMgrBaseFv

lbl_8033BF00:
	extsh.   r0, r31
	ble      lbl_8033BF10
	mr       r3, r30
	bl       __dl__FPv

lbl_8033BF10:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033BF2C
 * Size:	00012C
 */
void JADUtility::PrmDataMgrNode<PSAutoBgm::Conductor, PSAutoBgm::AutoBgm>::~PrmDataMgrNode()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x110
	  lis       r3, 0x804E
	  addi      r0, r30, 0x258
	  subi      r3, r3, 0x5474
	  stw       r3, 0x4(r30)
	  addi      r4, r3, 0x2C
	  lwz       r3, 0x0(r30)
	  stw       r4, 0x0(r3)
	  lwz       r3, 0x0(r30)
	  sub       r0, r0, r3
	  stw       r0, 0x1C(r3)
	  beq-      .loc_0xEC
	  lis       r4, 0x804A
	  addi      r3, r30, 0x250
	  addi      r4, r4, 0x6788
	  addic.    r0, r30, 0x214
	  stw       r4, 0x4(r30)
	  addi      r0, r4, 0x2C
	  lwz       r4, 0x0(r30)
	  stw       r0, 0x0(r4)
	  lwz       r4, 0x0(r30)
	  sub       r0, r3, r4
	  stw       r0, 0x1C(r4)
	  beq-      .loc_0xE0
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x214
	  addi      r0, r3, 0x6738
	  stw       r0, 0x214(r30)
	  beq-      .loc_0xE0
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x214
	  addi      r0, r3, 0x674C
	  stw       r0, 0x214(r30)
	  beq-      .loc_0xE0
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x214
	  addi      r0, r3, 0x6760
	  stw       r0, 0x214(r30)
	  beq-      .loc_0xE0
	  lis       r4, 0x804A
	  addic.    r3, r30, 0x230
	  addi      r0, r4, 0x6774
	  stw       r0, 0x214(r30)
	  beq-      .loc_0xD4
	  li        r4, 0
	  bl        -0x31582C

	.loc_0xD4:
	  addi      r3, r30, 0x214
	  li        r4, 0
	  bl        -0x31EFD4

	.loc_0xE0:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x281760

	.loc_0xEC:
	  extsh.    r0, r31
	  beq-      .loc_0x100
	  addi      r3, r30, 0x258
	  li        r4, 0
	  bl        -0x2817EC

	.loc_0x100:
	  extsh.    r0, r31
	  ble-      .loc_0x110
	  mr        r3, r30
	  bl        -0x317F84

	.loc_0x110:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033C058
 * Size:	000150
 */
void PSAutoBgm::AutoBgm::startSeq()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stfd     f29, 0x20(r1)
	psq_st   f29, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	bl       startSeq__Q28PSSystem11DirectedBgmFv
	mr       r3, r28
	lwz      r12, 0x10(r28)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_8033C170
	mr       r3, r28
	lwz      r12, 0x10(r28)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r29, 0(r3)
	li       r30, 0
	lwz      r28, 0x308(r28)
	lis      r31, 0x4330
	lfd      f29, lbl_8051E170@sda21(r2)
	lfs      f30, lbl_8051E164@sda21(r2)
	lfs      f31, lbl_8051E168@sda21(r2)
	b        lbl_8033C158

lbl_8033C0E8:
	mr       r3, r28
	mr       r4, r30
	bl       "getChild__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>FUc"
	stb      r30, 0x98(r3)
	mr       r3, r28
	mr       r4, r30
	bl       "getChild__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>FUc"
	mr       r4, r3
	stw      r31, 8(r1)
	lbz      r0, 0x198(r3)
	mr       r3, r29
	lbz      r4, 0x98(r4)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f29
	fdivs    f0, f0, f30
	fcmpo    cr0, f0, f31
	bge      lbl_8033C138
	fmr      f1, f31
	b        lbl_8033C14C

lbl_8033C138:
	lfs      f1, lbl_8051E16C@sda21(r2)
	fcmpo    cr0, f0, f1
	ble      lbl_8033C148
	b        lbl_8033C14C

lbl_8033C148:
	fmr      f1, f0

lbl_8033C14C:
	li       r5, 0
	bl       setTrackFxmix__11JAISequenceFUcfUl
	addi     r30, r30, 1

lbl_8033C158:
	mr       r3, r28
	bl       "getChildNum__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>Fv"
	clrlwi   r3, r3, 0x18
	clrlwi   r0, r30, 0x18
	cmplw    r0, r3
	blt      lbl_8033C0E8

lbl_8033C170:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	psq_l    f29, 40(r1), 0, qr0
	lfd      f29, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x54(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033C1A8
 * Size:	000044
 */
void PSAutoBgm::AutoBgm::scene1st(PSSystem::TaskChecker*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       scene1st__Q28PSSystem7SeqBaseFPQ28PSSystem11TaskChecker
	mr       r3, r30
	mr       r4, r31
	bl       loadConductor__Q29PSAutoBgm7AutoBgmFPQ28PSSystem11TaskChecker
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033C1EC
 * Size:	000180
 */
void PSAutoBgm::AutoBgm::loadConductor(PSSystem::TaskChecker*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_8048FE60@ha
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r26, r3
	mr       r31, r4
	addi     r29, r5, lbl_8048FE60@l
	lwz      r0, sInstance__Q29PSAutoBgm15ConductorArcMgr@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8033C22C
	addi     r3, r29, 0x74
	addi     r5, r29, 0x10
	li       r4, 0x2de
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033C22C:
	lwz      r3, sInstance__Q29PSAutoBgm15ConductorArcMgr@sda21(r13)
	lwz      r28, 4(r3)
	cmplwi   r28, 0
	bne      lbl_8033C250
	addi     r3, r29, 0
	addi     r5, r29, 0x10
	li       r4, 0x4a8
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033C250:
	lwz      r4, 0x330(r26)
	mr       r3, r28
	bl       findNameResource__10JKRArchiveCFPCc
	or.      r30, r3, r3
	bne      lbl_8033C27C
	lwz      r6, 0x330(r26)
	addi     r3, r29, 0
	addi     r5, r29, 0x80
	li       r4, 0x4ab
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033C27C:
	lwz      r0, 0x338(r26)
	lwz      r3, 0xc(r30)
	cmplwi   r0, 0
	addi     r0, r3, 0x1f
	rlwinm   r27, r0, 0, 0, 0x1a
	beq      lbl_8033C2A8
	addi     r3, r29, 0
	addi     r5, r29, 0x10
	li       r4, 0x4b5
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033C2A8:
	mr       r3, r27
	li       r4, -32
	li       r5, 0
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 0x338(r26)
	lwz      r0, 0x338(r26)
	cmplwi   r0, 0
	bne      lbl_8033C2DC
	addi     r3, r29, 0
	addi     r5, r29, 0x10
	li       r4, 0x4b7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033C2DC:
	cmplwi   r31, 0
	mr       r29, r26
	beq      lbl_8033C304
	mr       r3, r31
	bl       OSLockMutex
	lbz      r4, 0x18(r31)
	mr       r3, r31
	addi     r0, r4, 1
	stb      r0, 0x18(r31)
	bl       OSUnlockMutex

lbl_8033C304:
	lis      r3, loadedCallback__Q29PSAutoBgm7AutoBgmFUlUl@ha
	lhz      r4, 0(r30)
	addi     r7, r3, loadedCallback__Q29PSAutoBgm7AutoBgmFUlUl@l
	lwz      r5, 0x338(r26)
	mr       r3, r28
	mr       r6, r27
	mr       r8, r29
	bl       loadResourceAsync__15JASResArcLoaderFP10JKRArchiveUsPUcUlPFUlUl_vUl
	cmpwi    r3, 1
	bne      lbl_8033C334
	stw      r31, 0x334(r26)
	b        lbl_8033C358

lbl_8033C334:
	cmplwi   r31, 0
	beq      lbl_8033C358
	mr       r3, r31
	bl       OSLockMutex
	lbz      r4, 0x18(r31)
	mr       r3, r31
	addi     r0, r4, -1
	stb      r0, 0x18(r31)
	bl       OSUnlockMutex

lbl_8033C358:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033C36C
 * Size:	000074
 */
void PSAutoBgm::AutoBgm::loadedCallback(unsigned long, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r3
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	addi     r3, r31, 0xb8
	lwz      r4, 0x338(r4)
	bl       initInstanceExt__Q210JADUtility15DataLoadMgrNodeFPvl
	lwz      r3, 0x338(r31)
	li       r4, 0
	bl       free__7JKRHeapFPvP7JKRHeap
	li       r0, 0
	stw      r0, 0x338(r31)
	lwz      r31, 0x334(r31)
	cmplwi   r31, 0
	beq      lbl_8033C3CC
	mr       r3, r31
	bl       OSLockMutex
	lbz      r4, 0x18(r31)
	mr       r3, r31
	addi     r0, r4, -1
	stb      r0, 0x18(r31)
	bl       OSUnlockMutex

lbl_8033C3CC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033C3E0
 * Size:	000168
 */
void PSAutoBgm::AutoBgm::pauseOn(PSSystem::SeqBase::PauseMode)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_8033C52C
	stw      r30, 0x44(r29)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_8033C444
	lis      r3, lbl_8048FE60@ha
	lis      r5, lbl_8048FE70@ha
	addi     r3, r3, lbl_8048FE60@l
	li       r4, 0x51e
	addi     r5, r5, lbl_8048FE70@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033C444:
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	cmpwi    r30, 2
	lwz      r3, 0(r3)
	li       r31, 0
	beq      lbl_8033C4B0
	bge      lbl_8033C47C
	cmpwi    r30, 0
	beq      lbl_8033C488
	bge      lbl_8033C490
	b        lbl_8033C4FC

lbl_8033C47C:
	cmpwi    r30, 4
	bge      lbl_8033C4FC
	b        lbl_8033C4D0

lbl_8033C488:
	li       r0, 1
	stw      r0, 0x44(r29)

lbl_8033C490:
	cmplwi   r3, 0
	beq      lbl_8033C4A8
	li       r4, 1
	li       r5, 0
	bl       setPauseMode__8JAISoundFUcUc
	b        lbl_8033C518

lbl_8033C4A8:
	li       r31, 1
	b        lbl_8033C518

lbl_8033C4B0:
	cmplwi   r3, 0
	beq      lbl_8033C4C8
	lbz      r5, 0x48(r29)
	li       r4, 1
	bl       setPauseMode__8JAISoundFUcUc
	b        lbl_8033C518

lbl_8033C4C8:
	li       r31, 1
	b        lbl_8033C518

lbl_8033C4D0:
	cmplwi   r3, 0
	beq      lbl_8033C4F4
	mr       r3, r29
	li       r4, 0
	lwz      r12, 0x10(r29)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	b        lbl_8033C518

lbl_8033C4F4:
	li       r31, 1
	b        lbl_8033C518

lbl_8033C4FC:
	lis      r3, lbl_8048FE60@ha
	lis      r5, lbl_8048FE70@ha
	addi     r3, r3, lbl_8048FE60@l
	li       r4, 0x548
	addi     r5, r5, lbl_8048FE70@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033C518:
	clrlwi   r0, r31, 0x18
	cmplwi   r0, 1
	bne      lbl_8033C52C
	li       r0, 4
	stw      r0, 0x44(r29)

lbl_8033C52C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033C548
 * Size:	000020
 */
void PSAutoBgm::AutoBgm::pauseOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       pauseOff__Q28PSSystem7SeqBaseFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033C568
 * Size:	000190
 */
void JADUtility::PrmSetRc<PSAutoBgm::Track>::~PrmSetRc()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8033C6DC
	lis      r3, "__vt__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>"@ha
	addi     r0, r3, "__vt__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>"@l
	stw      r0, 0(r30)
	b        lbl_8033C5B8

lbl_8033C598:
	cmplwi   r4, 0
	beq      lbl_8033C5A4
	addi     r4, r4, -12

lbl_8033C5A4:
	cmplwi   r4, 0
	beq      lbl_8033C5B0
	addi     r4, r4, 0xc

lbl_8033C5B0:
	addi     r3, r30, 0x2c
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_8033C5B8:
	lwz      r4, 0x2c(r30)
	cmplwi   r4, 0
	mr       r0, r4
	beq      lbl_8033C5CC
	addi     r0, r4, -12

lbl_8033C5CC:
	cmplwi   r0, 0
	bne      lbl_8033C598
	lis      r4, __dt__Q29PSAutoBgm5TrackFv@ha
	lwz      r3, 0x64(r30)
	addi     r4, r4, __dt__Q29PSAutoBgm5TrackFv@l
	bl       __destroy_new_array
	addic.   r0, r30, 0x68
	beq      lbl_8033C628
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addic.   r0, r30, 0x68
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	stw      r0, 0x68(r30)
	beq      lbl_8033C628
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r30, 0x84
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0x68(r30)
	beq      lbl_8033C61C
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033C61C:
	addi     r3, r30, 0x68
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_8033C628:
	cmplwi   r30, 0
	beq      lbl_8033C6CC
	lis      r3, __vt__Q210JADUtility10PrmSetBase@ha
	addi     r0, r3, __vt__Q210JADUtility10PrmSetBase@l
	stw      r0, 0(r30)
	b        lbl_8033C648

lbl_8033C640:
	addi     r3, r30, 0x1c
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_8033C648:
	lwz      r4, 0x1c(r30)
	cmplwi   r4, 0
	bne      lbl_8033C640
	addic.   r0, r30, 0x2c
	beq      lbl_8033C6AC
	lis      r3, __vt__Q210JADUtility10PrmSetTree@ha
	addic.   r0, r30, 0x2c
	addi     r0, r3, __vt__Q210JADUtility10PrmSetTree@l
	stw      r0, 0x48(r30)
	beq      lbl_8033C6AC
	lis      r3, "__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@ha
	addic.   r0, r30, 0x2c
	addi     r0, r3,
"__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@l stw      r0,
0x48(r30) beq      lbl_8033C6AC addic.   r0, r30, 0x38 beq      lbl_8033C698
	addi     r3, r30, 0x38
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033C698:
	addic.   r0, r30, 0x2c
	beq      lbl_8033C6AC
	addi     r3, r30, 0x2c
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_8033C6AC:
	addic.   r0, r30, 0x1c
	beq      lbl_8033C6C0
	addi     r3, r30, 0x1c
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_8033C6C0:
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_8033C6CC:
	extsh.   r0, r31
	ble      lbl_8033C6DC
	mr       r3, r30
	bl       __dl__FPv

lbl_8033C6DC:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033C6F8
 * Size:	0000C4
 */
JADUtility::StrEditBox::~StrEditBox()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8033C7A0
	lis      r3, __vt__Q210JADUtility10StrEditBox@ha
	addi     r0, r3, __vt__Q210JADUtility10StrEditBox@l
	stw      r0, 0(r30)
	lwz      r3, 0x2c(r30)
	bl       __dla__FPv
	cmplwi   r30, 0
	beq      lbl_8033C790
	lis      r3, __vt__Q210JADUtility6StrPrm@ha
	addi     r0, r3, __vt__Q210JADUtility6StrPrm@l
	stw      r0, 0(r30)
	beq      lbl_8033C790
	lis      r3, "__vt__Q210JADUtility10PrmHio<Pc>"@ha
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Pc>"@l
	stw      r0, 0(r30)
	beq      lbl_8033C790
	lis      r3, "__vt__Q210JADUtility7Prm<Pc>"@ha
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Pc>"@l
	stw      r0, 0(r30)
	beq      lbl_8033C790
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	addic.   r0, r30, 0x1c
	addi     r0, r3, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0(r30)
	beq      lbl_8033C784
	addi     r3, r30, 0x1c
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033C784:
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_8033C790:
	extsh.   r0, r31
	ble      lbl_8033C7A0
	mr       r3, r30
	bl       __dl__FPv

lbl_8033C7A0:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033C7BC
 * Size:	0000A8
 */
void JADUtility::PrmSlider<short>::~PrmSlider()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8033C848
	lis      r3, "__vt__Q210JADUtility12PrmSlider<s>"@ha
	addi     r0, r3, "__vt__Q210JADUtility12PrmSlider<s>"@l
	stw      r0, 0(r30)
	beq      lbl_8033C838
	lis      r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
	addi     r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
	stw      r0, 0(r30)
	beq      lbl_8033C838
	lis      r3, "__vt__Q210JADUtility6Prm<s>"@ha
	addi     r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
	stw      r0, 0(r30)
	beq      lbl_8033C838
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	addic.   r0, r30, 0x1c
	addi     r0, r3, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0(r30)
	beq      lbl_8033C82C
	addi     r3, r30, 0x1c
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033C82C:
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_8033C838:
	extsh.   r0, r31
	ble      lbl_8033C848
	mr       r3, r30
	bl       __dl__FPv

lbl_8033C848:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033C864
 * Size:	000098
 */
void JADUtility::PrmHio<short>::~PrmHio()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8033C8E0
	lis      r3, "__vt__Q210JADUtility9PrmHio<s>"@ha
	addi     r0, r3, "__vt__Q210JADUtility9PrmHio<s>"@l
	stw      r0, 0(r30)
	beq      lbl_8033C8D0
	lis      r3, "__vt__Q210JADUtility6Prm<s>"@ha
	addi     r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
	stw      r0, 0(r30)
	beq      lbl_8033C8D0
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	addic.   r0, r30, 0x1c
	addi     r0, r3, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0(r30)
	beq      lbl_8033C8C4
	addi     r3, r30, 0x1c
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033C8C4:
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_8033C8D0:
	extsh.   r0, r31
	ble      lbl_8033C8E0
	mr       r3, r30
	bl       __dl__FPv

lbl_8033C8E0:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033C8FC
 * Size:	000088
 */
void JADUtility::Prm<short>::~Prm()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8033C968
	lis      r3, "__vt__Q210JADUtility6Prm<s>"@ha
	addi     r0, r3, "__vt__Q210JADUtility6Prm<s>"@l
	stw      r0, 0(r30)
	beq      lbl_8033C958
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	addic.   r0, r30, 0x1c
	addi     r0, r3, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0(r30)
	beq      lbl_8033C94C
	addi     r3, r30, 0x1c
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033C94C:
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_8033C958:
	extsh.   r0, r31
	ble      lbl_8033C968
	mr       r3, r30
	bl       __dl__FPv

lbl_8033C968:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033C984
 * Size:	000190
 */
void JADUtility::PrmSetRc<PSAutoBgm::Module>::~PrmSetRc()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8033CAF8
	lis      r3, "__vt__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>"@ha
	addi     r0, r3, "__vt__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>"@l
	stw      r0, 0(r30)
	b        lbl_8033C9D4

lbl_8033C9B4:
	cmplwi   r4, 0
	beq      lbl_8033C9C0
	addi     r4, r4, -12

lbl_8033C9C0:
	cmplwi   r4, 0
	beq      lbl_8033C9CC
	addi     r4, r4, 0xc

lbl_8033C9CC:
	addi     r3, r30, 0x2c
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_8033C9D4:
	lwz      r4, 0x2c(r30)
	cmplwi   r4, 0
	mr       r0, r4
	beq      lbl_8033C9E8
	addi     r0, r4, -12

lbl_8033C9E8:
	cmplwi   r0, 0
	bne      lbl_8033C9B4
	lis      r4, __dt__Q29PSAutoBgm6ModuleFv@ha
	lwz      r3, 0x64(r30)
	addi     r4, r4, __dt__Q29PSAutoBgm6ModuleFv@l
	bl       __destroy_new_array
	addic.   r0, r30, 0x68
	beq      lbl_8033CA44
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	addic.   r0, r30, 0x68
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	stw      r0, 0x68(r30)
	beq      lbl_8033CA44
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r30, 0x84
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0x68(r30)
	beq      lbl_8033CA38
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033CA38:
	addi     r3, r30, 0x68
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_8033CA44:
	cmplwi   r30, 0
	beq      lbl_8033CAE8
	lis      r3, __vt__Q210JADUtility10PrmSetBase@ha
	addi     r0, r3, __vt__Q210JADUtility10PrmSetBase@l
	stw      r0, 0(r30)
	b        lbl_8033CA64

lbl_8033CA5C:
	addi     r3, r30, 0x1c
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_8033CA64:
	lwz      r4, 0x1c(r30)
	cmplwi   r4, 0
	bne      lbl_8033CA5C
	addic.   r0, r30, 0x2c
	beq      lbl_8033CAC8
	lis      r3, __vt__Q210JADUtility10PrmSetTree@ha
	addic.   r0, r30, 0x2c
	addi     r0, r3, __vt__Q210JADUtility10PrmSetTree@l
	stw      r0, 0x48(r30)
	beq      lbl_8033CAC8
	lis      r3, "__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@ha
	addic.   r0, r30, 0x2c
	addi     r0, r3,
"__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@l stw      r0,
0x48(r30) beq      lbl_8033CAC8 addic.   r0, r30, 0x38 beq      lbl_8033CAB4
	addi     r3, r30, 0x38
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033CAB4:
	addic.   r0, r30, 0x2c
	beq      lbl_8033CAC8
	addi     r3, r30, 0x2c
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_8033CAC8:
	addic.   r0, r30, 0x1c
	beq      lbl_8033CADC
	addi     r3, r30, 0x1c
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_8033CADC:
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_8033CAE8:
	extsh.   r0, r31
	ble      lbl_8033CAF8
	mr       r3, r30
	bl       __dl__FPv

lbl_8033CAF8:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033CB14
 * Size:	000008
 */
void JADUtility::PrmSetRc<PSAutoBgm::Track>::getChildNum()
{
	/*
	lbz      r3, 0x94(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033CB1C
 * Size:	000008
 */
u32 JADUtility::PrmSetRc<PSAutoBgm::Track>::getPrmObjHeap() { return 0x0; }

/*
 * --INFO--
 * Address:	8033CB24
 * Size:	000008
 */
void JADUtility::PrmSetRc<PSAutoBgm::Module>::getChildNum()
{
	/*
	lbz      r3, 0x94(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033CB2C
 * Size:	000008
 */
u32 JADUtility::PrmSetRc<PSAutoBgm::Module>::getPrmObjHeap() { return 0x0; }

/*
 * --INFO--
 * Address:	8033CB34
 * Size:	000090
 */
void JADUtility::Prm<short>::save(JSUMemoryOutputStream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r5, 2
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	addi     r4, r1, 0xa
	stw      r28, 0x10(r1)
	mr       r28, r3
	lha      r0, 0x2c(r3)
	mr       r3, r29
	sth      r0, 0xa(r1)
	bl       write__15JSUOutputStreamFPCvl
	li       r30, 0
	mr       r31, r30
	b        lbl_8033CB94

lbl_8033CB7C:
	stb      r31, 8(r1)
	mr       r3, r29
	addi     r4, r1, 8
	li       r5, 1
	bl       write__15JSUOutputStreamFPCvl
	addi     r30, r30, 1

lbl_8033CB94:
	lbz      r0, 0x18(r28)
	clrlwi   r3, r30, 0x18
	cmplw    r3, r0
	blt      lbl_8033CB7C
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033CBC4
 * Size:	000064
 */
void JADUtility::Prm<short>::load(JSUMemoryInputStream&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 2
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	addi     r4, r30, 0x2c
	bl       read__14JSUInputStreamFPvl
	lbz      r4, 0x18(r30)
	cmplwi   r4, 0
	beq      lbl_8033CC10
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8033CC10:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033CC28
 * Size:	000090
 */
void JADUtility::Prm<unsigned char>::save(JSUMemoryOutputStream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r5, 1
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	addi     r4, r1, 9
	stw      r28, 0x10(r1)
	mr       r28, r3
	lbz      r0, 0x2c(r3)
	mr       r3, r29
	stb      r0, 9(r1)
	bl       write__15JSUOutputStreamFPCvl
	li       r30, 0
	mr       r31, r30
	b        lbl_8033CC88

lbl_8033CC70:
	stb      r31, 8(r1)
	mr       r3, r29
	addi     r4, r1, 8
	li       r5, 1
	bl       write__15JSUOutputStreamFPCvl
	addi     r30, r30, 1

lbl_8033CC88:
	lbz      r0, 0x18(r28)
	clrlwi   r3, r30, 0x18
	cmplw    r3, r0
	blt      lbl_8033CC70
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033CCB8
 * Size:	000064
 */
void JADUtility::Prm<unsigned char>::load(JSUMemoryInputStream&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 1
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	addi     r4, r30, 0x2c
	bl       read__14JSUInputStreamFPvl
	lbz      r4, 0x18(r30)
	cmplwi   r4, 0
	beq      lbl_8033CD04
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8033CD04:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033CD1C
 * Size:	00003C
 */
void JADUtility::PrmSetRc<PSAutoBgm::Module>::getChild(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0x2c
	clrlwi   r4, r4, 0x18
	stw      r0, 0x14(r1)
	bl       getNthLink__10JSUPtrListCFUl
	cmplwi   r3, 0
	beq      lbl_8033CD44
	lwz      r3, 0(r3)
	b        lbl_8033CD48

lbl_8033CD44:
	li       r3, 0

lbl_8033CD48:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033CD58
 * Size:	000114
 */
void JADUtility::PrmSetRc<PSAutoBgm::Module>::load(JSUMemoryInputStream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r30, r3
	mr       r31, r4
	bl       load__Q210JADUtility10PrmSetBaseFR20JSUMemoryInputStream
	lbz      r0, 0x94(r30)
	cmplwi   r0, 0
	beq      lbl_8033CE58
	mr       r3, r30
	lwz      r28, sCurrentHeap__7JKRHeap@sda21(r13)
	lwz      r12, 0(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8033CDB8
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	bl       becomeCurrentHeap__7JKRHeapFv

lbl_8033CDB8:
	lbz      r29, 0x94(r30)
	mulli    r3, r29, 0x2c4
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q29PSAutoBgm6ModuleFv@ha
	lis      r5, __dt__Q29PSAutoBgm6ModuleFv@ha
	addi     r4, r4, __ct__Q29PSAutoBgm6ModuleFv@l
	mr       r7, r29
	addi     r5, r5, __dt__Q29PSAutoBgm6ModuleFv@l
	li       r6, 0x2c4
	bl       __construct_new_array
	mr       r29, r3
	li       r26, 0
	b        lbl_8033CE40

lbl_8033CDF0:
	clrlwi   r0, r26, 0x18
	mulli    r0, r0, 0x2c4
	add      r27, r29, r0
	addic.   r4, r27, 0x2c
	beq      lbl_8033CE08
	addi     r4, r4, 0xc

lbl_8033CE08:
	addi     r3, r30, 0x2c
	bl       append__10JSUPtrListFP10JSUPtrLink
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r27
	mr       r4, r31
	lwz      r12, 0(r27)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r26, r26, 1

lbl_8033CE40:
	lbz      r0, 0x94(r30)
	clrlwi   r3, r26, 0x18
	cmplw    r3, r0
	blt      lbl_8033CDF0
	mr       r3, r28
	bl       becomeCurrentHeap__7JKRHeapFv

lbl_8033CE58:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033CE6C
 * Size:	000090
 */
void JADUtility::PrmSetRc<PSAutoBgm::Module>::PrmSetRc()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 1
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	bl       __ct__Q210JADUtility10PrmSetBaseFb
	lis      r3, "__vt__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>"@ha
	li       r0, 0
	addi     r3, r3, "__vt__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>"@l
	addi     r30, r31, 0x68
	stw      r3, 0(r31)
	mr       r3, r30
	stw      r0, 0x64(r31)
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q210JADUtility7PrmBase@l
	mr       r4, r30
	stw      r3, 0(r30)
	addi     r3, r30, 0x1c
	stb      r0, 0x18(r30)
	bl       __ct__10JSUPtrLinkFPv
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	li       r0, 0
	addi     r4, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	mr       r3, r31
	stw      r4, 0(r30)
	stb      r0, 0x2c(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033CEFC
 * Size:	00003C
 */
void JADUtility::PrmSetRc<PSAutoBgm::Track>::getChild(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0x2c
	clrlwi   r4, r4, 0x18
	stw      r0, 0x14(r1)
	bl       getNthLink__10JSUPtrListCFUl
	cmplwi   r3, 0
	beq      lbl_8033CF24
	lwz      r3, 0(r3)
	b        lbl_8033CF28

lbl_8033CF24:
	li       r3, 0

lbl_8033CF28:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033CF38
 * Size:	000114
 */
void JADUtility::PrmSetRc<PSAutoBgm::Track>::load(JSUMemoryInputStream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r30, r3
	mr       r31, r4
	bl       load__Q210JADUtility10PrmSetBaseFR20JSUMemoryInputStream
	lbz      r0, 0x94(r30)
	cmplwi   r0, 0
	beq      lbl_8033D038
	mr       r3, r30
	lwz      r28, sCurrentHeap__7JKRHeap@sda21(r13)
	lwz      r12, 0(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8033CF98
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	bl       becomeCurrentHeap__7JKRHeapFv

lbl_8033CF98:
	lbz      r29, 0x94(r30)
	mulli    r3, r29, 0x1a0
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q29PSAutoBgm5TrackFv@ha
	lis      r5, __dt__Q29PSAutoBgm5TrackFv@ha
	addi     r4, r4, __ct__Q29PSAutoBgm5TrackFv@l
	mr       r7, r29
	addi     r5, r5, __dt__Q29PSAutoBgm5TrackFv@l
	li       r6, 0x1a0
	bl       __construct_new_array
	mr       r29, r3
	li       r26, 0
	b        lbl_8033D020

lbl_8033CFD0:
	clrlwi   r0, r26, 0x18
	mulli    r0, r0, 0x1a0
	add      r27, r29, r0
	addic.   r4, r27, 0x2c
	beq      lbl_8033CFE8
	addi     r4, r4, 0xc

lbl_8033CFE8:
	addi     r3, r30, 0x2c
	bl       append__10JSUPtrListFP10JSUPtrLink
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r27
	mr       r4, r31
	lwz      r12, 0(r27)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r26, r26, 1

lbl_8033D020:
	lbz      r0, 0x94(r30)
	clrlwi   r3, r26, 0x18
	cmplw    r3, r0
	blt      lbl_8033CFD0
	mr       r3, r28
	bl       becomeCurrentHeap__7JKRHeapFv

lbl_8033D038:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033D04C
 * Size:	000090
 */
void JADUtility::PrmSetRc<PSAutoBgm::Track>::PrmSetRc()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 1
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	bl       __ct__Q210JADUtility10PrmSetBaseFb
	lis      r3, "__vt__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>"@ha
	li       r0, 0
	addi     r3, r3, "__vt__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>"@l
	addi     r30, r31, 0x68
	stw      r3, 0(r31)
	mr       r3, r30
	stw      r0, 0x64(r31)
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q210JADUtility7PrmBase@l
	mr       r4, r30
	stw      r3, 0(r30)
	addi     r3, r30, 0x1c
	stb      r0, 0x18(r30)
	bl       __ct__10JSUPtrLinkFPv
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	li       r0, 0
	addi     r4, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	mr       r3, r31
	stw      r4, 0(r30)
	stb      r0, 0x2c(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033D0DC
 * Size:	000008
 */
u32 PSAutoBgm::CycleBase::avoidCheck() { return 0x0; }

/*
 * --INFO--
 * Address:	8033D0E4
 * Size:	000008
 */
u32 PSAutoBgm::CycleBase::getCycleType() { return 0x1; }

/*
 * --INFO--
 * Address:	8033D0EC
 * Size:	000034
 */
void PSAutoBgm::PrmLink<unsigned short>::PrmLink()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r4, r31, 0x10
	bl       __ct__10JSUPtrLinkFPv
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033D120
 * Size:	0001C4
 */
PSAutoBgm::AutoBgm::~AutoBgm()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	or.      r30, r3, r3
	stw      r29, 0x14(r1)
	beq      lbl_8033D2C4
	lis      r3, __vt__Q29PSAutoBgm7AutoBgm@ha
	li       r4, 0
	addi     r0, r3, __vt__Q29PSAutoBgm7AutoBgm@l
	stw      r0, 0x10(r30)
	lwz      r3, 0x338(r30)
	bl       free__7JKRHeapFPvP7JKRHeap
	addic.   r0, r30, 0x33c
	beq      lbl_8033D18C
	lis      r4, __vt__Q29PSAutoBgm10MeloArrMgr@ha
	addic.   r3, r30, 0x340
	addi     r0, r4, __vt__Q29PSAutoBgm10MeloArrMgr@l
	stw      r0, 0x33c(r30)
	beq      lbl_8033D180
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_8033D180:
	addi     r3, r30, 0x33c
	li       r4, 0
	bl       __dt__10JADHioNodeFv

lbl_8033D18C:
	addic.   r0, r30, 0xb8
	beq      lbl_8033D294
	lis      r3, __vt__Q29PSAutoBgm12ConductorMgr@ha
	addi     r4, r30, 0x310
	addi     r3, r3, __vt__Q29PSAutoBgm12ConductorMgr@l
	addic.   r0, r30, 0xb8
	stw      r3, 0xbc(r30)
	addi     r0, r3, 0x30
	lwz      r3, 0xb8(r30)
	stw      r0, 0(r3)
	lwz      r3, 0xb8(r30)
	subf     r0, r3, r4
	stw      r0, 0x1c(r3)
	beq      lbl_8033D288
	lis      r3,
"__vt__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>"@ha
	addic.   r0, r30, 0xb8
	addi     r3, r3,
"__vt__Q210JADUtility59PrmDataMgrNode<Q29PSAutoBgm9Conductor,Q29PSAutoBgm7AutoBgm>"@l
	stw      r3, 0xbc(r30)
	addi     r0, r3, 0x2c
	lwz      r3, 0xb8(r30)
	stw      r0, 0(r3)
	lwz      r3, 0xb8(r30)
	subf     r0, r3, r4
	stw      r0, 0x1c(r3)
	beq      lbl_8033D288
	lis      r3, __vt__Q210JADUtility11DataMgrNode@ha
	addi     r0, r30, 0x308
	addi     r3, r3, __vt__Q210JADUtility11DataMgrNode@l
	addic.   r29, r30, 0x2cc
	stw      r3, 0xbc(r30)
	addi     r4, r3, 0x2c
	lwz      r3, 0xb8(r30)
	stw      r4, 0(r3)
	lwz      r3, 0xb8(r30)
	subf     r0, r3, r0
	stw      r0, 0x1c(r3)
	beq      lbl_8033D27C
	lis      r3, __vt__Q210JADUtility6StrPrm@ha
	cmplwi   r29, 0
	addi     r0, r3, __vt__Q210JADUtility6StrPrm@l
	stw      r0, 0x2cc(r30)
	beq      lbl_8033D27C
	lis      r3, "__vt__Q210JADUtility10PrmHio<Pc>"@ha
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Pc>"@l
	stw      r0, 0x2cc(r30)
	beq      lbl_8033D27C
	lis      r3, "__vt__Q210JADUtility7Prm<Pc>"@ha
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Pc>"@l
	stw      r0, 0x2cc(r30)
	beq      lbl_8033D27C
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r29, 0x1c
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0x2cc(r30)
	beq      lbl_8033D270
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8033D270:
	mr       r3, r29
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_8033D27C:
	addi     r3, r30, 0xb8
	li       r4, 0
	bl       __dt__Q210JADUtility15DataLoadMgrNodeFv

lbl_8033D288:
	addi     r3, r30, 0x310
	li       r4, 0
	bl       __dt__Q210JADUtility11DataMgrBaseFv

lbl_8033D294:
	cmplwi   r30, 0
	beq      lbl_8033D2B4
	lis      r4, __vt__Q28PSSystem11DirectedBgm@ha
	mr       r3, r30
	addi     r0, r4, __vt__Q28PSSystem11DirectedBgm@l
	li       r4, 0
	stw      r0, 0x10(r30)
	bl       __dt__Q28PSSystem6BgmSeqFv

lbl_8033D2B4:
	extsh.   r0, r31
	ble      lbl_8033D2C4
	mr       r3, r30
	bl       __dl__FPv

lbl_8033D2C4:
	lwz      r0, 0x24(r1)
	mr       r3, r30
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033D2E4
 * Size:	000008
 */
u32 PSAutoBgm::AutoBgm::getCastType() { return 0x3; }

/*
 * --INFO--
 * Address:	8033D2EC
 * Size:	000088
 */
void PSAutoBgm::AutoBgm::newSeqTrackRoot()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x2c8
	stw      r30, 8(r1)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8033D358
	mr       r30, r0
	bl       __ct__Q28PSSystem12SeqTrackRootFv
	lis      r4, __vt__Q29PSAutoBgm19AutoBgmSeqTrackRoot@ha
	addi     r3, r31, 0xb8
	addi     r4, r4, __vt__Q29PSAutoBgm19AutoBgmSeqTrackRoot@l
	addic.   r0, r31, 0xb8
	stw      r4, 0(r30)
	stw      r3, 0x2c4(r30)
	bne      lbl_8033D354
	lis      r3, lbl_8048FED4@ha
	lis      r5, lbl_8048FE70@ha
	addi     r3, r3, lbl_8048FED4@l
	li       r4, 0x2f3
	addi     r5, r5, lbl_8048FE70@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033D354:
	mr       r0, r30

lbl_8033D358:
	mr       r3, r0
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033D374
 * Size:	0000D0
 */
void PSAutoBgm::AutoBgmSeqTrackRoot::beatUpdate()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	bl       beatUpdate__Q28PSSystem12SeqTrackRootFv
	lwz      r3, 0x2c4(r31)
	lwz      r30, 0x250(r3)
	cmplwi   r30, 0
	bne      lbl_8033D3BC
	lis      r3, lbl_8048FED4@ha
	lis      r5, lbl_8048FE70@ha
	addi     r3, r3, lbl_8048FED4@l
	li       r4, 0x2f8
	addi     r5, r5, lbl_8048FE70@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033D3BC:
	lbz      r0, 0x3c(r31)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8033D428
	lwz      r3, 0xb0(r30)
	li       r31, 0
	addi     r0, r3, 1
	stw      r0, 0xb0(r30)
	b        lbl_8033D408

lbl_8033D3DC:
	mr       r3, r30
	mr       r4, r31
	bl       "getChild__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>FUc"
	lbz      r4, 0x99(r3)
	cmplwi   r4, 0xff
	beq      lbl_8033D404
	bl       "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
	lhz      r4, 0x2a4(r3)
	addi     r0, r4, 1
	sth      r0, 0x2a4(r3)

lbl_8033D404:
	addi     r31, r31, 1

lbl_8033D408:
	mr       r3, r30
	bl       "getChildNum__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>Fv"
	clrlwi   r3, r3, 0x18
	clrlwi   r0, r31, 0x18
	cmplw    r0, r3
	blt      lbl_8033D3DC
	lbz      r3, 0x114(r30)
	b        lbl_8033D42C

lbl_8033D428:
	lbz      r3, 0x114(r30)

lbl_8033D42C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033D444
 * Size:	000008
 */
void PSAutoBgm::ConductorMgr::getSaveTempHeap()
{
	/*
	lwz      r3, sHeap__Q29PSAutoBgm12ConductorMgr@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033D44C
 * Size:	000008
 */
void PSAutoBgm::ConductorMgr::getObjHeap()
{
	/*
	lwz      r3, sHeap__Q29PSAutoBgm12ConductorMgr@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033D454
 * Size:	000008
 */
void PSAutoBgm::ConductorMgr::getDataHeap()
{
	/*
	lwz      r3, sHeap__Q29PSAutoBgm12ConductorMgr@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033D45C
 * Size:	000008
 */
u32 PSAutoBgm::OnCycle::getCycleType() { return 0x0; }

/*
 * --INFO--
 * Address:	8033D464
 * Size:	000008
 */
void PSAutoBgm::Conductor::getEraseLink()
{
	/*
	addi     r3, r3, 0x98
	blr
	*/
}

namespace PSSystem {

/*
 * --INFO--
 * Address:	8033D46C
 * Size:	000004
 */
void SeqTrackRoot::onBeatTop() { }

/*
 * --INFO--
 * Address:	8033D470
 * Size:	0001A4
 */
void JADUtility::PrmDataMgrNode<PSAutoBgm::Conductor, PSAutoBgm::AutoBgm>::initInstance()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  lwz       r0, 0x250(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x180
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  li        r3, 0x11C
	  li        r5, 0
	  bl        -0x319578
	  mr.       r31, r3
	  beq-      .loc_0x174
	  lwz       r29, 0x254(r30)
	  bl        -0x47C
	  lis       r3, 0x804E
	  mr        r4, r31
	  subi      r0, r3, 0x5338
	  addi      r3, r31, 0x98
	  stw       r0, 0x0(r31)
	  bl        -0x316D28
	  li        r0, 0
	  addi      r28, r31, 0xB8
	  stw       r0, 0xA8(r31)
	  mr        r3, r28
	  stw       r0, 0xAC(r31)
	  stw       r0, 0xB0(r31)
	  stw       r29, 0xB4(r31)
	  bl        -0x320534
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r28
	  stw       r3, 0x0(r28)
	  addi      r3, r28, 0x1C
	  stb       r0, 0x18(r28)
	  bl        -0x316D68
	  lis       r3, 0x804E
	  addi      r29, r31, 0xE8
	  subi      r0, r3, 0x52AC
	  lis       r3, 0x804E
	  stw       r0, 0x0(r28)
	  subi      r0, r3, 0x52C0
	  lis       r3, 0x804E
	  stw       r0, 0x0(r28)
	  subi      r0, r3, 0x52D4
	  stw       r0, 0x0(r28)
	  mr        r3, r29
	  bl        -0x320584
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r29
	  stw       r3, 0x0(r29)
	  addi      r3, r29, 0x1C
	  stb       r0, 0x18(r29)
	  bl        -0x316DB8
	  lis       r3, 0x804E
	  lis       r4, 0x804E
	  subi      r0, r3, 0x52AC
	  stw       r0, 0x0(r29)
	  subi      r0, r4, 0x52C0
	  lis       r3, 0x804E
	  addi      r4, r31, 0x104
	  stw       r0, 0x0(r29)
	  subi      r5, r3, 0x52E8
	  li        r0, 0x64
	  addi      r3, r31, 0x1C
	  stw       r5, 0x0(r29)
	  stb       r0, 0x118(r31)
	  bl        -0x316CC4
	  addi      r4, r31, 0xD4
	  addi      r3, r31, 0x1C
	  bl        -0x316CD0
	  addi      r4, r31, 0x84
	  addi      r3, r31, 0x1C
	  bl        -0x316CDC
	  li        r0, 0x11
	  lis       r3, 0x8034
	  stb       r0, 0x19(r31)
	  subi      r0, r3, 0x6D4C
	  lbz       r3, 0xE4(r31)
	  stb       r3, 0x118(r31)
	  stw       r0, 0x5C(r31)
	  stw       r31, 0x60(r31)

	.loc_0x174:
	  stw       r31, 0x250(r30)
	  li        r3, 0x1
	  b         .loc_0x184

	.loc_0x180:
	  li        r3, 0

	.loc_0x184:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033D614
 * Size:	0000E8
 */
void JADUtility::PrmDataMgrNode<PSAutoBgm::Conductor, PSAutoBgm::AutoBgm>::initInstance(void*, long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r5
	  stw       r30, 0x28(r1)
	  mr        r30, r4
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC8
	  lis       r4, 0x804A
	  lis       r5, 0x804A
	  addi      r0, r4, 0x30
	  li        r6, 0
	  lis       r4, 0x804A
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x64
	  addi      r5, r5, 0x40
	  stw       r0, 0x8(r1)
	  lis       r4, 0x804A
	  addi      r0, r4, 0x80
	  addi      r3, r1, 0x8
	  stw       r5, 0x8(r1)
	  mr        r4, r30
	  mr        r5, r31
	  stb       r6, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        -0x316938
	  lwz       r3, 0x250(r29)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r3, 0x80
	  addi      r3, r1, 0x8
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x40
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  bl        -0x317358
	  li        r3, 0x1
	  b         .loc_0xCC

	.loc_0xC8:
	  li        r3, 0

	.loc_0xCC:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033D6FC
 * Size:	000014
 */
void JADUtility::PrmDataMgrNode<PSAutoBgm::Conductor, PSAutoBgm::AutoBgm>::@600 @28 @__dt()
{
	/*
	.loc_0x0:
	  li        r11, 0x1C
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x258
	  b         -0x17E0
	*/
}

} // namespace PSSystem

/*
 * --INFO--
 * Address:	8033D710
 * Size:	000014
 */
void JADUtility::DataMgrNode::@600 @28 @init()
{
	/*
	li       r11, 0x1c
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -600
	b        init__Q210JADUtility11DataMgrNodeFv
	*/
}

/*
 * --INFO--
 * Address:	8033D724
 * Size:	000014
 */
PSAutoBgm::ConductorMgr::@600 @28 @~ConductorMgr()
{
	/*
	li       r11, 0x1c
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -600
	b        __dt__Q29PSAutoBgm12ConductorMgrFv
	*/
}
