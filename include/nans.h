#ifndef _NANS_H
#define _NANS_H

#include "types.h"
#include "math.h"
#include "limits.h"
#include "Dolphin/vec.h"

namespace Game {
namespace P2JST {
// good chance these were originally in one of the P2JST headers (like ObjectActor or something)
// keeping them here so we're less dependent on keeping those header includes exact

// this seems so much more sensible than the fake nonsense we had before
const u32 gu32NAN_ = std::numeric_limits<u32>::max();
const f32 gfNAN_   = NAN;
const Vec govNAN_  = { NAN, NAN, NAN };
} // namespace P2JST
} // namespace Game

#endif
