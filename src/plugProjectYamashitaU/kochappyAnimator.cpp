#include "Game/Entities/KochappyBase.h"

namespace Game {
namespace KochappyBase {
/*
 * --INFO--
 * Address:	8010F2A8
 * Size:	000008
 */
void ProperAnimator::setAnimMgr(SysShape::AnimMgr* mgr) { m_animator.m_animMgr = mgr; }

/*
 * --INFO--
 * Address:	8010F2B0
 * Size:	000008
 */
SysShape::Animator& ProperAnimator::getAnimator(int idx) { return m_animator; }

/*
 * --INFO--
 * Address:	8010F2B8
 * Size:	00005C
 */
ProperAnimator::~ProperAnimator() { }

/*
 * --INFO--
 * Address:	8010F314
 * Size:	000008
 */
SysShape::Animator& ProperAnimator::getAnimator() { return m_animator; }
} // namespace KochappyBase
} // namespace Game
