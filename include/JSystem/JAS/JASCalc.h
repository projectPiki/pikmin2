#ifndef _JSYSTEM_JAS_JASCALC_H
#define _JSYSTEM_JAS_JASCALC_H

#include "types.h"

namespace JASCalc {
void imixcopy(const short*, const short*, short*, unsigned long);
void bcopy(const void*, void*, unsigned long);
void bzero(void*, unsigned long);

// TODO: The existence of this function likely implies the usage of standard C++ type limits API. We should adopt the same throughout.
template <typename A, typename B>
A clamp(B p1);

/**
 * @fabricated
 * See JASChannel::updateAutoMixer
 */
inline f32 clamp_0_1(f32 value)
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
void fft(float*, float*, unsigned long, long);
} // namespace JASCalc

#endif
