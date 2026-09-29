#include "JSystem/JAudio/JAI/JAIBasic.h"
#include "JSystem/JAudio/JAI/JAIConst.h"
#include "JSystem/JAudio/JAI/JAIGlobalParameter.h"
#include "JSystem/JAudio/JAI/JAISound.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JAudio/JAI/JAInter/MoveParaSet.h"
#include "JSystem/JAudio/JAI/JAInter/SeMgr.h"
#include "JSystem/JAudio/JAI/JAISe.h"
#include "JSystem/JAudio/JAI/JAISequence.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

namespace JAInter {
namespace SeMgr {

StartCallback seStartCallback = startSeSequence;

TrackUpdate* seTrackUpdate;
u8** categoryInfoTable;
JAISound*** sePlaySound;
LinkSound* seRegist;
JAISequence* seHandle;
u8 seScene;
u32 seqMuteFlagFromSe;
f32* seCategoryVolume;
u8* seEntryCancel;

/**
 * @note Address: 0x800AE0A0
 * @note Size: 0x3A4
 */
void init()
{
	if (JAIBasic::getInterface()->_1C != nullptr) {
		JAIGlobalParameter::setParamSeTrackMax(0);
		for (u32 soundScene = 0; soundScene < JAIGlobalParameter::getParamSoundSceneMax(); soundScene++) {
			u32 sumOfCategories = 0;
			for (u32 category = 0; category < JAIGlobalParameter::getParamSeCategoryMax(); category++) {
				sumOfCategories += JAIBasic::getInterface()->_1C[soundScene][category * 2];
			}
			if (JAIGlobalParameter::getParamSeTrackMax() < sumOfCategories) {
				JAIGlobalParameter::setParamSeTrackMax(sumOfCategories);
			}
		}
	}
	seRegist    = new (JAIBasic::getCurrentJAIHeap(), 0x20) LinkSound[JAIGlobalParameter::getParamSeCategoryMax()];
	sePlaySound = new (JAIBasic::getCurrentJAIHeap(), 0x20) JAISound**[JAIGlobalParameter::getParamSeCategoryMax()];
	for (u32 i = 0; i < JAIGlobalParameter::getParamSeCategoryMax(); i++) {
		seRegist[i].init();
		for (u32 j = 0; j < JAIGlobalParameter::getParamSeRegistMax(); j++) {
			seRegist[i].mFreeList->append(JAIBasic::getInterface()->makeSe());
		}
		sePlaySound[i] = new (JAIBasic::getCurrentJAIHeap(), 0x20) JAISound*[0x10];
		for (int j = 0; j < 0x10; j++) {
			sePlaySound[i][j] = nullptr;
		}
	}
	seTrackUpdate = new (JAIBasic::getCurrentJAIHeap(), 0x20) TrackUpdate[JAIGlobalParameter::getParamSeTrackMax()];
	for (u32 i = 0; i < JAIGlobalParameter::getParamSeTrackMax(); i++) {
		TrackUpdate* trackUpdate    = &seTrackUpdate[i];
		trackUpdate->mPlayingVolume = 1.0f;
		trackUpdate->mPlayingPitch  = 1.0f;
		trackUpdate->mPlayingFxmix  = 0.0f;
		trackUpdate->mPlayingPan    = 0.5f;
		trackUpdate->_00            = 0xFF;
		trackUpdate->mPlayingDolby  = 0.0f;
	}
	// TODO: ???
	new (JAIBasic::getCurrentJAIHeap(), 0x20)
	    SeParameter[JAIGlobalParameter::getParamSeCategoryMax() * JAIGlobalParameter::getParamSeRegistMax()];
	u8** v1 = JAIBasic::getInterface()->_1C;
	if (JAIBasic::getInterface()->_1C) {
		categoryInfoTable = v1;
	} else {
		categoryInfoTable = new (JAIBasic::getCurrentJAIHeap(), 0x20) u8*[JAIGlobalParameter::getParamSoundSceneMax()];
		for (u32 i = 0; i < JAIGlobalParameter::getParamSoundSceneMax(); i++) {
			categoryInfoTable[i] = (u8*)JAInter::Const::sCInfos_0;
		}
	}

	seEntryCancel    = new (JAIBasic::getCurrentJAIHeap(), 0x20) u8[JAIGlobalParameter::getParamSeCategoryMax()];
	seCategoryVolume = new (JAIBasic::getCurrentJAIHeap(), 0x20) f32[JAIGlobalParameter::getParamSeCategoryMax()];
	for (u32 i = 0; i < JAIGlobalParameter::getParamSeCategoryMax(); i++) {
		seEntryCancel[i]    = 0;
		seCategoryVolume[i] = 1.0f;
	}
}

/**
 * @note Address: 0x800AE57C
 * @note Size: 0x50
 */
void startSeSequence()
{
	seHandle = nullptr;
	SequenceMgr::storeSeqBuffer(&seHandle, nullptr, 0x80000800, 1, 4, SoundTable::getInfoPointer(0x80000800));
}

/**
 * @note Address: 0x800AE5CC
 * @note Size: 0x34
 */
void processGFrameSe()
{
	if (seHandle == nullptr) {
		return;
	}
	checkNextFrameSe();
	checkSeMovePara();
	checkPlayingSe();
}

/**
 * @note Address: 0x800AE600
 * @note Size: 0x7E4
 */
void checkNextFrameSe()
{
	if (!seHandle || seHandle->mState < SOUNDSTATE_Playing) {
		return;
	}

	f32 distMax = JAIGlobalParameter::getParamDistanceMax();
	f32 dist    = JAIGlobalParameter::getParamDistanceMax() / 1000.0f;
	if (dist == 0.0f) {
		dist = 1.0f;
	}

	SeHelper helpers[16];
	bool check;
	JSULink<JAISound>* link;
	JAISe* sound;
	SeHelper* helper;
	u8 j;
	u8 max;
	u8 catMax;
	u8 idx;
	u8 val;

	for (u32 i = 0; i < JAIGlobalParameter::getParamSeCategoryMax(); i++) {

		for (u8 k = 0; k < categoryInfoTable[seScene][i * 2]; k++) {
			helpers[k]._04    = 0x7FFFFFFF;
			helpers[k].mState = 0xFF;
			helpers[k].mSound = nullptr;
		}

		val  = 0;
		link = seRegist[i].mUsedList->getFirst();
		while (link) {
			sound = static_cast<JAISe*>(link->getObject());
			check = false;
			if (sound->mState == SOUNDSTATE_Stored && sound->mSoundID & 0xC00) {
				sound->mFinishWaitTimer--;
			} else if (!(sound->mSoundID & 0xC00) && sound->mState == SOUNDSTATE_Fadeout) {
				link  = link->getNext();
				check = true;
				releaseSeRegist(sound);
			}

			if (sound->mFinishWaitTimer == 0) {
				link  = link->getNext();
				check = true;
				releaseSeRegist(sound);
			} else if (sound->mState != SOUNDSTATE_Inactive) {
				f32 val2                = 2147483600.0f;
				JAISound_0x34* soundObj = sound->getSoundObj();
				if (!sound->mPosition) {
					soundObj->mPosition = JAInter::Const::dummyZeroVec;
					soundObj->_0C       = soundObj->mPosition;
					soundObj->mDistance = 0.0f;
				} else if (sound->mIsPlayingWithActor == false) {
					soundObj->_0C = soundObj->mPosition;
					u8 camID      = sound->mCameraIndex;
					if (camID == 4) {
						camID = 0;
					}
					PSMTXMultVec(*JAIBasic::getInterface()->mCameras[camID].mMtx, sound->mPosition, &soundObj->mPosition);

					soundObj->mDistance
					    = dolsqrtfull(SQUARE(soundObj->mPosition.x) + SQUARE(soundObj->mPosition.y) + SQUARE(soundObj->mPosition.z));
				}

				s16 prio = sound->getInfoPriority();
				if (sound->mAdjustPriority != 0) {
					prio += sound->mAdjustPriority;
					if (prio < 0) {
						prio = 0;
					} else if (prio > 255) {
						prio = 255;
					}
				}
				sound->_24 = (u32)(soundObj->mDistance / dist) + (u32)((f32)((int)((255 - prio) * 76)) / dist);
				if (soundObj->mPosition.z > 0.0f) {
					u32 addOnZ = 6.0f * soundObj->mPosition.z / dist;
					sound->_24 = addOnZ + sound->_24;
				}

				if (soundObj->mDistance < 2147483600.0f) {
					val2 = soundObj->mDistance;
				}

				f32 compF;
				if (sound->getSwBit() & SOUNDFLAG_Unk5) {
					compF = distMax;
				} else {
					compF = 10000000000.0f;
				}

				if (val2 > compF) {
					if (!(sound->mSoundID & 0xC00)) {
						if (sound->mState != SOUNDSTATE_Stored && sound->_14 != 0xFF) {
							u32 val3 = (((sound->_14 >> 4) & 0xF) + 0x20000000) + ((sound->_14 << 4) & 0xF0);
							seHandle->mSeqParameter.mTrack.writePortApp(val3, 0);
							seHandle->setTrackInterruptSwitch(sound->_14, 1);
						}
						sound->mState = SOUNDSTATE_Fadeout;
						sound->_14    = 0xFF;
					} else {
						link  = link->getNext();
						check = true;
						releaseSeBuffer(sound, 0);
					}
				} else {
					max = categoryInfoTable[seScene][sound->getSeCategoryNumber() * 2];
					for (j = 0; j < max; j++) {
						helper = &helpers[j];
						if (sound->_24 < helper->_04 || (helper->_04 == sound->_24 && helper->mState >= sound->mState)) {
							if (val < max) {
								val++;
							}
							for (u8 k = max - 1; k > j; k--) {
								helpers[k] = helpers[k - 1];
							}

							helper->_04    = sound->_24;
							helper->mSound = sound;
							helper->mState = sound->mState;
							j              = max;
						}
					}
				}
			}

			if (link && !check) {
				link = link->getNext();
			}
		}

		for (j = 0; j < val; j++) {
			JAISound* helperSound = helpers[j].mSound;
			if (helperSound->mState == SOUNDSTATE_Stored) {
				helperSound->mState = SOUNDSTATE_Loaded;
			} else if (helperSound->mState == SOUNDSTATE_Playing) {
				helperSound->mState = SOUNDSTATE_Ready;
			}
		}

		catMax = categoryInfoTable[seScene][i * 2];
		for (idx = 0; idx < catMax; idx++) {
			bool refill      = false;
			JAISe* playSound = static_cast<JAISe*>(sePlaySound[i][idx]);
			JAISe* se;
			JAISe* playSe;
			u8 m;
			u8 k;
			if (!playSound) {
				refill = true;
			} else if (playSound->mState == SOUNDSTATE_Playing) {
				if (playSound->mSoundID & 0xC00) {
					releaseSeRegist(playSound);
				} else {
					playSound->mState = SOUNDSTATE_Stored;
					playSound->_14    = 255;
				}
				refill = true;
			} else if (playSound->mState == SOUNDSTATE_Inactive || playSound->mState == SOUNDSTATE_Fadeout) {
				sePlaySound[i][idx] = nullptr;
				refill              = true;
			} else {
				for (j = 0; j < catMax; j++) {
					if (sePlaySound[i][idx] == helpers[j].mSound) {
						helpers[j].mSound = nullptr;
						j                 = catMax;
					}
				}
			}

			if (refill != true) {
				continue;
			}

			for (k = 0; k < catMax; k++) {
				se = helpers[k].getSound();
				if (!se) {
					continue;
				}

				if (se->mState == SOUNDSTATE_Ready) {
					continue;
				}

				for (m = 0; m < catMax; m++) { // THIS IS TOO MANY LOOPS JFC
					playSe = static_cast<JAISe*>(sePlaySound[i][m]);
					if (playSe && helpers[k].mSound == playSe) {
						refill = false;
						m      = catMax;
					}
				}

				if (refill == true) {
					helpers[k].mSound   = nullptr;
					sePlaySound[i][idx] = se;
					k                   = catMax + 1;
				}
			}

			if (k == catMax) {
				sePlaySound[i][idx] = nullptr;
			}
		}
	}
}

/**
 * @note Address: 0x800AEDE4
 * @note Size: 0x488
 */
void checkPlayingSe()
{
	u8 j;
	JAISe* currSound;
	u8 count = 0;
	u8 i;
	for (i = 0; i < JAIGlobalParameter::getParamSeCategoryMax(); i++) {
		for (j = 0; j < categoryInfoTable[seScene][(u32)i * 2]; count++, j++) {
			currSound = static_cast<JAISe*>(sePlaySound[i][j]);
			if (!currSound) {
				continue;
			}
			currSound->mActiveTimer++;
			u32 val0 = (((count >> 4) & 0xF) + 0x20000000) + ((count << 4) & 0xF0);
			u16 portApp0;
			JASTrack* track = seHandle->getTrack();
			track->readPortApp(val0 + 0x20000, &portApp0);
			u16 portApp1;
			track->readPortApp(val0, &portApp1);

			if (currSound->mState == SOUNDSTATE_Loaded) {
				u32 swBit      = currSound->getSwBit();
				currSound->_14 = count;
				if (swBit & SOUNDFLAG_Unk3) {
					setSeqMuteFromSeStart(currSound);
				}
				if (swBit & (SOUNDFLAG_Unk6 | SOUNDFLAG_Unk7)) {
					int randInt = 255.0f * JAInter::Const::random.nextFloat_0_1(); // random number between 0 and 255
					switch (swBit & (SOUNDFLAG_Unk6 | SOUNDFLAG_Unk7)) {
					case 0x40:
						currSound->mRandPitchModifier = randInt & 0x0F;
						break;
					case 0x80:
						currSound->mRandPitchModifier = randInt & 0x1F;
						break;
					case 0xC0:
						currSound->mRandPitchModifier = randInt & 0x3F;
						break;
					default:
						currSound->mRandPitchModifier = 0;
						break;
					}
				}
				for (u8 k = 0; currSound->mSeParam._20 != 0; k++) {
					if (currSound->mSeParam._20 & (1 << k)) {
						seHandle->setTrackPortData(currSound->_14, k, currSound->mSeParam._00[k]);
						currSound->mSeParam._20 ^= (1 << k);
					}
				}
				currSound->setSeDistanceParameters();
				JAIBasic::getInterface()->setSeExtParameter(currSound);
				if (currSound->mFadeCounter > 1) {
					currSound->setVolume(0.0f, 0, SOUNDPARAM_Direct);
					currSound->setVolume(1.0f, currSound->mFadeCounter, SOUNDPARAM_Direct);
					currSound->mFadeCounter = 0;
				}

				sendSeAllParameter(currSound);
				u16 offset = JAIBasic::getInterface()->getSoundOffsetNumberFromID(currSound->mSoundID);

				if (currSound->checkSwBit(0x800)) {
					offset += JAIBasic::getInterface()->getMapInfoGround(currSound->mMapInfoIndex);
				}

				u16 waitTime;
				if (JAIGlobalParameter::getParamAudioCameraMax() == 1 && currSound->checkSwBit(0x1000)) {
					if (currSound->getSoundObj()->mDistance < JAIGlobalParameter::getParamDistanceMax()) {
						u32 distanceMax  = JAIGlobalParameter::getParamDistanceMax();
						u32 distanceCurr = currSound->mSoundObj->mDistance;
						u32 waitMax      = JAIGlobalParameter::getParamSeDistanceWaitMax();
						waitTime         = (waitMax * distanceCurr) / distanceMax;
					} else {
						waitTime = JAIGlobalParameter::getParamSeDistanceWaitMax();
					}
				} else {
					waitTime = 0;
				}
				track->writePortApp(val0 + 0x30000, waitTime);
				track->writePortApp(val0 + 0x60000, JAIBasic::getInterface()->getMapInfoFxline(currSound->mMapInfoIndex));
				track->writePortApp(val0 + 0x40000, offset);
				track->writePortApp(val0, 1);

				if (currSound->mSoundID & 0xC00) {
					currSound->mState = SOUNDSTATE_Playing;
				} else {
					currSound->mState = SOUNDSTATE_Fadeout;
				}
			} else if (portApp0 == 0 && portApp1 != 1) {
				releaseSeRegist(currSound);
			} else if (currSound->mState == SOUNDSTATE_Ready) {
				if (currSound->mFadeCounter) {
					if (currSound->mSeParam.mVolumes[SOUNDPARAM_Direct].mCurrentValue != 0.0f) {
						currSound->setSeDistanceParameters();
						sendSeAllParameter(currSound);
						if (currSound->mSoundID & 0xC00) {
							currSound->mState = SOUNDSTATE_Playing;
						} else {
							currSound->mState = SOUNDSTATE_Fadeout;
						}
					} else {
						releaseSeRegist(currSound);
					}
				} else {
					currSound->setSeDistanceParameters();
					sendSeAllParameter(currSound);
					if (currSound->mSoundID & 0xC00) {
						currSound->mState = SOUNDSTATE_Playing;
					} else {
						currSound->mState = SOUNDSTATE_Fadeout;
					}
				}
			}
		}
	}
}

/**
 * @note Address: 0x800AF29C
 * @note Size: 0xF0
 */
void setSeqMuteFromSeStart(JAISound* sound)
{
	for (u32 i = 0; i < JAIGlobalParameter::getParamSeqPlayTrackMax(); i++) {
		JAISequence* seq = SequenceMgr::getPlayTrackInfo(i)->mSequence;
		if (i != seHandle->_14 && seq && !(seq->getSwBit() & SOUNDFLAG_Unk3)) {
			seq->setVolume(JAIGlobalParameter::getParamSeqMuteVolumeSePlay() / 127.0f, JAIGlobalParameter::getParamSeqMuteMoveSpeedSePlay(),
			               SOUNDPARAM_Unk9);
			seqMuteFlagFromSe |= 1 << sound->_14;
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
void clearSeqMuteFromSeStop(JAISound* se)
{
	if (seqMuteFlagFromSe && se->getSwBit() & SOUNDFLAG_Unk3) {
		for (u32 i = 0; i < JAIGlobalParameter::getParamSeqPlayTrackMax(); i++) {
			JAISequence* seq = SequenceMgr::getPlayTrackInfo(i)->mSequence;
			if (i == seHandle->_14 || !seq || seq->getSwBit() & SOUNDFLAG_Unk3) {
				continue;
			}

			if (seqMuteFlagFromSe &= ((1 << se->_14) ^ -1)) {
				continue;
			}

			seq->setVolume(1.0f, JAIGlobalParameter::getParamSeqMuteMoveSpeedSePlay(), SOUNDPARAM_Unk9);
		}
	}
}

/**
 * @note Address: 0x800AF3B8
 * @note Size: 0xD4
 */
void checkSeMovePara()
{
	if (seHandle == nullptr || seHandle->mSeqParameter.mPauseMode == SOUNDPAUSE_Unk2) {
		return;
	}
	for (u8 i = 0; i < JAIGlobalParameter::getParamSeCategoryMax(); i++) {
		for (JSULink<JAISound>* link = seRegist[i].mUsedList->getFirst(); link != nullptr; link = link->getNext()) {
			JAISe* se = static_cast<JAISe*>(link->getObject());
			for (u8 j = 0; j < 8; j++) {
				se->mSeParam.mVolumes[j].move();
				se->mSeParam.mPans[j].move();
				se->mSeParam.mFxmixes[j].move();
				se->mSeParam._324[j].move();
				se->mSeParam.mDolbys[j].move();
				se->mSeParam.mPitches[j].move();
			}
		}
	}
}

/**
 * @note Address: 0x800AF48C
 * @note Size: 0x168
 */
void sendSeAllParameter(JAISe* se)
{
	TrackUpdate* trackData          = &seTrackUpdate[se->_14];
	JAInter::SeqUpdateData* seqData = JAInter::SequenceMgr::getPlayTrackInfo(seHandle->_14);

	checkPlayingSeUpdateMultiplication(se, seqData, se->mSeParam._424, se->mSeParam.mVolumes, seCategoryVolume[se->getSeCategoryNumber()],
	                                   3, &trackData->mPlayingVolume);
	checkPlayingSeUpdateAddition(se, seqData, se->mSeParam._428, se->mSeParam.mPans, 5, &trackData->mPlayingPan, 0.5f);
	checkPlayingSeUpdateMultiplication(se, seqData, se->mSeParam._42C, se->mSeParam.mPitches, 1.0f, 4, &trackData->mPlayingPitch);
	checkPlayingSeUpdateAddition(se, seqData, se->mSeParam._430, se->mSeParam.mFxmixes, 6, &trackData->mPlayingFxmix, 0.0f);
	checkPlayingSeUpdateAddition(se, seqData, se->mSeParam._438, se->mSeParam.mDolbys, 7, &trackData->mPlayingDolby,
	                             JAIGlobalParameter::getParamSeDolbyCenterValue() / 127.0f);

	if (seqData->_44[se->_14]) {
		SystemInterface::setSeqPortargsU32(SequenceMgr::getPlayTrackInfo(seHandle->_14), se->_14, 2, seqData->_44[se->_14]);
		seqData->mPlayerParams[se->_14].mCommand.addPortCmdOnce();
	}
}

/**
 * @note Address: 0x800AF5F4
 * @note Size: 0x10C
 * checkPlayingSeUpdateMultiplication__Q27JAInter5SeMgrFP5JAISePQ27JAInter13SeqUpdateDataPfPQ27JAInter11MoveParaSetfUcPf
 */
void checkPlayingSeUpdateMultiplication(JAISe* se, JAInter::SeqUpdateData* seqData, f32* p3, JAInter::MoveParaSet* paraSets, f32 multiplier,
                                        u8 p6, f32* outVal)
{
	f32 val;
	if (paraSets[SOUNDPARAM_Fadeout].mCurrentValue == -1.0f) {
		if (p3) {
			paraSets[SOUNDPARAM_Unk0].mCurrentValue = *p3;
		}
		val = 1.0f;
		for (int i = 0; i < 7; i++) {
			val *= paraSets[i].mCurrentValue;
		}
	} else {
		val = paraSets[SOUNDPARAM_Fadeout].mCurrentValue;
	}

	val *= multiplier;
	if (*outVal != val) {
		*outVal = val;
		if (se->mState != SOUNDSTATE_Loaded) {
			seqData->_44[se->_14] |= (1 << p6 - 3);
			SystemInterface::setSeqPortargsF32(SequenceMgr::getPlayTrackInfo(seHandle->_14), se->_14, p6, val);
		}
	}
}

/**
 * @note Address: 0x800AF700
 * @note Size: 0x14C
 * checkPlayingSeUpdateAddition__Q27JAInter5SeMgrFP5JAISePQ27JAInter13SeqUpdateDataPfPQ27JAInter11MoveParaSetUcPff
 */
void checkPlayingSeUpdateAddition(JAISe* se, JAInter::SeqUpdateData* seqData, f32* p3, JAInter::MoveParaSet* paraSets, u8 p5, f32* outVal,
                                  f32 center)
{
	f32 val;
	if (paraSets[SOUNDPARAM_Fadeout].mCurrentValue == -1.0f) {
		if (p3) {
			paraSets[SOUNDPARAM_Unk0].mCurrentValue = *p3;
		}
		val = 0.0f;
		for (int i = 0; i < 7; i++) {
			val += (paraSets[i].mCurrentValue - center);
		}
		val += center;
		if (val < 0.0f) {
			val = 0.0f;
		} else if (val > 1.0f) {
			val = 1.0f;
		}
	} else {
		val = paraSets[SOUNDPARAM_Fadeout].mCurrentValue;
	}

	if (*outVal != val) {
		*outVal = val;
		if (se->mState != SOUNDSTATE_Loaded) {
			seqData->_44[se->_14] |= (1 << p5 - 3);
			SystemInterface::setSeqPortargsF32(SequenceMgr::getPlayTrackInfo(seHandle->_14), se->_14, p5, val);
		}
	}
}

/**
 * @note Address: 0x800AF84C
 * @note Size: 0x8
 */
u8 changeIDToCategory(u32 id)
{
	return id >> 0xC;
}

/**
 * @note Address: 0x800AF854
 * @note Size: 0x1D0
 */
void releaseSeRegist(JAISe* se)
{
	if (seHandle) {
		if (se->mState != SOUNDSTATE_Stored && se->_14 != 0xFF) {
			u32 val0 = (((se->_14 & 0xF0) >> 4) + 0x20000000) + ((se->_14 & 0xF) << 4);
			seHandle->getTrack()->writePortApp(val0, 0);
			seHandle->setTrackInterruptSwitch(se->_14, 1);
		}

		clearSeqMuteFromSeStop(se);
	}

	u8 max = categoryInfoTable[seScene][se->getSeCategoryNumber() * 2];
	u8 cat = se->getSeCategoryNumber();
	for (u8 i = 0; i < max; i++) {
		if (sePlaySound[cat][i] == se) {
			sePlaySound[cat][i] = nullptr;
			i                   = max;
		}
	}
	se->clearMainSoundPPointer();
	se->mState = SOUNDSTATE_Inactive;
	se->_14    = 0xFF;
	seRegist[cat].releaseSound(se);
}

/**
 * @note Address: 0x800AFA24
 * @note Size: 0x6EC
 */
void storeSeBuffer(JAISe** soundHandlePtr, JAInter::Actor* actor, u32 soundID, u32 fadeTime, u8 camId, JAInter::SoundInfo* soundInfo)
{
	bool check = JAISe::checkDummyHandle(soundHandlePtr);
	if (soundHandlePtr && *soundHandlePtr
	    && (soundID != (*soundHandlePtr)->mSoundID || (soundID == (*soundHandlePtr)->mSoundID && (soundID & 0xC00) == 0x800))) {
		if ((*soundHandlePtr)->checkSoundHandle(soundID, soundInfo)) {
			return;
		}
	}

	u32 category = (soundID >> 12) & 0xFF;
	u8 idx       = category;

	u32 isFree;
	JSULink<JAISound>* link;
	void* obj;
	u8 bufferCount;
	u8 max;
	JAISe* seBuffer[16];
	JAInter::Actor* usableActor = actor;
	if (!actor) {
		usableActor = &JAInter::Const::nullActor;
	}

	obj         = usableActor->mObj;
	isFree      = soundID & 0x800;
	max         = categoryInfoTable[seScene][category * 2 + 1];
	bufferCount = 0;
	link        = seRegist[idx].mUsedList->getFirst();
	while (link) {
		JAISe* sound = static_cast<JAISe*>(link->getObject());
		if (sound->mCreatureObj == obj) {
			if (soundID == sound->mSoundID && !(soundInfo->mFlag & SOUNDFLAG_Unk19)
			    && (check == true || (JAISe**)sound->mMainSoundPPointer == soundHandlePtr)) {
				if (!isFree) {
					if (sound->_14 != 0xFF) {
						sound->mState = SOUNDSTATE_Playing;
					} else {
						sound->mState = SOUNDSTATE_Stored;
					}
					if (soundHandlePtr && !*soundHandlePtr) {
						if (sound->mMainSoundPPointer) {
							*sound->mMainSoundPPointer = nullptr;
						}
						sound->mMainSoundPPointer = (void**)soundHandlePtr;
						*soundHandlePtr           = sound;
					}
					return;
				}
				sound->stop(0);
				link        = nullptr;
				bufferCount = 0xFF;
			} else {
				if (bufferCount == 0) {
					seBuffer[bufferCount] = sound;
				} else if (seBuffer[0]->getInfoPriority() < sound->getInfoPriority()) {
					seBuffer[bufferCount] = sound;
				} else {
					for (u32 i = 0; i < bufferCount; i++) {
						seBuffer[i + 1] = seBuffer[i];
					}
					seBuffer[0] = sound;
				}
				link = link->getNext();
				bufferCount++;
			}
		} else {
			link = link->getNext();
		}
	}

	if (bufferCount == max) {
		if (seBuffer[0]->getInfoPriority() > soundInfo->mPriority) {
			return;
		}

		if (soundInfo->mPriority == seBuffer[0]->getInfoPriority() && seBuffer[0]->mState == SOUNDSTATE_Fadeout) {
			return;
		}
		releaseSeRegist(seBuffer[0]);
	}
	JAISe* se = static_cast<JAISe*>(seRegist[idx].getSound());
	if (!se) {
		JAISe* newSe = nullptr;
		f32 maxDist  = 0.0f;
		for (JSULink<JAISound>* link = seRegist[idx].mUsedList->getFirst(); link; link = link->getNext()) {
			JAISe* currSe = static_cast<JAISe*>(link->getObject());
			f32 currDist  = currSe->getSoundObj()->mDistance;
			if (maxDist <= currDist) {
				maxDist = currDist;
				newSe   = currSe;
			}
		}
		if (newSe && newSe->getInfoPriority() <= soundInfo->mPriority) {
			newSe->stop(0);
			se = static_cast<JAISe*>(seRegist[idx].getSound());
		} else {
			if (soundHandlePtr) {
				*soundHandlePtr = nullptr;
			}
			return;
		}
	}

	SeParameter* param = se->getSeParameter();
	f32 center         = JAIGlobalParameter::getParamSeDolbyCenterValue() / 127.0f;
	for (u32 i = 0; i < 8; i++) {
		param->mVolumes[i] = MoveParaSet();
		param->mPans[i]    = MoveParaSetInitHalf();
		param->mPitches[i] = MoveParaSet();
		param->mFxmixes[i] = MoveParaSetInitZero();
		param->_324[i]     = MoveParaSetInitZero();
		param->mDolbys[i]  = MoveParaSet(center);
	}

	param->mVolumes[7] = MoveParaSet(-1.0f);
	param->mPans[7]    = MoveParaSetInitHalf(-1.0f);
	param->mPitches[7] = MoveParaSet(-1.0f);
	param->mFxmixes[7] = MoveParaSetInitZero(-1.0f);
	param->_324[7]     = MoveParaSetInitZero(-1.0f);
	param->mDolbys[7]  = MoveParaSet(-1.0f);
	param->_424        = nullptr;
	param->_428        = nullptr;
	param->_42C        = nullptr;
	param->_430        = nullptr;
	param->_434        = 0;
	param->_438        = nullptr;
	param->_20         = 0;
	se->mState         = SOUNDSTATE_Stored;
	se->_14            = 0xFF;

	se->initParameter(soundHandlePtr, usableActor, soundID, fadeTime, camId, soundInfo);
	if (soundHandlePtr) {
		*soundHandlePtr = se;
	}
}

/**
 * @note Address: 0x800B0130
 * @note Size: 0x208
 */
void releaseSeBuffer(JAISe* se, u32 fadeCounter)
{
	// sound is already released
	if (se->mState == SOUNDSTATE_Inactive) {
		return;
	}

	if (fadeCounter == 0 || se->mState == SOUNDSTATE_Stored) {
		releaseSeRegist(se);
		return;
	}

	se->mFadeCounter = fadeCounter;
	se->setVolume(0.0f, fadeCounter, SOUNDPARAM_Direct);
}

/**
 * @note Address: 0x800B0338
 * @note Size: 0x8
 */
void setSeSequenceStartCallback(StartCallback callback)
{
	seStartCallback = callback;
}
} // namespace SeMgr
} // namespace JAInter
