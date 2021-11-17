#ifndef _NANS_H
#define _NANS_H

#include "types.h"
#include "Dolphin/float.h"
// #include "Dolphin/int.h"

namespace Game {
namespace P2JST {
	static u32 gu32NAN : -1;
	// static float gfNAN = *reinterpret_cast<const float*>(&__float_nan);
	static float gfNAN    = __float_nan;
	const float govNAN[3] = { __float_nan, gfNAN, __float_nan };
} // namespace P2JST
} // namespace Game

#endif
