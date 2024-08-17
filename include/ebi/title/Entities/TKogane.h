#ifndef _EBI_TITLE_ENTITIES_TKOGANE_H
#define _EBI_TITLE_ENTITIES_TKOGANE_H

#include "CNode.h"
#include "Vector2.h"
#include "ebi/title/TObjects.h"
#include "ebi/E3DGraph.h"
#include "BaseParm.h"

struct JKRArchive;
struct Controller;
struct J3DModelData;

namespace ebi {
namespace title {
namespace Kogane {
struct TUnit;

struct TParam : public TParamBase {
	TParam()
	    : mScale(this, 'b000', "スケール", 2.0f, 0.0f, 10.0f)
	    , mCullRadius(this, 'b001', "カリング半径", 50.0f, 0.0f, 500.0f)
	    , mCollRadius(this, 'b002', "コリジョン半径", 50.0f, 0.0f, 500.0f)
	    , mPikiReactRadius(this, 'b003', "ピクミン反応半径", 150.0f, 0.0f, 500.0f)
	    , mWalkRandomAngle(this, 'kg00', "歩行ランダム角度", 60.0f, 0.0f, 90.0f)
	    , mWalkSpeed(this, 'kg01', "歩行速度", 10.0f, 0.0f, 100.0f)
	    , mTurnRate(this, 'kg15', "旋回性能", 0.1f, 0.0f, 1.0f)
	    , mMinWaitTime(this, 'kg10', "待ち時間最小(秒)", 1.0f, 0.0f, 10.0f)
	    , mMaxWaitTime(this, 'kg11', "待ち時間最大(秒)", 1.5f, 0.0f, 10.0f)
	    , mMinMoveTime(this, 'kg12', "移動時間最小(秒)", 0.3f, 0.0f, 10.0f)
	    , mMaxMoveTime(this, 'kg13', "移動時間最大(秒)", 1.0f, 0.0f, 10.0f)
	    , mControlStateTime(this, 'kg14', "コントローラ状態時間(秒)", 5.0f, 0.0f, 60.0f)
	{
	}

	Parm<f32> mScale;            // _0C, b000
	Parm<f32> mCullRadius;       // _34, b001
	Parm<f32> mCollRadius;       // _5C, b002
	Parm<f32> mPikiReactRadius;  // _84, b003
	Parm<f32> mWalkRandomAngle;  // _AC, kg00
	Parm<f32> mWalkSpeed;        // _D4, kg01
	Parm<f32> mTurnRate;         // _FC, kg15
	Parm<f32> mMinWaitTime;      // _124, kg10
	Parm<f32> mMaxWaitTime;      // _14C, kg11
	Parm<f32> mMinMoveTime;      // _174, kg12
	Parm<f32> mMaxMoveTime;      // _19C, kg13
	Parm<f32> mControlStateTime; // _1C4, kg14
};

struct TAnimFolder : public E3DAnimFolderBase {
	virtual E3DAnimRes* getAnimRes(s32 id) { return &mAnims[id]; } // _08 (weak)

	void load(J3DModelData*, JKRArchive*);

	// _00 = VTBL
	E3DAnimRes mAnims[2]; // _04, move, wait
};

struct TAnimator {
	TAnimator();

	void setArchive(JKRArchive*);
	J3DModel* newJ3DModel();

	TAnimFolder mAnimFolder;  // _00
	J3DModelData* mModelData; // _84
};

struct TMgr : public CNode {
	TMgr();

	virtual ~TMgr() { } // _08 (weak)

	void setArchive(JKRArchive*);
	void initUnit();

	// _00     = VTBL
	// _00-_18 = CNode
	TAnimator* mAnimator; // _18
	TParam mParams;       // _1C
	TUnit* mObject;       // _20C
};

struct TUnit : public TObjBase {
	enum enumAction {
		KOGANEACT_NULL = -1,
		KOGANEACT_0    = 0,
		KOGANEACT_1    = 1,
		KOGANEACT_2    = 2,
		KOGANEACT_3    = 3,
		KOGANEACT_4    = 4,
	};

	enum enumState {
		KSTATE_Inactive   = 0,
		KSTATE_Wait       = 1,
		KSTATE_Turn       = 2,
		KSTATE_Walk       = 3,
		KSTATE_ZigZagWalk = 4,
		KSTATE_GoHome     = 5,
		KSTATE_Controlled = 6,

	};

	inline TUnit()
	{
		mCounter          = 0;
		mCounter2         = 0;
		mAnim.mAnimRes    = nullptr;
		mAnim.mAnimFolder = nullptr;
		mTargetPos        = Vector2f(0.0f);
		mTargetAngle      = Vector2f(1.0f, 0.0f);
		u32 time          = 0.0f / sys->mDeltaTime;
		mCounter          = time;
		mCounter2         = time;
		mControl          = nullptr;
		mManager          = nullptr;
		mStateID          = KSTATE_Inactive;
		mActionID         = KOGANEACT_NULL;
	}

	virtual u32 getCreatureType() { return TITLECREATURE_Kogane; } // _08 (weak)
	virtual bool isCalc();                                         // _0C

	void setController(Controller*);
	void init(TMgr*);
	void startZigzagWalk(Vector2f&, Vector2f&);
	void goHome();
	void outOfCalc();
	bool isController();
	void startState(enumState);
	void update();

	// _00     = VTBL
	// _00-_2C = TObjBase
	Vector2f mTargetPos;   // _2C
	Vector2f mTargetAngle; // _34
	u32 mCounter;          // _3C
	u32 mCounter2;         // _40
	Controller* mControl;  // _44
	TMgr* mManager;        // _48
	E3DAnimCtrl mAnim;     // _4C
	enumState mStateID;    // _60
	enumAction mActionID;  // _64
};

} // namespace Kogane
} // namespace title
} // namespace ebi

#endif
