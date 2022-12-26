#ifndef _PIKIANIMATOR_H
#define _PIKIANIMATOR_H

#include "types.h"
#include "SysShape/Animator.h"

struct PikiAnimator {
	PikiAnimator();

	void setAnimMgr(SysShape::AnimMgr* mgr);

	SysShape::Animator m_selfAnimator;  // _00, for piki or navi itself
	SysShape::Animator m_boundAnimator; // _1C, if piki: for navi carrying; if navi: for piki being carried
};

#endif
