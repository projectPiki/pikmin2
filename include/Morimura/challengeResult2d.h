#ifndef _MORIMURA_CHALLENGERESULT_H
#define _MORIMURA_CHALLENGERESULT_H

#include "Morimura/DayEndCount.h"
#include "ebi/Save.h"
#include "Game/ChallengeGame.h"
#include "efx2d/T2DCavecomp.h"
#include "Morimura/mrUtil.h"

namespace Game {
struct Challenge2D_ResultInfo;
} // namespace Game

namespace Morimura {
struct TClearTexture;

struct DispMemberChallengeResult : public og::Screen::DispMemberBase {
	DispMemberChallengeResult()
	    : og::Screen::DispMemberBase()
	{
		mResultInfo = nullptr;
		mHeap       = nullptr;
		_10         = 0;
	}

	virtual u32 getSize() { return sizeof(DispMemberChallengeResult); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_MRMR; }                     // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_CHALLENGE_RESULT; }       // _10 (weak)

	// _00     = VTBL
	// _00-_08 = og::Screen::DispMemberBase
	Game::Challenge2D_ResultInfo* mResultInfo; // _08
	JKRExpHeap* mHeap;                         // _0C
	int _10;                                   // _10
};

struct TChallengeResultDemoScreen : public TScreenBase {
	TChallengeResultDemoScreen(JKRArchive* arc, int anims)
	    : TScreenBase(arc, anims)
	{
		mAnimPane1 = nullptr;
		mAnimPane2 = nullptr;
		mAnimPane3 = nullptr;
		mIsActive  = false;
	}

	virtual void create(const char*, u32);        // _08
	virtual void update();                        // _0C
	virtual void draw(Graphics&, J2DPerspGraph*); // _10

	void startDemo();
	void setComplete(bool);
	void reset();

	// _00     = VTBL
	// _00-_18 = TScreenBase
	og::Screen::AnimPane* mAnimPane1; // _18
	og::Screen::AnimPane* mAnimPane2; // _1C
	og::Screen::AnimPane* mAnimPane3; // _20
	bool mIsActive;                   // _24
};

struct TChallengeResultScreen : public TChallengeScreen {
	TChallengeResultScreen(JKRArchive* arc, int anims)
	    : TChallengeScreen(arc, anims)
	{
		mResultAnimPane = nullptr;
	}
	virtual void create(const char*, u32); // _08
	virtual void createAnimPane(char*);    // _14
	virtual void updateBckPane();          // _18

	// _00     = VTBL
	// _00-_2C = TChallengeScreen
	og::Screen::AnimPane* mResultAnimPane; // _2C
};

struct TChallengeResultCounter {
	TChallengeResultCounter(u32* val, int a1, int a2)
	{
		mDisplayValue = val;
		mCurrentValue = *val;
		mState        = 0;
		_0C           = 0;
		_1C           = 0;
		_20           = 0;
		_14           = a1;
		_18           = a2;
		_24           = new int[a1];
	}

	void start();
	void stop();
	void getFillRate();
	void update();

	inline bool checkState(u8 state) { return mState == state; }

	u32* mDisplayValue; // _00
	u32 mCurrentValue;  // _04
	int mState;         // _08
	int _0C;            // _0C
	int mDigits;        // _10
	int _14;            // _14
	int _18;            // _18
	int _1C;            // _1C
	int _20;            // _20
	int* _24;           // _24
};

struct TChallengeResult : public TTestBase {
	TChallengeResult();
	struct VectorUnit {
		VectorUnit() { }

		Vector2f _00;
		Vector2f _08;
	};

	virtual ~TChallengeResult();                                                                             // _08
	virtual void doCreate(JKRArchive*);                                                                      // _4C
	virtual bool doUpdate();                                                                                 // _58
	virtual void doUpdateFadeoutFinish();                                                                    // _64
	virtual void doDraw(Graphics& gfx);                                                                      // _68
	virtual og::Screen::DispMemberBase* getDispMemberBase() { return mIsSection ? mDisp : getDispMember(); } // _78 (weak)

	void setInfo();
	void updateDemo();
	void changeAnimDemo();
	void startRankInDemo();
	void startDemo();
	void fadeEffect();
	void setDebugHeapParent(JKRHeap*);

	static bool mForceDemoStart;       // false
	static u8 mTestStageId;            // 0, could be a u16, unsure
	static JKRHeap* mDebugHeapParent;  // nullptr
	static JKRExpHeap* mDebugHeap;     // nullptr
	static ResTIMG* mLeafTexture;      // nullptr
	static ResTIMG* mFlowerTexture;    // nullptr
	static ResTIMG* mRedFlowerTexture; // nullptr

	static f32 mMoveSpeed;               // 12.0f
	static f32 mAngRate;                 // 0.3f
	static f32 mAngVelMax;               // 20.0f
	static f32 mAccel;                   // 0.1f
	static bool mTestDemo;               // true
	static bool mComplete;               // true
	static s16 mTestRankInOrder;         // 0xFFFF
	static f32 mFlashInterval;           // 40.0f
	static f32 mDemoSpeedUpRate;         // 2.0f
	static f32 mDemoSpeedUpMax;          // 3.0f
	static JUtility::TColor mFlashColor; // 255, 255, 0, 255

	enum ResultFlags {
		ChalResult_Is2Player = 1,
	};

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_78 = TTestBase
	JKRArchive* mArchive;                          // _78
	TChallengeResultScreen* mResultScreen;         // _7C
	TChallengeResultDemoScreen* mResultDemoScreen; // _80
	ebi::Save::TMgr* mSaveMgr;                     // _84
	Controller* mControls;                         // _88
	DispMemberChallengeResult* mDisp;              // _8C
	TCounterRV* mCounter1;                         // _90
	TCounterRV* mCounter2;                         // _94
	TCounterRV* mCounter3;                         // _98
	TCounterRV* mCounter4;                         // _9C
	TCounterRV* mCounter5;                         // _A0
	TCounterRV* mCounters1[3];                     // _A4
	TCounterRV* mHighScoreCounter[3];              // _B0
	TScissorPane* mScissorPic;                     // _BC
	J2DPane* mPane1;                               // _C0
	J2DPane* mPane2;                               // _C4
	J2DPane* mPanePlayerNum;                       // _C8
	J2DPane* mPanePlayerNumShadow;                 // _CC
	J2DPane* mPaneAButton;                         // _D0
	J2DPane* mPane6;                               // _D4
	TMovePane* mOnyonMovePane[3];                  // _D8
	J2DPane* mOnyonPane[3];                        // _E4
	Vector2f mPosList1[3];                         // _F0
	Vector2f mPosList2[3];                         // _108
	f32 mPokoCountOffsetX;                         // _120
	f32 mPokoCountOffsetY;                         // _124
	VectorUnit mVecUnit[4];                        // _128
	VectorUnit _168;                               // _168
	f32 mMoveTimer;                                // _178
	TChallengeResultCounter* mResultCounters[4];   // _17C
	TClearTexture* mClearTexture[5];               // _18C
	TOffsetMsgSet* mMesgOffs;                      // _1A0
	efx2d::T2DCavecompLoop* mEfxCompLoop;          // _1A4
	u32 mScoreTotal;                               // _1A8
	u32 mPokoCount;                                // _1AC
	u32 mTimeBonus;                                // _1B0
	u32 mPikiCount;                                // _1B4
	u32 mHighScoreValues[3];                       // _1B8
	u8 mFlags[4];                                  // _1C4
	int mDemoState;                                // _1C8
	f32 _1CC;                                      // _1CC
	int mCounter;                                  // _1D0
	f32 _1D4;                                      // _1D4
	f32 _1D8;                                      // _1D8
	s16 _1DC;                                      // _1DC
	s16 mTestDefaultPokoScore;                     // _1DE
	bool mIsSaveOpen;                              // _1E0
	int mRankInSlot;                               // _1E4
	u8 _1E8;                                       // _1E8
	u8 _1E9;                                       // _1E9
	f32 mTimer;                                    // _1EC
	f32 mSpeed;                                    // _1F0
	f32 mAButtonAlphaTimer;                        // _1F4
	Game::ChallengeGame::StageList* mStageList;    // _1F8
};

struct TClearTexture {
	TClearTexture(TChallengeResult* obj, P2DScreen::Mgr_tuning* screen, u64 tag1, u64 tag2)
	{
		J2DPane* pane1   = screen->search(tag1);
		J2DPane* pane2   = screen->search(tag2);
		JKRArchive* test = obj->mArchive;
		_00              = 0;
		mArchive         = test;
		mPane1           = static_cast<J2DPictureEx*>(pane2);
		mPane2           = static_cast<J2DPictureEx*>(pane1);
		P2ASSERTLINE(297, pane2);
		P2ASSERTLINE(298, pane1);
	}

	void resetTexture();
	void changeTexture(bool);
	void getPosition(Vector2f&);
	void getEffectPosition(Vector2f&);

	u8 _00;               // _00
	JKRArchive* mArchive; // _04
	J2DPictureEx* mPane1; // _08
	J2DPictureEx* mPane2; // _0C
};

struct TChallengeResultScene : public THIOScene {
	virtual SceneType getSceneType() { return SCENE_CHALLENGE_RESULT; }      // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_MRMR; }                // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_CHALLENGE_RESULT; } // _10 (weak)
	virtual const char* getResName() const { return ""; }                    // _1C (weak)
	virtual void doCreateObj(JKRArchive*) { }                                // _20 (weak)
	virtual void doUserCallBackFunc(Resource::MgrCommand*);                  // _24

	// _00      = VTBL
	// _00-_224 = THIOScene
	// _220, treat as TChallengeResult*
};

} // namespace Morimura

#endif
