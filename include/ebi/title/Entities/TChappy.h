#ifndef _EBI_TITLE_ENTITIES_TCHAPPY_H
#define _EBI_TITLE_ENTITIES_TCHAPPY_H

#include "CNode.h"
#include "Vector2.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "ebi/E3DGraph.h"
#include "BaseParm.h"
#include "Parameters.h"
#include "ebi/title/TObjects.h"

struct Controller;
struct J3DModelData;

namespace ebi {
namespace title {
namespace Chappy {

struct TUnit;

struct TParam : public TParamBase {
	TParam()
	    : mScale(this, 'b000', "スケール", 2.0f, 0.0f, 10.0f)
	    , mCullRadius(this, 'b001', "カリング半径", 100.0f, 0.0f, 500.0f)
	    , mCollRadius(this, 'b002', "コリジョン半径", 150.0f, 0.0f, 500.0f)
	    , mPikiReactRadius(this, 'b003', "ピクミン反応半径", 300.0f, 0.0f, 500.0f)
	    , mHitOffset(this, 'ch20', "当たりOffset", 80.0f, 0.0f, 500.0f)
	    , mHitRadius(this, 'ch21', "当たり半径", 100.0f, 0.0f, 500.0f)
	    , mWalkAngleRand(this, 'ch00', "歩行ランダム角度", 30.0f, 0.0f, 90.0f)
	    , mWalkSpeed(this, 'ch01', "歩行速度", 8.0f, 0.0f, 100.0f)
	    , mTurnSpeed(this, 'ch23', "旋回性能", 0.05f, 0.0f, 1.0f)
	    , mMinWaitTime(this, 'ch10', "待ち時間最小(秒)", 0.3f, 0.0f, 10.0f)
	    , mMaxWaitTime(this, 'ch11', "待ち時間最大(秒)", 1.0f, 0.0f, 10.0f)
	    , mMinWalkTime(this, 'ch12', "移動時間最小(秒)", 0.5f, 0.0f, 10.0f)
	    , mMaxWalkTime(this, 'ch13', "移動時間最大(秒)", 1.5f, 0.0f, 10.0f)
	    , mControlledTime(this, 'ch22', "コントローラ状態時間(秒)", 5.0f, 0.0f, 60.0f)
	{
	}

	// _00-_0C = TParamBase
	Parm<f32> mScale;           // _0C
	Parm<f32> mCullRadius;      // _34
	Parm<f32> mCollRadius;      // _5C
	Parm<f32> mPikiReactRadius; // _84
	Parm<f32> mHitOffset;       // _AC
	Parm<f32> mHitRadius;       // _D4
	Parm<f32> mWalkAngleRand;   // _FC
	Parm<f32> mWalkSpeed;       // _124
	Parm<f32> mTurnSpeed;       // _14C
	Parm<f32> mMinWaitTime;     // _174
	Parm<f32> mMaxWaitTime;     // _19C
	Parm<f32> mMinWalkTime;     // _1C4
	Parm<f32> mMaxWalkTime;     // _1EC
	Parm<f32> mControlledTime;  // _214
};

struct TAnimFolder : public E3DAnimFolderBase {
	virtual E3DAnimRes* getAnimRes(s32 id) { return &mAnims[id]; } // _08 (weak)

	void load(J3DModelData*, JKRArchive*);
	E3DAnimRes* getAnimRes(int);

	// _00 = VTBL
	E3DAnimRes mAnims[4]; // _04 - move, wait, attack, wait2
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
	TUnit* mObject;       // _25C
};

struct TUnit : public TObjBase {
	enum enumAIState {
		CHAPPYAI_Inactive     = 0,
		CHAPPYAI_Wait         = 1,
		CHAPPYAI_Turn         = 2,
		CHAPPYAI_Walk         = 3,
		CHAPPYAI_4            = 4,
		CHAPPYAI_EscapeScreen = 5,
		CHAPPYAI_GoHome       = 6,
		CHAPPYAI_Controlled   = 7,
	};

	enum enumAction {
		CHAPPYACT_NULL = -1,
		CHAPPYACT_0    = 0,
		CHAPPYACT_1    = 1,
		CHAPPYACT_2    = 2,
		CHAPPYACT_3    = 3,
		CHAPPYACT_4    = 4,
	};

	inline TUnit()
	{
		mCounter  = 0;
		mCounter2 = 0;

		mAnim.mAnimRes    = 0;
		mAnim.mAnimFolder = 0;

		mTargetPos   = Vector2f(0.0f);
		mTargetAngle = Vector2f(1.0f, 0.0f);

		u32 time  = 0.0f / sys->mDeltaTime;
		mCounter  = time;
		mCounter2 = time;

		mController     = nullptr;
		mIsAiControlled = false;

		mManager = nullptr;
		mStateID = CHAPPYAI_Inactive;

		mActionID = -1;
		mAttacks  = 0;
	}

	virtual u32 getCreatureType() { return TITLECREATURE_Chappy; } // _08 (weak)
	virtual bool isCalc();                                         // _0C

	void setController(Controller*);
	void init(TMgr*);
	void startZigzagWalk(Vector2f&, Vector2f&);
	void goHome();
	void outOfCalc();
	bool isController();
	void startAIState_(enumAIState);
	void update();
	void startAction_(enumAction);

	// _00     = VTBL
	// _00-_2C = TObjBase
	Vector2f mTargetPos;     // _2C
	Vector2f mTargetAngle;   // _34
	u32 mCounter;            // _3C
	u32 mCounter2;           // _40
	Controller* mController; // _44
	bool mIsAiControlled;    // _48
	TMgr* mManager;          // _4C
	E3DAnimCtrl mAnim;       // _50
	int mAttacks;            // _64
	enumAIState mStateID;    // _68
	int mActionID;           // _6C
};
} // namespace Chappy
} // namespace title
} // namespace ebi

#endif
