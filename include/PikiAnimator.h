#ifndef _PIKIANIMATOR_H
#define _PIKIANIMATOR_H

#include "types.h"
#include "SysShape/Animator.h"

struct PikiAnimator {
	PikiAnimator();
	void setAnimMgr(SysShape::AnimMgr* mgr);

	SysShape::Animator _00; // _00
	SysShape::Animator _1C; // _1C
};

#endif
