#ifndef _MSL_MATH_API_H
#define _MSL_MATH_API_H

#include "types.h"
#include "stl/fdlibm.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

// int __fpclassifyf(f32);
// int __signbitd(f64);
// int __fpclassifyd(f64);

inline int __fpclassifyf(f32 x)
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
inline int __fpclassifyd(f64 x)
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

#define fpclassify(x) ((sizeof(x) == sizeof(f32)) ? __fpclassifyf((f32)(x)) : __fpclassifyd((f64)(x)))

#define isinf(x)    ((fpclassify(x) == 2))
#define isfinite(x) ((fpclassify(x) > 2))

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
