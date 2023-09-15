#ifndef _DOLPHIN_MATH_H
#define _DOLPHIN_MATH_H

#include "types.h"
#include "stl/fdlibm.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/math_api.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

#ifndef __MWERKS__
// Get clangd to shut up about __fabs being undefined.
#define __fabs(x)    (x)
#define __frsqrte(x) (x)
#endif

#define FABS(x) (float)__fabs(x)
#define fabs(x) __fabs(x)
// #define __frsqrtes opword

#define SQUARE(v)                      ((v) * (v))
#define IS_WITHIN_CIRCLE(x, z, radius) ((SQUARE(x) + SQUARE(z)) < SQUARE(radius))

#define VECTOR_SQUARE_MAG(v) (SQUARE(v.x) + SQUARE(v.y) + SQUARE(v.z))

#define LONG_TAU   6.2831854820251465
#define TAU        6.2831855f
#define PI         3.1415927f
#define HALF_PI    1.5707964f
#define THIRD_PI   1.0471976f
#define QUARTER_PI 0.7853982f

#define SIN_2_5 0.43633234f

#define DEG2RAD (1.0f / 180.0f)

#define TORADIANS(val) (PI * (DEG2RAD * val))

f64 cos(f64);
f32 cosf(f32);
f64 sin(f64);
f32 sinf(f32);
f64 tan(f64);
f32 tanf(f32);
f64 atan(f64);
f64 atan2(f64, f64);

/**
 * kludges for emulating inlined f versions of funcs.
 * Replace these with tanf/sinf/cosf once we have library support in the build chain.
 * If my theory is correct, those functions will become inlined by code using libDolphin as a library.
 */
inline f32 tanf_kludge(f32 __x) { return tan((f64)__x); }
inline f32 sinf_kludge(f32 __x) { return sin((f64)__x); }
inline f32 cosf_kludge(f32 __x) { return cos((f64)__x); }

f64 ceil(f64);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

static inline f32 dolsqrtf(f32 x)
{
	static const f64 _half  = .5;
	static const f64 _three = 3.0;
	volatile f32 y;
	if (x > 0.0f) {

		f64 guess = __frsqrte((f64)x);                            // returns an approximation to
		guess     = _half * guess * (_three - guess * guess * x); // now have 12 sig bits
		guess     = _half * guess * (_three - guess * guess * x); // now have 24 sig bits
		guess     = _half * guess * (_three - guess * guess * x); // now have 32 sig bits
		y         = (f32)(x * guess);
		return y;
	}
	return x;
}

#define ispositive(x) ((((u8*)&x)[0] & 0x80) != 0)

static inline f32 scaleValue(f32 scale, f32 value) { return scale * value; }

#endif
