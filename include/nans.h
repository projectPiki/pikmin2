#ifndef _NANS_H
#define _NANS_H

#include "types.h"
#include "math.h"
#include "Dolphin/vec.h"

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
const _u32FakeMatch gu32NAN_(-1);
const f32 gfNAN_  = NAN;
const Vec govNAN_ = { NAN, gfNAN_, NAN };
} // namespace P2JST
} // namespace Game

#endif
