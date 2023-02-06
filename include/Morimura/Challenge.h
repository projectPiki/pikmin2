#ifndef _MORIMURA_CHALLENGE_H
#define _MORIMURA_CHALLENGE_H

#include "Morimura/DayEndCount.h"
#include "Morimura/Window.h"
#include "Screen/Enums.h"
#include "og/Screen/ogScreen.h"
#include "ebi/Save.h"
#include "Game/VsGame.h"
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
	virtual void create(const char*, u32); // _08
	virtual void createAnimPane(char*);    // _14
	virtual void updateBckPane();          // _18

	// _00     = VTBL
	// _00-_2C = TChallengeScreen
	og::Screen::AnimPane* mResultAnimPane; // _2C
};

// unused struct? or entirely inlined
struct TChallengeResultCounter {
	TChallengeResultCounter(unsigned long*, int, int);
	void start();
	void stop();
	void getFillRate();
	void update();
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

	virtual ~TChallengeResult() { }                                                                          // _08 (weak)
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

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_78 = TTestBase
	JKRArchive* mArchive;                          // _78
	TChallengeResultScreen* mResultScreen;         // _7C
	TChallengeResultDemoScreen* mResultDemoScreen; // _80
	ebi::Save::TMgr* mSaveMgr;                     // _84
	Controller* mControls;                         // _88
	DispMemberChallengeResult* mDisp;              // _8C
	og::Screen::CallBack_CounterRV* mCounters[11]; // _90
	J2DPictureEx* mScissorPic;                     // _BC
	J2DPane* mPaneList[6];                         // _C0
	TMovePane* mMovePane[3];
	J2DPane* mScorePane[3];
	Vector2f mPosList1[3];
	Vector2f mPoslist2[3];
	f32 _120;
	f32 _124;
	VectorUnit mVecUnit[4]; // _128
	f32 _168[4];
	f32 mMoveTimer; // _178
	int _17C[4];
	J2DScreen* mScreens[5];               // _18C
	TOffsetMsgSet* mMesgOffs;             // _1A0
	efx2d::T2DCavecompLoop* mEfxCompLoop; // _1A4
	int _1A8;
	int mPokoscore;
	int mTotalScore;
	int mPokos;
	int mTimeBonus;
	int mPikiCount;
	int score0;
	u8 mFlags[4];
	int mDemoState;
	int _1CC[5];
	bool mIsSaveOpen;
	int _1E4;
	u8 _1E8;
	u8 _1E9;
	f32 mTimer; // _1EC
	f32 mSpeed;
	f32 mTimer2;
	Game::VsGame::StageList* mStageListVs; // _1F8
	int _1FC;
	Game::ChallengeGame::StageList* mStageListChal;
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
