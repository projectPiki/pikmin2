#ifndef _MORIMURA_CHALLENGE_H
#define _MORIMURA_CHALLENGE_H

#include "Morimura/DayEndCount.h"
#include "Morimura/Window.h"
#include "Screen/Enums.h"
#include "og/Screen/ogScreen.h"
#include "ebi/Save.h"
#include "Game/ChallengeGame.h"
#include "Morimura/mrUtil.h"
#include "efx2d/T2DCavecomp.h"

namespace og {
namespace Screen {
struct DispMemberWorldMapInfoWin0;
}
} // namespace og

namespace Game {
struct Challenge2D_TitleInfo;
struct Challenge2D_ResultInfo;
struct Vs2D_TitleInfo;
} // namespace Game

namespace Morimura {
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

struct DispMemberChallengeSelect : public og::Screen::DispMemberBase {
	DispMemberChallengeSelect()
	{
		mTitleInfo            = nullptr;
		mDebugExpHeap         = nullptr;
		mStageNumber          = -1;
		mSelectedStageIndex   = 0;
		mPlayType             = 0;
		_1C                   = 0;
		mDispWorldMapInfoWin0 = nullptr;
	}

	virtual u32 getSize() { return sizeof(DispMemberChallengeSelect); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_MRMR; }                     // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_CHALLENGE_SELECT; }       // _10 (weak)

	// _00     = VTBL
	// _00-_08 = og::Screen::DispMemberBase
	Game::Challenge2D_TitleInfo* mTitleInfo;                       // _08
	JKRExpHeap* mDebugExpHeap;                                     // _0C
	int mStageNumber;                                              // _10
	int mSelectedStageIndex;                                       // _14
	int mPlayType;                                                 // _18
	int _1C;                                                       // _1C
	og::Screen::DispMemberWorldMapInfoWin0* mDispWorldMapInfoWin0; // _20
};

struct TChallengePlayModeScreen : public TScreenBase {
	TChallengePlayModeScreen(JKRArchive*, int);

	virtual void create(const char*, u32);        // _08
	virtual void update();                        // _0C
	virtual void draw(Graphics&, J2DPerspGraph*); // _10

	// _00     = VTBL
	// _00-_18 = TScreenBase
	u8 _18[0x8];                      // _18, unknown
	J2DPicture* _20;                  // _20
	u8 _24[0x18];                     // _24, unknown
	og::Screen::ScaleMgr* _3C;        // _3C
	og::Screen::ScaleMgr* _40;        // _40
	og::Screen::AnimText_Screen* _44; // _44
	og::Screen::AnimText_Screen* _48; // _48
	og::Screen::AnimText_Screen* _4C; // _4C
	u8 _50[0x30];                     // _50, unknown
	int _80;                          // _80
	u8 _84;                           // _84
	u8 _85[0x7];                      // _85, unknown
	f32 _8C;                          // _8C
	u8 _90[0x1C];                     // _1C, unknown
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

struct TChallengeScreen : public TScreenBase {
	TChallengeScreen(JKRArchive*, int);

	virtual void create(const char*, u32); // _08
	virtual void update();                 // _0C
	virtual void createAnimPane(char*);    // _14
	virtual void updateBckPane();          // _18

	bool isRandAnimStart();

	// _00     = VTBL
	// _00-_18 = TScreenBase
	int mAnimPaneCount;                // _18
	og::Screen::AnimPane** mAnimPanes; // _1C
	u32 _20;                           // _20, unknown
	u32 _24;                           // _24, unknown
	u8 _28;                            // _28
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

// unused struct? or entirely inlined
struct TChallengeResultCounter {
	TChallengeResultCounter(u32* val, int a1, int a2)
	{
		_00 = val;
		_04 = *val;
		_08 = 0;
		_0C = 0;
		_1C = 0;
		_20 = 0;
		_14 = a1;
		_18 = a2;
		_24 = new int[a1];
	}

	void start();
	void stop();
	void getFillRate();
	void update();

	u32* _00;
	u32 _04;
	int _08;
	int _0C;
	int _10;
	int _14;
	int _18;
	int _1C;
	int _20;
	int* _24;
};

struct TChallengeEndCount : public TDayEndCount {
	TChallengeEndCount();

	virtual ~TChallengeEndCount();      // _08 (weak)
	virtual void doCreate(JKRArchive*); // _4C

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_D4 = TDayEndCount
};

struct TChallengeEndCount1p : public TChallengeEndCount {
	TChallengeEndCount1p();

	virtual ~TChallengeEndCount1p(); // _08 (weak)
	virtual bool doUpdate();         // _58

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_D4 = TChallengeEndCount
};

struct TChallengeEndCount2p : public TChallengeEndCount {
	TChallengeEndCount2p();

	virtual ~TChallengeEndCount2p(); // _08 (weak)
	virtual bool doUpdate();         // _58

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_D4 = TChallengeEndCount
};

struct TChallengeResult : public TTestBase {
	TChallengeResult();
	struct VectorUnit {
		VectorUnit() { }

		f32 _00; // _00
		f32 _04; // _04
		f32 _08; // _08
		f32 _0C; // _0C
	};

	// this struct has 0 functions to go off, not sure what to call it yet
	struct IDontKnow {
		IDontKnow(TChallengeResult* obj, P2DScreen::Mgr_tuning* screen, u64 tag1, u64 tag2)
		{
			J2DPane* pane1   = screen->search(tag1);
			J2DPane* pane2   = screen->search(tag2);
			JKRArchive* test = obj->mArchive;
			_00              = 0;
			mArchive         = test;
			mPane1           = pane2;
			mPane2           = pane1;
			P2ASSERTLINE(297, pane2);
			P2ASSERTLINE(298, pane1);
		}

		u8 _00;
		JKRArchive* mArchive;
		J2DPane* mPane1;
		J2DPane* mPane2;
	};

	inline void loadSaveMgrResources()
	{
		ebi::Save::TMgr* saveMgr = mSaveMgr;
		saveMgr->mSaveMenu.loadResource();
		saveMgr->doLoadResource(JKRGetCurrentHeap());
	}

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

	static bool mForceDemoStart;
	static u8 mTestStageId; // could be a u16, unsure
	static JKRHeap* mDebugHeapParent;
	static JKRExpHeap* mDebugHeap;
	static ResTIMG* mLeafTexture;
	static ResTIMG* mFlowerTexture;
	static ResTIMG* mRedFlowerTexture;

	static f32 mMoveSpeed;       // 12.0f
	static f32 mAngRate;         // 0.3f
	static f32 mAngVelMax;       // 20.0f
	static f32 mAccel;           // 0.1f
	static bool mTestDemo;       // true
	static bool mComplete;       // true
	static u16 mTestRankInOrder; // 0xFFFF
	static f32 mFlashInterval;   // 40.0f
	static f32 mDemoSpeedUpRate; // 2.0f
	static f32 mDemoSpeedUpMax;  // 3.0f
	static GXColor mFlashColor;  // 255, 255, 0, 255

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_78 = TTestBase
	JKRArchive* mArchive;                                 // _78
	TChallengeResultScreen* mResultScreen;                // _7C
	TChallengeResultDemoScreen* mResultDemoScreen;        // _80
	ebi::Save::TMgr* mSaveMgr;                            // _84
	Controller* mControls;                                // _88
	DispMemberChallengeResult* mDisp;                     // _8C
	TCounterRV* mCounter1;                                // _90
	TCounterRV* mCounter2;                                // _94
	TCounterRV* mCounter3;                                // _98
	TCounterRV* mCounter4;                                // _9C
	TCounterRV* mCounter5;                                // _A0
	og::Screen::CallBack_CounterRV* mCounters1[3];        // _A4
	og::Screen::CallBack_CounterRV* mHighScoreCounter[3]; // _B0
	J2DPictureEx* mScissorPic;                            // _BC
	J2DPane* mPane1;                                      // _C0
	J2DPane* mPane2;                                      // _C4
	J2DPane* mPane3;                                      // _C8
	J2DPane* mPane4;                                      // _CC
	J2DPane* mPane5;                                      // _D0
	J2DPane* mPane6;                                      // _D4
	TMovePane* mOnyonMovePane[3];                         // _D8
	J2DPane* mOnyonPane[3];                               // _E4
	Vector2f mPosList1[3];                                // _F0
	Vector2f mPosList2[3];                                // _108
	f32 _120;                                             // _120
	f32 _124;                                             // _124
	VectorUnit mVecUnit[4];                               // _128
	VectorUnit _168;                                      // _168
	f32 mMoveTimer;                                       // _178
	TChallengeResultCounter* mResultCounters[4];          // _17C
	IDontKnow* _18C[5];                                   // _18C
	TOffsetMsgSet* mMesgOffs;                             // _1A0
	efx2d::T2DCavecompLoop* mEfxCompLoop;                 // _1A4
	u32 mScore1;                                          // _1A8
	u32 mPokoscore;                                       // _1AC
	u32 mTotalScore;                                      // _1B0
	u32 mPokos;                                           // _1B4
	u32 mBonuses[3];                                      // _1B8, time bonus, piki count, score0
	u8 mFlags[4];                                         // _1C4
	int mDemoState;                                       // _1C8
	f32 _1CC[2];                                          // _1CC
	f32 _1D4;                                             // _1D4
	f32 _1D8;                                             // _1D8
	u16 _1DC;                                             // _1DC
	u16 _1DE;                                             // _1DE
	bool mIsSaveOpen;                                     // _1E0
	int _1E4;                                             // _1E4
	u8 _1E8;                                              // _1E8
	u8 _1E9;                                              // _1E9
	f32 mTimer;                                           // _1EC
	f32 mSpeed;                                           // _1F0
	f32 mTimer2;                                          // _1F4
	Game::ChallengeGame::StageList* mStageList;           // _1F8
};

struct TChallengeSelect : public TTestBase {
	TChallengeSelect();

	virtual ~TChallengeSelect() { }                          // _08 (weak)
	virtual void doCreate(JKRArchive*);                      // _4C
	virtual bool doUpdate();                                 // _58
	virtual void doUpdateFadeoutFinish();                    // _64
	virtual void doDraw(Graphics& gfx);                      // _68
	virtual og::Screen::DispMemberBase* getDispMemberBase(); // _78 (weak)

	void setInfo(int);
	void setStageName(int);
	void getState(int);
	void getAfterState(int);
	void isChangeState(int);
	void getIndexMax();
	void openWindow();
	void closeWindow();
	void reset();
	void demoStart();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_78 = TTestBase
	JKRArchive* _78; // _78
	u8 _7C[0xD4];    // _7C, TODO: fill these in from ghidra
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

struct TChallengeSelectScene : public THIOScene {
	TChallengeSelectScene() { mConfirmEndWindow = nullptr; }
	virtual SceneType getSceneType() { return SCENE_CHALLENGE_SELECT; }          // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_MRMR; }                    // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_CHALLENGE_SELECT; }     // _10 (weak)
	virtual const char* getResName() const { return "res_challengeSelect.szs"; } // _1C (weak)
	virtual void doCreateObj(JKRArchive*);                                       // _20 (weak)
	virtual bool doStart(Screen::StartSceneArg*);                                // _3C

	// _00      = VTBL
	// _00-_224 = THIOScene
	// _220, treat as TChallengeSelect*
	TConfirmEndWindow* mConfirmEndWindow; // _224
};

struct TChallengeSelectExplanationWindow : TSelectExplanationWindow {
	virtual void create(const char*, u32); // _08
	virtual void screenScaleUp();          // _14

	// _00     = VTBL
	// _00-_30 = TSelectExplanationWindow
};

} // namespace Morimura

#endif
