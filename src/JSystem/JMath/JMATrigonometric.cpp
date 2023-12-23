#include "math.h"
#include "JSystem/JMath.h"
#include "types.h"

/**
 * @note Address: N/A
 * @note Size: 0xD4
 */
// void atan___Q25JMath18TAtanTable<1024, f32> CFf()
f32 JMath::TAtanTable<1024, f32>::atan_(f32) const
{
	// UNUSED FUNCTION
}

f32 orderfloats(f32 x)
{ // needed to get the right order for the floats and doubles
	f32 ret = 0.0f;
	if (x == 0.0f)
		ret = HALF_PI;
	else if (x == 0.5f)
		ret = 1024.0f;
	else if (x == 1024.0f)
		ret = -HALF_PI;

	return ret;
}

/**
 * @note Address: 0x80035108
 * @note Size: 0x258
 */
// void atan2___Q25JMath18TAtanTable<1024, f32> CFff()
f32 JMath::TAtanTable<1024, f32>::atan2_(f32 y, f32 x) const { return (y >= 0.0f ? calc(y, x) : calcInverse(y, x)); }

namespace JMath {
const TSinCosTable<2048, f32> sincosTable_;
const TAtanTable<1024, f32> atanTable_;
const TAsinAcosTable<1024, f32> asinAcosTable_;
} // namespace JMath
