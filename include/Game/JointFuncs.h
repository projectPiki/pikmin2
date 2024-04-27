#ifndef _GAME_JOINTFUNCTIONS_H
#define _GAME_JOINTFUNCTIONS_H

#include "types.h"
#include "CNode.h"
#include "Matrixf.h"

struct WaterBox;

namespace Game {
struct Creature;

struct JointGroundCallBack {
	virtual void invokeOnGround(int, WaterBox*)  = 0; // _08
	virtual void invokeOffGround(int, WaterBox*) = 0; // _0C
};

struct JointShadowParm {
	Vector3f mPosition;      // _00
	Vector3f mRotation;      // _0C
	f32 _18;                 // _18
	f32 _1C;                 // _1C
	f32 mShadowScale;        // _20
	f32 mPositionMultiplier; // _24, used to make higher up joints more sensitive?

	inline void setBoth(f32 x, f32 y)
	{
		mShadowScale        = 0.0f;
		mPositionMultiplier = -17.5f;
		_18                 = x;
		_1C                 = y;
	}
};

struct JointShadowNode : public CNode {
	JointShadowNode();
	JointShadowNode(int);

	virtual ~JointShadowNode() { } // _08 (weak)

	void init(int);

	Matrixf* getMtxA() { return mMainMtx; }
	Matrixf* getMtxB(int i) { return &mChildMtx[i]; }

	// _00 		= VTBL
	// _00-_18	= CNode
	u32 mCylinderID;    // _18
	Matrixf* mMainMtx;  // _1C
	Matrixf* mChildMtx; // _20
};

struct JointShadowRootNode : public CNode {
	JointShadowRootNode();
	JointShadowRootNode(Creature*);

	virtual ~JointShadowRootNode() { } // _08 (weak)

	void init(int);

	JointShadowRootNode* getNext() { return (JointShadowRootNode*)mChild; }

	Creature* mCreature; // _18
	u8 mIsVisible;       // _1C
};
} // namespace Game

#endif
