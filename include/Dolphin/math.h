#ifndef _DOLPHIN_MATH_H
#define _DOLPHIN_MATH_H

#include "types.h"
#include "fdlibm.h"

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

#define SQUARE(v) ((v) * (v))

#define VECTOR_SQUARE_MAG(v) (SQUARE(v.x) + SQUARE(v.y) + SQUARE(v.z))

#define LONG_TAU 6.2831854820251465
#define TAU      6.2831855f
#define PI       3.1415927f
#define HALF_PI  1.5707964f
#define THIRD_PI 1.0471976f

#define DEG2RAD (1.0f / 180.0f)

double cos(double);
float cosf(float);
double sin(double);
double tan(double);
float tanf(float);
double atan(double);
double atan2(double, double);

double ceil(double);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

inline int __fpclassifyf(float x)
{
	switch ((*(s32*)&x) & 0x7f800000) {
	case 0x7f800000: {
		if ((*(s32*)&x) & 0x007fffff)
			return 1;
		else
			return 2;
		break;
	}
	case 0: {
		if ((*(s32*)&x) & 0x007fffff)
			return 5;
		else
			return 3;
		break;
	}
	}
	return 4;
}
inline int __fpclassifyd(double x)
{
	switch (__HI(x) & 0x7ff00000) {
	case 0x7ff00000: {
		if ((__HI(x) & 0x000fffff) || (__LO(x) & 0xffffffff))
			return 1;
		else
			return 2;
		break;
	}
	case 0: {
		if ((__HI(x) & 0x000fffff) || (__LO(x) & 0xffffffff))
			return 5;
		else
			return 3;
		break;
	}
	}
	return 4;
}

#define fpclassify(x) ((sizeof(x) == sizeof(float)) ? __fpclassifyf((float)(x)) : __fpclassifyd((double)(x)))

#define isfinite(x) ((fpclassify(x) > 2))

#endif
