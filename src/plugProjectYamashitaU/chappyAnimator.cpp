#include "types.h"

#include "Game/Entities/ChappyBase.h"

namespace Game {
namespace ChappyBase {
/*
 * --INFO--
 * Address:	80119710
 * Size:	000008
 */
void ProperAnimator::setAnimMgr(SysShape::AnimMgr* mgr)
{
	m_animator.m_animMgr = mgr;
}

/*
 * --INFO--
 * Address:	80119718
 * Size:	000008
 */
SysShape::Animator& ProperAnimator::getAnimator(int idx) { return m_animator; }

/*
 * --INFO--
 * Address:	80119720
 * Size:	00005C
 */
ProperAnimator::~ProperAnimator() { }

/*
 * --INFO--
 * Address:	8011977C
 * Size:	000008
 */
SysShape::Animator& ProperAnimator::getAnimator() { return m_animator; }
} // namespace ChappyBase
} // namespace Game
