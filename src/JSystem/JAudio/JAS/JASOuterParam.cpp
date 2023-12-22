#include "JSystem/JAudio/JAS/JASTrack.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516D10
    lbl_80516D10:
        .4byte 0x00000000
        .4byte 0x00000000
*/

/**
 * @note Address: 0x8009C400
 * @note Size: 0x4C
 */
JASOuterParam::JASOuterParam()
    : mOuterSwitch(0)
    , mOuterUpdate(0)
    , _04(0.0f)
    , _08(0.0f)
    , _0C(0.0f)
    , _10(0.0f)
    , _14(0.0f)
    , _18(0.0f)
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
void JASOuterParam::setOuterSwitch(u16 newValue)
{
	// Generated from sth r4, 0x0(r3)
	mOuterSwitch = newValue;
}

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
void JASOuterParam::setOuterUpdate(u16 newValue)
{
	// Generated from sth r4, 0x2(r3)
	mOuterUpdate = newValue;
}

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
void JASOuterParam::setParam(u8 p1, f32 p2)
{
	f32* v1;
	switch (p1) {
	case 1:
		v1 = &_04;
		break;
	case 2:
		v1 = &_08;
		break;
	case 4:
		v1 = &_0C;
		break;
	case 16:
		v1 = &_10;
		break;
	case 8:
		v1 = &_14;
		break;
	case 64:
		v1 = &_18;
		break;
	default:
		return;
	}
	*v1 = p2;
	mOuterUpdate |= p1;
}

/**
 * @note Address: 0x8009C53C
 * @note Size: 0x1C
 */
void JASOuterParam::onSwitch(u16 p1)
{
	mOuterSwitch |= p1;
	mOuterUpdate |= p1;
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
