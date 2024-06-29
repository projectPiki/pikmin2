#include "types.h"
#include "Dolphin/os.h"
#include "PSSystem/BankRandPrm.h"
#include "PSSystem/PSBgmTask.h"
#include "JSystem/JUtility/JUTException.h"

namespace PSSystem {

// clang-format off
const f32 TriangleTableModTask::sTable[40] = {
	 0.0f,  0.1f,  0.2f,  0.3f,  0.4f,  0.5f,  0.6f,  0.7f,  0.8f,  0.9f,
	 1.0f,  0.9f,  0.8f,  0.7f,  0.6f,  0.5f,  0.4f,  0.3f,  0.2f,  0.1f,
	 0.0f, -0.1f, -0.2f, -0.3f, -0.4f, -0.5f, -0.6f, -0.7f, -0.8f, -0.9f,
	-1.0f, -0.9f, -0.8f, -0.7f, -0.6f, -0.5f, -0.4f, -0.3f, -0.2f, -0.1f };
// clang-format on

BankRandPrm* BankRandPrm::sInstance;

/**
 * @note Address: 0x8033E6B4
 * @note Size: 0x124
 */
int ModParamWithFade::task(JASTrack& track)
{
	int result;
	if (mCounter == 0) {
		if (mFadeDuration != 0) {
			f32 preParam = getPreParam(track);
			_24          = (mTargetValue - preParam) / mFadeDuration;
			mCurrTime    = preParam + _24;
		} else {
			timeTask(track, mTargetValue);
			return -1;
		}
	}
	if (mCounter < mFadeDuration) {
		mCurrTime += _24;
		timeTask(track, mCurrTime);
		result = 0;
		mCounter++;
	} else {
		timeTask(track, mTargetValue);
		result = -1;
	}
	return result;
}

/**
 * task__Q28PSSystem21ModParamWithTableTaskFR8JASTrack
 * @note Address: 0x8033E7D8
 * @note Size: 0xF4
 */
int ModParamWithTableTask::task(JASTrack& track)
{
	mCurrTableIdx += mIdxIncRate;
	u8 param = (u8)mCurrTableIdx;
	if (param >= getTableIdxNum()) {
		mCurrTableIdx -= getTableIdxNum();
	}

	return tableTask(track, getTgtWithTable(mCurrTableIdx));
}

/**
 * @note Address: 0x8033E8CC
 * @note Size: 0x30
 */
int PitchModTask::tableTask(JASTrack& track, f32 param)
{
	track.setParam(JASTrack::JASParam_Pitch, param, -1);
	return -0x10;
}

/**
 * @note Address: 0x8033E8FC
 * @note Size: 0xD4
 */
f32 OuterParamTask::getPreParam(JASTrack& track)
{
	switch (mTaskType) {
	case OUTERPARAM_Volume:
		return track.mExtBuffer->mVolume;
	case OUTERPARAM_Pitch:
		return track.mExtBuffer->mPitch;
	case OUTERPARAM_Fxmix:
		return track.mExtBuffer->mFxmix;
	case OUTERPARAM_Dolby:
		return track.mExtBuffer->mDolby;
	case OUTERPARAM_Pan:
		return track.mExtBuffer->mPan;
	case OUTERPARAM_Tempo:
		return track.mExtBuffer->mTempo;
	default:
		JUT_PANICLINE(135, "P2Assert");
		return 0.0f;
	}
}

/**
 * @note Address: 0x8033E9D0
 * @note Size: 0x98
 */
void OuterParamTask::timeTask(JASTrack& track, f32 param)
{
	if (mTaskType != OUTERPARAM_Pitch) {
		if (param < 0.0f) {
			param = 0.0f;
		} else if (param > 1.0f) {
			param = 1.0f;
		}
	}

	track.mExtBuffer->onSwitch(mTaskType);
	track.mExtBuffer->setParam(mTaskType, param);
}

/**
 * @note Address: 0x8033EA68
 * @note Size: 0x28
 */
int SimpleWaitTask::task(JASTrack& track)
{
	if (mWaitTimer >= mWaitMaxTime) {
		return -1;
	}
	mWaitTimer++;
	return -0x10;
}

/**
 * @note Address: 0x8033EA90
 * @note Size: 0x74
 */
BankRandPrm::BankRandPrm()
    : mInst()
{
	mInst.setTarget(1);
	mInst.mFloor   = 1.0f;
	mInst.mCeiling = 0.0f;
}

/**
 * @note Address: 0x8033EB04
 * @note Size: 0x80
 */
void TaskEntry_OuterParam::makeEntry(f32 value, u32 duration)
{
	OSDisableInterrupts();
	mOuterParamTask.mTargetValue  = value;
	mOuterParamTask.mFadeDuration = duration;
	mOuterParamTask.mEnabled      = true;
	mOuterParamTask.mCounter      = 0;
	mOuterParamTask.mCurrTime     = 0.0f;
	mOuterParamTask._24           = 0.0f;
	OSEnableInterrupts();

	append((TaskBase*)&mOuterParamTask);
}

/**
 * @note Address: 0x8033EB84
 * @note Size: 0x54
 */
void TaskEntry_IdMask::makeEntry(u8 noteMask)
{
	OSDisableInterrupts();
	mIdMaskTask.mNoteMask = noteMask;
	mIdMaskTask.mEnabled  = true;
	OSEnableInterrupts();

	append((TaskBase*)&mIdMaskTask);
}

/**
 * @note Address: 0x8033EBD8
 * @note Size: 0x110
 */
void TaskEntry_PitMod::makeEntry(f32 pitch, f32 speed, u32 waitTime)
{
	if (waitTime != 0) {
		OSDisableInterrupts();
		mWaitTask.mWaitTimer   = 0;
		mWaitTask.mWaitMaxTime = waitTime;
		mWaitTask.mEnabled     = true;
		OSEnableInterrupts();

		mWaitTask.mHasNext = 1;
		append(&mWaitTask);

		OSDisableInterrupts();
		mPitModTask.mTargetValue  = pitch;
		mPitModTask.mIdxIncRate   = speed;
		mPitModTask.mEnabled      = true;
		mPitModTask.mCurrTableIdx = 0.0f;
		OSEnableInterrupts();

		mPitModTask.mWaitTaskLink = &mWaitTask.mLink;
		append(&mPitModTask);
	} else {
		OSDisableInterrupts();
		mPitModTask.mTargetValue  = pitch;
		mPitModTask.mIdxIncRate   = speed;
		mPitModTask.mEnabled      = true;
		mPitModTask.mCurrTableIdx = 0.0f;
		OSEnableInterrupts();

		append(&mPitModTask);
	}
	OSDisableInterrupts();
	mPitResetTask.mEnabled = true;
	OSEnableInterrupts();
	append(&mPitResetTask);
}

/**
 * @note Address: 0x8033ECE8
 * @note Size: 0xA4
 */
void TaskEntry_MuteVolume::makeEntry(f32 value, u32 length)
{
	f32 temp_f0;

	OSDisableInterrupts();
	mMuteTask1.mDoMuteTrack = false;
	mMuteTask1.mEnabled     = true;
	OSEnableInterrupts();

	append(&mMuteTask1);
	OSDisableInterrupts();
	mOuterParamTask1.mTargetValue  = value;
	mOuterParamTask1.mFadeDuration = length;
	mOuterParamTask1.mEnabled      = true;
	mOuterParamTask1.mCounter      = 0;
	mOuterParamTask1.mCurrTime     = 0.0f;
	mOuterParamTask1._24           = 0.0f;
	OSEnableInterrupts();
	append(&mOuterParamTask1);
}

/**
 * @note Address: 0x8033ED8C
 * @note Size: 0x8C
 */
void TaskEntry_MuteOnVolume::makeEntry(u32 length)
{
	OSDisableInterrupts();
	mOuterParamTask.mTargetValue  = 0.0f;
	mOuterParamTask.mFadeDuration = length;
	mOuterParamTask.mEnabled      = true;
	mOuterParamTask.mCounter      = 0;
	mOuterParamTask.mCurrTime     = 0.0f;
	mOuterParamTask._24           = 0.0f;
	OSEnableInterrupts();

	append(&mOuterParamTask);
	OSDisableInterrupts();
	mMuteTask.mDoMuteTrack = true;
	mMuteTask.mEnabled     = true;
	OSEnableInterrupts();

	append(&mMuteTask);
}

/**
 * @note Address: 0x8033EE18
 * @note Size: 0x80
 */
void TaskEntry_Tempo::makeEntry(f32 value, u32 length)
{
	OSDisableInterrupts();
	mOuterParamTask1.mTargetValue  = value;
	mOuterParamTask1.mFadeDuration = length;
	mOuterParamTask1.mEnabled      = true;
	mOuterParamTask1.mCounter      = 0;
	mOuterParamTask1.mCurrTime     = 0.0f;
	mOuterParamTask1._24           = 0.0f;
	OSEnableInterrupts();

	append(&mOuterParamTask1);
}
} // namespace PSSystem
