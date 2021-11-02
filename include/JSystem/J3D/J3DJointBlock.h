#ifndef _JSYSTEM_J3DJOINTBLOCK_H
#define _JSYSTEM_J3DJOINTBLOCK_H

#include "types.h"

struct J3DJoint;

struct J3DJointBlock {
	J3DJoint* m_joint; // _00
	s32 dataSize;      // _04
	u16 jointCount;    // _08
	u32 _0C;           // _0C
	s32* _10;          // _10
	s32 m_nameTabOffs; // _14
	s32 _18;           // _18
};

#endif