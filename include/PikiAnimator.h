#ifndef _PIKIANIMATOR_H
#define _PIKIANIMATOR_H

#include "types.h"
#include "SysShape/Animator.h"

struct PikiAnimator {
	PikiAnimator();

	void setAnimMgr(SysShape::AnimMgr* mgr);

	SysShape::Animator m_animator1; // _00
	SysShape::Animator m_animator2; // _1C
};

#endif
