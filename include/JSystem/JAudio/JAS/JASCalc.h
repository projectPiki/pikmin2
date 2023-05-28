#ifndef _JSYSTEM_JAS_JASCALC_H
#define _JSYSTEM_JAS_JASCALC_H

#include "stl/limits"
#include "types.h"

namespace JASCalc {
void imixcopy(const short*, const short*, short*, unsigned long);
void bcopy(const void*, void*, unsigned long);
void bzero(void*, unsigned long);

/*
 * --INFO--
 * Address:	800A64D8
 * Size:	000028
 */
template <typename A, typename B>
A clamp(B x)
{
	if (std::numeric_limits<A>::min() >= x) {
		return std::numeric_limits<A>::min();
	}
	if (x >= std::numeric_limits<A>::max()) {
		return std::numeric_limits<A>::max();
	}
	return x;
}

inline f32 clamp01(f32 value)
{
	if (value <= 0.0f) {
		return 0.0f;
	}
	if (value >= 1.0f) {
		return 1.0f;
	}
	return value;
}

// unused/inlined:
void mixcopy(const short*, const short*, short*, unsigned long);
void bcopyfast(const void*, void*, unsigned long);
void bzerofast(void*, unsigned long);
void hannWindow(short*, unsigned long);
void hammWindow(short*, unsigned long);
void fft(f32*, f32*, unsigned long, long);
} // namespace JASCalc

#endif
