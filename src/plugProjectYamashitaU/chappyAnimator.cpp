#include "types.h"

#include "Game/Entities/ChappyBase.h"

namespace Game {
namespace ChappyBase {
/*
 * --INFO--
 * Address:	80119710
 * Size:	000008
 */
void ProperAnimator::setAnimMgr(SysShape::AnimMgr* mgr) { mAnimator.mAnimMgr = mgr; }

/*
 * --INFO--
 * Address:	80119718
 * Size:	000008
 */
SysShape::Animator& ProperAnimator::getAnimator(int idx) { return mAnimator; }
} // namespace ChappyBase
} // namespace Game
