#include "math.h"
#include "JSystem/JMath.h"
#include "types.h"

namespace JMath {

f32 TAtanTable<1024, f32>::atan_(f32 v) const
{
	if (v >= 0.0f) {
		if (v > TAngleConstant_<f32>::RADIAN_DEG090()) { // this really should be 1.0f but go figure
			return TAngleConstant_<f32>::RADIAN_DEG090() - mTable[round_nearest(1024 / v)];
		} else {
			return mTable[round_nearest(v * 1024)];
		}
	} else {
		v = -v;
		if (v > TAngleConstant_<f32>::RADIAN_DEG090()) {
			return -TAngleConstant_<f32>::RADIAN_DEG090() + mTable[round_nearest(1024 / v)];
		} else {
			return -mTable[round_nearest(v * 1024)];
		}
	}
}

f32 TAtanTable<1024, f32>::atan2_(f32 y, f32 x) const { return (y >= 0.0f ? calc(y, x) : calcInverse(y, x)); }

const TSinCosTable<2048, f32> sincosTable_;
const TAtanTable<1024, f32> atanTable_;
const TAsinAcosTable<1024, f32> asinAcosTable_;
} // namespace JMath
