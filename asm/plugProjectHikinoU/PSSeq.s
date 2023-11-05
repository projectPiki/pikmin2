.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8048F848, local
	.asciz "PSSeq.cpp"
.endobj lbl_8048F848
.balign 4
.obj lbl_8048F854, local
	.asciz "P2Assert"
.endobj lbl_8048F854
.balign 4
.obj lbl_8048F860, local
	.asciz "endoffile"
.endobj lbl_8048F860
.balign 4
.obj lbl_8048F86C, local
	.asciz "seq list\nnot find\n(%s)\n"
.endobj lbl_8048F86C
.balign 4
.obj lbl_8048F884, local
	.asciz "stream list\nnot find\n(id=%d)\n"
.endobj lbl_8048F884
.balign 4
.obj lbl_8048F8A4, local
	.asciz "SeqBase::loadSeqAsync() fault loading sequence"
.endobj lbl_8048F8A4
.balign 4
.obj lbl_8048F8D4, local
	.asciz "not find(%s)"
.endobj lbl_8048F8D4
.balign 4
.obj lbl_8048F8E4, local
	.asciz "seq not played"
.endobj lbl_8048F8E4
.balign 4
.obj lbl_8048F8F4, local
	.asciz "PSSystemIF.h"
.endobj lbl_8048F8F4
.balign 4
.obj lbl_8048F904, local
	.asciz "PSDirector.h"
.endobj lbl_8048F904

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q28PSSystem6SeqMgr, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28PSSystem6SeqMgrFv
.endobj __vt__Q28PSSystem6SeqMgr
.obj __vt__Q28PSSystem10JumpBgmSeq, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28PSSystem10JumpBgmSeqFv
	.4byte init__Q28PSSystem11DirectedBgmFv
	.4byte scene1st__Q28PSSystem7SeqBaseFPQ28PSSystem11TaskChecker
	.4byte startSeq__Q28PSSystem10JumpBgmSeqFv
	.4byte stopSeq__Q28PSSystem11DirectedBgmFUl
	.4byte pauseOn__Q28PSSystem7SeqBaseFQ38PSSystem7SeqBase9PauseMode
	.4byte pauseOff__Q28PSSystem7SeqBaseFv
	.4byte getCastType__Q28PSSystem10JumpBgmSeqFv
	.4byte getSeqType__Q28PSSystem6BgmSeqFv
	.4byte exec__Q28PSSystem7SeqBaseFv
	.4byte onPlayingFrame__Q28PSSystem10JumpBgmSeqFv
	.4byte isPlaying__Q28PSSystem7SeqBaseFv
	.4byte seqLoadAfter__Q28PSSystem7SeqBaseFv
	.4byte getHandleP__Q28PSSystem6BgmSeqFv
	.4byte setConfigVolume__Q28PSSystem7SeqBaseFv
	.4byte newSeqTrackRoot__Q28PSSystem10JumpBgmSeqFv
	.4byte newSeqTrackChild__Q28PSSystem11DirectedBgmFUcRQ28PSSystem12SeqTrackRoot
	.4byte getSeqStartPoint__Q28PSSystem10JumpBgmSeqFv
	.4byte requestJumpBgmQuickly__Q28PSSystem10JumpBgmSeqFUs
	.4byte requestJumpBgmOnBeat__Q28PSSystem10JumpBgmSeqFUs
	.4byte requestJumpBgmEveryBeat__Q28PSSystem10JumpBgmSeqFUs
	.4byte outputJumpRequest__Q28PSSystem10JumpBgmSeqFv
	.4byte onJump__Q28PSSystem10JumpBgmSeqFUs
.endobj __vt__Q28PSSystem10JumpBgmSeq
.obj __vt__Q28PSSystem20TriangleTableModTask, weak
	.4byte 0
	.4byte 0
	.4byte task__Q28PSSystem21ModParamWithTableTaskFR8JASTrack
	.4byte getTgtWithTable__Q28PSSystem20TriangleTableModTaskFUc
	.4byte getTableIdxNum__Q28PSSystem20TriangleTableModTaskFv
	.4byte 0
.endobj __vt__Q28PSSystem20TriangleTableModTask
.obj __vt__Q28PSSystem14PitchResetTask, weak
	.4byte 0
	.4byte 0
	.4byte task__Q28PSSystem14PitchResetTaskFR8JASTrack
.endobj __vt__Q28PSSystem14PitchResetTask
.obj __vt__Q28PSSystem12FlagWaitTask, weak
	.4byte 0
	.4byte 0
	.4byte task__Q28PSSystem12FlagWaitTaskFR8JASTrack
.endobj __vt__Q28PSSystem12FlagWaitTask
.obj __vt__Q28PSSystem8TaskBase, weak
	.4byte 0
	.4byte 0
	.4byte 0
.endobj __vt__Q28PSSystem8TaskBase
.obj __vt__Q28PSSystem12BankRandTask, weak
	.4byte 0
	.4byte 0
	.4byte task__Q28PSSystem16ModParamWithFadeFR8JASTrack
	.4byte getPreParam__Q28PSSystem12BankRandTaskFR8JASTrack
	.4byte timeTask__Q28PSSystem12BankRandTaskFR8JASTrackf
.endobj __vt__Q28PSSystem12BankRandTask
.obj __vt__Q28PSSystem20SeqTrackRoot_JumpBgm, global
	.4byte 0
	.4byte 0
	.4byte update__Q28PSSystem12SeqTrackRootFv
	.4byte init__Q28PSSystem12SeqTrackRootFP8JASTrack
	.4byte onStopSeq__Q28PSSystem12SeqTrackRootFv
	.4byte beatUpdate__Q28PSSystem12SeqTrackRootFv
	.4byte onBeatTop__Q28PSSystem20SeqTrackRoot_JumpBgmFv
.endobj __vt__Q28PSSystem20SeqTrackRoot_JumpBgm
.obj __vt__Q28PSSystem11DirectedBgm, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28PSSystem11DirectedBgmFv
	.4byte init__Q28PSSystem11DirectedBgmFv
	.4byte scene1st__Q28PSSystem7SeqBaseFPQ28PSSystem11TaskChecker
	.4byte startSeq__Q28PSSystem11DirectedBgmFv
	.4byte stopSeq__Q28PSSystem11DirectedBgmFUl
	.4byte pauseOn__Q28PSSystem7SeqBaseFQ38PSSystem7SeqBase9PauseMode
	.4byte pauseOff__Q28PSSystem7SeqBaseFv
	.4byte getCastType__Q28PSSystem11DirectedBgmFv
	.4byte getSeqType__Q28PSSystem6BgmSeqFv
	.4byte exec__Q28PSSystem7SeqBaseFv
	.4byte onPlayingFrame__Q28PSSystem11DirectedBgmFv
	.4byte isPlaying__Q28PSSystem7SeqBaseFv
	.4byte seqLoadAfter__Q28PSSystem7SeqBaseFv
	.4byte getHandleP__Q28PSSystem6BgmSeqFv
	.4byte setConfigVolume__Q28PSSystem7SeqBaseFv
	.4byte newSeqTrackRoot__Q28PSSystem11DirectedBgmFv
	.4byte newSeqTrackChild__Q28PSSystem11DirectedBgmFUcRQ28PSSystem12SeqTrackRoot
.endobj __vt__Q28PSSystem11DirectedBgm
.obj __vt__Q28PSSystem5SeSeq, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28PSSystem5SeSeqFv
	.4byte init__Q28PSSystem7SeqBaseFv
	.4byte scene1st__Q28PSSystem7SeqBaseFPQ28PSSystem11TaskChecker
	.4byte startSeq__Q28PSSystem7SeqBaseFv
	.4byte stopSeq__Q28PSSystem5SeSeqFUl
	.4byte pauseOn__Q28PSSystem7SeqBaseFQ38PSSystem7SeqBase9PauseMode
	.4byte pauseOff__Q28PSSystem7SeqBaseFv
	.4byte getCastType__Q28PSSystem5SeSeqFv
	.4byte getSeqType__Q28PSSystem5SeSeqFv
	.4byte exec__Q28PSSystem7SeqBaseFv
	.4byte onPlayingFrame__Q28PSSystem7SeqBaseFv
	.4byte isPlaying__Q28PSSystem7SeqBaseFv
	.4byte seqLoadAfter__Q28PSSystem5SeSeqFv
	.4byte getHandleP__Q28PSSystem5SeSeqFv
	.4byte setConfigVolume__Q28PSSystem5SeSeqFv
.endobj __vt__Q28PSSystem5SeSeq
.obj __vt__Q28PSSystem9StreamBgm, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28PSSystem9StreamBgmFv
	.4byte init__Q28PSSystem9StreamBgmFv
	.4byte scene1st__Q28PSSystem9StreamBgmFPQ28PSSystem11TaskChecker
	.4byte startSeq__Q28PSSystem9StreamBgmFv
	.4byte stopSeq__Q28PSSystem7SeqBaseFUl
	.4byte pauseOn__Q28PSSystem7SeqBaseFQ38PSSystem7SeqBase9PauseMode
	.4byte pauseOff__Q28PSSystem7SeqBaseFv
	.4byte getCastType__Q28PSSystem9StreamBgmFv
	.4byte getSeqType__Q28PSSystem9StreamBgmFv
	.4byte exec__Q28PSSystem7SeqBaseFv
	.4byte onPlayingFrame__Q28PSSystem7SeqBaseFv
	.4byte isPlaying__Q28PSSystem9StreamBgmFv
	.4byte seqLoadAfter__Q28PSSystem7SeqBaseFv
	.4byte getHandleP__Q28PSSystem9StreamBgmFv
	.4byte setConfigVolume__Q28PSSystem9StreamBgmFv
.endobj __vt__Q28PSSystem9StreamBgm
.obj __vt__Q28PSSystem6BgmSeq, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28PSSystem6BgmSeqFv
	.4byte init__Q28PSSystem7SeqBaseFv
	.4byte scene1st__Q28PSSystem7SeqBaseFPQ28PSSystem11TaskChecker
	.4byte startSeq__Q28PSSystem7SeqBaseFv
	.4byte stopSeq__Q28PSSystem7SeqBaseFUl
	.4byte pauseOn__Q28PSSystem7SeqBaseFQ38PSSystem7SeqBase9PauseMode
	.4byte pauseOff__Q28PSSystem7SeqBaseFv
	.4byte getCastType__Q28PSSystem6BgmSeqFv
	.4byte getSeqType__Q28PSSystem6BgmSeqFv
	.4byte exec__Q28PSSystem7SeqBaseFv
	.4byte onPlayingFrame__Q28PSSystem7SeqBaseFv
	.4byte isPlaying__Q28PSSystem7SeqBaseFv
	.4byte seqLoadAfter__Q28PSSystem7SeqBaseFv
	.4byte getHandleP__Q28PSSystem6BgmSeqFv
	.4byte setConfigVolume__Q28PSSystem7SeqBaseFv
.endobj __vt__Q28PSSystem6BgmSeq
.obj __vt__Q28PSSystem7SeqBase, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28PSSystem7SeqBaseFv
	.4byte init__Q28PSSystem7SeqBaseFv
	.4byte scene1st__Q28PSSystem7SeqBaseFPQ28PSSystem11TaskChecker
	.4byte startSeq__Q28PSSystem7SeqBaseFv
	.4byte stopSeq__Q28PSSystem7SeqBaseFUl
	.4byte pauseOn__Q28PSSystem7SeqBaseFQ38PSSystem7SeqBase9PauseMode
	.4byte pauseOff__Q28PSSystem7SeqBaseFv
	.4byte 0
	.4byte 0
	.4byte exec__Q28PSSystem7SeqBaseFv
	.4byte onPlayingFrame__Q28PSSystem7SeqBaseFv
	.4byte isPlaying__Q28PSSystem7SeqBaseFv
	.4byte seqLoadAfter__Q28PSSystem7SeqBaseFv
	.4byte 0
	.4byte setConfigVolume__Q28PSSystem7SeqBaseFv
.endobj __vt__Q28PSSystem7SeqBase
.obj __vt__Q28PSSystem10Reservator, weak
	.4byte 0
	.4byte 0
	.4byte 0
.endobj __vt__Q28PSSystem10Reservator
.obj __vt__Q28PSSystem21SeqPauseOffReservator, global
	.4byte 0
	.4byte 0
	.4byte reservatorTask__Q28PSSystem21SeqPauseOffReservatorFv
.endobj __vt__Q28PSSystem21SeqPauseOffReservator
.obj __vt__Q28PSSystem17SeqPlayReservator, global
	.4byte 0
	.4byte 0
	.4byte reservatorTask__Q28PSSystem17SeqPlayReservatorFv
.endobj __vt__Q28PSSystem17SeqPlayReservator
.obj __vt__Q28PSSystem7SeqHeap, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28PSSystem7SeqHeapFv
	.4byte loadSeqAsync__Q28PSSystem7SeqHeapFPQ28PSSystem11TaskChecker
.endobj __vt__Q28PSSystem7SeqHeap
.obj __vt__Q28PSSystem11StreamSound, global
	.4byte 0
	.4byte 0
	.4byte setPortData__9JAIStreamFUcUs
	.4byte getPortData__9JAIStreamFUc
	.4byte start__8JAISoundFUl
	.4byte stop__9JAIStreamFUl
	.4byte release__8JAISoundFv
	.4byte setVolume__9JAIStreamFfUlUc
	.4byte getVolume__9JAIStreamFUc
	.4byte setPan__9JAIStreamFfUlUc
	.4byte getPan__9JAIStreamFUc
	.4byte setPitch__9JAIStreamFfUlUc
	.4byte getPitch__9JAIStreamFUc
	.4byte setFxmix__9JAIStreamFfUlUc
	.4byte getFxmix__9JAIStreamFUc
	.4byte setDolby__9JAIStreamFfUlUc
	.4byte getDolby__9JAIStreamFUc
	.4byte setTempoProportion__8JAISoundFfUl
	.4byte getTempoProportion__8JAISoundFv
	.4byte setVolumeU7__9JAIStreamFUcUlUc
	.4byte getVolumeU7__9JAIStreamFUc
	.4byte setPanU7__9JAIStreamFUcUlUc
	.4byte getPanU7__9JAIStreamFUc
	.4byte setFxmixU7__9JAIStreamFUcUlUc
	.4byte getFxmixU7__9JAIStreamFUc
	.4byte setDolbyU7__9JAIStreamFUcUlUc
	.4byte getDolbyU7__9JAIStreamFUc
	.4byte setDirectVolume__8JAISoundFfUl
	.4byte setDirectPan__8JAISoundFfUl
	.4byte setDirectPitch__8JAISoundFfUl
	.4byte setDirectFxmix__8JAISoundFfUl
	.4byte setDirectDolby__8JAISoundFfUl
	.4byte setDemoVolume__8JAISoundFfUl
	.4byte setDemoPan__8JAISoundFfUl
	.4byte setDemoPitch__8JAISoundFfUl
	.4byte setDemoFxmix__8JAISoundFfUl
	.4byte setDemoDolby__8JAISoundFfUl
	.4byte setDemoVolumeU7__8JAISoundFUcUl
	.4byte setDemoPanU7__8JAISoundFUcUl
	.4byte setDemoFxmixU7__8JAISoundFUcUl
	.4byte setDemoDolbyU7__8JAISoundFUcUl
	.4byte getFadeCounter__9JAIStreamFv
	.4byte setPrepareFlag__9JAIStreamFUc
	.4byte checkReady__9JAIStreamFv
	.4byte setDistanceParameterMoveTime__8JAISoundFUc
	.4byte setAdjustPriority__8JAISoundFs
	.4byte setPositionDopplarCommon__8JAISoundFUl
	.4byte setDistanceVolumeCommon__8JAISoundFfUc
	.4byte setDistancePanCommon__8JAISoundFv
	.4byte setDistanceDolbyCommon__8JAISoundFv
	.4byte initParameter__8JAISoundFPvPQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
	.4byte onGet__8JAISoundFv
	.4byte onRelease__8JAISoundFv
	.4byte 0
	.4byte 0
	.4byte stop__Q28PSSystem12SeqSoundBaseFUl
	.4byte "@472@stopInner__Q28PSSystem11StreamSoundFUl"
	.4byte stopInner__Q28PSSystem11StreamSoundFUl
.endobj __vt__Q28PSSystem11StreamSound
.obj __vt__Q28PSSystem8SeqSound, global
	.4byte 0
	.4byte 0
	.4byte setPortData__11JAISequenceFUcUs
	.4byte getPortData__11JAISequenceFUc
	.4byte start__8JAISoundFUl
	.4byte stop__11JAISequenceFUl
	.4byte release__8JAISoundFv
	.4byte setVolume__11JAISequenceFfUlUc
	.4byte getVolume__11JAISequenceFUc
	.4byte setPan__11JAISequenceFfUlUc
	.4byte getPan__11JAISequenceFUc
	.4byte setPitch__11JAISequenceFfUlUc
	.4byte getPitch__11JAISequenceFUc
	.4byte setFxmix__11JAISequenceFfUlUc
	.4byte getFxmix__11JAISequenceFUc
	.4byte setDolby__11JAISequenceFfUlUc
	.4byte getDolby__11JAISequenceFUc
	.4byte setTempoProportion__11JAISequenceFfUl
	.4byte getTempoProportion__11JAISequenceFv
	.4byte setVolumeU7__11JAISequenceFUcUlUc
	.4byte getVolumeU7__11JAISequenceFUc
	.4byte setPanU7__11JAISequenceFUcUlUc
	.4byte getPanU7__11JAISequenceFUc
	.4byte setFxmixU7__11JAISequenceFUcUlUc
	.4byte getFxmixU7__11JAISequenceFUc
	.4byte setDolbyU7__11JAISequenceFUcUlUc
	.4byte getDolbyU7__11JAISequenceFUc
	.4byte setDirectVolume__8JAISoundFfUl
	.4byte setDirectPan__8JAISoundFfUl
	.4byte setDirectPitch__8JAISoundFfUl
	.4byte setDirectFxmix__8JAISoundFfUl
	.4byte setDirectDolby__8JAISoundFfUl
	.4byte setDemoVolume__8JAISoundFfUl
	.4byte setDemoPan__8JAISoundFfUl
	.4byte setDemoPitch__8JAISoundFfUl
	.4byte setDemoFxmix__8JAISoundFfUl
	.4byte setDemoDolby__8JAISoundFfUl
	.4byte setDemoVolumeU7__8JAISoundFUcUl
	.4byte setDemoPanU7__8JAISoundFUcUl
	.4byte setDemoFxmixU7__8JAISoundFUcUl
	.4byte setDemoDolbyU7__8JAISoundFUcUl
	.4byte getFadeCounter__11JAISequenceFv
	.4byte setPrepareFlag__11JAISequenceFUc
	.4byte checkReady__11JAISequenceFv
	.4byte setDistanceParameterMoveTime__8JAISoundFUc
	.4byte setAdjustPriority__8JAISoundFs
	.4byte setPositionDopplarCommon__8JAISoundFUl
	.4byte setDistanceVolumeCommon__8JAISoundFfUc
	.4byte setDistancePanCommon__8JAISoundFv
	.4byte setDistanceDolbyCommon__8JAISoundFv
	.4byte initParameter__8JAISoundFPvPQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
	.4byte onGet__8JAISoundFv
	.4byte onRelease__8JAISoundFv
	.4byte 0
	.4byte 0
	.4byte stop__Q28PSSystem12SeqSoundBaseFUl
	.4byte "@1696@stopInner__Q28PSSystem8SeqSoundFUl"
	.4byte stopInner__Q28PSSystem8SeqSoundFUl
.endobj __vt__Q28PSSystem8SeqSound
.obj __vt__Q28PSSystem12SeqSoundBase, global
	.4byte 0
	.4byte 0
	.4byte stop__Q28PSSystem12SeqSoundBaseFUl
	.4byte 0
.endobj __vt__Q28PSSystem12SeqSoundBase
.obj __vt__Q28PSSystem14StreamDataList, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28PSSystem14StreamDataListFv
	.4byte read__Q28PSSystem14StreamDataListFR6Stream
	.4byte 0
	.4byte 0
	.4byte "@28@__dt__Q28PSSystem14StreamDataListFv"
.endobj __vt__Q28PSSystem14StreamDataList
.obj "__vt__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>Fv"
.endobj "__vt__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"
.obj __vt__Q28PSSystem11SeqDataList, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28PSSystem11SeqDataListFv
	.4byte read__Q28PSSystem11SeqDataListFR6Stream
	.4byte 0
	.4byte 0
	.4byte "@28@__dt__Q28PSSystem11SeqDataListFv"
.endobj __vt__Q28PSSystem11SeqDataList
.obj "__vt__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>Fv"
.endobj "__vt__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj oldID$2940, local
	.skip 0x4
.endobj oldID$2940
.obj init$2941, local
	.skip 0x1
.endobj init$2941

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051E0A0, local
	.float 0.0
.endobj lbl_8051E0A0
.obj lbl_8051E0A4, local
	.float 127.0
.endobj lbl_8051E0A4
.obj lbl_8051E0A8, local
	.float 1.0
.endobj lbl_8051E0A8
.balign 8
.obj lbl_8051E0B0, local
	.8byte 0x4330000000000000
.endobj lbl_8051E0B0
.obj lbl_8051E0B8, local
	.float 0.8
.endobj lbl_8051E0B8
.obj lbl_8051E0BC, local
	.float 0.5
.endobj lbl_8051E0BC

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q28PSSystem11SeqDataListFv, global
/* 80330D20 0032DC60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80330D24 0032DC64  7C 08 02 A6 */	mflr r0
/* 80330D28 0032DC68  90 01 00 14 */	stw r0, 0x14(r1)
/* 80330D2C 0032DC6C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80330D30 0032DC70  7C 7F 1B 78 */	mr r31, r3
/* 80330D34 0032DC74  48 00 7C 4D */	bl __ct__Q28PSSystem12TextDataBaseFv
/* 80330D38 0032DC78  3C 60 80 4E */	lis r3, "__vt__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"@ha
/* 80330D3C 0032DC7C  34 9F 00 1C */	addic. r4, r31, 0x1c
/* 80330D40 0032DC80  38 03 A9 10 */	addi r0, r3, "__vt__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"@l
/* 80330D44 0032DC84  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 80330D48 0032DC88  41 82 00 08 */	beq .L_80330D50
/* 80330D4C 0032DC8C  38 84 FF E4 */	addi r4, r4, -28
.L_80330D50:
/* 80330D50 0032DC90  3C 60 80 4E */	lis r3, __vt__Q28PSSystem11SeqDataList@ha
/* 80330D54 0032DC94  90 8D 91 CC */	stw r4, "sInstance__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"@sda21(r13)
/* 80330D58 0032DC98  38 83 A8 F4 */	addi r4, r3, __vt__Q28PSSystem11SeqDataList@l
/* 80330D5C 0032DC9C  7F E3 FB 78 */	mr r3, r31
/* 80330D60 0032DCA0  90 9F 00 00 */	stw r4, 0(r31)
/* 80330D64 0032DCA4  38 04 00 10 */	addi r0, r4, 0x10
/* 80330D68 0032DCA8  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 80330D6C 0032DCAC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80330D70 0032DCB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80330D74 0032DCB4  7C 08 03 A6 */	mtlr r0
/* 80330D78 0032DCB8  38 21 00 10 */	addi r1, r1, 0x10
/* 80330D7C 0032DCBC  4E 80 00 20 */	blr 
.endfn __ct__Q28PSSystem11SeqDataListFv

.fn __dt__Q28PSSystem11SeqDataListFv, global
/* 80330D80 0032DCC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80330D84 0032DCC4  7C 08 02 A6 */	mflr r0
/* 80330D88 0032DCC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80330D8C 0032DCCC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80330D90 0032DCD0  7C 9F 23 78 */	mr r31, r4
/* 80330D94 0032DCD4  93 C1 00 08 */	stw r30, 8(r1)
/* 80330D98 0032DCD8  7C 7E 1B 79 */	or. r30, r3, r3
/* 80330D9C 0032DCDC  41 82 00 50 */	beq .L_80330DEC
/* 80330DA0 0032DCE0  3C 60 80 4E */	lis r3, __vt__Q28PSSystem11SeqDataList@ha
/* 80330DA4 0032DCE4  34 1E 00 1C */	addic. r0, r30, 0x1c
/* 80330DA8 0032DCE8  38 63 A8 F4 */	addi r3, r3, __vt__Q28PSSystem11SeqDataList@l
/* 80330DAC 0032DCEC  90 7E 00 00 */	stw r3, 0(r30)
/* 80330DB0 0032DCF0  38 03 00 10 */	addi r0, r3, 0x10
/* 80330DB4 0032DCF4  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80330DB8 0032DCF8  41 82 00 18 */	beq .L_80330DD0
/* 80330DBC 0032DCFC  3C 60 80 4E */	lis r3, "__vt__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"@ha
/* 80330DC0 0032DD00  38 00 00 00 */	li r0, 0
/* 80330DC4 0032DD04  38 63 A9 10 */	addi r3, r3, "__vt__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"@l
/* 80330DC8 0032DD08  90 7E 00 1C */	stw r3, 0x1c(r30)
/* 80330DCC 0032DD0C  90 0D 91 CC */	stw r0, "sInstance__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"@sda21(r13)
.L_80330DD0:
/* 80330DD0 0032DD10  7F C3 F3 78 */	mr r3, r30
/* 80330DD4 0032DD14  38 80 00 00 */	li r4, 0
/* 80330DD8 0032DD18  48 00 7B ED */	bl __dt__Q28PSSystem12TextDataBaseFv
/* 80330DDC 0032DD1C  7F E0 07 35 */	extsh. r0, r31
/* 80330DE0 0032DD20  40 81 00 0C */	ble .L_80330DEC
/* 80330DE4 0032DD24  7F C3 F3 78 */	mr r3, r30
/* 80330DE8 0032DD28  4B CF 32 CD */	bl __dl__FPv
.L_80330DEC:
/* 80330DEC 0032DD2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80330DF0 0032DD30  7F C3 F3 78 */	mr r3, r30
/* 80330DF4 0032DD34  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80330DF8 0032DD38  83 C1 00 08 */	lwz r30, 8(r1)
/* 80330DFC 0032DD3C  7C 08 03 A6 */	mtlr r0
/* 80330E00 0032DD40  38 21 00 10 */	addi r1, r1, 0x10
/* 80330E04 0032DD44  4E 80 00 20 */	blr 
.endfn __dt__Q28PSSystem11SeqDataListFv

.fn getSeqVolume__Q28PSSystem11SeqDataListFPCc, global
/* 80330E08 0032DD48  94 21 FB A0 */	stwu r1, -0x460(r1)
/* 80330E0C 0032DD4C  7C 08 02 A6 */	mflr r0
/* 80330E10 0032DD50  90 01 04 64 */	stw r0, 0x464(r1)
/* 80330E14 0032DD54  93 E1 04 5C */	stw r31, 0x45c(r1)
/* 80330E18 0032DD58  93 C1 04 58 */	stw r30, 0x458(r1)
/* 80330E1C 0032DD5C  7C 9E 23 78 */	mr r30, r4
/* 80330E20 0032DD60  93 A1 04 54 */	stw r29, 0x454(r1)
/* 80330E24 0032DD64  7C 7D 1B 78 */	mr r29, r3
/* 80330E28 0032DD68  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 80330E2C 0032DD6C  80 1D 00 18 */	lwz r0, 0x18(r29)
/* 80330E30 0032DD70  3B E3 F8 48 */	addi r31, r3, lbl_8048F848@l
/* 80330E34 0032DD74  28 00 00 00 */	cmplwi r0, 0
/* 80330E38 0032DD78  40 82 00 18 */	bne .L_80330E50
/* 80330E3C 0032DD7C  38 7F 00 00 */	addi r3, r31, 0
/* 80330E40 0032DD80  38 BF 00 0C */	addi r5, r31, 0xc
/* 80330E44 0032DD84  38 80 00 24 */	li r4, 0x24
/* 80330E48 0032DD88  4C C6 31 82 */	crclr 6
/* 80330E4C 0032DD8C  4B CF 97 F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80330E50:
/* 80330E50 0032DD90  80 9D 00 18 */	lwz r4, 0x18(r29)
/* 80330E54 0032DD94  38 61 00 2C */	addi r3, r1, 0x2c
/* 80330E58 0032DD98  38 A0 FF FF */	li r5, -1
/* 80330E5C 0032DD9C  48 0E 4A 9D */	bl __ct__9RamStreamFPvi
/* 80330E60 0032DDA0  38 00 00 01 */	li r0, 1
/* 80330E64 0032DDA4  2C 00 00 01 */	cmpwi r0, 1
/* 80330E68 0032DDA8  90 01 00 38 */	stw r0, 0x38(r1)
/* 80330E6C 0032DDAC  40 82 00 0C */	bne .L_80330E78
/* 80330E70 0032DDB0  38 00 00 00 */	li r0, 0
/* 80330E74 0032DDB4  90 01 04 40 */	stw r0, 0x440(r1)
.L_80330E78:
/* 80330E78 0032DDB8  38 61 00 2C */	addi r3, r1, 0x2c
/* 80330E7C 0032DDBC  38 81 00 08 */	addi r4, r1, 8
/* 80330E80 0032DDC0  38 A0 00 20 */	li r5, 0x20
/* 80330E84 0032DDC4  48 0E 42 51 */	bl readString__6StreamFPci
/* 80330E88 0032DDC8  48 00 00 3C */	b .L_80330EC4
.L_80330E8C:
/* 80330E8C 0032DDCC  38 61 00 2C */	addi r3, r1, 0x2c
/* 80330E90 0032DDD0  48 0E 36 0D */	bl readByte__6StreamFv
/* 80330E94 0032DDD4  98 61 00 28 */	stb r3, 0x28(r1)
/* 80330E98 0032DDD8  7F C4 F3 78 */	mr r4, r30
/* 80330E9C 0032DDDC  38 61 00 08 */	addi r3, r1, 8
/* 80330EA0 0032DDE0  4B D9 98 21 */	bl strcmp
/* 80330EA4 0032DDE4  2C 03 00 00 */	cmpwi r3, 0
/* 80330EA8 0032DDE8  40 82 00 0C */	bne .L_80330EB4
/* 80330EAC 0032DDEC  88 61 00 28 */	lbz r3, 0x28(r1)
/* 80330EB0 0032DDF0  48 00 00 44 */	b .L_80330EF4
.L_80330EB4:
/* 80330EB4 0032DDF4  38 61 00 2C */	addi r3, r1, 0x2c
/* 80330EB8 0032DDF8  38 81 00 08 */	addi r4, r1, 8
/* 80330EBC 0032DDFC  38 A0 00 20 */	li r5, 0x20
/* 80330EC0 0032DE00  48 0E 42 15 */	bl readString__6StreamFPci
.L_80330EC4:
/* 80330EC4 0032DE04  38 61 00 08 */	addi r3, r1, 8
/* 80330EC8 0032DE08  38 9F 00 18 */	addi r4, r31, 0x18
/* 80330ECC 0032DE0C  4B D9 97 F5 */	bl strcmp
/* 80330ED0 0032DE10  2C 03 00 00 */	cmpwi r3, 0
/* 80330ED4 0032DE14  40 82 FF B8 */	bne .L_80330E8C
/* 80330ED8 0032DE18  7F C6 F3 78 */	mr r6, r30
/* 80330EDC 0032DE1C  38 7F 00 00 */	addi r3, r31, 0
/* 80330EE0 0032DE20  38 BF 00 24 */	addi r5, r31, 0x24
/* 80330EE4 0032DE24  38 80 00 35 */	li r4, 0x35
/* 80330EE8 0032DE28  4C C6 31 82 */	crclr 6
/* 80330EEC 0032DE2C  4B CF 97 55 */	bl panic_f__12JUTExceptionFPCciPCce
/* 80330EF0 0032DE30  38 60 00 32 */	li r3, 0x32
.L_80330EF4:
/* 80330EF4 0032DE34  80 01 04 64 */	lwz r0, 0x464(r1)
/* 80330EF8 0032DE38  83 E1 04 5C */	lwz r31, 0x45c(r1)
/* 80330EFC 0032DE3C  83 C1 04 58 */	lwz r30, 0x458(r1)
/* 80330F00 0032DE40  83 A1 04 54 */	lwz r29, 0x454(r1)
/* 80330F04 0032DE44  7C 08 03 A6 */	mtlr r0
/* 80330F08 0032DE48  38 21 04 60 */	addi r1, r1, 0x460
/* 80330F0C 0032DE4C  4E 80 00 20 */	blr 
.endfn getSeqVolume__Q28PSSystem11SeqDataListFPCc

.fn __ct__Q28PSSystem14StreamDataListFv, global
/* 80330F10 0032DE50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80330F14 0032DE54  7C 08 02 A6 */	mflr r0
/* 80330F18 0032DE58  90 01 00 14 */	stw r0, 0x14(r1)
/* 80330F1C 0032DE5C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80330F20 0032DE60  7C 7F 1B 78 */	mr r31, r3
/* 80330F24 0032DE64  48 00 7A 5D */	bl __ct__Q28PSSystem12TextDataBaseFv
/* 80330F28 0032DE68  3C 60 80 4E */	lis r3, "__vt__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"@ha
/* 80330F2C 0032DE6C  34 9F 00 1C */	addic. r4, r31, 0x1c
/* 80330F30 0032DE70  38 03 A8 E8 */	addi r0, r3, "__vt__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"@l
/* 80330F34 0032DE74  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 80330F38 0032DE78  41 82 00 08 */	beq .L_80330F40
/* 80330F3C 0032DE7C  38 84 FF E4 */	addi r4, r4, -28
.L_80330F40:
/* 80330F40 0032DE80  3C 60 80 4E */	lis r3, __vt__Q28PSSystem14StreamDataList@ha
/* 80330F44 0032DE84  90 8D 91 D0 */	stw r4, "sInstance__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"@sda21(r13)
/* 80330F48 0032DE88  38 83 A8 CC */	addi r4, r3, __vt__Q28PSSystem14StreamDataList@l
/* 80330F4C 0032DE8C  7F E3 FB 78 */	mr r3, r31
/* 80330F50 0032DE90  90 9F 00 00 */	stw r4, 0(r31)
/* 80330F54 0032DE94  38 04 00 10 */	addi r0, r4, 0x10
/* 80330F58 0032DE98  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 80330F5C 0032DE9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80330F60 0032DEA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80330F64 0032DEA4  7C 08 03 A6 */	mtlr r0
/* 80330F68 0032DEA8  38 21 00 10 */	addi r1, r1, 0x10
/* 80330F6C 0032DEAC  4E 80 00 20 */	blr 
.endfn __ct__Q28PSSystem14StreamDataListFv

.fn __dt__Q28PSSystem14StreamDataListFv, global
/* 80330F70 0032DEB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80330F74 0032DEB4  7C 08 02 A6 */	mflr r0
/* 80330F78 0032DEB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80330F7C 0032DEBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80330F80 0032DEC0  7C 9F 23 78 */	mr r31, r4
/* 80330F84 0032DEC4  93 C1 00 08 */	stw r30, 8(r1)
/* 80330F88 0032DEC8  7C 7E 1B 79 */	or. r30, r3, r3
/* 80330F8C 0032DECC  41 82 00 50 */	beq .L_80330FDC
/* 80330F90 0032DED0  3C 60 80 4E */	lis r3, __vt__Q28PSSystem14StreamDataList@ha
/* 80330F94 0032DED4  34 1E 00 1C */	addic. r0, r30, 0x1c
/* 80330F98 0032DED8  38 63 A8 CC */	addi r3, r3, __vt__Q28PSSystem14StreamDataList@l
/* 80330F9C 0032DEDC  90 7E 00 00 */	stw r3, 0(r30)
/* 80330FA0 0032DEE0  38 03 00 10 */	addi r0, r3, 0x10
/* 80330FA4 0032DEE4  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80330FA8 0032DEE8  41 82 00 18 */	beq .L_80330FC0
/* 80330FAC 0032DEEC  3C 60 80 4E */	lis r3, "__vt__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"@ha
/* 80330FB0 0032DEF0  38 00 00 00 */	li r0, 0
/* 80330FB4 0032DEF4  38 63 A8 E8 */	addi r3, r3, "__vt__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"@l
/* 80330FB8 0032DEF8  90 7E 00 1C */	stw r3, 0x1c(r30)
/* 80330FBC 0032DEFC  90 0D 91 D0 */	stw r0, "sInstance__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"@sda21(r13)
.L_80330FC0:
/* 80330FC0 0032DF00  7F C3 F3 78 */	mr r3, r30
/* 80330FC4 0032DF04  38 80 00 00 */	li r4, 0
/* 80330FC8 0032DF08  48 00 79 FD */	bl __dt__Q28PSSystem12TextDataBaseFv
/* 80330FCC 0032DF0C  7F E0 07 35 */	extsh. r0, r31
/* 80330FD0 0032DF10  40 81 00 0C */	ble .L_80330FDC
/* 80330FD4 0032DF14  7F C3 F3 78 */	mr r3, r30
/* 80330FD8 0032DF18  4B CF 30 DD */	bl __dl__FPv
.L_80330FDC:
/* 80330FDC 0032DF1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80330FE0 0032DF20  7F C3 F3 78 */	mr r3, r30
/* 80330FE4 0032DF24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80330FE8 0032DF28  83 C1 00 08 */	lwz r30, 8(r1)
/* 80330FEC 0032DF2C  7C 08 03 A6 */	mtlr r0
/* 80330FF0 0032DF30  38 21 00 10 */	addi r1, r1, 0x10
/* 80330FF4 0032DF34  4E 80 00 20 */	blr 
.endfn __dt__Q28PSSystem14StreamDataListFv

.fn getStreamVolume__Q28PSSystem14StreamDataListFUl, global
/* 80330FF8 0032DF38  94 21 FB A0 */	stwu r1, -0x460(r1)
/* 80330FFC 0032DF3C  7C 08 02 A6 */	mflr r0
/* 80331000 0032DF40  90 01 04 64 */	stw r0, 0x464(r1)
/* 80331004 0032DF44  93 E1 04 5C */	stw r31, 0x45c(r1)
/* 80331008 0032DF48  93 C1 04 58 */	stw r30, 0x458(r1)
/* 8033100C 0032DF4C  54 9E 05 3E */	clrlwi r30, r4, 0x14
/* 80331010 0032DF50  93 A1 04 54 */	stw r29, 0x454(r1)
/* 80331014 0032DF54  7C 7D 1B 78 */	mr r29, r3
/* 80331018 0032DF58  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 8033101C 0032DF5C  80 1D 00 18 */	lwz r0, 0x18(r29)
/* 80331020 0032DF60  3B E3 F8 48 */	addi r31, r3, lbl_8048F848@l
/* 80331024 0032DF64  28 00 00 00 */	cmplwi r0, 0
/* 80331028 0032DF68  40 82 00 18 */	bne .L_80331040
/* 8033102C 0032DF6C  38 7F 00 00 */	addi r3, r31, 0
/* 80331030 0032DF70  38 BF 00 0C */	addi r5, r31, 0xc
/* 80331034 0032DF74  38 80 00 4C */	li r4, 0x4c
/* 80331038 0032DF78  4C C6 31 82 */	crclr 6
/* 8033103C 0032DF7C  4B CF 96 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80331040:
/* 80331040 0032DF80  80 9D 00 18 */	lwz r4, 0x18(r29)
/* 80331044 0032DF84  38 61 00 30 */	addi r3, r1, 0x30
/* 80331048 0032DF88  38 A0 FF FF */	li r5, -1
/* 8033104C 0032DF8C  48 0E 48 AD */	bl __ct__9RamStreamFPvi
/* 80331050 0032DF90  38 00 00 01 */	li r0, 1
/* 80331054 0032DF94  2C 00 00 01 */	cmpwi r0, 1
/* 80331058 0032DF98  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8033105C 0032DF9C  40 82 00 0C */	bne .L_80331068
/* 80331060 0032DFA0  38 00 00 00 */	li r0, 0
/* 80331064 0032DFA4  90 01 04 44 */	stw r0, 0x444(r1)
.L_80331068:
/* 80331068 0032DFA8  38 61 00 30 */	addi r3, r1, 0x30
/* 8033106C 0032DFAC  38 81 00 08 */	addi r4, r1, 8
/* 80331070 0032DFB0  38 A0 00 20 */	li r5, 0x20
/* 80331074 0032DFB4  48 0E 40 61 */	bl readString__6StreamFPci
/* 80331078 0032DFB8  48 00 00 44 */	b .L_803310BC
.L_8033107C:
/* 8033107C 0032DFBC  38 61 00 30 */	addi r3, r1, 0x30
/* 80331080 0032DFC0  48 0E 3A 11 */	bl readInt__6StreamFv
/* 80331084 0032DFC4  90 61 00 28 */	stw r3, 0x28(r1)
/* 80331088 0032DFC8  38 61 00 30 */	addi r3, r1, 0x30
/* 8033108C 0032DFCC  48 0E 34 11 */	bl readByte__6StreamFv
/* 80331090 0032DFD0  80 01 00 28 */	lwz r0, 0x28(r1)
/* 80331094 0032DFD4  54 64 06 3E */	clrlwi r4, r3, 0x18
/* 80331098 0032DFD8  98 61 00 2C */	stb r3, 0x2c(r1)
/* 8033109C 0032DFDC  7C 00 F0 40 */	cmplw r0, r30
/* 803310A0 0032DFE0  40 82 00 0C */	bne .L_803310AC
/* 803310A4 0032DFE4  7C 83 23 78 */	mr r3, r4
/* 803310A8 0032DFE8  48 00 00 44 */	b .L_803310EC
.L_803310AC:
/* 803310AC 0032DFEC  38 61 00 30 */	addi r3, r1, 0x30
/* 803310B0 0032DFF0  38 81 00 08 */	addi r4, r1, 8
/* 803310B4 0032DFF4  38 A0 00 20 */	li r5, 0x20
/* 803310B8 0032DFF8  48 0E 40 1D */	bl readString__6StreamFPci
.L_803310BC:
/* 803310BC 0032DFFC  38 61 00 08 */	addi r3, r1, 8
/* 803310C0 0032E000  38 9F 00 18 */	addi r4, r31, 0x18
/* 803310C4 0032E004  4B D9 95 FD */	bl strcmp
/* 803310C8 0032E008  2C 03 00 00 */	cmpwi r3, 0
/* 803310CC 0032E00C  40 82 FF B0 */	bne .L_8033107C
/* 803310D0 0032E010  7F C6 F3 78 */	mr r6, r30
/* 803310D4 0032E014  38 7F 00 00 */	addi r3, r31, 0
/* 803310D8 0032E018  38 BF 00 3C */	addi r5, r31, 0x3c
/* 803310DC 0032E01C  38 80 00 5F */	li r4, 0x5f
/* 803310E0 0032E020  4C C6 31 82 */	crclr 6
/* 803310E4 0032E024  4B CF 95 5D */	bl panic_f__12JUTExceptionFPCciPCce
/* 803310E8 0032E028  38 60 00 00 */	li r3, 0
.L_803310EC:
/* 803310EC 0032E02C  80 01 04 64 */	lwz r0, 0x464(r1)
/* 803310F0 0032E030  83 E1 04 5C */	lwz r31, 0x45c(r1)
/* 803310F4 0032E034  83 C1 04 58 */	lwz r30, 0x458(r1)
/* 803310F8 0032E038  83 A1 04 54 */	lwz r29, 0x454(r1)
/* 803310FC 0032E03C  7C 08 03 A6 */	mtlr r0
/* 80331100 0032E040  38 21 04 60 */	addi r1, r1, 0x460
/* 80331104 0032E044  4E 80 00 20 */	blr 
.endfn getStreamVolume__Q28PSSystem14StreamDataListFUl

.fn stop__Q28PSSystem12SeqSoundBaseFUl, global
/* 80331108 0032E048  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8033110C 0032E04C  7C 08 02 A6 */	mflr r0
/* 80331110 0032E050  90 01 00 24 */	stw r0, 0x24(r1)
/* 80331114 0032E054  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80331118 0032E058  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8033111C 0032E05C  7C 9E 23 78 */	mr r30, r4
/* 80331120 0032E060  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80331124 0032E064  7C 7D 1B 78 */	mr r29, r3
/* 80331128 0032E068  80 03 00 04 */	lwz r0, 4(r3)
/* 8033112C 0032E06C  28 00 00 00 */	cmplwi r0, 0
/* 80331130 0032E070  40 82 00 20 */	bne .L_80331150
/* 80331134 0032E074  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 80331138 0032E078  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 8033113C 0032E07C  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 80331140 0032E080  38 80 00 6B */	li r4, 0x6b
/* 80331144 0032E084  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 80331148 0032E088  4C C6 31 82 */	crclr 6
/* 8033114C 0032E08C  4B CF 94 F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80331150:
/* 80331150 0032E090  80 7D 00 04 */	lwz r3, 4(r29)
/* 80331154 0032E094  3B E3 00 50 */	addi r31, r3, 0x50
/* 80331158 0032E098  7F E3 FB 78 */	mr r3, r31
/* 8033115C 0032E09C  4B DB EA 0D */	bl OSLockMutex
/* 80331160 0032E0A0  7F A3 EB 78 */	mr r3, r29
/* 80331164 0032E0A4  7F C4 F3 78 */	mr r4, r30
/* 80331168 0032E0A8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8033116C 0032E0AC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80331170 0032E0B0  7D 89 03 A6 */	mtctr r12
/* 80331174 0032E0B4  4E 80 04 21 */	bctrl 
/* 80331178 0032E0B8  7F E3 FB 78 */	mr r3, r31
/* 8033117C 0032E0BC  4B DB EA C9 */	bl OSUnlockMutex
/* 80331180 0032E0C0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80331184 0032E0C4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80331188 0032E0C8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8033118C 0032E0CC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80331190 0032E0D0  7C 08 03 A6 */	mtlr r0
/* 80331194 0032E0D4  38 21 00 20 */	addi r1, r1, 0x20
/* 80331198 0032E0D8  4E 80 00 20 */	blr 
.endfn stop__Q28PSSystem12SeqSoundBaseFUl

.fn stopInner__Q28PSSystem8SeqSoundFUl, global
/* 8033119C 0032E0DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803311A0 0032E0E0  7C 08 02 A6 */	mflr r0
/* 803311A4 0032E0E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803311A8 0032E0E8  4B D8 24 A9 */	bl releaseSeqBuffer__Q27JAInter11SequenceMgrFP11JAISequenceUl
/* 803311AC 0032E0EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803311B0 0032E0F0  7C 08 03 A6 */	mtlr r0
/* 803311B4 0032E0F4  38 21 00 10 */	addi r1, r1, 0x10
/* 803311B8 0032E0F8  4E 80 00 20 */	blr 
.endfn stopInner__Q28PSSystem8SeqSoundFUl

.fn stopInner__Q28PSSystem11StreamSoundFUl, global
/* 803311BC 0032E0FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803311C0 0032E100  7C 08 02 A6 */	mflr r0
/* 803311C4 0032E104  90 01 00 14 */	stw r0, 0x14(r1)
/* 803311C8 0032E108  4B D8 6A F9 */	bl releaseStreamBuffer__Q27JAInter9StreamMgrFP9JAIStreamUl
/* 803311CC 0032E10C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803311D0 0032E110  7C 08 03 A6 */	mtlr r0
/* 803311D4 0032E114  38 21 00 10 */	addi r1, r1, 0x10
/* 803311D8 0032E118  4E 80 00 20 */	blr 
.endfn stopInner__Q28PSSystem11StreamSoundFUl

.fn __dt__Q28PSSystem7SeqHeapFv, global
/* 803311DC 0032E11C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803311E0 0032E120  7C 08 02 A6 */	mflr r0
/* 803311E4 0032E124  90 01 00 14 */	stw r0, 0x14(r1)
/* 803311E8 0032E128  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803311EC 0032E12C  7C 9F 23 78 */	mr r31, r4
/* 803311F0 0032E130  93 C1 00 08 */	stw r30, 8(r1)
/* 803311F4 0032E134  7C 7E 1B 79 */	or. r30, r3, r3
/* 803311F8 0032E138  41 82 00 28 */	beq .L_80331220
/* 803311FC 0032E13C  3C 60 80 4E */	lis r3, __vt__Q28PSSystem7SeqHeap@ha
/* 80331200 0032E140  38 03 A6 DC */	addi r0, r3, __vt__Q28PSSystem7SeqHeap@l
/* 80331204 0032E144  90 1E 00 00 */	stw r0, 0(r30)
/* 80331208 0032E148  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 8033120C 0032E14C  4B CF 2E CD */	bl __dla__FPv
/* 80331210 0032E150  7F E0 07 35 */	extsh. r0, r31
/* 80331214 0032E154  40 81 00 0C */	ble .L_80331220
/* 80331218 0032E158  7F C3 F3 78 */	mr r3, r30
/* 8033121C 0032E15C  4B CF 2E 99 */	bl __dl__FPv
.L_80331220:
/* 80331220 0032E160  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80331224 0032E164  7F C3 F3 78 */	mr r3, r30
/* 80331228 0032E168  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033122C 0032E16C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80331230 0032E170  7C 08 03 A6 */	mtlr r0
/* 80331234 0032E174  38 21 00 10 */	addi r1, r1, 0x10
/* 80331238 0032E178  4E 80 00 20 */	blr 
.endfn __dt__Q28PSSystem7SeqHeapFv

.fn requestCallback__Q28PSSystem7SeqHeapFUlUsP11JAISequence, global
/* 8033123C 0032E17C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80331240 0032E180  7C 08 02 A6 */	mflr r0
/* 80331244 0032E184  90 01 00 24 */	stw r0, 0x24(r1)
/* 80331248 0032E188  BF 41 00 08 */	stmw r26, 8(r1)
/* 8033124C 0032E18C  3B C0 00 00 */	li r30, 0
/* 80331250 0032E190  7C 7F 1B 78 */	mr r31, r3
/* 80331254 0032E194  7C DB 33 78 */	mr r27, r6
/* 80331258 0032E198  7F DD F3 78 */	mr r29, r30
/* 8033125C 0032E19C  88 0D 98 4C */	lbz r0, init$2941@sda21(r13)
/* 80331260 0032E1A0  7C 00 07 75 */	extsb. r0, r0
/* 80331264 0032E1A4  40 82 00 10 */	bne .L_80331274
/* 80331268 0032E1A8  38 00 00 01 */	li r0, 1
/* 8033126C 0032E1AC  93 CD 98 48 */	stw r30, oldID$2940@sda21(r13)
/* 80331270 0032E1B0  98 0D 98 4C */	stb r0, init$2941@sda21(r13)
.L_80331274:
/* 80331274 0032E1B4  2C 04 00 02 */	cmpwi r4, 2
/* 80331278 0032E1B8  54 BC 04 3E */	clrlwi r28, r5, 0x10
/* 8033127C 0032E1BC  41 82 01 78 */	beq .L_803313F4
/* 80331280 0032E1C0  40 80 00 14 */	bge .L_80331294
/* 80331284 0032E1C4  2C 04 00 00 */	cmpwi r4, 0
/* 80331288 0032E1C8  41 82 00 18 */	beq .L_803312A0
/* 8033128C 0032E1CC  40 80 00 DC */	bge .L_80331368
/* 80331290 0032E1D0  48 00 01 90 */	b .L_80331420
.L_80331294:
/* 80331294 0032E1D4  2C 04 00 04 */	cmpwi r4, 4
/* 80331298 0032E1D8  40 80 01 88 */	bge .L_80331420
/* 8033129C 0032E1DC  48 00 00 CC */	b .L_80331368
.L_803312A0:
/* 803312A0 0032E1E0  28 1B 00 00 */	cmplwi r27, 0
/* 803312A4 0032E1E4  40 82 00 20 */	bne .L_803312C4
/* 803312A8 0032E1E8  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 803312AC 0032E1EC  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 803312B0 0032E1F0  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 803312B4 0032E1F4  38 80 00 BE */	li r4, 0xbe
/* 803312B8 0032E1F8  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 803312BC 0032E1FC  4C C6 31 82 */	crclr 6
/* 803312C0 0032E200  4B CF 93 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803312C4:
/* 803312C4 0032E204  83 7B 06 A4 */	lwz r27, 0x6a4(r27)
/* 803312C8 0032E208  28 1B 00 00 */	cmplwi r27, 0
/* 803312CC 0032E20C  40 82 00 20 */	bne .L_803312EC
/* 803312D0 0032E210  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 803312D4 0032E214  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 803312D8 0032E218  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 803312DC 0032E21C  38 80 00 C0 */	li r4, 0xc0
/* 803312E0 0032E220  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 803312E4 0032E224  4C C6 31 82 */	crclr 6
/* 803312E8 0032E228  4B CF 93 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803312EC:
/* 803312EC 0032E22C  83 7B 00 28 */	lwz r27, 0x28(r27)
/* 803312F0 0032E230  80 1B 00 04 */	lwz r0, 4(r27)
/* 803312F4 0032E234  28 00 00 00 */	cmplwi r0, 0
/* 803312F8 0032E238  40 82 00 40 */	bne .L_80331338
/* 803312FC 0032E23C  3B A0 00 01 */	li r29, 1
/* 80331300 0032E240  4B D7 FD 9D */	bl getArchivePointer__Q27JAInter11SequenceMgrFv
/* 80331304 0032E244  7F 84 E3 78 */	mr r4, r28
/* 80331308 0032E248  4B D7 63 69 */	bl getResSize__15JASResArcLoaderFP10JKRArchiveUs
/* 8033130C 0032E24C  80 1B 00 08 */	lwz r0, 8(r27)
/* 80331310 0032E250  7C 03 00 40 */	cmplw r3, r0
/* 80331314 0032E254  40 81 00 28 */	ble .L_8033133C
/* 80331318 0032E258  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 8033131C 0032E25C  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 80331320 0032E260  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 80331324 0032E264  38 80 00 C9 */	li r4, 0xc9
/* 80331328 0032E268  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 8033132C 0032E26C  4C C6 31 82 */	crclr 6
/* 80331330 0032E270  4B CF 93 11 */	bl panic_f__12JUTExceptionFPCciPCce
/* 80331334 0032E274  48 00 00 08 */	b .L_8033133C
.L_80331338:
/* 80331338 0032E278  3B A0 00 00 */	li r29, 0
.L_8033133C:
/* 8033133C 0032E27C  83 DB 00 0C */	lwz r30, 0xc(r27)
/* 80331340 0032E280  28 1E 00 00 */	cmplwi r30, 0
/* 80331344 0032E284  40 82 00 DC */	bne .L_80331420
/* 80331348 0032E288  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 8033134C 0032E28C  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 80331350 0032E290  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 80331354 0032E294  38 80 00 D0 */	li r4, 0xd0
/* 80331358 0032E298  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 8033135C 0032E29C  4C C6 31 82 */	crclr 6
/* 80331360 0032E2A0  4B CF 92 E1 */	bl panic_f__12JUTExceptionFPCciPCce
/* 80331364 0032E2A4  48 00 00 BC */	b .L_80331420
.L_80331368:
/* 80331368 0032E2A8  28 1B 00 00 */	cmplwi r27, 0
/* 8033136C 0032E2AC  40 82 00 20 */	bne .L_8033138C
/* 80331370 0032E2B0  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 80331374 0032E2B4  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 80331378 0032E2B8  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 8033137C 0032E2BC  38 80 00 DC */	li r4, 0xdc
/* 80331380 0032E2C0  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 80331384 0032E2C4  4C C6 31 82 */	crclr 6
/* 80331388 0032E2C8  4B CF 92 B9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8033138C:
/* 8033138C 0032E2CC  83 7B 06 A4 */	lwz r27, 0x6a4(r27)
/* 80331390 0032E2D0  28 1B 00 00 */	cmplwi r27, 0
/* 80331394 0032E2D4  40 82 00 20 */	bne .L_803313B4
/* 80331398 0032E2D8  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 8033139C 0032E2DC  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 803313A0 0032E2E0  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 803313A4 0032E2E4  38 80 00 DE */	li r4, 0xde
/* 803313A8 0032E2E8  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 803313AC 0032E2EC  4C C6 31 82 */	crclr 6
/* 803313B0 0032E2F0  4B CF 92 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803313B4:
/* 803313B4 0032E2F4  4B D7 FC E9 */	bl getArchivePointer__Q27JAInter11SequenceMgrFv
/* 803313B8 0032E2F8  7C 7A 1B 79 */	or. r26, r3, r3
/* 803313BC 0032E2FC  40 82 00 20 */	bne .L_803313DC
/* 803313C0 0032E300  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 803313C4 0032E304  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 803313C8 0032E308  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 803313CC 0032E30C  38 80 00 E0 */	li r4, 0xe0
/* 803313D0 0032E310  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 803313D4 0032E314  4C C6 31 82 */	crclr 6
/* 803313D8 0032E318  4B CF 92 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803313DC:
/* 803313DC 0032E31C  7F 43 D3 78 */	mr r3, r26
/* 803313E0 0032E320  7F 84 E3 78 */	mr r4, r28
/* 803313E4 0032E324  4B D7 62 8D */	bl getResSize__15JASResArcLoaderFP10JKRArchiveUs
/* 803313E8 0032E328  80 9B 00 28 */	lwz r4, 0x28(r27)
/* 803313EC 0032E32C  48 00 01 25 */	bl loadedCallback__Q28PSSystem7SeqHeapFUlUl
/* 803313F0 0032E330  48 00 00 30 */	b .L_80331420
.L_803313F4:
/* 803313F4 0032E334  28 1B 00 00 */	cmplwi r27, 0
/* 803313F8 0032E338  40 82 00 20 */	bne .L_80331418
/* 803313FC 0032E33C  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 80331400 0032E340  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 80331404 0032E344  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 80331408 0032E348  38 80 00 E9 */	li r4, 0xe9
/* 8033140C 0032E34C  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 80331410 0032E350  4C C6 31 82 */	crclr 6
/* 80331414 0032E354  4B CF 92 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80331418:
/* 80331418 0032E358  38 00 00 00 */	li r0, 0
/* 8033141C 0032E35C  90 1B 06 A4 */	stw r0, 0x6a4(r27)
.L_80331420:
/* 80331420 0032E360  93 DF 00 00 */	stw r30, 0(r31)
/* 80331424 0032E364  9B BF 00 04 */	stb r29, 4(r31)
/* 80331428 0032E368  BB 41 00 08 */	lmw r26, 8(r1)
/* 8033142C 0032E36C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80331430 0032E370  7C 08 03 A6 */	mtlr r0
/* 80331434 0032E374  38 21 00 20 */	addi r1, r1, 0x20
/* 80331438 0032E378  4E 80 00 20 */	blr 
.endfn requestCallback__Q28PSSystem7SeqHeapFUlUsP11JAISequence

.fn loadSeqAsync__Q28PSSystem7SeqHeapFPQ28PSSystem11TaskChecker, global
/* 8033143C 0032E37C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80331440 0032E380  7C 08 02 A6 */	mflr r0
/* 80331444 0032E384  90 01 00 24 */	stw r0, 0x24(r1)
/* 80331448 0032E388  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8033144C 0032E38C  7C 7B 1B 78 */	mr r27, r3
/* 80331450 0032E390  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 80331454 0032E394  3B E3 F8 48 */	addi r31, r3, lbl_8048F848@l
/* 80331458 0032E398  90 9B 00 14 */	stw r4, 0x14(r27)
/* 8033145C 0032E39C  80 1B 00 04 */	lwz r0, 4(r27)
/* 80331460 0032E3A0  28 00 00 00 */	cmplwi r0, 0
/* 80331464 0032E3A4  41 82 00 18 */	beq .L_8033147C
/* 80331468 0032E3A8  38 7F 00 00 */	addi r3, r31, 0
/* 8033146C 0032E3AC  38 BF 00 0C */	addi r5, r31, 0xc
/* 80331470 0032E3B0  38 80 00 F7 */	li r4, 0xf7
/* 80331474 0032E3B4  4C C6 31 82 */	crclr 6
/* 80331478 0032E3B8  4B CF 91 C9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8033147C:
/* 8033147C 0032E3BC  83 9B 00 14 */	lwz r28, 0x14(r27)
/* 80331480 0032E3C0  28 1C 00 00 */	cmplwi r28, 0
/* 80331484 0032E3C4  41 82 00 20 */	beq .L_803314A4
/* 80331488 0032E3C8  7F 83 E3 78 */	mr r3, r28
/* 8033148C 0032E3CC  4B DB E6 DD */	bl OSLockMutex
/* 80331490 0032E3D0  88 9C 00 18 */	lbz r4, 0x18(r28)
/* 80331494 0032E3D4  7F 83 E3 78 */	mr r3, r28
/* 80331498 0032E3D8  38 04 00 01 */	addi r0, r4, 1
/* 8033149C 0032E3DC  98 1C 00 18 */	stb r0, 0x18(r28)
/* 803314A0 0032E3E0  4B DB E7 A5 */	bl OSUnlockMutex
.L_803314A4:
/* 803314A4 0032E3E4  80 7B 00 10 */	lwz r3, 0x10(r27)
/* 803314A8 0032E3E8  48 00 04 69 */	bl getFileEntry__Q28PSSystem7SeqBaseFv
/* 803314AC 0032E3EC  83 C3 00 0C */	lwz r30, 0xc(r3)
/* 803314B0 0032E3F0  83 BB 00 0C */	lwz r29, 0xc(r27)
/* 803314B4 0032E3F4  80 7B 00 10 */	lwz r3, 0x10(r27)
/* 803314B8 0032E3F8  48 00 04 59 */	bl getFileEntry__Q28PSSystem7SeqBaseFv
/* 803314BC 0032E3FC  A3 83 00 00 */	lhz r28, 0(r3)
/* 803314C0 0032E400  4B D7 FB DD */	bl getArchivePointer__Q27JAInter11SequenceMgrFv
/* 803314C4 0032E404  3C A0 80 33 */	lis r5, loadedCallback__Q28PSSystem7SeqHeapFUlUl@ha
/* 803314C8 0032E408  7F 84 E3 78 */	mr r4, r28
/* 803314CC 0032E40C  38 E5 15 10 */	addi r7, r5, loadedCallback__Q28PSSystem7SeqHeapFUlUl@l
/* 803314D0 0032E410  7F C6 F3 78 */	mr r6, r30
/* 803314D4 0032E414  7F A5 EB 78 */	mr r5, r29
/* 803314D8 0032E418  7F 68 DB 78 */	mr r8, r27
/* 803314DC 0032E41C  4B D7 63 35 */	bl loadResourceAsync__15JASResArcLoaderFP10JKRArchiveUsPUcUlPFUlUl_vUl
/* 803314E0 0032E420  2C 03 00 01 */	cmpwi r3, 1
/* 803314E4 0032E424  41 82 00 18 */	beq .L_803314FC
/* 803314E8 0032E428  38 7F 00 00 */	addi r3, r31, 0
/* 803314EC 0032E42C  38 BF 00 5C */	addi r5, r31, 0x5c
/* 803314F0 0032E430  38 80 01 0A */	li r4, 0x10a
/* 803314F4 0032E434  4C C6 31 82 */	crclr 6
/* 803314F8 0032E438  4B CF 91 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803314FC:
/* 803314FC 0032E43C  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80331500 0032E440  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80331504 0032E444  7C 08 03 A6 */	mtlr r0
/* 80331508 0032E448  38 21 00 20 */	addi r1, r1, 0x20
/* 8033150C 0032E44C  4E 80 00 20 */	blr 
.endfn loadSeqAsync__Q28PSSystem7SeqHeapFPQ28PSSystem11TaskChecker

.fn loadedCallback__Q28PSSystem7SeqHeapFUlUl, global
/* 80331510 0032E450  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80331514 0032E454  7C 08 02 A6 */	mflr r0
/* 80331518 0032E458  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033151C 0032E45C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80331520 0032E460  7C 9F 23 78 */	mr r31, r4
/* 80331524 0032E464  93 C1 00 08 */	stw r30, 8(r1)
/* 80331528 0032E468  7C 7E 1B 78 */	mr r30, r3
/* 8033152C 0032E46C  93 C4 00 04 */	stw r30, 4(r4)
/* 80331530 0032E470  80 64 00 10 */	lwz r3, 0x10(r4)
/* 80331534 0032E474  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80331538 0032E478  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 8033153C 0032E47C  7D 89 03 A6 */	mtctr r12
/* 80331540 0032E480  4E 80 04 21 */	bctrl 
/* 80331544 0032E484  28 1E 00 00 */	cmplwi r30, 0
/* 80331548 0032E488  40 82 00 20 */	bne .L_80331568
/* 8033154C 0032E48C  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 80331550 0032E490  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 80331554 0032E494  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 80331558 0032E498  38 80 01 26 */	li r4, 0x126
/* 8033155C 0032E49C  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 80331560 0032E4A0  4C C6 31 82 */	crclr 6
/* 80331564 0032E4A4  4B CF 90 DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80331568:
/* 80331568 0032E4A8  83 FF 00 14 */	lwz r31, 0x14(r31)
/* 8033156C 0032E4AC  28 1F 00 00 */	cmplwi r31, 0
/* 80331570 0032E4B0  41 82 00 20 */	beq .L_80331590
/* 80331574 0032E4B4  7F E3 FB 78 */	mr r3, r31
/* 80331578 0032E4B8  4B DB E5 F1 */	bl OSLockMutex
/* 8033157C 0032E4BC  88 9F 00 18 */	lbz r4, 0x18(r31)
/* 80331580 0032E4C0  7F E3 FB 78 */	mr r3, r31
/* 80331584 0032E4C4  38 04 FF FF */	addi r0, r4, -1
/* 80331588 0032E4C8  98 1F 00 18 */	stb r0, 0x18(r31)
/* 8033158C 0032E4CC  4B DB E6 B9 */	bl OSUnlockMutex
.L_80331590:
/* 80331590 0032E4D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80331594 0032E4D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80331598 0032E4D8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8033159C 0032E4DC  7C 08 03 A6 */	mtlr r0
/* 803315A0 0032E4E0  38 21 00 10 */	addi r1, r1, 0x10
/* 803315A4 0032E4E4  4E 80 00 20 */	blr 
.endfn loadedCallback__Q28PSSystem7SeqHeapFUlUl

.fn reservatorTask__Q28PSSystem17SeqPlayReservatorFv, global
/* 803315A8 0032E4E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803315AC 0032E4EC  7C 08 02 A6 */	mflr r0
/* 803315B0 0032E4F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803315B4 0032E4F4  80 63 00 08 */	lwz r3, 8(r3)
/* 803315B8 0032E4F8  81 83 00 10 */	lwz r12, 0x10(r3)
/* 803315BC 0032E4FC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803315C0 0032E500  7D 89 03 A6 */	mtctr r12
/* 803315C4 0032E504  4E 80 04 21 */	bctrl 
/* 803315C8 0032E508  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803315CC 0032E50C  7C 08 03 A6 */	mtlr r0
/* 803315D0 0032E510  38 21 00 10 */	addi r1, r1, 0x10
/* 803315D4 0032E514  4E 80 00 20 */	blr 
.endfn reservatorTask__Q28PSSystem17SeqPlayReservatorFv

.fn reservatorTask__Q28PSSystem21SeqPauseOffReservatorFv, global
/* 803315D8 0032E518  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803315DC 0032E51C  7C 08 02 A6 */	mflr r0
/* 803315E0 0032E520  90 01 00 14 */	stw r0, 0x14(r1)
/* 803315E4 0032E524  80 63 00 08 */	lwz r3, 8(r3)
/* 803315E8 0032E528  81 83 00 10 */	lwz r12, 0x10(r3)
/* 803315EC 0032E52C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803315F0 0032E530  7D 89 03 A6 */	mtctr r12
/* 803315F4 0032E534  4E 80 04 21 */	bctrl 
/* 803315F8 0032E538  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803315FC 0032E53C  7C 08 03 A6 */	mtlr r0
/* 80331600 0032E540  38 21 00 10 */	addi r1, r1, 0x10
/* 80331604 0032E544  4E 80 00 20 */	blr 
.endfn reservatorTask__Q28PSSystem21SeqPauseOffReservatorFv

.fn __ct__Q28PSSystem7SeqBaseFPCcRCQ27JAInter9SoundInfo, global
/* 80331608 0032E548  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8033160C 0032E54C  7C 08 02 A6 */	mflr r0
/* 80331610 0032E550  90 01 00 24 */	stw r0, 0x24(r1)
/* 80331614 0032E554  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80331618 0032E558  7C 9F 23 78 */	mr r31, r4
/* 8033161C 0032E55C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80331620 0032E560  7C 7E 1B 78 */	mr r30, r3
/* 80331624 0032E564  7F C4 F3 78 */	mr r4, r30
/* 80331628 0032E568  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8033162C 0032E56C  7C BD 2B 78 */	mr r29, r5
/* 80331630 0032E570  4B CF 51 89 */	bl __ct__10JSUPtrLinkFPv
/* 80331634 0032E574  3C 60 80 4E */	lis r3, __vt__Q28PSSystem7SeqBase@ha
/* 80331638 0032E578  3C A0 80 4E */	lis r5, __vt__Q28PSSystem10Reservator@ha
/* 8033163C 0032E57C  38 03 A6 74 */	addi r0, r3, __vt__Q28PSSystem7SeqBase@l
/* 80331640 0032E580  3C 80 80 4E */	lis r4, __vt__Q28PSSystem17SeqPlayReservator@ha
/* 80331644 0032E584  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80331648 0032E588  39 40 00 00 */	li r10, 0
/* 8033164C 0032E58C  3C 60 80 4E */	lis r3, __vt__Q28PSSystem21SeqPauseOffReservator@ha
/* 80331650 0032E590  81 1D 00 00 */	lwz r8, 0(r29)
/* 80331654 0032E594  91 5E 00 14 */	stw r10, 0x14(r30)
/* 80331658 0032E598  38 E5 A6 B8 */	addi r7, r5, __vt__Q28PSSystem10Reservator@l
/* 8033165C 0032E59C  80 1D 00 04 */	lwz r0, 4(r29)
/* 80331660 0032E5A0  38 C4 A6 D0 */	addi r6, r4, __vt__Q28PSSystem17SeqPlayReservator@l
/* 80331664 0032E5A4  91 1E 00 18 */	stw r8, 0x18(r30)
/* 80331668 0032E5A8  38 A3 A6 C4 */	addi r5, r3, __vt__Q28PSSystem21SeqPauseOffReservator@l
/* 8033166C 0032E5AC  81 3D 00 08 */	lwz r9, 8(r29)
/* 80331670 0032E5B0  38 80 00 04 */	li r4, 4
/* 80331674 0032E5B4  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80331678 0032E5B8  38 00 00 26 */	li r0, 0x26
/* 8033167C 0032E5BC  81 1D 00 0C */	lwz r8, 0xc(r29)
/* 80331680 0032E5C0  38 7E 00 50 */	addi r3, r30, 0x50
/* 80331684 0032E5C4  91 3E 00 20 */	stw r9, 0x20(r30)
/* 80331688 0032E5C8  91 1E 00 24 */	stw r8, 0x24(r30)
/* 8033168C 0032E5CC  91 5E 00 28 */	stw r10, 0x28(r30)
/* 80331690 0032E5D0  90 FE 00 2C */	stw r7, 0x2c(r30)
/* 80331694 0032E5D4  B1 5E 00 30 */	sth r10, 0x30(r30)
/* 80331698 0032E5D8  90 DE 00 2C */	stw r6, 0x2c(r30)
/* 8033169C 0032E5DC  93 DE 00 34 */	stw r30, 0x34(r30)
/* 803316A0 0032E5E0  90 FE 00 38 */	stw r7, 0x38(r30)
/* 803316A4 0032E5E4  B1 5E 00 3C */	sth r10, 0x3c(r30)
/* 803316A8 0032E5E8  90 BE 00 38 */	stw r5, 0x38(r30)
/* 803316AC 0032E5EC  93 DE 00 40 */	stw r30, 0x40(r30)
/* 803316B0 0032E5F0  90 9E 00 44 */	stw r4, 0x44(r30)
/* 803316B4 0032E5F4  98 1E 00 48 */	stb r0, 0x48(r30)
/* 803316B8 0032E5F8  91 5E 00 4C */	stw r10, 0x4c(r30)
/* 803316BC 0032E5FC  4B DB E4 75 */	bl OSInitMutex
/* 803316C0 0032E600  28 1F 00 00 */	cmplwi r31, 0
/* 803316C4 0032E604  41 82 00 24 */	beq .L_803316E8
/* 803316C8 0032E608  7F E3 FB 78 */	mr r3, r31
/* 803316CC 0032E60C  4B D9 92 45 */	bl strlen
/* 803316D0 0032E610  38 63 00 01 */	addi r3, r3, 1
/* 803316D4 0032E614  4B CF 28 D9 */	bl __nwa__FUl
/* 803316D8 0032E618  90 7E 00 14 */	stw r3, 0x14(r30)
/* 803316DC 0032E61C  7F E4 FB 78 */	mr r4, r31
/* 803316E0 0032E620  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 803316E4 0032E624  4B D9 91 75 */	bl strcpy
.L_803316E8:
/* 803316E8 0032E628  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803316EC 0032E62C  7F C3 F3 78 */	mr r3, r30
/* 803316F0 0032E630  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803316F4 0032E634  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803316F8 0032E638  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803316FC 0032E63C  7C 08 03 A6 */	mtlr r0
/* 80331700 0032E640  38 21 00 20 */	addi r1, r1, 0x20
/* 80331704 0032E644  4E 80 00 20 */	blr 
.endfn __ct__Q28PSSystem7SeqBaseFPCcRCQ27JAInter9SoundInfo

.fn init__Q28PSSystem7SeqBaseFv, global
/* 80331708 0032E648  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8033170C 0032E64C  7C 08 02 A6 */	mflr r0
/* 80331710 0032E650  90 01 00 24 */	stw r0, 0x24(r1)
/* 80331714 0032E654  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80331718 0032E658  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8033171C 0032E65C  7C 7E 1B 78 */	mr r30, r3
/* 80331720 0032E660  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80331724 0032E664  80 83 00 14 */	lwz r4, 0x14(r3)
/* 80331728 0032E668  28 04 00 00 */	cmplwi r4, 0
/* 8033172C 0032E66C  41 82 00 F4 */	beq .L_80331820
/* 80331730 0032E670  80 6D 91 CC */	lwz r3, "sInstance__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"@sda21(r13)
/* 80331734 0032E674  28 03 00 00 */	cmplwi r3, 0
/* 80331738 0032E678  41 82 00 0C */	beq .L_80331744
/* 8033173C 0032E67C  4B FF F6 CD */	bl getSeqVolume__Q28PSSystem11SeqDataListFPCc
/* 80331740 0032E680  98 7E 00 24 */	stb r3, 0x24(r30)
.L_80331744:
/* 80331744 0032E684  38 60 00 18 */	li r3, 0x18
/* 80331748 0032E688  4B CF 27 5D */	bl __nw__FUl
/* 8033174C 0032E68C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80331750 0032E690  41 82 00 CC */	beq .L_8033181C
/* 80331754 0032E694  7F C3 F3 78 */	mr r3, r30
/* 80331758 0032E698  48 00 01 B9 */	bl getFileEntry__Q28PSSystem7SeqBaseFv
/* 8033175C 0032E69C  80 83 00 0C */	lwz r4, 0xc(r3)
/* 80331760 0032E6A0  3C 60 80 4E */	lis r3, __vt__Q28PSSystem7SeqHeap@ha
/* 80331764 0032E6A4  38 03 A6 DC */	addi r0, r3, __vt__Q28PSSystem7SeqHeap@l
/* 80331768 0032E6A8  38 60 00 00 */	li r3, 0
/* 8033176C 0032E6AC  90 1F 00 00 */	stw r0, 0(r31)
/* 80331770 0032E6B0  38 04 00 1F */	addi r0, r4, 0x1f
/* 80331774 0032E6B4  54 1D 00 34 */	rlwinm r29, r0, 0, 0, 0x1a
/* 80331778 0032E6B8  28 1E 00 00 */	cmplwi r30, 0
/* 8033177C 0032E6BC  90 7F 00 04 */	stw r3, 4(r31)
/* 80331780 0032E6C0  93 BF 00 08 */	stw r29, 8(r31)
/* 80331784 0032E6C4  90 7F 00 0C */	stw r3, 0xc(r31)
/* 80331788 0032E6C8  93 DF 00 10 */	stw r30, 0x10(r31)
/* 8033178C 0032E6CC  90 7F 00 14 */	stw r3, 0x14(r31)
/* 80331790 0032E6D0  40 82 00 20 */	bne .L_803317B0
/* 80331794 0032E6D4  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 80331798 0032E6D8  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 8033179C 0032E6DC  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 803317A0 0032E6E0  38 80 00 86 */	li r4, 0x86
/* 803317A4 0032E6E4  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 803317A8 0032E6E8  4C C6 31 82 */	crclr 6
/* 803317AC 0032E6EC  4B CF 8E 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803317B0:
/* 803317B0 0032E6F0  28 1D 00 00 */	cmplwi r29, 0
/* 803317B4 0032E6F4  41 82 00 68 */	beq .L_8033181C
/* 803317B8 0032E6F8  80 7F 00 08 */	lwz r3, 8(r31)
/* 803317BC 0032E6FC  38 A0 00 20 */	li r5, 0x20
/* 803317C0 0032E700  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 803317C4 0032E704  4B CF 28 85 */	bl __nwa__FUlP7JKRHeapi
/* 803317C8 0032E708  90 7F 00 0C */	stw r3, 0xc(r31)
/* 803317CC 0032E70C  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 803317D0 0032E710  28 00 00 00 */	cmplwi r0, 0
/* 803317D4 0032E714  40 82 00 20 */	bne .L_803317F4
/* 803317D8 0032E718  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 803317DC 0032E71C  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 803317E0 0032E720  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 803317E4 0032E724  38 80 00 8A */	li r4, 0x8a
/* 803317E8 0032E728  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 803317EC 0032E72C  4C C6 31 82 */	crclr 6
/* 803317F0 0032E730  4B CF 8E 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803317F4:
/* 803317F4 0032E734  80 1F 00 08 */	lwz r0, 8(r31)
/* 803317F8 0032E738  28 00 00 00 */	cmplwi r0, 0
/* 803317FC 0032E73C  40 82 00 20 */	bne .L_8033181C
/* 80331800 0032E740  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 80331804 0032E744  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 80331808 0032E748  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 8033180C 0032E74C  38 80 00 8B */	li r4, 0x8b
/* 80331810 0032E750  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 80331814 0032E754  4C C6 31 82 */	crclr 6
/* 80331818 0032E758  4B CF 8E 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8033181C:
/* 8033181C 0032E75C  93 FE 00 28 */	stw r31, 0x28(r30)
.L_80331820:
/* 80331820 0032E760  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80331824 0032E764  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80331828 0032E768  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8033182C 0032E76C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80331830 0032E770  7C 08 03 A6 */	mtlr r0
/* 80331834 0032E774  38 21 00 20 */	addi r1, r1, 0x20
/* 80331838 0032E778  4E 80 00 20 */	blr 
.endfn init__Q28PSSystem7SeqBaseFv

.fn __dt__Q28PSSystem7SeqBaseFv, global
/* 8033183C 0032E77C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80331840 0032E780  7C 08 02 A6 */	mflr r0
/* 80331844 0032E784  90 01 00 14 */	stw r0, 0x14(r1)
/* 80331848 0032E788  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033184C 0032E78C  7C 9F 23 78 */	mr r31, r4
/* 80331850 0032E790  93 C1 00 08 */	stw r30, 8(r1)
/* 80331854 0032E794  7C 7E 1B 79 */	or. r30, r3, r3
/* 80331858 0032E798  41 82 00 60 */	beq .L_803318B8
/* 8033185C 0032E79C  3C 60 80 4E */	lis r3, __vt__Q28PSSystem7SeqBase@ha
/* 80331860 0032E7A0  38 03 A6 74 */	addi r0, r3, __vt__Q28PSSystem7SeqBase@l
/* 80331864 0032E7A4  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80331868 0032E7A8  80 7E 00 28 */	lwz r3, 0x28(r30)
/* 8033186C 0032E7AC  28 03 00 00 */	cmplwi r3, 0
/* 80331870 0032E7B0  41 82 00 1C */	beq .L_8033188C
/* 80331874 0032E7B4  41 82 00 18 */	beq .L_8033188C
/* 80331878 0032E7B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8033187C 0032E7BC  38 80 00 01 */	li r4, 1
/* 80331880 0032E7C0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80331884 0032E7C4  7D 89 03 A6 */	mtctr r12
/* 80331888 0032E7C8  4E 80 04 21 */	bctrl 
.L_8033188C:
/* 8033188C 0032E7CC  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 80331890 0032E7D0  4B CF 28 49 */	bl __dla__FPv
/* 80331894 0032E7D4  28 1E 00 00 */	cmplwi r30, 0
/* 80331898 0032E7D8  41 82 00 10 */	beq .L_803318A8
/* 8033189C 0032E7DC  7F C3 F3 78 */	mr r3, r30
/* 803318A0 0032E7E0  38 80 00 00 */	li r4, 0
/* 803318A4 0032E7E4  4B CF 4F 2D */	bl __dt__10JSUPtrLinkFv
.L_803318A8:
/* 803318A8 0032E7E8  7F E0 07 35 */	extsh. r0, r31
/* 803318AC 0032E7EC  40 81 00 0C */	ble .L_803318B8
/* 803318B0 0032E7F0  7F C3 F3 78 */	mr r3, r30
/* 803318B4 0032E7F4  4B CF 28 01 */	bl __dl__FPv
.L_803318B8:
/* 803318B8 0032E7F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803318BC 0032E7FC  7F C3 F3 78 */	mr r3, r30
/* 803318C0 0032E800  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803318C4 0032E804  83 C1 00 08 */	lwz r30, 8(r1)
/* 803318C8 0032E808  7C 08 03 A6 */	mtlr r0
/* 803318CC 0032E80C  38 21 00 10 */	addi r1, r1, 0x10
/* 803318D0 0032E810  4E 80 00 20 */	blr 
.endfn __dt__Q28PSSystem7SeqBaseFv

.fn isPlaying__Q28PSSystem7SeqBaseFv, global
/* 803318D4 0032E814  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 803318D8 0032E818  28 03 00 00 */	cmplwi r3, 0
/* 803318DC 0032E81C  41 82 00 2C */	beq .L_80331908
/* 803318E0 0032E820  88 03 03 5B */	lbz r0, 0x35b(r3)
/* 803318E4 0032E824  28 00 00 00 */	cmplwi r0, 0
/* 803318E8 0032E828  41 82 00 10 */	beq .L_803318F8
/* 803318EC 0032E82C  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 803318F0 0032E830  28 00 00 02 */	cmplwi r0, 2
/* 803318F4 0032E834  40 82 00 0C */	bne .L_80331900
.L_803318F8:
/* 803318F8 0032E838  38 60 00 00 */	li r3, 0
/* 803318FC 0032E83C  4E 80 00 20 */	blr 
.L_80331900:
/* 80331900 0032E840  38 60 00 01 */	li r3, 1
/* 80331904 0032E844  4E 80 00 20 */	blr 
.L_80331908:
/* 80331908 0032E848  38 60 00 00 */	li r3, 0
/* 8033190C 0032E84C  4E 80 00 20 */	blr 
.endfn isPlaying__Q28PSSystem7SeqBaseFv

.fn getFileEntry__Q28PSSystem7SeqBaseFv, global
/* 80331910 0032E850  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80331914 0032E854  7C 08 02 A6 */	mflr r0
/* 80331918 0032E858  3C 80 80 49 */	lis r4, lbl_8048F848@ha
/* 8033191C 0032E85C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80331920 0032E860  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80331924 0032E864  3B E4 F8 48 */	addi r31, r4, lbl_8048F848@l
/* 80331928 0032E868  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8033192C 0032E86C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80331930 0032E870  7C 7D 1B 78 */	mr r29, r3
/* 80331934 0032E874  4B D7 F7 69 */	bl getArchivePointer__Q27JAInter11SequenceMgrFv
/* 80331938 0032E878  28 03 00 00 */	cmplwi r3, 0
/* 8033193C 0032E87C  40 82 00 18 */	bne .L_80331954
/* 80331940 0032E880  38 7F 00 00 */	addi r3, r31, 0
/* 80331944 0032E884  38 BF 00 0C */	addi r5, r31, 0xc
/* 80331948 0032E888  38 80 01 92 */	li r4, 0x192
/* 8033194C 0032E88C  4C C6 31 82 */	crclr 6
/* 80331950 0032E890  4B CF 8C F1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80331954:
/* 80331954 0032E894  4B D7 F7 49 */	bl getArchivePointer__Q27JAInter11SequenceMgrFv
/* 80331958 0032E898  80 9D 00 14 */	lwz r4, 0x14(r29)
/* 8033195C 0032E89C  4B CE 94 81 */	bl findNameResource__10JKRArchiveCFPCc
/* 80331960 0032E8A0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80331964 0032E8A4  40 82 00 1C */	bne .L_80331980
/* 80331968 0032E8A8  80 DD 00 14 */	lwz r6, 0x14(r29)
/* 8033196C 0032E8AC  38 7F 00 00 */	addi r3, r31, 0
/* 80331970 0032E8B0  38 BF 00 8C */	addi r5, r31, 0x8c
/* 80331974 0032E8B4  38 80 01 94 */	li r4, 0x194
/* 80331978 0032E8B8  4C C6 31 82 */	crclr 6
/* 8033197C 0032E8BC  4B CF 8C C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80331980:
/* 80331980 0032E8C0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80331984 0032E8C4  7F C3 F3 78 */	mr r3, r30
/* 80331988 0032E8C8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8033198C 0032E8CC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80331990 0032E8D0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80331994 0032E8D4  7C 08 03 A6 */	mtlr r0
/* 80331998 0032E8D8  38 21 00 20 */	addi r1, r1, 0x20
/* 8033199C 0032E8DC  4E 80 00 20 */	blr 
.endfn getFileEntry__Q28PSSystem7SeqBaseFv

.fn pauseOn__Q28PSSystem7SeqBaseFQ38PSSystem7SeqBase9PauseMode, global
/* 803319A0 0032E8E0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803319A4 0032E8E4  7C 08 02 A6 */	mflr r0
/* 803319A8 0032E8E8  90 01 00 24 */	stw r0, 0x24(r1)
/* 803319AC 0032E8EC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803319B0 0032E8F0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803319B4 0032E8F4  7C 9E 23 78 */	mr r30, r4
/* 803319B8 0032E8F8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803319BC 0032E8FC  7C 7D 1B 78 */	mr r29, r3
/* 803319C0 0032E900  80 03 00 44 */	lwz r0, 0x44(r3)
/* 803319C4 0032E904  2C 00 00 04 */	cmpwi r0, 4
/* 803319C8 0032E908  40 82 01 90 */	bne .L_80331B58
/* 803319CC 0032E90C  93 DD 00 44 */	stw r30, 0x44(r29)
/* 803319D0 0032E910  81 83 00 10 */	lwz r12, 0x10(r3)
/* 803319D4 0032E914  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803319D8 0032E918  7D 89 03 A6 */	mtctr r12
/* 803319DC 0032E91C  4E 80 04 21 */	bctrl 
/* 803319E0 0032E920  28 03 00 00 */	cmplwi r3, 0
/* 803319E4 0032E924  40 82 00 20 */	bne .L_80331A04
/* 803319E8 0032E928  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 803319EC 0032E92C  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 803319F0 0032E930  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 803319F4 0032E934  38 80 01 A2 */	li r4, 0x1a2
/* 803319F8 0032E938  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 803319FC 0032E93C  4C C6 31 82 */	crclr 6
/* 80331A00 0032E940  4B CF 8C 41 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80331A04:
/* 80331A04 0032E944  7F A3 EB 78 */	mr r3, r29
/* 80331A08 0032E948  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 80331A0C 0032E94C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80331A10 0032E950  7D 89 03 A6 */	mtctr r12
/* 80331A14 0032E954  4E 80 04 21 */	bctrl 
/* 80331A18 0032E958  2C 1E 00 02 */	cmpwi r30, 2
/* 80331A1C 0032E95C  80 63 00 00 */	lwz r3, 0(r3)
/* 80331A20 0032E960  3B E0 00 00 */	li r31, 0
/* 80331A24 0032E964  41 82 00 74 */	beq .L_80331A98
/* 80331A28 0032E968  40 80 00 14 */	bge .L_80331A3C
/* 80331A2C 0032E96C  2C 1E 00 00 */	cmpwi r30, 0
/* 80331A30 0032E970  41 82 00 18 */	beq .L_80331A48
/* 80331A34 0032E974  40 80 00 34 */	bge .L_80331A68
/* 80331A38 0032E978  48 00 00 F0 */	b .L_80331B28
.L_80331A3C:
/* 80331A3C 0032E97C  2C 1E 00 04 */	cmpwi r30, 4
/* 80331A40 0032E980  40 80 00 E8 */	bge .L_80331B28
/* 80331A44 0032E984  48 00 00 B8 */	b .L_80331AFC
.L_80331A48:
/* 80331A48 0032E988  28 03 00 00 */	cmplwi r3, 0
/* 80331A4C 0032E98C  41 82 00 14 */	beq .L_80331A60
/* 80331A50 0032E990  38 80 00 02 */	li r4, 2
/* 80331A54 0032E994  38 A0 00 1E */	li r5, 0x1e
/* 80331A58 0032E998  4B D8 37 01 */	bl setPauseMode__8JAISoundFUcUc
/* 80331A5C 0032E99C  48 00 00 E8 */	b .L_80331B44
.L_80331A60:
/* 80331A60 0032E9A0  3B E0 00 01 */	li r31, 1
/* 80331A64 0032E9A4  48 00 00 E0 */	b .L_80331B44
.L_80331A68:
/* 80331A68 0032E9A8  28 03 00 00 */	cmplwi r3, 0
/* 80331A6C 0032E9AC  41 82 00 24 */	beq .L_80331A90
/* 80331A70 0032E9B0  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80331A74 0032E9B4  38 80 00 0F */	li r4, 0xf
/* 80331A78 0032E9B8  C0 22 FD 40 */	lfs f1, lbl_8051E0A0@sda21(r2)
/* 80331A7C 0032E9BC  38 A0 00 0B */	li r5, 0xb
/* 80331A80 0032E9C0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80331A84 0032E9C4  7D 89 03 A6 */	mtctr r12
/* 80331A88 0032E9C8  4E 80 04 21 */	bctrl 
/* 80331A8C 0032E9CC  48 00 00 B8 */	b .L_80331B44
.L_80331A90:
/* 80331A90 0032E9D0  3B E0 00 01 */	li r31, 1
/* 80331A94 0032E9D4  48 00 00 B0 */	b .L_80331B44
.L_80331A98:
/* 80331A98 0032E9D8  28 03 00 00 */	cmplwi r3, 0
/* 80331A9C 0032E9DC  41 82 00 58 */	beq .L_80331AF4
/* 80331AA0 0032E9E0  88 9D 00 48 */	lbz r4, 0x48(r29)
/* 80331AA4 0032E9E4  3C 00 43 30 */	lis r0, 0x4330
/* 80331AA8 0032E9E8  90 01 00 08 */	stw r0, 8(r1)
/* 80331AAC 0032E9EC  C8 62 FD 50 */	lfd f3, lbl_8051E0B0@sda21(r2)
/* 80331AB0 0032E9F0  90 81 00 0C */	stw r4, 0xc(r1)
/* 80331AB4 0032E9F4  C0 02 FD 44 */	lfs f0, lbl_8051E0A4@sda21(r2)
/* 80331AB8 0032E9F8  C8 41 00 08 */	lfd f2, 8(r1)
/* 80331ABC 0032E9FC  C0 22 FD 48 */	lfs f1, lbl_8051E0A8@sda21(r2)
/* 80331AC0 0032EA00  EC 42 18 28 */	fsubs f2, f2, f3
/* 80331AC4 0032EA04  EC 02 00 24 */	fdivs f0, f2, f0
/* 80331AC8 0032EA08  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80331ACC 0032EA0C  40 81 00 08 */	ble .L_80331AD4
/* 80331AD0 0032EA10  48 00 00 08 */	b .L_80331AD8
.L_80331AD4:
/* 80331AD4 0032EA14  FC 20 00 90 */	fmr f1, f0
.L_80331AD8:
/* 80331AD8 0032EA18  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80331ADC 0032EA1C  38 80 00 0F */	li r4, 0xf
/* 80331AE0 0032EA20  38 A0 00 0B */	li r5, 0xb
/* 80331AE4 0032EA24  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80331AE8 0032EA28  7D 89 03 A6 */	mtctr r12
/* 80331AEC 0032EA2C  4E 80 04 21 */	bctrl 
/* 80331AF0 0032EA30  48 00 00 54 */	b .L_80331B44
.L_80331AF4:
/* 80331AF4 0032EA34  3B E0 00 01 */	li r31, 1
/* 80331AF8 0032EA38  48 00 00 4C */	b .L_80331B44
.L_80331AFC:
/* 80331AFC 0032EA3C  28 03 00 00 */	cmplwi r3, 0
/* 80331B00 0032EA40  41 82 00 20 */	beq .L_80331B20
/* 80331B04 0032EA44  7F A3 EB 78 */	mr r3, r29
/* 80331B08 0032EA48  38 80 00 00 */	li r4, 0
/* 80331B0C 0032EA4C  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 80331B10 0032EA50  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80331B14 0032EA54  7D 89 03 A6 */	mtctr r12
/* 80331B18 0032EA58  4E 80 04 21 */	bctrl 
/* 80331B1C 0032EA5C  48 00 00 28 */	b .L_80331B44
.L_80331B20:
/* 80331B20 0032EA60  3B E0 00 01 */	li r31, 1
/* 80331B24 0032EA64  48 00 00 20 */	b .L_80331B44
.L_80331B28:
/* 80331B28 0032EA68  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 80331B2C 0032EA6C  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 80331B30 0032EA70  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 80331B34 0032EA74  38 80 01 CD */	li r4, 0x1cd
/* 80331B38 0032EA78  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 80331B3C 0032EA7C  4C C6 31 82 */	crclr 6
/* 80331B40 0032EA80  4B CF 8B 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80331B44:
/* 80331B44 0032EA84  57 E0 06 3E */	clrlwi r0, r31, 0x18
/* 80331B48 0032EA88  28 00 00 01 */	cmplwi r0, 1
/* 80331B4C 0032EA8C  40 82 00 0C */	bne .L_80331B58
/* 80331B50 0032EA90  38 00 00 04 */	li r0, 4
/* 80331B54 0032EA94  90 1D 00 44 */	stw r0, 0x44(r29)
.L_80331B58:
/* 80331B58 0032EA98  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80331B5C 0032EA9C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80331B60 0032EAA0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80331B64 0032EAA4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80331B68 0032EAA8  7C 08 03 A6 */	mtlr r0
/* 80331B6C 0032EAAC  38 21 00 20 */	addi r1, r1, 0x20
/* 80331B70 0032EAB0  4E 80 00 20 */	blr 
.endfn pauseOn__Q28PSSystem7SeqBaseFQ38PSSystem7SeqBase9PauseMode

.fn pauseOff__Q28PSSystem7SeqBaseFv, global
/* 80331B74 0032EAB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80331B78 0032EAB8  7C 08 02 A6 */	mflr r0
/* 80331B7C 0032EABC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80331B80 0032EAC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80331B84 0032EAC4  7C 7F 1B 78 */	mr r31, r3
/* 80331B88 0032EAC8  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80331B8C 0032EACC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80331B90 0032EAD0  7D 89 03 A6 */	mtctr r12
/* 80331B94 0032EAD4  4E 80 04 21 */	bctrl 
/* 80331B98 0032EAD8  28 03 00 00 */	cmplwi r3, 0
/* 80331B9C 0032EADC  40 82 00 20 */	bne .L_80331BBC
/* 80331BA0 0032EAE0  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 80331BA4 0032EAE4  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 80331BA8 0032EAE8  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 80331BAC 0032EAEC  38 80 01 DA */	li r4, 0x1da
/* 80331BB0 0032EAF0  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 80331BB4 0032EAF4  4C C6 31 82 */	crclr 6
/* 80331BB8 0032EAF8  4B CF 8A 89 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80331BBC:
/* 80331BBC 0032EAFC  80 1F 00 44 */	lwz r0, 0x44(r31)
/* 80331BC0 0032EB00  2C 00 00 03 */	cmpwi r0, 3
/* 80331BC4 0032EB04  40 82 00 1C */	bne .L_80331BE0
/* 80331BC8 0032EB08  7F E3 FB 78 */	mr r3, r31
/* 80331BCC 0032EB0C  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 80331BD0 0032EB10  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80331BD4 0032EB14  7D 89 03 A6 */	mtctr r12
/* 80331BD8 0032EB18  4E 80 04 21 */	bctrl 
/* 80331BDC 0032EB1C  48 00 00 B8 */	b .L_80331C94
.L_80331BE0:
/* 80331BE0 0032EB20  2C 00 00 02 */	cmpwi r0, 2
/* 80331BE4 0032EB24  41 82 00 0C */	beq .L_80331BF0
/* 80331BE8 0032EB28  2C 00 00 01 */	cmpwi r0, 1
/* 80331BEC 0032EB2C  40 82 00 5C */	bne .L_80331C48
.L_80331BF0:
/* 80331BF0 0032EB30  7F E3 FB 78 */	mr r3, r31
/* 80331BF4 0032EB34  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 80331BF8 0032EB38  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80331BFC 0032EB3C  7D 89 03 A6 */	mtctr r12
/* 80331C00 0032EB40  4E 80 04 21 */	bctrl 
/* 80331C04 0032EB44  80 03 00 00 */	lwz r0, 0(r3)
/* 80331C08 0032EB48  28 00 00 00 */	cmplwi r0, 0
/* 80331C0C 0032EB4C  41 82 00 88 */	beq .L_80331C94
/* 80331C10 0032EB50  7F E3 FB 78 */	mr r3, r31
/* 80331C14 0032EB54  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 80331C18 0032EB58  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80331C1C 0032EB5C  7D 89 03 A6 */	mtctr r12
/* 80331C20 0032EB60  4E 80 04 21 */	bctrl 
/* 80331C24 0032EB64  80 63 00 00 */	lwz r3, 0(r3)
/* 80331C28 0032EB68  38 80 00 0F */	li r4, 0xf
/* 80331C2C 0032EB6C  C0 22 FD 48 */	lfs f1, lbl_8051E0A8@sda21(r2)
/* 80331C30 0032EB70  38 A0 00 0B */	li r5, 0xb
/* 80331C34 0032EB74  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80331C38 0032EB78  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80331C3C 0032EB7C  7D 89 03 A6 */	mtctr r12
/* 80331C40 0032EB80  4E 80 04 21 */	bctrl 
/* 80331C44 0032EB84  48 00 00 50 */	b .L_80331C94
.L_80331C48:
/* 80331C48 0032EB88  2C 00 00 04 */	cmpwi r0, 4
/* 80331C4C 0032EB8C  41 82 00 48 */	beq .L_80331C94
/* 80331C50 0032EB90  7F E3 FB 78 */	mr r3, r31
/* 80331C54 0032EB94  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 80331C58 0032EB98  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80331C5C 0032EB9C  7D 89 03 A6 */	mtctr r12
/* 80331C60 0032EBA0  4E 80 04 21 */	bctrl 
/* 80331C64 0032EBA4  80 03 00 00 */	lwz r0, 0(r3)
/* 80331C68 0032EBA8  28 00 00 00 */	cmplwi r0, 0
/* 80331C6C 0032EBAC  41 82 00 28 */	beq .L_80331C94
/* 80331C70 0032EBB0  7F E3 FB 78 */	mr r3, r31
/* 80331C74 0032EBB4  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 80331C78 0032EBB8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80331C7C 0032EBBC  7D 89 03 A6 */	mtctr r12
/* 80331C80 0032EBC0  4E 80 04 21 */	bctrl 
/* 80331C84 0032EBC4  80 63 00 00 */	lwz r3, 0(r3)
/* 80331C88 0032EBC8  38 80 00 00 */	li r4, 0
/* 80331C8C 0032EBCC  38 A0 00 1E */	li r5, 0x1e
/* 80331C90 0032EBD0  4B D8 34 C9 */	bl setPauseMode__8JAISoundFUcUc
.L_80331C94:
/* 80331C94 0032EBD4  38 00 00 04 */	li r0, 4
/* 80331C98 0032EBD8  90 1F 00 44 */	stw r0, 0x44(r31)
/* 80331C9C 0032EBDC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80331CA0 0032EBE0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80331CA4 0032EBE4  7C 08 03 A6 */	mtlr r0
/* 80331CA8 0032EBE8  38 21 00 10 */	addi r1, r1, 0x10
/* 80331CAC 0032EBEC  4E 80 00 20 */	blr 
.endfn pauseOff__Q28PSSystem7SeqBaseFv

.fn exec__Q28PSSystem7SeqBaseFv, global
/* 80331CB0 0032EBF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80331CB4 0032EBF4  7C 08 02 A6 */	mflr r0
/* 80331CB8 0032EBF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80331CBC 0032EBFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80331CC0 0032EC00  7C 7F 1B 78 */	mr r31, r3
/* 80331CC4 0032EC04  A0 63 00 30 */	lhz r3, 0x30(r3)
/* 80331CC8 0032EC08  28 03 00 00 */	cmplwi r3, 0
/* 80331CCC 0032EC0C  41 82 00 28 */	beq .L_80331CF4
/* 80331CD0 0032EC10  38 03 FF FF */	addi r0, r3, -1
/* 80331CD4 0032EC14  28 03 00 01 */	cmplwi r3, 1
/* 80331CD8 0032EC18  B0 1F 00 30 */	sth r0, 0x30(r31)
/* 80331CDC 0032EC1C  40 82 00 18 */	bne .L_80331CF4
/* 80331CE0 0032EC20  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80331CE4 0032EC24  81 9F 00 2C */	lwz r12, 0x2c(r31)
/* 80331CE8 0032EC28  81 8C 00 08 */	lwz r12, 8(r12)
/* 80331CEC 0032EC2C  7D 89 03 A6 */	mtctr r12
/* 80331CF0 0032EC30  4E 80 04 21 */	bctrl 
.L_80331CF4:
/* 80331CF4 0032EC34  A0 7F 00 3C */	lhz r3, 0x3c(r31)
/* 80331CF8 0032EC38  28 03 00 00 */	cmplwi r3, 0
/* 80331CFC 0032EC3C  41 82 00 28 */	beq .L_80331D24
/* 80331D00 0032EC40  38 03 FF FF */	addi r0, r3, -1
/* 80331D04 0032EC44  28 03 00 01 */	cmplwi r3, 1
/* 80331D08 0032EC48  B0 1F 00 3C */	sth r0, 0x3c(r31)
/* 80331D0C 0032EC4C  40 82 00 18 */	bne .L_80331D24
/* 80331D10 0032EC50  38 7F 00 38 */	addi r3, r31, 0x38
/* 80331D14 0032EC54  81 9F 00 38 */	lwz r12, 0x38(r31)
/* 80331D18 0032EC58  81 8C 00 08 */	lwz r12, 8(r12)
/* 80331D1C 0032EC5C  7D 89 03 A6 */	mtctr r12
/* 80331D20 0032EC60  4E 80 04 21 */	bctrl 
.L_80331D24:
/* 80331D24 0032EC64  7F E3 FB 78 */	mr r3, r31
/* 80331D28 0032EC68  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 80331D2C 0032EC6C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80331D30 0032EC70  7D 89 03 A6 */	mtctr r12
/* 80331D34 0032EC74  4E 80 04 21 */	bctrl 
/* 80331D38 0032EC78  80 03 00 00 */	lwz r0, 0(r3)
/* 80331D3C 0032EC7C  28 00 00 00 */	cmplwi r0, 0
/* 80331D40 0032EC80  40 82 00 30 */	bne .L_80331D70
/* 80331D44 0032EC84  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 80331D48 0032EC88  28 03 00 00 */	cmplwi r3, 0
/* 80331D4C 0032EC8C  41 82 00 24 */	beq .L_80331D70
/* 80331D50 0032EC90  88 03 03 5B */	lbz r0, 0x35b(r3)
/* 80331D54 0032EC94  28 00 00 00 */	cmplwi r0, 0
/* 80331D58 0032EC98  41 82 00 10 */	beq .L_80331D68
/* 80331D5C 0032EC9C  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 80331D60 0032ECA0  28 00 00 02 */	cmplwi r0, 2
/* 80331D64 0032ECA4  40 82 00 0C */	bne .L_80331D70
.L_80331D68:
/* 80331D68 0032ECA8  38 00 00 00 */	li r0, 0
/* 80331D6C 0032ECAC  90 1F 00 4C */	stw r0, 0x4c(r31)
.L_80331D70:
/* 80331D70 0032ECB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80331D74 0032ECB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80331D78 0032ECB8  7C 08 03 A6 */	mtlr r0
/* 80331D7C 0032ECBC  38 21 00 10 */	addi r1, r1, 0x10
/* 80331D80 0032ECC0  4E 80 00 20 */	blr 
.endfn exec__Q28PSSystem7SeqBaseFv

.fn onPlayingFrame__Q28PSSystem7SeqBaseFv, global
/* 80331D84 0032ECC4  4E 80 00 20 */	blr 
.endfn onPlayingFrame__Q28PSSystem7SeqBaseFv

.fn startSeq__Q28PSSystem7SeqBaseFv, global
/* 80331D88 0032ECC8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80331D8C 0032ECCC  7C 08 02 A6 */	mflr r0
/* 80331D90 0032ECD0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80331D94 0032ECD4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80331D98 0032ECD8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80331D9C 0032ECDC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80331DA0 0032ECE0  7C 7D 1B 78 */	mr r29, r3
/* 80331DA4 0032ECE4  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 80331DA8 0032ECE8  3B C3 F8 48 */	addi r30, r3, lbl_8048F848@l
/* 80331DAC 0032ECEC  38 7D 00 50 */	addi r3, r29, 0x50
/* 80331DB0 0032ECF0  4B DB DD B9 */	bl OSLockMutex
/* 80331DB4 0032ECF4  4B D7 F2 E9 */	bl getArchivePointer__Q27JAInter11SequenceMgrFv
/* 80331DB8 0032ECF8  28 03 00 00 */	cmplwi r3, 0
/* 80331DBC 0032ECFC  40 82 00 18 */	bne .L_80331DD4
/* 80331DC0 0032ED00  38 7E 00 00 */	addi r3, r30, 0
/* 80331DC4 0032ED04  38 BE 00 0C */	addi r5, r30, 0xc
/* 80331DC8 0032ED08  38 80 01 92 */	li r4, 0x192
/* 80331DCC 0032ED0C  4C C6 31 82 */	crclr 6
/* 80331DD0 0032ED10  4B CF 88 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80331DD4:
/* 80331DD4 0032ED14  4B D7 F2 C9 */	bl getArchivePointer__Q27JAInter11SequenceMgrFv
/* 80331DD8 0032ED18  80 9D 00 14 */	lwz r4, 0x14(r29)
/* 80331DDC 0032ED1C  4B CE 90 01 */	bl findNameResource__10JKRArchiveCFPCc
/* 80331DE0 0032ED20  7C 7F 1B 79 */	or. r31, r3, r3
/* 80331DE4 0032ED24  40 82 00 1C */	bne .L_80331E00
/* 80331DE8 0032ED28  80 DD 00 14 */	lwz r6, 0x14(r29)
/* 80331DEC 0032ED2C  38 7E 00 00 */	addi r3, r30, 0
/* 80331DF0 0032ED30  38 BE 00 8C */	addi r5, r30, 0x8c
/* 80331DF4 0032ED34  38 80 01 94 */	li r4, 0x194
/* 80331DF8 0032ED38  4C C6 31 82 */	crclr 6
/* 80331DFC 0032ED3C  4B CF 88 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80331E00:
/* 80331E00 0032ED40  7F A3 EB 78 */	mr r3, r29
/* 80331E04 0032ED44  A3 FF 00 00 */	lhz r31, 0(r31)
/* 80331E08 0032ED48  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 80331E0C 0032ED4C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80331E10 0032ED50  7D 89 03 A6 */	mtctr r12
/* 80331E14 0032ED54  4E 80 04 21 */	bctrl 
/* 80331E18 0032ED58  7F FF 1B 78 */	or r31, r31, r3
/* 80331E1C 0032ED5C  7F A3 EB 78 */	mr r3, r29
/* 80331E20 0032ED60  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 80331E24 0032ED64  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80331E28 0032ED68  7D 89 03 A6 */	mtctr r12
/* 80331E2C 0032ED6C  4E 80 04 21 */	bctrl 
/* 80331E30 0032ED70  7F E5 FB 78 */	mr r5, r31
/* 80331E34 0032ED74  39 1D 00 18 */	addi r8, r29, 0x18
/* 80331E38 0032ED78  38 80 00 00 */	li r4, 0
/* 80331E3C 0032ED7C  38 C0 00 00 */	li r6, 0
/* 80331E40 0032ED80  38 E0 00 00 */	li r7, 0
/* 80331E44 0032ED84  4B D8 10 55 */	bl storeSeqBuffer__Q27JAInter11SequenceMgrFPP11JAISequencePQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
/* 80331E48 0032ED88  7F A3 EB 78 */	mr r3, r29
/* 80331E4C 0032ED8C  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 80331E50 0032ED90  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80331E54 0032ED94  7D 89 03 A6 */	mtctr r12
/* 80331E58 0032ED98  4E 80 04 21 */	bctrl 
/* 80331E5C 0032ED9C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80331E60 0032EDA0  40 82 00 18 */	bne .L_80331E78
/* 80331E64 0032EDA4  38 7E 00 00 */	addi r3, r30, 0
/* 80331E68 0032EDA8  38 BE 00 0C */	addi r5, r30, 0xc
/* 80331E6C 0032EDAC  38 80 02 16 */	li r4, 0x216
/* 80331E70 0032EDB0  4C C6 31 82 */	crclr 6
/* 80331E74 0032EDB4  4B CF 87 CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80331E78:
/* 80331E78 0032EDB8  83 FF 00 00 */	lwz r31, 0(r31)
/* 80331E7C 0032EDBC  28 1F 00 00 */	cmplwi r31, 0
/* 80331E80 0032EDC0  40 82 00 18 */	bne .L_80331E98
/* 80331E84 0032EDC4  38 7E 00 00 */	addi r3, r30, 0
/* 80331E88 0032EDC8  38 BE 00 9C */	addi r5, r30, 0x9c
/* 80331E8C 0032EDCC  38 80 02 1A */	li r4, 0x21a
/* 80331E90 0032EDD0  4C C6 31 82 */	crclr 6
/* 80331E94 0032EDD4  4B CF 87 AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80331E98:
/* 80331E98 0032EDD8  93 BF 06 A4 */	stw r29, 0x6a4(r31)
/* 80331E9C 0032EDDC  7F A3 EB 78 */	mr r3, r29
/* 80331EA0 0032EDE0  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 80331EA4 0032EDE4  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80331EA8 0032EDE8  7D 89 03 A6 */	mtctr r12
/* 80331EAC 0032EDEC  4E 80 04 21 */	bctrl 
/* 80331EB0 0032EDF0  38 1F 03 0C */	addi r0, r31, 0x30c
/* 80331EB4 0032EDF4  38 7D 00 50 */	addi r3, r29, 0x50
/* 80331EB8 0032EDF8  90 1D 00 4C */	stw r0, 0x4c(r29)
/* 80331EBC 0032EDFC  4B DB DD 89 */	bl OSUnlockMutex
/* 80331EC0 0032EE00  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80331EC4 0032EE04  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80331EC8 0032EE08  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80331ECC 0032EE0C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80331ED0 0032EE10  7C 08 03 A6 */	mtlr r0
/* 80331ED4 0032EE14  38 21 00 20 */	addi r1, r1, 0x20
/* 80331ED8 0032EE18  4E 80 00 20 */	blr 
.endfn startSeq__Q28PSSystem7SeqBaseFv

.fn setConfigVolume__Q28PSSystem7SeqBaseFv, global
/* 80331EDC 0032EE1C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80331EE0 0032EE20  7C 08 02 A6 */	mflr r0
/* 80331EE4 0032EE24  90 01 00 24 */	stw r0, 0x24(r1)
/* 80331EE8 0032EE28  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80331EEC 0032EE2C  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 80331EF0 0032EE30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80331EF4 0032EE34  80 0D 98 58 */	lwz r0, spSysIF__8PSSystem@sda21(r13)
/* 80331EF8 0032EE38  7C 7F 1B 78 */	mr r31, r3
/* 80331EFC 0032EE3C  28 00 00 00 */	cmplwi r0, 0
/* 80331F00 0032EE40  40 82 00 20 */	bne .L_80331F20
/* 80331F04 0032EE44  3C 60 80 49 */	lis r3, lbl_8048F8F4@ha
/* 80331F08 0032EE48  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 80331F0C 0032EE4C  38 63 F8 F4 */	addi r3, r3, lbl_8048F8F4@l
/* 80331F10 0032EE50  38 80 01 8B */	li r4, 0x18b
/* 80331F14 0032EE54  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 80331F18 0032EE58  4C C6 31 82 */	crclr 6
/* 80331F1C 0032EE5C  4B CF 87 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80331F20:
/* 80331F20 0032EE60  7F E3 FB 78 */	mr r3, r31
/* 80331F24 0032EE64  80 8D 98 58 */	lwz r4, spSysIF__8PSSystem@sda21(r13)
/* 80331F28 0032EE68  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 80331F2C 0032EE6C  C3 E4 00 24 */	lfs f31, 0x24(r4)
/* 80331F30 0032EE70  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80331F34 0032EE74  7D 89 03 A6 */	mtctr r12
/* 80331F38 0032EE78  4E 80 04 21 */	bctrl 
/* 80331F3C 0032EE7C  80 63 00 00 */	lwz r3, 0(r3)
/* 80331F40 0032EE80  FC 20 F8 90 */	fmr f1, f31
/* 80331F44 0032EE84  38 80 00 00 */	li r4, 0
/* 80331F48 0032EE88  38 A0 00 08 */	li r5, 8
/* 80331F4C 0032EE8C  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80331F50 0032EE90  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80331F54 0032EE94  7D 89 03 A6 */	mtctr r12
/* 80331F58 0032EE98  4E 80 04 21 */	bctrl 
/* 80331F5C 0032EE9C  7F E3 FB 78 */	mr r3, r31
/* 80331F60 0032EEA0  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 80331F64 0032EEA4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80331F68 0032EEA8  7D 89 03 A6 */	mtctr r12
/* 80331F6C 0032EEAC  4E 80 04 21 */	bctrl 
/* 80331F70 0032EEB0  80 63 00 00 */	lwz r3, 0(r3)
/* 80331F74 0032EEB4  38 80 00 00 */	li r4, 0
/* 80331F78 0032EEB8  C0 22 FD 58 */	lfs f1, lbl_8051E0B8@sda21(r2)
/* 80331F7C 0032EEBC  38 A0 00 03 */	li r5, 3
/* 80331F80 0032EEC0  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80331F84 0032EEC4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80331F88 0032EEC8  7D 89 03 A6 */	mtctr r12
/* 80331F8C 0032EECC  4E 80 04 21 */	bctrl 
/* 80331F90 0032EED0  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 80331F94 0032EED4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80331F98 0032EED8  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80331F9C 0032EEDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80331FA0 0032EEE0  7C 08 03 A6 */	mtlr r0
/* 80331FA4 0032EEE4  38 21 00 20 */	addi r1, r1, 0x20
/* 80331FA8 0032EEE8  4E 80 00 20 */	blr 
.endfn setConfigVolume__Q28PSSystem7SeqBaseFv

.fn scene1st__Q28PSSystem7SeqBaseFPQ28PSSystem11TaskChecker, global
/* 80331FAC 0032EEEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80331FB0 0032EEF0  7C 08 02 A6 */	mflr r0
/* 80331FB4 0032EEF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80331FB8 0032EEF8  80 63 00 28 */	lwz r3, 0x28(r3)
/* 80331FBC 0032EEFC  28 03 00 00 */	cmplwi r3, 0
/* 80331FC0 0032EF00  41 82 00 14 */	beq .L_80331FD4
/* 80331FC4 0032EF04  81 83 00 00 */	lwz r12, 0(r3)
/* 80331FC8 0032EF08  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80331FCC 0032EF0C  7D 89 03 A6 */	mtctr r12
/* 80331FD0 0032EF10  4E 80 04 21 */	bctrl 
.L_80331FD4:
/* 80331FD4 0032EF14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80331FD8 0032EF18  7C 08 03 A6 */	mtlr r0
/* 80331FDC 0032EF1C  38 21 00 10 */	addi r1, r1, 0x10
/* 80331FE0 0032EF20  4E 80 00 20 */	blr 
.endfn scene1st__Q28PSSystem7SeqBaseFPQ28PSSystem11TaskChecker

.fn stopSeq__Q28PSSystem7SeqBaseFUl, global
/* 80331FE4 0032EF24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80331FE8 0032EF28  7C 08 02 A6 */	mflr r0
/* 80331FEC 0032EF2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80331FF0 0032EF30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80331FF4 0032EF34  7C 9F 23 78 */	mr r31, r4
/* 80331FF8 0032EF38  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80331FFC 0032EF3C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80332000 0032EF40  7D 89 03 A6 */	mtctr r12
/* 80332004 0032EF44  4E 80 04 21 */	bctrl 
/* 80332008 0032EF48  28 03 00 00 */	cmplwi r3, 0
/* 8033200C 0032EF4C  41 82 00 24 */	beq .L_80332030
/* 80332010 0032EF50  80 63 00 00 */	lwz r3, 0(r3)
/* 80332014 0032EF54  28 03 00 00 */	cmplwi r3, 0
/* 80332018 0032EF58  41 82 00 18 */	beq .L_80332030
/* 8033201C 0032EF5C  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80332020 0032EF60  7F E4 FB 78 */	mr r4, r31
/* 80332024 0032EF64  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80332028 0032EF68  7D 89 03 A6 */	mtctr r12
/* 8033202C 0032EF6C  4E 80 04 21 */	bctrl 
.L_80332030:
/* 80332030 0032EF70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80332034 0032EF74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80332038 0032EF78  7C 08 03 A6 */	mtlr r0
/* 8033203C 0032EF7C  38 21 00 10 */	addi r1, r1, 0x10
/* 80332040 0032EF80  4E 80 00 20 */	blr 
.endfn stopSeq__Q28PSSystem7SeqBaseFUl

.fn __ct__Q28PSSystem6BgmSeqFPCcRCQ27JAInter9SoundInfo, global
/* 80332044 0032EF84  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80332048 0032EF88  7C 08 02 A6 */	mflr r0
/* 8033204C 0032EF8C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80332050 0032EF90  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80332054 0032EF94  7C 9F 23 78 */	mr r31, r4
/* 80332058 0032EF98  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8033205C 0032EF9C  7C 7E 1B 78 */	mr r30, r3
/* 80332060 0032EFA0  7F C4 F3 78 */	mr r4, r30
/* 80332064 0032EFA4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80332068 0032EFA8  7C BD 2B 78 */	mr r29, r5
/* 8033206C 0032EFAC  4B CF 47 4D */	bl __ct__10JSUPtrLinkFPv
/* 80332070 0032EFB0  3C 60 80 4E */	lis r3, __vt__Q28PSSystem7SeqBase@ha
/* 80332074 0032EFB4  3C A0 80 4E */	lis r5, __vt__Q28PSSystem10Reservator@ha
/* 80332078 0032EFB8  38 03 A6 74 */	addi r0, r3, __vt__Q28PSSystem7SeqBase@l
/* 8033207C 0032EFBC  3C 80 80 4E */	lis r4, __vt__Q28PSSystem17SeqPlayReservator@ha
/* 80332080 0032EFC0  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80332084 0032EFC4  39 40 00 00 */	li r10, 0
/* 80332088 0032EFC8  3C 60 80 4E */	lis r3, __vt__Q28PSSystem21SeqPauseOffReservator@ha
/* 8033208C 0032EFCC  81 1D 00 00 */	lwz r8, 0(r29)
/* 80332090 0032EFD0  91 5E 00 14 */	stw r10, 0x14(r30)
/* 80332094 0032EFD4  38 E5 A6 B8 */	addi r7, r5, __vt__Q28PSSystem10Reservator@l
/* 80332098 0032EFD8  80 1D 00 04 */	lwz r0, 4(r29)
/* 8033209C 0032EFDC  38 C4 A6 D0 */	addi r6, r4, __vt__Q28PSSystem17SeqPlayReservator@l
/* 803320A0 0032EFE0  91 1E 00 18 */	stw r8, 0x18(r30)
/* 803320A4 0032EFE4  38 A3 A6 C4 */	addi r5, r3, __vt__Q28PSSystem21SeqPauseOffReservator@l
/* 803320A8 0032EFE8  81 3D 00 08 */	lwz r9, 8(r29)
/* 803320AC 0032EFEC  38 80 00 04 */	li r4, 4
/* 803320B0 0032EFF0  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 803320B4 0032EFF4  38 00 00 26 */	li r0, 0x26
/* 803320B8 0032EFF8  81 1D 00 0C */	lwz r8, 0xc(r29)
/* 803320BC 0032EFFC  38 7E 00 50 */	addi r3, r30, 0x50
/* 803320C0 0032F000  91 3E 00 20 */	stw r9, 0x20(r30)
/* 803320C4 0032F004  91 1E 00 24 */	stw r8, 0x24(r30)
/* 803320C8 0032F008  91 5E 00 28 */	stw r10, 0x28(r30)
/* 803320CC 0032F00C  90 FE 00 2C */	stw r7, 0x2c(r30)
/* 803320D0 0032F010  B1 5E 00 30 */	sth r10, 0x30(r30)
/* 803320D4 0032F014  90 DE 00 2C */	stw r6, 0x2c(r30)
/* 803320D8 0032F018  93 DE 00 34 */	stw r30, 0x34(r30)
/* 803320DC 0032F01C  90 FE 00 38 */	stw r7, 0x38(r30)
/* 803320E0 0032F020  B1 5E 00 3C */	sth r10, 0x3c(r30)
/* 803320E4 0032F024  90 BE 00 38 */	stw r5, 0x38(r30)
/* 803320E8 0032F028  93 DE 00 40 */	stw r30, 0x40(r30)
/* 803320EC 0032F02C  90 9E 00 44 */	stw r4, 0x44(r30)
/* 803320F0 0032F030  98 1E 00 48 */	stb r0, 0x48(r30)
/* 803320F4 0032F034  91 5E 00 4C */	stw r10, 0x4c(r30)
/* 803320F8 0032F038  4B DB DA 39 */	bl OSInitMutex
/* 803320FC 0032F03C  28 1F 00 00 */	cmplwi r31, 0
/* 80332100 0032F040  41 82 00 24 */	beq .L_80332124
/* 80332104 0032F044  7F E3 FB 78 */	mr r3, r31
/* 80332108 0032F048  4B D9 88 09 */	bl strlen
/* 8033210C 0032F04C  38 63 00 01 */	addi r3, r3, 1
/* 80332110 0032F050  4B CF 1E 9D */	bl __nwa__FUl
/* 80332114 0032F054  90 7E 00 14 */	stw r3, 0x14(r30)
/* 80332118 0032F058  7F E4 FB 78 */	mr r4, r31
/* 8033211C 0032F05C  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 80332120 0032F060  4B D9 87 39 */	bl strcpy
.L_80332124:
/* 80332124 0032F064  3C 60 80 4E */	lis r3, __vt__Q28PSSystem6BgmSeq@ha
/* 80332128 0032F068  38 00 00 00 */	li r0, 0
/* 8033212C 0032F06C  38 83 A6 30 */	addi r4, r3, __vt__Q28PSSystem6BgmSeq@l
/* 80332130 0032F070  7F C3 F3 78 */	mr r3, r30
/* 80332134 0032F074  90 9E 00 10 */	stw r4, 0x10(r30)
/* 80332138 0032F078  90 1E 00 68 */	stw r0, 0x68(r30)
/* 8033213C 0032F07C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80332140 0032F080  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80332144 0032F084  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80332148 0032F088  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8033214C 0032F08C  7C 08 03 A6 */	mtlr r0
/* 80332150 0032F090  38 21 00 20 */	addi r1, r1, 0x20
/* 80332154 0032F094  4E 80 00 20 */	blr 
.endfn __ct__Q28PSSystem6BgmSeqFPCcRCQ27JAInter9SoundInfo

.fn __dt__Q28PSSystem6BgmSeqFv, global
/* 80332158 0032F098  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033215C 0032F09C  7C 08 02 A6 */	mflr r0
/* 80332160 0032F0A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80332164 0032F0A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80332168 0032F0A8  7C 9F 23 78 */	mr r31, r4
/* 8033216C 0032F0AC  93 C1 00 08 */	stw r30, 8(r1)
/* 80332170 0032F0B0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80332174 0032F0B4  41 82 00 88 */	beq .L_803321FC
/* 80332178 0032F0B8  3C A0 80 4E */	lis r5, __vt__Q28PSSystem6BgmSeq@ha
/* 8033217C 0032F0BC  38 80 00 00 */	li r4, 0
/* 80332180 0032F0C0  38 05 A6 30 */	addi r0, r5, __vt__Q28PSSystem6BgmSeq@l
/* 80332184 0032F0C4  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80332188 0032F0C8  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8033218C 0032F0CC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80332190 0032F0D0  7D 89 03 A6 */	mtctr r12
/* 80332194 0032F0D4  4E 80 04 21 */	bctrl 
/* 80332198 0032F0D8  28 1E 00 00 */	cmplwi r30, 0
/* 8033219C 0032F0DC  41 82 00 50 */	beq .L_803321EC
/* 803321A0 0032F0E0  3C 60 80 4E */	lis r3, __vt__Q28PSSystem7SeqBase@ha
/* 803321A4 0032F0E4  38 03 A6 74 */	addi r0, r3, __vt__Q28PSSystem7SeqBase@l
/* 803321A8 0032F0E8  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803321AC 0032F0EC  80 7E 00 28 */	lwz r3, 0x28(r30)
/* 803321B0 0032F0F0  28 03 00 00 */	cmplwi r3, 0
/* 803321B4 0032F0F4  41 82 00 1C */	beq .L_803321D0
/* 803321B8 0032F0F8  41 82 00 18 */	beq .L_803321D0
/* 803321BC 0032F0FC  81 83 00 00 */	lwz r12, 0(r3)
/* 803321C0 0032F100  38 80 00 01 */	li r4, 1
/* 803321C4 0032F104  81 8C 00 08 */	lwz r12, 8(r12)
/* 803321C8 0032F108  7D 89 03 A6 */	mtctr r12
/* 803321CC 0032F10C  4E 80 04 21 */	bctrl 
.L_803321D0:
/* 803321D0 0032F110  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 803321D4 0032F114  4B CF 1F 05 */	bl __dla__FPv
/* 803321D8 0032F118  28 1E 00 00 */	cmplwi r30, 0
/* 803321DC 0032F11C  41 82 00 10 */	beq .L_803321EC
/* 803321E0 0032F120  7F C3 F3 78 */	mr r3, r30
/* 803321E4 0032F124  38 80 00 00 */	li r4, 0
/* 803321E8 0032F128  4B CF 45 E9 */	bl __dt__10JSUPtrLinkFv
.L_803321EC:
/* 803321EC 0032F12C  7F E0 07 35 */	extsh. r0, r31
/* 803321F0 0032F130  40 81 00 0C */	ble .L_803321FC
/* 803321F4 0032F134  7F C3 F3 78 */	mr r3, r30
/* 803321F8 0032F138  4B CF 1E BD */	bl __dl__FPv
.L_803321FC:
/* 803321FC 0032F13C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80332200 0032F140  7F C3 F3 78 */	mr r3, r30
/* 80332204 0032F144  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80332208 0032F148  83 C1 00 08 */	lwz r30, 8(r1)
/* 8033220C 0032F14C  7C 08 03 A6 */	mtlr r0
/* 80332210 0032F150  38 21 00 10 */	addi r1, r1, 0x10
/* 80332214 0032F154  4E 80 00 20 */	blr 
.endfn __dt__Q28PSSystem6BgmSeqFv

.fn __ct__Q28PSSystem9StreamBgmFUlRCQ27JAInter9SoundInfo, global
/* 80332218 0032F158  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8033221C 0032F15C  7C 08 02 A6 */	mflr r0
/* 80332220 0032F160  90 01 00 24 */	stw r0, 0x24(r1)
/* 80332224 0032F164  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80332228 0032F168  7C 9F 23 78 */	mr r31, r4
/* 8033222C 0032F16C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80332230 0032F170  7C 7E 1B 78 */	mr r30, r3
/* 80332234 0032F174  7F C4 F3 78 */	mr r4, r30
/* 80332238 0032F178  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8033223C 0032F17C  7C BD 2B 78 */	mr r29, r5
/* 80332240 0032F180  4B CF 45 79 */	bl __ct__10JSUPtrLinkFPv
/* 80332244 0032F184  3C 60 80 4E */	lis r3, __vt__Q28PSSystem7SeqBase@ha
/* 80332248 0032F188  3C A0 80 4E */	lis r5, __vt__Q28PSSystem10Reservator@ha
/* 8033224C 0032F18C  38 03 A6 74 */	addi r0, r3, __vt__Q28PSSystem7SeqBase@l
/* 80332250 0032F190  3C 80 80 4E */	lis r4, __vt__Q28PSSystem17SeqPlayReservator@ha
/* 80332254 0032F194  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80332258 0032F198  39 40 00 00 */	li r10, 0
/* 8033225C 0032F19C  3C 60 80 4E */	lis r3, __vt__Q28PSSystem21SeqPauseOffReservator@ha
/* 80332260 0032F1A0  81 1D 00 00 */	lwz r8, 0(r29)
/* 80332264 0032F1A4  91 5E 00 14 */	stw r10, 0x14(r30)
/* 80332268 0032F1A8  38 E5 A6 B8 */	addi r7, r5, __vt__Q28PSSystem10Reservator@l
/* 8033226C 0032F1AC  80 1D 00 04 */	lwz r0, 4(r29)
/* 80332270 0032F1B0  38 C4 A6 D0 */	addi r6, r4, __vt__Q28PSSystem17SeqPlayReservator@l
/* 80332274 0032F1B4  91 1E 00 18 */	stw r8, 0x18(r30)
/* 80332278 0032F1B8  38 A3 A6 C4 */	addi r5, r3, __vt__Q28PSSystem21SeqPauseOffReservator@l
/* 8033227C 0032F1BC  81 3D 00 08 */	lwz r9, 8(r29)
/* 80332280 0032F1C0  38 80 00 04 */	li r4, 4
/* 80332284 0032F1C4  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80332288 0032F1C8  38 00 00 26 */	li r0, 0x26
/* 8033228C 0032F1CC  81 1D 00 0C */	lwz r8, 0xc(r29)
/* 80332290 0032F1D0  38 7E 00 50 */	addi r3, r30, 0x50
/* 80332294 0032F1D4  91 3E 00 20 */	stw r9, 0x20(r30)
/* 80332298 0032F1D8  91 1E 00 24 */	stw r8, 0x24(r30)
/* 8033229C 0032F1DC  91 5E 00 28 */	stw r10, 0x28(r30)
/* 803322A0 0032F1E0  90 FE 00 2C */	stw r7, 0x2c(r30)
/* 803322A4 0032F1E4  B1 5E 00 30 */	sth r10, 0x30(r30)
/* 803322A8 0032F1E8  90 DE 00 2C */	stw r6, 0x2c(r30)
/* 803322AC 0032F1EC  93 DE 00 34 */	stw r30, 0x34(r30)
/* 803322B0 0032F1F0  90 FE 00 38 */	stw r7, 0x38(r30)
/* 803322B4 0032F1F4  B1 5E 00 3C */	sth r10, 0x3c(r30)
/* 803322B8 0032F1F8  90 BE 00 38 */	stw r5, 0x38(r30)
/* 803322BC 0032F1FC  93 DE 00 40 */	stw r30, 0x40(r30)
/* 803322C0 0032F200  90 9E 00 44 */	stw r4, 0x44(r30)
/* 803322C4 0032F204  98 1E 00 48 */	stb r0, 0x48(r30)
/* 803322C8 0032F208  91 5E 00 4C */	stw r10, 0x4c(r30)
/* 803322CC 0032F20C  4B DB D8 65 */	bl OSInitMutex
/* 803322D0 0032F210  3C 80 80 4E */	lis r4, __vt__Q28PSSystem6BgmSeq@ha
/* 803322D4 0032F214  3C 60 80 4E */	lis r3, __vt__Q28PSSystem9StreamBgm@ha
/* 803322D8 0032F218  38 04 A6 30 */	addi r0, r4, __vt__Q28PSSystem6BgmSeq@l
/* 803322DC 0032F21C  38 80 00 00 */	li r4, 0
/* 803322E0 0032F220  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803322E4 0032F224  38 03 A5 EC */	addi r0, r3, __vt__Q28PSSystem9StreamBgm@l
/* 803322E8 0032F228  7F C3 F3 78 */	mr r3, r30
/* 803322EC 0032F22C  90 9E 00 68 */	stw r4, 0x68(r30)
/* 803322F0 0032F230  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803322F4 0032F234  90 9E 00 6C */	stw r4, 0x6c(r30)
/* 803322F8 0032F238  93 FE 00 70 */	stw r31, 0x70(r30)
/* 803322FC 0032F23C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80332300 0032F240  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80332304 0032F244  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80332308 0032F248  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8033230C 0032F24C  7C 08 03 A6 */	mtlr r0
/* 80332310 0032F250  38 21 00 20 */	addi r1, r1, 0x20
/* 80332314 0032F254  4E 80 00 20 */	blr 
.endfn __ct__Q28PSSystem9StreamBgmFUlRCQ27JAInter9SoundInfo

.fn init__Q28PSSystem9StreamBgmFv, global
/* 80332318 0032F258  4E 80 00 20 */	blr 
.endfn init__Q28PSSystem9StreamBgmFv

.fn __dt__Q28PSSystem9StreamBgmFv, global
/* 8033231C 0032F25C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80332320 0032F260  7C 08 02 A6 */	mflr r0
/* 80332324 0032F264  90 01 00 14 */	stw r0, 0x14(r1)
/* 80332328 0032F268  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033232C 0032F26C  7C 9F 23 78 */	mr r31, r4
/* 80332330 0032F270  93 C1 00 08 */	stw r30, 8(r1)
/* 80332334 0032F274  7C 7E 1B 79 */	or. r30, r3, r3
/* 80332338 0032F278  41 82 00 B4 */	beq .L_803323EC
/* 8033233C 0032F27C  3C A0 80 4E */	lis r5, __vt__Q28PSSystem9StreamBgm@ha
/* 80332340 0032F280  38 80 00 00 */	li r4, 0
/* 80332344 0032F284  38 05 A5 EC */	addi r0, r5, __vt__Q28PSSystem9StreamBgm@l
/* 80332348 0032F288  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8033234C 0032F28C  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80332350 0032F290  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80332354 0032F294  7D 89 03 A6 */	mtctr r12
/* 80332358 0032F298  4E 80 04 21 */	bctrl 
/* 8033235C 0032F29C  28 1E 00 00 */	cmplwi r30, 0
/* 80332360 0032F2A0  41 82 00 7C */	beq .L_803323DC
/* 80332364 0032F2A4  3C 80 80 4E */	lis r4, __vt__Q28PSSystem6BgmSeq@ha
/* 80332368 0032F2A8  7F C3 F3 78 */	mr r3, r30
/* 8033236C 0032F2AC  38 04 A6 30 */	addi r0, r4, __vt__Q28PSSystem6BgmSeq@l
/* 80332370 0032F2B0  38 80 00 00 */	li r4, 0
/* 80332374 0032F2B4  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80332378 0032F2B8  81 9E 00 10 */	lwz r12, 0x10(r30)
/* 8033237C 0032F2BC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80332380 0032F2C0  7D 89 03 A6 */	mtctr r12
/* 80332384 0032F2C4  4E 80 04 21 */	bctrl 
/* 80332388 0032F2C8  28 1E 00 00 */	cmplwi r30, 0
/* 8033238C 0032F2CC  41 82 00 50 */	beq .L_803323DC
/* 80332390 0032F2D0  3C 60 80 4E */	lis r3, __vt__Q28PSSystem7SeqBase@ha
/* 80332394 0032F2D4  38 03 A6 74 */	addi r0, r3, __vt__Q28PSSystem7SeqBase@l
/* 80332398 0032F2D8  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8033239C 0032F2DC  80 7E 00 28 */	lwz r3, 0x28(r30)
/* 803323A0 0032F2E0  28 03 00 00 */	cmplwi r3, 0
/* 803323A4 0032F2E4  41 82 00 1C */	beq .L_803323C0
/* 803323A8 0032F2E8  41 82 00 18 */	beq .L_803323C0
/* 803323AC 0032F2EC  81 83 00 00 */	lwz r12, 0(r3)
/* 803323B0 0032F2F0  38 80 00 01 */	li r4, 1
/* 803323B4 0032F2F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 803323B8 0032F2F8  7D 89 03 A6 */	mtctr r12
/* 803323BC 0032F2FC  4E 80 04 21 */	bctrl 
.L_803323C0:
/* 803323C0 0032F300  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 803323C4 0032F304  4B CF 1D 15 */	bl __dla__FPv
/* 803323C8 0032F308  28 1E 00 00 */	cmplwi r30, 0
/* 803323CC 0032F30C  41 82 00 10 */	beq .L_803323DC
/* 803323D0 0032F310  7F C3 F3 78 */	mr r3, r30
/* 803323D4 0032F314  38 80 00 00 */	li r4, 0
/* 803323D8 0032F318  4B CF 43 F9 */	bl __dt__10JSUPtrLinkFv
.L_803323DC:
/* 803323DC 0032F31C  7F E0 07 35 */	extsh. r0, r31
/* 803323E0 0032F320  40 81 00 0C */	ble .L_803323EC
/* 803323E4 0032F324  7F C3 F3 78 */	mr r3, r30
/* 803323E8 0032F328  4B CF 1C CD */	bl __dl__FPv
.L_803323EC:
/* 803323EC 0032F32C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803323F0 0032F330  7F C3 F3 78 */	mr r3, r30
/* 803323F4 0032F334  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803323F8 0032F338  83 C1 00 08 */	lwz r30, 8(r1)
/* 803323FC 0032F33C  7C 08 03 A6 */	mtlr r0
/* 80332400 0032F340  38 21 00 10 */	addi r1, r1, 0x10
/* 80332404 0032F344  4E 80 00 20 */	blr 
.endfn __dt__Q28PSSystem9StreamBgmFv

.fn setId__Q28PSSystem9StreamBgmFUl, global
/* 80332408 0032F348  90 83 00 70 */	stw r4, 0x70(r3)
/* 8033240C 0032F34C  4E 80 00 20 */	blr 
.endfn setId__Q28PSSystem9StreamBgmFUl

.fn startSeq__Q28PSSystem9StreamBgmFv, global
/* 80332410 0032F350  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80332414 0032F354  7C 08 02 A6 */	mflr r0
/* 80332418 0032F358  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033241C 0032F35C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80332420 0032F360  7C 7F 1B 78 */	mr r31, r3
/* 80332424 0032F364  80 0D 91 D0 */	lwz r0, "sInstance__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"@sda21(r13)
/* 80332428 0032F368  28 00 00 00 */	cmplwi r0, 0
/* 8033242C 0032F36C  41 82 00 14 */	beq .L_80332440
/* 80332430 0032F370  80 9F 00 70 */	lwz r4, 0x70(r31)
/* 80332434 0032F374  7C 03 03 78 */	mr r3, r0
/* 80332438 0032F378  4B FF EB C1 */	bl getStreamVolume__Q28PSSystem14StreamDataListFUl
/* 8033243C 0032F37C  98 7F 00 24 */	stb r3, 0x24(r31)
.L_80332440:
/* 80332440 0032F380  38 7F 00 50 */	addi r3, r31, 0x50
/* 80332444 0032F384  4B DB D7 25 */	bl OSLockMutex
/* 80332448 0032F388  80 6D 8B 68 */	lwz r3, msBasic__8JAIBasic@sda21(r13)
/* 8033244C 0032F38C  38 BF 00 6C */	addi r5, r31, 0x6c
/* 80332450 0032F390  80 9F 00 70 */	lwz r4, 0x70(r31)
/* 80332454 0032F394  39 3F 00 18 */	addi r9, r31, 0x18
/* 80332458 0032F398  38 C0 00 00 */	li r6, 0
/* 8033245C 0032F39C  38 E0 00 00 */	li r7, 0
/* 80332460 0032F3A0  39 00 00 00 */	li r8, 0
/* 80332464 0032F3A4  4B D7 A3 19 */	bl startSoundBasic__8JAIBasicFUlPP8JAISoundPQ27JAInter5ActorUlUcPQ27JAInter9SoundInfo
/* 80332468 0032F3A8  38 7F 00 50 */	addi r3, r31, 0x50
/* 8033246C 0032F3AC  4B DB D7 D9 */	bl OSUnlockMutex
/* 80332470 0032F3B0  80 1F 00 6C */	lwz r0, 0x6c(r31)
/* 80332474 0032F3B4  28 00 00 00 */	cmplwi r0, 0
/* 80332478 0032F3B8  40 82 00 20 */	bne .L_80332498
/* 8033247C 0032F3BC  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 80332480 0032F3C0  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 80332484 0032F3C4  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 80332488 0032F3C8  38 80 02 C0 */	li r4, 0x2c0
/* 8033248C 0032F3CC  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 80332490 0032F3D0  4C C6 31 82 */	crclr 6
/* 80332494 0032F3D4  4B CF 81 AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80332498:
/* 80332498 0032F3D8  80 7F 00 6C */	lwz r3, 0x6c(r31)
/* 8033249C 0032F3DC  80 9F 00 70 */	lwz r4, 0x70(r31)
/* 803324A0 0032F3E0  80 03 00 20 */	lwz r0, 0x20(r3)
/* 803324A4 0032F3E4  7C 04 00 40 */	cmplw r4, r0
/* 803324A8 0032F3E8  41 82 00 20 */	beq .L_803324C8
/* 803324AC 0032F3EC  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 803324B0 0032F3F0  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 803324B4 0032F3F4  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 803324B8 0032F3F8  38 80 02 C1 */	li r4, 0x2c1
/* 803324BC 0032F3FC  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 803324C0 0032F400  4C C6 31 82 */	crclr 6
/* 803324C4 0032F404  4B CF 81 7D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803324C8:
/* 803324C8 0032F408  80 7F 00 70 */	lwz r3, 0x70(r31)
/* 803324CC 0032F40C  3C 03 3F FF */	addis r0, r3, 0x3fff # should be subis 0xc001 but the assembler cries
/* 803324D0 0032F410  28 00 10 1F */	cmplwi r0, 0x101f
/* 803324D4 0032F414  40 82 00 70 */	bne .L_80332544
/* 803324D8 0032F418  7F E3 FB 78 */	mr r3, r31
/* 803324DC 0032F41C  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 803324E0 0032F420  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803324E4 0032F424  7D 89 03 A6 */	mtctr r12
/* 803324E8 0032F428  4E 80 04 21 */	bctrl 
/* 803324EC 0032F42C  80 63 00 00 */	lwz r3, 0(r3)
/* 803324F0 0032F430  38 80 00 00 */	li r4, 0
/* 803324F4 0032F434  C0 22 FD 48 */	lfs f1, lbl_8051E0A8@sda21(r2)
/* 803324F8 0032F438  38 A0 00 08 */	li r5, 8
/* 803324FC 0032F43C  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80332500 0032F440  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80332504 0032F444  7D 89 03 A6 */	mtctr r12
/* 80332508 0032F448  4E 80 04 21 */	bctrl 
/* 8033250C 0032F44C  7F E3 FB 78 */	mr r3, r31
/* 80332510 0032F450  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 80332514 0032F454  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80332518 0032F458  7D 89 03 A6 */	mtctr r12
/* 8033251C 0032F45C  4E 80 04 21 */	bctrl 
/* 80332520 0032F460  80 63 00 00 */	lwz r3, 0(r3)
/* 80332524 0032F464  38 80 00 00 */	li r4, 0
/* 80332528 0032F468  C0 22 FD 58 */	lfs f1, lbl_8051E0B8@sda21(r2)
/* 8033252C 0032F46C  38 A0 00 03 */	li r5, 3
/* 80332530 0032F470  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80332534 0032F474  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80332538 0032F478  7D 89 03 A6 */	mtctr r12
/* 8033253C 0032F47C  4E 80 04 21 */	bctrl 
/* 80332540 0032F480  48 00 00 18 */	b .L_80332558
.L_80332544:
/* 80332544 0032F484  7F E3 FB 78 */	mr r3, r31
/* 80332548 0032F488  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 8033254C 0032F48C  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80332550 0032F490  7D 89 03 A6 */	mtctr r12
/* 80332554 0032F494  4E 80 04 21 */	bctrl 
.L_80332558:
/* 80332558 0032F498  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033255C 0032F49C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80332560 0032F4A0  7C 08 03 A6 */	mtlr r0
/* 80332564 0032F4A4  38 21 00 10 */	addi r1, r1, 0x10
/* 80332568 0032F4A8  4E 80 00 20 */	blr 
.endfn startSeq__Q28PSSystem9StreamBgmFv

.fn setConfigVolume__Q28PSSystem9StreamBgmFv, global
/* 8033256C 0032F4AC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80332570 0032F4B0  7C 08 02 A6 */	mflr r0
/* 80332574 0032F4B4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80332578 0032F4B8  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8033257C 0032F4BC  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 80332580 0032F4C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80332584 0032F4C4  80 0D 98 58 */	lwz r0, spSysIF__8PSSystem@sda21(r13)
/* 80332588 0032F4C8  7C 7F 1B 78 */	mr r31, r3
/* 8033258C 0032F4CC  28 00 00 00 */	cmplwi r0, 0
/* 80332590 0032F4D0  40 82 00 20 */	bne .L_803325B0
/* 80332594 0032F4D4  3C 60 80 49 */	lis r3, lbl_8048F8F4@ha
/* 80332598 0032F4D8  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 8033259C 0032F4DC  38 63 F8 F4 */	addi r3, r3, lbl_8048F8F4@l
/* 803325A0 0032F4E0  38 80 01 8B */	li r4, 0x18b
/* 803325A4 0032F4E4  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 803325A8 0032F4E8  4C C6 31 82 */	crclr 6
/* 803325AC 0032F4EC  4B CF 80 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803325B0:
/* 803325B0 0032F4F0  7F E3 FB 78 */	mr r3, r31
/* 803325B4 0032F4F4  80 8D 98 58 */	lwz r4, spSysIF__8PSSystem@sda21(r13)
/* 803325B8 0032F4F8  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 803325BC 0032F4FC  C3 E4 00 24 */	lfs f31, 0x24(r4)
/* 803325C0 0032F500  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803325C4 0032F504  7D 89 03 A6 */	mtctr r12
/* 803325C8 0032F508  4E 80 04 21 */	bctrl 
/* 803325CC 0032F50C  80 63 00 00 */	lwz r3, 0(r3)
/* 803325D0 0032F510  FC 20 F8 90 */	fmr f1, f31
/* 803325D4 0032F514  38 80 00 00 */	li r4, 0
/* 803325D8 0032F518  38 A0 00 08 */	li r5, 8
/* 803325DC 0032F51C  81 83 00 10 */	lwz r12, 0x10(r3)
/* 803325E0 0032F520  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803325E4 0032F524  7D 89 03 A6 */	mtctr r12
/* 803325E8 0032F528  4E 80 04 21 */	bctrl 
/* 803325EC 0032F52C  7F E3 FB 78 */	mr r3, r31
/* 803325F0 0032F530  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 803325F4 0032F534  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803325F8 0032F538  7D 89 03 A6 */	mtctr r12
/* 803325FC 0032F53C  4E 80 04 21 */	bctrl 
/* 80332600 0032F540  80 63 00 00 */	lwz r3, 0(r3)
/* 80332604 0032F544  38 80 00 00 */	li r4, 0
/* 80332608 0032F548  C0 22 FD 5C */	lfs f1, lbl_8051E0BC@sda21(r2)
/* 8033260C 0032F54C  38 A0 00 03 */	li r5, 3
/* 80332610 0032F550  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80332614 0032F554  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80332618 0032F558  7D 89 03 A6 */	mtctr r12
/* 8033261C 0032F55C  4E 80 04 21 */	bctrl 
/* 80332620 0032F560  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 80332624 0032F564  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80332628 0032F568  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8033262C 0032F56C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80332630 0032F570  7C 08 03 A6 */	mtlr r0
/* 80332634 0032F574  38 21 00 20 */	addi r1, r1, 0x20
/* 80332638 0032F578  4E 80 00 20 */	blr 
.endfn setConfigVolume__Q28PSSystem9StreamBgmFv

.fn isPlaying__Q28PSSystem9StreamBgmFv, global
/* 8033263C 0032F57C  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 80332640 0032F580  7C 03 00 D0 */	neg r0, r3
/* 80332644 0032F584  7C 00 1B 78 */	or r0, r0, r3
/* 80332648 0032F588  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8033264C 0032F58C  4E 80 00 20 */	blr 
.endfn isPlaying__Q28PSSystem9StreamBgmFv

.fn __dt__Q28PSSystem5SeSeqFv, global
/* 80332650 0032F590  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80332654 0032F594  7C 08 02 A6 */	mflr r0
/* 80332658 0032F598  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033265C 0032F59C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80332660 0032F5A0  7C 9F 23 78 */	mr r31, r4
/* 80332664 0032F5A4  93 C1 00 08 */	stw r30, 8(r1)
/* 80332668 0032F5A8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8033266C 0032F5AC  41 82 00 88 */	beq .L_803326F4
/* 80332670 0032F5B0  3C A0 80 4E */	lis r5, __vt__Q28PSSystem5SeSeq@ha
/* 80332674 0032F5B4  38 80 00 00 */	li r4, 0
/* 80332678 0032F5B8  38 05 A5 A8 */	addi r0, r5, __vt__Q28PSSystem5SeSeq@l
/* 8033267C 0032F5BC  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80332680 0032F5C0  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80332684 0032F5C4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80332688 0032F5C8  7D 89 03 A6 */	mtctr r12
/* 8033268C 0032F5CC  4E 80 04 21 */	bctrl 
/* 80332690 0032F5D0  28 1E 00 00 */	cmplwi r30, 0
/* 80332694 0032F5D4  41 82 00 50 */	beq .L_803326E4
/* 80332698 0032F5D8  3C 60 80 4E */	lis r3, __vt__Q28PSSystem7SeqBase@ha
/* 8033269C 0032F5DC  38 03 A6 74 */	addi r0, r3, __vt__Q28PSSystem7SeqBase@l
/* 803326A0 0032F5E0  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803326A4 0032F5E4  80 7E 00 28 */	lwz r3, 0x28(r30)
/* 803326A8 0032F5E8  28 03 00 00 */	cmplwi r3, 0
/* 803326AC 0032F5EC  41 82 00 1C */	beq .L_803326C8
/* 803326B0 0032F5F0  41 82 00 18 */	beq .L_803326C8
/* 803326B4 0032F5F4  81 83 00 00 */	lwz r12, 0(r3)
/* 803326B8 0032F5F8  38 80 00 01 */	li r4, 1
/* 803326BC 0032F5FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803326C0 0032F600  7D 89 03 A6 */	mtctr r12
/* 803326C4 0032F604  4E 80 04 21 */	bctrl 
.L_803326C8:
/* 803326C8 0032F608  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 803326CC 0032F60C  4B CF 1A 0D */	bl __dla__FPv
/* 803326D0 0032F610  28 1E 00 00 */	cmplwi r30, 0
/* 803326D4 0032F614  41 82 00 10 */	beq .L_803326E4
/* 803326D8 0032F618  7F C3 F3 78 */	mr r3, r30
/* 803326DC 0032F61C  38 80 00 00 */	li r4, 0
/* 803326E0 0032F620  4B CF 40 F1 */	bl __dt__10JSUPtrLinkFv
.L_803326E4:
/* 803326E4 0032F624  7F E0 07 35 */	extsh. r0, r31
/* 803326E8 0032F628  40 81 00 0C */	ble .L_803326F4
/* 803326EC 0032F62C  7F C3 F3 78 */	mr r3, r30
/* 803326F0 0032F630  4B CF 19 C5 */	bl __dl__FPv
.L_803326F4:
/* 803326F4 0032F634  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803326F8 0032F638  7F C3 F3 78 */	mr r3, r30
/* 803326FC 0032F63C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80332700 0032F640  83 C1 00 08 */	lwz r30, 8(r1)
/* 80332704 0032F644  7C 08 03 A6 */	mtlr r0
/* 80332708 0032F648  38 21 00 10 */	addi r1, r1, 0x10
/* 8033270C 0032F64C  4E 80 00 20 */	blr 
.endfn __dt__Q28PSSystem5SeSeqFv

.fn seqLoadAfter__Q28PSSystem5SeSeqFv, global
/* 80332710 0032F650  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80332714 0032F654  7C 08 02 A6 */	mflr r0
/* 80332718 0032F658  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033271C 0032F65C  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80332720 0032F660  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80332724 0032F664  7D 89 03 A6 */	mtctr r12
/* 80332728 0032F668  4E 80 04 21 */	bctrl 
/* 8033272C 0032F66C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80332730 0032F670  7C 08 03 A6 */	mtlr r0
/* 80332734 0032F674  38 21 00 10 */	addi r1, r1, 0x10
/* 80332738 0032F678  4E 80 00 20 */	blr 
.endfn seqLoadAfter__Q28PSSystem5SeSeqFv

.fn setConfigVolume__Q28PSSystem5SeSeqFv, global
/* 8033273C 0032F67C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80332740 0032F680  7C 08 02 A6 */	mflr r0
/* 80332744 0032F684  90 01 00 24 */	stw r0, 0x24(r1)
/* 80332748 0032F688  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8033274C 0032F68C  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 80332750 0032F690  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80332754 0032F694  80 0D 98 58 */	lwz r0, spSysIF__8PSSystem@sda21(r13)
/* 80332758 0032F698  7C 7F 1B 78 */	mr r31, r3
/* 8033275C 0032F69C  28 00 00 00 */	cmplwi r0, 0
/* 80332760 0032F6A0  40 82 00 20 */	bne .L_80332780
/* 80332764 0032F6A4  3C 60 80 49 */	lis r3, lbl_8048F8F4@ha
/* 80332768 0032F6A8  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 8033276C 0032F6AC  38 63 F8 F4 */	addi r3, r3, lbl_8048F8F4@l
/* 80332770 0032F6B0  38 80 01 8B */	li r4, 0x18b
/* 80332774 0032F6B4  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 80332778 0032F6B8  4C C6 31 82 */	crclr 6
/* 8033277C 0032F6BC  4B CF 7E C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80332780:
/* 80332780 0032F6C0  7F E3 FB 78 */	mr r3, r31
/* 80332784 0032F6C4  80 8D 98 58 */	lwz r4, spSysIF__8PSSystem@sda21(r13)
/* 80332788 0032F6C8  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 8033278C 0032F6CC  C3 E4 00 20 */	lfs f31, 0x20(r4)
/* 80332790 0032F6D0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80332794 0032F6D4  7D 89 03 A6 */	mtctr r12
/* 80332798 0032F6D8  4E 80 04 21 */	bctrl 
/* 8033279C 0032F6DC  80 63 00 00 */	lwz r3, 0(r3)
/* 803327A0 0032F6E0  FC 20 F8 90 */	fmr f1, f31
/* 803327A4 0032F6E4  38 80 00 00 */	li r4, 0
/* 803327A8 0032F6E8  38 A0 00 08 */	li r5, 8
/* 803327AC 0032F6EC  81 83 00 10 */	lwz r12, 0x10(r3)
/* 803327B0 0032F6F0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803327B4 0032F6F4  7D 89 03 A6 */	mtctr r12
/* 803327B8 0032F6F8  4E 80 04 21 */	bctrl 
/* 803327BC 0032F6FC  7F E3 FB 78 */	mr r3, r31
/* 803327C0 0032F700  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 803327C4 0032F704  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803327C8 0032F708  7D 89 03 A6 */	mtctr r12
/* 803327CC 0032F70C  4E 80 04 21 */	bctrl 
/* 803327D0 0032F710  80 63 00 00 */	lwz r3, 0(r3)
/* 803327D4 0032F714  38 80 00 00 */	li r4, 0
/* 803327D8 0032F718  C0 22 FD 48 */	lfs f1, lbl_8051E0A8@sda21(r2)
/* 803327DC 0032F71C  38 A0 00 03 */	li r5, 3
/* 803327E0 0032F720  81 83 00 10 */	lwz r12, 0x10(r3)
/* 803327E4 0032F724  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803327E8 0032F728  7D 89 03 A6 */	mtctr r12
/* 803327EC 0032F72C  4E 80 04 21 */	bctrl 
/* 803327F0 0032F730  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 803327F4 0032F734  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803327F8 0032F738  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 803327FC 0032F73C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80332800 0032F740  7C 08 03 A6 */	mtlr r0
/* 80332804 0032F744  38 21 00 20 */	addi r1, r1, 0x20
/* 80332808 0032F748  4E 80 00 20 */	blr 
.endfn setConfigVolume__Q28PSSystem5SeSeqFv

.fn stopSeq__Q28PSSystem5SeSeqFUl, global
/* 8033280C 0032F74C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80332810 0032F750  7C 08 02 A6 */	mflr r0
/* 80332814 0032F754  90 01 00 24 */	stw r0, 0x24(r1)
/* 80332818 0032F758  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8033281C 0032F75C  3B E0 00 00 */	li r31, 0
/* 80332820 0032F760  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80332824 0032F764  7C 9E 23 78 */	mr r30, r4
/* 80332828 0032F768  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8033282C 0032F76C  7C 7D 1B 78 */	mr r29, r3
/* 80332830 0032F770  48 00 00 14 */	b .L_80332844
.L_80332834:
/* 80332834 0032F774  80 6D 8B 68 */	lwz r3, msBasic__8JAIBasic@sda21(r13)
/* 80332838 0032F778  7F E4 FB 78 */	mr r4, r31
/* 8033283C 0032F77C  4B D7 A1 6D */	bl stopAllSe__8JAIBasicFUc
/* 80332840 0032F780  3B FF 00 01 */	addi r31, r31, 1
.L_80332844:
/* 80332844 0032F784  4B D7 B2 2D */	bl getParamSeCategoryMax__18JAIGlobalParameterFv
/* 80332848 0032F788  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8033284C 0032F78C  57 E0 06 3E */	clrlwi r0, r31, 0x18
/* 80332850 0032F790  7C 00 18 40 */	cmplw r0, r3
/* 80332854 0032F794  41 80 FF E0 */	blt .L_80332834
/* 80332858 0032F798  7F A3 EB 78 */	mr r3, r29
/* 8033285C 0032F79C  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 80332860 0032F7A0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80332864 0032F7A4  7D 89 03 A6 */	mtctr r12
/* 80332868 0032F7A8  4E 80 04 21 */	bctrl 
/* 8033286C 0032F7AC  28 03 00 00 */	cmplwi r3, 0
/* 80332870 0032F7B0  41 82 00 24 */	beq .L_80332894
/* 80332874 0032F7B4  80 63 00 00 */	lwz r3, 0(r3)
/* 80332878 0032F7B8  28 03 00 00 */	cmplwi r3, 0
/* 8033287C 0032F7BC  41 82 00 18 */	beq .L_80332894
/* 80332880 0032F7C0  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80332884 0032F7C4  7F C4 F3 78 */	mr r4, r30
/* 80332888 0032F7C8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8033288C 0032F7CC  7D 89 03 A6 */	mtctr r12
/* 80332890 0032F7D0  4E 80 04 21 */	bctrl 
.L_80332894:
/* 80332894 0032F7D4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80332898 0032F7D8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8033289C 0032F7DC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803328A0 0032F7E0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803328A4 0032F7E4  7C 08 03 A6 */	mtlr r0
/* 803328A8 0032F7E8  38 21 00 20 */	addi r1, r1, 0x20
/* 803328AC 0032F7EC  4E 80 00 20 */	blr 
.endfn stopSeq__Q28PSSystem5SeSeqFUl

.fn __ct__Q28PSSystem11DirectedBgmFPCcRCQ27JAInter9SoundInfoPQ28PSSystem15DirectorMgrBase, global
/* 803328B0 0032F7F0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803328B4 0032F7F4  7C 08 02 A6 */	mflr r0
/* 803328B8 0032F7F8  90 01 00 24 */	stw r0, 0x24(r1)
/* 803328BC 0032F7FC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803328C0 0032F800  7C DF 33 78 */	mr r31, r6
/* 803328C4 0032F804  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803328C8 0032F808  7C BE 2B 78 */	mr r30, r5
/* 803328CC 0032F80C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803328D0 0032F810  7C 9D 23 78 */	mr r29, r4
/* 803328D4 0032F814  93 81 00 10 */	stw r28, 0x10(r1)
/* 803328D8 0032F818  7C 7C 1B 78 */	mr r28, r3
/* 803328DC 0032F81C  7F 84 E3 78 */	mr r4, r28
/* 803328E0 0032F820  4B CF 3E D9 */	bl __ct__10JSUPtrLinkFPv
/* 803328E4 0032F824  3C 60 80 4E */	lis r3, __vt__Q28PSSystem7SeqBase@ha
/* 803328E8 0032F828  3C A0 80 4E */	lis r5, __vt__Q28PSSystem10Reservator@ha
/* 803328EC 0032F82C  38 03 A6 74 */	addi r0, r3, __vt__Q28PSSystem7SeqBase@l
/* 803328F0 0032F830  3C 80 80 4E */	lis r4, __vt__Q28PSSystem17SeqPlayReservator@ha
/* 803328F4 0032F834  90 1C 00 10 */	stw r0, 0x10(r28)
/* 803328F8 0032F838  39 40 00 00 */	li r10, 0
/* 803328FC 0032F83C  3C 60 80 4E */	lis r3, __vt__Q28PSSystem21SeqPauseOffReservator@ha
/* 80332900 0032F840  81 1E 00 00 */	lwz r8, 0(r30)
/* 80332904 0032F844  91 5C 00 14 */	stw r10, 0x14(r28)
/* 80332908 0032F848  38 E5 A6 B8 */	addi r7, r5, __vt__Q28PSSystem10Reservator@l
/* 8033290C 0032F84C  80 1E 00 04 */	lwz r0, 4(r30)
/* 80332910 0032F850  38 C4 A6 D0 */	addi r6, r4, __vt__Q28PSSystem17SeqPlayReservator@l
/* 80332914 0032F854  91 1C 00 18 */	stw r8, 0x18(r28)
/* 80332918 0032F858  38 A3 A6 C4 */	addi r5, r3, __vt__Q28PSSystem21SeqPauseOffReservator@l
/* 8033291C 0032F85C  81 3E 00 08 */	lwz r9, 8(r30)
/* 80332920 0032F860  38 80 00 04 */	li r4, 4
/* 80332924 0032F864  90 1C 00 1C */	stw r0, 0x1c(r28)
/* 80332928 0032F868  38 00 00 26 */	li r0, 0x26
/* 8033292C 0032F86C  81 1E 00 0C */	lwz r8, 0xc(r30)
/* 80332930 0032F870  38 7C 00 50 */	addi r3, r28, 0x50
/* 80332934 0032F874  91 3C 00 20 */	stw r9, 0x20(r28)
/* 80332938 0032F878  91 1C 00 24 */	stw r8, 0x24(r28)
/* 8033293C 0032F87C  91 5C 00 28 */	stw r10, 0x28(r28)
/* 80332940 0032F880  90 FC 00 2C */	stw r7, 0x2c(r28)
/* 80332944 0032F884  B1 5C 00 30 */	sth r10, 0x30(r28)
/* 80332948 0032F888  90 DC 00 2C */	stw r6, 0x2c(r28)
/* 8033294C 0032F88C  93 9C 00 34 */	stw r28, 0x34(r28)
/* 80332950 0032F890  90 FC 00 38 */	stw r7, 0x38(r28)
/* 80332954 0032F894  B1 5C 00 3C */	sth r10, 0x3c(r28)
/* 80332958 0032F898  90 BC 00 38 */	stw r5, 0x38(r28)
/* 8033295C 0032F89C  93 9C 00 40 */	stw r28, 0x40(r28)
/* 80332960 0032F8A0  90 9C 00 44 */	stw r4, 0x44(r28)
/* 80332964 0032F8A4  98 1C 00 48 */	stb r0, 0x48(r28)
/* 80332968 0032F8A8  91 5C 00 4C */	stw r10, 0x4c(r28)
/* 8033296C 0032F8AC  4B DB D1 C5 */	bl OSInitMutex
/* 80332970 0032F8B0  28 1D 00 00 */	cmplwi r29, 0
/* 80332974 0032F8B4  41 82 00 24 */	beq .L_80332998
/* 80332978 0032F8B8  7F A3 EB 78 */	mr r3, r29
/* 8033297C 0032F8BC  4B D9 7F 95 */	bl strlen
/* 80332980 0032F8C0  38 63 00 01 */	addi r3, r3, 1
/* 80332984 0032F8C4  4B CF 16 29 */	bl __nwa__FUl
/* 80332988 0032F8C8  90 7C 00 14 */	stw r3, 0x14(r28)
/* 8033298C 0032F8CC  7F A4 EB 78 */	mr r4, r29
/* 80332990 0032F8D0  80 7C 00 14 */	lwz r3, 0x14(r28)
/* 80332994 0032F8D4  4B D9 7E C5 */	bl strcpy
.L_80332998:
/* 80332998 0032F8D8  3C 80 80 4E */	lis r4, __vt__Q28PSSystem6BgmSeq@ha
/* 8033299C 0032F8DC  3C 60 80 4E */	lis r3, __vt__Q28PSSystem11DirectedBgm@ha
/* 803329A0 0032F8E0  38 04 A6 30 */	addi r0, r4, __vt__Q28PSSystem6BgmSeq@l
/* 803329A4 0032F8E4  38 80 00 00 */	li r4, 0
/* 803329A8 0032F8E8  90 1C 00 10 */	stw r0, 0x10(r28)
/* 803329AC 0032F8EC  38 03 A5 5C */	addi r0, r3, __vt__Q28PSSystem11DirectedBgm@l
/* 803329B0 0032F8F0  7F 83 E3 78 */	mr r3, r28
/* 803329B4 0032F8F4  90 9C 00 68 */	stw r4, 0x68(r28)
/* 803329B8 0032F8F8  90 1C 00 10 */	stw r0, 0x10(r28)
/* 803329BC 0032F8FC  93 FC 00 6C */	stw r31, 0x6c(r28)
/* 803329C0 0032F900  90 9C 00 70 */	stw r4, 0x70(r28)
/* 803329C4 0032F904  98 9C 00 B4 */	stb r4, 0xb4(r28)
/* 803329C8 0032F908  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803329CC 0032F90C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803329D0 0032F910  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803329D4 0032F914  83 81 00 10 */	lwz r28, 0x10(r1)
/* 803329D8 0032F918  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803329DC 0032F91C  7C 08 03 A6 */	mtlr r0
/* 803329E0 0032F920  38 21 00 20 */	addi r1, r1, 0x20
/* 803329E4 0032F924  4E 80 00 20 */	blr 
.endfn __ct__Q28PSSystem11DirectedBgmFPCcRCQ27JAInter9SoundInfoPQ28PSSystem15DirectorMgrBase

.fn initRootTrack_onPlaying__Q28PSSystem11DirectedBgmFP8JASTrack, global
/* 803329E8 0032F928  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803329EC 0032F92C  7C 08 02 A6 */	mflr r0
/* 803329F0 0032F930  90 01 00 14 */	stw r0, 0x14(r1)
/* 803329F4 0032F934  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803329F8 0032F938  7C 9F 23 78 */	mr r31, r4
/* 803329FC 0032F93C  93 C1 00 08 */	stw r30, 8(r1)
/* 80332A00 0032F940  7C 7E 1B 78 */	mr r30, r3
/* 80332A04 0032F944  88 03 00 B4 */	lbz r0, 0xb4(r3)
/* 80332A08 0032F948  28 00 00 01 */	cmplwi r0, 1
/* 80332A0C 0032F94C  41 82 00 20 */	beq .L_80332A2C
/* 80332A10 0032F950  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 80332A14 0032F954  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 80332A18 0032F958  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 80332A1C 0032F95C  38 80 03 24 */	li r4, 0x324
/* 80332A20 0032F960  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 80332A24 0032F964  4C C6 31 82 */	crclr 6
/* 80332A28 0032F968  4B CF 7C 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80332A2C:
/* 80332A2C 0032F96C  80 1E 00 70 */	lwz r0, 0x70(r30)
/* 80332A30 0032F970  28 00 00 00 */	cmplwi r0, 0
/* 80332A34 0032F974  40 82 00 20 */	bne .L_80332A54
/* 80332A38 0032F978  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 80332A3C 0032F97C  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 80332A40 0032F980  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 80332A44 0032F984  38 80 03 25 */	li r4, 0x325
/* 80332A48 0032F988  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 80332A4C 0032F98C  4C C6 31 82 */	crclr 6
/* 80332A50 0032F990  4B CF 7B F1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80332A54:
/* 80332A54 0032F994  80 9E 00 70 */	lwz r4, 0x70(r30)
/* 80332A58 0032F998  7F E3 FB 78 */	mr r3, r31
/* 80332A5C 0032F99C  38 A0 00 12 */	li r5, 0x12
/* 80332A60 0032F9A0  48 00 59 5D */	bl setObject__8PSSystemFP8JASTrackPvUc
/* 80332A64 0032F9A4  80 7E 00 70 */	lwz r3, 0x70(r30)
/* 80332A68 0032F9A8  7F E4 FB 78 */	mr r4, r31
/* 80332A6C 0032F9AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80332A70 0032F9B0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80332A74 0032F9B4  7D 89 03 A6 */	mtctr r12
/* 80332A78 0032F9B8  4E 80 04 21 */	bctrl 
/* 80332A7C 0032F9BC  80 7E 00 6C */	lwz r3, 0x6c(r30)
/* 80332A80 0032F9C0  28 03 00 00 */	cmplwi r3, 0
/* 80332A84 0032F9C4  41 82 00 0C */	beq .L_80332A90
/* 80332A88 0032F9C8  7F E4 FB 78 */	mr r4, r31
/* 80332A8C 0032F9CC  48 01 0F 71 */	bl playInit__Q28PSSystem15DirectorMgrBaseFP8JASTrack
.L_80332A90:
/* 80332A90 0032F9D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80332A94 0032F9D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80332A98 0032F9D8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80332A9C 0032F9DC  7C 08 03 A6 */	mtlr r0
/* 80332AA0 0032F9E0  38 21 00 10 */	addi r1, r1, 0x10
/* 80332AA4 0032F9E4  4E 80 00 20 */	blr 
.endfn initRootTrack_onPlaying__Q28PSSystem11DirectedBgmFP8JASTrack

.fn initChildTrack_onPlaying__Q28PSSystem11DirectedBgmFP8JASTrackUc, global
/* 80332AA8 0032F9E8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80332AAC 0032F9EC  7C 08 02 A6 */	mflr r0
/* 80332AB0 0032F9F0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80332AB4 0032F9F4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80332AB8 0032F9F8  7C BF 2B 78 */	mr r31, r5
/* 80332ABC 0032F9FC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80332AC0 0032FA00  7C 9E 23 78 */	mr r30, r4
/* 80332AC4 0032FA04  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80332AC8 0032FA08  7C 7D 1B 78 */	mr r29, r3
/* 80332ACC 0032FA0C  88 03 00 B4 */	lbz r0, 0xb4(r3)
/* 80332AD0 0032FA10  28 00 00 01 */	cmplwi r0, 1
/* 80332AD4 0032FA14  41 82 00 20 */	beq .L_80332AF4
/* 80332AD8 0032FA18  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 80332ADC 0032FA1C  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 80332AE0 0032FA20  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 80332AE4 0032FA24  38 80 03 30 */	li r4, 0x330
/* 80332AE8 0032FA28  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 80332AEC 0032FA2C  4C C6 31 82 */	crclr 6
/* 80332AF0 0032FA30  4B CF 7B 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80332AF4:
/* 80332AF4 0032FA34  57 E0 06 3E */	clrlwi r0, r31, 0x18
/* 80332AF8 0032FA38  28 00 00 10 */	cmplwi r0, 0x10
/* 80332AFC 0032FA3C  41 80 00 20 */	blt .L_80332B1C
/* 80332B00 0032FA40  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 80332B04 0032FA44  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 80332B08 0032FA48  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 80332B0C 0032FA4C  38 80 03 31 */	li r4, 0x331
/* 80332B10 0032FA50  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 80332B14 0032FA54  4C C6 31 82 */	crclr 6
/* 80332B18 0032FA58  4B CF 7B 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80332B1C:
/* 80332B1C 0032FA5C  57 E0 15 BA */	rlwinm r0, r31, 2, 0x16, 0x1d
/* 80332B20 0032FA60  7F C3 F3 78 */	mr r3, r30
/* 80332B24 0032FA64  7F FD 02 14 */	add r31, r29, r0
/* 80332B28 0032FA68  38 A0 00 12 */	li r5, 0x12
/* 80332B2C 0032FA6C  80 9F 00 74 */	lwz r4, 0x74(r31)
/* 80332B30 0032FA70  48 00 58 8D */	bl setObject__8PSSystemFP8JASTrackPvUc
/* 80332B34 0032FA74  80 7F 00 74 */	lwz r3, 0x74(r31)
/* 80332B38 0032FA78  7F C4 F3 78 */	mr r4, r30
/* 80332B3C 0032FA7C  81 83 00 00 */	lwz r12, 0(r3)
/* 80332B40 0032FA80  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80332B44 0032FA84  7D 89 03 A6 */	mtctr r12
/* 80332B48 0032FA88  4E 80 04 21 */	bctrl 
/* 80332B4C 0032FA8C  80 7D 00 6C */	lwz r3, 0x6c(r29)
/* 80332B50 0032FA90  28 03 00 00 */	cmplwi r3, 0
/* 80332B54 0032FA94  41 82 00 0C */	beq .L_80332B60
/* 80332B58 0032FA98  7F C4 F3 78 */	mr r4, r30
/* 80332B5C 0032FA9C  48 01 0E A1 */	bl playInit__Q28PSSystem15DirectorMgrBaseFP8JASTrack
.L_80332B60:
/* 80332B60 0032FAA0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80332B64 0032FAA4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80332B68 0032FAA8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80332B6C 0032FAAC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80332B70 0032FAB0  7C 08 03 A6 */	mtlr r0
/* 80332B74 0032FAB4  38 21 00 20 */	addi r1, r1, 0x20
/* 80332B78 0032FAB8  4E 80 00 20 */	blr 
.endfn initChildTrack_onPlaying__Q28PSSystem11DirectedBgmFP8JASTrackUc

.fn getDirectorP__Q28PSSystem11DirectedBgmFUc, global
/* 80332B7C 0032FABC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80332B80 0032FAC0  7C 08 02 A6 */	mflr r0
/* 80332B84 0032FAC4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80332B88 0032FAC8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80332B8C 0032FACC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80332B90 0032FAD0  7C 7E 1B 78 */	mr r30, r3
/* 80332B94 0032FAD4  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 80332B98 0032FAD8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80332B9C 0032FADC  7C 9D 23 78 */	mr r29, r4
/* 80332BA0 0032FAE0  3B E3 F8 48 */	addi r31, r3, lbl_8048F848@l
/* 80332BA4 0032FAE4  80 1E 00 6C */	lwz r0, 0x6c(r30)
/* 80332BA8 0032FAE8  28 00 00 00 */	cmplwi r0, 0
/* 80332BAC 0032FAEC  40 82 00 18 */	bne .L_80332BC4
/* 80332BB0 0032FAF0  38 7F 00 00 */	addi r3, r31, 0
/* 80332BB4 0032FAF4  38 BF 00 0C */	addi r5, r31, 0xc
/* 80332BB8 0032FAF8  38 80 03 40 */	li r4, 0x340
/* 80332BBC 0032FAFC  4C C6 31 82 */	crclr 6
/* 80332BC0 0032FB00  4B CF 7A 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80332BC4:
/* 80332BC4 0032FB04  83 DE 00 6C */	lwz r30, 0x6c(r30)
/* 80332BC8 0032FB08  57 A3 06 3E */	clrlwi r3, r29, 0x18
/* 80332BCC 0032FB0C  88 1E 00 08 */	lbz r0, 8(r30)
/* 80332BD0 0032FB10  7C 03 00 40 */	cmplw r3, r0
/* 80332BD4 0032FB14  41 80 00 18 */	blt .L_80332BEC
/* 80332BD8 0032FB18  38 7F 00 BC */	addi r3, r31, 0xbc
/* 80332BDC 0032FB1C  38 BF 00 0C */	addi r5, r31, 0xc
/* 80332BE0 0032FB20  38 80 00 B5 */	li r4, 0xb5
/* 80332BE4 0032FB24  4C C6 31 82 */	crclr 6
/* 80332BE8 0032FB28  4B CF 7A 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80332BEC:
/* 80332BEC 0032FB2C  80 7E 00 04 */	lwz r3, 4(r30)
/* 80332BF0 0032FB30  57 A0 15 BA */	rlwinm r0, r29, 2, 0x16, 0x1d
/* 80332BF4 0032FB34  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80332BF8 0032FB38  7C 63 00 2E */	lwzx r3, r3, r0
/* 80332BFC 0032FB3C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80332C00 0032FB40  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80332C04 0032FB44  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80332C08 0032FB48  7C 08 03 A6 */	mtlr r0
/* 80332C0C 0032FB4C  38 21 00 20 */	addi r1, r1, 0x20
/* 80332C10 0032FB50  4E 80 00 20 */	blr 
.endfn getDirectorP__Q28PSSystem11DirectedBgmFUc

.fn newSeqTrackRoot__Q28PSSystem11DirectedBgmFv, global
/* 80332C14 0032FB54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80332C18 0032FB58  7C 08 02 A6 */	mflr r0
/* 80332C1C 0032FB5C  38 60 02 C4 */	li r3, 0x2c4
/* 80332C20 0032FB60  90 01 00 14 */	stw r0, 0x14(r1)
/* 80332C24 0032FB64  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80332C28 0032FB68  4B CF 12 7D */	bl __nw__FUl
/* 80332C2C 0032FB6C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80332C30 0032FB70  41 82 00 0C */	beq .L_80332C3C
/* 80332C34 0032FB74  48 00 F6 D9 */	bl __ct__Q28PSSystem12SeqTrackRootFv
/* 80332C38 0032FB78  7C 7F 1B 78 */	mr r31, r3
.L_80332C3C:
/* 80332C3C 0032FB7C  28 1F 00 00 */	cmplwi r31, 0
/* 80332C40 0032FB80  40 82 00 20 */	bne .L_80332C60
/* 80332C44 0032FB84  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 80332C48 0032FB88  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 80332C4C 0032FB8C  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 80332C50 0032FB90  38 80 03 47 */	li r4, 0x347
/* 80332C54 0032FB94  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 80332C58 0032FB98  4C C6 31 82 */	crclr 6
/* 80332C5C 0032FB9C  4B CF 79 E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80332C60:
/* 80332C60 0032FBA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80332C64 0032FBA4  7F E3 FB 78 */	mr r3, r31
/* 80332C68 0032FBA8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80332C6C 0032FBAC  7C 08 03 A6 */	mtlr r0
/* 80332C70 0032FBB0  38 21 00 10 */	addi r1, r1, 0x10
/* 80332C74 0032FBB4  4E 80 00 20 */	blr 
.endfn newSeqTrackRoot__Q28PSSystem11DirectedBgmFv

.fn newSeqTrackChild__Q28PSSystem11DirectedBgmFUcRQ28PSSystem12SeqTrackRoot, global
/* 80332C78 0032FBB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80332C7C 0032FBBC  7C 08 02 A6 */	mflr r0
/* 80332C80 0032FBC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80332C84 0032FBC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80332C88 0032FBC8  93 C1 00 08 */	stw r30, 8(r1)
/* 80332C8C 0032FBCC  7C 7E 1B 78 */	mr r30, r3
/* 80332C90 0032FBD0  38 60 02 7C */	li r3, 0x27c
/* 80332C94 0032FBD4  4B CF 12 11 */	bl __nw__FUl
/* 80332C98 0032FBD8  7C 7F 1B 79 */	or. r31, r3, r3
/* 80332C9C 0032FBDC  41 82 00 10 */	beq .L_80332CAC
/* 80332CA0 0032FBE0  80 9E 00 70 */	lwz r4, 0x70(r30)
/* 80332CA4 0032FBE4  48 00 FC C1 */	bl __ct__Q28PSSystem13SeqTrackChildFRCQ28PSSystem12SeqTrackRoot
/* 80332CA8 0032FBE8  7C 7F 1B 78 */	mr r31, r3
.L_80332CAC:
/* 80332CAC 0032FBEC  28 1F 00 00 */	cmplwi r31, 0
/* 80332CB0 0032FBF0  40 82 00 20 */	bne .L_80332CD0
/* 80332CB4 0032FBF4  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 80332CB8 0032FBF8  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 80332CBC 0032FBFC  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 80332CC0 0032FC00  38 80 03 4F */	li r4, 0x34f
/* 80332CC4 0032FC04  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 80332CC8 0032FC08  4C C6 31 82 */	crclr 6
/* 80332CCC 0032FC0C  4B CF 79 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80332CD0:
/* 80332CD0 0032FC10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80332CD4 0032FC14  7F E3 FB 78 */	mr r3, r31
/* 80332CD8 0032FC18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80332CDC 0032FC1C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80332CE0 0032FC20  7C 08 03 A6 */	mtlr r0
/* 80332CE4 0032FC24  38 21 00 10 */	addi r1, r1, 0x10
/* 80332CE8 0032FC28  4E 80 00 20 */	blr 
.endfn newSeqTrackChild__Q28PSSystem11DirectedBgmFUcRQ28PSSystem12SeqTrackRoot

.fn init__Q28PSSystem11DirectedBgmFv, global
/* 80332CEC 0032FC2C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80332CF0 0032FC30  7C 08 02 A6 */	mflr r0
/* 80332CF4 0032FC34  90 01 00 24 */	stw r0, 0x24(r1)
/* 80332CF8 0032FC38  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80332CFC 0032FC3C  7C 7F 1B 78 */	mr r31, r3
/* 80332D00 0032FC40  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 80332D04 0032FC44  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80332D08 0032FC48  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80332D0C 0032FC4C  93 81 00 10 */	stw r28, 0x10(r1)
/* 80332D10 0032FC50  3B 83 F8 48 */	addi r28, r3, lbl_8048F848@l
/* 80332D14 0032FC54  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 80332D18 0032FC58  28 04 00 00 */	cmplwi r4, 0
/* 80332D1C 0032FC5C  41 82 01 20 */	beq .L_80332E3C
/* 80332D20 0032FC60  80 6D 91 CC */	lwz r3, "sInstance__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"@sda21(r13)
/* 80332D24 0032FC64  28 03 00 00 */	cmplwi r3, 0
/* 80332D28 0032FC68  41 82 00 0C */	beq .L_80332D34
/* 80332D2C 0032FC6C  4B FF E0 DD */	bl getSeqVolume__Q28PSSystem11SeqDataListFPCc
/* 80332D30 0032FC70  98 7F 00 24 */	stb r3, 0x24(r31)
.L_80332D34:
/* 80332D34 0032FC74  38 60 00 18 */	li r3, 0x18
/* 80332D38 0032FC78  4B CF 11 6D */	bl __nw__FUl
/* 80332D3C 0032FC7C  7C 7D 1B 79 */	or. r29, r3, r3
/* 80332D40 0032FC80  41 82 00 F8 */	beq .L_80332E38
/* 80332D44 0032FC84  4B D7 E3 59 */	bl getArchivePointer__Q27JAInter11SequenceMgrFv
/* 80332D48 0032FC88  28 03 00 00 */	cmplwi r3, 0
/* 80332D4C 0032FC8C  40 82 00 18 */	bne .L_80332D64
/* 80332D50 0032FC90  38 7C 00 00 */	addi r3, r28, 0
/* 80332D54 0032FC94  38 BC 00 0C */	addi r5, r28, 0xc
/* 80332D58 0032FC98  38 80 01 92 */	li r4, 0x192
/* 80332D5C 0032FC9C  4C C6 31 82 */	crclr 6
/* 80332D60 0032FCA0  4B CF 78 E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80332D64:
/* 80332D64 0032FCA4  4B D7 E3 39 */	bl getArchivePointer__Q27JAInter11SequenceMgrFv
/* 80332D68 0032FCA8  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 80332D6C 0032FCAC  4B CE 80 71 */	bl findNameResource__10JKRArchiveCFPCc
/* 80332D70 0032FCB0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80332D74 0032FCB4  40 82 00 1C */	bne .L_80332D90
/* 80332D78 0032FCB8  80 DF 00 14 */	lwz r6, 0x14(r31)
/* 80332D7C 0032FCBC  38 7C 00 00 */	addi r3, r28, 0
/* 80332D80 0032FCC0  38 BC 00 8C */	addi r5, r28, 0x8c
/* 80332D84 0032FCC4  38 80 01 94 */	li r4, 0x194
/* 80332D88 0032FCC8  4C C6 31 82 */	crclr 6
/* 80332D8C 0032FCCC  4B CF 78 B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80332D90:
/* 80332D90 0032FCD0  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 80332D94 0032FCD4  3C 60 80 4E */	lis r3, __vt__Q28PSSystem7SeqHeap@ha
/* 80332D98 0032FCD8  38 03 A6 DC */	addi r0, r3, __vt__Q28PSSystem7SeqHeap@l
/* 80332D9C 0032FCDC  38 60 00 00 */	li r3, 0
/* 80332DA0 0032FCE0  90 1D 00 00 */	stw r0, 0(r29)
/* 80332DA4 0032FCE4  38 04 00 1F */	addi r0, r4, 0x1f
/* 80332DA8 0032FCE8  54 1E 00 34 */	rlwinm r30, r0, 0, 0, 0x1a
/* 80332DAC 0032FCEC  28 1F 00 00 */	cmplwi r31, 0
/* 80332DB0 0032FCF0  90 7D 00 04 */	stw r3, 4(r29)
/* 80332DB4 0032FCF4  93 DD 00 08 */	stw r30, 8(r29)
/* 80332DB8 0032FCF8  90 7D 00 0C */	stw r3, 0xc(r29)
/* 80332DBC 0032FCFC  93 FD 00 10 */	stw r31, 0x10(r29)
/* 80332DC0 0032FD00  90 7D 00 14 */	stw r3, 0x14(r29)
/* 80332DC4 0032FD04  40 82 00 18 */	bne .L_80332DDC
/* 80332DC8 0032FD08  38 7C 00 00 */	addi r3, r28, 0
/* 80332DCC 0032FD0C  38 BC 00 0C */	addi r5, r28, 0xc
/* 80332DD0 0032FD10  38 80 00 86 */	li r4, 0x86
/* 80332DD4 0032FD14  4C C6 31 82 */	crclr 6
/* 80332DD8 0032FD18  4B CF 78 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80332DDC:
/* 80332DDC 0032FD1C  28 1E 00 00 */	cmplwi r30, 0
/* 80332DE0 0032FD20  41 82 00 58 */	beq .L_80332E38
/* 80332DE4 0032FD24  80 7D 00 08 */	lwz r3, 8(r29)
/* 80332DE8 0032FD28  38 A0 00 20 */	li r5, 0x20
/* 80332DEC 0032FD2C  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80332DF0 0032FD30  4B CF 12 59 */	bl __nwa__FUlP7JKRHeapi
/* 80332DF4 0032FD34  90 7D 00 0C */	stw r3, 0xc(r29)
/* 80332DF8 0032FD38  80 1D 00 0C */	lwz r0, 0xc(r29)
/* 80332DFC 0032FD3C  28 00 00 00 */	cmplwi r0, 0
/* 80332E00 0032FD40  40 82 00 18 */	bne .L_80332E18
/* 80332E04 0032FD44  38 7C 00 00 */	addi r3, r28, 0
/* 80332E08 0032FD48  38 BC 00 0C */	addi r5, r28, 0xc
/* 80332E0C 0032FD4C  38 80 00 8A */	li r4, 0x8a
/* 80332E10 0032FD50  4C C6 31 82 */	crclr 6
/* 80332E14 0032FD54  4B CF 78 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80332E18:
/* 80332E18 0032FD58  80 1D 00 08 */	lwz r0, 8(r29)
/* 80332E1C 0032FD5C  28 00 00 00 */	cmplwi r0, 0
/* 80332E20 0032FD60  40 82 00 18 */	bne .L_80332E38
/* 80332E24 0032FD64  38 7C 00 00 */	addi r3, r28, 0
/* 80332E28 0032FD68  38 BC 00 0C */	addi r5, r28, 0xc
/* 80332E2C 0032FD6C  38 80 00 8B */	li r4, 0x8b
/* 80332E30 0032FD70  4C C6 31 82 */	crclr 6
/* 80332E34 0032FD74  4B CF 78 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80332E38:
/* 80332E38 0032FD78  93 BF 00 28 */	stw r29, 0x28(r31)
.L_80332E3C:
/* 80332E3C 0032FD7C  7F E3 FB 78 */	mr r3, r31
/* 80332E40 0032FD80  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 80332E44 0032FD84  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 80332E48 0032FD88  7D 89 03 A6 */	mtctr r12
/* 80332E4C 0032FD8C  4E 80 04 21 */	bctrl 
/* 80332E50 0032FD90  90 7F 00 70 */	stw r3, 0x70(r31)
/* 80332E54 0032FD94  80 1F 00 70 */	lwz r0, 0x70(r31)
/* 80332E58 0032FD98  28 00 00 00 */	cmplwi r0, 0
/* 80332E5C 0032FD9C  40 82 00 18 */	bne .L_80332E74
/* 80332E60 0032FDA0  38 7C 00 00 */	addi r3, r28, 0
/* 80332E64 0032FDA4  38 BC 00 0C */	addi r5, r28, 0xc
/* 80332E68 0032FDA8  38 80 03 57 */	li r4, 0x357
/* 80332E6C 0032FDAC  4C C6 31 82 */	crclr 6
/* 80332E70 0032FDB0  4B CF 77 D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80332E74:
/* 80332E74 0032FDB4  3B 80 00 00 */	li r28, 0
/* 80332E78 0032FDB8  48 00 00 30 */	b .L_80332EA8
.L_80332E7C:
/* 80332E7C 0032FDBC  7F E3 FB 78 */	mr r3, r31
/* 80332E80 0032FDC0  7F 84 E3 78 */	mr r4, r28
/* 80332E84 0032FDC4  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 80332E88 0032FDC8  80 BF 00 70 */	lwz r5, 0x70(r31)
/* 80332E8C 0032FDCC  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 80332E90 0032FDD0  7D 89 03 A6 */	mtctr r12
/* 80332E94 0032FDD4  4E 80 04 21 */	bctrl 
/* 80332E98 0032FDD8  57 84 15 BA */	rlwinm r4, r28, 2, 0x16, 0x1d
/* 80332E9C 0032FDDC  3B 9C 00 01 */	addi r28, r28, 1
/* 80332EA0 0032FDE0  38 04 00 74 */	addi r0, r4, 0x74
/* 80332EA4 0032FDE4  7C 7F 01 2E */	stwx r3, r31, r0
.L_80332EA8:
/* 80332EA8 0032FDE8  57 80 06 3E */	clrlwi r0, r28, 0x18
/* 80332EAC 0032FDEC  28 00 00 10 */	cmplwi r0, 0x10
/* 80332EB0 0032FDF0  41 80 FF CC */	blt .L_80332E7C
/* 80332EB4 0032FDF4  38 00 00 01 */	li r0, 1
/* 80332EB8 0032FDF8  98 1F 00 B4 */	stb r0, 0xb4(r31)
/* 80332EBC 0032FDFC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80332EC0 0032FE00  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80332EC4 0032FE04  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80332EC8 0032FE08  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80332ECC 0032FE0C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80332ED0 0032FE10  7C 08 03 A6 */	mtlr r0
/* 80332ED4 0032FE14  38 21 00 20 */	addi r1, r1, 0x20
/* 80332ED8 0032FE18  4E 80 00 20 */	blr 
.endfn init__Q28PSSystem11DirectedBgmFv

.fn startSeq__Q28PSSystem11DirectedBgmFv, global
/* 80332EDC 0032FE1C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80332EE0 0032FE20  7C 08 02 A6 */	mflr r0
/* 80332EE4 0032FE24  90 01 00 24 */	stw r0, 0x24(r1)
/* 80332EE8 0032FE28  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80332EEC 0032FE2C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80332EF0 0032FE30  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80332EF4 0032FE34  7C 7D 1B 78 */	mr r29, r3
/* 80332EF8 0032FE38  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 80332EFC 0032FE3C  3B C3 F8 48 */	addi r30, r3, lbl_8048F848@l
/* 80332F00 0032FE40  38 7D 00 50 */	addi r3, r29, 0x50
/* 80332F04 0032FE44  4B DB CC 65 */	bl OSLockMutex
/* 80332F08 0032FE48  4B D7 E1 95 */	bl getArchivePointer__Q27JAInter11SequenceMgrFv
/* 80332F0C 0032FE4C  28 03 00 00 */	cmplwi r3, 0
/* 80332F10 0032FE50  40 82 00 18 */	bne .L_80332F28
/* 80332F14 0032FE54  38 7E 00 00 */	addi r3, r30, 0
/* 80332F18 0032FE58  38 BE 00 0C */	addi r5, r30, 0xc
/* 80332F1C 0032FE5C  38 80 01 92 */	li r4, 0x192
/* 80332F20 0032FE60  4C C6 31 82 */	crclr 6
/* 80332F24 0032FE64  4B CF 77 1D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80332F28:
/* 80332F28 0032FE68  4B D7 E1 75 */	bl getArchivePointer__Q27JAInter11SequenceMgrFv
/* 80332F2C 0032FE6C  80 9D 00 14 */	lwz r4, 0x14(r29)
/* 80332F30 0032FE70  4B CE 7E AD */	bl findNameResource__10JKRArchiveCFPCc
/* 80332F34 0032FE74  7C 7F 1B 79 */	or. r31, r3, r3
/* 80332F38 0032FE78  40 82 00 1C */	bne .L_80332F54
/* 80332F3C 0032FE7C  80 DD 00 14 */	lwz r6, 0x14(r29)
/* 80332F40 0032FE80  38 7E 00 00 */	addi r3, r30, 0
/* 80332F44 0032FE84  38 BE 00 8C */	addi r5, r30, 0x8c
/* 80332F48 0032FE88  38 80 01 94 */	li r4, 0x194
/* 80332F4C 0032FE8C  4C C6 31 82 */	crclr 6
/* 80332F50 0032FE90  4B CF 76 F1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80332F54:
/* 80332F54 0032FE94  7F A3 EB 78 */	mr r3, r29
/* 80332F58 0032FE98  A3 FF 00 00 */	lhz r31, 0(r31)
/* 80332F5C 0032FE9C  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 80332F60 0032FEA0  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80332F64 0032FEA4  7D 89 03 A6 */	mtctr r12
/* 80332F68 0032FEA8  4E 80 04 21 */	bctrl 
/* 80332F6C 0032FEAC  7F FF 1B 78 */	or r31, r31, r3
/* 80332F70 0032FEB0  7F A3 EB 78 */	mr r3, r29
/* 80332F74 0032FEB4  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 80332F78 0032FEB8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80332F7C 0032FEBC  7D 89 03 A6 */	mtctr r12
/* 80332F80 0032FEC0  4E 80 04 21 */	bctrl 
/* 80332F84 0032FEC4  7F E5 FB 78 */	mr r5, r31
/* 80332F88 0032FEC8  39 1D 00 18 */	addi r8, r29, 0x18
/* 80332F8C 0032FECC  38 80 00 00 */	li r4, 0
/* 80332F90 0032FED0  38 C0 00 00 */	li r6, 0
/* 80332F94 0032FED4  38 E0 00 00 */	li r7, 0
/* 80332F98 0032FED8  4B D7 FF 01 */	bl storeSeqBuffer__Q27JAInter11SequenceMgrFPP11JAISequencePQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
/* 80332F9C 0032FEDC  7F A3 EB 78 */	mr r3, r29
/* 80332FA0 0032FEE0  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 80332FA4 0032FEE4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80332FA8 0032FEE8  7D 89 03 A6 */	mtctr r12
/* 80332FAC 0032FEEC  4E 80 04 21 */	bctrl 
/* 80332FB0 0032FEF0  7C 7F 1B 79 */	or. r31, r3, r3
/* 80332FB4 0032FEF4  40 82 00 18 */	bne .L_80332FCC
/* 80332FB8 0032FEF8  38 7E 00 00 */	addi r3, r30, 0
/* 80332FBC 0032FEFC  38 BE 00 0C */	addi r5, r30, 0xc
/* 80332FC0 0032FF00  38 80 02 16 */	li r4, 0x216
/* 80332FC4 0032FF04  4C C6 31 82 */	crclr 6
/* 80332FC8 0032FF08  4B CF 76 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80332FCC:
/* 80332FCC 0032FF0C  83 FF 00 00 */	lwz r31, 0(r31)
/* 80332FD0 0032FF10  28 1F 00 00 */	cmplwi r31, 0
/* 80332FD4 0032FF14  40 82 00 18 */	bne .L_80332FEC
/* 80332FD8 0032FF18  38 7E 00 00 */	addi r3, r30, 0
/* 80332FDC 0032FF1C  38 BE 00 9C */	addi r5, r30, 0x9c
/* 80332FE0 0032FF20  38 80 02 1A */	li r4, 0x21a
/* 80332FE4 0032FF24  4C C6 31 82 */	crclr 6
/* 80332FE8 0032FF28  4B CF 76 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80332FEC:
/* 80332FEC 0032FF2C  93 BF 06 A4 */	stw r29, 0x6a4(r31)
/* 80332FF0 0032FF30  7F A3 EB 78 */	mr r3, r29
/* 80332FF4 0032FF34  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 80332FF8 0032FF38  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80332FFC 0032FF3C  7D 89 03 A6 */	mtctr r12
/* 80333000 0032FF40  4E 80 04 21 */	bctrl 
/* 80333004 0032FF44  38 1F 03 0C */	addi r0, r31, 0x30c
/* 80333008 0032FF48  38 7D 00 50 */	addi r3, r29, 0x50
/* 8033300C 0032FF4C  90 1D 00 4C */	stw r0, 0x4c(r29)
/* 80333010 0032FF50  4B DB CC 35 */	bl OSUnlockMutex
/* 80333014 0032FF54  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80333018 0032FF58  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8033301C 0032FF5C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80333020 0032FF60  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80333024 0032FF64  7C 08 03 A6 */	mtlr r0
/* 80333028 0032FF68  38 21 00 20 */	addi r1, r1, 0x20
/* 8033302C 0032FF6C  4E 80 00 20 */	blr 
.endfn startSeq__Q28PSSystem11DirectedBgmFv

.fn stopSeq__Q28PSSystem11DirectedBgmFUl, global
/* 80333030 0032FF70  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80333034 0032FF74  7C 08 02 A6 */	mflr r0
/* 80333038 0032FF78  90 01 00 24 */	stw r0, 0x24(r1)
/* 8033303C 0032FF7C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80333040 0032FF80  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80333044 0032FF84  7C 9E 23 78 */	mr r30, r4
/* 80333048 0032FF88  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8033304C 0032FF8C  7C 7D 1B 78 */	mr r29, r3
/* 80333050 0032FF90  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80333054 0032FF94  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80333058 0032FF98  7D 89 03 A6 */	mtctr r12
/* 8033305C 0032FF9C  4E 80 04 21 */	bctrl 
/* 80333060 0032FFA0  80 03 00 00 */	lwz r0, 0(r3)
/* 80333064 0032FFA4  28 00 00 00 */	cmplwi r0, 0
/* 80333068 0032FFA8  41 82 00 9C */	beq .L_80333104
/* 8033306C 0032FFAC  3B E0 00 00 */	li r31, 0
/* 80333070 0032FFB0  48 00 00 24 */	b .L_80333094
.L_80333074:
/* 80333074 0032FFB4  57 E3 15 BA */	rlwinm r3, r31, 2, 0x16, 0x1d
/* 80333078 0032FFB8  38 03 00 74 */	addi r0, r3, 0x74
/* 8033307C 0032FFBC  7C 7D 00 2E */	lwzx r3, r29, r0
/* 80333080 0032FFC0  81 83 00 00 */	lwz r12, 0(r3)
/* 80333084 0032FFC4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80333088 0032FFC8  7D 89 03 A6 */	mtctr r12
/* 8033308C 0032FFCC  4E 80 04 21 */	bctrl 
/* 80333090 0032FFD0  3B FF 00 01 */	addi r31, r31, 1
.L_80333094:
/* 80333094 0032FFD4  57 E0 06 3E */	clrlwi r0, r31, 0x18
/* 80333098 0032FFD8  28 00 00 10 */	cmplwi r0, 0x10
/* 8033309C 0032FFDC  41 80 FF D8 */	blt .L_80333074
/* 803330A0 0032FFE0  80 7D 00 70 */	lwz r3, 0x70(r29)
/* 803330A4 0032FFE4  81 83 00 00 */	lwz r12, 0(r3)
/* 803330A8 0032FFE8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803330AC 0032FFEC  7D 89 03 A6 */	mtctr r12
/* 803330B0 0032FFF0  4E 80 04 21 */	bctrl 
/* 803330B4 0032FFF4  80 7D 00 6C */	lwz r3, 0x6c(r29)
/* 803330B8 0032FFF8  28 03 00 00 */	cmplwi r3, 0
/* 803330BC 0032FFFC  41 82 00 0C */	beq .L_803330C8
/* 803330C0 00330000  7F A4 EB 78 */	mr r4, r29
/* 803330C4 00330004  48 01 0B 05 */	bl off__Q28PSSystem15DirectorMgrBaseFPQ28PSSystem11DirectedBgm
.L_803330C8:
/* 803330C8 00330008  7F A3 EB 78 */	mr r3, r29
/* 803330CC 0033000C  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 803330D0 00330010  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803330D4 00330014  7D 89 03 A6 */	mtctr r12
/* 803330D8 00330018  4E 80 04 21 */	bctrl 
/* 803330DC 0033001C  28 03 00 00 */	cmplwi r3, 0
/* 803330E0 00330020  41 82 00 24 */	beq .L_80333104
/* 803330E4 00330024  80 63 00 00 */	lwz r3, 0(r3)
/* 803330E8 00330028  28 03 00 00 */	cmplwi r3, 0
/* 803330EC 0033002C  41 82 00 18 */	beq .L_80333104
/* 803330F0 00330030  81 83 00 10 */	lwz r12, 0x10(r3)
/* 803330F4 00330034  7F C4 F3 78 */	mr r4, r30
/* 803330F8 00330038  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803330FC 0033003C  7D 89 03 A6 */	mtctr r12
/* 80333100 00330040  4E 80 04 21 */	bctrl 
.L_80333104:
/* 80333104 00330044  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80333108 00330048  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8033310C 0033004C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80333110 00330050  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80333114 00330054  7C 08 03 A6 */	mtlr r0
/* 80333118 00330058  38 21 00 20 */	addi r1, r1, 0x20
/* 8033311C 0033005C  4E 80 00 20 */	blr 
.endfn stopSeq__Q28PSSystem11DirectedBgmFUl

.fn onPlayingFrame__Q28PSSystem11DirectedBgmFv, global
/* 80333120 00330060  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80333124 00330064  7C 08 02 A6 */	mflr r0
/* 80333128 00330068  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033312C 0033006C  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 80333130 00330070  28 03 00 00 */	cmplwi r3, 0
/* 80333134 00330074  41 82 00 08 */	beq .L_8033313C
/* 80333138 00330078  48 01 0A 29 */	bl exec__Q28PSSystem15DirectorMgrBaseFv
.L_8033313C:
/* 8033313C 0033007C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80333140 00330080  7C 08 03 A6 */	mtlr r0
/* 80333144 00330084  38 21 00 10 */	addi r1, r1, 0x10
/* 80333148 00330088  4E 80 00 20 */	blr 
.endfn onPlayingFrame__Q28PSSystem11DirectedBgmFv

.fn onBeatTop__Q28PSSystem20SeqTrackRoot_JumpBgmFv, global
/* 8033314C 0033008C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80333150 00330090  7C 08 02 A6 */	mflr r0
/* 80333154 00330094  7C 64 1B 78 */	mr r4, r3
/* 80333158 00330098  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033315C 0033009C  38 84 00 3C */	addi r4, r4, 0x3c
/* 80333160 003300A0  80 63 02 C4 */	lwz r3, 0x2c4(r3)
/* 80333164 003300A4  48 00 00 15 */	bl onBeatTop__Q28PSSystem11JumpBgmPortFRQ28PSSystem7BeatMgr
/* 80333168 003300A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033316C 003300AC  7C 08 03 A6 */	mtlr r0
/* 80333170 003300B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80333174 003300B4  4E 80 00 20 */	blr 
.endfn onBeatTop__Q28PSSystem20SeqTrackRoot_JumpBgmFv

.fn onBeatTop__Q28PSSystem11JumpBgmPortFRQ28PSSystem7BeatMgr, global
/* 80333178 003300B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033317C 003300BC  7C 08 02 A6 */	mflr r0
/* 80333180 003300C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80333184 003300C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80333188 003300C8  93 C1 00 08 */	stw r30, 8(r1)
/* 8033318C 003300CC  7C 7E 1B 78 */	mr r30, r3
/* 80333190 003300D0  88 04 00 00 */	lbz r0, 0(r4)
/* 80333194 003300D4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80333198 003300D8  41 82 00 44 */	beq .L_803331DC
/* 8033319C 003300DC  A3 FE 00 34 */	lhz r31, 0x34(r30)
/* 803331A0 003300E0  28 1F FF FF */	cmplwi r31, 0xffff
/* 803331A4 003300E4  41 82 00 38 */	beq .L_803331DC
/* 803331A8 003300E8  38 7E 00 54 */	addi r3, r30, 0x54
/* 803331AC 003300EC  4B DB C9 BD */	bl OSLockMutex
/* 803331B0 003300F0  B3 FE 00 6C */	sth r31, 0x6c(r30)
/* 803331B4 003300F4  38 7E 00 54 */	addi r3, r30, 0x54
/* 803331B8 003300F8  4B DB CA 8D */	bl OSUnlockMutex
/* 803331BC 003300FC  38 7E 00 1C */	addi r3, r30, 0x1c
/* 803331C0 00330100  4B DB C9 A9 */	bl OSLockMutex
/* 803331C4 00330104  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 803331C8 00330108  38 7E 00 1C */	addi r3, r30, 0x1c
/* 803331CC 0033010C  38 04 FF FF */	addi r0, r4, 0x0000FFFF@l
/* 803331D0 00330110  B0 1E 00 34 */	sth r0, 0x34(r30)
/* 803331D4 00330114  4B DB CA 71 */	bl OSUnlockMutex
/* 803331D8 00330118  48 00 00 40 */	b .L_80333218
.L_803331DC:
/* 803331DC 0033011C  A3 FE 00 18 */	lhz r31, 0x18(r30)
/* 803331E0 00330120  28 1F FF FF */	cmplwi r31, 0xffff
/* 803331E4 00330124  41 82 00 34 */	beq .L_80333218
/* 803331E8 00330128  38 7E 00 54 */	addi r3, r30, 0x54
/* 803331EC 0033012C  4B DB C9 7D */	bl OSLockMutex
/* 803331F0 00330130  B3 FE 00 6C */	sth r31, 0x6c(r30)
/* 803331F4 00330134  38 7E 00 54 */	addi r3, r30, 0x54
/* 803331F8 00330138  4B DB CA 4D */	bl OSUnlockMutex
/* 803331FC 0033013C  7F C3 F3 78 */	mr r3, r30
/* 80333200 00330140  4B DB C9 69 */	bl OSLockMutex
/* 80333204 00330144  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 80333208 00330148  7F C3 F3 78 */	mr r3, r30
/* 8033320C 0033014C  38 04 FF FF */	addi r0, r4, 0x0000FFFF@l
/* 80333210 00330150  B0 1E 00 18 */	sth r0, 0x18(r30)
/* 80333214 00330154  4B DB CA 31 */	bl OSUnlockMutex
.L_80333218:
/* 80333218 00330158  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033321C 0033015C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80333220 00330160  83 C1 00 08 */	lwz r30, 8(r1)
/* 80333224 00330164  7C 08 03 A6 */	mtlr r0
/* 80333228 00330168  38 21 00 10 */	addi r1, r1, 0x10
/* 8033322C 0033016C  4E 80 00 20 */	blr 
.endfn onBeatTop__Q28PSSystem11JumpBgmPortFRQ28PSSystem7BeatMgr

.fn __ct__Q28PSSystem10JumpBgmSeqFPCcRCQ27JAInter9SoundInfoPQ28PSSystem15DirectorMgrBase, global
/* 80333230 00330170  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80333234 00330174  7C 08 02 A6 */	mflr r0
/* 80333238 00330178  90 01 00 24 */	stw r0, 0x24(r1)
/* 8033323C 0033017C  BF 41 00 08 */	stmw r26, 8(r1)
/* 80333240 00330180  7C 7A 1B 78 */	mr r26, r3
/* 80333244 00330184  7C 9D 23 78 */	mr r29, r4
/* 80333248 00330188  7C BE 2B 78 */	mr r30, r5
/* 8033324C 0033018C  7F 44 D3 78 */	mr r4, r26
/* 80333250 00330190  7C DF 33 78 */	mr r31, r6
/* 80333254 00330194  7C 9B 23 78 */	mr r27, r4
/* 80333258 00330198  7C 9C 23 78 */	mr r28, r4
/* 8033325C 0033019C  4B CF 35 5D */	bl __ct__10JSUPtrLinkFPv
/* 80333260 003301A0  3C 60 80 4E */	lis r3, __vt__Q28PSSystem7SeqBase@ha
/* 80333264 003301A4  3C A0 80 4E */	lis r5, __vt__Q28PSSystem10Reservator@ha
/* 80333268 003301A8  38 03 A6 74 */	addi r0, r3, __vt__Q28PSSystem7SeqBase@l
/* 8033326C 003301AC  3C 80 80 4E */	lis r4, __vt__Q28PSSystem17SeqPlayReservator@ha
/* 80333270 003301B0  90 1C 00 10 */	stw r0, 0x10(r28)
/* 80333274 003301B4  39 40 00 00 */	li r10, 0
/* 80333278 003301B8  3C 60 80 4E */	lis r3, __vt__Q28PSSystem21SeqPauseOffReservator@ha
/* 8033327C 003301BC  81 1E 00 00 */	lwz r8, 0(r30)
/* 80333280 003301C0  91 5C 00 14 */	stw r10, 0x14(r28)
/* 80333284 003301C4  38 E5 A6 B8 */	addi r7, r5, __vt__Q28PSSystem10Reservator@l
/* 80333288 003301C8  80 1E 00 04 */	lwz r0, 4(r30)
/* 8033328C 003301CC  38 C4 A6 D0 */	addi r6, r4, __vt__Q28PSSystem17SeqPlayReservator@l
/* 80333290 003301D0  91 1C 00 18 */	stw r8, 0x18(r28)
/* 80333294 003301D4  38 A3 A6 C4 */	addi r5, r3, __vt__Q28PSSystem21SeqPauseOffReservator@l
/* 80333298 003301D8  81 3E 00 08 */	lwz r9, 8(r30)
/* 8033329C 003301DC  38 80 00 04 */	li r4, 4
/* 803332A0 003301E0  90 1C 00 1C */	stw r0, 0x1c(r28)
/* 803332A4 003301E4  38 00 00 26 */	li r0, 0x26
/* 803332A8 003301E8  81 1E 00 0C */	lwz r8, 0xc(r30)
/* 803332AC 003301EC  38 7C 00 50 */	addi r3, r28, 0x50
/* 803332B0 003301F0  91 3C 00 20 */	stw r9, 0x20(r28)
/* 803332B4 003301F4  91 1C 00 24 */	stw r8, 0x24(r28)
/* 803332B8 003301F8  91 5C 00 28 */	stw r10, 0x28(r28)
/* 803332BC 003301FC  90 FC 00 2C */	stw r7, 0x2c(r28)
/* 803332C0 00330200  B1 5C 00 30 */	sth r10, 0x30(r28)
/* 803332C4 00330204  90 DC 00 2C */	stw r6, 0x2c(r28)
/* 803332C8 00330208  93 9C 00 34 */	stw r28, 0x34(r28)
/* 803332CC 0033020C  90 FC 00 38 */	stw r7, 0x38(r28)
/* 803332D0 00330210  B1 5C 00 3C */	sth r10, 0x3c(r28)
/* 803332D4 00330214  90 BC 00 38 */	stw r5, 0x38(r28)
/* 803332D8 00330218  93 9C 00 40 */	stw r28, 0x40(r28)
/* 803332DC 0033021C  90 9C 00 44 */	stw r4, 0x44(r28)
/* 803332E0 00330220  98 1C 00 48 */	stb r0, 0x48(r28)
/* 803332E4 00330224  91 5C 00 4C */	stw r10, 0x4c(r28)
/* 803332E8 00330228  4B DB C8 49 */	bl OSInitMutex
/* 803332EC 0033022C  28 1D 00 00 */	cmplwi r29, 0
/* 803332F0 00330230  41 82 00 24 */	beq .L_80333314
/* 803332F4 00330234  7F A3 EB 78 */	mr r3, r29
/* 803332F8 00330238  4B D9 76 19 */	bl strlen
/* 803332FC 0033023C  38 63 00 01 */	addi r3, r3, 1
/* 80333300 00330240  4B CF 0C AD */	bl __nwa__FUl
/* 80333304 00330244  90 7C 00 14 */	stw r3, 0x14(r28)
/* 80333308 00330248  7F A4 EB 78 */	mr r4, r29
/* 8033330C 0033024C  80 7C 00 14 */	lwz r3, 0x14(r28)
/* 80333310 00330250  4B D9 75 49 */	bl strcpy
.L_80333314:
/* 80333314 00330254  3C 60 80 4E */	lis r3, __vt__Q28PSSystem6BgmSeq@ha
/* 80333318 00330258  3C 80 80 4E */	lis r4, __vt__Q28PSSystem11DirectedBgm@ha
/* 8033331C 0033025C  38 03 A6 30 */	addi r0, r3, __vt__Q28PSSystem6BgmSeq@l
/* 80333320 00330260  3C 60 80 4E */	lis r3, __vt__Q28PSSystem10JumpBgmSeq@ha
/* 80333324 00330264  90 1B 00 10 */	stw r0, 0x10(r27)
/* 80333328 00330268  38 A0 00 00 */	li r5, 0
/* 8033332C 0033026C  38 84 A5 5C */	addi r4, r4, __vt__Q28PSSystem11DirectedBgm@l
/* 80333330 00330270  38 03 A4 8C */	addi r0, r3, __vt__Q28PSSystem10JumpBgmSeq@l
/* 80333334 00330274  90 BB 00 68 */	stw r5, 0x68(r27)
/* 80333338 00330278  38 7A 00 B8 */	addi r3, r26, 0xb8
/* 8033333C 0033027C  90 9B 00 10 */	stw r4, 0x10(r27)
/* 80333340 00330280  93 FB 00 6C */	stw r31, 0x6c(r27)
/* 80333344 00330284  90 BB 00 70 */	stw r5, 0x70(r27)
/* 80333348 00330288  98 BB 00 B4 */	stb r5, 0xb4(r27)
/* 8033334C 0033028C  90 1A 00 10 */	stw r0, 0x10(r26)
/* 80333350 00330290  4B DB C7 E1 */	bl OSInitMutex
/* 80333354 00330294  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 80333358 00330298  38 7A 00 D4 */	addi r3, r26, 0xd4
/* 8033335C 0033029C  38 04 FF FF */	addi r0, r4, 0x0000FFFF@l
/* 80333360 003302A0  B0 1A 00 D0 */	sth r0, 0xd0(r26)
/* 80333364 003302A4  4B DB C7 CD */	bl OSInitMutex
/* 80333368 003302A8  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 8033336C 003302AC  38 7A 00 F0 */	addi r3, r26, 0xf0
/* 80333370 003302B0  38 04 FF FF */	addi r0, r4, 0x0000FFFF@l
/* 80333374 003302B4  B0 1A 00 EC */	sth r0, 0xec(r26)
/* 80333378 003302B8  4B DB C7 B9 */	bl OSInitMutex
/* 8033337C 003302BC  38 00 00 00 */	li r0, 0
/* 80333380 003302C0  38 7A 01 0C */	addi r3, r26, 0x10c
/* 80333384 003302C4  B0 1A 01 08 */	sth r0, 0x108(r26)
/* 80333388 003302C8  4B DB C7 A9 */	bl OSInitMutex
/* 8033338C 003302CC  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 80333390 003302D0  38 00 00 00 */	li r0, 0
/* 80333394 003302D4  38 83 FF FF */	addi r4, r3, 0x0000FFFF@l
/* 80333398 003302D8  7F 43 D3 78 */	mr r3, r26
/* 8033339C 003302DC  B0 9A 01 24 */	sth r4, 0x124(r26)
/* 803333A0 003302E0  93 5A 01 28 */	stw r26, 0x128(r26)
/* 803333A4 003302E4  90 1A 01 2C */	stw r0, 0x12c(r26)
/* 803333A8 003302E8  B0 1A 01 30 */	sth r0, 0x130(r26)
/* 803333AC 003302EC  BB 41 00 08 */	lmw r26, 8(r1)
/* 803333B0 003302F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803333B4 003302F4  7C 08 03 A6 */	mtlr r0
/* 803333B8 003302F8  38 21 00 20 */	addi r1, r1, 0x20
/* 803333BC 003302FC  4E 80 00 20 */	blr 
.endfn __ct__Q28PSSystem10JumpBgmSeqFPCcRCQ27JAInter9SoundInfoPQ28PSSystem15DirectorMgrBase

.fn newSeqTrackRoot__Q28PSSystem10JumpBgmSeqFv, global
/* 803333C0 00330300  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803333C4 00330304  7C 08 02 A6 */	mflr r0
/* 803333C8 00330308  90 01 00 14 */	stw r0, 0x14(r1)
/* 803333CC 0033030C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803333D0 00330310  93 C1 00 08 */	stw r30, 8(r1)
/* 803333D4 00330314  7C 7E 1B 78 */	mr r30, r3
/* 803333D8 00330318  38 60 02 C8 */	li r3, 0x2c8
/* 803333DC 0033031C  4B CF 0A C9 */	bl __nw__FUl
/* 803333E0 00330320  7C 7F 1B 79 */	or. r31, r3, r3
/* 803333E4 00330324  41 82 00 1C */	beq .L_80333400
/* 803333E8 00330328  48 00 EF 25 */	bl __ct__Q28PSSystem12SeqTrackRootFv
/* 803333EC 0033032C  3C 60 80 4E */	lis r3, __vt__Q28PSSystem20SeqTrackRoot_JumpBgm@ha
/* 803333F0 00330330  38 1E 00 B8 */	addi r0, r30, 0xb8
/* 803333F4 00330334  38 63 A5 40 */	addi r3, r3, __vt__Q28PSSystem20SeqTrackRoot_JumpBgm@l
/* 803333F8 00330338  90 7F 00 00 */	stw r3, 0(r31)
/* 803333FC 0033033C  90 1F 02 C4 */	stw r0, 0x2c4(r31)
.L_80333400:
/* 80333400 00330340  28 1F 00 00 */	cmplwi r31, 0
/* 80333404 00330344  40 82 00 20 */	bne .L_80333424
/* 80333408 00330348  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 8033340C 0033034C  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 80333410 00330350  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 80333414 00330354  38 80 04 BB */	li r4, 0x4bb
/* 80333418 00330358  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 8033341C 0033035C  4C C6 31 82 */	crclr 6
/* 80333420 00330360  4B CF 72 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80333424:
/* 80333424 00330364  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80333428 00330368  7F E3 FB 78 */	mr r3, r31
/* 8033342C 0033036C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80333430 00330370  83 C1 00 08 */	lwz r30, 8(r1)
/* 80333434 00330374  7C 08 03 A6 */	mtlr r0
/* 80333438 00330378  38 21 00 10 */	addi r1, r1, 0x10
/* 8033343C 0033037C  4E 80 00 20 */	blr 
.endfn newSeqTrackRoot__Q28PSSystem10JumpBgmSeqFv

.fn startSeq__Q28PSSystem10JumpBgmSeqFv, global
/* 80333440 00330380  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80333444 00330384  7C 08 02 A6 */	mflr r0
/* 80333448 00330388  90 01 00 24 */	stw r0, 0x24(r1)
/* 8033344C 0033038C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80333450 00330390  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80333454 00330394  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80333458 00330398  7C 7D 1B 78 */	mr r29, r3
/* 8033345C 0033039C  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 80333460 003303A0  3B C3 F8 48 */	addi r30, r3, lbl_8048F848@l
/* 80333464 003303A4  38 7D 00 50 */	addi r3, r29, 0x50
/* 80333468 003303A8  4B DB C7 01 */	bl OSLockMutex
/* 8033346C 003303AC  4B D7 DC 31 */	bl getArchivePointer__Q27JAInter11SequenceMgrFv
/* 80333470 003303B0  28 03 00 00 */	cmplwi r3, 0
/* 80333474 003303B4  40 82 00 18 */	bne .L_8033348C
/* 80333478 003303B8  38 7E 00 00 */	addi r3, r30, 0
/* 8033347C 003303BC  38 BE 00 0C */	addi r5, r30, 0xc
/* 80333480 003303C0  38 80 01 92 */	li r4, 0x192
/* 80333484 003303C4  4C C6 31 82 */	crclr 6
/* 80333488 003303C8  4B CF 71 B9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8033348C:
/* 8033348C 003303CC  4B D7 DC 11 */	bl getArchivePointer__Q27JAInter11SequenceMgrFv
/* 80333490 003303D0  80 9D 00 14 */	lwz r4, 0x14(r29)
/* 80333494 003303D4  4B CE 79 49 */	bl findNameResource__10JKRArchiveCFPCc
/* 80333498 003303D8  7C 7F 1B 79 */	or. r31, r3, r3
/* 8033349C 003303DC  40 82 00 1C */	bne .L_803334B8
/* 803334A0 003303E0  80 DD 00 14 */	lwz r6, 0x14(r29)
/* 803334A4 003303E4  38 7E 00 00 */	addi r3, r30, 0
/* 803334A8 003303E8  38 BE 00 8C */	addi r5, r30, 0x8c
/* 803334AC 003303EC  38 80 01 94 */	li r4, 0x194
/* 803334B0 003303F0  4C C6 31 82 */	crclr 6
/* 803334B4 003303F4  4B CF 71 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803334B8:
/* 803334B8 003303F8  7F A3 EB 78 */	mr r3, r29
/* 803334BC 003303FC  A3 FF 00 00 */	lhz r31, 0(r31)
/* 803334C0 00330400  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 803334C4 00330404  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 803334C8 00330408  7D 89 03 A6 */	mtctr r12
/* 803334CC 0033040C  4E 80 04 21 */	bctrl 
/* 803334D0 00330410  7F FF 1B 78 */	or r31, r31, r3
/* 803334D4 00330414  7F A3 EB 78 */	mr r3, r29
/* 803334D8 00330418  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 803334DC 0033041C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803334E0 00330420  7D 89 03 A6 */	mtctr r12
/* 803334E4 00330424  4E 80 04 21 */	bctrl 
/* 803334E8 00330428  7F E5 FB 78 */	mr r5, r31
/* 803334EC 0033042C  39 1D 00 18 */	addi r8, r29, 0x18
/* 803334F0 00330430  38 80 00 00 */	li r4, 0
/* 803334F4 00330434  38 C0 00 00 */	li r6, 0
/* 803334F8 00330438  38 E0 00 00 */	li r7, 0
/* 803334FC 0033043C  4B D7 F9 9D */	bl storeSeqBuffer__Q27JAInter11SequenceMgrFPP11JAISequencePQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
/* 80333500 00330440  7F A3 EB 78 */	mr r3, r29
/* 80333504 00330444  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 80333508 00330448  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8033350C 0033044C  7D 89 03 A6 */	mtctr r12
/* 80333510 00330450  4E 80 04 21 */	bctrl 
/* 80333514 00330454  7C 7F 1B 79 */	or. r31, r3, r3
/* 80333518 00330458  40 82 00 18 */	bne .L_80333530
/* 8033351C 0033045C  38 7E 00 00 */	addi r3, r30, 0
/* 80333520 00330460  38 BE 00 0C */	addi r5, r30, 0xc
/* 80333524 00330464  38 80 02 16 */	li r4, 0x216
/* 80333528 00330468  4C C6 31 82 */	crclr 6
/* 8033352C 0033046C  4B CF 71 15 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80333530:
/* 80333530 00330470  83 FF 00 00 */	lwz r31, 0(r31)
/* 80333534 00330474  28 1F 00 00 */	cmplwi r31, 0
/* 80333538 00330478  40 82 00 18 */	bne .L_80333550
/* 8033353C 0033047C  38 7E 00 00 */	addi r3, r30, 0
/* 80333540 00330480  38 BE 00 9C */	addi r5, r30, 0x9c
/* 80333544 00330484  38 80 02 1A */	li r4, 0x21a
/* 80333548 00330488  4C C6 31 82 */	crclr 6
/* 8033354C 0033048C  4B CF 70 F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80333550:
/* 80333550 00330490  93 BF 06 A4 */	stw r29, 0x6a4(r31)
/* 80333554 00330494  7F A3 EB 78 */	mr r3, r29
/* 80333558 00330498  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 8033355C 0033049C  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80333560 003304A0  7D 89 03 A6 */	mtctr r12
/* 80333564 003304A4  4E 80 04 21 */	bctrl 
/* 80333568 003304A8  38 1F 03 0C */	addi r0, r31, 0x30c
/* 8033356C 003304AC  38 7D 00 50 */	addi r3, r29, 0x50
/* 80333570 003304B0  90 1D 00 4C */	stw r0, 0x4c(r29)
/* 80333574 003304B4  4B DB C6 D1 */	bl OSUnlockMutex
/* 80333578 003304B8  3B DD 00 F0 */	addi r30, r29, 0xf0
/* 8033357C 003304BC  7F C3 F3 78 */	mr r3, r30
/* 80333580 003304C0  4B DB C5 E9 */	bl OSLockMutex
/* 80333584 003304C4  38 00 00 00 */	li r0, 0
/* 80333588 003304C8  7F C3 F3 78 */	mr r3, r30
/* 8033358C 003304CC  B0 1D 01 08 */	sth r0, 0x108(r29)
/* 80333590 003304D0  4B DB C6 B5 */	bl OSUnlockMutex
/* 80333594 003304D4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80333598 003304D8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8033359C 003304DC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803335A0 003304E0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803335A4 003304E4  7C 08 03 A6 */	mtlr r0
/* 803335A8 003304E8  38 21 00 20 */	addi r1, r1, 0x20
/* 803335AC 003304EC  4E 80 00 20 */	blr 
.endfn startSeq__Q28PSSystem10JumpBgmSeqFv

.fn startSeq__Q28PSSystem10JumpBgmSeqFUs, global
/* 803335B0 003304F0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803335B4 003304F4  7C 08 02 A6 */	mflr r0
/* 803335B8 003304F8  90 01 00 24 */	stw r0, 0x24(r1)
/* 803335BC 003304FC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803335C0 00330500  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803335C4 00330504  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803335C8 00330508  7C 9D 23 78 */	mr r29, r4
/* 803335CC 0033050C  93 81 00 10 */	stw r28, 0x10(r1)
/* 803335D0 00330510  7C 7C 1B 78 */	mr r28, r3
/* 803335D4 00330514  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 803335D8 00330518  3B C3 F8 48 */	addi r30, r3, lbl_8048F848@l
/* 803335DC 0033051C  38 7C 00 50 */	addi r3, r28, 0x50
/* 803335E0 00330520  4B DB C5 89 */	bl OSLockMutex
/* 803335E4 00330524  4B D7 DA B9 */	bl getArchivePointer__Q27JAInter11SequenceMgrFv
/* 803335E8 00330528  28 03 00 00 */	cmplwi r3, 0
/* 803335EC 0033052C  40 82 00 18 */	bne .L_80333604
/* 803335F0 00330530  38 7E 00 00 */	addi r3, r30, 0
/* 803335F4 00330534  38 BE 00 0C */	addi r5, r30, 0xc
/* 803335F8 00330538  38 80 01 92 */	li r4, 0x192
/* 803335FC 0033053C  4C C6 31 82 */	crclr 6
/* 80333600 00330540  4B CF 70 41 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80333604:
/* 80333604 00330544  4B D7 DA 99 */	bl getArchivePointer__Q27JAInter11SequenceMgrFv
/* 80333608 00330548  80 9C 00 14 */	lwz r4, 0x14(r28)
/* 8033360C 0033054C  4B CE 77 D1 */	bl findNameResource__10JKRArchiveCFPCc
/* 80333610 00330550  7C 7F 1B 79 */	or. r31, r3, r3
/* 80333614 00330554  40 82 00 1C */	bne .L_80333630
/* 80333618 00330558  80 DC 00 14 */	lwz r6, 0x14(r28)
/* 8033361C 0033055C  38 7E 00 00 */	addi r3, r30, 0
/* 80333620 00330560  38 BE 00 8C */	addi r5, r30, 0x8c
/* 80333624 00330564  38 80 01 94 */	li r4, 0x194
/* 80333628 00330568  4C C6 31 82 */	crclr 6
/* 8033362C 0033056C  4B CF 70 15 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80333630:
/* 80333630 00330570  7F 83 E3 78 */	mr r3, r28
/* 80333634 00330574  A3 FF 00 00 */	lhz r31, 0(r31)
/* 80333638 00330578  81 9C 00 10 */	lwz r12, 0x10(r28)
/* 8033363C 0033057C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80333640 00330580  7D 89 03 A6 */	mtctr r12
/* 80333644 00330584  4E 80 04 21 */	bctrl 
/* 80333648 00330588  7F FF 1B 78 */	or r31, r31, r3
/* 8033364C 0033058C  7F 83 E3 78 */	mr r3, r28
/* 80333650 00330590  81 9C 00 10 */	lwz r12, 0x10(r28)
/* 80333654 00330594  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80333658 00330598  7D 89 03 A6 */	mtctr r12
/* 8033365C 0033059C  4E 80 04 21 */	bctrl 
/* 80333660 003305A0  7F E5 FB 78 */	mr r5, r31
/* 80333664 003305A4  39 1C 00 18 */	addi r8, r28, 0x18
/* 80333668 003305A8  38 80 00 00 */	li r4, 0
/* 8033366C 003305AC  38 C0 00 00 */	li r6, 0
/* 80333670 003305B0  38 E0 00 00 */	li r7, 0
/* 80333674 003305B4  4B D7 F8 25 */	bl storeSeqBuffer__Q27JAInter11SequenceMgrFPP11JAISequencePQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
/* 80333678 003305B8  7F 83 E3 78 */	mr r3, r28
/* 8033367C 003305BC  81 9C 00 10 */	lwz r12, 0x10(r28)
/* 80333680 003305C0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80333684 003305C4  7D 89 03 A6 */	mtctr r12
/* 80333688 003305C8  4E 80 04 21 */	bctrl 
/* 8033368C 003305CC  7C 7F 1B 79 */	or. r31, r3, r3
/* 80333690 003305D0  40 82 00 18 */	bne .L_803336A8
/* 80333694 003305D4  38 7E 00 00 */	addi r3, r30, 0
/* 80333698 003305D8  38 BE 00 0C */	addi r5, r30, 0xc
/* 8033369C 003305DC  38 80 02 16 */	li r4, 0x216
/* 803336A0 003305E0  4C C6 31 82 */	crclr 6
/* 803336A4 003305E4  4B CF 6F 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803336A8:
/* 803336A8 003305E8  83 FF 00 00 */	lwz r31, 0(r31)
/* 803336AC 003305EC  28 1F 00 00 */	cmplwi r31, 0
/* 803336B0 003305F0  40 82 00 18 */	bne .L_803336C8
/* 803336B4 003305F4  38 7E 00 00 */	addi r3, r30, 0
/* 803336B8 003305F8  38 BE 00 9C */	addi r5, r30, 0x9c
/* 803336BC 003305FC  38 80 02 1A */	li r4, 0x21a
/* 803336C0 00330600  4C C6 31 82 */	crclr 6
/* 803336C4 00330604  4B CF 6F 7D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803336C8:
/* 803336C8 00330608  93 9F 06 A4 */	stw r28, 0x6a4(r31)
/* 803336CC 0033060C  7F 83 E3 78 */	mr r3, r28
/* 803336D0 00330610  81 9C 00 10 */	lwz r12, 0x10(r28)
/* 803336D4 00330614  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 803336D8 00330618  7D 89 03 A6 */	mtctr r12
/* 803336DC 0033061C  4E 80 04 21 */	bctrl 
/* 803336E0 00330620  38 1F 03 0C */	addi r0, r31, 0x30c
/* 803336E4 00330624  38 7C 00 50 */	addi r3, r28, 0x50
/* 803336E8 00330628  90 1C 00 4C */	stw r0, 0x4c(r28)
/* 803336EC 0033062C  4B DB C5 59 */	bl OSUnlockMutex
/* 803336F0 00330630  3B DC 00 F0 */	addi r30, r28, 0xf0
/* 803336F4 00330634  7F C3 F3 78 */	mr r3, r30
/* 803336F8 00330638  4B DB C4 71 */	bl OSLockMutex
/* 803336FC 0033063C  B3 BC 01 08 */	sth r29, 0x108(r28)
/* 80333700 00330640  7F C3 F3 78 */	mr r3, r30
/* 80333704 00330644  4B DB C5 41 */	bl OSUnlockMutex
/* 80333708 00330648  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8033370C 0033064C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80333710 00330650  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80333714 00330654  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80333718 00330658  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8033371C 0033065C  7C 08 03 A6 */	mtlr r0
/* 80333720 00330660  38 21 00 20 */	addi r1, r1, 0x20
/* 80333724 00330664  4E 80 00 20 */	blr 
.endfn startSeq__Q28PSSystem10JumpBgmSeqFUs

.fn requestJumpBgmQuickly__Q28PSSystem10JumpBgmSeqFUs, global
/* 80333728 00330668  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8033372C 0033066C  7C 08 02 A6 */	mflr r0
/* 80333730 00330670  90 01 00 24 */	stw r0, 0x24(r1)
/* 80333734 00330674  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80333738 00330678  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8033373C 0033067C  7C 9E 23 78 */	mr r30, r4
/* 80333740 00330680  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80333744 00330684  7C 7D 1B 78 */	mr r29, r3
/* 80333748 00330688  80 03 01 2C */	lwz r0, 0x12c(r3)
/* 8033374C 0033068C  28 00 00 00 */	cmplwi r0, 0
/* 80333750 00330690  40 82 00 1C */	bne .L_8033376C
/* 80333754 00330694  3B FD 01 0C */	addi r31, r29, 0x10c
/* 80333758 00330698  7F E3 FB 78 */	mr r3, r31
/* 8033375C 0033069C  4B DB C4 0D */	bl OSLockMutex
/* 80333760 003306A0  B3 DD 01 24 */	sth r30, 0x124(r29)
/* 80333764 003306A4  7F E3 FB 78 */	mr r3, r31
/* 80333768 003306A8  4B DB C4 DD */	bl OSUnlockMutex
.L_8033376C:
/* 8033376C 003306AC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80333770 003306B0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80333774 003306B4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80333778 003306B8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8033377C 003306BC  7C 08 03 A6 */	mtlr r0
/* 80333780 003306C0  38 21 00 20 */	addi r1, r1, 0x20
/* 80333784 003306C4  4E 80 00 20 */	blr 
.endfn requestJumpBgmQuickly__Q28PSSystem10JumpBgmSeqFUs

.fn requestJumpBgmOnBeat__Q28PSSystem10JumpBgmSeqFUs, global
/* 80333788 003306C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8033378C 003306CC  7C 08 02 A6 */	mflr r0
/* 80333790 003306D0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80333794 003306D4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80333798 003306D8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8033379C 003306DC  7C 9E 23 78 */	mr r30, r4
/* 803337A0 003306E0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803337A4 003306E4  7C 7D 1B 78 */	mr r29, r3
/* 803337A8 003306E8  80 03 01 2C */	lwz r0, 0x12c(r3)
/* 803337AC 003306EC  28 00 00 00 */	cmplwi r0, 0
/* 803337B0 003306F0  40 82 00 1C */	bne .L_803337CC
/* 803337B4 003306F4  3B FD 00 D4 */	addi r31, r29, 0xd4
/* 803337B8 003306F8  7F E3 FB 78 */	mr r3, r31
/* 803337BC 003306FC  4B DB C3 AD */	bl OSLockMutex
/* 803337C0 00330700  B3 DD 00 EC */	sth r30, 0xec(r29)
/* 803337C4 00330704  7F E3 FB 78 */	mr r3, r31
/* 803337C8 00330708  4B DB C4 7D */	bl OSUnlockMutex
.L_803337CC:
/* 803337CC 0033070C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803337D0 00330710  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803337D4 00330714  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803337D8 00330718  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803337DC 0033071C  7C 08 03 A6 */	mtlr r0
/* 803337E0 00330720  38 21 00 20 */	addi r1, r1, 0x20
/* 803337E4 00330724  4E 80 00 20 */	blr 
.endfn requestJumpBgmOnBeat__Q28PSSystem10JumpBgmSeqFUs

.fn requestJumpBgmEveryBeat__Q28PSSystem10JumpBgmSeqFUs, global
/* 803337E8 00330728  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803337EC 0033072C  7C 08 02 A6 */	mflr r0
/* 803337F0 00330730  90 01 00 14 */	stw r0, 0x14(r1)
/* 803337F4 00330734  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803337F8 00330738  7C 9F 23 78 */	mr r31, r4
/* 803337FC 0033073C  93 C1 00 08 */	stw r30, 8(r1)
/* 80333800 00330740  7C 7E 1B 78 */	mr r30, r3
/* 80333804 00330744  80 03 01 2C */	lwz r0, 0x12c(r3)
/* 80333808 00330748  28 00 00 00 */	cmplwi r0, 0
/* 8033380C 0033074C  40 82 00 18 */	bne .L_80333824
/* 80333810 00330750  38 7E 00 B8 */	addi r3, r30, 0xb8
/* 80333814 00330754  4B DB C3 55 */	bl OSLockMutex
/* 80333818 00330758  B3 FE 00 D0 */	sth r31, 0xd0(r30)
/* 8033381C 0033075C  38 7E 00 B8 */	addi r3, r30, 0xb8
/* 80333820 00330760  4B DB C4 25 */	bl OSUnlockMutex
.L_80333824:
/* 80333824 00330764  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80333828 00330768  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033382C 0033076C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80333830 00330770  7C 08 03 A6 */	mtlr r0
/* 80333834 00330774  38 21 00 10 */	addi r1, r1, 0x10
/* 80333838 00330778  4E 80 00 20 */	blr 
.endfn requestJumpBgmEveryBeat__Q28PSSystem10JumpBgmSeqFUs

.fn onPlayingFrame__Q28PSSystem10JumpBgmSeqFv, global
/* 8033383C 0033077C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80333840 00330780  7C 08 02 A6 */	mflr r0
/* 80333844 00330784  90 01 00 14 */	stw r0, 0x14(r1)
/* 80333848 00330788  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033384C 0033078C  7C 7F 1B 78 */	mr r31, r3
/* 80333850 00330790  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 80333854 00330794  28 03 00 00 */	cmplwi r3, 0
/* 80333858 00330798  41 82 00 08 */	beq .L_80333860
/* 8033385C 0033079C  48 01 03 05 */	bl exec__Q28PSSystem15DirectorMgrBaseFv
.L_80333860:
/* 80333860 003307A0  80 7F 01 2C */	lwz r3, 0x12c(r31)
/* 80333864 003307A4  28 03 00 00 */	cmplwi r3, 0
/* 80333868 003307A8  41 82 00 0C */	beq .L_80333874
/* 8033386C 003307AC  38 03 FF FF */	addi r0, r3, -1
/* 80333870 003307B0  90 1F 01 2C */	stw r0, 0x12c(r31)
.L_80333874:
/* 80333874 003307B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80333878 003307B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033387C 003307BC  7C 08 03 A6 */	mtlr r0
/* 80333880 003307C0  38 21 00 10 */	addi r1, r1, 0x10
/* 80333884 003307C4  4E 80 00 20 */	blr 
.endfn onPlayingFrame__Q28PSSystem10JumpBgmSeqFv

.fn outputJumpRequest__Q28PSSystem10JumpBgmSeqFv, global
/* 80333888 003307C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8033388C 003307CC  7C 08 02 A6 */	mflr r0
/* 80333890 003307D0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80333894 003307D4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80333898 003307D8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8033389C 003307DC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803338A0 003307E0  7C 7D 1B 78 */	mr r29, r3
/* 803338A4 003307E4  A3 E3 01 24 */	lhz r31, 0x124(r3)
/* 803338A8 003307E8  28 1F FF FF */	cmplwi r31, 0xffff
/* 803338AC 003307EC  41 82 00 78 */	beq .L_80333924
/* 803338B0 003307F0  3B DD 01 0C */	addi r30, r29, 0x10c
/* 803338B4 003307F4  7F C3 F3 78 */	mr r3, r30
/* 803338B8 003307F8  4B DB C2 B1 */	bl OSLockMutex
/* 803338BC 003307FC  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 803338C0 00330800  7F C3 F3 78 */	mr r3, r30
/* 803338C4 00330804  38 04 FF FF */	addi r0, r4, 0x0000FFFF@l
/* 803338C8 00330808  B0 1D 01 24 */	sth r0, 0x124(r29)
/* 803338CC 0033080C  4B DB C3 79 */	bl OSUnlockMutex
/* 803338D0 00330810  3B DD 00 F0 */	addi r30, r29, 0xf0
/* 803338D4 00330814  7F C3 F3 78 */	mr r3, r30
/* 803338D8 00330818  4B DB C2 91 */	bl OSLockMutex
/* 803338DC 0033081C  B3 FD 01 08 */	sth r31, 0x108(r29)
/* 803338E0 00330820  7F C3 F3 78 */	mr r3, r30
/* 803338E4 00330824  4B DB C3 61 */	bl OSUnlockMutex
/* 803338E8 00330828  80 1D 01 28 */	lwz r0, 0x128(r29)
/* 803338EC 0033082C  28 00 00 00 */	cmplwi r0, 0
/* 803338F0 00330830  40 82 00 20 */	bne .L_80333910
/* 803338F4 00330834  3C 60 80 49 */	lis r3, lbl_8048F848@ha
/* 803338F8 00330838  3C A0 80 49 */	lis r5, lbl_8048F854@ha
/* 803338FC 0033083C  38 63 F8 48 */	addi r3, r3, lbl_8048F848@l
/* 80333900 00330840  38 80 04 95 */	li r4, 0x495
/* 80333904 00330844  38 A5 F8 54 */	addi r5, r5, lbl_8048F854@l
/* 80333908 00330848  4C C6 31 82 */	crclr 6
/* 8033390C 0033084C  4B CF 6D 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80333910:
/* 80333910 00330850  80 9D 01 28 */	lwz r4, 0x128(r29)
/* 80333914 00330854  80 64 00 6C */	lwz r3, 0x6c(r4)
/* 80333918 00330858  28 03 00 00 */	cmplwi r3, 0
/* 8033391C 0033085C  41 82 00 08 */	beq .L_80333924
/* 80333920 00330860  48 01 02 A9 */	bl off__Q28PSSystem15DirectorMgrBaseFPQ28PSSystem11DirectedBgm
.L_80333924:
/* 80333924 00330864  28 1F FF FF */	cmplwi r31, 0xffff
/* 80333928 00330868  41 82 00 08 */	beq .L_80333930
/* 8033392C 0033086C  B3 FD 01 30 */	sth r31, 0x130(r29)
.L_80333930:
/* 80333930 00330870  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80333934 00330874  7F E3 FB 78 */	mr r3, r31
/* 80333938 00330878  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8033393C 0033087C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80333940 00330880  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80333944 00330884  7C 08 03 A6 */	mtlr r0
/* 80333948 00330888  38 21 00 20 */	addi r1, r1, 0x20
/* 8033394C 0033088C  4E 80 00 20 */	blr 
.endfn outputJumpRequest__Q28PSSystem10JumpBgmSeqFv

.fn getSeqStartPoint__Q28PSSystem10JumpBgmSeqFv, global
/* 80333950 00330890  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80333954 00330894  7C 08 02 A6 */	mflr r0
/* 80333958 00330898  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033395C 0033089C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80333960 003308A0  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80333964 003308A4  A3 E3 01 08 */	lhz r31, 0x108(r3)
/* 80333968 003308A8  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 8033396C 003308AC  7F E4 FB 78 */	mr r4, r31
/* 80333970 003308B0  7D 89 03 A6 */	mtctr r12
/* 80333974 003308B4  4E 80 04 21 */	bctrl 
/* 80333978 003308B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033397C 003308BC  7F E3 FB 78 */	mr r3, r31
/* 80333980 003308C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80333984 003308C4  7C 08 03 A6 */	mtlr r0
/* 80333988 003308C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8033398C 003308CC  4E 80 00 20 */	blr 
.endfn getSeqStartPoint__Q28PSSystem10JumpBgmSeqFv

.fn setAvoidJumpTimer_Checked__Q28PSSystem10JumpBgmSeqFUl, global
/* 80333990 003308D0  80 03 01 2C */	lwz r0, 0x12c(r3)
/* 80333994 003308D4  28 00 00 00 */	cmplwi r0, 0
/* 80333998 003308D8  4C 82 00 20 */	bnelr 
/* 8033399C 003308DC  90 83 01 2C */	stw r4, 0x12c(r3)
/* 803339A0 003308E0  4E 80 00 20 */	blr 
.endfn setAvoidJumpTimer_Checked__Q28PSSystem10JumpBgmSeqFUl

.fn isPlaying__Q28PSSystem6SeqMgrFv, global
/* 803339A4 003308E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803339A8 003308E8  7C 08 02 A6 */	mflr r0
/* 803339AC 003308EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803339B0 003308F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803339B4 003308F4  83 E3 00 00 */	lwz r31, 0(r3)
/* 803339B8 003308F8  48 00 00 2C */	b .L_803339E4
.L_803339BC:
/* 803339BC 003308FC  80 7F 00 00 */	lwz r3, 0(r31)
/* 803339C0 00330900  81 83 00 10 */	lwz r12, 0x10(r3)
/* 803339C4 00330904  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 803339C8 00330908  7D 89 03 A6 */	mtctr r12
/* 803339CC 0033090C  4E 80 04 21 */	bctrl 
/* 803339D0 00330910  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803339D4 00330914  41 82 00 0C */	beq .L_803339E0
/* 803339D8 00330918  38 60 00 01 */	li r3, 1
/* 803339DC 0033091C  48 00 00 14 */	b .L_803339F0
.L_803339E0:
/* 803339E0 00330920  83 FF 00 0C */	lwz r31, 0xc(r31)
.L_803339E4:
/* 803339E4 00330924  28 1F 00 00 */	cmplwi r31, 0
/* 803339E8 00330928  40 82 FF D4 */	bne .L_803339BC
/* 803339EC 0033092C  38 60 00 00 */	li r3, 0
.L_803339F0:
/* 803339F0 00330930  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803339F4 00330934  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803339F8 00330938  7C 08 03 A6 */	mtlr r0
/* 803339FC 0033093C  38 21 00 10 */	addi r1, r1, 0x10
/* 80333A00 00330940  4E 80 00 20 */	blr 
.endfn isPlaying__Q28PSSystem6SeqMgrFv

.fn __dt__Q28PSSystem6SeqMgrFv, global
/* 80333A04 00330944  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80333A08 00330948  7C 08 02 A6 */	mflr r0
/* 80333A0C 0033094C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80333A10 00330950  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80333A14 00330954  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80333A18 00330958  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80333A1C 0033095C  7C 9D 23 78 */	mr r29, r4
/* 80333A20 00330960  93 81 00 10 */	stw r28, 0x10(r1)
/* 80333A24 00330964  7C 7C 1B 79 */	or. r28, r3, r3
/* 80333A28 00330968  41 82 00 80 */	beq .L_80333AA8
/* 80333A2C 0033096C  3C 60 80 4E */	lis r3, __vt__Q28PSSystem6SeqMgr@ha
/* 80333A30 00330970  38 03 A4 80 */	addi r0, r3, __vt__Q28PSSystem6SeqMgr@l
/* 80333A34 00330974  90 1C 00 0C */	stw r0, 0xc(r28)
/* 80333A38 00330978  4B DB B2 01 */	bl OSDisableInterrupts
/* 80333A3C 0033097C  83 DC 00 00 */	lwz r30, 0(r28)
/* 80333A40 00330980  48 00 00 38 */	b .L_80333A78
.L_80333A44:
/* 80333A44 00330984  83 FE 00 0C */	lwz r31, 0xc(r30)
/* 80333A48 00330988  7F 83 E3 78 */	mr r3, r28
/* 80333A4C 0033098C  7F C4 F3 78 */	mr r4, r30
/* 80333A50 00330990  4B CF 31 D5 */	bl remove__10JSUPtrListFP10JSUPtrLink
/* 80333A54 00330994  80 7E 00 00 */	lwz r3, 0(r30)
/* 80333A58 00330998  28 03 00 00 */	cmplwi r3, 0
/* 80333A5C 0033099C  41 82 00 18 */	beq .L_80333A74
/* 80333A60 003309A0  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80333A64 003309A4  38 80 00 01 */	li r4, 1
/* 80333A68 003309A8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80333A6C 003309AC  7D 89 03 A6 */	mtctr r12
/* 80333A70 003309B0  4E 80 04 21 */	bctrl 
.L_80333A74:
/* 80333A74 003309B4  7F FE FB 78 */	mr r30, r31
.L_80333A78:
/* 80333A78 003309B8  28 1E 00 00 */	cmplwi r30, 0
/* 80333A7C 003309BC  40 82 FF C8 */	bne .L_80333A44
/* 80333A80 003309C0  4B DB B1 CD */	bl OSEnableInterrupts
/* 80333A84 003309C4  28 1C 00 00 */	cmplwi r28, 0
/* 80333A88 003309C8  41 82 00 10 */	beq .L_80333A98
/* 80333A8C 003309CC  7F 83 E3 78 */	mr r3, r28
/* 80333A90 003309D0  38 80 00 00 */	li r4, 0
/* 80333A94 003309D4  4B CF 2D D5 */	bl __dt__10JSUPtrListFv
.L_80333A98:
/* 80333A98 003309D8  7F A0 07 35 */	extsh. r0, r29
/* 80333A9C 003309DC  40 81 00 0C */	ble .L_80333AA8
/* 80333AA0 003309E0  7F 83 E3 78 */	mr r3, r28
/* 80333AA4 003309E4  4B CF 06 11 */	bl __dl__FPv
.L_80333AA8:
/* 80333AA8 003309E8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80333AAC 003309EC  7F 83 E3 78 */	mr r3, r28
/* 80333AB0 003309F0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80333AB4 003309F4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80333AB8 003309F8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80333ABC 003309FC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80333AC0 00330A00  7C 08 03 A6 */	mtlr r0
/* 80333AC4 00330A04  38 21 00 20 */	addi r1, r1, 0x20
/* 80333AC8 00330A08  4E 80 00 20 */	blr 
.endfn __dt__Q28PSSystem6SeqMgrFv

.fn pauseOnAllSeq__Q28PSSystem6SeqMgrFQ38PSSystem7SeqBase9PauseMode, global
/* 80333ACC 00330A0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80333AD0 00330A10  7C 08 02 A6 */	mflr r0
/* 80333AD4 00330A14  90 01 00 14 */	stw r0, 0x14(r1)
/* 80333AD8 00330A18  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80333ADC 00330A1C  93 C1 00 08 */	stw r30, 8(r1)
/* 80333AE0 00330A20  7C 9E 23 78 */	mr r30, r4
/* 80333AE4 00330A24  83 E3 00 00 */	lwz r31, 0(r3)
/* 80333AE8 00330A28  48 00 00 20 */	b .L_80333B08
.L_80333AEC:
/* 80333AEC 00330A2C  80 7F 00 00 */	lwz r3, 0(r31)
/* 80333AF0 00330A30  7F C4 F3 78 */	mr r4, r30
/* 80333AF4 00330A34  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80333AF8 00330A38  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80333AFC 00330A3C  7D 89 03 A6 */	mtctr r12
/* 80333B00 00330A40  4E 80 04 21 */	bctrl 
/* 80333B04 00330A44  83 FF 00 0C */	lwz r31, 0xc(r31)
.L_80333B08:
/* 80333B08 00330A48  28 1F 00 00 */	cmplwi r31, 0
/* 80333B0C 00330A4C  40 82 FF E0 */	bne .L_80333AEC
/* 80333B10 00330A50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80333B14 00330A54  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80333B18 00330A58  83 C1 00 08 */	lwz r30, 8(r1)
/* 80333B1C 00330A5C  7C 08 03 A6 */	mtlr r0
/* 80333B20 00330A60  38 21 00 10 */	addi r1, r1, 0x10
/* 80333B24 00330A64  4E 80 00 20 */	blr 
.endfn pauseOnAllSeq__Q28PSSystem6SeqMgrFQ38PSSystem7SeqBase9PauseMode

.fn pauseOffAllSeq__Q28PSSystem6SeqMgrFv, global
/* 80333B28 00330A68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80333B2C 00330A6C  7C 08 02 A6 */	mflr r0
/* 80333B30 00330A70  90 01 00 14 */	stw r0, 0x14(r1)
/* 80333B34 00330A74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80333B38 00330A78  83 E3 00 00 */	lwz r31, 0(r3)
/* 80333B3C 00330A7C  48 00 00 1C */	b .L_80333B58
.L_80333B40:
/* 80333B40 00330A80  80 7F 00 00 */	lwz r3, 0(r31)
/* 80333B44 00330A84  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80333B48 00330A88  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80333B4C 00330A8C  7D 89 03 A6 */	mtctr r12
/* 80333B50 00330A90  4E 80 04 21 */	bctrl 
/* 80333B54 00330A94  83 FF 00 0C */	lwz r31, 0xc(r31)
.L_80333B58:
/* 80333B58 00330A98  28 1F 00 00 */	cmplwi r31, 0
/* 80333B5C 00330A9C  40 82 FF E4 */	bne .L_80333B40
/* 80333B60 00330AA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80333B64 00330AA4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80333B68 00330AA8  7C 08 03 A6 */	mtlr r0
/* 80333B6C 00330AAC  38 21 00 10 */	addi r1, r1, 0x10
/* 80333B70 00330AB0  4E 80 00 20 */	blr 
.endfn pauseOffAllSeq__Q28PSSystem6SeqMgrFv

.fn reservePauseOffAllSeq__Q28PSSystem6SeqMgrFv, global
/* 80333B74 00330AB4  80 83 00 00 */	lwz r4, 0(r3)
/* 80333B78 00330AB8  38 00 00 01 */	li r0, 1
/* 80333B7C 00330ABC  48 00 00 10 */	b .L_80333B8C
.L_80333B80:
/* 80333B80 00330AC0  80 64 00 00 */	lwz r3, 0(r4)
/* 80333B84 00330AC4  B0 03 00 3C */	sth r0, 0x3c(r3)
/* 80333B88 00330AC8  80 84 00 0C */	lwz r4, 0xc(r4)
.L_80333B8C:
/* 80333B8C 00330ACC  28 04 00 00 */	cmplwi r4, 0
/* 80333B90 00330AD0  40 82 FF F0 */	bne .L_80333B80
/* 80333B94 00330AD4  4E 80 00 20 */	blr 
.endfn reservePauseOffAllSeq__Q28PSSystem6SeqMgrFv

.fn cancelPauseOffAllSeq__Q28PSSystem6SeqMgrFv, global
/* 80333B98 00330AD8  80 83 00 00 */	lwz r4, 0(r3)
/* 80333B9C 00330ADC  38 00 00 00 */	li r0, 0
/* 80333BA0 00330AE0  48 00 00 10 */	b .L_80333BB0
.L_80333BA4:
/* 80333BA4 00330AE4  80 64 00 00 */	lwz r3, 0(r4)
/* 80333BA8 00330AE8  B0 03 00 3C */	sth r0, 0x3c(r3)
/* 80333BAC 00330AEC  80 84 00 0C */	lwz r4, 0xc(r4)
.L_80333BB0:
/* 80333BB0 00330AF0  28 04 00 00 */	cmplwi r4, 0
/* 80333BB4 00330AF4  40 82 FF F0 */	bne .L_80333BA4
/* 80333BB8 00330AF8  4E 80 00 20 */	blr 
.endfn cancelPauseOffAllSeq__Q28PSSystem6SeqMgrFv

.fn exec__Q28PSSystem6SeqMgrFv, global
/* 80333BBC 00330AFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80333BC0 00330B00  7C 08 02 A6 */	mflr r0
/* 80333BC4 00330B04  90 01 00 14 */	stw r0, 0x14(r1)
/* 80333BC8 00330B08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80333BCC 00330B0C  83 E3 00 00 */	lwz r31, 0(r3)
/* 80333BD0 00330B10  48 00 00 50 */	b .L_80333C20
.L_80333BD4:
/* 80333BD4 00330B14  80 7F 00 00 */	lwz r3, 0(r31)
/* 80333BD8 00330B18  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80333BDC 00330B1C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80333BE0 00330B20  7D 89 03 A6 */	mtctr r12
/* 80333BE4 00330B24  4E 80 04 21 */	bctrl 
/* 80333BE8 00330B28  80 7F 00 00 */	lwz r3, 0(r31)
/* 80333BEC 00330B2C  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80333BF0 00330B30  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80333BF4 00330B34  7D 89 03 A6 */	mtctr r12
/* 80333BF8 00330B38  4E 80 04 21 */	bctrl 
/* 80333BFC 00330B3C  80 03 00 00 */	lwz r0, 0(r3)
/* 80333C00 00330B40  28 00 00 00 */	cmplwi r0, 0
/* 80333C04 00330B44  41 82 00 18 */	beq .L_80333C1C
/* 80333C08 00330B48  80 7F 00 00 */	lwz r3, 0(r31)
/* 80333C0C 00330B4C  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80333C10 00330B50  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80333C14 00330B54  7D 89 03 A6 */	mtctr r12
/* 80333C18 00330B58  4E 80 04 21 */	bctrl 
.L_80333C1C:
/* 80333C1C 00330B5C  83 FF 00 0C */	lwz r31, 0xc(r31)
.L_80333C20:
/* 80333C20 00330B60  28 1F 00 00 */	cmplwi r31, 0
/* 80333C24 00330B64  40 82 FF B0 */	bne .L_80333BD4
/* 80333C28 00330B68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80333C2C 00330B6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80333C30 00330B70  7C 08 03 A6 */	mtlr r0
/* 80333C34 00330B74  38 21 00 10 */	addi r1, r1, 0x10
/* 80333C38 00330B78  4E 80 00 20 */	blr 
.endfn exec__Q28PSSystem6SeqMgrFv

.fn stopAllSound__Q28PSSystem6SeqMgrFUl, global
/* 80333C3C 00330B7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80333C40 00330B80  7C 08 02 A6 */	mflr r0
/* 80333C44 00330B84  90 01 00 14 */	stw r0, 0x14(r1)
/* 80333C48 00330B88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80333C4C 00330B8C  93 C1 00 08 */	stw r30, 8(r1)
/* 80333C50 00330B90  7C 9E 23 78 */	mr r30, r4
/* 80333C54 00330B94  83 E3 00 00 */	lwz r31, 0(r3)
/* 80333C58 00330B98  48 00 00 20 */	b .L_80333C78
.L_80333C5C:
/* 80333C5C 00330B9C  80 7F 00 00 */	lwz r3, 0(r31)
/* 80333C60 00330BA0  7F C4 F3 78 */	mr r4, r30
/* 80333C64 00330BA4  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80333C68 00330BA8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80333C6C 00330BAC  7D 89 03 A6 */	mtctr r12
/* 80333C70 00330BB0  4E 80 04 21 */	bctrl 
/* 80333C74 00330BB4  83 FF 00 0C */	lwz r31, 0xc(r31)
.L_80333C78:
/* 80333C78 00330BB8  28 1F 00 00 */	cmplwi r31, 0
/* 80333C7C 00330BBC  40 82 FF E0 */	bne .L_80333C5C
/* 80333C80 00330BC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80333C84 00330BC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80333C88 00330BC8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80333C8C 00330BCC  7C 08 03 A6 */	mtlr r0
/* 80333C90 00330BD0  38 21 00 10 */	addi r1, r1, 0x10
/* 80333C94 00330BD4  4E 80 00 20 */	blr 
.endfn stopAllSound__Q28PSSystem6SeqMgrFUl

.fn scene1st__Q28PSSystem6SeqMgrFPQ28PSSystem11TaskChecker, global
/* 80333C98 00330BD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80333C9C 00330BDC  7C 08 02 A6 */	mflr r0
/* 80333CA0 00330BE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80333CA4 00330BE4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80333CA8 00330BE8  93 C1 00 08 */	stw r30, 8(r1)
/* 80333CAC 00330BEC  7C 9E 23 78 */	mr r30, r4
/* 80333CB0 00330BF0  83 E3 00 00 */	lwz r31, 0(r3)
/* 80333CB4 00330BF4  48 00 00 20 */	b .L_80333CD4
.L_80333CB8:
/* 80333CB8 00330BF8  80 7F 00 00 */	lwz r3, 0(r31)
/* 80333CBC 00330BFC  7F C4 F3 78 */	mr r4, r30
/* 80333CC0 00330C00  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80333CC4 00330C04  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80333CC8 00330C08  7D 89 03 A6 */	mtctr r12
/* 80333CCC 00330C0C  4E 80 04 21 */	bctrl 
/* 80333CD0 00330C10  83 FF 00 0C */	lwz r31, 0xc(r31)
.L_80333CD4:
/* 80333CD4 00330C14  28 1F 00 00 */	cmplwi r31, 0
/* 80333CD8 00330C18  40 82 FF E0 */	bne .L_80333CB8
/* 80333CDC 00330C1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80333CE0 00330C20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80333CE4 00330C24  83 C1 00 08 */	lwz r30, 8(r1)
/* 80333CE8 00330C28  7C 08 03 A6 */	mtlr r0
/* 80333CEC 00330C2C  38 21 00 10 */	addi r1, r1, 0x10
/* 80333CF0 00330C30  4E 80 00 20 */	blr 
.endfn scene1st__Q28PSSystem6SeqMgrFPQ28PSSystem11TaskChecker

.fn findSeq__Q28PSSystem6SeqMgrFP8JASTrack, global
/* 80333CF4 00330C34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80333CF8 00330C38  7C 08 02 A6 */	mflr r0
/* 80333CFC 00330C3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80333D00 00330C40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80333D04 00330C44  93 C1 00 08 */	stw r30, 8(r1)
/* 80333D08 00330C48  7C 9E 23 78 */	mr r30, r4
/* 80333D0C 00330C4C  83 E3 00 00 */	lwz r31, 0(r3)
/* 80333D10 00330C50  48 00 00 A8 */	b .L_80333DB8
.L_80333D14:
/* 80333D14 00330C54  80 7F 00 00 */	lwz r3, 0(r31)
/* 80333D18 00330C58  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80333D1C 00330C5C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80333D20 00330C60  7D 89 03 A6 */	mtctr r12
/* 80333D24 00330C64  4E 80 04 21 */	bctrl 
/* 80333D28 00330C68  28 03 00 01 */	cmplwi r3, 1
/* 80333D2C 00330C6C  41 82 00 88 */	beq .L_80333DB4
/* 80333D30 00330C70  80 7F 00 00 */	lwz r3, 0(r31)
/* 80333D34 00330C74  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80333D38 00330C78  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80333D3C 00330C7C  7D 89 03 A6 */	mtctr r12
/* 80333D40 00330C80  4E 80 04 21 */	bctrl 
/* 80333D44 00330C84  28 03 00 00 */	cmplwi r3, 0
/* 80333D48 00330C88  41 82 00 6C */	beq .L_80333DB4
/* 80333D4C 00330C8C  80 7F 00 00 */	lwz r3, 0(r31)
/* 80333D50 00330C90  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80333D54 00330C94  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80333D58 00330C98  7D 89 03 A6 */	mtctr r12
/* 80333D5C 00330C9C  4E 80 04 21 */	bctrl 
/* 80333D60 00330CA0  80 63 00 00 */	lwz r3, 0(r3)
/* 80333D64 00330CA4  28 03 00 00 */	cmplwi r3, 0
/* 80333D68 00330CA8  41 82 00 4C */	beq .L_80333DB4
/* 80333D6C 00330CAC  38 83 03 0C */	addi r4, r3, 0x30c
/* 80333D70 00330CB0  7C 04 F0 40 */	cmplw r4, r30
/* 80333D74 00330CB4  40 82 00 0C */	bne .L_80333D80
/* 80333D78 00330CB8  80 7F 00 00 */	lwz r3, 0(r31)
/* 80333D7C 00330CBC  48 00 00 48 */	b .L_80333DC4
.L_80333D80:
/* 80333D80 00330CC0  38 A0 00 00 */	li r5, 0
/* 80333D84 00330CC4  48 00 00 24 */	b .L_80333DA8
.L_80333D88:
/* 80333D88 00330CC8  54 A3 15 BA */	rlwinm r3, r5, 2, 0x16, 0x1d
/* 80333D8C 00330CCC  38 03 02 FC */	addi r0, r3, 0x2fc
/* 80333D90 00330CD0  7C 04 00 2E */	lwzx r0, r4, r0
/* 80333D94 00330CD4  7C 00 F0 40 */	cmplw r0, r30
/* 80333D98 00330CD8  40 82 00 0C */	bne .L_80333DA4
/* 80333D9C 00330CDC  80 7F 00 00 */	lwz r3, 0(r31)
/* 80333DA0 00330CE0  48 00 00 24 */	b .L_80333DC4
.L_80333DA4:
/* 80333DA4 00330CE4  38 A5 00 01 */	addi r5, r5, 1
.L_80333DA8:
/* 80333DA8 00330CE8  54 A0 06 3E */	clrlwi r0, r5, 0x18
/* 80333DAC 00330CEC  28 00 00 10 */	cmplwi r0, 0x10
/* 80333DB0 00330CF0  41 80 FF D8 */	blt .L_80333D88
.L_80333DB4:
/* 80333DB4 00330CF4  83 FF 00 0C */	lwz r31, 0xc(r31)
.L_80333DB8:
/* 80333DB8 00330CF8  28 1F 00 00 */	cmplwi r31, 0
/* 80333DBC 00330CFC  40 82 FF 58 */	bne .L_80333D14
/* 80333DC0 00330D00  38 60 00 00 */	li r3, 0
.L_80333DC4:
/* 80333DC4 00330D04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80333DC8 00330D08  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80333DCC 00330D0C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80333DD0 00330D10  7C 08 03 A6 */	mtlr r0
/* 80333DD4 00330D14  38 21 00 10 */	addi r1, r1, 0x10
/* 80333DD8 00330D18  4E 80 00 20 */	blr 
.endfn findSeq__Q28PSSystem6SeqMgrFP8JASTrack

.fn getPlayingSeq__Q28PSSystem6SeqMgrFP8JASTrack, global
/* 80333DDC 00330D1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80333DE0 00330D20  7C 08 02 A6 */	mflr r0
/* 80333DE4 00330D24  90 01 00 14 */	stw r0, 0x14(r1)
/* 80333DE8 00330D28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80333DEC 00330D2C  93 C1 00 08 */	stw r30, 8(r1)
/* 80333DF0 00330D30  7C 9E 23 78 */	mr r30, r4
/* 80333DF4 00330D34  83 E3 00 00 */	lwz r31, 0(r3)
/* 80333DF8 00330D38  48 00 00 40 */	b .L_80333E38
.L_80333DFC:
/* 80333DFC 00330D3C  80 7F 00 00 */	lwz r3, 0(r31)
/* 80333E00 00330D40  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80333E04 00330D44  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80333E08 00330D48  7D 89 03 A6 */	mtctr r12
/* 80333E0C 00330D4C  4E 80 04 21 */	bctrl 
/* 80333E10 00330D50  28 03 00 01 */	cmplwi r3, 1
/* 80333E14 00330D54  41 82 00 20 */	beq .L_80333E34
/* 80333E18 00330D58  80 7F 00 00 */	lwz r3, 0(r31)
/* 80333E1C 00330D5C  80 03 00 4C */	lwz r0, 0x4c(r3)
/* 80333E20 00330D60  28 00 00 00 */	cmplwi r0, 0
/* 80333E24 00330D64  41 82 00 10 */	beq .L_80333E34
/* 80333E28 00330D68  7C 00 F0 40 */	cmplw r0, r30
/* 80333E2C 00330D6C  40 82 00 08 */	bne .L_80333E34
/* 80333E30 00330D70  48 00 00 14 */	b .L_80333E44
.L_80333E34:
/* 80333E34 00330D74  83 FF 00 0C */	lwz r31, 0xc(r31)
.L_80333E38:
/* 80333E38 00330D78  28 1F 00 00 */	cmplwi r31, 0
/* 80333E3C 00330D7C  40 82 FF C0 */	bne .L_80333DFC
/* 80333E40 00330D80  38 60 00 00 */	li r3, 0
.L_80333E44:
/* 80333E44 00330D84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80333E48 00330D88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80333E4C 00330D8C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80333E50 00330D90  7C 08 03 A6 */	mtlr r0
/* 80333E54 00330D94  38 21 00 10 */	addi r1, r1, 0x10
/* 80333E58 00330D98  4E 80 00 20 */	blr 
.endfn getPlayingSeq__Q28PSSystem6SeqMgrFP8JASTrack

.fn getFirstSeq__Q28PSSystem6SeqMgrFv, global
/* 80333E5C 00330D9C  80 63 00 00 */	lwz r3, 0(r3)
/* 80333E60 00330DA0  28 03 00 00 */	cmplwi r3, 0
/* 80333E64 00330DA4  41 82 00 0C */	beq .L_80333E70
/* 80333E68 00330DA8  80 63 00 00 */	lwz r3, 0(r3)
/* 80333E6C 00330DAC  4E 80 00 20 */	blr 
.L_80333E70:
/* 80333E70 00330DB0  38 60 00 00 */	li r3, 0
/* 80333E74 00330DB4  4E 80 00 20 */	blr 
.endfn getFirstSeq__Q28PSSystem6SeqMgrFv

.fn getFirstSeqA__Q28PSSystem6SeqMgrFv, global
/* 80333E78 00330DB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80333E7C 00330DBC  7C 08 02 A6 */	mflr r0
/* 80333E80 00330DC0  38 80 00 00 */	li r4, 0
/* 80333E84 00330DC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80333E88 00330DC8  48 00 00 15 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 80333E8C 00330DCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80333E90 00330DD0  7C 08 03 A6 */	mtlr r0
/* 80333E94 00330DD4  38 21 00 10 */	addi r1, r1, 0x10
/* 80333E98 00330DD8  4E 80 00 20 */	blr 
.endfn getFirstSeqA__Q28PSSystem6SeqMgrFv

.fn getSeq__Q28PSSystem6SeqMgrFUl, global
/* 80333E9C 00330DDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80333EA0 00330DE0  7C 08 02 A6 */	mflr r0
/* 80333EA4 00330DE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80333EA8 00330DE8  4B CF 2E 2D */	bl getNthLink__10JSUPtrListCFUl
/* 80333EAC 00330DEC  28 03 00 00 */	cmplwi r3, 0
/* 80333EB0 00330DF0  40 82 00 0C */	bne .L_80333EBC
/* 80333EB4 00330DF4  38 60 00 00 */	li r3, 0
/* 80333EB8 00330DF8  48 00 00 08 */	b .L_80333EC0
.L_80333EBC:
/* 80333EBC 00330DFC  80 63 00 00 */	lwz r3, 0(r3)
.L_80333EC0:
/* 80333EC0 00330E00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80333EC4 00330E04  7C 08 03 A6 */	mtlr r0
/* 80333EC8 00330E08  38 21 00 10 */	addi r1, r1, 0x10
/* 80333ECC 00330E0C  4E 80 00 20 */	blr 
.endfn getSeq__Q28PSSystem6SeqMgrFUl

.fn __dt__Q28PSSystem10JumpBgmSeqFv, weak
/* 80333ED0 00330E10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80333ED4 00330E14  7C 08 02 A6 */	mflr r0
/* 80333ED8 00330E18  90 01 00 14 */	stw r0, 0x14(r1)
/* 80333EDC 00330E1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80333EE0 00330E20  7C 9F 23 78 */	mr r31, r4
/* 80333EE4 00330E24  93 C1 00 08 */	stw r30, 8(r1)
/* 80333EE8 00330E28  7C 7E 1B 79 */	or. r30, r3, r3
/* 80333EEC 00330E2C  41 82 00 A8 */	beq .L_80333F94
/* 80333EF0 00330E30  3C 80 80 4E */	lis r4, __vt__Q28PSSystem10JumpBgmSeq@ha
/* 80333EF4 00330E34  38 04 A4 8C */	addi r0, r4, __vt__Q28PSSystem10JumpBgmSeq@l
/* 80333EF8 00330E38  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80333EFC 00330E3C  41 82 00 88 */	beq .L_80333F84
/* 80333F00 00330E40  3C 80 80 4E */	lis r4, __vt__Q28PSSystem11DirectedBgm@ha
/* 80333F04 00330E44  38 04 A5 5C */	addi r0, r4, __vt__Q28PSSystem11DirectedBgm@l
/* 80333F08 00330E48  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80333F0C 00330E4C  41 82 00 78 */	beq .L_80333F84
/* 80333F10 00330E50  3C A0 80 4E */	lis r5, __vt__Q28PSSystem6BgmSeq@ha
/* 80333F14 00330E54  38 80 00 00 */	li r4, 0
/* 80333F18 00330E58  38 05 A6 30 */	addi r0, r5, __vt__Q28PSSystem6BgmSeq@l
/* 80333F1C 00330E5C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80333F20 00330E60  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80333F24 00330E64  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80333F28 00330E68  7D 89 03 A6 */	mtctr r12
/* 80333F2C 00330E6C  4E 80 04 21 */	bctrl 
/* 80333F30 00330E70  28 1E 00 00 */	cmplwi r30, 0
/* 80333F34 00330E74  41 82 00 50 */	beq .L_80333F84
/* 80333F38 00330E78  3C 60 80 4E */	lis r3, __vt__Q28PSSystem7SeqBase@ha
/* 80333F3C 00330E7C  38 03 A6 74 */	addi r0, r3, __vt__Q28PSSystem7SeqBase@l
/* 80333F40 00330E80  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80333F44 00330E84  80 7E 00 28 */	lwz r3, 0x28(r30)
/* 80333F48 00330E88  28 03 00 00 */	cmplwi r3, 0
/* 80333F4C 00330E8C  41 82 00 1C */	beq .L_80333F68
/* 80333F50 00330E90  41 82 00 18 */	beq .L_80333F68
/* 80333F54 00330E94  81 83 00 00 */	lwz r12, 0(r3)
/* 80333F58 00330E98  38 80 00 01 */	li r4, 1
/* 80333F5C 00330E9C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80333F60 00330EA0  7D 89 03 A6 */	mtctr r12
/* 80333F64 00330EA4  4E 80 04 21 */	bctrl 
.L_80333F68:
/* 80333F68 00330EA8  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 80333F6C 00330EAC  4B CF 01 6D */	bl __dla__FPv
/* 80333F70 00330EB0  28 1E 00 00 */	cmplwi r30, 0
/* 80333F74 00330EB4  41 82 00 10 */	beq .L_80333F84
/* 80333F78 00330EB8  7F C3 F3 78 */	mr r3, r30
/* 80333F7C 00330EBC  38 80 00 00 */	li r4, 0
/* 80333F80 00330EC0  4B CF 28 51 */	bl __dt__10JSUPtrLinkFv
.L_80333F84:
/* 80333F84 00330EC4  7F E0 07 35 */	extsh. r0, r31
/* 80333F88 00330EC8  40 81 00 0C */	ble .L_80333F94
/* 80333F8C 00330ECC  7F C3 F3 78 */	mr r3, r30
/* 80333F90 00330ED0  4B CF 01 25 */	bl __dl__FPv
.L_80333F94:
/* 80333F94 00330ED4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80333F98 00330ED8  7F C3 F3 78 */	mr r3, r30
/* 80333F9C 00330EDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80333FA0 00330EE0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80333FA4 00330EE4  7C 08 03 A6 */	mtlr r0
/* 80333FA8 00330EE8  38 21 00 10 */	addi r1, r1, 0x10
/* 80333FAC 00330EEC  4E 80 00 20 */	blr 
.endfn __dt__Q28PSSystem10JumpBgmSeqFv

.section .text, "ax", unique, 1
.fn "__dt__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>Fv", weak
/* 80333FB0 00330EF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80333FB4 00330EF4  7C 08 02 A6 */	mflr r0
/* 80333FB8 00330EF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80333FBC 00330EFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80333FC0 00330F00  7C 7F 1B 79 */	or. r31, r3, r3
/* 80333FC4 00330F04  41 82 00 24 */	beq .L_80333FE8
/* 80333FC8 00330F08  3C A0 80 4E */	lis r5, "__vt__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"@ha
/* 80333FCC 00330F0C  7C 80 07 35 */	extsh. r0, r4
/* 80333FD0 00330F10  38 85 A9 10 */	addi r4, r5, "__vt__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"@l
/* 80333FD4 00330F14  38 00 00 00 */	li r0, 0
/* 80333FD8 00330F18  90 9F 00 00 */	stw r4, 0(r31)
/* 80333FDC 00330F1C  90 0D 91 CC */	stw r0, "sInstance__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"@sda21(r13)
/* 80333FE0 00330F20  40 81 00 08 */	ble .L_80333FE8
/* 80333FE4 00330F24  4B CF 00 D1 */	bl __dl__FPv
.L_80333FE8:
/* 80333FE8 00330F28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80333FEC 00330F2C  7F E3 FB 78 */	mr r3, r31
/* 80333FF0 00330F30  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80333FF4 00330F34  7C 08 03 A6 */	mtlr r0
/* 80333FF8 00330F38  38 21 00 10 */	addi r1, r1, 0x10
/* 80333FFC 00330F3C  4E 80 00 20 */	blr 
.endfn "__dt__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>Fv"

.fn "__dt__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>Fv", weak
/* 80334000 00330F40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80334004 00330F44  7C 08 02 A6 */	mflr r0
/* 80334008 00330F48  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033400C 00330F4C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80334010 00330F50  7C 7F 1B 79 */	or. r31, r3, r3
/* 80334014 00330F54  41 82 00 24 */	beq .L_80334038
/* 80334018 00330F58  3C A0 80 4E */	lis r5, "__vt__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"@ha
/* 8033401C 00330F5C  7C 80 07 35 */	extsh. r0, r4
/* 80334020 00330F60  38 85 A8 E8 */	addi r4, r5, "__vt__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"@l
/* 80334024 00330F64  38 00 00 00 */	li r0, 0
/* 80334028 00330F68  90 9F 00 00 */	stw r4, 0(r31)
/* 8033402C 00330F6C  90 0D 91 D0 */	stw r0, "sInstance__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"@sda21(r13)
/* 80334030 00330F70  40 81 00 08 */	ble .L_80334038
/* 80334034 00330F74  4B CF 00 81 */	bl __dl__FPv
.L_80334038:
/* 80334038 00330F78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8033403C 00330F7C  7F E3 FB 78 */	mr r3, r31
/* 80334040 00330F80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80334044 00330F84  7C 08 03 A6 */	mtlr r0
/* 80334048 00330F88  38 21 00 10 */	addi r1, r1, 0x10
/* 8033404C 00330F8C  4E 80 00 20 */	blr 
.endfn "__dt__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>Fv"

.fn "@28@__dt__Q28PSSystem11SeqDataListFv", weak
/* 80334050 00330F90  38 63 FF E4 */	addi r3, r3, -28
/* 80334054 00330F94  4B FF CD 2C */	b __dt__Q28PSSystem11SeqDataListFv
.endfn "@28@__dt__Q28PSSystem11SeqDataListFv"

.fn "@28@__dt__Q28PSSystem14StreamDataListFv", weak
/* 80334058 00330F98  38 63 FF E4 */	addi r3, r3, -28
/* 8033405C 00330F9C  4B FF CF 14 */	b __dt__Q28PSSystem14StreamDataListFv
.endfn "@28@__dt__Q28PSSystem14StreamDataListFv"

.fn "@1696@stopInner__Q28PSSystem8SeqSoundFUl", weak
/* 80334060 00330FA0  38 63 F9 60 */	addi r3, r3, -1696
/* 80334064 00330FA4  4B FF D1 38 */	b stopInner__Q28PSSystem8SeqSoundFUl
.endfn "@1696@stopInner__Q28PSSystem8SeqSoundFUl"

.fn "@472@stopInner__Q28PSSystem11StreamSoundFUl", weak
/* 80334068 00330FA8  38 63 FE 28 */	addi r3, r3, -472
/* 8033406C 00330FAC  4B FF D1 50 */	b stopInner__Q28PSSystem11StreamSoundFUl
.endfn "@472@stopInner__Q28PSSystem11StreamSoundFUl"

.section .text, "ax", unique, 2
.fn seqLoadAfter__Q28PSSystem7SeqBaseFv, weak
/* 80334070 00330FB0  4E 80 00 20 */	blr 
.endfn seqLoadAfter__Q28PSSystem7SeqBaseFv

.fn getHandleP__Q28PSSystem6BgmSeqFv, weak
/* 80334074 00330FB4  38 63 00 68 */	addi r3, r3, 0x68
/* 80334078 00330FB8  4E 80 00 20 */	blr 
.endfn getHandleP__Q28PSSystem6BgmSeqFv

.fn __dt__Q28PSSystem11DirectedBgmFv, weak
/* 8033407C 00330FBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80334080 00330FC0  7C 08 02 A6 */	mflr r0
/* 80334084 00330FC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80334088 00330FC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033408C 00330FCC  7C 9F 23 78 */	mr r31, r4
/* 80334090 00330FD0  93 C1 00 08 */	stw r30, 8(r1)
/* 80334094 00330FD4  7C 7E 1B 79 */	or. r30, r3, r3
/* 80334098 00330FD8  41 82 00 98 */	beq .L_80334130
/* 8033409C 00330FDC  3C 80 80 4E */	lis r4, __vt__Q28PSSystem11DirectedBgm@ha
/* 803340A0 00330FE0  38 04 A5 5C */	addi r0, r4, __vt__Q28PSSystem11DirectedBgm@l
/* 803340A4 00330FE4  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803340A8 00330FE8  41 82 00 78 */	beq .L_80334120
/* 803340AC 00330FEC  3C A0 80 4E */	lis r5, __vt__Q28PSSystem6BgmSeq@ha
/* 803340B0 00330FF0  38 80 00 00 */	li r4, 0
/* 803340B4 00330FF4  38 05 A6 30 */	addi r0, r5, __vt__Q28PSSystem6BgmSeq@l
/* 803340B8 00330FF8  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803340BC 00330FFC  81 83 00 10 */	lwz r12, 0x10(r3)
/* 803340C0 00331000  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803340C4 00331004  7D 89 03 A6 */	mtctr r12
/* 803340C8 00331008  4E 80 04 21 */	bctrl 
/* 803340CC 0033100C  28 1E 00 00 */	cmplwi r30, 0
/* 803340D0 00331010  41 82 00 50 */	beq .L_80334120
/* 803340D4 00331014  3C 60 80 4E */	lis r3, __vt__Q28PSSystem7SeqBase@ha
/* 803340D8 00331018  38 03 A6 74 */	addi r0, r3, __vt__Q28PSSystem7SeqBase@l
/* 803340DC 0033101C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803340E0 00331020  80 7E 00 28 */	lwz r3, 0x28(r30)
/* 803340E4 00331024  28 03 00 00 */	cmplwi r3, 0
/* 803340E8 00331028  41 82 00 1C */	beq .L_80334104
/* 803340EC 0033102C  41 82 00 18 */	beq .L_80334104
/* 803340F0 00331030  81 83 00 00 */	lwz r12, 0(r3)
/* 803340F4 00331034  38 80 00 01 */	li r4, 1
/* 803340F8 00331038  81 8C 00 08 */	lwz r12, 8(r12)
/* 803340FC 0033103C  7D 89 03 A6 */	mtctr r12
/* 80334100 00331040  4E 80 04 21 */	bctrl 
.L_80334104:
/* 80334104 00331044  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 80334108 00331048  4B CE FF D1 */	bl __dla__FPv
/* 8033410C 0033104C  28 1E 00 00 */	cmplwi r30, 0
/* 80334110 00331050  41 82 00 10 */	beq .L_80334120
/* 80334114 00331054  7F C3 F3 78 */	mr r3, r30
/* 80334118 00331058  38 80 00 00 */	li r4, 0
/* 8033411C 0033105C  4B CF 26 B5 */	bl __dt__10JSUPtrLinkFv
.L_80334120:
/* 80334120 00331060  7F E0 07 35 */	extsh. r0, r31
/* 80334124 00331064  40 81 00 0C */	ble .L_80334130
/* 80334128 00331068  7F C3 F3 78 */	mr r3, r30
/* 8033412C 0033106C  4B CE FF 89 */	bl __dl__FPv
.L_80334130:
/* 80334130 00331070  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80334134 00331074  7F C3 F3 78 */	mr r3, r30
/* 80334138 00331078  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033413C 0033107C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80334140 00331080  7C 08 03 A6 */	mtlr r0
/* 80334144 00331084  38 21 00 10 */	addi r1, r1, 0x10
/* 80334148 00331088  4E 80 00 20 */	blr 
.endfn __dt__Q28PSSystem11DirectedBgmFv

.fn onJump__Q28PSSystem10JumpBgmSeqFUs, weak
/* 8033414C 0033108C  4E 80 00 20 */	blr 
.endfn onJump__Q28PSSystem10JumpBgmSeqFUs

.fn getCastType__Q28PSSystem10JumpBgmSeqFv, weak
/* 80334150 00331090  38 60 00 04 */	li r3, 4
/* 80334154 00331094  4E 80 00 20 */	blr 
.endfn getCastType__Q28PSSystem10JumpBgmSeqFv

.fn getSeqType__Q28PSSystem6BgmSeqFv, weak
/* 80334158 00331098  3C 60 80 00 */	lis r3, 0x8000
/* 8033415C 0033109C  4E 80 00 20 */	blr 
.endfn getSeqType__Q28PSSystem6BgmSeqFv

.fn getCastType__Q28PSSystem11DirectedBgmFv, weak
/* 80334160 003310A0  38 60 00 02 */	li r3, 2
/* 80334164 003310A4  4E 80 00 20 */	blr 
.endfn getCastType__Q28PSSystem11DirectedBgmFv

.fn getSeqType__Q28PSSystem5SeSeqFv, weak
/* 80334168 003310A8  3C 60 80 00 */	lis r3, 0x80000800@ha
/* 8033416C 003310AC  38 63 08 00 */	addi r3, r3, 0x80000800@l
/* 80334170 003310B0  4E 80 00 20 */	blr 
.endfn getSeqType__Q28PSSystem5SeSeqFv

.fn getCastType__Q28PSSystem5SeSeqFv, weak
/* 80334174 003310B4  38 60 00 05 */	li r3, 5
/* 80334178 003310B8  4E 80 00 20 */	blr 
.endfn getCastType__Q28PSSystem5SeSeqFv

.fn getHandleP__Q28PSSystem5SeSeqFv, weak
/* 8033417C 003310BC  38 6D 8B E0 */	addi r3, r13, seHandle__Q27JAInter5SeMgr@sda21
/* 80334180 003310C0  4E 80 00 20 */	blr 
.endfn getHandleP__Q28PSSystem5SeSeqFv

.fn getHandleP__Q28PSSystem9StreamBgmFv, weak
/* 80334184 003310C4  38 63 00 6C */	addi r3, r3, 0x6c
/* 80334188 003310C8  4E 80 00 20 */	blr 
.endfn getHandleP__Q28PSSystem9StreamBgmFv

.fn scene1st__Q28PSSystem9StreamBgmFPQ28PSSystem11TaskChecker, weak
/* 8033418C 003310CC  4E 80 00 20 */	blr 
.endfn scene1st__Q28PSSystem9StreamBgmFPQ28PSSystem11TaskChecker

.fn getSeqType__Q28PSSystem9StreamBgmFv, weak
/* 80334190 003310D0  38 60 00 00 */	li r3, 0
/* 80334194 003310D4  4E 80 00 20 */	blr 
.endfn getSeqType__Q28PSSystem9StreamBgmFv

.fn getCastType__Q28PSSystem9StreamBgmFv, weak
/* 80334198 003310D8  38 60 00 01 */	li r3, 1
/* 8033419C 003310DC  4E 80 00 20 */	blr 
.endfn getCastType__Q28PSSystem9StreamBgmFv

.fn getCastType__Q28PSSystem6BgmSeqFv, weak
/* 803341A0 003310E0  38 60 00 00 */	li r3, 0
/* 803341A4 003310E4  4E 80 00 20 */	blr 
.endfn getCastType__Q28PSSystem6BgmSeqFv

.fn read__Q28PSSystem14StreamDataListFR6Stream, weak
/* 803341A8 003310E8  38 60 00 00 */	li r3, 0
/* 803341AC 003310EC  4E 80 00 20 */	blr 
.endfn read__Q28PSSystem14StreamDataListFR6Stream

.fn read__Q28PSSystem11SeqDataListFR6Stream, weak
/* 803341B0 003310F0  38 60 00 00 */	li r3, 0
/* 803341B4 003310F4  4E 80 00 20 */	blr 
.endfn read__Q28PSSystem11SeqDataListFR6Stream

.section .text, "ax", unique, 3
.fn getTgtWithTable__Q28PSSystem20TriangleTableModTaskFUc, weak
/* 803341B8 003310F8  3C A0 80 49 */	lis r5, sTable__Q28PSSystem20TriangleTableModTask@ha
/* 803341BC 003310FC  54 80 15 BA */	rlwinm r0, r4, 2, 0x16, 0x1d
/* 803341C0 00331100  38 85 FF 50 */	addi r4, r5, sTable__Q28PSSystem20TriangleTableModTask@l
/* 803341C4 00331104  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 803341C8 00331108  7C 04 04 2E */	lfsx f0, r4, r0
/* 803341CC 0033110C  EC 21 00 32 */	fmuls f1, f1, f0
/* 803341D0 00331110  4E 80 00 20 */	blr 
.endfn getTgtWithTable__Q28PSSystem20TriangleTableModTaskFUc

.fn getTableIdxNum__Q28PSSystem20TriangleTableModTaskFv, weak
/* 803341D4 00331114  38 60 00 28 */	li r3, 0x28
/* 803341D8 00331118  4E 80 00 20 */	blr 
.endfn getTableIdxNum__Q28PSSystem20TriangleTableModTaskFv

.fn task__Q28PSSystem14PitchResetTaskFR8JASTrack, weak
/* 803341DC 0033111C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803341E0 00331120  7C 08 02 A6 */	mflr r0
/* 803341E4 00331124  7C 83 23 78 */	mr r3, r4
/* 803341E8 00331128  C0 22 FD 40 */	lfs f1, lbl_8051E0A0@sda21(r2)
/* 803341EC 0033112C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803341F0 00331130  38 80 00 01 */	li r4, 1
/* 803341F4 00331134  38 A0 FF FF */	li r5, -1
/* 803341F8 00331138  4B D6 CC 01 */	bl setParam__8JASTrackFifi
/* 803341FC 0033113C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80334200 00331140  38 60 FF FF */	li r3, -1
/* 80334204 00331144  7C 08 03 A6 */	mtlr r0
/* 80334208 00331148  38 21 00 10 */	addi r1, r1, 0x10
/* 8033420C 0033114C  4E 80 00 20 */	blr 
.endfn task__Q28PSSystem14PitchResetTaskFR8JASTrack

.fn task__Q28PSSystem12FlagWaitTaskFR8JASTrack, weak
/* 80334210 00331150  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 80334214 00331154  4E 80 00 20 */	blr 
.endfn task__Q28PSSystem12FlagWaitTaskFR8JASTrack

.fn timeTask__Q28PSSystem12BankRandTaskFR8JASTrackf, weak
/* 80334218 00331158  80 6D 98 78 */	lwz r3, sInstance__Q28PSSystem11BankRandPrm@sda21(r13)
/* 8033421C 0033115C  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 80334220 00331160  4E 80 00 20 */	blr 
.endfn timeTask__Q28PSSystem12BankRandTaskFR8JASTrackf

.fn getPreParam__Q28PSSystem12BankRandTaskFR8JASTrack, weak
/* 80334224 00331164  80 6D 98 78 */	lwz r3, sInstance__Q28PSSystem11BankRandPrm@sda21(r13)
/* 80334228 00331168  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 8033422C 0033116C  4E 80 00 20 */	blr 
.endfn getPreParam__Q28PSSystem12BankRandTaskFR8JASTrack

.section .text, "ax", unique, 4
.fn update__Q28PSSystem12SeqTrackRootFv, weak
/* 80334230 00331170  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80334234 00331174  7C 08 02 A6 */	mflr r0
/* 80334238 00331178  90 01 00 14 */	stw r0, 0x14(r1)
/* 8033423C 0033117C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80334240 00331180  7C 7F 1B 78 */	mr r31, r3
/* 80334244 00331184  38 7F 00 3C */	addi r3, r31, 0x3c
/* 80334248 00331188  48 00 E0 61 */	bl proc__Q28PSSystem7BeatMgrFv
/* 8033424C 0033118C  7F E3 FB 78 */	mr r3, r31
/* 80334250 00331190  48 00 E0 85 */	bl update__Q28PSSystem12SeqTrackBaseFv
/* 80334254 00331194  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80334258 00331198  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8033425C 0033119C  7C 08 03 A6 */	mtlr r0
/* 80334260 003311A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80334264 003311A4  4E 80 00 20 */	blr 
.endfn update__Q28PSSystem12SeqTrackRootFv
