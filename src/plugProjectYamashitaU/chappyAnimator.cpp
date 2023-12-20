#include "types.h"

#include "Game/Entities/ChappyBase.h"

namespace Game {
namespace ChappyBase {
/**
 * @note Address: 0x80119710
 * @note Size: 0x8
 */
void ProperAnimator::setAnimMgr(SysShape::AnimMgr* mgr) { mAnimator.mAnimMgr = mgr; }

/**
 * @note Address: 0x80119718
 * @note Size: 0x8
 */
SysShape::Animator& ProperAnimator::getAnimator(int idx) { return mAnimator; }
} // namespace ChappyBase
} // namespace Game
