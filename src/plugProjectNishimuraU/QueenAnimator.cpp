#include "Game/Entities/Queen.h"

namespace Game {
namespace Queen {
/**
 * @note Address: 0x8034B63C
 * @note Size: 0x8
 */
void ProperAnimator::setAnimMgr(SysShape::AnimMgr* mgr) { mAnimator.mAnimMgr = mgr; }

/**
 * @note Address: 0x8034B644
 * @note Size: 0x8
 */
SysShape::Animator& ProperAnimator::getAnimator(int) { return mAnimator; }
} // namespace Queen
} // namespace Game
