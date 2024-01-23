#include "float.h"
#include "JSystem/JAudio/JALCalc.h"
#include "JSystem/JAudio/JAS/JASInst.h"
#include "JSystem/JMath.h"

/**
 * @note Address: 0x8009B4E8
 * @note Size: 0xA4
 */
f32 JASInstRand::getY(int, int) const
{
	static JMath::TRandom_fast_ oRandom(0);
	f32 y = (FLT_EPSILON); // has to be declared here to prevent regswaps
	y     = calcY(1.0f - y, oRandom.nextFloat_0_1() * 2.0f, 1.0f);
	y *= mCeiling;
	y += mFloor;

	return y;
}
