#include "JSystem/JAudio/JAS/JASTrack.h"

/**
 * @note Address: 0x8009C400
 * @note Size: 0x4C
 */
JASOuterParam::JASOuterParam()
    : mOuterSwitch(0)
    , mOuterUpdate(0)
    , mVolume(0.0f)
    , mPitch(0.0f)
    , mFxmix(0.0f)
    , mDolby(0.0f)
    , mPan(0.0f)
    , mTempo(0.0f)
{
	for (int i = 0; i < 8; i++) {
		mFirFilter[i] = 0;
	}
}

/**
 * @note Address: 0x8009C44C
 * @note Size: 0x10
 */
void JASOuterParam::initExtBuffer()
{
	mOuterSwitch = 0;
	mOuterUpdate = 0;
}

/**
 * @note Address: 0x8009C45C
 * @note Size: 0x8
 */
void JASOuterParam::setOuterSwitch(u16 newValue) { mOuterSwitch = newValue; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
u16 JASOuterParam::getSwitch()
{
	// UNUSED FUNCTION
	return mOuterSwitch;
}

/**
 * @note Address: 0x8009C464
 * @note Size: 0x1C
 */
bool JASOuterParam::checkOuterSwitch(u16 p1) { return mOuterSwitch & p1; }

/**
 * @note Address: 0x8009C480
 * @note Size: 0x8
 */
void JASOuterParam::setOuterUpdate(u16 newValue) { mOuterUpdate = newValue; }

/**
 * @note Address: 0x8009C488
 * @note Size: 0x8
 */
u16 JASOuterParam::getOuterUpdate() { return mOuterUpdate; }

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
void JASOuterParam::setIntFirFilter(s16 newValue, u8 index)
{
	// UNUSED FUNCTION
	mFirFilter[index] = newValue;
}

/**
 * @note Address: 0x8009C490
 * @note Size: 0x10
 */
s16 JASOuterParam::getIntFirFilter(u8 index) { return mFirFilter[index]; }

/**
 * @note Address: 0x8009C4A0
 * @note Size: 0x9C
 */
void JASOuterParam::setParam(u8 paramFlag, f32 value)
{
	f32* param;
	switch (paramFlag) {
	case OUTERPARAM_Volume:
		param = &mVolume;
		break;
	case OUTERPARAM_Pitch:
		param = &mPitch;
		break;
	case OUTERPARAM_Fxmix:
		param = &mFxmix;
		break;
	case OUTERPARAM_Dolby:
		param = &mDolby;
		break;
	case OUTERPARAM_Pan:
		param = &mPan;
		break;
	case OUTERPARAM_Tempo:
		param = &mTempo;
		break;
	default:
		return;
	}
	*param = value;
	mOuterUpdate |= paramFlag;
}

/**
 * @note Address: 0x8009C53C
 * @note Size: 0x1C
 */
void JASOuterParam::onSwitch(u16 paramFlag)
{
	mOuterSwitch |= paramFlag;
	mOuterUpdate |= paramFlag;
}

/**
 * @note Address: 0x8009C558
 * @note Size: 0x5C
 */
void JASOuterParam::setFirFilter(s16* p1)
{
	mOuterUpdate |= 0x80;
	mOuterSwitch |= 0x80;
	for (int i = 0; i < 8; i++) {
		mFirFilter[i] = p1[i];
	}
}
