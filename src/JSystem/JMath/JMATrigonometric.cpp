#include "math.h"
#include "JSystem/JMath.h"
#include "types.h"

namespace JMath {

// not sure why this file gets specifications, ¯\_(ツ)_/¯
f32 TAtanTable<1024, f32>::atan_(f32 v) const
{

	if (v >= 0.0f) {
		f32 pi_2 = TAngleConstant_<f32>::RADIAN_DEG090();
		if (v > 1.0f) {
			return pi_2 - mTable[round_nearest(1024 / v)];
		} else {
			return mTable[round_nearest(v * 1024)];
		}
	} else {
		v        = -v;
		f32 pi_2 = -TAngleConstant_<f32>::RADIAN_DEG090();
		if (v > 1.0f) {
			return pi_2 + mTable[round_nearest(1024 / v)];
		} else {
			return -mTable[round_nearest(v * 1024)];
		}
	}
}

f32 TAtanTable<1024, f32>::atan2_(f32 y, f32 x) const
{
	return (y >= 0.0f ? calc(y, x) : calcInverse(y, x));
}

const TSinCosTable<2048, f32> sincosTable_;
const TAtanTable<1024, f32> atanTable_;
const TAsinAcosTable<1024, f32> asinAcosTable_;
} // namespace JMath
