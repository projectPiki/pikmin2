#ifndef _EBI_TITLE_ENTITIES_TPIKMIN_H
#define _EBI_TITLE_ENTITIES_TPIKMIN_H

#include "CNode.h"
#include "Vector2.h"
#include "ebi/Geometry.h"
#include "ebi/E3DGraph.h"
#include "ebi/title/TObjects.h"
#include "ebi/title/TCoordMgr.h"
#include "Parameters.h"
#include "BaseParm.h"
#include "JSystem/J3D/J3DFrameCtrl.h"

struct JKRArchive;

namespace ebi {
namespace title {
struct TObjBase;

namespace Pikmin {
#define TITLE_PIKI_TOTAL (TITLE_PIKI_COLOR_COUNT * TITLE_PIKI_TYPE_MAX) // 500 by default

struct TMgr;

struct TParam : public TParamBase {
	/**
	 * @note Address: 0x803E6F10
	 * @note Size: 0x418
	 */
	TParam()
	    : mIntScale(this, 'pk00', "海外版スケール", 2.4f, 0.0f, 10.0f)                      // 'overseas version scale'
	    , mJpnScale(this, 'pk99', "日本語版スケール", 2.6f, 0.0f, 10.0f)                    // 'Japanese version scale'
	    , mCollRadius(this, 'pk01', "コリジョン半径", 5.0f, 0.0f, 100.0f)                   // 'collision radius'
	    , mStopDist(this, 'pk02', "停止距離", 20.0f, 0.0f, 100.0f)                          // 'stopping distance'
	    , mConvDist(this, 'pk03', "収束距離", 50.0f, 0.0f, 100.0f)                          // 'convergence distance'
	    , mShadowX(this, 'pk05', "影ずらしX", 5.0f, 0.0f, 100.0f)                           // 'shadow offset X'
	    , mShadowZ(this, 'pk06', "影ずらしZ", 5.0f, 0.0f, 100.0f)                           // 'shadow offset Z'
	    , mAnimSpeedWalk(this, 'pk07', "アニメスピード歩く（速度比例）", 0.5f, 0.0f, 10.0f) // 'anime speed walking (speed proportional)'
	    , mAnimSpeedStyle(this, 'pk08', "アニメスピード風", 0.5f, 0.0f, 10.0f)              // 'anime speed wind'
	    , mAnimMaxWaitTime(this, 'pk10', "アニメスピードWAIT最大", 0.5f, 0.0f, 10.0f)       // 'anime speed WAIT max'
	    , mAnimMinWaitTime(this, 'pk09', "アニメスピードWAIT最小", 0.0f, 0.0f, 10.0f)       // 'anime speed WAIT min'
	    , mKogane(this, 'pk12', "コガネ好き好き係数", 5.0f, -10.0f, 10.0f)                  // 'kogane attraction factor'
	    , mChappyRun(this, 'pk13', "チャッピーから逃げる係数", -5.0f, -10.0f, 10.0f)        // 'chappy repulsion factor'
	    , mChaseGiveUp(this, 'pk14', "追いかけあきらめ半径", 400.0f, 0.0f, 500.0f)          // 'chasing radius'
	    , mWindTimer(this, 'pk11', "風タイマー(秒)", 6.0f, 0.0f, 10.0f)                     // 'wind timer (sec)'
	    , mDistSpeedFactor(this, 'pk04', "距離比例速度係数", 0.2f, 0.0f, 1.0f)              // 'distance proportional speed factor'
	{
	}

	// _00-_0C = TParamBase
	Parm<f32> mIntScale;        // _0C, pk00
	Parm<f32> mJpnScale;        // _34, pk99
	Parm<f32> mCollRadius;      // _5C, pk01
	Parm<f32> mStopDist;        // _84, pk02
	Parm<f32> mConvDist;        // _AC, pk03
	Parm<f32> mShadowX;         // _D4, pk05
	Parm<f32> mShadowZ;         // _FC, pk06
	Parm<f32> mAnimSpeedWalk;   // _124, pk07
	Parm<f32> mAnimSpeedStyle;  // _14C, pk08
	Parm<f32> mAnimMaxWaitTime; // _174, pk10
	Parm<f32> mAnimMinWaitTime; // _19C, pk09
	Parm<f32> mKogane;          // _1C4, pk12
	Parm<f32> mChappyRun;       // _1EC, pk13
	Parm<f32> mChaseGiveUp;     // _214, pk14
	Parm<f32> mWindTimer;       // _23C, pk11
	Parm<f32> mDistSpeedFactor; // _264, pk04
};

struct TAnimFolder : public E3DAnimFolderBase {
	virtual E3DAnimRes* getAnimRes(s32); // _08 (weak)

	void load(J3DModelData*, JKRArchive*);
	E3DAnimRes* getAnimRes(int);

	// _00 = VTBL
	E3DAnimRes mAnims[4]; // _04 - move, wait, attack, wait2
};

struct TAnimator {
	TAnimator();

	void setArchive(JKRArchive*);
	J3DModel* newJ3DModel(s32 color);
	void setAnmWave(J3DModel*, f32, f32, f32);
	void setAnmWait(J3DModel*, f32);

	J3DModelData* mModelDataRed;     // _00
	J3DModelData* mModelDataYellow;  // _04
	J3DModelData* mModelDataBlue;    // _08
	J3DModelData* mModelDataPurple;  // _0C
	J3DModelData* mModelDataWhite;   // _10
	J3DAnmTransform* mWaitAnim;      // _14
	J3DAnmTransform* mWaveAnim;      // _18
	J3DMtxCalcAnmBase* mAnmCalcWait; // _1C
	J3DMtxCalc* mAnmCalcWave;        // _20
};

struct TBoidParam : public Parameters {
	TBoidParam()
	    : Parameters(nullptr, "TTitleStateParameters")
	    , mTurnMag(this, 'tsp0', "向き変えベクトルの大きさ", 0.2f, 0.0f, 10.0f)        // 'turn vector magnitude'
	    , mMaxTurnVec(this, 'tsp1', "向き変えベクトル最大", 0.4f, 0.0f, 10.0f)         // 'turn vector maximum'
	    , mMaxWalkSpeed(this, 'tsp2', "最大歩く速度", 2.0f, 0.0f, 10.0f)               // 'max walking speed'
	    , mBoidColl(this, 'tsp5', "BOID衝突回避係数", 800.0f, 0.0f, 10000.0f)          // 'BOID collision avoidance factor'
	    , mBoidSpeedMatch(this, 'tsp6', "BOID速度合わせ係数", 4.5f, 0.0f, 100.0f)      // 'BOID speed adjust factor'
	    , mBoidCenter(this, 'tsp7', "BOID中心集合係数", 0.005f, 0.0f, 10.0f)           // 'BOID center set factor'
	    , mBoidNeighbor(this, 'tsp8', "BOID個体の近所サーチ半径", 30.0f, 0.0f, 500.0f) // 'BOID neighbour search radius'
	    , mGroupCenter(this, 'tsp9', "群の中心と個体の目的地の割合", 0.0f, 0.0f, 1.0f) // 'group center to individual dest ratio'
	{
	}

	// _00-_0C = Parameters
	Parm<f32> mTurnMag;        // _0C, tsp0
	Parm<f32> mMaxTurnVec;     // _34, tsp1
	Parm<f32> mMaxWalkSpeed;   // _5C, tsp2
	Parm<f32> mBoidColl;       // _84, tsp5
	Parm<f32> mBoidSpeedMatch; // _AC, tsp6
	Parm<f32> mBoidCenter;     // _D4, tsp7
	Parm<f32> mBoidNeighbor;   // _FC, tsp8
	Parm<f32> mGroupCenter;    // _124, tsp9
};

struct TBoidParamMgr : public CNode {

	TBoidParamMgr();

	virtual ~TBoidParamMgr() { } // _08 (weak)

	void update();

	// _00     = VTBL
	// _00-_18 = CNode
	u32 mCurrentState;       // _18
	u32 mPrevState;          // _1C
	TBoidParam mParams[5];   // _20
	f32 mCurrWalkSpeed;      // _6B0
	f32 mCurrMaxTurnSpeed;   // _6B4
	f32 mCurrTurnMag;        // _6B8
	f32 mCurrBoidCenter;     // _6BC
	f32 mCurrBoidSpeedMatch; // _6C0
	f32 mCurrBoidColl;       // _6C4
	f32 mCurrGroupCenter;    // _6C8
	f32 mCurrBoidNeighbor;   // _6CC
	u32 mCounter;            // _6D0
	u32 mCounter2;           // _6D4
};

// @size{0x98}
struct TUnit : public TObjBase {
	enum enumState {
		STATE_Hidden = 0, // dead/off-screen
		STATE_Unk1   = 1, // wait?
		STATE_Unk2   = 2, // walk?
		STATE_Unk3   = 3, // wind blow?
		STATE_Unk4   = 4, // boid?
		STATE_Unk5   = 5,
	};

	TUnit()
	{
		mCounter            = 0;
		mCounter2           = 0;
		mDestPos            = Vector2f(0.0f, 0.0f);
		mManager            = nullptr;
		mRandAnimSpeeds     = Vector2f(1.0f, 1.0f);
		mEnemyObj           = nullptr;
		mTargetPos          = Vector2f(0.0f);
		mVelocity           = Vector2f(0.0f);
		mGroupPosDifference = Vector2f(0.0f);
		mCurrentState       = STATE_Hidden;
		mPreviousState      = STATE_Hidden;
		mIsDead             = false;
	}

	~TUnit() { }

	virtual u32 getCreatureType() { return TITLECREATURE_Pikmin; } // _08 (weak)
	virtual bool isCalc();                                         // _0C

	void init(TMgr*, s32);
	void goDestination();
	bool beAttacked();
	void alive();
	bool isAssemble();
	bool isWalk();
	void startState(enumState);
	void update();
	void updateSmoothWalk_(Vector2f&);
	void updateEnemyReaction_();

	inline void checkClosestEnemy(TObjBase* enemy, f32& distmax)
	{
		Vector2f dist = enemy->mPosition - mPosition;
		if (dist.length() < distmax) {
			distmax   = dist.length();
			mEnemyObj = enemy;
		}
	}

	// _00     = VTBL
	// _00-_2C = TObjBase
	Vector2f mDestPos;            // _2C
	TMgr* mManager;               // _34
	J3DFrameCtrl mFrameControlA;  // _38
	J3DFrameCtrl mFrameControlB;  // _4C
	Vector2f mRandAnimSpeeds;     // _60, probably not an actual Vector2 but idk
	TObjBase* mEnemyObj;          // _68
	Vector2f mTargetPos;          // _6C
	Vector2f mVelocity;           // _74
	Vector2f mGroupPosDifference; // _7C
	enumState mCurrentState;      // _84
	enumState mPreviousState;     // _88
	u32 mCounter;                 // _8C
	u32 mCounter2;                // _90
	bool mIsDead;                 // _94
};

struct TMgr : public CNode {
	TMgr();

	virtual ~TMgr() { } // _08 (weak)

	void setArchive(JKRArchive*);
	void initUnit();
	void update();
	void setStartPos(Vector2f*);
	void setDestPos(Vector2f*);
	void forceArriveDest();
	void assemble();
	void quickAssemble();
	void startBoid1(f32);
	void startBoid2(f32);
	void startBoid3(f32);
	void startWindBlow(EGEBox2f&);
	void startDemo();
	void enemyPushOut(TObjBase*);
	void updateCalcBoid_();
	bool isAssemble();
	TUnit* getUnit(s32);

	// _00     = VTBL
	// _00-_18 = CNode
	TAnimator* mAnimator;        // _18
	TParam mParams;              // _1C
	TUnit* mUnits;               // _2AC
	TBoidParamMgr mBoidParamMgr; // _2B0
	Vector2f mGroupAvgPosition;  // _988
};
} // namespace Pikmin
} // namespace title
} // namespace ebi

#endif
