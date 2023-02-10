#ifndef _MORIMURA_CHALLENGESELECT_H
#define _MORIMURA_CHALLENGESELECT_H

#include "og/Screen/ogScreen.h"
#include "Morimura/mrUtil.h"
#include "Morimura/Window.h"
#include "efx2d/T2DCursor.h"
#include "Game/ChallengeGame.h"

namespace og {
namespace Screen {
struct DispMemberWorldMapInfoWin0;
}
} // namespace og

namespace Game {
struct Challenge2D_TitleInfo;
} // namespace Game

namespace Morimura {

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

	enum PlayModeScreenState {

	};

	virtual void create(const char*, u32);        // _08
	virtual void update();                        // _0C
	virtual void draw(Graphics&, J2DPerspGraph*); // _10

	// _00     = VTBL
	// _00-_18 = TScreenBase
	J2DPane* mPane0;
	J2DPane* mPane1;                             // _1C
	J2DPicture* mSphereTex;                      // _20
	J2DPane* mPane3;                             // _24
	J2DPane* mPane4;                             // _28
	J2DPane* mPane5;                             // _2C
	J2DPane* mPaneList1[3];                      // _30
	og::Screen::ScaleMgr* mScaleMgr[2];          // _3C
	og::Screen::AnimText_Screen* mAnimScreen[4]; // _44
	og::Screen::CallBack_Furiko* mFuriko;        // _54
	efx2d::T2DCursor* mEfxCursor1;               // _58
	efx2d::T2DCursor* mEfxCursor2;               // _5C
	Vector2f mEfxCursorPos1;                     // _60
	Vector2f mEfxCursorPos2;                     // _68
	Vector2f _70;                                // _70
	Vector2f _78;                                // _78
	int mSelection;                              // _80
	bool mDoShowNoController;                    // _84
	f32 mNoControllerTimer;                      // _88
	f32 mTimer;                                  // _8C
	f32 mTimer2;                                 // _90
	f32 mMovePos;                                // _94
	f32 _98;                                     // _98
	f32 mScale;                                  // _9C
	f32 _A0[3];                                  // _A0

	void createMetPicture(ResTIMG const*);
	void setState(PlayModeScreenState);
	void setBlink(f32);
	void reset();
};

struct TChallengeSelect : public TTestBase {
	TChallengeSelect();

	virtual ~TChallengeSelect() { }                                                                          // _08 (weak)
	virtual void doCreate(JKRArchive*);                                                                      // _4C
	virtual bool doUpdate();                                                                                 // _58
	virtual void doUpdateFadeoutFinish();                                                                    // _64
	virtual void doDraw(Graphics& gfx);                                                                      // _68
	virtual og::Screen::DispMemberBase* getDispMemberBase() { return mIsSection ? mDisp : getDispMember(); } // _78 (weak)

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
	void setDebugHeapParent(JKRHeap*);
	void jumpStart();

	static int mRightOffset;          // 0
	static int mDownOffset;           // 0
	static u8 mFrameAnimAlpha;        // 0
	static bool mAllCourseOpen;       // false
	static bool mForceDemoStart;      // false
	static int mDivePikiNum;          // 0
	static Vector2f mMetOffset;       // 0, maybe JGeometry::TVec2f?
	static JKRHeap* mDebugHeapParent; // nullptr, may be a different JKR heap type
	static JKRExpHeap* mDebugHeap;    // nullptr, may be a different JKR heap type

	static u32 mSelected1p;        // 0x01000000, flag?
	static f32 mAlphaSpeed;        // 0.05f
	static s16 mFlashAnimInterval; // 300
	static f32 mTextFlashVal;      // 1.0f
	static bool mConnect2p;        // true
	static f32 mPanelMoveVal;      // 1.0f
	static f32 mPanelMoveRate;     // 0.25f
	static f32 mCircleY;           // 100.0f
	static f32 mTimerSpeed;        // 0.15f
	static f32 mMoveSpeed;         // 12.0f
	static f32 mSelectIconScale;   // 1.5f

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_78 = TTestBase
	JKRArchive* mArchive;                       // _78
	Game::ChallengeGame::StageList* mStageList; // _7C
	TChallengeScreen* mSelectScreen;            // _80
	TChallengePlayModeScreen* mPlayModeScreen;  // _84
	TSelectExplanationWindow* mRulesScreen;     // _88
	Controller* mControls;                      // _8C
	DispMemberChallengeSelect* mDisp;           // _90
	TChallengePanel** mPanelList;               // _94
	u8 mStageData;                              // _98
	u8 _9C[0xB4];                               // _9C, TODO: fill these in from ghidra
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

struct TChallengeSelectExplanationWindow : public TSelectExplanationWindow {
	virtual void create(const char*, u32); // _08
	virtual void screenScaleUp();          // _14

	// _00     = VTBL
	// _00-_30 = TSelectExplanationWindow
};

} // namespace Morimura

#endif
