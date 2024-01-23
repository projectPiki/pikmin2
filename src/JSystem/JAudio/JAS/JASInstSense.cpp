#include "JSystem/JAudio/JAS/JASInst.h"

/**
 * @note Address: 0x8009B58C
 * @note Size: 0x124
 */
f32 JASInstSense::getY(int p1, int p2) const
{
	int val = 0;
	switch (mRegister) {
	case 1:
		val = p2;
		break;
	case 2:
		val = p1;
		break;
	}

	f32 y;
	if (mKey == 127 || mKey == 0) {
		y = mFloor + (val * (mCeiling - mFloor)) / 127.0f;
	} else if (val < mKey) {
		y = (1.0f - mFloor) * ((f32)val / (f32)mKey) + mFloor;
	} else {
		y = (mCeiling - 1.0f) * ((f32)(val - mKey) / (f32)(127 - mKey)) + 1.0f;
	}

	return y;
}

/**
 * @note Address: 0x8009B6B0
 * @note Size: 0x14
 */
void JASInstSense::setParams(int reg, int key, f32 floor, f32 ceiling)
{
	mRegister = reg;
	mKey      = key;
	mFloor    = floor;
	mCeiling  = ceiling;
}
