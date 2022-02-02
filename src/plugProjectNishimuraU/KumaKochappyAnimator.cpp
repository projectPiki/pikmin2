#include "Game/Entities/KumaKochappy.h"

namespace Game {
namespace KumaKochappy {
/*
 * --INFO--
 * Address:	8034B63C
 * Size:	000008
 */
void ProperAnimator::setAnimMgr(SysShape::AnimMgr* mgr) { m_animator.m_animMgr = mgr; }

/*
 * --INFO--
 * Address:	8034B644
 * Size:	000008
 */
SysShape::Animator& ProperAnimator::getAnimator(int) { return m_animator; }
} // namespace KumaKochappy
} // namespace Game
