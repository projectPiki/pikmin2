#include "Game/Entities/Tank.h"

namespace Game {
namespace Tank {
/*
 * --INFO--
 * Address:	8034B63C
 * Size:	000008
 */
void ProperAnimator::setAnimMgr(SysShape::AnimMgr* mgr) { mAnimator.mAnimMgr = mgr; }

/*
 * --INFO--
 * Address:	8034B644
 * Size:	000008
 */
SysShape::Animator& ProperAnimator::getAnimator(int) { return mAnimator; }
} // namespace Tank
} // namespace Game
