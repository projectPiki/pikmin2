#ifndef _NANS_H
#define _NANS_H

#include "types.h"
#include "math.h"

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
// static f32 gfNAN = *reinterpret_cast<const f32*>(&__float_nan);
static f32 gfNAN_    = NAN;
const f32 govNAN_[3] = { NAN, gfNAN_, NAN };
} // namespace P2JST
} // namespace Game

#endif
