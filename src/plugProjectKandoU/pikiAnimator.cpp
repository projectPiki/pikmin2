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
	_00.m_animMgr = mgr;
	_1C.m_animMgr = mgr;
}
