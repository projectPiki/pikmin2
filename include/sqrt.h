#ifndef _SQRT_H
#define _SQRT_H

#include "types.h"

#define FRSQRTE(input, output)                   \
	{                                            \
		register f32 __frsqrte_v = input;        \
		asm { frsqrte __frsqrte_v, __frsqrte_v } \
		*output = __frsqrte_v;                   \
	}

inline f32 sqrtf(f32& __sqrtf_g)
{
	if ((__sqrtf_g > 0.0f)) {
		f32 __sqrtf_h;
#ifdef __MWERKS__ // clang-format off
		FRSQRTE(__sqrtf_g, &__sqrtf_h);
#endif // clang-format on
		__sqrtf_g = __sqrtf_h * __sqrtf_g;
	}
	return __sqrtf_g;
}

inline f32 sqrtf2(f32& __sqrtf_g)
{
	if ((__sqrtf_g > 0.0f)) {
		f32 __sqrtf_h;
#ifdef __MWERKS__ // clang-format off
		FRSQRTE(__sqrtf_g, &__sqrtf_h);
#endif // clang-format on
		__sqrtf_g = __sqrtf_h * __sqrtf_g;
		return __sqrtf_g;
	}
	return __sqrtf_g;
}

inline f32 _sqrtf(f32 x) { return (x > 0.0f) ? sqrtf(x) : 0.0f; }

inline f32 _sqrtf2(f32 x)
{
	if (x > 0.0f) {
		return sqrtf2(x);
	}
	return 0.0f;
}

// used in pelplant's Obj::getShadowParam(ShadowParam&)
inline void __sqrtf(register f32 x, f32* val)
{
	if (x > 0.0f) {
		if (x > 0.0f) {
			register f32 reg_f0;
#ifdef __MWERKS__ // clang-format off
			asm { frsqrte reg_f0, x }
#endif // clang-format on
			*val = reg_f0 * x;
		}
	} else {
		*val = 0.0f;
	}
}

#endif
