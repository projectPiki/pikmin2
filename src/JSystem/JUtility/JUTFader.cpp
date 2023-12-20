#include "JSystem/J2D/J2DGrafContext.h"
#include "JSystem/JUtility/TColor.h"
#include "JSystem/JUtility/JUTFader.h"
#include "types.h"

/**
 * @note Address: 0x8002CE5C
 * @note Size: 0xAC
 */
JUTFader::JUTFader(int p1, int p2, int p3, int p4, JUtility::TColor color)
    : mColor(color)
    , mViewBox(p1, p2, p1 + p3, p2 + p4)
{
	mStatus      = Status_Out;
	mTicksTarget = 0;
	mTicksRun    = 0;
	_24          = Status_Out;
	_20          = -1;
}

/**
 * @note Address: 0x8002CF08
 * @note Size: 0x100
 */
void JUTFader::control()
{
	if (0 <= _20 && _20-- == 0) {
		mStatus = _24;
	}
	if (mStatus == Status_In) {
		return;
	}
	switch (mStatus) {
	case Status_Out:
		mColor.a = 0xFF;
		break;
	case Status_FadingIn:
		// _0A++;
		mColor.a = 0xFF - ((++mTicksRun * 0xFF) / mTicksTarget);
		if (mTicksRun >= mTicksTarget) {
			mStatus = Status_In;
		}
		break;
	case Status_FadingOut:
		// _0A++;
		mColor.a = ((++mTicksRun * 0xFF) / mTicksTarget);
		if (mTicksRun >= mTicksTarget) {
			mStatus = Status_Out;
		}
		break;
	}
	draw();
}

/**
 * @note Address: 0x8002D008
 * @note Size: 0x90
 */
void JUTFader::draw()
{
	if (mColor.a == 0) {
		return;
	}
	J2DOrthoGraph orthograph;
	orthograph.setColor(mColor);
	orthograph.fillBox(mViewBox);
}

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
void JUTFader::start(int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8002D098
 * @note Size: 0x30
 */
bool JUTFader::startFadeIn(int duration)
{
	bool isStarting = (mStatus == Status_Out);
	if (isStarting) {
		mStatus      = Status_FadingIn;
		mTicksRun    = 0;
		mTicksTarget = duration;
	}
	return isStarting;
}

/**
 * @note Address: 0x8002D0C8
 * @note Size: 0x34
 */
bool JUTFader::startFadeOut(int duration)
{
	bool isStarting = (mStatus == Status_In);
	if (isStarting) {
		mStatus      = Status_FadingOut;
		mTicksRun    = 0;
		mTicksTarget = duration;
	}
	return isStarting;
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
void JUTFader::setStatus(JUTFader::EStatus, int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8002D0FC
 * @note Size: 0x48
 * __dt__8JUTFaderFv
 */
// JUTFader::~JUTFader()
// {
// }
