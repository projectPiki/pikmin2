#ifndef _MORIMURA_VSSELECT_H
#define _MORIMURA_VSSELECT_H

#include "Screen/Enums.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/StickAnimMgr.h"
#include "og/Screen/callbackNodes.h"
#include "Morimura/Window.h"
#include "Morimura/mrUtil.h"
#include "Morimura/ScrollList.h"
#include "PSSystem/PSSystemIF.h"
#include "trig.h"

// This should match the number of stages in the stages.txt
#define VS_Stage_Count 10

namespace Game {
struct Vs2D_TitleInfo;
} // namespace Game

namespace Morimura {
struct TVsPiki {
	TVsPiki(J2DPane*, J2DPane*, J2DPane*);

	struct posInfo {
		posInfo();
		enum { Idle, Pluck, Bury, Sprout } mState; // _00
		f32 mStateTimer;                           // _04
		Vector2f mPosition;                        // _08
	};

	void init(int);
	void update(int);
	void draw();
	void setAlpha(u8);

	J2DPicture* mPikminLeft;   // _00
	J2DPicture* mPikminRight;  // _04
	J2DPicture* mPikminFlower; // _08
	posInfo mPosInfos[10];     // _0C
	Vector2f mBounds[2];       // _AC

	static Vector2f mPikiOffset;
};

struct TVsSelectOnyon {
	TVsSelectOnyon(J2DPane* pane1, J2DPane* pane2)
	{
		mNaviPane  = static_cast<J2DPicture*>(pane1);
		mOnyonPane = static_cast<J2DPicture*>(pane2);
		mOnyonPane->setBasePosition(J2DPOS_Center);
	}

	void reset();
	void posUpdate(f32);
	f32 getAngDist();
	void draw();

	f32 _00;                   // _00
	J2DPicture* mNaviPane;     // _04
	J2DPicture* mOnyonPane;    // _08
	Vector2f mCurrentPosition; // _0C
	Vector2f mGoalPosition;    // _14
	Vector2f mVelocity;        // _1C
	Vector2f mAngleDef;        // _24
	f32 mGoalAngle;            // _2C
	f32 _30;                   // _30
	f32 mAngleTimer;           // _34
	int mCounter;              // _38
	bool _3C;                  // _3C
};

struct TVsSelectSlotIndex {
	static TVsSelectSlotIndex* getIndexInfo(int);

	int mIndex;
	int mTagID;
	u64 mMesg;
};
extern TVsSelectSlotIndex slotIDInfo[12];

struct DispMemberVsSelect : public og::Screen::DispMemberBase {
	DispMemberVsSelect()
	{
		mTitleInfo            = nullptr;
		mDebugExpHeap         = nullptr;
		mDispWorldMapInfoWin0 = nullptr;
		mSelectedStageIndex   = -1;
		mStageNumber          = 0;
		mOlimarHandicap       = 3;
		mLouieHandicap        = 3;
		mRedWinCount          = 0;
		mBlueWinCount         = 0;
		mVsWinner             = -1;
		mStageCount           = 0;
		mState                = 0;
	}

	virtual u32 getSize() { return sizeof(DispMemberVsSelect); } // _08
	virtual u32 getOwnerID() { return OWNER_MRMR; }              // _0C
	virtual u64 getMemberID() { return MEMBER_VS_SELECT; }       // _10

	// _00     = VTBL
	// _00-_08 = og::Screen::DispMemberBase
	Game::Vs2D_TitleInfo* mTitleInfo;                              // _08
	JKRHeap* mDebugExpHeap;                                        // _0C
	og::Screen::DispMemberWorldMapInfoWin0* mDispWorldMapInfoWin0; // _10
	int mSelectedStageIndex;                                       // _14
	int mStageNumber;                                              // _18
	int mOlimarHandicap;                                           // _1C
	int mLouieHandicap;                                            // _20
	int mRedWinCount;                                              // _24
	int mBlueWinCount;                                             // _28
	int mVsWinner;                                                 // _2C
	int mStageCount;                                               // _30
	int mState;                                                    // _34
};

struct TVsSelectCBWinNum : public og::Screen::CallBack_CounterDay {
	TVsSelectCBWinNum(char**, u16, JKRArchive*);

	virtual ~TVsSelectCBWinNum() { }   // _08 (weak)
	virtual void update();             // _10
	virtual void setValue(bool, bool); // _28

	// _00     = VTBL
	// _00-_AC = og::Screen::CallBack_CounterDay
	bool mIsNeedUp;                  // _AC
	og::Screen::ScaleMgr* mScaleMgr; // _B0
};

struct TVsSelectExplanationWindow : public TSelectExplanationWindow {
	TVsSelectExplanationWindow(JKRArchive* arc, int anims)
	    : TSelectExplanationWindow(arc, anims)
	{
	}
	virtual void create(const char*, u32); // _08
	virtual void screenScaleUp();          // _14

	inline void openClose()
	{
		if (0.0f <= mScaleGrowRate) {
			openWindow();
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
		} else {
			closeWindow();
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
		}
	}

	// _00     = VTBL
	// _00-_30 = TSelectExplanationWindow
};

struct TVsSelectIndPane : public TIndPane {
	TVsSelectIndPane(const char* name, f32 x, f32 y)
	    : TIndPane(name, x, y)
	{
	}
	virtual ~TVsSelectIndPane() { } // _08 (weak)
	virtual void draw();            // _10

	// _00     = VTBL
	// _00-_18 = TIndPane
};

struct TVsSelectListScreen : public TListScreen {
	TVsSelectListScreen(JKRArchive* arc, int anims)
	    : TListScreen(arc, anims)
	{
	}
	virtual void create(const char* path, u32 flags) { TScreenBase::create(path, flags); } // _08 (weak)
	virtual void update() { mScreenObj->update(); }                                        // _0C (weak)

	// _00     = VTBL
	// _00-_18 = TScreenBase
};

struct TVsSelectScreen : public TScreenBase {
	TVsSelectScreen(JKRArchive* arc, int anims)
	    : TScreenBase(arc, anims)
	{
		mCallbackScissor = nullptr;
	}
	virtual void create(const char*, u32); // _08

	// _00     = VTBL
	// _00-_18 = TScreenBase
	TCallbackScissor* mCallbackScissor; // _18
};

struct TVsSelectScene : public THIOScene {
	TVsSelectScene() { mConfirmEndWindow = nullptr; }
	virtual SceneType getSceneType() { return SCENE_VS_SELECT; }          // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_MRMR; }             // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_VS_SELECT; }     // _10 (weak)
	virtual const char* getResName() const { return "res_vsSelect.szs"; } // _1C (weak)
	virtual void doCreateObj(JKRArchive*);                                // _20
	virtual bool doStart(Screen::StartSceneArg*);                         // _3C

	// _00      = VTBL
	// _00-_224 = THIOScene
	// _220, treat as TVsSelect
	TConfirmEndWindow* mConfirmEndWindow; // _224
};

struct TVsSelect : public TScrollList {
	TVsSelect();

	virtual ~TVsSelect()
	{
		if (mDebugHeap) {
			mDispMember->mDebugExpHeap->freeAll();
			mDebugHeap->destroy();
		}
		mDebugHeap = nullptr;
	}                                                                                                              // _08 (weak)
	virtual void doCreate(JKRArchive*);                                                                            // _4C
	virtual void doUpdateFadeinFinish();                                                                           // _54
	virtual bool doUpdate();                                                                                       // _58
	virtual void doUpdateFadeoutFinish();                                                                          // _64
	virtual void doDraw(Graphics& gfx);                                                                            // _68
	virtual og::Screen::DispMemberBase* getDispMemberBase() { return mIsSection ? mDispMember : getDispMember(); } // _78 (weak)
	virtual void paneInit();                                                                                       // _80
	virtual void changePaneInfo();                                                                                 // _84
	virtual int getIdMax();                                                                                        // _88 (weak)
	virtual u64 getNameID(int);                                                                                    // _8C
	virtual void setShortenIndex(int, int, bool);                                                                  // _94

	int getCourseID(int);
	void doZoom();
	void doMoveOnyon();
	void doScreenEffect();
	void onyonDemoInit();
	void demoStart();
	void changeCourseTexture();
	void changeIndirectTexture();
	void updateFacePicture();
	void changeFaceTexture();
	void changeOrimaTexture(int);
	void changeLouieTexture(int);
	void changeSlotPage();

	// unused/inlined
	void setDebugHeapParent(JKRHeap*);
	void reset();

	static bool mCanCancel;
	static bool mLoopDrum;
	static bool mForceDemoStart;
	static f32 mDemoScale;     // 1.0f
	static f32 mAngUp;         // 0.03f
	static f32 mTestVal;       // 10.0f
	static f32 mMoveSpeed;     // 25.0f
	static f32 mAngRate;       // 0.2f
	static f32 mIndShuki;      // 0.3f
	static f32 mIndVal;        // 0.05f
	static f32 mZoomFrameMax;  // 25.0f
	static f32 mDemoScaleMax;  // 2.2f
	static f32 mDemoOffsetMax; // 290.0f
	static f32 mWindowScale;   // 1.0f
	static f32 mFireAlphaRate; // 0.5f
	static JKRHeap* mDebugHeap;
	static JKRHeap* mDebugHeapParent;
	static ResTIMG* mOrimaTexture[5];
	static ResTIMG* mLouieTexture[5];

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_B4 = TScrollList
	JKRArchive* mVsSelectTextureArc;           // _B4
	Controller* mController2;                  // _B8
	TVsSelectListScreen* mListScreen;          // _BC
	TScreenBase* mBackgroundScreen;            // _C0
	TScreenBase* mRedPodScreen;                // _C4
	TScreenBase* mBluePodScreen;               // _C8
	TScreenBase* mSlotTexturesScreen;          // _CC
	TScreenBase* mFireScreen;                  // _D0
	TVsSelectExplanationWindow* mRulesWindow;  // _D4
	TVsSelectIndPane* mIndPane;                // _D8
	J2DPane* mPane3DStick;                     // _DC
	J2DPane* mPaneSpot;                        // _E0
	J2DPane* mPaneStageList;                   // _E4
	J2DPane* mPaneStageNameBg;                 // _E8
	J2DPane* mPaneStars;                       // _EC
	J2DPane* mPaneLevelName;                   // _F0
	J2DPane* mButtonMsgTags[3];                // _F4
	J2DPane* mCharacterMainIcons[2];           // _100
	J2DPane* mPaneRulesLR[2];                  // _108
	J2DPane* mPaneRulesInfo;                   // _110
	J2DPane* mPaneRulesIcons[6];               // _114
	J2DPane* mPaneLevelWindows[5];             // _12C
	J2DPicture* mActiveCourseThumbs[5];        // _140
	J2DPicture* mOlimarFacePanes[6];           // _154
	J2DPicture* mLouieFacePanes[6];            // _16C
	J2DPane* mPowerIconPanes[12];              // _184
	J2DPane* mPaneRulesDesc1[6];               // _1B4
	J2DPane* mPaneRulesDesc2[6];               // _1CC
	J2DPictureEx* mIndPic;                     // _1E4
	TVsSelectOnyon* mOnyonObj[2];              // _1E8
	TVsPiki* mVsPiki[2];                       // _1F0
	DispMemberVsSelect* mDispMember;           // _1F8
	TOffsetMsgSet* mMesgData;                  // _1FC
	efx2d::T2DCountKira* mEfxCountKira;        // _200
	og::Screen::CallBack_Picture* mStickImage; // _204
	og::Screen::StickAnimMgr* mStickAnim;      // _208
	og::Screen::ArrowAlphaBlink* mArrowBlink;  // _20C
	TVsSelectCBWinNum* mWinCounter[2];         // _210
	JGeometry::TBox2f mScissorBounds;          // _214
	u8 mIsDemoStarted;                         // _228
	u8 mIsZoomActive;                          // _229
	u8 mIsOnyonHitGoal;                        // _22A
	u8 mIsUpdatedScore;                        // _22B
	u8 mCurrentRulesPage;                      // _22C
	u8 mDoChangeRulesPage;                     // _22D
	u8 mIsRulesPageChanging;                   // _22E
	f32 mLevelNameYPos;                        // _230
	f32 _234;                                  // _234
	f32 mPaneStarAlpha;                        // _238
	u8 mDrawAlpha;                             // _23C
	u8 mIsSelectIndexChange;                   // _23D
	int mZoomState;                            // _240
	int mStickAnimState;                       // _244
	int mStageCount;                           // _248
	int mChangeFaceState;                      // _24C
	f32 mZoomLevel;                            // _250
	f32 mEndDelayTimer;                        // _254
	f32 mOtherLevelsFadeAlpha;                 // _258
	f32 mRulesMoveXPos;                        // _25C
	f32 mRuleChangeTimer;                      // _260
	f32 mRulePageChangeSpeed;                  // _264
	f32 mChangeFaceTimer;                      // _268
	f32 mScreenXPos;                           // _26C
	f32 mFaceChangeSpeed;                      // _270
	u32 mHandicapSel[2];                       // _274
	u32 mDispPikiNum[2];                       // _27C
	u32 mPlayerWinCounts[2];                   // _284
	u8 mDebugWinCounts[2];                     // _28C
	u8 mDoDebugScores;                         // _28E
	f32 _290;                                  // _290
	f32 _294;                                  // _294
	f32 _298;                                  // _298
	f32 _29C;                                  // _29C
	Vector2f mOnyonGoalOffset;                 // _2A0
	Vector2f mOlimarFaceScales[5];             // _2A8
	Vector2f mLouieFaceScales[5];              // _2D0
	Vector2f mPlayerMainIconPos[2];            // _2F8
	Vector2f mPlayerIconOffset[2];             // _308
	JGeometry::TVec2f mRulesPanePos;           // _318
	Vector2f mPowerIconOffset;                 // _320
	ResTIMG** mLevelTextures;                  // _328

	static struct StaticValues {
		// WARNING: the actual TVsSelect constructor overwrites these
		inline StaticValues()
		{
			_00 = 8.0f;
			_04 = 0.9f;
			_08 = 1.1f;
			_0C = 1.5f;
			_10 = 2.0f;
		}
		f32 _00; // _00
		f32 _04;
		f32 _08;
		f32 _0C;
		f32 _10;
	} mScrollParm;
};

} // namespace Morimura

#endif
