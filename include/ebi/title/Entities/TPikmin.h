#ifndef _EBI_TITLE_ENTITIES_TPIKMIN_H
#define _EBI_TITLE_ENTITIES_TPIKMIN_H

#include "CNode.h"
#include "Vector2.h"
#include "ebi/Geometry.h"
#include "ebi/E3DGraph.h"
#include "ebi/title/TObjects.h"
#include "Parameters.h"
#include "BaseParm.h"
#include "JSystem/J3D/J3DFrameCtrl.h"

struct JKRArchive;

namespace ebi {
namespace title {
struct TObjBase;

namespace Pikmin {
struct TMgr;

struct TParam : public TParamBase {
	/*
	 * --INFO--
	 * Address:	803E6F10
	 * Size:	000418
	 */
	TParam()
	    : mIntScale(this, 'pk00', "海外版スケール", 2.4f, 0.0f, 10.0f)
	    , mJpnScale(this, 'pk99', "日本語版スケール", 2.6f, 0.0f, 10.0f)
	    , mCollRadius(this, 'pk01', "コリジョン半径", 5.0f, 0.0f, 100.0f)
	    , mStopDist(this, 'pk02', "停止距離", 20.0f, 0.0f, 100.0f)
	    , mConvDist(this, 'pk03', "収束距離", 50.0f, 0.0f, 100.0f)
	    , mShadowX(this, 'pk05', "影ずらしX", 5.0f, 0.0f, 100.0f)
	    , mShadowZ(this, 'pk06', "影ずらしZ", 5.0f, 0.0f, 100.0f)
	    , mAnimSpeedWalk(this, 'pk07', "アニメスピード歩く（速度比例）", 0.5f, 0.0f, 10.0f)
	    , mAnimSpeedStyle(this, 'pk08', "アニメスピード風", 0.5f, 0.0f, 10.0f)
	    , mAnimMaxWaitTime(this, 'pk10', "アニメスピードWAIT最大", 0.5f, 0.0f, 10.0f)
	    , mAnimMinWaitTime(this, 'pk09', "アニメスピードWAIT最小", 0.0f, 0.0f, 10.0f)
	    , mKogane(this, 'pk12', "コガネ好き好き係数", 5.0f, -10.0f, 10.0f)
	    , mChappyRun(this, 'pk13', "チャッピーから逃げる係数", -5.0f, -10.0f, 10.0f)
	    , mChaseGiveUp(this, 'pk14', "追いかけあきらめ半径", 400.0f, -10.0f, 500.0f)
	    , mWindTimer(this, 'pk11', "風タイマー(秒)", 6.0f, 0.0f, 10.0f)
	    , mDistSpeedFactor(this, 'pk04', "距離比例速度係数", 0.2f, 0.0f, 1.0f)
	{
	}

	// _00-_0C = TParamBase
	Parm<f32> mIntScale;        // _0C 海外版スケール
	Parm<f32> mJpnScale;        // _34 日本語版スケール
	Parm<f32> mCollRadius;      // _5C コリジョン半径
	Parm<f32> mStopDist;        // _84 停止距離
	Parm<f32> mConvDist;        // _AC 収束距離
	Parm<f32> mShadowX;         // _D4 影ずらしX
	Parm<f32> mShadowZ;         // _FC 影ずらしZ
	Parm<f32> mAnimSpeedWalk;   // _124 アニメスピード歩く（速度比例）
	Parm<f32> mAnimSpeedStyle;  // _14C アニメスピード風
	Parm<f32> mAnimMaxWaitTime; // _174 アニメスピードWAIT最大
	Parm<f32> mAnimMinWaitTime; // _19C アニメスピードWAIT最小
	Parm<f32> mKogane;          // _1C4 コガネ好き好き係数
	Parm<f32> mChappyRun;       // _1EC チャッピーから逃げる係数
	Parm<f32> mChaseGiveUp;     // _214 追いかけあきらめ半径
	Parm<f32> mWindTimer;       // _23C 風タイマー(秒)
	Parm<f32> mDistSpeedFactor; // _264 距離比例速度係数
};

struct TruncatedJ3DModelData {
	inline TruncatedJ3DModelData()
	{
		_00               = 0;
		mBmd              = nullptr;
		mModelLoaderFlags = 0;
		mBumpFlag         = 0;
		mBillboardFlag    = 0;
		_14               = 0;
		_18               = 0;
		_1C               = 0;
		_20               = 0;
	}
	u32 _00;               // _00
	const void* mBmd;      // _04
	u32 mModelLoaderFlags; // _08
	u32 mBumpFlag;         // _0C
	u32 mBillboardFlag;    // _10
	u32 _14;               // _14
	u32 _18;               // _18
	u32 _1C;               // _1C
	u32 _20;               // _20
};

struct TAnimFolder : public E3DAnimFolderBase {
	virtual E3DAnimRes* getAnimRes(long); // _08 (weak)

	void load(J3DModelData*, JKRArchive*);
	E3DAnimRes* getAnimRes(int);

	// _00 = VTBL
	E3DAnimRes mAnims[4]; // _04 - move, wait, attack, wait2
};

struct TAnimator {
	TAnimator();

	void setArchive(JKRArchive*);
	J3DModel* newJ3DModel();

	J3DModelData* pModelDataRed;
	J3DModelData* pModelDataYellow;
	J3DModelData* pModelDataBlue;
	J3DModelData* pModelDataPurple;
	J3DModelData* pModelDataWhite;
	J3DAnmTransform* _14;
	J3DAnmTransform* _18;
	J3DMtxCalcAnmBase* _1C;
	J3DMtxCalc* _20;
};

struct TBoidParam : public Parameters {
	TBoidParam()
	    : Parameters(nullptr, "TTitleStateParameters")
	    , mTurnMag(this, 'tsp0', "向き変えベクトルの大きさ", 0.2f, 0.0f, 10.0f)
	    , mMaxTurnVec(this, 'tsp1', "向き変えベクトル最大", 0.4f, 0.0f, 10.0f)
	    , mMaxWalkSpeed(this, 'tsp2', "最大歩く速度", 2.0f, 0.0f, 10.0f)
	    , mBoidColl(this, 'tsp5', "BOID衝突回避係数", 800.0f, 0.0f, 10000.0f)
	    , mBoidSpeedMatch(this, 'tsp6', "BOID速度合わせ係数", 4.5f, 0.0f, 100.0f)
	    , mBoidCenter(this, 'tsp7', "BOID中心集合係数", 0.005f, 0.0f, 100.0f)
	    , mBoidNeighbor(this, 'tsp8', "BOID個体の近所サーチ半径", 30.0f, 0.0f, 500.0f)
	    , mGroupCenter(this, 'tsp9', "群の中心と個体の目的地の割合", 0.0f, 0.0f, 1.0f)
	{
	}

	// _00-_0C = Parameters
	Parm<f32> mTurnMag;        // _0C
	Parm<f32> mMaxTurnVec;     // _34
	Parm<f32> mMaxWalkSpeed;   // _5C
	Parm<f32> mBoidColl;       // _84
	Parm<f32> mBoidSpeedMatch; // _AC
	Parm<f32> mBoidCenter;     // _D4
	Parm<f32> mBoidNeighbor;   // _FC
	Parm<f32> mGroupCenter;    // _124
};

/* Structure TBoidParamMgr {
   0   CNode__vt *   4   __vt   "#AutoInherit"
   4   CNode *   4   child   "#AutoInherit"
   8   CNode *   4   parent   "#AutoInherit"
   12   CNode *   4   owner   "#AutoInherit"
   16   CNode *   4   head   "#AutoInherit"
   20   char *   4   name   "#AutoInherit"
   32   TBoidParam[5]   1680   a5Params_0x20   ""
}
Size = 1712   Actual Alignment = 1
    boidParamMgr_0x2b0	 */

struct TBoidParamMgr : public CNode {
	// TBoidParamMgr();
	TBoidParamMgr();
	virtual ~TBoidParamMgr() { } // _08 (weak)

	// _00     = VTBL
	// _00-_18 = CNode
	u32 _18;               // _18
	u32 _1C;               // _1C
	TBoidParam mParams[5]; // _20
};
// @size{0x98}
struct TUnit : public TObjBase {
	enum enumState { UNKNOWN = 0 };

	TUnit()
	{
		// mFrameControlA.init(0);
		// mFrameControlB.init(0);
		mCounter  = 0;
		mCounter2 = 0;
		destPos   = Vector2f(0.0f, 0.0f);
		mManager  = nullptr;
		_60       = Vector2f(1.0f, 1.0f);
		mEnemyObj = nullptr;
		_6C       = 0.0f;
		_70       = 0.0f;
		_74       = 0.0f;
		_78       = 0.0f;
		_7C       = 0.0f;
		_80       = 0.0f;
		_84       = 0;
		_88       = 0;
		_94       = false;
	}

	~TUnit() { }

	virtual u32 getCreatureType() { return 0; } // _08 (weak)
	virtual bool isCalc();                      // _0C

	void init(TMgr*, long);
	void goDestination();
	bool beAttacked();
	void alive();
	bool isAssemble();
	bool isWalk();
	void startState(enumState);
	void update();
	void updateSmoothWalk_(Vector2f&);
	void updateEnemyReaction_();

	// _00     = VTBL
	// _00-_2C = TObjBase
	Vector2f destPos;            // _2C
	TMgr* mManager;              // _34
	J3DFrameCtrl mFrameControlA; // _38
	J3DFrameCtrl mFrameControlB; // _4C
	Vector2f _60;                // _60
	TObjBase* mEnemyObj;         // _68
	f32 _6C;                     // _6C
	f32 _70;                     // _70
	f32 _74;                     // _74
	f32 _78;                     // _78
	f32 _7C;                     // _7C
	f32 _80;                     // _80
	s32 _84;                     // _84
	s32 _88;                     // _88
	u32 mCounter;                // _8C
	u32 mCounter2;               // _90
	bool _94;                    // _94
	bool unk3[2];                // _96
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
	TUnit* getUnit(long);

	// _00     = VTBL
	// _00-_18 = CNode
	J3DModelData* mModelData;    // _18
	TParam mParams;              // _1C
	TUnit* pUnits;               // _2AC
	TBoidParamMgr mBoidParamMgr; // _2B0
	// Possibly 4 Vector2f variables
	f32 _960;      // _960
	f32 _964;      // _964
	f32 _968;      // _968
	f32 _96C;      // _96C
	f32 _970;      // _970
	f32 _974;      // _974
	f32 _978;      // _978
	f32 _97C;      // _97C
	u32 mCounter;  // _980
	u32 mCounter2; // _984
	f32 _998;      // _998
	f32 _99C;      // _99C
};
} // namespace Pikmin
} // namespace title
} // namespace ebi

#endif
