#include "Game/Entities/KochappyBase.h"

namespace Game {
namespace KochappyBase {
/*
 * --INFO--
 * Address:	8010F2A8
 * Size:	000008
 */
void ProperAnimator::setAnimMgr(SysShape::AnimMgr* mgr) { mAnimator.mAnimMgr = mgr; }

/*
 * --INFO--
 * Address:	8010F2B0
 * Size:	000008
 */
SysShape::Animator& ProperAnimator::getAnimator(int idx) { return mAnimator; }
} // namespace KochappyBase
} // namespace Game
