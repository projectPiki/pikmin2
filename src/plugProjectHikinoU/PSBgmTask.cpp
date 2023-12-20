#include "types.h"
#include "Dolphin/os.h"
#include "PSSystem/BankRandPrm.h"
#include "PSSystem/PSBgmTask.h"
#include "JSystem/JUtility/JUTException.h"

namespace PSSystem {

// clang-format off
const float TriangleTableModTask::sTable[40] = {
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
	if (_28 == 0) {
		if (_1C != 0) {
			float preParam = getPreParam(track);
			_24            = (_20 - preParam) / _1C;
			_2C            = preParam + _24;
		} else {
			timeTask(track, _20);
			return -1;
		}
	}
	if (_28 < _1C) {
		_2C += _24;
		timeTask(track, _2C);
		result = 0;
		_28++;
	} else {
		timeTask(track, _20);
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
	_24 += _20;
	u8 param = (u8)_24;
	if (param >= getTableIdxNum()) {
		_24 -= getTableIdxNum();
	}

	return tableTask(track, getTgtWithTable(_24));
}

/**
 * @note Address: 0x8033E8CC
 * @note Size: 0x30
 */
int PitchModTask::tableTask(JASTrack& track, f32 param)
{
	track.setParam(1, param, -1);
	return -0x10;
}

/**
 * @note Address: 0x8033E8FC
 * @note Size: 0xD4
 */
float OuterParamTask::getPreParam(JASTrack& track)
{
	switch (_30) {
	case 0x1:
		return track.mExtBuffer->_04;
	case 0x2:
		return track.mExtBuffer->_08;
	case 0x4:
		return track.mExtBuffer->_0C;
	case 0x10:
		return track.mExtBuffer->_10;
	case 0x8:
		return track.mExtBuffer->_14;
	case 0x40:
		return track.mExtBuffer->_18;
	default:
		JUT_PANICLINE(135, "P2Assert");
		return 0.0f;
	}
}

/**
 * @note Address: 0x8033E9D0
 * @note Size: 0x98
 */
void OuterParamTask::timeTask(JASTrack& track, float param)
{
	if (_30 != 2) {
		if (param < 0.0f) {
			param = 0.0f;
		} else if (param > 1.0f) {
			param = 1.0f;
		}
	}

	track.mExtBuffer->onSwitch(_30);
	track.mExtBuffer->setParam(_30, param);
}

/**
 * @note Address: 0x8033EA68
 * @note Size: 0x28
 */
int SimpleWaitTask::task(JASTrack& track)
{
	if (_1C >= _20) {
		return -1;
	}
	_1C++;
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
	mInst._08 = 1.0f;
	mInst._0C = 0.0f;
}

/**
 * @note Address: 0x8033EB04
 * @note Size: 0x80
 */
void TaskEntry_OuterParam::makeEntry(float p1, u32 p2)
{
	OSDisableInterrupts();
	mOuterParamTask._20 = p1;
	mOuterParamTask._1C = p2;
	mOuterParamTask._14 = 1;
	mOuterParamTask._28 = 0;
	mOuterParamTask._2C = 0.0f;
	mOuterParamTask._24 = 0.0f;
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
	mIdMaskTask._14       = 1;
	OSEnableInterrupts();

	append((TaskBase*)&mIdMaskTask);
}

/**
 * @note Address: 0x8033EBD8
 * @note Size: 0x110
 */
void TaskEntry_PitMod::makeEntry(float p1, float p2, u32 p3)
{
	if (p3 != 0) {
		OSDisableInterrupts();
		mWaitTask._1C = 0;
		mWaitTask._20 = p3;
		mWaitTask._14 = 1;
		OSEnableInterrupts();

		mWaitTask._15 = 1;
		append(&mWaitTask);

		OSDisableInterrupts();
		mPitModTask._1C = p1;
		mPitModTask._20 = p2;
		mPitModTask._14 = 1;
		mPitModTask._24 = 0.0f;
		OSEnableInterrupts();

		mPitModTask._18 = &mWaitTask._04;
		append(&mPitModTask);
	} else {
		OSDisableInterrupts();
		mPitModTask._1C = p1;
		mPitModTask._20 = p2;
		mPitModTask._14 = 1;
		mPitModTask._24 = 0.0f;
		OSEnableInterrupts();

		append(&mPitModTask);
	}
	OSDisableInterrupts();
	mPitResetTask._14 = 1;
	OSEnableInterrupts();
	append(&mPitResetTask);
}

/**
 * @note Address: 0x8033ECE8
 * @note Size: 0xA4
 */
void TaskEntry_MuteVolume::makeEntry(float p1, u32 p2)
{
	f32 temp_f0;

	OSDisableInterrupts();
	mMuteTask1._1C = 0;
	mMuteTask1._14 = 1;
	OSEnableInterrupts();

	append(&mMuteTask1);
	OSDisableInterrupts();
	mOuterParamTask1._20 = p1;
	mOuterParamTask1._1C = p2;
	mOuterParamTask1._14 = 1;
	mOuterParamTask1._28 = 0;
	mOuterParamTask1._2C = 0.0f;
	mOuterParamTask1._24 = 0.0f;
	OSEnableInterrupts();
	append(&mOuterParamTask1);
}

/**
 * @note Address: 0x8033ED8C
 * @note Size: 0x8C
 */
void TaskEntry_MuteOnVolume::makeEntry(u32 p1)
{
	OSDisableInterrupts();
	mOuterParamTask._20 = 0.0f;
	mOuterParamTask._1C = p1;
	mOuterParamTask._14 = 1;
	mOuterParamTask._28 = 0;
	mOuterParamTask._2C = 0.0f;
	mOuterParamTask._24 = 0.0f;
	OSEnableInterrupts();

	append(&mOuterParamTask);
	OSDisableInterrupts();
	mMuteTask._1C = 1;
	mMuteTask._14 = 1;
	OSEnableInterrupts();

	append(&mMuteTask);
}

/**
 * @note Address: 0x8033EE18
 * @note Size: 0x80
 */
void TaskEntry_Tempo::makeEntry(float p1, u32 p2)
{
	OSDisableInterrupts();
	mOuterParamTask1._20 = p1;
	mOuterParamTask1._1C = p2;
	mOuterParamTask1._14 = 1;
	mOuterParamTask1._28 = 0;
	mOuterParamTask1._2C = 0.0f;
	mOuterParamTask1._24 = 0.0f;
	OSEnableInterrupts();

	append(&mOuterParamTask1);
}
} // namespace PSSystem
