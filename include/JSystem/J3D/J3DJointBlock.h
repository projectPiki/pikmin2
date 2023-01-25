#ifndef _JSYSTEM_J3D_J3DJOINTBLOCK_H
#define _JSYSTEM_J3D_J3DJOINTBLOCK_H

#include "types.h"

struct J3DJoint;

/**
 * TODO: This was previously called J3DJointBlock. It's not that, though. Not sure what it is....
 */
struct J3DJointBlockExceptNotReally {
	J3DJoint* mJoint; // _00
	s32 dataSize;     // _04
	u16 jointCount;   // _08
	u32 _0C;          // _0C
	s32* _10;         // _10
	s32 mNameTabOffs; // _14
	s32 _18;          // _18
};

#endif
