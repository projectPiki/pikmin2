#ifndef _MATH_H
#define _MATH_H

#include "PowerPC_EABI_Support/MSL_C/MSL_Common/math_api.h"
#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

#define SQUARE(v)                       ((v) * (v))
#define IS_WITHIN_CIRCLE(x, z, radius)  ((SQUARE(x) + SQUARE(z)) < SQUARE(radius))
#define IS_OUTSIDE_CIRCLE(x, z, radius) ((SQUARE(x) + SQUARE(z)) > SQUARE(radius))
#define IS_WITHIN_SPHERE(x, y, z, r)    ((SQUARE(x) + SQUARE(y) + SQUARE(z)) < SQUARE(r))
#define VECTOR_SQUARE_MAG(v)            (SQUARE(v.x) + SQUARE(v.y) + SQUARE(v.z))

#define SIGNBIT(x)     ((int)(__HI(x) & 0x80000000))
#define IS_POSITIVE(x) ((((u8*)&x)[0] & 0x80) != 0)

#define INFINITY (*(f32*)__float_huge)
#define NAN      (*(f32*)__float_nan)
#define HUGE_VAL (*(f64*)__double_huge)

#define LONG_TAU    6.2831854820251465
#define TAU         6.2831855f
#define PI          3.1415927f
#define HALF_PI     1.5707964f
#define HALF_PI_F64 1.5707963267948966
#define THIRD_PI    1.0471976f
#define QUARTER_PI  0.7853982f

#define SIN_2_5 0.43633234f
#define M_SQRT3 1.73205f

#define DEG2RAD            (1.0f / 180.0f)
#define RAD2DEG            (180.0f / PI)
#define RAD2DEG_F64        (57.29577951308232)
#define TORADIANS(degrees) (PI * (DEG2RAD * degrees))
#define TODEGREES(radians) (RAD2DEG * radians)

extern int __float_nan[];
extern int __float_huge[];
extern int __double_huge[];

f64 cos(f64);
f32 cosf(f32);
f64 sin(f64);
f32 sinf(f32);
f64 tan(f64);
f32 tanf(f32);

f64 acos(f64);
f64 asin(f64);
f64 atan(f64);
f64 atan2(f64, f64);

f64 ceil(f64);
f64 floor(f64);
f64 frexp(f64, int*);
f64 ldexp(f64, int);
f64 sqrt(f64);

f64 pow(f64, f64);
f64 log(f64);
f64 log10(f64);
f64 fmod(f64, f64);
f64 scalbn(f64, int);

f64 __ieee754_acos(f64);
f64 __ieee754_fmod(f64, f64);
f64 __ieee754_log(f64);
f64 __ieee754_log10(f64);
f64 __ieee754_pow(f64, f64);
f64 __ieee754_sqrt(f64);
f64 __ieee754_atan2(f64, f64);
f64 __ieee754_asin(f64);
int __ieee754_rem_pio2(f64, f64*);

f64 __kernel_sin(f64, f64, int);
f64 __kernel_cos(f64, f64);
f64 __kernel_tan(f64, f64, int);

f64 __fabs(f64);
f32 __fabsf(f32);
f64 __fnabs(f64);
f32 __fnabsf(f32);
f64 __fmadd(f64, f64, f64);
f64 __fmsub(f64, f64, f64);
f64 __fnmadd(f64, f64, f64);
f64 __fnmsub(f64, f64, f64);
f32 __fmadds(f32, f32, f32);
f32 __fmsubs(f32, f32, f32);
f32 __fnmadds(f32, f32, f32);
f32 __fnmsubs(f32, f32, f32);
f64 __fsel(f64, f64, f64);
f32 __fsels(f32, f32, f32);
f64 __frsqrte(f64);
f32 __fres(f32);
f64 __fsqrt(f64);
f32 __fsqrts(f32);
s64 __fctid(f64);
s64 __fctiw(f64);
f64 __fcfid(s64);
f64 __mffs(void);
void __mtfsf(int, f64);
void __mtfsfi(int, int);
void __mtfsb0(int);
void __mtfsb1(int);
f64 __setflm(f64);

#define FABS(x) (f32) __fabs(x)
#define fabs(x) __fabs(x)

inline f128 fabsl(f128 x) { return __fabs((f64)x); }

/**
 * kludges for emulating inlined f versions of funcs.
 * Replace these with tanf/sinf/cosf once we have library support in the build chain.
 * If my theory is correct, those functions will become inlined by code using libDolphin as a library.
 */

inline f32 tanf_kludge(f32 __x) { return tan((f64)__x); }
inline f32 sinf_kludge(f32 __x) { return sin((f64)__x); }
inline f32 cosf_kludge(f32 __x) { return cos((f64)__x); }

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

static inline f32 dolsqrtf(f32 x)
{
	static const f64 _half  = .5;
	static const f64 _three = 3.0;
	vf32 y;
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

static inline f64 sqrt_step(f64 tmpd, f32 mag) { return tmpd * 0.5 * (3.0 - mag * (tmpd * tmpd)); }

static inline f32 dolsqrtfull(f32 mag)
{
	if (mag > 0.0f) {
		f64 tmpd = __frsqrte(mag);
		tmpd     = sqrt_step(tmpd, mag);
		tmpd     = sqrt_step(tmpd, mag);
		tmpd     = sqrt_step(tmpd, mag);
		return mag * tmpd;
	} else if (mag < 0.0) {
		return NAN;
	} else if (fpclassify(mag) == 1) {
		return NAN;
	} else {
		return mag;
	}
}

static inline f32 scaleValue(f32 scale, f32 value) { return scale * value; }

static inline f32 dolsinf(f32 val) { return (f32)sin((f32)val); }
static inline f32 dolcosf(f32 val) { return (f32)cos((f32)val); }
static inline f32 doltanf(f32 val) { return (f32)tan((f32)val); }
static inline f32 dolatan2f(f32 val1, f32 val2) { return (f32)atan2((f32)val1, (f32)val2); }

#endif
