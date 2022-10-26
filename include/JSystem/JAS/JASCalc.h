#ifndef _JSYSTEM_JAS_JASCALC_H
#define _JSYSTEM_JAS_JASCALC_H

#include "types.h"

namespace JASCalc {
void imixcopy(const short*, const short*, short*, unsigned long);
void bcopy(const void*, void*, unsigned long);
void bzero(void*, unsigned long);
template <typename A, typename B>
A clamp(B p1);

// unused/inlined:
void mixcopy(const short*, const short*, short*, unsigned long);
void bcopyfast(const void*, void*, unsigned long);
void bzerofast(void*, unsigned long);
void hannWindow(short*, unsigned long);
void hammWindow(short*, unsigned long);
void fft(float*, float*, unsigned long, long);
} // namespace JASCalc

#endif
