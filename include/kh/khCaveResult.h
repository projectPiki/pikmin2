#ifndef _KH_CAVERESULT_H
#define _KH_CAVERESULT_H

#include "kh/khUtil.h"
#include "Game/Result.h"
#include "ebi/Save.h"
#include "efx2d/T2DCavecomp.h"
#include "og/Screen/DispMember.h"
#include "og/Screen/callbackNodes.h"
#include "Screen/screenObj.h"
#include "P2DScreen.h"

namespace og {
namespace Screen {
struct StickAnimMgr;
} // namespace Screen
} // namespace og

namespace kh {
namespace Screen {
struct DispCaveResult : public og::Screen::DispMemberBase {
	DispCaveResult(Game::Result::TNode*, u32, u32, u32, u32, bool, JKRHeap*, bool);

	virtual u32 getSize() { return sizeof(DispCaveResult); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_KH; }            // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_CAVE_RESULT; } // _10 (weak)

	void init(Game::Result::TNode*, u32, bool);

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	JKRHeap* mHeap;                   // _08
	Game::Result::TNode* mResultNode; // _0C
	u32 mTreasureNodeCount;           // _10
	u32 mTotalNotLostTreasures;       // _14
	u32 mLostTreasures;               // _18
	u32 mCollectedOtakara;            // _1C
	u32 mMaxOtakara;                  // _20
	u32 mCavePokos;                   // _24
	u32 mTotalPokos;                  // _28
	u32 mDeadPikis;                   // _2C
	bool mDebtPayed;                  // _30
	bool mCaveComp;                   // _31
	u32 mIsFinished;                  // _34
};

struct ObjCaveResult : public ::Screen::ObjBase {
	enum Status {
		CAVERES_Normal      = 0,
		CAVERES_ScrollUp    = 1,
		CAVERES_ScrollDown  = 2,
		CAVERES_ForceScroll = 3,
		CAVERES_DrumRoll    = 4,
		CAVERES_Lost        = 5,
		CAVERES_DecP        = 6,
		CAVERES_Effect      = 7,
		CAVERES_AllMoney    = 8,
	};

	enum Flags {
		CAVERESFLAG_CanScroll        = 1, // more than 6 items in list
		CAVERESFLAG_FinishAutoScroll = 2,
		CAVERESFLAG_SaveOpen         = 4,
		CAVERESFLAG_PikisKilledShown = 8,
		CAVERESFLAG_DrawComp         = 0x10,
		CAVERESFLAG_MakeEfx          = 0x20
	};

	ObjCaveResult();

	virtual ~ObjCaveResult() { }         // _08 (weak)
	virtual void doCreate(JKRArchive*);  // _4C
	virtual bool doUpdateFadein();       // _50
	virtual void doUpdateFadeinFinish(); // _54
	virtual bool doUpdate();             // _58
	virtual bool doUpdateFadeout();      // _60
	virtual void doDraw(Graphics& gfx);  // _68

	void statusNormal();
	void statusScrollUp();
	void statusScrollDown();
	void statusForceScroll();
	void statusDrumRoll();
	void statusAllMoney();
	void statusDecP();
	void statusLost();
	void statusEffect();
	void updateAnimation();
	void setAlpha(int, u8);
	void pikminSE();

	inline void loadSaveMgrResources()
	{
		ebi::Save::TMgr* saveMgr = mSaveMgr;
		saveMgr->mSaveMenu.loadResource();
		saveMgr->doLoadResource(JKRGetCurrentHeap());
	}

	inline bool isFlag(u32 flag) const { return mFlag & flag; }

	inline void setFlag(u32 flag) { mFlag |= flag; }

	inline void resetFlag(u32 flag) { mFlag &= ~flag; }

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	ebi::Save::TMgr* mSaveMgr;                                 // _38
	Game::Result::TNode* mResultNode;                          // _3C
	P2DScreen::Mgr_tuning* mScreenMain;                        // _40
	P2DScreen::Mgr_tuning* mScreenDropItem;                    // _44
	P2DScreen::Mgr_tuning* mScreenComplete;                    // _48
	J2DAnmTransform* mMainAnim;                                // _4C
	J2DAnmTransform* mCompleteAnim;                            // _50
	J2DAnmColor* mMainAnimColor;                               // _54
	J2DAnmColor* mCompleteAnimColor;                           // _58
	J2DAnmTextureSRTKey* mAnimTexSRT;                          // _5C
	J2DAnmTevRegKey* mAnimTevReg;                              // _60
	f32 mAnimTimers[6];                                        // _64
	efx2d::T2DCavecompLoop* mEfxComp;                          // _7C
	og::Screen::StickAnimMgr* mStickAnim;                      // _80
	og::Screen::ScaleMgr* mScaleMgr;                           // _84
	khUtilFadePane* mFadePane1;                                // _88
	khUtilFadePane* mFadePaneUpArrow;                          // _8C
	khUtilFadePane* mFadePaneDownArrow;                        // _90
	khUtilFadePane* mFadePane4;                                // _94
	og::Screen::CallBack_CounterRV* mCounterCavePokos;         // _98
	og::Screen::CallBack_CounterRV* mCounterDeadPiki;          // _9C
	og::Screen::CallBack_CounterRV* mCounterOtaValues[2];      // _A0
	og::Screen::CallBack_CounterRV* mCounterTreasureCollected; // _A8
	og::Screen::CallBack_CounterRV* mCounterTreasureMax;       // _AC
	og::Screen::CallBack_CounterRV* mCounterTotalPokos;        // _B0
	u32 mCavePokos;                                            // _B4
	u32 mDeadPiki;                                             // _B8
	u32 mCurrOtaValues[2];                                     // _BC
	u32 mOtakaraCount;                                         // _C4
	u32 mMaxOtakara;                                           // _C8
	u32 mTotalPokos;                                           // _CC
	f32 mScrollPos;                                            // _D0
	f32 mScrollUpDown;                                         // _D4
	int mScrollSelIndex;                                       // _D8
	int mScrollSelIndexMax;                                    // _DC
	int mScrollTargetDist;                                     // _E0
	int mScrollMoveTimer;                                      // _E4
	u32 mScissorMin;                                           // _E8
	u32 mScissorMax;                                           // _EC
	int mStatus;                                               // _F0
	int mChangeStateDelay;                                     // _F4
	u32 mUnusedValue;                                          // _F8
	f32 mItemDropBaseXPos;                                     // _FC
	f32 mItemDropBaseYPos;                                     // _100
	u8 mFlag;                                                  // _104
	u8 mAlpha;                                                 // _105
	u8 mScrollMoveUpCounter;                                   // _106
	u8 mScrollMoveDownCounter;                                 // _107

	static struct StaticValues {
		inline StaticValues()
		{
			mAnimSpeed                       = 0.7f;
			mCompEfxOffsetX                  = 90.0f;
			mCompEfxOffsetY                  = -30.0f;
			mCollectedTreasureCounterOffsetX = 0.0f;
			mCollectedTreasureCounterOffsetY = 10.0f;
			mScrollTargetInitialDist         = 8;
			mInputScrollInitialDist          = 3;
			mFadeInOutSpeed                  = 10;
			mMaxAlphaInEffect                = 160;
			mAlphaRateInEffect               = 32;
			mChangeStateInitialDelay         = 20;

			mLostItemSmokeOffsetX1 = -20.0f;
			mLostItemSmokeOffsetX2 = 140.0f;
			mLostItemSmokeOffsetX3 = 173.0f;
			mLostItemSmokeOffsetX4 = 206.0f;
			mLostItemSmokeOffsetX5 = 240.0f;
		}

		f32 mAnimSpeed;                       // _00
		f32 mCompEfxOffsetX;                  // _04
		f32 mCompEfxOffsetY;                  // _08
		f32 mUnused1;                         // _0C
		f32 mCollectedTreasureCounterOffsetX; // _10
		f32 mCollectedTreasureCounterOffsetY; // _14
		f32 mUnused2;                         // _18
		uint mScrollTargetInitialDist;        // _1C
		uint mInputScrollInitialDist;         // _20
		f32 mLostItemSmokeOffsetX1;           // _24
		f32 mLostItemSmokeOffsetX2;           // _28
		f32 mLostItemSmokeOffsetX3;           // _2C
		f32 mLostItemSmokeOffsetX4;           // _30
		f32 mLostItemSmokeOffsetX5;           // _34
		u8 mFadeInOutSpeed;                   // _38
		u8 mMaxAlphaInEffect;                 // _39
		u8 mAlphaRateInEffect;                // _3A
		u8 mChangeStateInitialDelay;          // _3B
	} msVal;
};

struct SceneCaveResult : public ::Screen::SceneBase {
	virtual const char* getResName() const { return ""; }               // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_CAVE_RESULT; }      // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_KH; }             // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_CAVE_RESULT; } // _10 (weak)
	virtual void doCreateObj(JKRArchive*) { }                           // _20 (weak)
	virtual void doUserCallBackFunc(Resource::MgrCommand*);             // _24

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
};
} // namespace Screen
} // namespace kh

#endif
