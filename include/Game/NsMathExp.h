#ifndef _GAME_NSMATHEXP_H
#define _GAME_NSMATHEXP_H

#include "Vector3.h"

namespace Game {
namespace NsMathExp {
void calcLagrange(const Vector3f* p_vec, f32 p2, Vector3f& new_vec);
void calcJointPos(const Vector3f& inPos1, const Vector3f& inPos2, f32 p1, f32 p2, Vector3f& outPos1, Vector3f& outPos2);
} // namespace NsMathExp
} // namespace Game

#endif
