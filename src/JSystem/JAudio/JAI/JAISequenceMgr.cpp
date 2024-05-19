#include "string.h"
#include "JSystem/JAudio/JAI/JAIBasic.h"
#include "JSystem/JAudio/JAI/JAIGlobalParameter.h"
#include "JSystem/JAudio/JAI/JAISequence.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JAudio/JAI/JAInter/MoveParaSet.h"
#include "JSystem/JAudio/JAI/JAInter/BankWave.h"
#include "JSystem/JAudio/JAI/JAInter/HeapMgr.h"
#include "JSystem/JAudio/JAS/JASPortCmd.h"
#include "JSystem/JAudio/JAS/JASResArcLoader.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "types.h"

namespace JAInter {
namespace SequenceMgr {

JAInter::SeqUpdateData* seqTrackInfo;
JAISequence** FixSeqBufPointer;
JAInter::LinkSound seqControl;
JKRArchive* arcPointer;
CustomHeapCallback customHeapCallback;

/**
 * @note Address: 0x800B0944
 * @note Size: 0x488
 */
void init()
{
	seqControl.init();
	FixSeqBufPointer = new (JAIGetCurrentHeap(), 0x20) JAISequence*[JAIGlobalParameter::getParamSeqPlayTrackMax()];

	for (u32 i = 0; i < JAIGlobalParameter::getParamSeqControlBufferMax(); i++) {
		JAISequence* sequence = JAIBasic::getInterface()->makeSequence();
		seqControl.mFreeList->append(sequence);
	}
	JAISequence* obj;
	for (JSULink<JAISound>* link = seqControl.mFreeList->getFirst(); link; link = link->getNext()) {
		obj = static_cast<JAISequence*>(link->getObject());

		obj->mSeqParameter.mPans    = new (JAIGetCurrentHeap(), 0x20) MoveParaSet[JAIGlobalParameter::getParamSeqParameterLines()];
		obj->mSeqParameter.mPitches = new (JAIGetCurrentHeap(), 0x20) MoveParaSet[JAIGlobalParameter::getParamSeqParameterLines()];
		obj->mSeqParameter.mFxmixes = new (JAIGetCurrentHeap(), 0x20) MoveParaSet[JAIGlobalParameter::getParamSeqParameterLines()];
		obj->mSeqParameter.mDolbys  = new (JAIGetCurrentHeap(), 0x20) MoveParaSet[JAIGlobalParameter::getParamSeqParameterLines()];

		obj->mSeqParameter.mTrackVolumes = new (JAIGetCurrentHeap(), 0x20) MoveParaSet[JAIGlobalParameter::getParamSeqTrackMax()];
		obj->mSeqParameter.mTrackPans    = new (JAIGetCurrentHeap(), 0x20) MoveParaSetInitHalf[JAIGlobalParameter::getParamSeqTrackMax()];
		obj->mSeqParameter.mTrackPitches = new (JAIGetCurrentHeap(), 0x20) MoveParaSet[JAIGlobalParameter::getParamSeqTrackMax()];
		obj->mSeqParameter.mTrackFxmixes = new (JAIGetCurrentHeap(), 0x20) MoveParaSetInitZero[JAIGlobalParameter::getParamSeqTrackMax()];
		obj->mSeqParameter.mTrackDolbys  = new (JAIGetCurrentHeap(), 0x20) MoveParaSetInitZero[JAIGlobalParameter::getParamSeqTrackMax()];

		obj->mSeqParameter._274 = new (JAIGetCurrentHeap(), 0x20) u16*[JAIGlobalParameter::getParamSeqTrackMax()];

		for (u32 i = 0; i < JAIGlobalParameter::getParamSeqTrackMax(); i++) {
			obj->mSeqParameter._274[i] = new (JAIGetCurrentHeap(), 0x20) u16[16];
		}

		obj->mSeqParameter._2B4               = new (JAIGetCurrentHeap(), 0x20) u32[JAIGlobalParameter::getParamSeqTrackMax()];
		obj->mSeqParameter.mInterruptSwitches = new (JAIGetCurrentHeap(), 0x20) u8[JAIGlobalParameter::getParamSeqTrackMax()];
		obj->mSeqParameter._2BC = (MuteBit*)new (JAIGetCurrentHeap(), 0x20) MuteBit[JAIGlobalParameter::getParamSeqTrackMax()];
	}

	seqTrackInfo = new (JAIGetCurrentHeap(), 0x20) SeqUpdateData[JAIGlobalParameter::getParamSeqPlayTrackMax()];

	for (u32 i = 0; i < JAIGlobalParameter::getParamSeqPlayTrackMax(); i++) {
		FixSeqBufPointer[i] = nullptr;
		seqTrackInfo[i].init();
	}
}

/**
 * @note Address: 0x800B0DCC
 * @note Size: 0x20
 */
JAInter::MuteBit::MuteBit()
    : _0(false)
    , _2(false)
{
}

/**
 * @note Address: 0x800B0DEC
 * @note Size: 0x12C
 */
JAInter::SeqUpdateData::SeqUpdateData()
    : mPauseMode(SOUNDPAUSE_Unk0)
    , mPauseVolume(0)
    , mPrepareFlag(0)
    , _03(0)
    , mActiveTrackFlag(0)
    , mSequence(nullptr)
    , _4C(new (JAIBasic::getCurrentJAIHeap(), 0x20) PlayerParameter[33])
{
	_24 = new (JAIBasic::getCurrentJAIHeap(), 0x20) f32[JAIGlobalParameter::getParamSeqTrackMax()];
	_30 = new (JAIBasic::getCurrentJAIHeap(), 0x20) f32[JAIGlobalParameter::getParamSeqTrackMax()];
	_28 = new (JAIBasic::getCurrentJAIHeap(), 0x20) f32[JAIGlobalParameter::getParamSeqTrackMax()];
	_2C = new (JAIBasic::getCurrentJAIHeap(), 0x20) f32[JAIGlobalParameter::getParamSeqTrackMax()];
	_34 = new (JAIBasic::getCurrentJAIHeap(), 0x20) f32[JAIGlobalParameter::getParamSeqTrackMax()];
	_44 = new (JAIBasic::getCurrentJAIHeap(), 0x20) u32[JAIGlobalParameter::getParamSeqTrackMax() + 1];
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
// void JSULink<JASPortCmd>::~JSULink()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x800B1028
 * @note Size: 0x6C
 */
void getArchiveName(char* path)
{
	path[0] = '\0';
	if (JAIGlobalParameter::getParamAudioResPath() != nullptr) {
		strcat(path, JAIGlobalParameter::getParamAudioResPath());
	}
	strcat(path, JAIGlobalParameter::getParamSequenceArchivesPath());
	strcat(path, JAIGlobalParameter::getParamSequenceArchivesFileName());
}

/**
 * @note Address: 0x800B1094
 * @note Size: 0x8
 */
void setArchivePointer(JKRArchive* archive) { arcPointer = archive; }

/**
 * @note Address: 0x800B109C
 * @note Size: 0x8
 */
JKRArchive* getArchivePointer() { return arcPointer; }

/**
 * @note Address: 0x800B10A4
 * @note Size: 0x8
 */
void setCustomHeapCallback(CustomHeapInfo (*callback)(u32, u16, JAISequence*)) { customHeapCallback = callback; }

/**
 * @note Address: 0x800B10AC
 * @note Size: 0x38
 */
void processGFrameSequence()
{
	checkEntriedSeq();
	checkStoppedSeq();
	checkPlayingSeq();
	checkFadeoutSeq();
	checkStartedSeq();
	checkReadSeq();
	checkSeqWave();
}

/**
 * @note Address: 0x800B10E4
 * @note Size: 0x430
 */
void checkEntriedSeq()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r22, 0x18(r1)
	li       r29, 0
	li       r30, 0
	b        lbl_800B14F4

lbl_800B1100:
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	add      r28, r0, r30
	lwz      r3, 0x48(r28)
	cmplwi   r3, 0
	beq      lbl_800B14EC
	lwz      r0, 8(r28)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_800B14EC
	lwz      r4, 0x44(r3)
	lwz      r3, arcPointer__Q27JAInter11SequenceMgr@sda21(r13)
	lhz      r27, 6(r4)
	mr       r4, r27
	bl       getResSize_mStateJASResArcLoaderFP10JKRArchiveUs
	lwz      r12, customHeapCallback__Q27JAInter11SequenceMgr@sda21(r13)
	mr       r26, r3
	cmplwi   r12, 0
	beq      lbl_800B11EC
	mr       r5, r27
	addi     r3, r1, 0xc
	lwz      r6, 0x48(r28)
	li       r4, 0
	mtctr    r12
	bctrl
	lbz      r0, 0x10(r1)
	lwz      r23, 0xc(r1)
	cmplwi   r0, 1
	mr       r31, r23
	bne      lbl_800B11DC
	lwz      r3, 0x48(r28)
	li       r4, 0x40
	bl       checkSwBit__8JAISoundFUl
	cmplwi   r3, 0
	bne      lbl_800B11B8
	lwz      r5, 0x48(r28)
	li       r0, 1
	lis      r3, checkCustomDvdLoadArc__Q27JAInter11SequenceMgrFUlUl@ha
	mr       r4, r27
	stb      r0, 0x15(r5)
	addi     r7, r3, checkCustomDvdLoadArc__Q27JAInter11SequenceMgrFUlUl@l
	mr       r5, r23
	mr       r6, r26
	stb      r0, 3(r28)
	mr       r8, r29
	lwz      r3, arcPointer__Q27JAInter11SequenceMgr@sda21(r13)
	bl       loadResourceAsync_mStateJASResArcLoaderFP10JKRArchiveUsPUcUlPFUlUl_vUl
	b        lbl_800B14C8

lbl_800B11B8:
	lwz      r3, arcPointer__Q27JAInter11SequenceMgr@sda21(r13)
	mr       r4, r27
	mr       r5, r23
	mr       r6, r26
	bl       loadResource_mStateJASResArcLoaderFP10JKRArchiveUsPUcUl
	lwz      r3, 0x48(r28)
	li       r0, 2
	stb      r0, 0x15(r3)
	b        lbl_800B14C8

lbl_800B11DC:
	lwz      r3, 0x48(r28)
	li       r0, 2
	stb      r0, 0x15(r3)
	b        lbl_800B14C8

lbl_800B11EC:
	lbz      r0, 3(r28)
	cmplwi   r0, 0
	bne      lbl_800B14EC
	lwz      r3, 0x48(r28)
	addi     r4, r1, 8
	li       r25, 0
	lwz      r0, 0x20(r3)
	clrlwi   r3, r0, 0x16
	bl       checkOnMemory__Q27JAInter7HeapMgrFUlPUc
	or.      r31, r3, r3
	bne      lbl_800B1488
	lwz      r3, 0x48(r28)
	li       r4, 0x10
	bl       checkSwBit__8JAISoundFUl
	cmplwi   r3, 0
	beq      lbl_800B126C
	bl       checkUsefulStayHeapPosition__Q27JAInter7HeapMgrFv
	stb      r3, 8(r1)
	mr       r3, r26
	lwz      r4, 0x48(r28)
	lwz      r0, 0x20(r4)
	clrlwi   r4, r0, 0x16
	bl       getFreeStayHeapPointer__Q27JAInter7HeapMgrFUlUl
	or.      r31, r3, r3
	bne      lbl_800B125C
	lwz      r3, 0x48(r28)
	li       r4, 0x20
	bl       checkSwBit__8JAISoundFUl

lbl_800B125C:
	lwz      r3, 0x48(r28)
	li       r0, 0xff
	li       r25, 1
	stb      r0, 0x2c0(r3)

lbl_800B126C:
	cmplwi   r31, 0
	bne      lbl_800B13E0
	lwz      r3, 0x48(r28)
	li       r4, 0x20
	bl       checkSwBit__8JAISoundFUl
	cmplwi   r3, 0
	bne      lbl_800B129C
	lwz      r3, 0x48(r28)
	li       r4, 0x10
	bl       checkSwBit__8JAISoundFUl
	cmplwi   r3, 0
	bne      lbl_800B13E0

lbl_800B129C:
	bl       checkUsefulAutoHeapPosition__Q27JAInter7HeapMgrFv
	stb      r3, 8(r1)
	bl       getParamAutoHeapMax__18JAIGlobalParameterFv
	lbz      r0, 8(r1)
	cmplw    r0, r3
	blt      lbl_800B1390
	li       r24, 0
	li       r31, 0
	b        lbl_800B1358

lbl_800B12C0:
	bl       getAutoHeapPointer__Q27JAInter7HeapMgrFv
	add      r3, r3, r31
	lwz      r3, 0x10(r3)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	beq      lbl_800B1350
	li       r23, 0
	b        lbl_800B132C

lbl_800B12E0:
	mulli    r22, r23, 0x50
	lwz      r3, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r0, r22, 0x48
	lwzx     r0, r3, r0
	cmplwi   r0, 0
	beq      lbl_800B1328
	bl       getAutoHeapPointer__Q27JAInter7HeapMgrFv
	lwz      r4, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r0, r22, 0x48
	add      r5, r3, r31
	lwzx     r3, r4, r0
	lwz      r0, 8(r5)
	lwz      r3, 0x20(r3)
	clrlwi   r3, r3, 0x16
	cmplw    r3, r0
	bne      lbl_800B1328
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	mr       r23, r3

lbl_800B1328:
	addi     r23, r23, 1

lbl_800B132C:
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	cmplw    r23, r3
	blt      lbl_800B12E0
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	cmplw    r23, r3
	bne      lbl_800B1350
	clrlwi   r3, r24, 0x18
	bl       releaseAutoHeapPointer__Q27JAInter7HeapMgrFUc
	stb      r24, 8(r1)

lbl_800B1350:
	addi     r31, r31, 0x14
	addi     r24, r24, 1

lbl_800B1358:
	bl       getParamAutoHeapMax__18JAIGlobalParameterFv
	cmplw    r24, r3
	blt      lbl_800B12C0
	bl       getParamAutoHeapMax__18JAIGlobalParameterFv
	lbz      r0, 8(r1)
	cmplw    r0, r3
	blt      lbl_800B13BC
	lwz      r3, 0x48(r28)
	li       r4, 0
	lwz      r12, 0x10(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_800B14EC

lbl_800B1390:
	bl       getParamAutoHeapRoomSize__18JAIGlobalParameterFv
	cmplw    r26, r3
	blt      lbl_800B13BC
	bl       getParamAutoHeapRoomSize__18JAIGlobalParameterFv
	lwz      r3, 0x48(r28)
	li       r4, 0
	lwz      r12, 0x10(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_800B14EC

lbl_800B13BC:
	lbz      r0, 8(r1)
	lwz      r3, 0x48(r28)
	stb      r0, 0x2c0(r3)
	lwz      r3, 0x48(r28)
	lwz      r0, 0x20(r3)
	lbz      r3, 0x2c0(r3)
	clrlwi   r4, r0, 0x16
	bl       getFreeAutoHeapPointer__Q27JAInter7HeapMgrFUcUl
	mr       r31, r3

lbl_800B13E0:
	lwz      r3, 0x48(r28)
	li       r4, 0x40
	bl       checkSwBit__8JAISoundFUl
	cmplwi   r3, 0
	bne      lbl_800B1464
	lwz      r4, 0x48(r28)
	li       r5, 1
	slwi     r0, r27, 0x10
	clrlwi.  r3, r25, 0x18
	stb      r5, 0x15(r4)
	or       r0, r29, r0
	rlwinm   r5, r25, 0xf, 9, 0x10
	lbz      r3, 8(r1)
	rlwinm   r4, r3, 8, 0x10, 0x17
	or       r0, r4, r0
	or       r22, r5, r0
	bne      lbl_800B1430
	li       r4, 1
	bl       setAutoHeapLoadedFlag__Q27JAInter7HeapMgrFUcUc
	b        lbl_800B1438

lbl_800B1430:
	li       r4, 1
	bl       setStayHeapLoadedFlag__Q27JAInter7HeapMgrFUcUc

lbl_800B1438:
	li       r0, 1
	lis      r3, checkDvdLoadArc__Q27JAInter11SequenceMgrFUlUl@ha
	stb      r0, 3(r28)
	addi     r7, r3, checkDvdLoadArc__Q27JAInter11SequenceMgrFUlUl@l
	mr       r4, r27
	mr       r5, r31
	lwz      r3, arcPointer__Q27JAInter11SequenceMgr@sda21(r13)
	mr       r6, r26
	mr       r8, r22
	bl       loadResourceAsync_mStateJASResArcLoaderFP10JKRArchiveUsPUcUlPFUlUl_vUl
	b        lbl_800B14C8

lbl_800B1464:
	lwz      r3, arcPointer__Q27JAInter11SequenceMgr@sda21(r13)
	mr       r4, r27
	mr       r5, r31
	mr       r6, r26
	bl       loadResource_mStateJASResArcLoaderFP10JKRArchiveUsPUcUl
	lwz      r3, 0x48(r28)
	li       r0, 2
	stb      r0, 0x15(r3)
	b        lbl_800B14C8

lbl_800B1488:
	addis    r0, r31, 1
	cmplwi   r0, 0xffff
	beq      lbl_800B14EC
	lbz      r3, 8(r1)
	cmplwi   r3, 0xff
	beq      lbl_800B14B0
	lwz      r4, 0x48(r28)
	lwz      r0, 0x20(r4)
	clrlwi   r4, r0, 0x16
	bl       getFreeAutoHeapPointer__Q27JAInter7HeapMgrFUcUl

lbl_800B14B0:
	lbz      r4, 8(r1)
	li       r0, 2
	lwz      r3, 0x48(r28)
	stb      r4, 0x2c0(r3)
	lwz      r3, 0x48(r28)
	stb      r0, 0x15(r3)

lbl_800B14C8:
	cmplwi   r31, 0
	beq      lbl_800B14E4
	stw      r31, 0x40(r28)
	lwz      r0, 8(r28)
	xori     r0, r0, 1
	stw      r0, 8(r28)
	b        lbl_800B14EC

lbl_800B14E4:
	lwz      r3, 0x48(r28)
	bl       stopSeq__Q27JAInter11SequenceMgrFP11JAISequence

lbl_800B14EC:
	addi     r30, r30, 0x50
	addi     r29, r29, 1

lbl_800B14F4:
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	cmplw    r29, r3
	blt      lbl_800B1100
	lmw      r22, 0x18(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x800B1514
 * @note Size: 0xB8
 */
void checkFadeoutSeq()
{
	for (u32 i = 0; i < JAIGlobalParameter::getParamSeqPlayTrackMax(); i++) {
		SeqUpdateData* info = &seqTrackInfo[i];
		if (info->mSequence && info->mSequence->mState == SOUNDSTATE_Fadeout && info->mSequence->getVolume(SOUNDPARAM_Fadeout) == 0.0f) {
			info->mSequence->mSeqParameter.mTrack.stopSeq();
			info->mSequence->clearMainSoundPPointer();
			stopSeq(info->mSequence);
			info->mActiveTrackFlag = 0;
		}
	}
}

/**
 * @note Address: 0x800B15CC
 * @note Size: 0x20
 */
// f32 JAISequence::getVolume(u8 p1) { return getSeqInterVolume(p1); }

/**
 * @note Address: 0x800B15EC
 * @note Size: 0xA4
 */
void checkStoppedSeq()
{
	for (u32 i = 0; i < JAIGlobalParameter::getParamSeqPlayTrackMax(); i++) {
		SeqUpdateData* info = &seqTrackInfo[i];
		if (info->mSequence && (info->mSequence->mState == SOUNDSTATE_Playing || info->mSequence->mState == SOUNDSTATE_Fadeout)
		    && info->mSequence->mSeqParameter.mTrack._35B == 0) {
			info->mSequence->clearMainSoundPPointer();
			stopSeq(info->mSequence);
			info->mActiveTrackFlag = 0;
		}
	}
}

/**
 * @note Address: 0x800B1690
 * @note Size: 0xEC
 */
void checkPlayingSeq()
{
	for (u32 i = 0; i < JAIGlobalParameter::getParamSeqPlayTrackMax(); i++) {
		SeqUpdateData* info = seqTrackInfo + i;
		if (info->mSequence && info->mSequence->mState >= SOUNDSTATE_Playing) {
			checkPlayingSeqTrack(i);
			for (u8 j = 0; j < JAIGlobalParameter::getParamSeqTrackMax() + 1; j++) {
				if (info->_44[j] != 0) {
					if (j == 0x20 || (1 << j & info->mSequence->mSeqParameter.mUpdateData->_04) != 0) {
						SystemInterface::setSeqPortargsU32(info, j, 2, info->_44[j]);
						info->_4C[j]._30.addPortCmdOnce();
					}
				}
			}
		}
	}
}

/**
 * @note Address: 0x800B177C
 * @note Size: 0xA0
 */
void checkStartedSeq()
{
	for (u32 i = 0; i < JAIGlobalParameter::getParamSeqPlayTrackMax(); i++) {
		SeqUpdateData* info = &seqTrackInfo[i];
		if (info->mSequence && info->mSequence->mState == SOUNDSTATE_Ready
		    && SystemInterface::checkSeqActiveFlag(&info->mSequence->mSeqParameter.mTrack)) {
			info->mSequence->mState = SOUNDSTATE_Playing;
			SystemInterface::trackInit(info);
		}
	}
}

/**
 * @note Address: 0x800B181C
 * @note Size: 0x224
 */
void checkReadSeq()
{
	JAISequence* seq;
	for (u32 i = 0; i < JAIGlobalParameter::getParamSeqPlayTrackMax(); i++) {
		SeqUpdateData* info = &seqTrackInfo[i];
		seq                 = info->mSequence;
		if (!seq) {
			continue;
		}
		if (seq->mState != SOUNDSTATE_Loaded) {
			continue;
		}
		if (seq->mSeqParameter._27C != 0xFFFFFFFF) {
			continue;
		}
		if (seq->mSeqParameter.mUpdateData->mPrepareFlag) {
			continue;
		}
		if (seq->mSeqParameter.mTrack._35B) {
			continue;
		}

		seq->mSeqParameter.mTrack.setSeqData(info->mFilePtr, JASResArcLoader::getResSize(arcPointer, seq->mSoundInfo->mOffsetNo));
		seqTrackInfo[info->mSequence->_14].init();
		info->mSequence->mState = SOUNDSTATE_Ready;
		if (info->mSequence->mFadeCounter > 1) {
			info->mSequence->setVolume(0.0f, 0, SOUNDPARAM_Fadeout);
			info->mSequence->setVolume(1.0f, info->mSequence->mFadeCounter, SOUNDPARAM_Fadeout);
		}
		if (info->mPauseMode != SOUNDPAUSE_Unk0) {
			info->mSequence->setPauseMode(info->mPauseMode, info->mPauseVolume);
			info->_0C = 1.1f;
		}
		JAIBasic::getInterface()->setSeExtParameter(info->mSequence);
		checkPlayingSeqTrack(i);
		if (info->mSequence != nullptr) {
			SystemInterface::rootInit(info);
			seq->mSeqParameter.mTrack.startSeq();
		}
	}
}

/**
 * @note Address: 0x800B1A40
 * @note Size: 0xD8
 */
void checkSeqWave()
{
	for (u32 i = 0; i < JAIGlobalParameter::getParamSeqPlayTrackMax(); i++) {
		JAISequence* seq = seqTrackInfo[i].getSequence();
		if (!seq) {
			continue;
		}

		SeqParameter* param = &seq->mSeqParameter;
		if (!param) {
			continue;
		}

		u32 flag = param->getSceneFlag();
		if (flag == 0xFFFFFFFF) {
			continue;
		}

		u32 sceneFlag = BankWave::SceneSetFlag;
		if (sceneFlag == 0xFFFFFFFF) {
			continue;
		}

		if (flag != sceneFlag && flag != 0xFF00FF00) {
			if ((flag & 0xFFFF0000) != (sceneFlag & 0xFFFF0000) || flag != 0xFFFF) {
				if ((flag & 0xFFFF) != (sceneFlag & 0xFFFF)) {
					continue;
				}
				if (flag != 0xFFFF0000) {
					continue;
				}
			}
		}

		param->_27C = -1;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x138
 */
void checkPlayingSeqUpdateMultiplication(u32, u8, u32, JAInter::MoveParaSet*, u32*, u8, f32*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x178
 */
void checkPlayingSeqUpdateAddition(u32, u8, u32, JAInter::MoveParaSet*, u32*, u8, f32*, f32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x118
 */
void checkPlayingSeqUpdateTrack(u32, u32, JAInter::MoveParaSet*, u32*, u8, f32*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800B1B18
 * @note Size: 0x1078
 */
void checkPlayingSeqTrack(u32)
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stfd     f30, 0x80(r1)
	psq_st   f30, 136(r1), 0, qr0
	stfd     f29, 0x70(r1)
	psq_st   f29, 120(r1), 0, qr0
	stfd     f28, 0x60(r1)
	psq_st   f28, 104(r1), 0, qr0
	stmw     r20, 0x30(r1)
	mulli    r29, r3, 0x50
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	add      r31, r0, r29
	lwz      r3, 0x48(r31)
	addi     r30, r3, 0x48
	lbz      r0, 0x2c1(r3)
	cmplwi   r0, 2
	beq      lbl_800B2B5C
	lwz      r28, 0x44(r31)
	li       r20, 0
	li       r22, 0
	b        lbl_800B1B84

lbl_800B1B78:
	rlwinm   r0, r20, 2, 0x16, 0x1d
	addi     r20, r20, 1
	stwx     r22, r28, r0

lbl_800B1B84:
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	addi     r3, r3, 1
	clrlwi   r0, r20, 0x18
	cmplw    r0, r3
	blt      lbl_800B1B78
	lwz      r0, 8(r31)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_800B1C20
	lwz      r3, 0x48(r31)
	lwz      r4, 0x28(r3)
	cmplwi   r4, 0
	beq      lbl_800B1BC0
	lbz      r0, 0x15(r3)
	cmplwi   r0, 4
	bge      lbl_800B1BF0

lbl_800B1BC0:
	lbz      r0, 0x15(r3)
	cmplwi   r0, 3
	blt      lbl_800B1BD4
	addi     r3, r30, 0x2c4
	bl       stopSeq__8JASTrackFv

lbl_800B1BD4:
	lwz      r3, 0x48(r31)
	bl       clearMainSoundPPointer__8JAISoundFv
	lwz      r3, 0x48(r31)
	bl       stopSeq__Q27JAInter11SequenceMgrFP11JAISequence
	li       r0, 0
	stw      r0, 8(r31)
	b        lbl_800B2B5C

lbl_800B1BF0:
	lwz      r12, 0x10(r3)
	li       r5, 7
	lfs      f1, lbl_80516FA8@sda21(r2)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x48(r31)
	li       r0, 5
	stb      r0, 0x15(r3)
	lwz      r0, 8(r31)
	xori     r0, r0, 2
	stw      r0, 8(r31)

lbl_800B1C20:
	lwz      r3, 0x48(r31)
	cmplwi   r3, 0
	beq      lbl_800B1EC8
	lwz      r0, 0x38(r3)
	cmplwi   r0, 0
	beq      lbl_800B1EC8
	lbz      r3, 0x18(r3)
	cmplwi   r3, 4
	bne      lbl_800B1C54
	li       r20, 0
	bl       getParamAudioCameraMax__18JAIGlobalParameterFv
	mr       r25, r3
	b        lbl_800B1C5C

lbl_800B1C54:
	mr       r20, r3
	addi     r25, r3, 1

lbl_800B1C5C:
	mulli    r23, r20, 0x1c
	lfs      f31, lbl_80516FA8@sda21(r2)
	lfs      f28, lbl_80516FD0@sda21(r2)
	mr       r26, r20
	lfd      f29, lbl_80516FD8@sda21(r2)
	lis      r22, 0x4330
	mulli    r24, r20, 0xc
	b        lbl_800B1EC0

lbl_800B1C7C:
	lwz      r3, 0x48(r31)
	addi     r0, r24, 8
	lwz      r3, 0x34(r3)
	add      r27, r3, r23
	lfs      f0, 0(r27)
	mr       r5, r27
	stfs     f0, 0xc(r27)
	lfs      f0, 4(r27)
	stfs     f0, 0x10(r27)
	lfs      f0, 8(r27)
	stfs     f0, 0x14(r27)
	lwz      r4, msBasic__8JAIBasic@sda21(r13)
	lwz      r3, 0x48(r31)
	lwz      r6, 4(r4)
	lwz      r4, 0x3c(r3)
	lwzx     r3, r6, r0
	bl       PSMTXMultVec
	lfs      f1, 0(r27)
	lfs      f0, 4(r27)
	fmuls    f1, f1, f1
	lfs      f2, 8(r27)
	fmuls    f0, f0, f0
	fmuls    f2, f2, f2
	fadds    f0, f1, f0
	fadds    f4, f2, f0
	fcmpo    cr0, f4, f31
	ble      lbl_800B1D30
	frsqrte  f1, f4
	lfd      f3, lbl_80516FB8@sda21(r2)
	lfd      f2, lbl_80516FC0@sda21(r2)
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f4, f0, f2
	fmul     f1, f1, f0
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f4, f0, f2
	fmul     f1, f1, f0
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f4, f0, f2
	fmul     f0, f1, f0
	fmul     f4, f4, f0
	frsp     f4, f4
	b        lbl_800B1DB4

lbl_800B1D30:
	lfd      f0, lbl_80516FC8@sda21(r2)
	fcmpo    cr0, f4, f0
	bge      lbl_800B1D48
	lis      r3, __float_nan@ha
	lfs      f4, __float_nan@l(r3)
	b        lbl_800B1DB4

lbl_800B1D48:
	stfs     f4, 0xc(r1)
	lis      r0, 0x7f80
	lwz      r4, 0xc(r1)
	rlwinm   r3, r4, 0, 1, 8
	cmpw     r3, r0
	beq      lbl_800B1D70
	bge      lbl_800B1DA0
	cmpwi    r3, 0
	beq      lbl_800B1D88
	b        lbl_800B1DA0

lbl_800B1D70:
	clrlwi.  r0, r4, 9
	beq      lbl_800B1D80
	li       r0, 1
	b        lbl_800B1DA4

lbl_800B1D80:
	li       r0, 2
	b        lbl_800B1DA4

lbl_800B1D88:
	clrlwi.  r0, r4, 9
	beq      lbl_800B1D98
	li       r0, 5
	b        lbl_800B1DA4

lbl_800B1D98:
	li       r0, 3
	b        lbl_800B1DA4

lbl_800B1DA0:
	li       r0, 4

lbl_800B1DA4:
	cmpwi    r0, 1
	bne      lbl_800B1DB4
	lis      r3, __float_nan@ha
	lfs      f4, __float_nan@l(r3)

lbl_800B1DB4:
	stfs     f4, 0x18(r27)
	bl       getParamDistanceMax__18JAIGlobalParameterFv
	lwz      r3, 0x48(r31)
	li       r4, 0
	lwz      r12, 0x10(r3)
	lwz      r12, 0xbc(r12)
	mtctr    r12
	bctrl
	fmr      f30, f1
	bl       getParamDistanceParameterMoveTime__18JAIGlobalParameterFv
	fmuls    f0, f28, f30
	clrlwi   r4, r3, 0x18
	lwz      r3, 0x48(r31)
	li       r5, 4
	stw      r22, 0x18(r1)
	fctiwz   f0, f0
	lwz      r12, 0x10(r3)
	stfd     f0, 0x10(r1)
	lwz      r12, 0x1c(r12)
	lwz      r0, 0x14(r1)
	clrlwi   r0, r0, 0x18
	stw      r0, 0x1c(r1)
	lfd      f0, 0x18(r1)
	fsubs    f1, f0, f29
	mtctr    r12
	bctrl
	lwz      r3, 0x48(r31)
	lwz      r12, 0x10(r3)
	lwz      r12, 0xc0(r12)
	mtctr    r12
	bctrl
	fmr      f30, f1
	bl       getParamDistanceParameterMoveTime__18JAIGlobalParameterFv
	fctiwz   f0, f30
	clrlwi   r4, r3, 0x18
	lwz      r3, 0x48(r31)
	li       r5, 4
	stw      r22, 0x28(r1)
	lwz      r12, 0x10(r3)
	stfd     f0, 0x20(r1)
	lwz      r12, 0x24(r12)
	lwz      r0, 0x24(r1)
	clrlwi   r0, r0, 0x18
	stw      r0, 0x2c(r1)
	lfd      f0, 0x28(r1)
	fsubs    f1, f0, f29
	mtctr    r12
	bctrl
	lwz      r3, 0x48(r31)
	li       r4, 0x100
	lwz      r12, 0x10(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	fmr      f30, f1
	bl       getParamDopplarMoveTime__18JAIGlobalParameterFv
	mr       r4, r3
	lwz      r3, 0x48(r31)
	fmr      f1, f30
	li       r5, 4
	lwz      r12, 0x10(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r23, r23, 0x1c
	addi     r24, r24, 0xc
	addi     r26, r26, 1

lbl_800B1EC0:
	cmplw    r26, r25
	blt      lbl_800B1C7C

lbl_800B1EC8:
	lwz      r4, 0x48(r31)
	cmplwi   r4, 0
	beq      lbl_800B1EE0
	lwz      r3, 0x2c(r4)
	addi     r0, r3, 1
	stw      r0, 0x2c(r4)

lbl_800B1EE0:
	lwz      r0, 8(r31)
	cmplwi   r0, 0
	beq      lbl_800B2B5C
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	lwz      r26, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r27, r29, 8
	addi     r3, r3, 0xc
	lwzx     r0, r26, r27
	clrlwi   r23, r3, 0x18
	rlwinm.  r0, r0, 0, 0xd, 0xd
	beq      lbl_800B1FD4
	lfs      f28, lbl_80516FA0@sda21(r2)
	li       r25, 0
	li       r22, 1
	b        lbl_800B1F64

lbl_800B1F1C:
	clrlwi   r3, r25, 0x18
	lwz      r0, 0x284(r30)
	slw      r21, r22, r3
	rlwinm   r3, r25, 4, 0x14, 0x1b
	and.     r0, r0, r21
	add      r24, r30, r3
	addi     r24, r24, 0x110
	beq      lbl_800B1F58
	mr       r3, r24
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B1F58
	lwz      r0, 0x284(r30)
	xor      r0, r0, r21
	stw      r0, 0x284(r30)

lbl_800B1F58:
	lfs      f0, 4(r24)
	addi     r25, r25, 1
	fmuls    f28, f28, f0

lbl_800B1F64:
	clrlwi   r0, r25, 0x18
	cmplw    r0, r23
	blt      lbl_800B1F1C
	lfs      f0, 0xc(r31)
	fcmpu    cr0, f0, f28
	beq      lbl_800B1FBC
	stfs     f28, 0xc(r31)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	fmr      f1, f28
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	mr       r4, r3
	li       r5, 3
	add      r3, r0, r29
	bl
setSeqPortargsF32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcf
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	slwi     r4, r3, 2
	add      r3, r0, r29
	lwz      r3, 0x44(r3)
	lwzx     r0, r3, r4
	ori      r0, r0, 1
	stwx     r0, r3, r4

lbl_800B1FBC:
	lwz      r0, 0x284(r30)
	cmplwi   r0, 0
	bne      lbl_800B1FD4
	lwzx     r0, r26, r27
	xoris    r0, r0, 4
	stwx     r0, r26, r27

lbl_800B1FD4:
	lwz      r24, 0x250(r30)
	bl       getParamSeqParameterLines__18JAIGlobalParameterFv
	lwz      r26, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r25, r29, 8
	lwzx     r0, r26, r25
	rlwinm.  r0, r0, 0, 0xc, 0xc
	beq      lbl_800B20EC
	lfs      f28, lbl_80516FA8@sda21(r2)
	clrlwi   r22, r3, 0x18
	lfs      f31, lbl_80516FA4@sda21(r2)
	li       r27, 0
	li       r23, 1
	b        lbl_800B2050

lbl_800B2008:
	clrlwi   r3, r27, 0x18
	lwz      r0, 0x288(r30)
	slw      r20, r23, r3
	rlwinm   r3, r27, 4, 0x14, 0x1b
	and.     r0, r0, r20
	add      r21, r24, r3
	beq      lbl_800B2040
	mr       r3, r21
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B2040
	lwz      r0, 0x288(r30)
	xor      r0, r0, r20
	stw      r0, 0x288(r30)

lbl_800B2040:
	lfs      f0, 4(r21)
	addi     r27, r27, 1
	fsubs    f0, f0, f31
	fadds    f28, f28, f0

lbl_800B2050:
	clrlwi   r0, r27, 0x18
	cmplw    r0, r22
	blt      lbl_800B2008
	lfs      f1, lbl_80516FA4@sda21(r2)
	lfs      f0, lbl_80516FA0@sda21(r2)
	fadds    f28, f28, f1
	fcmpo    cr0, f28, f0
	ble      lbl_800B2078
	fmr      f28, f0
	b        lbl_800B2088

lbl_800B2078:
	lfs      f0, lbl_80516FA8@sda21(r2)
	fcmpo    cr0, f28, f0
	bge      lbl_800B2088
	fmr      f28, f0

lbl_800B2088:
	lfs      f0, 0x18(r31)
	fcmpu    cr0, f0, f28
	beq      lbl_800B20D4
	stfs     f28, 0x18(r31)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	fmr      f1, f28
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	mr       r4, r3
	li       r5, 5
	add      r3, r0, r29
	bl
setSeqPortargsF32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcf
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	slwi     r4, r3, 2
	add      r3, r0, r29
	lwz      r3, 0x44(r3)
	lwzx     r0, r3, r4
	ori      r0, r0, 4
	stwx     r0, r3, r4

lbl_800B20D4:
	lwz      r0, 0x288(r30)
	cmplwi   r0, 0
	bne      lbl_800B20EC
	lwzx     r0, r26, r25
	xoris    r0, r0, 8
	stwx     r0, r26, r25

lbl_800B20EC:
	lwz      r27, 0x254(r30)
	bl       getParamSeqParameterLines__18JAIGlobalParameterFv
	lwz      r26, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r25, r29, 8
	lwzx     r0, r26, r25
	rlwinm.  r0, r0, 0, 0xb, 0xb
	beq      lbl_800B21D0
	lfs      f28, lbl_80516FA0@sda21(r2)
	clrlwi   r22, r3, 0x18
	li       r24, 0
	li       r23, 1
	b        lbl_800B2160

lbl_800B211C:
	clrlwi   r3, r24, 0x18
	lwz      r0, 0x28c(r30)
	slw      r20, r23, r3
	rlwinm   r3, r24, 4, 0x14, 0x1b
	and.     r0, r0, r20
	add      r21, r27, r3
	beq      lbl_800B2154
	mr       r3, r21
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B2154
	lwz      r0, 0x28c(r30)
	xor      r0, r0, r20
	stw      r0, 0x28c(r30)

lbl_800B2154:
	lfs      f0, 4(r21)
	addi     r24, r24, 1
	fmuls    f28, f28, f0

lbl_800B2160:
	clrlwi   r0, r24, 0x18
	cmplw    r0, r22
	blt      lbl_800B211C
	lfs      f0, 0x10(r31)
	fcmpu    cr0, f0, f28
	beq      lbl_800B21B8
	stfs     f28, 0x10(r31)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	fmr      f1, f28
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	mr       r4, r3
	li       r5, 4
	add      r3, r0, r29
	bl
setSeqPortargsF32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcf
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	slwi     r4, r3, 2
	add      r3, r0, r29
	lwz      r3, 0x44(r3)
	lwzx     r0, r3, r4
	ori      r0, r0, 2
	stwx     r0, r3, r4

lbl_800B21B8:
	lwz      r0, 0x28c(r30)
	cmplwi   r0, 0
	bne      lbl_800B21D0
	lwzx     r0, r26, r25
	xoris    r0, r0, 0x10
	stwx     r0, r26, r25

lbl_800B21D0:
	lwz      r27, 0x258(r30)
	bl       getParamSeqParameterLines__18JAIGlobalParameterFv
	lwz      r26, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r25, r29, 8
	lwzx     r0, r26, r25
	rlwinm.  r0, r0, 0, 0xa, 0xa
	beq      lbl_800B22E4
	lfs      f28, lbl_80516FA8@sda21(r2)
	clrlwi   r22, r3, 0x18
	li       r24, 0
	li       r23, 1
	fmr      f31, f28
	b        lbl_800B224C

lbl_800B2204:
	clrlwi   r3, r24, 0x18
	lwz      r0, 0x290(r30)
	slw      r20, r23, r3
	rlwinm   r3, r24, 4, 0x14, 0x1b
	and.     r0, r0, r20
	add      r21, r27, r3
	beq      lbl_800B223C
	mr       r3, r21
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B223C
	lwz      r0, 0x290(r30)
	xor      r0, r0, r20
	stw      r0, 0x290(r30)

lbl_800B223C:
	lfs      f0, 4(r21)
	addi     r24, r24, 1
	fsubs    f0, f0, f31
	fadds    f28, f28, f0

lbl_800B224C:
	clrlwi   r0, r24, 0x18
	cmplw    r0, r22
	blt      lbl_800B2204
	lfs      f1, lbl_80516FA8@sda21(r2)
	lfs      f0, lbl_80516FA0@sda21(r2)
	fadds    f28, f28, f1
	fcmpo    cr0, f28, f0
	ble      lbl_800B2274
	fmr      f28, f0
	b        lbl_800B2280

lbl_800B2274:
	fcmpo    cr0, f28, f1
	bge      lbl_800B2280
	fmr      f28, f1

lbl_800B2280:
	lfs      f0, 0x14(r31)
	fcmpu    cr0, f0, f28
	beq      lbl_800B22CC
	stfs     f28, 0x14(r31)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	fmr      f1, f28
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	mr       r4, r3
	li       r5, 6
	add      r3, r0, r29
	bl
setSeqPortargsF32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcf
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	slwi     r4, r3, 2
	add      r3, r0, r29
	lwz      r3, 0x44(r3)
	lwzx     r0, r3, r4
	ori      r0, r0, 8
	stwx     r0, r3, r4

lbl_800B22CC:
	lwz      r0, 0x290(r30)
	cmplwi   r0, 0
	bne      lbl_800B22E4
	lwzx     r0, r26, r25
	xoris    r0, r0, 0x20
	stwx     r0, r26, r25

lbl_800B22E4:
	lwz      r27, 0x25c(r30)
	bl       getParamSeqParameterLines__18JAIGlobalParameterFv
	lwz      r26, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r25, r29, 8
	lwzx     r0, r26, r25
	rlwinm.  r0, r0, 0, 9, 9
	beq      lbl_800B23FC
	lfs      f28, lbl_80516FA8@sda21(r2)
	clrlwi   r23, r3, 0x18
	lfs      f31, lbl_80516FA4@sda21(r2)
	li       r24, 0
	li       r22, 1
	b        lbl_800B2360

lbl_800B2318:
	clrlwi   r3, r24, 0x18
	lwz      r0, 0x294(r30)
	slw      r20, r22, r3
	rlwinm   r3, r24, 4, 0x14, 0x1b
	and.     r0, r0, r20
	add      r21, r27, r3
	beq      lbl_800B2350
	mr       r3, r21
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B2350
	lwz      r0, 0x294(r30)
	xor      r0, r0, r20
	stw      r0, 0x294(r30)

lbl_800B2350:
	lfs      f0, 4(r21)
	addi     r24, r24, 1
	fsubs    f0, f0, f31
	fadds    f28, f28, f0

lbl_800B2360:
	clrlwi   r0, r24, 0x18
	cmplw    r0, r23
	blt      lbl_800B2318
	lfs      f1, lbl_80516FA4@sda21(r2)
	lfs      f0, lbl_80516FA0@sda21(r2)
	fadds    f28, f28, f1
	fcmpo    cr0, f28, f0
	ble      lbl_800B2388
	fmr      f28, f0
	b        lbl_800B2398

lbl_800B2388:
	lfs      f0, lbl_80516FA8@sda21(r2)
	fcmpo    cr0, f28, f0
	bge      lbl_800B2398
	fmr      f28, f0

lbl_800B2398:
	lfs      f0, 0x1c(r31)
	fcmpu    cr0, f0, f28
	beq      lbl_800B23E4
	stfs     f28, 0x1c(r31)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	fmr      f1, f28
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	mr       r4, r3
	li       r5, 7
	add      r3, r0, r29
	bl
setSeqPortargsF32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcf
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	slwi     r4, r3, 2
	add      r3, r0, r29
	lwz      r3, 0x44(r3)
	lwzx     r0, r3, r4
	ori      r0, r0, 0x10
	stwx     r0, r3, r4

lbl_800B23E4:
	lwz      r0, 0x294(r30)
	cmplwi   r0, 0
	bne      lbl_800B23FC
	lwzx     r0, r26, r25
	xoris    r0, r0, 0x40
	stwx     r0, r26, r25

lbl_800B23FC:
	lwz      r0, 8(r31)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_800B2468
	mr       r3, r30
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B2424
	lwz      r0, 8(r31)
	xori     r0, r0, 4
	stw      r0, 8(r31)

lbl_800B2424:
	lfs      f0, 0x20(r31)
	lfs      f1, 4(r30)
	fcmpu    cr0, f0, f1
	beq      lbl_800B2468
	stfs     f1, 0x20(r31)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	mr       r4, r3
	lfs      f1, 4(r30)
	li       r5, 0xa
	add      r3, r0, r29
	bl
setSeqPortargsF32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcf
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	slwi     r3, r3, 2
	lwzx     r0, r28, r3
	ori      r0, r0, 0x80
	stwx     r0, r28, r3

lbl_800B2468:
	lwz      r0, 8(r31)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_800B2530
	li       r23, 0
	b        lbl_800B250C

lbl_800B247C:
	clrlwi   r21, r23, 0x18
	li       r0, 1
	lwz      r3, 0x280(r30)
	slw      r20, r0, r21
	and.     r0, r3, r20
	beq      lbl_800B24B8
	rlwinm   r3, r23, 4, 0x14, 0x1b
	addi     r3, r3, 0x10
	add      r3, r30, r3
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B24B8
	lwz      r0, 0x280(r30)
	xor      r0, r0, r20
	stw      r0, 0x280(r30)

lbl_800B24B8:
	slwi     r20, r21, 0x10
	addi     r3, r30, 0x2c4
	mr       r4, r20
	addi     r5, r1, 8
	bl       readPortApp__8JASTrackFUlPUs
	rlwinm   r3, r23, 4, 0x14, 0x1b
	lhz      r4, 8(r1)
	addi     r0, r3, 0x14
	lfsx     f0, r30, r0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	clrlwi   r0, r0, 0x10
	cmplw    r4, r0
	beq      lbl_800B2508
	stfd     f0, 0x28(r1)
	mr       r4, r20
	addi     r3, r30, 0x2c4
	lwz      r5, 0x2c(r1)
	bl       writePortApp__8JASTrackFUlUs

lbl_800B2508:
	addi     r23, r23, 1

lbl_800B250C:
	clrlwi   r0, r23, 0x18
	cmplwi   r0, 0x10
	blt      lbl_800B247C
	lwz      r0, 0x280(r30)
	cmplwi   r0, 0
	bne      lbl_800B2530
	lwz      r0, 8(r31)
	xori     r0, r0, 0x10
	stw      r0, 8(r31)

lbl_800B2530:
	lwz      r3, 8(r31)
	rlwinm.  r0, r3, 0, 0x1a, 0x1a
	beq      lbl_800B25F0
	xori     r0, r3, 0x20
	li       r23, 0
	stw      r0, 8(r31)
	b        lbl_800B25E0

lbl_800B254C:
	lwz      r26, 0x2bc(r30)
	clrlwi   r27, r23, 0x18
	lbzx     r4, r26, r27
	rlwinm   r3, r4, 0x1b, 0x1f, 0x1f
	neg      r0, r3
	or       r0, r0, r3
	srwi     r0, r0, 0x1f
	cmplwi   r0, 1
	bne      lbl_800B25DC
	rlwinm   r5, r4, 0x19, 0x1f, 0x1f
	rlwinm   r3, r4, 0x1a, 0x1f, 0x1f
	neg      r4, r5
	neg      r0, r3
	or       r4, r4, r5
	or       r0, r0, r3
	srwi     r3, r4, 0x1f
	srwi     r0, r0, 0x1f
	cmplw    r3, r0
	beq      lbl_800B25DC
	lwz      r3, 0x48(r31)
	mr       r4, r23
	bl       trackToSeqp__Q27JAInter15SystemInterfaceFP11JAISequenceUc
	cmplwi   r3, 0
	beq      lbl_800B25C4
	lbzx     r0, r26, r27
	rlwinm   r4, r0, 0x1a, 0x1f, 0x1f
	neg      r0, r4
	or       r0, r0, r4
	srwi     r4, r0, 0x1f
	bl       muteTrack__8JASTrackFb

lbl_800B25C4:
	lbzx     r4, r26, r27
	rlwinm   r3, r4, 0x1a, 0x1f, 0x1f
	neg      r0, r3
	or       r0, r0, r3
	rlwimi   r4, r0, 8, 0x18, 0x18
	stbx     r4, r26, r27

lbl_800B25DC:
	addi     r23, r23, 1

lbl_800B25E0:
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	clrlwi   r0, r23, 0x18
	cmplw    r0, r3
	blt      lbl_800B254C

lbl_800B25F0:
	lwz      r27, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r25, r29, 8
	lwz      r23, 0x24(r31)
	lwzx     r0, r27, r25
	lwz      r26, 0x260(r30)
	rlwinm.  r0, r0, 0, 0x19, 0x19
	beq      lbl_800B26C4
	li       r24, 0
	b        lbl_800B269C

lbl_800B2614:
	li       r0, 1
	lwz      r3, 0x298(r30)
	slw      r20, r0, r4
	rlwinm   r4, r24, 4, 0x14, 0x1b
	and.     r0, r3, r20
	clrlwi   r22, r24, 0x18
	add      r21, r26, r4
	beq      lbl_800B2698
	mr       r3, r21
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B2650
	lwz      r0, 0x298(r30)
	xor      r0, r0, r20
	stw      r0, 0x298(r30)

lbl_800B2650:
	slwi     r20, r22, 2
	lfs      f1, 4(r21)
	lfsx     f0, r23, r20
	fcmpu    cr0, f1, f0
	beq      lbl_800B2698
	stfsx    f1, r23, r20
	mr       r4, r22
	li       r5, 3
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	lfs      f1, 4(r21)
	add      r3, r0, r29
	bl
setSeqPortargsF32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcf
	lwz      r3, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r0, r3, 0x44
	lwzx     r3, r29, r0
	lwzx     r0, r3, r20
	ori      r0, r0, 1
	stwx     r0, r3, r20

lbl_800B2698:
	addi     r24, r24, 1

lbl_800B269C:
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	clrlwi   r4, r24, 0x18
	cmplw    r4, r3
	blt      lbl_800B2614
	lwz      r0, 0x298(r30)
	cmplwi   r0, 0
	bne      lbl_800B26C4
	lwzx     r0, r27, r25
	xori     r0, r0, 0x40
	stwx     r0, r27, r25

lbl_800B26C4:
	lwz      r27, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r24, r29, 8
	lwz      r26, 0x30(r31)
	lwzx     r0, r27, r24
	lwz      r25, 0x264(r30)
	rlwinm.  r0, r0, 0, 0x18, 0x18
	beq      lbl_800B2798
	li       r23, 0
	b        lbl_800B2770

lbl_800B26E8:
	li       r0, 1
	lwz      r3, 0x29c(r30)
	slw      r20, r0, r4
	rlwinm   r4, r23, 4, 0x14, 0x1b
	and.     r0, r3, r20
	clrlwi   r22, r23, 0x18
	add      r21, r25, r4
	beq      lbl_800B276C
	mr       r3, r21
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B2724
	lwz      r0, 0x29c(r30)
	xor      r0, r0, r20
	stw      r0, 0x29c(r30)

lbl_800B2724:
	slwi     r20, r22, 2
	lfs      f1, 4(r21)
	lfsx     f0, r26, r20
	fcmpu    cr0, f1, f0
	beq      lbl_800B276C
	stfsx    f1, r26, r20
	mr       r4, r22
	li       r5, 5
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	lfs      f1, 4(r21)
	add      r3, r0, r29
	bl
setSeqPortargsF32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcf
	lwz      r3, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r0, r3, 0x44
	lwzx     r3, r29, r0
	lwzx     r0, r3, r20
	ori      r0, r0, 4
	stwx     r0, r3, r20

lbl_800B276C:
	addi     r23, r23, 1

lbl_800B2770:
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	clrlwi   r4, r23, 0x18
	cmplw    r4, r3
	blt      lbl_800B26E8
	lwz      r0, 0x29c(r30)
	cmplwi   r0, 0
	bne      lbl_800B2798
	lwzx     r0, r27, r24
	xori     r0, r0, 0x80
	stwx     r0, r27, r24

lbl_800B2798:
	lwz      r27, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r24, r29, 8
	lwz      r26, 0x28(r31)
	lwzx     r0, r27, r24
	lwz      r25, 0x268(r30)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_800B286C
	li       r23, 0
	b        lbl_800B2844

lbl_800B27BC:
	li       r0, 1
	lwz      r3, 0x2a0(r30)
	slw      r20, r0, r4
	rlwinm   r4, r23, 4, 0x14, 0x1b
	and.     r0, r3, r20
	clrlwi   r22, r23, 0x18
	add      r21, r25, r4
	beq      lbl_800B2840
	mr       r3, r21
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B27F8
	lwz      r0, 0x2a0(r30)
	xor      r0, r0, r20
	stw      r0, 0x2a0(r30)

lbl_800B27F8:
	slwi     r20, r22, 2
	lfs      f1, 4(r21)
	lfsx     f0, r26, r20
	fcmpu    cr0, f1, f0
	beq      lbl_800B2840
	stfsx    f1, r26, r20
	mr       r4, r22
	li       r5, 4
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	lfs      f1, 4(r21)
	add      r3, r0, r29
	bl
setSeqPortargsF32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcf
	lwz      r3, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r0, r3, 0x44
	lwzx     r3, r29, r0
	lwzx     r0, r3, r20
	ori      r0, r0, 2
	stwx     r0, r3, r20

lbl_800B2840:
	addi     r23, r23, 1

lbl_800B2844:
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	clrlwi   r4, r23, 0x18
	cmplw    r4, r3
	blt      lbl_800B27BC
	lwz      r0, 0x2a0(r30)
	cmplwi   r0, 0
	bne      lbl_800B286C
	lwzx     r0, r27, r24
	xori     r0, r0, 0x200
	stwx     r0, r27, r24

lbl_800B286C:
	lwz      r27, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r24, r29, 8
	lwz      r26, 0x2c(r31)
	lwzx     r0, r27, r24
	lwz      r25, 0x26c(r30)
	rlwinm.  r0, r0, 0, 0x14, 0x14
	beq      lbl_800B2940
	li       r23, 0
	b        lbl_800B2918

lbl_800B2890:
	li       r0, 1
	lwz      r3, 0x2a4(r30)
	slw      r20, r0, r4
	rlwinm   r4, r23, 4, 0x14, 0x1b
	and.     r0, r3, r20
	clrlwi   r22, r23, 0x18
	add      r21, r25, r4
	beq      lbl_800B2914
	mr       r3, r21
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B28CC
	lwz      r0, 0x2a4(r30)
	xor      r0, r0, r20
	stw      r0, 0x2a4(r30)

lbl_800B28CC:
	slwi     r20, r22, 2
	lfs      f1, 4(r21)
	lfsx     f0, r26, r20
	fcmpu    cr0, f1, f0
	beq      lbl_800B2914
	stfsx    f1, r26, r20
	mr       r4, r22
	li       r5, 6
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	lfs      f1, 4(r21)
	add      r3, r0, r29
	bl
setSeqPortargsF32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcf
	lwz      r3, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r0, r3, 0x44
	lwzx     r3, r29, r0
	lwzx     r0, r3, r20
	ori      r0, r0, 8
	stwx     r0, r3, r20

lbl_800B2914:
	addi     r23, r23, 1

lbl_800B2918:
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	clrlwi   r4, r23, 0x18
	cmplw    r4, r3
	blt      lbl_800B2890
	lwz      r0, 0x2a4(r30)
	cmplwi   r0, 0
	bne      lbl_800B2940
	lwzx     r0, r27, r24
	xori     r0, r0, 0x800
	stwx     r0, r27, r24

lbl_800B2940:
	lwz      r27, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r24, r29, 8
	lwz      r26, 0x34(r31)
	lwzx     r0, r27, r24
	lwz      r25, 0x270(r30)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_800B2A14
	li       r23, 0
	b        lbl_800B29EC

lbl_800B2964:
	li       r0, 1
	lwz      r3, 0x2a8(r30)
	slw      r20, r0, r4
	rlwinm   r4, r23, 4, 0x14, 0x1b
	and.     r0, r3, r20
	clrlwi   r22, r23, 0x18
	add      r21, r25, r4
	beq      lbl_800B29E8
	mr       r3, r21
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B29A0
	lwz      r0, 0x2a8(r30)
	xor      r0, r0, r20
	stw      r0, 0x2a8(r30)

lbl_800B29A0:
	slwi     r20, r22, 2
	lfs      f1, 4(r21)
	lfsx     f0, r26, r20
	fcmpu    cr0, f1, f0
	beq      lbl_800B29E8
	stfsx    f1, r26, r20
	mr       r4, r22
	li       r5, 7
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	lfs      f1, 4(r21)
	add      r3, r0, r29
	bl
setSeqPortargsF32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcf
	lwz      r3, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r0, r3, 0x44
	lwzx     r3, r29, r0
	lwzx     r0, r3, r20
	ori      r0, r0, 0x10
	stwx     r0, r3, r20

lbl_800B29E8:
	addi     r23, r23, 1

lbl_800B29EC:
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	clrlwi   r4, r23, 0x18
	cmplw    r4, r3
	blt      lbl_800B2964
	lwz      r0, 0x2a8(r30)
	cmplwi   r0, 0
	bne      lbl_800B2A14
	lwzx     r0, r27, r24
	xori     r0, r0, 0x100
	stwx     r0, r27, r24

lbl_800B2A14:
	lwz      r3, 8(r31)
	rlwinm.  r0, r3, 0, 8, 8
	beq      lbl_800B2A8C
	xoris    r0, r3, 0x80
	li       r21, 0
	stw      r0, 8(r31)
	li       r23, 0
	b        lbl_800B2A7C

lbl_800B2A34:
	lwz      r3, 0x2b8(r30)
	clrlwi   r20, r21, 0x18
	lbzx     r0, r3, r20
	cmplwi   r0, 1
	bne      lbl_800B2A78
	slwi     r3, r20, 2
	mr       r4, r20
	lwzx     r0, r28, r3
	li       r5, 9
	li       r6, 1
	ori      r0, r0, 0x40
	stwx     r0, r28, r3
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	add      r3, r0, r29
	bl
setSeqPortargsU32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcUl
	lwz      r3, 0x2b8(r30)
	stbx     r23, r3, r20

lbl_800B2A78:
	addi     r21, r21, 1

lbl_800B2A7C:
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	clrlwi   r0, r21, 0x18
	cmplw    r0, r3
	blt      lbl_800B2A34

lbl_800B2A8C:
	lwz      r0, 8(r31)
	rlwinm.  r0, r0, 0, 0x13, 0x13
	beq      lbl_800B2B5C
	li       r23, 0
	b        lbl_800B2B34

lbl_800B2AA0:
	li       r0, 1
	lwz      r3, 0x2b0(r30)
	slw      r4, r0, r4
	and.     r0, r3, r4
	beq      lbl_800B2B30
	xor      r0, r3, r4
	rlwinm   r21, r23, 2, 0x16, 0x1d
	stw      r0, 0x2b0(r30)
	li       r24, 0
	b        lbl_800B2B24

lbl_800B2AC8:
	lwz      r0, 0x2b4(r30)
	clrlwi   r3, r24, 0x18
	li       r4, 1
	lwzx     r0, r21, r0
	slw      r20, r4, r3
	and.     r0, r20, r0
	beq      lbl_800B2B20
	lwz      r3, 0x48(r31)
	mr       r4, r23
	mr       r5, r24
	bl       getTrackPortRoute__8JAISoundFUcUc
	lwz      r5, 0x274(r30)
	mr       r4, r3
	rlwinm   r0, r24, 1, 0x17, 0x1e
	addi     r3, r30, 0x2c4
	lwzx     r5, r21, r5
	lhzx     r5, r5, r0
	bl       writePortApp__8JASTrackFUlUs
	lwz      r3, 0x2b4(r30)
	lwzx     r0, r21, r3
	xor      r0, r0, r20
	stwx     r0, r21, r3

lbl_800B2B20:
	addi     r24, r24, 1

lbl_800B2B24:
	clrlwi   r0, r24, 0x18
	cmplwi   r0, 0x10
	blt      lbl_800B2AC8

lbl_800B2B30:
	addi     r23, r23, 1

lbl_800B2B34:
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	clrlwi   r4, r23, 0x18
	cmplw    r4, r3
	blt      lbl_800B2AA0
	lwz      r0, 0x2b0(r30)
	cmplwi   r0, 0
	bne      lbl_800B2B5C
	lwz      r0, 8(r31)
	xori     r0, r0, 0x1000
	stw      r0, 8(r31)

lbl_800B2B5C:
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	psq_l    f28, 104(r1), 0, qr0
	lfd      f28, 0x60(r1)
	lmw      r20, 0x30(r1)
	lwz      r0, 0xa4(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/**
 * @note Address: 0x800B2B90
 * @note Size: 0x2C
 */
void JAISequence::setPitch(f32 value, u32 moveTime, u8 type) { setSeqInterPitch(type, value, moveTime); }

/**
 * @note Address: 0x800B2BBC
 * @note Size: 0x2C
 */
void JAISequence::setPan(f32 value, u32 moveTime, u8 type) { setSeqInterPan(type, value, moveTime); }

/**
 * @note Address: 0x800B2BE8
 * @note Size: 0x130
 */
void stopSeq(JAISequence* seq)
{
	if (seq->getSwBit() & 0x1) {
		for (u32 i = 0; i < JAIGlobalParameter::getParamSeqPlayTrackMax(); i++) {
			JAISequence* playingSeq = seqTrackInfo[i].mSequence;
			if (seq != playingSeq && playingSeq && !(playingSeq->getSwBit() & 0x2)) {
				playingSeq->setVolume(1.0f, 10, SOUNDPARAM_Unk10);
			}
		}
	}

	seq->mMainSoundPPointer        = nullptr;
	seq->mSeqParameter.mUpdateData = nullptr;
	if (seq->mState >= SOUNDSTATE_Ready) {
		if (customHeapCallback) {
			customHeapCallback(2, seq->mSoundInfo->mOffsetNo, seq);
		} else {
			HeapMgr::releaseAutoHeapPointer(seq->mSeqParameter._278);
		}
	}

	seq->mState = SOUNDSTATE_Inactive;
	seqControl.releaseSound(seq);
	seqTrackInfo[seq->_14].mSequence = nullptr;
}

/**
 * @note Address: 0x800B2D18
 * @note Size: 0xE4
 */
void checkDvdLoadArc(u32 p1, u32 p2)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	clrlwi   r31, r4, 0x18
	stw      r30, 0x18(r1)
	rlwinm   r30, r4, 0x10, 0x16, 0x1f
	stw      r29, 0x14(r1)
	rlwinm   r29, r4, 0x18, 0x19, 0x1f
	stw      r28, 0x10(r1)
	rlwinm.  r28, r4, 0x11, 0x1f, 0x1f
	bne      lbl_800B2D58
	mr       r3, r29
	li       r4, 0
	bl       setAutoHeapLoadedFlag__Q27JAInter7HeapMgrFUcUc
	b        lbl_800B2D64

lbl_800B2D58:
	mr       r3, r29
	li       r4, 0
	bl       setStayHeapLoadedFlag__Q27JAInter7HeapMgrFUcUc

lbl_800B2D64:
	cmplwi   r31, 0xfe
	bge      lbl_800B2DC8
	mulli    r3, r31, 0x50
	lwz      r4, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	li       r0, 0
	add      r3, r4, r3
	lwz      r4, 0x48(r3)
	cmplwi   r4, 0
	stb      r0, 3(r3)
	beq      lbl_800B2DB4
	lbz      r0, 0x15(r4)
	cmplwi   r0, 1
	bne      lbl_800B2DB4
	lwz      r3, 0x44(r4)
	lhz      r0, 6(r3)
	cmplw    r30, r0
	bne      lbl_800B2DB4
	li       r0, 2
	stb      r0, 0x15(r4)
	b        lbl_800B2DDC

lbl_800B2DB4:
	cmplwi   r28, 0
	bne      lbl_800B2DDC
	mr       r3, r29
	bl       releaseAutoHeapPointer__Q27JAInter7HeapMgrFUc
	b        lbl_800B2DDC

lbl_800B2DC8:
	bne      lbl_800B2DDC
	cmplwi   r28, 0
	bne      lbl_800B2DDC
	mr       r3, r29
	bl       releaseAutoHeapPointer__Q27JAInter7HeapMgrFUc

lbl_800B2DDC:
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

/**
 * @note Address: 0x800B2DFC
 * @note Size: 0x9C
 */
void checkCustomDvdLoadArc(u32 p1, u32 index)
{
	JAISequence* sequence   = seqTrackInfo[index].mSequence;
	seqTrackInfo[index]._03 = 0;
	CustomHeapInfo info     = customHeapCallback(1, sequence->mSoundInfo->mOffsetNo, sequence);
	if (sequence && sequence->mState == SOUNDSTATE_Stored) {
		sequence->mState = SOUNDSTATE_Loaded;
	} else {
		CustomHeapInfo info2 = customHeapCallback(2, sequence->mSoundInfo->mOffsetNo, sequence);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
void checkCustomDvdPreloadArc(u32, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800B2E98
 * @note Size: 0x430
 */
void storeSeqBuffer(JAISequence**, JAInter::Actor*, u32, u32, u8, JAInter::SoundInfo*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stmw      r17, 0x24(r1)
	  mr.       r22, r3
	  mr        r27, r8
	  mr        r23, r4
	  mr        r24, r5
	  mr        r25, r6
	  mr        r26, r7
	  lbz       r29, 0x5(r8)
	  beq-      .loc_0x74
	  lwz       r3, 0x0(r22)
	  cmplwi    r3, 0
	  beq-      .loc_0x74
	  lbz       r0, 0x14(r3)
	  cmplw     r29, r0
	  beq-      .loc_0x60
	  lwz       r12, 0x10(r3)
	  li        r4, 0
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x74

	.loc_0x60:
	  mr        r4, r24
	  mr        r5, r27
	  bl        0x2610
	  cmplwi    r3, 0
	  bne-      .loc_0x41C

	.loc_0x74:
	  mulli     r31, r29, 0x50
	  lwz       r21, -0x73F8(r13)
	  addi      r28, r31, 0x48
	  lwzx      r4, r21, r28
	  cmplwi    r4, 0
	  bne-      .loc_0x94
	  li        r5, 0x1
	  b         .loc_0x2F4

	.loc_0x94:
	  lbz       r0, 0x15(r4)
	  cmplwi    r0, 0x5
	  bne-      .loc_0x1B0
	  addi      r3, r4, 0x30C
	  bl        -0x11FE4
	  lwzx      r3, r21, r28
	  bl        0xC2C
	  lwzx      r19, r21, r28
	  mr        r3, r19
	  bl        0xBF8
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x130
	  li        r20, 0
	  mr        r18, r20
	  b         .loc_0x124

	.loc_0xD0:
	  lwz       r3, -0x73F8(r13)
	  addi      r0, r18, 0x48
	  lwzx      r17, r3, r0
	  cmplw     r19, r17
	  beq-      .loc_0x11C
	  cmplwi    r17, 0
	  beq-      .loc_0x11C
	  mr        r3, r17
	  bl        0xBC0
	  rlwinm.   r0,r3,0,30,30
	  bne-      .loc_0x11C
	  mr        r3, r17
	  lfs       f1, -0x73C0(r2)
	  lwz       r12, 0x10(r17)
	  li        r4, 0xA
	  li        r5, 0xA
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x11C:
	  addi      r18, r18, 0x50
	  addi      r20, r20, 0x1

	.loc_0x124:
	  bl        -0x54F0
	  cmplw     r20, r3
	  blt+      .loc_0xD0

	.loc_0x130:
	  li        r0, 0
	  stw       r0, 0x40(r19)
	  stw       r0, 0x308(r19)
	  lbz       r0, 0x15(r19)
	  cmplwi    r0, 0x3
	  blt-      .loc_0x17C
	  lwz       r12, -0x73E4(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x174
	  lwz       r4, 0x44(r19)
	  mr        r6, r19
	  addi      r3, r1, 0x10
	  lhz       r5, 0x6(r4)
	  li        r4, 0x2
	  mtctr     r12
	  bctrl
	  b         .loc_0x17C

	.loc_0x174:
	  lbz       r3, 0x2C0(r19)
	  bl        -0x2974

	.loc_0x17C:
	  li        r0, 0
	  mr        r4, r19
	  stb       r0, 0x15(r19)
	  subi      r3, r13, 0x73F0
	  bl        0x27C8
	  lbz       r0, 0x14(r19)
	  li        r4, 0
	  lwz       r3, -0x73F8(r13)
	  li        r5, 0x1
	  mulli     r0, r0, 0x50
	  add       r3, r3, r0
	  stw       r4, 0x48(r3)
	  b         .loc_0x2F4

	.loc_0x1B0:
	  cmplwi    r0, 0x1
	  bne-      .loc_0x1C4
	  li        r0, 0
	  stw       r0, 0x0(r22)
	  b         .loc_0x41C

	.loc_0x1C4:
	  lwz       r3, 0x44(r4)
	  lbz       r0, 0x4(r27)
	  lbz       r3, 0x4(r3)
	  cmplw     r3, r0
	  bgt-      .loc_0x2E8
	  addi      r3, r4, 0x30C
	  bl        -0x1211C
	  lwzx      r3, r21, r28
	  bl        0xAF4
	  lwzx      r20, r21, r28
	  mr        r3, r20
	  bl        0xAC0
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x268
	  li        r19, 0
	  mr        r18, r19
	  b         .loc_0x25C

	.loc_0x208:
	  lwz       r3, -0x73F8(r13)
	  addi      r0, r18, 0x48
	  lwzx      r17, r3, r0
	  cmplw     r20, r17
	  beq-      .loc_0x254
	  cmplwi    r17, 0
	  beq-      .loc_0x254
	  mr        r3, r17
	  bl        0xA88
	  rlwinm.   r0,r3,0,30,30
	  bne-      .loc_0x254
	  mr        r3, r17
	  lfs       f1, -0x73C0(r2)
	  lwz       r12, 0x10(r17)
	  li        r4, 0xA
	  li        r5, 0xA
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x254:
	  addi      r18, r18, 0x50
	  addi      r19, r19, 0x1

	.loc_0x25C:
	  bl        -0x5628
	  cmplw     r19, r3
	  blt+      .loc_0x208

	.loc_0x268:
	  li        r0, 0
	  stw       r0, 0x40(r20)
	  stw       r0, 0x308(r20)
	  lbz       r0, 0x15(r20)
	  cmplwi    r0, 0x3
	  blt-      .loc_0x2B4
	  lwz       r12, -0x73E4(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x2AC
	  lwz       r4, 0x44(r20)
	  mr        r6, r20
	  addi      r3, r1, 0x8
	  lhz       r5, 0x6(r4)
	  li        r4, 0x2
	  mtctr     r12
	  bctrl
	  b         .loc_0x2B4

	.loc_0x2AC:
	  lbz       r3, 0x2C0(r20)
	  bl        -0x2AAC

	.loc_0x2B4:
	  li        r0, 0
	  mr        r4, r20
	  stb       r0, 0x15(r20)
	  subi      r3, r13, 0x73F0
	  bl        0x2690
	  lbz       r0, 0x14(r20)
	  li        r4, 0
	  lwz       r3, -0x73F8(r13)
	  li        r5, 0x1
	  mulli     r0, r0, 0x50
	  add       r3, r3, r0
	  stw       r4, 0x48(r3)
	  b         .loc_0x2F4

	.loc_0x2E8:
	  li        r0, 0
	  stw       r0, 0x0(r22)
	  b         .loc_0x41C

	.loc_0x2F4:
	  cmplwi    r5, 0
	  beq-      .loc_0x3E4
	  subi      r3, r13, 0x73F0
	  bl        0x25D4
	  mr.       r30, r3
	  bne-      .loc_0x318
	  li        r0, 0
	  stw       r0, 0x0(r22)
	  b         .loc_0x41C

	.loc_0x318:
	  addi      r3, r30, 0x48
	  bl        .loc_0x430
	  stwx      r30, r21, r28
	  li        r4, 0x1
	  li        r18, 0
	  lwzx      r3, r21, r28
	  stw       r24, 0x20(r3)
	  lwz       r0, -0x73F8(r13)
	  lwzx      r3, r21, r28
	  add       r0, r0, r31
	  stw       r0, 0x308(r3)
	  lwzx      r3, r21, r28
	  stb       r29, 0x14(r3)
	  lwz       r0, -0x73F8(r13)
	  add       r3, r0, r31
	  stw       r4, 0x8(r3)
	  lwz       r0, -0x73F8(r13)
	  add       r3, r0, r31
	  stb       r18, 0x2(r3)
	  lwz       r0, -0x73F8(r13)
	  add       r3, r0, r31
	  stw       r18, 0x4(r3)
	  lwz       r0, 0x0(r27)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x3E4
	  li        r17, 0
	  b         .loc_0x3D8

	.loc_0x384:
	  lwz       r3, -0x73F8(r13)
	  addi      r0, r18, 0x48
	  cmplw     r17, r29
	  lwzx      r19, r3, r0
	  beq-      .loc_0x3D0
	  cmplwi    r19, 0
	  beq-      .loc_0x3D0
	  mr        r3, r19
	  bl        0x90C
	  rlwinm.   r0,r3,0,30,30
	  bne-      .loc_0x3D0
	  mr        r3, r19
	  lfs       f1, -0x73B8(r2)
	  lwz       r12, 0x10(r19)
	  li        r4, 0xA
	  li        r5, 0xA
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3D0:
	  addi      r18, r18, 0x50
	  addi      r17, r17, 0x1

	.loc_0x3D8:
	  bl        -0x57A4
	  cmplw     r17, r3
	  blt+      .loc_0x384

	.loc_0x3E4:
	  mr        r3, r30
	  mr        r4, r22
	  lwz       r12, 0x10(r30)
	  mr        r5, r23
	  mr        r6, r24
	  mr        r7, r25
	  lwz       r12, 0xC8(r12)
	  mr        r8, r26
	  mr        r9, r27
	  mtctr     r12
	  bctrl
	  cmplwi    r22, 0
	  beq-      .loc_0x41C
	  stw       r30, 0x0(r22)

	.loc_0x41C:
	  lmw       r17, 0x24(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr

	.loc_0x430:
	*/
}

/**
 * @note Address: 0x800B32C8
 * @note Size: 0x388
 */
void JAInter::SeqParameter::init()
{
	mTrack.assignExtBuffer(&mOuterParam);
	// TODO: is this something like assigning a new (on stack) MoveParaSet? Can't do that to `this`, though...
	_27C       = 0xFFFFFFFF;
	_00        = MoveParaSet();
	mPauseMode = SOUNDPAUSE_Unk0;
	_27A       = 0;
	_280       = 0;

	mVolumeFlags    = 0;
	mPanFlags       = 0;
	mPitchFlags     = 0;
	mFxmixFlags     = 0;
	mDolbyFlags     = 0;
	_298            = 0;
	_29C            = 0;
	_2A0            = 0;
	mTrackFxmixFlag = 0;
	_2A8            = 0;
	_2AC            = 0;
	_2B0            = 0;
	for (u32 i = 0; i < JAIGlobalParameter::getParamSeqTrackMax(); i++) {
		mTrackVolumes[i]      = MoveParaSet();
		mTrackPans[i]         = MoveParaSetInitHalf();
		mTrackPitches[i]      = MoveParaSet();
		mTrackFxmixes[i]      = MoveParaSetInitZero();
		mTrackDolbys[i]       = MoveParaSetInitZero(0.5f);
		mInterruptSwitches[i] = 0;
		_2B4[i]               = 0;
		for (int j = 0; j < 16; j++) {
			_274[i][j] = 0;
		}
	}
	for (int i = 0; i < 16; i++) {
		_10[i] = MoveParaSetInitZero();
	}
	for (u32 i = 0; i < JAIGlobalParameter::getParamSeqPlayTrackMax() + 12; i++) {
		mVolumes[i] = MoveParaSet();
	}
	for (u32 i = 0; i < JAIGlobalParameter::getParamSeqParameterLines(); i++) {
		mPans[i]    = MoveParaSetInitHalf();
		mPitches[i] = MoveParaSet();
		mFxmixes[i] = MoveParaSetInitZero();
		mDolbys[i]  = MoveParaSetInitHalf();
	}
}

/**
 * @note Address: 0x800B3650
 * @note Size: 0x1D8
 */
void releaseSeqBuffer(JAISequence*, u32)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	lbz      r0, 0x15(r3)
	cmplwi   r0, 4
	blt      lbl_800B3684
	cmplwi   r4, 0
	bne      lbl_800B37D4

lbl_800B3684:
	cmplwi   r0, 3
	blt      lbl_800B3698
	addi     r3, r31, 0x30c
	bl       stopSeq__8JASTrackFv
	b        lbl_800B36D4

lbl_800B3698:
	cmplwi   r0, 1
	blt      lbl_800B36D4
	lwz      r12, customHeapCallback__Q27JAInter11SequenceMgr@sda21(r13)
	cmplwi   r12, 0
	beq      lbl_800B36CC
	lwz      r4, 0x44(r31)
	mr       r6, r31
	addi     r3, r1, 0x10
	lhz      r5, 6(r4)
	li       r4, 2
	mtctr    r12
	bctrl
	b        lbl_800B36D4

lbl_800B36CC:
	lbz      r3, 0x2c0(r31)
	bl       releaseAutoHeapPointer__Q27JAInter7HeapMgrFUc

lbl_800B36D4:
	mr       r3, r31
	bl       clearMainSoundPPointer__8JAISoundFv
	mr       r3, r31
	bl       getSwBit__8JAISoundFv
	clrlwi.  r0, r3, 0x1f
	beq      lbl_800B3758
	li       r29, 0
	mr       r28, r29
	b        lbl_800B374C

lbl_800B36F8:
	lwz      r3, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r0, r28, 0x48
	lwzx     r30, r3, r0
	cmplw    r31, r30
	beq      lbl_800B3744
	cmplwi   r30, 0
	beq      lbl_800B3744
	mr       r3, r30
	bl       getSwBit__8JAISoundFv
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	bne      lbl_800B3744
	mr       r3, r30
	lfs      f1, lbl_80516FA0@sda21(r2)
	lwz      r12, 0x10(r30)
	li       r4, 0xa
	li       r5, 0xa
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_800B3744:
	addi     r28, r28, 0x50
	addi     r29, r29, 1

lbl_800B374C:
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	cmplw    r29, r3
	blt      lbl_800B36F8

lbl_800B3758:
	li       r0, 0
	stw      r0, 0x40(r31)
	stw      r0, 0x308(r31)
	lbz      r0, 0x15(r31)
	cmplwi   r0, 3
	blt      lbl_800B37A4
	lwz      r12, customHeapCallback__Q27JAInter11SequenceMgr@sda21(r13)
	cmplwi   r12, 0
	beq      lbl_800B379C
	lwz      r4, 0x44(r31)
	mr       r6, r31
	addi     r3, r1, 8
	lhz      r5, 6(r4)
	li       r4, 2
	mtctr    r12
	bctrl
	b        lbl_800B37A4

lbl_800B379C:
	lbz      r3, 0x2c0(r31)
	bl       releaseAutoHeapPointer__Q27JAInter7HeapMgrFUc

lbl_800B37A4:
	li       r0, 0
	mr       r4, r31
	stb      r0, 0x15(r31)
	addi     r3, r13, seqControl__Q27JAInter11SequenceMgr@sda21
	bl       releaseSound__Q27JAInter9LinkSoundFP8JAISound
	lbz      r0, 0x14(r31)
	li       r4, 0
	lwz      r3, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	mulli    r0, r0, 0x50
	add      r3, r3, r0
	stw      r4, 0x48(r3)
	b        lbl_800B3808

lbl_800B37D4:
	lbz      r0, 0x14(r31)
	lwz      r3, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	mulli    r0, r0, 0x50
	add      r3, r3, r0
	lwz      r0, 8(r3)
	ori      r0, r0, 2
	stw      r0, 8(r3)
	lbz      r0, 0x14(r31)
	lwz      r3, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	mulli    r0, r0, 0x50
	add      r3, r3, r0
	lwz      r3, 0x48(r3)
	stw      r4, 0x28(r3)

lbl_800B3808:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0xA0
 */
void stopPlayingSeq(u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
void checkPlayingSoundTrack(u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800B3828
 * @note Size: 0x10
 */
JAInter::SeqUpdateData* getPlayTrackInfo(u32 index) { return &seqTrackInfo[index]; }

/**
 * @note Address: N/A
 * @note Size: 0x1B0
 */
void loadArcSeqData(u32, bool)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xB0
 */
void loadCustomArcSeqData(u16, bool)
{
	// UNUSED FUNCTION
}
} // namespace SequenceMgr
} // namespace JAInter
