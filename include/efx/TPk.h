#ifndef _EFX_TPK_H
#define _EFX_TPK_H

#include "efx/TSimple.h"
#include "efx/TOneEmitter.h"
#include "efx/TChasePos.h"
#include "efx/TChaseMtx.h"
#include "efx/Toe.h"
#include "BitFlag.h"

#define PKEFF_Light       (0x1)
#define PKEFF_Doped       (0x2)
#define PKEFF_Fire        (0x4)
#define PKEFF_Gas         (0x8)
#define PKEFF_Water       (0x10)
#define PKEFF_Drown       (0x20)
#define PKEFF_InMovieDraw (0x80000000)

namespace efx {
void createSimplePkAp(Vector3f&);
void createSimpleChinka(Vector3f&);
void createSimpleWaterOff(Vector3f&);
void createSimpleGedoku(Vector3f&);
void createSimpleBlackDrop(Vector3f&);
void createSimpleDig(Vector3f&);
void createSimpleDive(Vector3f&);
void createSimpleChiru(Vector3f&, s32);
void createSimpleInattack(Vector3f&);
void createSimpleInstick(Vector3f&);
void createSimpleDead(Vector3f&, s32);
void createSimpleBridgeAttack(Vector3f&);
void createSimpleGate1Attack(Vector3f&);
void createSimpleGate2Attack(Vector3f&);
void createSimpleGate3Attack(Vector3f&);
void createSimpleStoneAttack(Vector3f& pos);
void createSimpleGlow2(Vector3f& pos);
void createSimpleWalkwater(Vector3f& pos);
void createSimpleWalksmoke(Vector3f& pos);

struct TPkAp : public TSimple2 {
	inline TPkAp()
	    : TSimple2(PID_PkAp_1, PID_PkAp_2)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple2
};

struct TPkAttackDP : public TSimple1 {
	inline TPkAttackDP()
	    : TSimple1(PID_PkAttackDP)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TPkBlackDown : public TChasePos {
	inline TPkBlackDown()
	    : TChasePos(PID_PkBlackDown)
	{
	}

	virtual ~TPkBlackDown() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChasePos
};

struct TPkBlackDrop : public TSimple3 {
	inline TPkBlackDrop()
	    : TSimple3(PID_PkBlackDrop_1, PID_PkBlackDrop_2, PID_PkBlackDrop_3)
	{
	}

	// _00     = VTBL
	// _00-_18 = TSimple3
};

struct TPkDiveB : public TSimple1 {
	inline TPkDiveB()
	    : TSimple1(PID_EnemyDive_2)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TPkGlow1 : public TChasePos {
	inline TPkGlow1()
	    : TChasePos(PID_PkGlow1)
	{
	}

	virtual ~TPkGlow1() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChasePos
};

struct TPkGlow2 : public TSimple2 {
	inline TPkGlow2()
	    : TSimple2(PID_PkGlow2_1, PID_PkGlow2_2)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple2
};

struct TPkInstick : public TSimple1 {
	inline TPkInstick()
	    : TSimple1(PID_PkInStick)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TPkKanden : public TSimple3 {
	inline TPkKanden()
	    : TSimple3(PID_PkKanden_1, PID_PkKanden_2, PID_PkKanden_3)
	{
	}

	// _00     = VTBL
	// _00-_18 = TSimple3
};

struct TPkMoeA : public TChasePos {
	inline TPkMoeA()
	    : TChasePos(PID_PkMoeA)
	{
	}

	virtual ~TPkMoeA() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChasePos
};

struct TPkNageBlur : public TChaseMtx {
	inline TPkNageBlur()
	    : TChaseMtx(PID_PkNageBlur_Red, nullptr)
	{
	}

	virtual ~TPkNageBlur() { } // _48 (weak)

	bool create(Arg*);

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

// Needed for dtor
struct PtrlistContext : public JSUPtrList {
};

struct TPkOneEmitterSimple : public TBase, public JPAEmitterCallBack {
	// vtable 1 (TBase)

	inline TPkOneEmitterSimple(u16 effectID)
	{
		mEmitter  = nullptr;
		mEffectID = effectID;
	}

	void add(Vector3f&);

	virtual bool create(Arg*); // _08
	virtual void forceKill()
	{
		if (mEmitter) {
			particleMgr->forceKill(mEmitter);
			mEmitter = nullptr;
		}
	}; // _0C (weak)
	virtual void fade()
	{
		if (mEmitter) {
			particleMgr->fade(mEmitter);
			mEmitter = nullptr;
		}
	}; // _10 (weak)
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void executeAfter(JPABaseEmitter*); // _30 (weak)
	virtual ~TPkOneEmitterSimple() { }          // _34 (weak)

	// _00		= VTBL
	// _04-_08	= JPAEmitterCallBack
	JPABaseEmitter* mEmitter; // _08
	u16 mEffectID;            // _0C
	PtrlistContext mPtrList;  // _10
};

struct TPkEffectTane {
	TPkEffectTane()
	    : mPikiColor(-1)
	    , mEfxPos(nullptr)
	    , mObjPos(nullptr)
	    , mHappaJntMtx(nullptr)
	    , mObjMatrix(nullptr)
	{
	}

	void init();
	void createTanekira_(Vector3f*);
	void killTanekira_();
	void createKourin_(Vector3f*);
	void killKourin_();
	void createGlow1_(Vector3f*);
	void killGlow1_();

	int mPikiColor;        // _00
	Vector3f* mEfxPos;     // _04
	Vector3f* mObjPos;     // _08
	Matrixf* mHappaJntMtx; // _0C
	Matrixf* mObjMatrix;   // _10
	TPkGlow1 mGlow;        // _14
	ToeTanekira mOeKira;   // _28
	ToeKourin mOeKourin;   // _44
};

struct TPkEffect {
	TPkEffect()
	    : mPikiColor(-1)
	    , mStemPosition(nullptr)
	    , mHamonPosPtr(nullptr)
	    , mAltStemPosition(nullptr)
	    , mHappaJointMtx(nullptr)
	    , mBaseObjMatrix(nullptr)
	    , mHeight(nullptr)
	    , mMoeSmokeTimer(0)
	{
		mFlags.clear();
		mBackupFlags.clear();
	}

	void init();
	void update();

	void updateMoeSmoke_();
	void updateHamon_();
	void createKourin_(Vector3f*);
	void killKourin_();
	void createDoping_(Vector3f*);
	void killDoping_();
	void createNage_(Vector3f*, Mtx);
	void killNage_();
	void createMoe_(Vector3f*);
	void killMoe_();
	void createChudoku_(Vector3f*);
	void killChudoku_();
	void createMoeSmoke_(Vector3f*);
	void killMoeSmoke_();
	void createBlackDown_(Vector3f*);
	void killBlackDown_();
	void createWater_(Vector3f*);
	void killWater_();
	void createHamonA_(Vector3f*);
	void killHamonA_();
	void createHamonB_(Vector3f*);
	void killHamonB_();

	inline void setFlag(int flagID) { mFlags.typeView |= flagID; }

	inline void resetFlag(int flagID) { mFlags.typeView &= ~flagID; }

	inline bool isFlag(int flagID) { return mFlags.typeView & flagID; }

	inline void clear()
	{
		mFlags.clear();
		mBackupFlags.clear();
		killKourin_();
		killDoping_();
		killNage_();
		killMoe_();
		killChudoku_();
		killMoeSmoke_();
		killBlackDown_();
		killWater_();
		killHamonA_();
		killHamonB_();
	}

	// for start of cutscene, disable all effects
	inline void killAllEffects()
	{
		if (!isFlag(PKEFF_InMovieDraw)) {
			mBackupFlags.typeView = mFlags.typeView;
			mFlags.clear();
			setFlag(PKEFF_InMovieDraw);
		}

		mNageBlur.forceKill();
		mMoeA.forceKill();
		mBlackDown.forceKill();
		killKourin_();
		killDoping_();
		killNage_();
		killMoe_();
		killChudoku_();
		killMoeSmoke_();
		killBlackDown_();
		killWater_();
		killHamonA_();
		killHamonB_();
	}

	inline void doDead()
	{
		killAllEffects();
		createSimpleDead(*mHamonPosPtr, mPikiColor);
	}

	inline void doWaterEntry(bool flag)
	{
		setFlag(PKEFF_Drown);
		updateHamon_();
		if (!flag) {
			createSimpleDive(mHamonPosition);
		}
	}

	inline void doCreateWater()
	{
		setFlag(PKEFF_Water);
		createWater_(mAltStemPosition);
	}

	inline void doCreateChudoku()
	{
		setFlag(PKEFF_Gas);
		createChudoku_(mStemPosition);
	}

	inline void doCreateMoe()
	{
		setFlag(PKEFF_Fire);
		createMoe_(mStemPosition);
	}

	inline void doWaterExit()
	{
		resetFlag(PKEFF_Drown);
		killHamonA_();
		killHamonB_();
	}

	inline void doDoping()
	{
		setFlag(PKEFF_Doped);
		createDoping_(mStemPosition);
		killKourin_();
	}

	inline void doKillDoping()
	{
		resetFlag(PKEFF_Doped);
		killDoping_();
		if (isFlag(PKEFF_Light)) {
			createKourin_(mStemPosition);
		}
	}

	inline void doLightEffect()
	{
		setFlag(PKEFF_Light);
		if (!isFlag(PKEFF_Doped)) {
			createKourin_(mStemPosition);
		}
	}

	inline void doKillLightEffect()
	{
		resetFlag(PKEFF_Light);
		killKourin_();
	}

	// for following movie draw, recreate all active effects
	inline void createAllEffects()
	{
		if (isFlag(PKEFF_InMovieDraw)) {
			mFlags.typeView = mBackupFlags.typeView;
			resetFlag(PKEFF_InMovieDraw);
		}

		if (isFlag(PKEFF_Light))
			doLightEffect();
		if (isFlag(PKEFF_Doped))
			doDoping();
		if (isFlag(PKEFF_Fire))
			doCreateMoe();
		if (isFlag(PKEFF_Gas))
			doCreateChudoku();
		if (isFlag(PKEFF_Water))
			doCreateWater();
		if (isFlag(PKEFF_Drown))
			doWaterEntry(isFlag(PKEFF_Drown));
	}

	BitFlag<u32> mFlags;        // _00
	BitFlag<u32> mBackupFlags;  // _04
	int mPikiColor;             // _08, kourin color?
	Vector3f* mStemPosition;    // _0C, kourin position?
	Vector3f* mHamonPosPtr;     // _10
	Vector3f* mAltStemPosition; // _14, used for some effects
	Matrixf* mHappaJointMtx;    // _18
	Matrixf* mBaseObjMatrix;    // _1C
	f32* mHeight;               // _20, unknown
	int mMoeSmokeTimer;         // _24, unknown
	Vector3f mHamonPosition;    // _28, dive vector?
	TPkNageBlur mNageBlur;      // _34
	TPkMoeA mMoeA;              // _48
	TPkBlackDown mBlackDown;    // _5C
	ToeKourin mOeKourin;        // _70
	ToeDoping mOeDoping;        // _90
	ToeNagekira mOeNagekira;    // _AC
	ToeMoeBC mOeMoeBC;          // _C8
	ToeChudoku mOeChudoku;      // _100
	ToeWater mOeWater;          // _11C
	ToeHamonA mOeHamonA;        // _154
	ToeHamonB mOeHamonB;        // _170
	ToeMoeSmoke mOeMoeSmoke;    // _18C
};

struct TPkEffectMgr : public JKRDisposer {
	TPkEffectMgr();

	virtual ~TPkEffectMgr(); // _08

	static void globalInstance();
	static void deleteInstance();
	static TPkEffectMgr* Instance();
	void startMgr();
	void exitMgr();

	void resetContextS();
	void createS_Dead(Vector3f&, s32);
	void createS_Chinka(Vector3f&);
	void createS_Gedoku(Vector3f&);
	void createS_WaterOff(Vector3f&);
	void createS_Dive(Vector3f&);
	void createS_Chiru(Vector3f&);
	void createS_Inattack(Vector3f&);
	void createS_Walksmoke(Vector3f&);
	void createS_Dig(Vector3f&);
	void createS_ChiruRed(Vector3f&);
	void createS_Gate3Attack(Vector3f&);
	void createS_Walkwater(Vector3f&);

	// Unused / Inlined
	void createS_Attack(Vector3f&);
	void createS_AttackDp(Vector3f&);
	void createS_Kanden(Vector3f&);

	static TPkEffectMgr* _instance;

	// _00		= VTBL
	// _04-_18	= JKRDisposer
	union {
		struct {
			TOneEmitterChasePos* mToeKourinBlue;   // _18
			TOneEmitterChasePos* mToeKourinRed;    // _1C
			TOneEmitterChasePos* mToeKourinYellow; // _20
			TOneEmitterChasePos* mToeKourinPurple; // _24
			TOneEmitterChasePos* mToeKourinWhite;  // _28
			TOneEmitterChasePos* mToeKourinGreen;  // _2C
			TOneEmitterChasePos* mToeDoping;       // _30
			TOneEmitterChasePos* mToeNageKira;     // _34
			TOneEmitterChasePos* mToeMoeBC1;       // _38
			TOneEmitterChasePos* mToeMoeBC2;       // _3C
			TOneEmitterChasePos* mToeChudoku;      // _40
			TOneEmitterChasePos* mToeWater1;       // _44
			TOneEmitterChasePos* mToeWater2;       // _48
			TOneEmitterChasePos* mToeHamonA;       // _4C
			TOneEmitterChasePos* mToeHamonB;       // _50
			TOneEmitterChasePos* mToeMoeSmoke;     // _54
			TOneEmitterChasePos* mToeTaneKira;     // _58
		} mTOneEmitters;
		TOneEmitterChasePos* mTOneEmitterArray[17];
	};

	union {
		struct {
			TPkOneEmitterSimple* mPikiDeadBlue;   // _5C
			TPkOneEmitterSimple* mPikiDeadRed;    // _60
			TPkOneEmitterSimple* mPikiDeadYellow; // _64
			TPkOneEmitterSimple* mPikiDeadPurple; // _68
			TPkOneEmitterSimple* mPikiDeadWhite;  // _6C
			TPkOneEmitterSimple* mPikiDamage;     // _70
			TPkOneEmitterSimple* mAttackDP;       // _74
			TPkOneEmitterSimple* mKanden1;        // _78
			TPkOneEmitterSimple* mKanden2;        // _7C
			TPkOneEmitterSimple* mKanden3;        // _80
			TPkOneEmitterSimple* mKanden4;        // _84
			TPkOneEmitterSimple* mChinka1;        // _88
			TPkOneEmitterSimple* mChinka2;        // _8C
			TPkOneEmitterSimple* mGedoku1;        // _90
			TPkOneEmitterSimple* mGedoku2;        // _94
			TPkOneEmitterSimple* mWaterOff1;      // _98
			TPkOneEmitterSimple* mWaterOff2;      // _9C
			TPkOneEmitterSimple* mEnemyDive1;     // _A0
			TPkOneEmitterSimple* mEnemyDive2;     // _A4
			TPkOneEmitterSimple* mChiru;          // _A8
			TPkOneEmitterSimple* mInAttack;       // _AC
			TPkOneEmitterSimple* mWalkSmoke;      // _B0
			TPkOneEmitterSimple* mDig;            // _B4
			TPkOneEmitterSimple* mChiruRed;       // _B8
			TPkOneEmitterSimple* mGate3Attack;    // _BC
			TPkOneEmitterSimple* mWalkWater1;     // _C0
			TPkOneEmitterSimple* mWalkWater2;     // _C4
		} mTPkOneEmitters;
		TPkOneEmitterSimple* mTPkOneEmitterArray[27];
	};
	/* end of TPkOneEmitterSimple  */
	TOEContextS mTOEContextArray[50]; // _C8
	int mNextOpenContext;             // _640
};

struct TParticleCallBack_Yodare {
	~TParticleCallBack_Yodare();
	void init(JPABaseEmitter*, JPABaseParticle*);
	void execute(JPABaseEmitter*, JPABaseParticle*);

	f32 _00;     // _00, just to match efxPikmin sdata2 loading
	char* mName; // _04, just to match efxPikmin sdata2 loading
	f32 _08;     // _08, just to match efxPikmin sdata2 loading
};

struct TTestYodareGen {
	~TTestYodareGen();
	void create(efx::Arg*);
	void forceKill();
	void fade();
};

struct TTestYodareHit {
	~TTestYodareHit();
};

} // namespace efx

extern efx::TPkEffectMgr* pkEffectMgr;

#endif
