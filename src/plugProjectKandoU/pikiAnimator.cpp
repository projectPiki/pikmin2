#include "PikiAnimator.h"

/*
 * --INFO--
 * Address:	8013364C
 * Size:	000050
 */
PikiAnimator::PikiAnimator() { }

/*
 * --INFO--
 * Address:	8013369C
 * Size:	00000C
 */
void PikiAnimator::setAnimMgr(SysShape::AnimMgr* mgr)
{
	m_animator1.m_animMgr = mgr;
	m_animator2.m_animMgr = mgr;
}
