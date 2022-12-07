#ifndef _SQRT_H
#define _SQRT_H

#define FRSQRTE(input, output)                   \
	{                                            \
		register f32 __frsqrte_v = input;        \
		asm { frsqrte __frsqrte_v, __frsqrte_v } \
		*output = __frsqrte_v;                   \
	}

inline f32 sqrtf(f32 __sqrtf_g)
{
	if ((__sqrtf_g > 0.0f)) {
		f32 __sqrtf_h;
		FRSQRTE(__sqrtf_g, &__sqrtf_h);
		__sqrtf_g = __sqrtf_h * __sqrtf_g;
	}
	return __sqrtf_g;
}

inline f32 _sqrtf(register float x)
{
	if (x > 0.0f) {
		return sqrtf(x);
	} else {
		return 0.0f;
	}
}

// used in pelplant's Obj::getShadowParam(ShadowParam&)
inline void __sqrtf(register float x, float* val)
{
	if (x > 0.0f) {
		if (x > 0.0f) {
			register float reg_f0;
			asm {
                frsqrte reg_f0, x
			}
			*val = reg_f0 * x;
		}
	} else {
		*val = 0.0f;
	}
}

#endif
