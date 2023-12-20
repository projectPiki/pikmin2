#include "Game/Entities/KochappyBase.h"

namespace Game {
namespace KochappyBase {
/**
 * @note Address: 0x8010F2A8
 * @note Size: 0x8
 */
void ProperAnimator::setAnimMgr(SysShape::AnimMgr* mgr) { mAnimator.mAnimMgr = mgr; }

/**
 * @note Address: 0x8010F2B0
 * @note Size: 0x8
 */
SysShape::Animator& ProperAnimator::getAnimator(int idx) { return mAnimator; }
} // namespace KochappyBase
} // namespace Game
