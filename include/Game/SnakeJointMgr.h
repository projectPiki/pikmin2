#ifndef _GAME_SNAKEJOINTMGR_H
#define _GAME_SNAKEJOINTMGR_H

#include "types.h"
#include "Game/EnemyBase.h"

namespace Game {
struct SnakeJointMgr {
	enum StateID {
		SNAKEJOINT_Finish       = 0,
		SNAKEJOINT_Modify       = 1,
		SNAKEJOINT_ReturnModify = 2,
	};

	SnakeJointMgr(EnemyBase* enemy);

	void setupCallBackJoint();
	void startModify(f32, f32);
	void returnModify(f32);
	void finishModify();
	void doAnimation();
	void finishAnimation();
	void makeMatrix();

	// unused/inlined
	void init();

	inline SysShape::Model* getModel() { return mObj->mModel; }

	EnemyBase* mObj;            // _00, SnakeCrow obj or SnakeWhole obj
	Matrixf* mJointMatrices[6]; // _04
	int mState;                 // _1C
	f32 _20;                    // _20
	f32 _24;                    // _24
	f32 _28;                    // _28
	f32 _2C;                    // _2C
};
} // namespace Game

#endif
