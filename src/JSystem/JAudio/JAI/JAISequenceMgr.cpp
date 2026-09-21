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
#include "stl/math.h"
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
		obj->mSeqParameter.mMuteBits          = new (JAIGetCurrentHeap(), 0x20) MuteBit[JAIGlobalParameter::getParamSeqTrackMax()];
	}

	seqTrackInfo = new (JAIGetCurrentHeap(), 0x20) SeqUpdateData[JAIGlobalParameter::getParamSeqPlayTrackMax()];

	for (u32 i = 0; i < JAIGlobalParameter::getParamSeqPlayTrackMax(); i++) {
		FixSeqBufPointer[i] = nullptr;
		seqTrackInfo[i].init();
	}
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
    , mPlayerParams(new (JAIBasic::getCurrentJAIHeap(), 0x20) PlayerParameter[33])
{
	mTrackVolumes = new (JAIBasic::getCurrentJAIHeap(), 0x20) f32[JAIGlobalParameter::getParamSeqTrackMax()];
	mTrackPans    = new (JAIBasic::getCurrentJAIHeap(), 0x20) f32[JAIGlobalParameter::getParamSeqTrackMax()];
	mTrackPitches = new (JAIBasic::getCurrentJAIHeap(), 0x20) f32[JAIGlobalParameter::getParamSeqTrackMax()];
	mTrackFxmixes = new (JAIBasic::getCurrentJAIHeap(), 0x20) f32[JAIGlobalParameter::getParamSeqTrackMax()];
	mTrackDolbys  = new (JAIBasic::getCurrentJAIHeap(), 0x20) f32[JAIGlobalParameter::getParamSeqTrackMax()];
	_44           = new (JAIBasic::getCurrentJAIHeap(), 0x20) u32[JAIGlobalParameter::getParamSeqTrackMax() + 1];
}

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
void setArchivePointer(JKRArchive* archive)
{
	arcPointer = archive;
}

/**
 * @note Address: 0x800B109C
 * @note Size: 0x8
 */
JKRArchive* getArchivePointer()
{
	return arcPointer;
}

/**
 * @note Address: 0x800B10A4
 * @note Size: 0x8
 */
void setCustomHeapCallback(CustomHeapCallback callback)
{
	customHeapCallback = callback;
}

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
	u8* dataPtr;
	for (u32 i = 0; i < JAIGlobalParameter::getParamSeqPlayTrackMax(); i++) {
		SeqUpdateData* data = &seqTrackInfo[i];
		if (!data->mSequence) {
			continue;
		}

		if (!(data->mActiveTrackFlag & SOUNDACTIVE_Unk1)) {
			continue;
		}

		u16 seqOffset = data->mSequence->mSoundInfo->mOffsetNo;
		u32 resSize   = JASResArcLoader::getResSize(arcPointer, seqOffset);

		if (customHeapCallback) {
			CustomHeapInfo heapInfo = customHeapCallback(0, seqOffset, data->mSequence);
			dataPtr                 = heapInfo.mFilePtr;
			if (heapInfo._04 == 1) {
				if (!data->mSequence->checkSwBit(SOUNDFLAG_Unk6)) {
					data->mSequence->mState = SOUNDSTATE_Stored;
					data->_03               = 1;
					JASResArcLoader::loadResourceAsync(arcPointer, seqOffset, heapInfo.mFilePtr, resSize, &checkCustomDvdLoadArc, i);
				} else {
					JASResArcLoader::loadResource(arcPointer, seqOffset, heapInfo.mFilePtr, resSize);
					data->mSequence->mState = SOUNDSTATE_Loaded;
				}
			} else {
				data->mSequence->mState = SOUNDSTATE_Loaded;
			}

		} else {
			if (data->_03) {
				continue;
			}
			u8 heapKind = HeapMgr::HEAP_Auto;
			u8 heapIdx;
			dataPtr = (u8*)HeapMgr::checkOnMemory(data->mSequence->mSoundID & 0x3FF, &heapIdx);
			if (!dataPtr) {
				if (data->mSequence->checkSwBit(SOUNDFLAG_Unk4)) {
					heapIdx = HeapMgr::checkUsefulStayHeapPosition();
					dataPtr = (u8*)HeapMgr::getFreeStayHeapPointer(resSize, data->mSequence->mSoundID & 0x3FF);
					if (!dataPtr) {
						data->mSequence->checkSwBit(SOUNDFLAG_Unk5); // probably debug
					}
					heapKind                                  = HeapMgr::HEAP_Stay;
					data->mSequence->mSeqParameter.mHeapIndex = 255;
				}

				if (!dataPtr && (data->mSequence->checkSwBit(SOUNDFLAG_Unk5) || !data->mSequence->checkSwBit(SOUNDFLAG_Unk4))) {
					heapIdx = HeapMgr::checkUsefulAutoHeapPosition();
					if (heapIdx >= JAIGlobalParameter::getParamAutoHeapMax()) {
						for (u32 j = 0; j < JAIGlobalParameter::getParamAutoHeapMax(); j++) {
							if (HeapMgr::getAutoHeapPointer()[j].getUsedHeapID() != 0xFFFFFFFF) {
								u32 k = 0;
								for (k; k < JAIGlobalParameter::getParamSeqPlayTrackMax(); k++) {
									if (seqTrackInfo[k].mSequence
									    && (seqTrackInfo[k].mSequence->mSoundID & 0x3FF) == HeapMgr::getAutoHeapPointer()[j].getSoundID()) {
										k = JAIGlobalParameter::getParamSeqPlayTrackMax();
									}
								}
								if (k == JAIGlobalParameter::getParamSeqPlayTrackMax()) {
									HeapMgr::releaseAutoHeapPointer(j);
									heapIdx = j;
								}
							}
						}
						if (heapIdx >= JAIGlobalParameter::getParamAutoHeapMax()) {
							data->mSequence->stop(0);
							continue;
						}

					} else if (resSize >= JAIGlobalParameter::getParamAutoHeapRoomSize()) {
						JAIGlobalParameter::getParamAutoHeapRoomSize();
						data->mSequence->stop(0);
						continue;
					}

					data->mSequence->mSeqParameter.mHeapIndex = heapIdx;
					dataPtr = (u8*)HeapMgr::getFreeAutoHeapPointer(data->mSequence->mSeqParameter.mHeapIndex,
					                                               data->mSequence->mSoundID & 0x3FF);
				}

				if (!data->mSequence->checkSwBit(SOUNDFLAG_Unk6)) {
					data->mSequence->mState = SOUNDSTATE_Stored;
					u32 cbArg               = (i | seqOffset << 16 | heapIdx << 8 | heapKind << 15);
					if (heapKind == HeapMgr::HEAP_Auto) {
						HeapMgr::setAutoHeapLoadedFlag(heapIdx, 1);
					} else {
						HeapMgr::setStayHeapLoadedFlag(heapIdx, 1);
					}
					data->_03 = 1;
					JASResArcLoader::loadResourceAsync(arcPointer, seqOffset, dataPtr, resSize, &checkDvdLoadArc, cbArg);
				} else {
					JASResArcLoader::loadResource(arcPointer, seqOffset, dataPtr, resSize);
					data->mSequence->mState = SOUNDSTATE_Loaded;
				}

			} else {
				if ((u32)dataPtr == 0xFFFFFFFF) {
					continue;
				}
				if (heapIdx != 255) {
					HeapMgr::getFreeAutoHeapPointer(heapIdx, data->mSequence->mSoundID & 0x3FF);
				}

				data->mSequence->mSeqParameter.mHeapIndex = heapIdx;
				data->mSequence->mState                   = SOUNDSTATE_Loaded;
			}
		}

		if (dataPtr) {
			data->mFilePtr = dataPtr;
			data->mActiveTrackFlag ^= SOUNDACTIVE_Unk1;
		} else {
			stopSeq(data->mSequence);
		}
	}
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
		SeqUpdateData* info = &seqTrackInfo[i];
		if (info->mSequence && info->mSequence->mState >= SOUNDSTATE_Playing) {
			checkPlayingSeqTrack(i);
			for (u8 j = 0; j < JAIGlobalParameter::getParamSeqTrackMax() + 1; j++) {
				if (info->_44[j] != 0) {
					if (j == 32 || (1 << j & info->mSequence->mSeqParameter.mUpdateData->_04) != 0) {
						SystemInterface::setSeqPortargsU32(info, j, 2, info->_44[j]);
						info->mPlayerParams[j].mCommand.addPortCmdOnce();
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
			info->mSeqVolume = 1.1f;
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
void checkPlayingSeqUpdateMultiplication(u32 playTrackNo, u8 max, u32 trackType, JAInter::MoveParaSet* params, u32* paramFlags,
                                         u8 portargType, f32* mixPtr)
{
	u32* flag = &seqTrackInfo[playTrackNo].mActiveTrackFlag;
	if (*flag & trackType) {
		f32 factor = 1.0f;
		for (u8 i = 0; i < max; i++) {
			MoveParaSet* set = &params[i];
			if (*paramFlags & (1 << i)) {
				if (set->move() == FALSE) {
					*paramFlags ^= (1 << i);
				}
			}

			factor *= set->mCurrentValue;
		}

		if (*mixPtr != factor) {
			*mixPtr = factor;
			SystemInterface::setSeqPortargsF32(&seqTrackInfo[playTrackNo], JAIGlobalParameter::getParamSeqTrackMax(), portargType, factor);

			seqTrackInfo[playTrackNo]._44[JAIGlobalParameter::getParamSeqTrackMax()] |= (1 << (portargType - 3));
		}

		if (*paramFlags == 0) {
			*flag ^= trackType;
		}
	}
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x178
 */
void checkPlayingSeqUpdateAddition(u32 playTrackNo, u8 max, u32 trackType, JAInter::MoveParaSet* params, u32* paramFlags, u8 portargType,
                                   f32* mixPtr, f32 center)
{
	u32* flag = &seqTrackInfo[playTrackNo].mActiveTrackFlag;
	if (*flag & trackType) {
		f32 factor = 0.0f;
		for (u8 i = 0; i < max; i++) {
			MoveParaSet* set = &params[i];
			if (*paramFlags & (1 << i)) {
				if (set->move() == FALSE) {
					*paramFlags ^= (1 << i);
				}
			}

			factor += (set->mCurrentValue - center);
		}

		factor += center;
		if (factor > 1.0f) {
			factor = 1.0f;
		} else if (factor < 0.0f) {
			factor = 0.0f;
		}

		if (*mixPtr != factor) {
			*mixPtr = factor;
			SystemInterface::setSeqPortargsF32(&seqTrackInfo[playTrackNo], JAIGlobalParameter::getParamSeqTrackMax(), portargType, factor);

			seqTrackInfo[playTrackNo]._44[JAIGlobalParameter::getParamSeqTrackMax()] |= (1 << (portargType - 3));
		}

		if (*paramFlags == 0) {
			*flag ^= trackType;
		}
	}
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x118
 */
void checkPlayingSeqUpdateTrack(u32 playTrackNo, u32 trackType, JAInter::MoveParaSet* params, u32* paramFlags, u8 portargType, f32* mixPtr)
{
	u32* flag = &seqTrackInfo[playTrackNo].mActiveTrackFlag;
	if (*flag & trackType) {
		for (u8 i = 0; i < JAIGlobalParameter::getParamSeqTrackMax(); i++) {
			MoveParaSet* set = &params[i];
			if (*paramFlags & (1 << i)) {
				if (set->move() == FALSE) {
					*paramFlags ^= (1 << i);
				}

				if (mixPtr[i] != set->mCurrentValue) {
					mixPtr[i] = set->mCurrentValue;
					SystemInterface::setSeqPortargsF32(&seqTrackInfo[playTrackNo], i, portargType, set->mCurrentValue);
					seqTrackInfo[playTrackNo]._44[i] |= (1 << (portargType - 3));
				}
			}
		}

		if (*paramFlags == 0) {
			*flag ^= trackType;
		}
	}
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800B1B18
 * @note Size: 0x1078
 */
void checkPlayingSeqTrack(u32 playTrackNo)
{
	SeqUpdateData* data = &seqTrackInfo[playTrackNo];
	SeqParameter* param = &data->mSequence->mSeqParameter;
	if (param->mPauseMode == SOUNDPAUSE_Unk2) {
		return;
	}

	u32* valPtr = data->_44;
	for (u8 i = 0; i < JAIGlobalParameter::getParamSeqTrackMax() + 1; i++) {
		valPtr[i] = 0;
	}

	if (data->mActiveTrackFlag & SOUNDACTIVE_DoFadeout) {
		if (data->mSequence->mFadeCounter == 0 || data->mSequence->mState < SOUNDSTATE_Playing) {
			if (data->mSequence->mState >= SOUNDSTATE_Ready) {
				param->mTrack.stopSeq();
			}
			data->mSequence->clearMainSoundPPointer();
			stopSeq(data->mSequence);
			data->mActiveTrackFlag = 0;
			return;
		}

		data->mSequence->setVolume(0.0f, data->mSequence->mFadeCounter, SOUNDPARAM_Fadeout);
		data->mSequence->mState = SOUNDSTATE_Fadeout;
		data->mActiveTrackFlag ^= 2;
	}

	if (data->mSequence && data->mSequence->mCreatureObj) {
		u32 startIdx;
		u32 cameraMax;
		if (data->mSequence->mCameraIndex == 4) {
			startIdx  = 0;
			cameraMax = JAIGlobalParameter::getParamAudioCameraMax();
		} else {
			startIdx  = data->mSequence->mCameraIndex;
			cameraMax = data->mSequence->mCameraIndex + 1;
		}

		for (u32 i = startIdx; i < cameraMax; i++) {
			JAISound_0x34* soundObj = &data->mSequence->mSoundObj[i];
			soundObj->_0C           = soundObj->mPosition;

			PSMTXMultVec(*JAIBasic::getInterface()->mCameras[i].mMtx, data->mSequence->mPosition, &soundObj->mPosition);
			soundObj->mDistance
			    = dolsqrtfull(SQUARE(soundObj->mPosition.x) + SQUARE(soundObj->mPosition.y) + SQUARE(soundObj->mPosition.z));

			f32 vol = data->mSequence->setDistanceVolumeCommon(JAIGlobalParameter::getParamDistanceMax(), 0);
			data->mSequence->setVolume(u8(127.0f * vol), JAIGlobalParameter::getParamDistanceParameterMoveTime(), SOUNDPARAM_Distance);

			f32 pan = data->mSequence->setDistancePanCommon();
			data->mSequence->setPan(u8(pan), JAIGlobalParameter::getParamDistanceParameterMoveTime(), SOUNDPARAM_Distance);

			f32 pitch = data->mSequence->setPositionDopplarCommon(256);
			data->mSequence->setPitch(pitch, JAIGlobalParameter::getParamDopplarMoveTime(), SOUNDPARAM_Distance);
		}
	}

	if (data->mSequence) {
		data->mSequence->mActiveTimer++;
	}

	if (!data->mActiveTrackFlag) {
		return;
	}

	// check volumes
	u8 volumeMax = JAIGlobalParameter::getParamSeqPlayTrackMax() + 12;
	checkPlayingSeqUpdateMultiplication(playTrackNo, volumeMax, SOUNDACTIVE_Volume, param->mVolumes, &param->mVolumeFlags, 3,
	                                    &data->mSeqVolume);

	// check pans
	checkPlayingSeqUpdateAddition(playTrackNo, JAIGlobalParameter::getParamSeqParameterLines(), SOUNDACTIVE_Pan, param->mPans,
	                              &param->mPanFlags, 5, &data->mSeqPan, 0.5f);

	// check pitches
	checkPlayingSeqUpdateMultiplication(playTrackNo, JAIGlobalParameter::getParamSeqParameterLines(), SOUNDACTIVE_Pitch, param->mPitches,
	                                    &param->mPitchFlags, 4, &data->mSeqPitch);

	// check fxmixes
	checkPlayingSeqUpdateAddition(playTrackNo, JAIGlobalParameter::getParamSeqParameterLines(), SOUNDACTIVE_Fxmix, param->mFxmixes,
	                              &param->mFxmixFlags, 6, &data->mSeqFxmix, 0.0f);

	// check dolbys
	checkPlayingSeqUpdateAddition(playTrackNo, JAIGlobalParameter::getParamSeqParameterLines(), SOUNDACTIVE_Dolby, param->mDolbys,
	                              &param->mDolbyFlags, 7, &data->mSeqDolby, 0.5f);

	if (data->mActiveTrackFlag & SOUNDACTIVE_TempoProportion) {
		if (param->mTempo.move() == FALSE) {
			data->mActiveTrackFlag ^= SOUNDACTIVE_TempoProportion;
		}

		if (data->mSeqTempo != param->mTempo.mCurrentValue) {
			data->mSeqTempo = param->mTempo.mCurrentValue;
			SystemInterface::setSeqPortargsF32(&seqTrackInfo[playTrackNo], JAIGlobalParameter::getParamSeqTrackMax(), 10,
			                                   param->mTempo.mCurrentValue);
			valPtr[JAIGlobalParameter::getParamSeqTrackMax()] |= 0x80;
		}
	}

	if (data->mActiveTrackFlag & SOUNDACTIVE_Unk5) {
		for (u8 i = 0; i < 16; i++) {
			if (param->_280 & (1 << i)) {
				if (param->_10[i].move() == FALSE) {
					param->_280 ^= (1 << i);
				}
			}
			u16 portVal;
			param->mTrack.readPortApp(i << 16, &portVal);

			if (portVal != (u16)param->_10[i].mCurrentValue) {
				param->mTrack.writePortApp(i << 16, (u16)param->_10[i].mCurrentValue);
			}
		}

		if (param->_280 == 0) {
			data->mActiveTrackFlag ^= SOUNDACTIVE_Unk5;
		}
	}

	if (data->mActiveTrackFlag & SOUNDACTIVE_Unk6) {
		data->mActiveTrackFlag ^= SOUNDACTIVE_Unk6;
		for (u8 i = 0; i < JAIGlobalParameter::getParamSeqTrackMax(); i++) {
			MuteBit* mutes = param->mMuteBits;
			if (bool(mutes[i]._02) == true && bool(mutes[i]._00) != bool(mutes[i]._01)) {
				JASTrack* seqP = SystemInterface::trackToSeqp(data->mSequence, i);
				if (seqP) {
					seqP->muteTrack(bool(mutes[i]._01));
				}
				mutes[i]._00 = bool(mutes[i]._01);
			}
		}
	}

	checkPlayingSeqUpdateTrack(playTrackNo, SOUNDACTIVE_TrackVolume, param->mTrackVolumes, &param->mTrackVolumeFlag, 3,
	                           data->mTrackVolumes);
	checkPlayingSeqUpdateTrack(playTrackNo, SOUNDACTIVE_TrackPan, param->mTrackPans, &param->mTrackPanFlag, 5, data->mTrackPans);
	checkPlayingSeqUpdateTrack(playTrackNo, SOUNDACTIVE_TrackPitch, param->mTrackPitches, &param->mTrackPitchFlag, 4, data->mTrackPitches);
	checkPlayingSeqUpdateTrack(playTrackNo, SOUNDACTIVE_TrackFxmix, param->mTrackFxmixes, &param->mTrackFxmixFlag, 6, data->mTrackFxmixes);
	checkPlayingSeqUpdateTrack(playTrackNo, SOUNDACTIVE_TrackDolby, param->mTrackDolbys, &param->mTrackDolbyFlag, 7, data->mTrackDolbys);

	if (data->mActiveTrackFlag & SOUNDACTIVE_TrackInterruptSwitch) {
		data->mActiveTrackFlag ^= SOUNDACTIVE_TrackInterruptSwitch;
		for (u8 i = 0; i < JAIGlobalParameter::getParamSeqTrackMax(); i++) {
			if (param->mInterruptSwitches[i] == 1) {
				valPtr[i] |= 0x40;
				SystemInterface::setSeqPortargsU32(&seqTrackInfo[playTrackNo], i, 9, 1);
				param->mInterruptSwitches[i] = 0;
			}
		}
	}

	if (data->mActiveTrackFlag & SOUNDACTIVE_TrackPortData) {
		for (u8 i = 0; i < JAIGlobalParameter::getParamSeqTrackMax(); i++) {
			if (param->mTrackPortDataFlag & (1 << i)) {
				param->mTrackPortDataFlag ^= (1 << i);
				for (u8 j = 0; j < 16; j++) {
					if (param->_2B4[i] & (1 << j)) {
						param->mTrack.writePortApp(data->mSequence->getTrackPortRoute(i, j), param->_274[i][j]);
						param->_2B4[i] ^= (1 << j);
					}
				}
			}
		}

		if (param->mTrackPortDataFlag == 0) {
			data->mActiveTrackFlag ^= SOUNDACTIVE_TrackPortData;
		}
	}
}

/**
 * @note Address: 0x800B2BE8
 * @note Size: 0x130
 */
void stopSeq(JAISequence* seq)
{
	if (seq->getSwBit() & SOUNDFLAG_Unk0) {
		for (u32 i = 0; i < JAIGlobalParameter::getParamSeqPlayTrackMax(); i++) {
			JAISequence* playingSeq = seqTrackInfo[i].mSequence;
			if (seq != playingSeq && playingSeq && !(playingSeq->getSwBit() & SOUNDFLAG_Unk1)) {
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
			HeapMgr::releaseAutoHeapPointer(seq->mSeqParameter.mHeapIndex);
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
	u32 playTrackNo = p2 & 0xFF;
	u32 seqOffset   = (p2 >> 16) & 0x3FF;
	u32 heapIdx     = (p2 >> 8) & 0x7F;
	u32 heapKind    = (p2 >> 15) & 1;

	if (heapKind == HeapMgr::HEAP_Auto) {
		HeapMgr::setAutoHeapLoadedFlag(heapIdx, 0);
	} else {
		HeapMgr::setStayHeapLoadedFlag(heapIdx, 0);
	}

	if (playTrackNo < 254) {
		SeqUpdateData* data = &seqTrackInfo[playTrackNo];
		JAISequence* seq    = data->mSequence;
		data->_03           = 0;
		if (seq && seq->mState == SOUNDSTATE_Stored && seqOffset == seq->mSoundInfo->mOffsetNo) {
			seq->mState = SOUNDSTATE_Loaded;

		} else if (heapKind == HeapMgr::HEAP_Auto) {
			HeapMgr::releaseAutoHeapPointer(heapIdx);
		}

	} else if (playTrackNo == 254 && heapKind == HeapMgr::HEAP_Auto) {
		HeapMgr::releaseAutoHeapPointer(heapIdx);
	}
}

/**
 * @note Address: 0x800B2DFC
 * @note Size: 0x9C
 */
void checkCustomDvdLoadArc(u32 p1, u32 index)
{
	JAISequence* sequence   = seqTrackInfo[index].mSequence;
	seqTrackInfo[index]._03 = 0;
	customHeapCallback(1, sequence->mSoundInfo->mOffsetNo, sequence);
	if (sequence && sequence->mState == SOUNDSTATE_Stored) {
		sequence->mState = SOUNDSTATE_Loaded;
	} else {
		customHeapCallback(2, sequence->mSoundInfo->mOffsetNo, sequence);
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
void storeSeqBuffer(JAISequence** soundHandlePtr, JAInter::Actor* actor, u32 soundID, u32 p4, u8 p5, JAInter::SoundInfo* soundInfo)
{
	JAISequence* seq;
	u32 playSeqNo = soundInfo->_05;
	if (soundHandlePtr && *soundHandlePtr) {
		if (playSeqNo != (*soundHandlePtr)->_14) {
			(*soundHandlePtr)->stop(0);
		} else if ((*soundHandlePtr)->checkSoundHandle(soundID, soundInfo)) {
			return;
		}
	}

	u32 val;
	JAISequence** seqSlot = &seqTrackInfo[playSeqNo].mSequence;
	if (!(*seqSlot)) {
		val = 1;
	} else if ((*seqSlot)->mState == SOUNDSTATE_Fadeout) {
		(*seqSlot)->mSeqParameter.mTrack.stopSeq();
		(*seqSlot)->clearMainSoundPPointer();
		stopSeq(*seqSlot);
		val = 1;
	} else if ((*seqSlot)->mState == SOUNDSTATE_Stored) {
		*soundHandlePtr = nullptr;
		return;
	} else if ((*seqSlot)->mSoundInfo->mPriority <= soundInfo->mPriority) {
		(*seqSlot)->mSeqParameter.mTrack.stopSeq();
		(*seqSlot)->clearMainSoundPPointer();
		stopSeq(*seqSlot);
		val = 1;
	} else {
		*soundHandlePtr = nullptr;
		return;
	}

	if (val) {
		seq = static_cast<JAISequence*>(seqControl.getSound());
		if (!seq) {
			*soundHandlePtr = nullptr;
			return;
		}

		seq->mSeqParameter.init();
		(*seqSlot)                               = seq;
		(*seqSlot)->mSoundID                     = soundID;
		(*seqSlot)->mSeqParameter.mUpdateData    = &seqTrackInfo[playSeqNo];
		(*seqSlot)->_14                          = playSeqNo;
		seqTrackInfo[playSeqNo].mActiveTrackFlag = 1;
		seqTrackInfo[playSeqNo].mPrepareFlag     = 0;
		seqTrackInfo[playSeqNo]._04              = 0;
		if (soundInfo->mFlag & SOUNDFLAG_Unk0) {
			for (u32 i = 0; i < JAIGlobalParameter::getParamSeqPlayTrackMax(); i++) {
				JAISequence* playSeq = seqTrackInfo[i].mSequence;
				if (i != playSeqNo && playSeq && !(playSeq->getSwBit() & SOUNDFLAG_Unk1)) {
					playSeq->setVolume(0.0f, 10, SOUNDPARAM_Unk10);
				}
			}
		}
	}

	seq->initParameter(soundHandlePtr, actor, soundID, p4, p5, soundInfo);
	if (soundHandlePtr) {
		*soundHandlePtr = seq;
	}
}

/**
 * @note Address: 0x800B3650
 * @note Size: 0x1D8
 */
void releaseSeqBuffer(JAISequence* seq, u32 fadeTime)
{
	if (seq->mState < SOUNDSTATE_Playing || fadeTime == 0) {
		if (seq->mState >= SOUNDSTATE_Ready) { // ready OR playing OR fadeout
			seq->getTrack()->stopSeq();

		} else if (seq->mState >= SOUNDSTATE_Stored) { // stored OR loaded
			if (customHeapCallback) {
				customHeapCallback(2, seq->mSoundInfo->mOffsetNo, seq);
			} else {
				HeapMgr::releaseAutoHeapPointer(seq->mSeqParameter.mHeapIndex);
			}
		}

		seq->clearMainSoundPPointer();
		stopSeq(seq);
	} else {
		seqTrackInfo[seq->_14].mActiveTrackFlag |= 2;
		seqTrackInfo[seq->_14].mSequence->mFadeCounter = fadeTime;
	}
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
JAInter::SeqUpdateData* getPlayTrackInfo(u32 index)
{
	return &seqTrackInfo[index];
}

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
