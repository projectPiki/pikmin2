#ifndef _GAME_NSMATHEXP_H
#define _GAME_NSMATHEXP_H

#include "Vector3.h"

namespace Game {
namespace NsMathExp {

void calcLagrange(const Vector3f* controlPoints, f32 t, Vector3f& output);

void calcJointPos(const Vector3f& topPosition, const Vector3f& bottomPosition, f32 topToMiddleDistance, f32 middleToBottomDistance,
                  Vector3f& middleJointPos, Vector3f& bottomJointPosition);

} // namespace NsMathExp
} // namespace Game

#endif
