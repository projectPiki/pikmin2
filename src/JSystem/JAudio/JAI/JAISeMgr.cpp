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

	f32 distMax = JAIGlobalParameter::getParamDistanceMax();           // f31
	f32 dist    = JAIGlobalParameter::getParamDistanceMax() / 1000.0f; // f30
	if (dist == 0.0f) {
		dist = 1.0f;
	}

	SeHelper helpers[16];

	for (u32 i = 0; i < JAIGlobalParameter::getParamSeCategoryMax(); i++) {
		for (u8 j = 0; j < categoryInfoTable[seScene][i]; j++) {
			helpers[j]._04    = 0x7FFFFFFF;
			helpers[j].mState = 0xFF;
			helpers[j].mSound = nullptr;
		}

		u8 val                  = 0; // r20
		JSULink<JAISound>* link = seRegist[i].mUsedList->getFirst();
		while (link) {
			bool check   = false; // r23
			JAISe* sound = static_cast<JAISe*>(link->getObject());
			if (sound->mState == SOUNDSTATE_Stored && sound->mSoundID & 0xC00) {
				sound->_16--;
			} else if (!(sound->mSoundID & 0xC00) && sound->mState == SOUNDSTATE_Fadeout) {
				link  = link->getNext();
				check = true;
				releaseSeRegist(sound);
			}

			if (sound->_16 == 0) {
				link  = link->getNext();
				check = true;
				releaseSeRegist(sound);
			} else if (sound->mState != SOUNDSTATE_Inactive) {
				f32 val2                = 2147483600.0f;
				JAISound_0x34* soundObj = sound->getSoundObj();
				if (!sound->_3C) {
					soundObj->mPosition = JAInter::Const::dummyZeroVec;
					soundObj->_0C       = soundObj->mPosition;
					soundObj->mDistance = 0.0f;
				} else if (sound->_1A == 0) {
					soundObj->_0C = soundObj->mPosition;
					u8 val3       = sound->_18;
					if (val3 == 4) {
						val3 = 0;
					}
					PSMTXMultVec(*JAIBasic::getInterface()->mCameras[val3].mMtx, sound->_3C, &soundObj->mPosition);

					soundObj->mDistance
					    = dolsqrtfull(SQUARE(soundObj->mPosition.x) + SQUARE(soundObj->mPosition.y) + SQUARE(soundObj->mPosition.z));
				}

				s16 prio = sound->getInfoPriority();
				if (sound->mAdjustPriority != 0) {
					prio += sound->mAdjustPriority;
					if (prio < 0) {
						prio = 0;
					}
				} else if (prio > 255) {
					prio = 255;
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
					u8 max = categoryInfoTable[seScene][sound->getSeCategoryNumber() * 2];
					for (u8 j = 0; j < max; j++) {
						SeHelper* helper = &helpers[j];
						if (sound->_24 < helper->_04 || (helper->_04 == sound->_24 && helper->mState >= sound->mState)) {
							if (val < (u32)(max - 1)) {
								val = val + 1;
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

		for (u8 j = 0; j < val; j++) {
			if (helpers[j].mSound->mState == SOUNDSTATE_Stored) {
				helpers[j].mSound->mState = SOUNDSTATE_Loaded;
			} else if (helpers[j].mSound->mState == SOUNDSTATE_Playing) {
				helpers[j].mSound->mState = SOUNDSTATE_Ready;
			}
		}

		u8 max = categoryInfoTable[seScene][i * 2];
		for (u8 j = 0; j < max; j++) {
			bool check       = false;
			JAISe* playSound = static_cast<JAISe*>(sePlaySound[i][j]);
			if (!playSound) {
				check = true;
			} else if (playSound->mState == SOUNDSTATE_Playing) {
				if (playSound->mSoundID & 0xC00) {
					releaseSeRegist(playSound);
				} else {
					playSound->mState = SOUNDSTATE_Stored;
					playSound->_14    = 255;
				}
				check = true;
			} else if (playSound->mState == SOUNDSTATE_Inactive || playSound->mState == SOUNDSTATE_Fadeout) {
				sePlaySound[i][j] = nullptr;
				check             = true;
			} else {
				for (u8 k = 0; k < max; k++) {
					if (sePlaySound[i][j] == helpers[k].mSound) {
						helpers[k].mSound = nullptr;
						k                 = max;
					}
				}
			}

			if (check != true) {
				continue;
			}

			u8 k = 0;
			for (k; k < max; k++) {
				JAISe* se = helpers[k].mSound;
				if (!se) {
					continue;
				}

				if (se->mState == SOUNDSTATE_Ready) {
					continue;
				}

				for (u8 m = 0; m < max; m++) { // THIS IS TOO MANY LOOPS JFC
					JAISe* playSe = static_cast<JAISe*>(sePlaySound[i][m]);
					if (playSe && helpers[k].mSound == playSe) {
						check = false;
						m     = max;
					}
				}

				if (check == true) {
					helpers[k].mSound = nullptr;
					sePlaySound[i][j] = se;
					k                 = max + 1;
				}
			}

			if (k == max) {
				sePlaySound[i][j] = nullptr;
			}
		}
	}

	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	stw      r0, 0x144(r1)
	stfd     f31, 0x130(r1)
	psq_st   f31, 312(r1), 0, qr0
	stfd     f30, 0x120(r1)
	psq_st   f30, 296(r1), 0, qr0
	stfd     f29, 0x110(r1)
	psq_st   f29, 280(r1), 0, qr0
	stmw     r19, 0xdc(r1)
	lwz      r3, seHandle__Q27JAInter5SeMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_800AEDB8
	lbz      r0, 0x15(r3)
	cmplwi   r0, 4
	bge      lbl_800AE644
	b        lbl_800AEDB8

lbl_800AE644:
	bl       getParamDistanceMax__18JAIGlobalParameterFv
	fmr      f31, f1
	bl       getParamDistanceMax__18JAIGlobalParameterFv
	lfs      f2, lbl_80516F54@sda21(r2)
	lfs      f0, lbl_80516F4C@sda21(r2)
	fdivs    f30, f1, f2
	fcmpu    cr0, f0, f30
	bne      lbl_800AE668
	lfs      f30, lbl_80516F48@sda21(r2)

lbl_800AE668:
	li       r26, 0
	lis      r4, dummyZeroVec__Q27JAInter5Const@ha
	lis      r3, 0x7FFFFFFF@ha
	addi     r30, r1, 0xc
	mr       r25, r26
	mr       r24, r26
	addi     r28, r4, dummyZeroVec__Q27JAInter5Const@l
	addi     r29, r3, 0x7FFFFFFF@l
	li       r31, 0
	b        lbl_800AEDAC

lbl_800AE690:
	lbz      r0, seScene__Q27JAInter5SeMgr@sda21(r13)
	li       r8, 0
	lwz      r7, categoryInfoTable__Q27JAInter5SeMgr@sda21(r13)
	li       r5, 0xff
	slwi     r6, r0, 2
	li       r4, 0
	b        lbl_800AE6CC

lbl_800AE6AC:
	clrlwi   r0, r8, 0x18
	addi     r3, r1, 0xc
	mulli    r0, r0, 0xc
	addi     r8, r8, 1
	add      r3, r3, r0
	stw      r29, 4(r3)
	stb      r5, 0(r3)
	stw      r4, 8(r3)

lbl_800AE6CC:
	lwzx     r0, r7, r6
	clrlwi   r3, r8, 0x18
	lbzx     r0, r26, r0
	cmplw    r3, r0
	blt      lbl_800AE6AC
	lwz      r3, seRegist__Q27JAInter5SeMgr@sda21(r13)
	addi     r0, r25, 4
	li       r20, 0
	lwzx     r3, r3, r0
	lwz      r22, 0(r3)
	b        lbl_800AEB88

lbl_800AE6F8:
	lwz      r21, 0(r22)
	li       r23, 0
	lbz      r3, 0x15(r21)
	cmplwi   r3, 1
	bne      lbl_800AE728
	lwz      r0, 0x20(r21)
	rlwinm.  r0, r0, 0, 0x14, 0x15
	beq      lbl_800AE728
	lbz      r3, 0x16(r21)
	addi     r0, r3, -1
	stb      r0, 0x16(r21)
	b        lbl_800AE74C

lbl_800AE728:
	lwz      r0, 0x20(r21)
	rlwinm.  r0, r0, 0, 0x14, 0x15
	bne      lbl_800AE74C
	cmplwi   r3, 5
	bne      lbl_800AE74C
	lwz      r22, 0xc(r22)
	mr       r3, r21
	li       r23, 1
	bl       releaseSeRegist__Q27JAInter5SeMgrFP5JAISe

lbl_800AE74C:
	lbz      r0, 0x16(r21)
	cmplwi   r0, 0
	bne      lbl_800AE76C
	lwz      r22, 0xc(r22)
	mr       r3, r21
	li       r23, 1
	bl       releaseSeRegist__Q27JAInter5SeMgrFP5JAISe
	b        lbl_800AEB74

lbl_800AE76C:
	lbz      r0, 0x15(r21)
	cmplwi   r0, 0
	beq      lbl_800AEB74
	lwz      r0, 0x3c(r21)
	lfs      f29, lbl_80516F58@sda21(r2)
	cmplwi   r0, 0
	lwz      r27, 0x34(r21)
	bne      lbl_800AE7CC
	lis      r3, dummyZeroVec__Q27JAInter5Const@ha
	lfs      f0, lbl_80516F4C@sda21(r2)
	lfs      f1, dummyZeroVec__Q27JAInter5Const@l(r3)
	stfs     f1, 0(r27)
	lfs      f1, 4(r28)
	stfs     f1, 4(r27)
	lfs      f1, 8(r28)
	stfs     f1, 8(r27)
	lfs      f1, 0(r27)
	stfs     f1, 0xc(r27)
	lfs      f1, 4(r27)
	stfs     f1, 0x10(r27)
	lfs      f1, 8(r27)
	stfs     f1, 0x14(r27)
	stfs     f0, 0x18(r27)
	b        lbl_800AE920

lbl_800AE7CC:
	lbz      r0, 0x1a(r21)
	cmplwi   r0, 0
	bne      lbl_800AE920
	lfs      f0, 0(r27)
	stfs     f0, 0xc(r27)
	lfs      f0, 4(r27)
	stfs     f0, 0x10(r27)
	lfs      f0, 8(r27)
	stfs     f0, 0x14(r27)
	lbz      r0, 0x18(r21)
	cmplwi   r0, 4
	bne      lbl_800AE800
	li       r0, 0

lbl_800AE800:
	clrlwi   r0, r0, 0x18
	lwz      r5, msBasic__8JAIBasic@sda21(r13)
	mulli    r3, r0, 0xc
	lwz      r4, 0x3c(r21)
	lwz      r6, 4(r5)
	mr       r5, r27
	addi     r0, r3, 8
	lwzx     r3, r6, r0
	bl       PSMTXMultVec
	lfs      f1, 0(r27)
	lfs      f0, 4(r27)
	fmuls    f2, f1, f1
	lfs      f3, 8(r27)
	fmuls    f1, f0, f0
	lfs      f0, lbl_80516F4C@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f1, f2, f1
	fadds    f4, f3, f1
	fcmpo    cr0, f4, f0
	ble      lbl_800AE898
	frsqrte  f1, f4
	lfd      f3, lbl_80516F60@sda21(r2)
	lfd      f2, lbl_80516F68@sda21(r2)
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
	b        lbl_800AE91C

lbl_800AE898:
	lfd      f0, lbl_80516F70@sda21(r2)
	fcmpo    cr0, f4, f0
	bge      lbl_800AE8B0
	lis      r3, __float_nan@ha
	lfs      f4, __float_nan@l(r3)
	b        lbl_800AE91C

lbl_800AE8B0:
	stfs     f4, 8(r1)
	lis      r0, 0x7f80
	lwz      r4, 8(r1)
	rlwinm   r3, r4, 0, 1, 8
	cmpw     r3, r0
	beq      lbl_800AE8D8
	bge      lbl_800AE908
	cmpwi    r3, 0
	beq      lbl_800AE8F0
	b        lbl_800AE908

lbl_800AE8D8:
	clrlwi.  r0, r4, 9
	beq      lbl_800AE8E8
	li       r0, 1
	b        lbl_800AE90C

lbl_800AE8E8:
	li       r0, 2
	b        lbl_800AE90C

lbl_800AE8F0:
	clrlwi.  r0, r4, 9
	beq      lbl_800AE900
	li       r0, 5
	b        lbl_800AE90C

lbl_800AE900:
	li       r0, 3
	b        lbl_800AE90C

lbl_800AE908:
	li       r0, 4

lbl_800AE90C:
	cmpwi    r0, 1
	bne      lbl_800AE91C
	lis      r3, __float_nan@ha
	lfs      f4, __float_nan@l(r3)

lbl_800AE91C:
	stfs     f4, 0x18(r27)

lbl_800AE920:
	mr       r3, r21
	bl       getInfoPriority__8JAISoundFv
	lha      r4, 0x1c(r21)
	clrlwi   r3, r3, 0x18
	extsh.   r0, r4
	beq      lbl_800AE95C
	add      r3, r3, r4
	extsh.   r0, r3
	bge      lbl_800AE94C
	li       r3, 0
	b        lbl_800AE95C

lbl_800AE94C:
	extsh    r0, r3
	cmpwi    r0, 0xff
	ble      lbl_800AE95C
	li       r3, 0xff

lbl_800AE95C:
	extsh    r3, r3
	lis      r0, 0x4330
	subfic   r3, r3, 0xff
	stw      r0, 0xd0(r1)
	mulli    r0, r3, 0x4c
	lfd      f1, lbl_80516F80@sda21(r2)
	xoris    r0, r0, 0x8000
	stw      r0, 0xd4(r1)
	lfd      f0, 0xd0(r1)
	fsubs    f0, f0, f1
	fdivs    f1, f0, f30
	bl       __cvt_fp2unsigned
	lfs      f0, 0x18(r27)
	mr       r19, r3
	fdivs    f1, f0, f30
	bl       __cvt_fp2unsigned
	add      r0, r3, r19
	lfs      f0, lbl_80516F4C@sda21(r2)
	stw      r0, 0x24(r21)
	lfs      f1, 8(r27)
	fcmpo    cr0, f1, f0
	ble      lbl_800AE9D0
	lfs      f0, lbl_80516F78@sda21(r2)
	fmuls    f0, f0, f1
	fdivs    f1, f0, f30
	bl       __cvt_fp2unsigned
	lwz      r0, 0x24(r21)
	add      r0, r3, r0
	stw      r0, 0x24(r21)

lbl_800AE9D0:
	lfs      f1, 0x18(r27)
	lfs      f0, lbl_80516F58@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_800AE9E4
	fmr      f29, f1

lbl_800AE9E4:
	mr       r3, r21
	bl       getSwBit__8JAISoundFv
	rlwinm.  r0, r3, 0, 0x1a, 0x1a
	beq      lbl_800AE9FC
	fmr      f0, f31
	b        lbl_800AEA00

lbl_800AE9FC:
	lfs      f0, lbl_80516F7C@sda21(r2)

lbl_800AEA00:
	fcmpo    cr0, f29, f0
	ble      lbl_800AEA88
	lwz      r0, 0x20(r21)
	rlwinm.  r0, r0, 0, 0x14, 0x15
	bne      lbl_800AEA70
	lbz      r0, 0x15(r21)
	cmplwi   r0, 1
	beq      lbl_800AEA5C
	lbz      r0, 0x14(r21)
	cmplwi   r0, 0xff
	beq      lbl_800AEA5C
	rlwinm   r3, r0, 0x1c, 0x1c, 0x1f
	lwz      r5, seHandle__Q27JAInter5SeMgr@sda21(r13)
	addis    r4, r3, 0x2000
	rlwinm   r0, r0, 4, 0x18, 0x1b
	addi     r3, r5, 0x30c
	li       r5, 0
	add      r4, r4, r0
	bl       writePortApp__8JASTrackFUlUs
	lwz      r3, seHandle__Q27JAInter5SeMgr@sda21(r13)
	li       r5, 1
	lbz      r4, 0x14(r21)
	bl       setTrackInterruptSwitch__11JAISequenceFUcUc

lbl_800AEA5C:
	li       r3, 5
	li       r0, 0xff
	stb      r3, 0x15(r21)
	stb      r0, 0x14(r21)
	b        lbl_800AEB74

lbl_800AEA70:
	lwz      r22, 0xc(r22)
	mr       r3, r21
	li       r23, 1
	li       r4, 0
	bl       releaseSeBuffer__Q27JAInter5SeMgrFP5JAISeUl
	b        lbl_800AEB74

lbl_800AEA88:
	mr       r3, r21
	bl       getSeCategoryNumber__5JAISeFv
	lbz      r0, seScene__Q27JAInter5SeMgr@sda21(r13)
	rlwinm   r5, r3, 1, 0x17, 0x1e
	lwz      r3, categoryInfoTable__Q27JAInter5SeMgr@sda21(r13)
	li       r4, 0
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	lbzx     r5, r3, r5
	addi     r0, r5, -1
	b        lbl_800AEB68

lbl_800AEAB4:
	clrlwi   r6, r4, 0x18
	addi     r3, r1, 0xc
	mulli    r6, r6, 0xc
	lwz      r7, 0x24(r21)
	add      r3, r3, r6
	lwz      r6, 4(r3)
	cmplw    r7, r6
	blt      lbl_800AEAEC
	cmplw    r6, r7
	bne      lbl_800AEB64
	lbz      r7, 0(r3)
	lbz      r6, 0x15(r21)
	cmplw    r7, r6
	blt      lbl_800AEB64

lbl_800AEAEC:
	clrlwi   r6, r20, 0x18
	cmplw    r6, r5
	bge      lbl_800AEB00
	addi     r6, r6, 1
	clrlwi   r20, r6, 0x18

lbl_800AEB00:
	clrlwi   r10, r0, 0x18
	clrlwi   r4, r4, 0x18
	b        lbl_800AEB40

lbl_800AEB0C:
	clrlwi   r6, r10, 0x18
	addi     r8, r1, 0xc
	mulli    r7, r6, 0xc
	addi     r10, r10, -1
	mr       r9, r8
	add      r8, r8, r7
	lwz      r6, -8(r8)
	add      r9, r9, r7
	stw      r6, 4(r9)
	lwz      r6, -4(r8)
	stw      r6, 8(r9)
	lbz      r6, -0xc(r8)
	stb      r6, 0(r9)

lbl_800AEB40:
	clrlwi   r6, r10, 0x18
	cmplw    r6, r4
	bgt      lbl_800AEB0C
	lwz      r7, 0x24(r21)
	mr       r4, r5
	lbz      r6, 0x15(r21)
	stw      r7, 4(r3)
	stw      r21, 8(r3)
	stb      r6, 0(r3)

lbl_800AEB64:
	addi     r4, r4, 1

lbl_800AEB68:
	clrlwi   r3, r4, 0x18
	cmplw    r3, r5
	blt      lbl_800AEAB4

lbl_800AEB74:
	cmplwi   r22, 0
	beq      lbl_800AEB88
	clrlwi.  r0, r23, 0x18
	bne      lbl_800AEB88
	lwz      r22, 0xc(r22)

lbl_800AEB88:
	cmplwi   r22, 0
	bne      lbl_800AE6F8
	clrlwi   r0, r20, 0x18
	li       r6, 0
	li       r5, 2
	li       r4, 3
	b        lbl_800AEBD8

lbl_800AEBA4:
	clrlwi   r3, r6, 0x18
	mulli    r3, r3, 0xc
	addi     r3, r3, 8
	lwzx     r7, r30, r3
	lbz      r3, 0x15(r7)
	cmplwi   r3, 1
	bne      lbl_800AEBC8
	stb      r5, 0x15(r7)
	b        lbl_800AEBD4

lbl_800AEBC8:
	cmplwi   r3, 4
	bne      lbl_800AEBD4
	stb      r4, 0x15(r7)

lbl_800AEBD4:
	addi     r6, r6, 1

lbl_800AEBD8:
	clrlwi   r3, r6, 0x18
	cmplw    r3, r0
	blt      lbl_800AEBA4
	lbz      r0, seScene__Q27JAInter5SeMgr@sda21(r13)
	li       r22, 0
	lwz      r3, categoryInfoTable__Q27JAInter5SeMgr@sda21(r13)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	lbzx     r21, r3, r26
	addi     r27, r21, 1
	b        lbl_800AED90

lbl_800AEC04:
	lwz      r7, sePlaySound__Q27JAInter5SeMgr@sda21(r13)
	rlwinm   r23, r22, 2, 0x16, 0x1d
	li       r0, 0
	lwzx     r4, r24, r7
	lwzx     r3, r4, r23
	cmplwi   r3, 0
	bne      lbl_800AEC28
	li       r0, 1
	b        lbl_800AECC8

lbl_800AEC28:
	lbz      r5, 0x15(r3)
	cmplwi   r5, 4
	bne      lbl_800AEC60
	lwz      r0, 0x20(r3)
	rlwinm.  r0, r0, 0, 0x14, 0x15
	beq      lbl_800AEC48
	bl       releaseSeRegist__Q27JAInter5SeMgrFP5JAISe
	b        lbl_800AEC58

lbl_800AEC48:
	li       r4, 1
	li       r0, 0xff
	stb      r4, 0x15(r3)
	stb      r0, 0x14(r3)

lbl_800AEC58:
	li       r0, 1
	b        lbl_800AECC8

lbl_800AEC60:
	cmplwi   r5, 0
	beq      lbl_800AEC70
	cmplwi   r5, 5
	bne      lbl_800AEC80

lbl_800AEC70:
	li       r3, 0
	li       r0, 1
	stwx     r3, r4, r23
	b        lbl_800AECC8

lbl_800AEC80:
	li       r9, 0
	addi     r5, r1, 0xc
	mr       r4, r9
	b        lbl_800AECBC

lbl_800AEC90:
	clrlwi   r3, r9, 0x18
	lwzx     r6, r7, r24
	mulli    r3, r3, 0xc
	lwzx     r6, r23, r6
	addi     r8, r3, 8
	lwzx     r3, r5, r8
	cmplw    r6, r3
	bne      lbl_800AECB8
	stwx     r4, r5, r8
	mr       r9, r21

lbl_800AECB8:
	addi     r9, r9, 1

lbl_800AECBC:
	clrlwi   r3, r9, 0x18
	cmplw    r3, r21
	blt      lbl_800AEC90

lbl_800AECC8:
	clrlwi   r3, r0, 0x18
	cmplwi   r3, 1
	bne      lbl_800AED8C
	addi     r6, r1, 0xc
	li       r3, 0
	b        lbl_800AED6C

lbl_800AECE0:
	clrlwi   r4, r3, 0x18
	mulli    r4, r4, 0xc
	addi     r8, r4, 8
	lwzx     r7, r6, r8
	cmplwi   r7, 0
	beq      lbl_800AED68
	lbz      r4, 0x15(r7)
	cmplwi   r4, 3
	beq      lbl_800AED68
	lwz      r9, sePlaySound__Q27JAInter5SeMgr@sda21(r13)
	li       r10, 0
	b        lbl_800AED3C

lbl_800AED10:
	lwzx     r5, r9, r24
	rlwinm   r4, r10, 2, 0x16, 0x1d
	lwzx     r5, r5, r4
	cmplwi   r5, 0
	beq      lbl_800AED38
	lwzx     r4, r6, r8
	cmplw    r4, r5
	bne      lbl_800AED38
	li       r0, 0
	mr       r10, r21

lbl_800AED38:
	addi     r10, r10, 1

lbl_800AED3C:
	clrlwi   r4, r10, 0x18
	cmplw    r4, r21
	blt      lbl_800AED10
	clrlwi   r4, r0, 0x18
	cmplwi   r4, 1
	bne      lbl_800AED68
	lwzx     r4, r24, r9
	li       r3, 0
	stwx     r3, r6, r8
	clrlwi   r3, r27, 0x18
	stwx     r7, r23, r4

lbl_800AED68:
	addi     r3, r3, 1

lbl_800AED6C:
	clrlwi   r4, r3, 0x18
	cmplw    r4, r21
	blt      lbl_800AECE0
	bne      lbl_800AED8C
	lwz      r0, sePlaySound__Q27JAInter5SeMgr@sda21(r13)
	li       r4, 0
	lwzx     r3, r24, r0
	stwx     r4, r3, r23

lbl_800AED8C:
	addi     r22, r22, 1

lbl_800AED90:
	clrlwi   r0, r22, 0x18
	cmplw    r0, r21
	blt      lbl_800AEC04
	addi     r26, r26, 2
	addi     r25, r25, 8
	addi     r24, r24, 4
	addi     r31, r31, 1

lbl_800AEDAC:
	bl       getParamSeCategoryMax__18JAIGlobalParameterFv
	cmplw    r31, r3
	blt      lbl_800AE690

lbl_800AEDB8:
	psq_l    f31, 312(r1), 0, qr0
	lfd      f31, 0x130(r1)
	psq_l    f30, 296(r1), 0, qr0
	lfd      f30, 0x120(r1)
	psq_l    f29, 280(r1), 0, qr0
	lfd      f29, 0x110(r1)
	lmw      r19, 0xdc(r1)
	lwz      r0, 0x144(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
}

/**
 * @note Address: 0x800AEDE4
 * @note Size: 0x488
 */
void checkPlayingSe()
{
	u8 count = 0;                                                                  // r26
	for (u8 i = 0; i < JAIGlobalParameter::getParamSeCategoryMax(); i++) {         // r25, r30, r29
		for (u8 j = 0; j < categoryInfoTable[seScene][(u32)i * 2]; j++, count++) { // r28
			JAISe* currSound = static_cast<JAISe*>(sePlaySound[i][j]);             // r27
			if (!currSound) {
				continue;
			}
			currSound->_2C++;
			u32 val0 = (((count >> 4) & 0xF) + 0x20000000) + ((count << 4) & 0xF0);
			u16 portApp0;
			JASTrack* track = &seHandle->mSeqParameter.mTrack; // r31
			track->readPortApp(val0 + 0x20000, &portApp0);
			u16 portApp1;
			track->readPortApp(val0, &portApp1);

			if (currSound->mState == SOUNDSTATE_Loaded) {
				u32 swBit      = currSound->getSwBit(); // r21
				currSound->_14 = count;
				if (swBit & SOUNDFLAG_Unk3) {
					setSeqMuteFromSeStart(currSound);
				}
				if (swBit & (SOUNDFLAG_Unk6 | SOUNDFLAG_Unk7)) {
					int randInt = 255.0f * JAInter::Const::random.nextFloat_0_1(); // random number between 0 and 255
					switch (swBit & (SOUNDFLAG_Unk6 | SOUNDFLAG_Unk7)) {
					case 0x40:
						currSound->_17 = randInt & 0x0F;
						break;
					case 0x80:
						currSound->_17 = randInt & 0x1F;
						break;
					case 0xC0:
						currSound->_17 = randInt & 0x3F;
						break;
					default:
						currSound->_17 = 0;
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
					offset += JAIBasic::getInterface()->getMapInfoGround(currSound->_30);
				}

				u16 waitTime;
				if (JAIGlobalParameter::getParamAudioCameraMax() == 1 && currSound->checkSwBit(0x1000)) {
					if (currSound->getSoundObj()->mDistance < JAIGlobalParameter::getParamDistanceMax()) {
						u32 distanceMax  = JAIGlobalParameter::getParamDistanceMax();
						u32 distanceCurr = currSound->mSoundObj->mDistance;
						waitTime         = (JAIGlobalParameter::getParamSeDistanceWaitMax() * distanceCurr) / distanceMax;
					} else {
						waitTime = JAIGlobalParameter::getParamSeDistanceWaitMax();
					}
				} else {
					waitTime = 0;
				}
				track->writePortApp(val0 + 0x30000, waitTime);
				track->writePortApp(val0 + 0x60000, JAIBasic::getInterface()->getMapInfoFxline(currSound->_30));
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
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stmw     r21, 0x24(r1)
	li       r26, 0
	li       r25, 0
	b        lbl_800AF248

lbl_800AEE00:
	rlwinm   r30, r25, 2, 0x16, 0x1d
	rlwinm   r29, r25, 1, 0x17, 0x1e
	li       r28, 0
	b        lbl_800AF224

lbl_800AEE10:
	lwz      r3, sePlaySound__Q27JAInter5SeMgr@sda21(r13)
	rlwinm   r0, r28, 2, 0x16, 0x1d
	lwzx     r3, r30, r3
	lwzx     r27, r3, r0
	cmplwi   r27, 0
	beq      lbl_800AF21C
	lwz      r4, 0x2c(r27)
	rlwinm   r3, r26, 0x1c, 0x1c, 0x1f
	addis    r3, r3, 0x2000
	rlwinm   r0, r26, 4, 0x18, 0x1b
	addi     r4, r4, 1
	addi     r5, r1, 0xa
	stw      r4, 0x2c(r27)
	add      r24, r3, r0
	addis    r4, r24, 2
	lwz      r3, seHandle__Q27JAInter5SeMgr@sda21(r13)
	addi     r31, r3, 0x30c
	mr       r3, r31
	bl       readPortApp__8JASTrackFUlPUs
	mr       r3, r31
	mr       r4, r24
	addi     r5, r1, 8
	bl       readPortApp__8JASTrackFUlPUs
	lbz      r3, 0x15(r27)
	cmplwi   r3, 2
	bne      lbl_800AF14C
	mr       r3, r27
	bl       getSwBit__8JAISoundFv
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	stb      r26, 0x14(r27)
	mr       r21, r3
	beq      lbl_800AEE98
	mr       r3, r27
	bl       setSeqMuteFromSeStart__Q27JAInter5SeMgrFP8JAISound

lbl_800AEE98:
	rlwinm.  r5, r21, 0, 0x18, 0x19
	beq      lbl_800AEF38
	lis      r3, 0x0019660D@ha
	lwz      r4, random__Q27JAInter5Const@sda21(r13)
	addi     r0, r3, 0x0019660D@l
	lfs      f0, lbl_80516F48@sda21(r2)
	mullw    r3, r4, r0
	lfs      f2, lbl_80516F88@sda21(r2)
	cmpwi    r5, 0x80
	addis    r3, r3, 0x3c6f
	addi     r3, r3, -3233
	srwi     r0, r3, 9
	stw      r3, random__Q27JAInter5Const@sda21(r13)
	oris     r0, r0, 0x3f80
	stw      r0, 0xc(r1)
	lfs      f1, 0xc(r1)
	fsubs    f0, f1, f0
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	beq      lbl_800AEF18
	bge      lbl_800AEF00
	cmpwi    r5, 0x40
	beq      lbl_800AEF0C
	b        lbl_800AEF30

lbl_800AEF00:
	cmpwi    r5, 0xc0
	beq      lbl_800AEF24
	b        lbl_800AEF30

lbl_800AEF0C:
	clrlwi   r0, r0, 0x1c
	stb      r0, 0x17(r27)
	b        lbl_800AEF38

lbl_800AEF18:
	clrlwi   r0, r0, 0x1b
	stb      r0, 0x17(r27)
	b        lbl_800AEF38

lbl_800AEF24:
	clrlwi   r0, r0, 0x1a
	stb      r0, 0x17(r27)
	b        lbl_800AEF38

lbl_800AEF30:
	li       r0, 0
	stb      r0, 0x17(r27)

lbl_800AEF38:
	li       r23, 0
	li       r21, 1
	b        lbl_800AEF80

lbl_800AEF44:
	clrlwi   r0, r23, 0x18
	slw      r22, r21, r0
	and.     r0, r3, r22
	beq      lbl_800AEF7C
	rlwinm   r4, r23, 1, 0x17, 0x1e
	lwz      r3, seHandle__Q27JAInter5SeMgr@sda21(r13)
	addi     r0, r4, 0x48
	lbz      r4, 0x14(r27)
	lhzx     r6, r27, r0
	mr       r5, r23
	bl       setTrackPortData__11JAISequenceFUcUcUs
	lhz      r0, 0x68(r27)
	xor      r0, r0, r22
	sth      r0, 0x68(r27)

lbl_800AEF7C:
	addi     r23, r23, 1

lbl_800AEF80:
	lhz      r3, 0x68(r27)
	cmplwi   r3, 0
	bne      lbl_800AEF44
	mr       r3, r27
	lwz      r12, 0x10(r27)
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	mr       r4, r27
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x28(r27)
	cmplwi   r0, 1
	ble      lbl_800AF00C
	mr       r3, r27
	lfs      f1, lbl_80516F4C@sda21(r2)
	lwz      r12, 0x10(r27)
	li       r4, 0
	li       r5, 6
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r27
	lfs      f1, lbl_80516F48@sda21(r2)
	lwz      r12, 0x10(r27)
	li       r5, 6
	lwz      r4, 0x28(r27)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x28(r27)

lbl_800AF00C:
	mr       r3, r27
	bl       sendSeAllParameter__Q27JAInter5SeMgrFP5JAISe
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	lwz      r4, 0x20(r27)
	bl       getSoundOffsetNumberFromID__8JAIBasicFUl
	mr       r0, r3
	mr       r3, r27
	mr       r23, r0
	li       r4, 0x800
	bl       checkSwBit__8JAISoundFUl
	cmplwi   r3, 0
	beq      lbl_800AF05C
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	lwz      r4, 0x30(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	add      r0, r23, r3
	clrlwi   r23, r0, 0x10

lbl_800AF05C:
	bl       getParamAudioCameraMax__18JAIGlobalParameterFv
	cmplwi   r3, 1
	bne      lbl_800AF0D0
	mr       r3, r27
	li       r4, 0x1000
	bl       checkSwBit__8JAISoundFUl
	cmplwi   r3, 0
	beq      lbl_800AF0D0
	lwz      r21, 0x34(r27)
	bl       getParamDistanceMax__18JAIGlobalParameterFv
	lfs      f0, 0x18(r21)
	fcmpo    cr0, f0, f1
	bge      lbl_800AF0C4
	bl       getParamDistanceMax__18JAIGlobalParameterFv
	bl       __cvt_fp2unsigned
	lwz      r4, 0x34(r27)
	mr       r21, r3
	lfs      f1, 0x18(r4)
	bl       __cvt_fp2unsigned
	mr       r22, r3
	bl       getParamSeDistanceWaitMax__18JAIGlobalParameterFv
	clrlwi   r0, r3, 0x10
	mullw    r0, r0, r22
	divwu    r0, r0, r21
	clrlwi   r5, r0, 0x10
	b        lbl_800AF0D4

lbl_800AF0C4:
	bl       getParamSeDistanceWaitMax__18JAIGlobalParameterFv
	mr       r5, r3
	b        lbl_800AF0D4

lbl_800AF0D0:
	li       r5, 0

lbl_800AF0D4:
	mr       r3, r31
	addis    r4, r24, 3
	bl       writePortApp__8JASTrackFUlUs
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	lwz      r4, 0x30(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r5, r3
	mr       r3, r31
	addis    r4, r24, 6
	bl       writePortApp__8JASTrackFUlUs
	mr       r3, r31
	mr       r5, r23
	addis    r4, r24, 4
	bl       writePortApp__8JASTrackFUlUs
	mr       r3, r31
	mr       r4, r24
	li       r5, 1
	bl       writePortApp__8JASTrackFUlUs
	lwz      r0, 0x20(r27)
	rlwinm.  r0, r0, 0, 0x14, 0x15
	beq      lbl_800AF140
	li       r0, 4
	stb      r0, 0x15(r27)
	b        lbl_800AF21C

lbl_800AF140:
	li       r0, 5
	stb      r0, 0x15(r27)
	b        lbl_800AF21C

lbl_800AF14C:
	lhz      r0, 0xa(r1)
	cmplwi   r0, 0
	bne      lbl_800AF170
	lhz      r0, 8(r1)
	cmplwi   r0, 1
	beq      lbl_800AF170
	mr       r3, r27
	bl       releaseSeRegist__Q27JAInter5SeMgrFP5JAISe
	b        lbl_800AF21C

lbl_800AF170:
	cmplwi   r3, 3
	bne      lbl_800AF21C
	lwz      r0, 0x28(r27)
	cmplwi   r0, 0
	beq      lbl_800AF1E0
	lfs      f1, lbl_80516F4C@sda21(r2)
	lfs      f0, 0x1d0(r27)
	fcmpu    cr0, f1, f0
	beq      lbl_800AF1D4
	mr       r3, r27
	lwz      r12, 0x10(r27)
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl
	mr       r3, r27
	bl       sendSeAllParameter__Q27JAInter5SeMgrFP5JAISe
	lwz      r0, 0x20(r27)
	rlwinm.  r0, r0, 0, 0x14, 0x15
	beq      lbl_800AF1C8
	li       r0, 4
	stb      r0, 0x15(r27)
	b        lbl_800AF21C

lbl_800AF1C8:
	li       r0, 5
	stb      r0, 0x15(r27)
	b        lbl_800AF21C

lbl_800AF1D4:
	mr       r3, r27
	bl       releaseSeRegist__Q27JAInter5SeMgrFP5JAISe
	b        lbl_800AF21C

lbl_800AF1E0:
	mr       r3, r27
	lwz      r12, 0x10(r27)
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl
	mr       r3, r27
	bl       sendSeAllParameter__Q27JAInter5SeMgrFP5JAISe
	lwz      r0, 0x20(r27)
	rlwinm.  r0, r0, 0, 0x14, 0x15
	beq      lbl_800AF214
	li       r0, 4
	stb      r0, 0x15(r27)
	b        lbl_800AF21C

lbl_800AF214:
	li       r0, 5
	stb      r0, 0x15(r27)

lbl_800AF21C:
	addi     r26, r26, 1
	addi     r28, r28, 1

lbl_800AF224:
	lbz      r0, seScene__Q27JAInter5SeMgr@sda21(r13)
	clrlwi   r4, r28, 0x18
	lwz      r3, categoryInfoTable__Q27JAInter5SeMgr@sda21(r13)
	slwi     r0, r0, 2
	lwzx     r0, r3, r0
	lbzx     r0, r29, r0
	cmplw    r4, r0
	blt      lbl_800AEE10
	addi     r25, r25, 1

lbl_800AF248:
	bl       getParamSeCategoryMax__18JAIGlobalParameterFv
	clrlwi   r0, r25, 0x18
	cmplw    r0, r3
	blt      lbl_800AEE00
	lmw      r21, 0x24(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
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
u8 changeIDToCategory(u32 id) { return id >> 0xC; }

/**
 * @note Address: 0x800AF854
 * @note Size: 0x1D0
 */
void releaseSeRegist(JAISe* se)
{
	if (seHandle) {
		if (se->mState != SOUNDSTATE_Stored && se->_14 != 0xFF) {
			u32 val0 = (((se->_14 >> 4) & 0xF) + 0x20000000) + ((se->_14 << 4) & 0xF0);
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
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r5, seHandle__Q27JAInter5SeMgr@sda21(r13)
	cmplwi   r5, 0
	beq      lbl_800AF970
	lbz      r0, 0x15(r31)
	cmplwi   r0, 1
	beq      lbl_800AF8C0
	lbz      r0, 0x14(r31)
	cmplwi   r0, 0xff
	beq      lbl_800AF8C0
	rlwinm   r3, r0, 0x1c, 0x1c, 0x1f
	rlwinm   r0, r0, 4, 0x18, 0x1b
	addis    r4, r3, 0x2000
	addi     r3, r5, 0x30c
	li       r5, 0
	add      r4, r4, r0
	bl       writePortApp__8JASTrackFUlUs
	lwz      r3, seHandle__Q27JAInter5SeMgr@sda21(r13)
	li       r5, 1
	lbz      r4, 0x14(r31)
	bl       setTrackInterruptSwitch__11JAISequenceFUcUc

lbl_800AF8C0:
	lwz      r0, seqMuteFlagFromSe__Q27JAInter5SeMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800AF970
	mr       r3, r31
	bl       getSwBit__8JAISoundFv
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	beq      lbl_800AF970
	li       r29, 0
	b        lbl_800AF964

lbl_800AF8E4:
	mr       r3, r29
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	lwz      r4, seHandle__Q27JAInter5SeMgr@sda21(r13)
	lwz      r30, 0x48(r3)
	lbz      r0, 0x14(r4)
	cmplw    r29, r0
	beq      lbl_800AF960
	cmplwi   r30, 0
	beq      lbl_800AF960
	mr       r3, r30
	bl       getSwBit__8JAISoundFv
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	bne      lbl_800AF960
	lbz      r3, 0x14(r31)
	li       r4, 1
	lwz      r5, seqMuteFlagFromSe__Q27JAInter5SeMgr@sda21(r13)
	li       r0, -1
	slw      r3, r4, r3
	xor      r0, r3, r0
	and.     r0, r5, r0
	stw      r0, seqMuteFlagFromSe__Q27JAInter5SeMgr@sda21(r13)
	bne      lbl_800AF960
	bl       getParamSeqMuteMoveSpeedSePlay__18JAIGlobalParameterFv
	lwz      r12, 0x10(r30)
	mr       r4, r3
	mr       r3, r30
	lfs      f1, lbl_80516F48@sda21(r2)
	lwz      r12, 0x1c(r12)
	li       r5, 9
	mtctr    r12
	bctrl

lbl_800AF960:
	addi     r29, r29, 1

lbl_800AF964:
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	cmplw    r29, r3
	blt      lbl_800AF8E4

lbl_800AF970:
	mr       r3, r31
	bl       getSeCategoryNumber__5JAISeFv
	lbz      r0, seScene__Q27JAInter5SeMgr@sda21(r13)
	rlwinm   r5, r3, 1, 0x17, 0x1e
	lwz      r4, categoryInfoTable__Q27JAInter5SeMgr@sda21(r13)
	mr       r3, r31
	slwi     r0, r0, 2
	lwzx     r4, r4, r0
	lbzx     r30, r4, r5
	bl       getSeCategoryNumber__5JAISeFv
	clrlwi   r29, r3, 0x18
	rlwinm   r6, r3, 2, 0x16, 0x1d
	li       r7, 0
	li       r3, 0
	b        lbl_800AF9D0

lbl_800AF9AC:
	lwz      r0, sePlaySound__Q27JAInter5SeMgr@sda21(r13)
	rlwinm   r4, r7, 2, 0x16, 0x1d
	lwzx     r5, r6, r0
	lwzx     r0, r5, r4
	cmplw    r0, r31
	bne      lbl_800AF9CC
	stwx     r3, r5, r4
	mr       r7, r30

lbl_800AF9CC:
	addi     r7, r7, 1

lbl_800AF9D0:
	clrlwi   r0, r7, 0x18
	cmplw    r0, r30
	blt      lbl_800AF9AC
	mr       r3, r31
	bl       clearMainSoundPPointer__8JAISoundFv
	li       r0, 0
	li       r3, 0xff
	stb      r0, 0x15(r31)
	slwi     r0, r29, 3
	mr       r4, r31
	stb      r3, 0x14(r31)
	lwz      r3, seRegist__Q27JAInter5SeMgr@sda21(r13)
	add      r3, r3, r0
	bl       releaseSound__Q27JAInter9LinkSoundFP8JAISound
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x800AFA24
 * @note Size: 0x6EC
 */
void storeSeBuffer(JAISe** soundHandlePtr, JAInter::Actor* actor, u32 soundID, u32 p4, u8 p5, JAInter::SoundInfo* soundInfo)
{
	bool check = false;
	if (soundHandlePtr && *soundHandlePtr == (JAISe*)1) {
		*soundHandlePtr = nullptr;
		check           = true;
	}
	if (soundHandlePtr && *soundHandlePtr
	    && (soundID != (*soundHandlePtr)->mSoundID || (soundID == (*soundHandlePtr)->mSoundID && (soundID & 0xC00) == 0x800))) {
		if ((*soundHandlePtr)->checkSoundHandle(soundID, soundInfo)) {
			return;
		}
	}

	u8 idx                      = soundID >> 12;
	JAInter::Actor* usableActor = actor;
	if (!actor) {
		usableActor = &JAInter::Const::nullActor;
	}

	void* obj  = usableActor->mObj;
	u32 isFree = soundID & 0x800;
	JAISe* seBuffer[16];
	u8 bufferCount          = 0;
	JSULink<JAISound>* link = seRegist[idx].mUsedList->getFirst();
	u8 max                  = categoryInfoTable[seScene][(idx << 1) + 1];
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

		if (soundInfo->mPriority != seBuffer[0]->getInfoPriority() || seBuffer[0]->mState != SOUNDSTATE_Fadeout) {
			releaseSeRegist(seBuffer[0]);
			JAISe* se = static_cast<JAISe*>(seRegist[idx].getSound());
			if (!se) {
				JAISe* newSe = nullptr;
				f32 maxDist  = 0.0f;
				for (JSULink<JAISound>* link = seRegist[idx].mUsedList->getFirst(); link; link = link->getNext()) {
					JAISe* currSe = static_cast<JAISe*>(link->getObject());
					if (maxDist <= currSe->getSoundObj()->mDistance) {
						maxDist = currSe->getSoundObj()->mDistance;
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

			SeParameter* param = &se->mSeParam;
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

			se->initParameter(soundHandlePtr, usableActor, soundID, p4, p5, soundInfo);
			if (soundHandlePtr) {
				*soundHandlePtr = se;
			}
		}
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stmw      r17, 0x54(r1)
	  mr.       r26, r3
	  mr        r17, r4
	  mr        r27, r5
	  mr        r28, r6
	  mr        r29, r7
	  mr        r30, r8
	  li        r25, 0
	  beq-      .loc_0x48
	  lwz       r0, 0x0(r26)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x48
	  li        r0, 0
	  li        r25, 0x1
	  stw       r0, 0x0(r26)

	.loc_0x48:
	  cmplwi    r26, 0
	  beq-      .loc_0x8C
	  lwz       r3, 0x0(r26)
	  cmplwi    r3, 0
	  beq-      .loc_0x8C
	  lwz       r0, 0x20(r3)
	  cmplw     r27, r0
	  bne-      .loc_0x78
	  bne-      .loc_0x8C
	  rlwinm    r0,r27,0,20,21
	  cmplwi    r0, 0x800
	  bne-      .loc_0x8C

	.loc_0x78:
	  mr        r4, r27
	  mr        r5, r30
	  bl        0x5A6C
	  cmplwi    r3, 0
	  bne-      .loc_0x6D8

	.loc_0x8C:
	  cmplwi    r17, 0
	  mr        r31, r17
	  rlwinm    r4,r27,20,24,31
	  bne-      .loc_0xA8
	  lis       r3, 0x8051
	  addi      r0, r3, 0x2218
	  mr        r31, r0

	.loc_0xA8:
	  lbz       r3, -0x741C(r13)
	  rlwinm    r23,r4,3,21,28
	  lwz       r0, -0x7424(r13)
	  rlwinm    r4,r4,1,0,30
	  rlwinm    r5,r3,2,0,29
	  lwz       r6, -0x742C(r13)
	  add       r3, r0, r23
	  lwz       r21, 0x0(r31)
	  lwzx      r0, r6, r5
	  rlwinm    r24,r27,0,20,20
	  lwz       r3, 0x4(r3)
	  li        r20, 0
	  add       r4, r0, r4
	  lwz       r22, 0x0(r3)
	  lbz       r19, 0x1(r4)
	  b         .loc_0x2AC

	.loc_0xE8:
	  lwz       r18, 0x0(r22)
	  lwz       r0, 0x38(r18)
	  cmplw     r0, r21
	  bne-      .loc_0x2A8
	  lwz       r0, 0x20(r18)
	  cmplw     r27, r0
	  bne-      .loc_0x1A8
	  lwz       r0, 0x0(r30)
	  rlwinm.   r0,r0,0,12,12
	  bne-      .loc_0x1A8
	  rlwinm    r0,r25,0,24,31
	  cmplwi    r0, 0x1
	  beq-      .loc_0x128
	  lwz       r0, 0x40(r18)
	  cmplw     r0, r26
	  bne-      .loc_0x1A8

	.loc_0x128:
	  cmplwi    r24, 0
	  bne-      .loc_0x184
	  lbz       r0, 0x14(r18)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x148
	  li        r0, 0x4
	  stb       r0, 0x15(r18)
	  b         .loc_0x150

	.loc_0x148:
	  li        r0, 0x1
	  stb       r0, 0x15(r18)

	.loc_0x150:
	  cmplwi    r26, 0
	  beq-      .loc_0x6D8
	  lwz       r0, 0x0(r26)
	  cmplwi    r0, 0
	  bne-      .loc_0x6D8
	  lwz       r3, 0x40(r18)
	  cmplwi    r3, 0
	  beq-      .loc_0x178
	  li        r0, 0
	  stw       r0, 0x0(r3)

	.loc_0x178:
	  stw       r26, 0x40(r18)
	  stw       r18, 0x0(r26)
	  b         .loc_0x6D8

	.loc_0x184:
	  mr        r3, r18
	  li        r4, 0
	  lwz       r12, 0x10(r18)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r22, 0
	  li        r20, 0xFF
	  b         .loc_0x2AC

	.loc_0x1A8:
	  rlwinm.   r0,r20,0,24,31
	  bne-      .loc_0x1C0
	  rlwinm    r0,r20,2,22,29
	  addi      r3, r1, 0x8
	  stwx      r18, r3, r0
	  b         .loc_0x29C

	.loc_0x1C0:
	  mr        r3, r18
	  bl        0x3F7C
	  rlwinm    r17,r3,0,24,31
	  lwz       r3, 0x8(r1)
	  bl        0x3F70
	  rlwinm    r0,r3,0,24,31
	  cmplw     r0, r17
	  bge-      .loc_0x1F0
	  rlwinm    r0,r20,2,22,29
	  addi      r3, r1, 0x8
	  stwx      r18, r3, r0
	  b         .loc_0x29C

	.loc_0x1F0:
	  rlwinm    r3,r20,0,24,31
	  li        r4, 0
	  cmplwi    r3, 0
	  ble-      .loc_0x298
	  cmplwi    r3, 0x8
	  subi      r5, r3, 0x8
	  ble-      .loc_0x26C
	  addi      r0, r5, 0x7
	  addi      r6, r1, 0x8
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmplwi    r5, 0
	  ble-      .loc_0x26C

	.loc_0x224:
	  lwz       r0, 0x0(r6)
	  addi      r4, r4, 0x8
	  stw       r0, 0x4(r6)
	  lwz       r0, 0x4(r6)
	  stw       r0, 0x8(r6)
	  lwz       r0, 0x8(r6)
	  stw       r0, 0xC(r6)
	  lwz       r0, 0xC(r6)
	  stw       r0, 0x10(r6)
	  lwz       r0, 0x10(r6)
	  stw       r0, 0x14(r6)
	  lwz       r0, 0x14(r6)
	  stw       r0, 0x18(r6)
	  lwz       r0, 0x18(r6)
	  stw       r0, 0x1C(r6)
	  lwz       r0, 0x1C(r6)
	  stwu      r0, 0x20(r6)
	  bdnz+     .loc_0x224

	.loc_0x26C:
	  rlwinm    r5,r4,2,0,29
	  addi      r6, r1, 0x8
	  sub       r0, r3, r4
	  add       r6, r6, r5
	  mtctr     r0
	  cmplw     r4, r3
	  bge-      .loc_0x298

	.loc_0x288:
	  lwz       r0, 0x0(r6)
	  addi      r4, r4, 0x1
	  stwu      r0, 0x4(r6)
	  bdnz+     .loc_0x288

	.loc_0x298:
	  stw       r18, 0x8(r1)

	.loc_0x29C:
	  lwz       r22, 0xC(r22)
	  addi      r20, r20, 0x1
	  b         .loc_0x2AC

	.loc_0x2A8:
	  lwz       r22, 0xC(r22)

	.loc_0x2AC:
	  cmplwi    r22, 0
	  bne+      .loc_0xE8
	  rlwinm    r0,r20,0,24,31
	  cmplw     r0, r19
	  bne-      .loc_0x4A8
	  lwz       r3, 0x8(r1)
	  bl        0x3E7C
	  lbz       r0, 0x4(r30)
	  rlwinm    r3,r3,0,24,31
	  cmplw     r3, r0
	  bgt-      .loc_0x6D8
	  lwz       r3, 0x8(r1)
	  bl        0x3E64
	  lbz       r0, 0x4(r30)
	  rlwinm    r3,r3,0,24,31
	  cmplw     r0, r3
	  bne-      .loc_0x300
	  lwz       r3, 0x8(r1)
	  lbz       r0, 0x15(r3)
	  cmplwi    r0, 0x5
	  beq-      .loc_0x6D8

	.loc_0x300:
	  lwz       r5, -0x7420(r13)
	  cmplwi    r5, 0
	  beq-      .loc_0x40C
	  lwz       r3, 0x8(r1)
	  lbz       r0, 0x15(r3)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x358
	  lbz       r0, 0x14(r3)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x358
	  rlwinm    r3,r0,28,28,31
	  rlwinm    r0,r0,4,24,27
	  addis     r4, r3, 0x2000
	  addi      r3, r5, 0x30C
	  li        r5, 0
	  add       r4, r4, r0
	  bl        -0xDBD8
	  lwz       r4, 0x8(r1)
	  li        r5, 0x1
	  lwz       r3, -0x7420(r13)
	  lbz       r4, 0x14(r4)
	  bl        0x473C

	.loc_0x358:
	  lwz       r0, -0x7418(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x40C
	  lwz       r3, 0x8(r1)
	  bl        0x3DBC
	  rlwinm.   r0,r3,0,28,28
	  beq-      .loc_0x40C
	  li        r24, 0
	  b         .loc_0x400

	.loc_0x37C:
	  mr        r3, r24
	  bl        0x3A84
	  lwz       r4, -0x7420(r13)
	  lwz       r25, 0x48(r3)
	  lbz       r0, 0x14(r4)
	  cmplw     r24, r0
	  beq-      .loc_0x3FC
	  cmplwi    r25, 0
	  beq-      .loc_0x3FC
	  mr        r3, r25
	  bl        0x3D80
	  rlwinm.   r0,r3,0,28,28
	  bne-      .loc_0x3FC
	  lwz       r3, 0x8(r1)
	  li        r4, 0x1
	  lwz       r5, -0x7418(r13)
	  li        r0, -0x1
	  lbz       r3, 0x14(r3)
	  slw       r3, r4, r3
	  xor       r0, r3, r0
	  and.      r0, r5, r0
	  stw       r0, -0x7418(r13)
	  bne-      .loc_0x3FC
	  bl        -0x2280
	  lwz       r12, 0x10(r25)
	  mr        r4, r3
	  mr        r3, r25
	  lfs       f1, -0x7418(r2)
	  lwz       r12, 0x1C(r12)
	  li        r5, 0x9
	  mtctr     r12
	  bctrl

	.loc_0x3FC:
	  addi      r24, r24, 0x1

	.loc_0x400:
	  bl        -0x2358
	  cmplw     r24, r3
	  blt+      .loc_0x37C

	.loc_0x40C:
	  lwz       r3, 0x8(r1)
	  bl        0x3CF0
	  lbz       r0, -0x741C(r13)
	  rlwinm    r5,r3,1,23,30
	  lwz       r4, -0x742C(r13)
	  rlwinm    r0,r0,2,0,29
	  lwz       r3, 0x8(r1)
	  lwzx      r4, r4, r0
	  lbzx      r17, r4, r5
	  bl        0x3CD0
	  li        r7, 0
	  lwz       r5, 0x8(r1)
	  mr        r4, r7
	  rlwinm    r24,r3,0,24,31
	  rlwinm    r8,r3,2,22,29
	  b         .loc_0x470

	.loc_0x44C:
	  lwz       r0, -0x7428(r13)
	  rlwinm    r3,r7,2,22,29
	  lwzx      r6, r8, r0
	  lwzx      r0, r6, r3
	  cmplw     r0, r5
	  bne-      .loc_0x46C
	  stwx      r4, r6, r3
	  mr        r7, r17

	.loc_0x46C:
	  addi      r7, r7, 0x1

	.loc_0x470:
	  rlwinm    r0,r7,0,24,31
	  cmplw     r0, r17
	  blt+      .loc_0x44C
	  lwz       r3, 0x8(r1)
	  bl        0x3CCC
	  lwz       r4, 0x8(r1)
	  li        r5, 0
	  li        r3, 0xFF
	  rlwinm    r0,r24,3,0,28
	  stb       r5, 0x15(r4)
	  stb       r3, 0x14(r4)
	  lwz       r3, -0x7424(r13)
	  add       r3, r3, r0
	  bl        0x5924

	.loc_0x4A8:
	  lwz       r0, -0x7424(r13)
	  add       r3, r0, r23
	  bl        0x5898
	  mr.       r18, r3
	  bne-      .loc_0x564
	  lwz       r0, -0x7424(r13)
	  li        r17, 0
	  lfs       f0, -0x7414(r2)
	  add       r3, r0, r23
	  lwz       r3, 0x4(r3)
	  lwz       r4, 0x0(r3)
	  b         .loc_0x4FC

	.loc_0x4D8:
	  lwz       r5, 0x0(r4)
	  lwz       r3, 0x34(r5)
	  lfs       f1, 0x18(r3)
	  fcmpo     cr0, f0, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0x4F8
	  fmr       f0, f1
	  mr        r17, r5

	.loc_0x4F8:
	  lwz       r4, 0xC(r4)

	.loc_0x4FC:
	  cmplwi    r4, 0
	  bne+      .loc_0x4D8
	  cmplwi    r17, 0
	  beq-      .loc_0x550
	  mr        r3, r17
	  bl        0x3C30
	  lbz       r0, 0x4(r30)
	  rlwinm    r3,r3,0,24,31
	  cmplw     r3, r0
	  bgt-      .loc_0x550
	  mr        r3, r17
	  li        r4, 0
	  lwz       r12, 0x10(r17)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x7424(r13)
	  add       r3, r0, r23
	  bl        0x5804
	  mr        r18, r3
	  b         .loc_0x564

	.loc_0x550:
	  cmplwi    r26, 0
	  beq-      .loc_0x6D8
	  li        r0, 0
	  stw       r0, 0x0(r26)
	  b         .loc_0x6D8

	.loc_0x564:
	  addi      r17, r18, 0x48
	  bl        -0x2470
	  lfs       f0, -0x73D4(r2)
	  li        r0, 0x4
	  mr        r3, r17
	  lfs       f2, -0x7418(r2)
	  fdivs     f3, f1, f0
	  lfs       f1, -0x7410(r2)
	  lfs       f0, -0x7414(r2)
	  mtctr     r0

	.loc_0x58C:
	  stfs      f2, 0x128(r3)
	  li        r11, 0
	  stfs      f2, 0x124(r3)
	  stw       r11, 0x130(r3)
	  stfs      f1, 0x1A8(r3)
	  stfs      f1, 0x1A4(r3)
	  stw       r11, 0x1B0(r3)
	  stfs      f2, 0x228(r3)
	  stfs      f2, 0x224(r3)
	  stw       r11, 0x230(r3)
	  stfs      f0, 0x2A8(r3)
	  stfs      f0, 0x2A4(r3)
	  stw       r11, 0x2B0(r3)
	  stfs      f0, 0x328(r3)
	  stfs      f0, 0x324(r3)
	  stw       r11, 0x330(r3)
	  stfs      f3, 0x3A8(r3)
	  stfs      f3, 0x3A4(r3)
	  stw       r11, 0x3B0(r3)
	  stfs      f2, 0x138(r3)
	  stfs      f2, 0x134(r3)
	  stw       r11, 0x140(r3)
	  stfs      f1, 0x1B8(r3)
	  stfs      f1, 0x1B4(r3)
	  stw       r11, 0x1C0(r3)
	  stfs      f2, 0x238(r3)
	  stfs      f2, 0x234(r3)
	  stw       r11, 0x240(r3)
	  stfs      f0, 0x2B8(r3)
	  stfs      f0, 0x2B4(r3)
	  stw       r11, 0x2C0(r3)
	  stfs      f0, 0x338(r3)
	  stfs      f0, 0x334(r3)
	  stw       r11, 0x340(r3)
	  stfs      f3, 0x3B8(r3)
	  stfs      f3, 0x3B4(r3)
	  stw       r11, 0x3C0(r3)
	  addi      r3, r3, 0x20
	  bdnz+     .loc_0x58C
	  lfs       f0, -0x73C8(r2)
	  li        r10, 0x1
	  li        r0, 0xFF
	  mr        r3, r18
	  stfs      f0, 0x198(r17)
	  mr        r4, r26
	  mr        r5, r31
	  mr        r6, r27
	  stfs      f0, 0x194(r17)
	  mr        r7, r28
	  mr        r8, r29
	  mr        r9, r30
	  stw       r11, 0x1A0(r17)
	  stfs      f0, 0x218(r17)
	  stfs      f0, 0x214(r17)
	  stw       r11, 0x220(r17)
	  stfs      f0, 0x298(r17)
	  stfs      f0, 0x294(r17)
	  stw       r11, 0x2A0(r17)
	  stfs      f0, 0x318(r17)
	  stfs      f0, 0x314(r17)
	  stw       r11, 0x320(r17)
	  stfs      f0, 0x398(r17)
	  stfs      f0, 0x394(r17)
	  stw       r11, 0x3A0(r17)
	  stfs      f0, 0x418(r17)
	  stfs      f0, 0x414(r17)
	  stw       r11, 0x420(r17)
	  stw       r11, 0x424(r17)
	  stw       r11, 0x428(r17)
	  stw       r11, 0x42C(r17)
	  stw       r11, 0x430(r17)
	  stw       r11, 0x434(r17)
	  stw       r11, 0x438(r17)
	  sth       r11, 0x20(r17)
	  stb       r10, 0x15(r18)
	  stb       r0, 0x14(r18)
	  lwz       r12, 0x10(r18)
	  lwz       r12, 0xC8(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r26, 0
	  beq-      .loc_0x6D8
	  stw       r18, 0x0(r26)

	.loc_0x6D8:
	  lmw       r17, 0x54(r1)
	  lwz       r0, 0x94(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
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

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lbz      r0, 0x15(r3)
	cmplwi   r0, 0
	beq      lbl_800B031C
	cmplwi   r4, 0
	beq      lbl_800B0168
	cmplwi   r0, 1
	bne      lbl_800B0300

lbl_800B0168:
	lwz      r5, seHandle__Q27JAInter5SeMgr@sda21(r13)
	cmplwi   r5, 0
	beq      lbl_800B0264
	cmplwi   r0, 1
	beq      lbl_800B01B4
	lbz      r0, 0x14(r31)
	cmplwi   r0, 0xff
	beq      lbl_800B01B4
	rlwinm   r3, r0, 0x1c, 0x1c, 0x1f
	rlwinm   r0, r0, 4, 0x18, 0x1b
	addis    r4, r3, 0x2000
	addi     r3, r5, 0x30c
	li       r5, 0
	add      r4, r4, r0
	bl       writePortApp__8JASTrackFUlUs
	lwz      r3, seHandle__Q27JAInter5SeMgr@sda21(r13)
	li       r5, 1
	lbz      r4, 0x14(r31)
	bl       setTrackInterruptSwitch__11JAISequenceFUcUc

lbl_800B01B4:
	lwz      r0, seqMuteFlagFromSe__Q27JAInter5SeMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800B0264
	mr       r3, r31
	bl       getSwBit__8JAISoundFv
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	beq      lbl_800B0264
	li       r29, 0
	b        lbl_800B0258

lbl_800B01D8:
	mr       r3, r29
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	lwz      r4, seHandle__Q27JAInter5SeMgr@sda21(r13)
	lwz      r30, 0x48(r3)
	lbz      r0, 0x14(r4)
	cmplw    r29, r0
	beq      lbl_800B0254
	cmplwi   r30, 0
	beq      lbl_800B0254
	mr       r3, r30
	bl       getSwBit__8JAISoundFv
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	bne      lbl_800B0254
	lbz      r3, 0x14(r31)
	li       r4, 1
	lwz      r5, seqMuteFlagFromSe__Q27JAInter5SeMgr@sda21(r13)
	li       r0, -1
	slw      r3, r4, r3
	xor      r0, r3, r0
	and.     r0, r5, r0
	stw      r0, seqMuteFlagFromSe__Q27JAInter5SeMgr@sda21(r13)
	bne      lbl_800B0254
	bl       getParamSeqMuteMoveSpeedSePlay__18JAIGlobalParameterFv
	lwz      r12, 0x10(r30)
	mr       r4, r3
	mr       r3, r30
	lfs      f1, lbl_80516F48@sda21(r2)
	lwz      r12, 0x1c(r12)
	li       r5, 9
	mtctr    r12
	bctrl

lbl_800B0254:
	addi     r29, r29, 1

lbl_800B0258:
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	cmplw    r29, r3
	blt      lbl_800B01D8

lbl_800B0264:
	mr       r3, r31
	bl       getSeCategoryNumber__5JAISeFv
	lbz      r0, seScene__Q27JAInter5SeMgr@sda21(r13)
	rlwinm   r5, r3, 1, 0x17, 0x1e
	lwz      r4, categoryInfoTable__Q27JAInter5SeMgr@sda21(r13)
	mr       r3, r31
	slwi     r0, r0, 2
	lwzx     r4, r4, r0
	lbzx     r30, r4, r5
	bl       getSeCategoryNumber__5JAISeFv
	li       r6, 0
	clrlwi   r29, r3, 0x18
	mr       r4, r6
	rlwinm   r7, r3, 2, 0x16, 0x1d
	b        lbl_800B02C4

lbl_800B02A0:
	lwz      r0, sePlaySound__Q27JAInter5SeMgr@sda21(r13)
	rlwinm   r3, r6, 2, 0x16, 0x1d
	lwzx     r5, r7, r0
	lwzx     r0, r5, r3
	cmplw    r0, r31
	bne      lbl_800B02C0
	stwx     r4, r5, r3
	mr       r6, r30

lbl_800B02C0:
	addi     r6, r6, 1

lbl_800B02C4:
	clrlwi   r0, r6, 0x18
	cmplw    r0, r30
	blt      lbl_800B02A0
	mr       r3, r31
	bl       clearMainSoundPPointer__8JAISoundFv
	li       r0, 0
	li       r3, 0xff
	stb      r0, 0x15(r31)
	slwi     r0, r29, 3
	mr       r4, r31
	stb      r3, 0x14(r31)
	lwz      r3, seRegist__Q27JAInter5SeMgr@sda21(r13)
	add      r3, r3, r0
	bl       releaseSound__Q27JAInter9LinkSoundFP8JAISound
	b        lbl_800B031C

lbl_800B0300:
	stw      r4, 0x28(r31)
	li       r5, 6
	lfs      f1, lbl_80516F4C@sda21(r2)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_800B031C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x800B0338
 * @note Size: 0x8
 */
void setSeSequenceStartCallback(StartCallback callback) { seStartCallback = callback; }
} // namespace SeMgr
} // namespace JAInter
