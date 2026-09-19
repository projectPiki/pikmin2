#ifndef _SQRT_H
#define _SQRT_H

#include "types.h"

#define FRSQRTE(input, output)                \
	{                                         \
		register f32 __frsqrte_v = input;     \
		asm { frsqrte __frsqrte_v, __frsqrte_v } \
		*output = __frsqrte_v;                \
	}

// these all seem to be required in various places (unfortunately)

// approximate square root (without changing input)
inline f32 sqrtf(const f32& input)
{
	f32 value = input;
	if (value > 0.0f) {
		f32 estimate;
#ifdef __MWERKS__ // clang-format off
		FRSQRTE(value, &estimate);
#endif // clang-format on
		value = estimate * value;
		return value;
	}
	return value;
}

// approximate square root (in-place)
inline f32 sqrtfInPlace(f32& value)
{
	if (value > 0.0f) {
		f32 estimate;
#ifdef __MWERKS__ // clang-format off
		FRSQRTE(value, &estimate);
#endif // clang-format on
		value = estimate * value;
	}
	return value;
}

// approximate square root (with extra checks)
inline f32 sqrtfClamped(f32 value)
{
	return (value > 0.0f) ? sqrtf(value) : 0.0f;
}

#endif
