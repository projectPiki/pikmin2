#include "PikiAnimator.h"

/**
 * @note Address: 0x8013364C
 * @note Size: 0x50
 */
PikiAnimator::PikiAnimator() { }

/**
 * @note Address: 0x8013369C
 * @note Size: 0xC
 */
void PikiAnimator::setAnimMgr(SysShape::AnimMgr* mgr)
{
	mSelfAnimator.mAnimMgr  = mgr;
	mBoundAnimator.mAnimMgr = mgr;
}
