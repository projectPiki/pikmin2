#ifndef _NANS_H
#define _NANS_H

#include "types.h"
#include "Dolphin/float.h"

const float a = __float_nan;
const float b = __float_nan;
const float c = __float_nan;

namespace Game {
namespace P2JST {
	static u32 gu32NAN = -1;
	static float fNAN = __float_nan;
} // namespace P2JST
} // namespace Game

#endif
