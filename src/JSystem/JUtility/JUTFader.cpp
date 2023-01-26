#include "JSystem/J2D/J2DGrafContext.h"
#include "JSystem/JUtility/TColor.h"
#include "JSystem/JUtility/JUTFader.h"
#include "types.h"

/*
 * --INFO--
 * Address:	8002CE5C
 * Size:	0000AC
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

/*
 * --INFO--
 * Address:	8002CF08
 * Size:	000100
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

/*
 * --INFO--
 * Address:	8002D008
 * Size:	000090
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

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void JUTFader::start(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002D098
 * Size:	000030
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

/*
 * --INFO--
 * Address:	8002D0C8
 * Size:	000034
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

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void JUTFader::setStatus(JUTFader::EStatus, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002D0FC
 * Size:	000048
 * __dt__8JUTFaderFv
 */
// JUTFader::~JUTFader()
// {
// }
