#ifndef _NANS_H
#define _NANS_H

#include "types.h"
#include "Dolphin/float.h"
// #include "Dolphin/int.h"
namespace Game {
namespace P2JST {
struct _u32FakeMatch {
	inline _u32FakeMatch(u32 v)
	    : a(v)
	{
	}
	u32 a;
};
// static u32 gu32NAN = -1;
static _u32FakeMatch gu32NAN_(-1);
// static float gfNAN = *reinterpret_cast<const float*>(&__float_nan);
static float gfNAN_    = __float_nan;
const float govNAN_[3] = { __float_nan, gfNAN_, __float_nan };
} // namespace P2JST
} // namespace Game

#endif
