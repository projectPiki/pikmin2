#include "math.h"
#include "JSystem/JMath.h"
#include "types.h"


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

namespace JMath {
const TSinCosTable<2048, f32> sincosTable_;
const TAtanTable<1024, f32> atanTable_;
const TAsinAcosTable<1024, f32> asinAcosTable_;
} // namespace JMath
