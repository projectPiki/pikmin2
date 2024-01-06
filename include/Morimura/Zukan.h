#ifndef _MORIMURA_ZUKAN_H
#define _MORIMURA_ZUKAN_H

#include "Screen/Enums.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/StickAnimMgr.h"
#include "og/Screen/ArrowAlphaBlink.h"
#include "P2JME/IllustratedBook.h"
#include "Morimura/mrUtil.h"
#include "Morimura/Bases.h"
#include "Morimura/Window.h"
#include "Morimura/ScrollList.h"
#include "kh/khUtil.h"

#define ENEMY_ZUKAN_COUNT 81

struct JKRExpHeap;

namespace Game {
namespace ResultTexMgr {
struct Mgr;
} // namespace ResultTexMgr
namespace IllustratedBook {
struct EnemyTexMgr;
} // namespace IllustratedBook
} // namespace Game

namespace Morimura {

struct TEnemyZukanIndex {
	static TEnemyZukanIndex& getIndexInfo(int);

	int mZukanID; // _00
	int mEnemyID; // _04
};

extern TEnemyZukanIndex eIDInfo[ENEMY_ZUKAN_COUNT];

struct TCallbackScrollMsg : public og::Screen::CallBack_Message {
	TCallbackScrollMsg();

	virtual ~TCallbackScrollMsg() { }              // _08 (weak)
	virtual void update();                         // _10
	virtual void draw(Graphics&, J2DGrafContext&); // _14
	virtual void doInit();                         // _18

	void reset();
	void scroll(f32);
	f32 getPosRate();

	// _00     = VTBL
	// _00-_48 = og::Screen::CallBack_Message
	f32 mScrollTimer;                           // _48
	u8 _4C[0x4];                                // _4C, unknown
	P2JME::IllustratedBook::TControl* mControl; // _50
	u8 _54[0x4];                                // _54, unknown
};

struct DispMemberZukanBase : public og::Screen::DispMemberBase {
	DispMemberZukanBase()
	{
		mDebugExpHeap         = nullptr;
		mTexture              = nullptr;
		mResultTexMgr         = nullptr;
		mEnemyTexMgr          = nullptr;
		mDispWorldMapInfoWin0 = nullptr;
		mPrevSelection        = nullptr;
	}

	// _00     = VTBL
	// _00-_08 = og::Screen::DispMemberBase
	JKRExpHeap* mDebugExpHeap;                                     // _08
	JUTTexture* mTexture;                                          // _0C
	Game::ResultTexMgr::Mgr* mResultTexMgr;                        // _10
	Game::IllustratedBook::EnemyTexMgr* mEnemyTexMgr;              // _14
	og::Screen::DispMemberWorldMapInfoWin0* mDispWorldMapInfoWin0; // _18
	u32* mPrevSelection; // _1C (used to remember your last selection when swapping between the zukan pages)
};

struct DispMemberZukanEnemy : public DispMemberZukanBase {
	DispMemberZukanEnemy() { }

	virtual u32 getSize() { return sizeof(DispMemberZukanEnemy); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_MRMR; }                // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_ZUKAN_ENEMY; }       // _10 (weak)

	// _00     = VTBL
	// _00-_1C = og::Screen::DispMemberBase
};

struct DispMemberZukanItem : public DispMemberZukanBase {
	virtual u32 getSize() { return sizeof(DispMemberZukanItem); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_MRMR; }               // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_ZUKAN_ITEM; }       // _10 (weak)

	// _00     = VTBL
	// _00-_1C = og::Screen::DispMemberBase
};

struct TDEnemyScene : public THIOScene {
	TDEnemyScene();

	virtual SceneType getSceneType() { return SCENE_ZUKAN_ENEMY; }          // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_MRMR; }               // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_ZUKAN_ENEMY; }     // _10 (weak)
	virtual const char* getResName() const { return "res_enemyZukan.szs"; } // _1C (weak)
	virtual void doCreateObj(JKRArchive*);                                  // _20
	virtual bool doStart(Screen::StartSceneArg*);                           // _3C

	bool isAppearConfirmWindow();

	// _00      = VTBL
	// _00-_224 = THIOScene
	// _220, treat as TEnemyZukan*
	TConfirmEndWindow* mConfirmEndWindow; // _224
};

struct TDItemScene : public THIOScene {
	TDItemScene();

	virtual SceneType getSceneType() { return SCENE_ZUKAN_ITEM; }           // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_MRMR; }               // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_ZUKAN_ITEM; }      // _10 (weak)
	virtual const char* getResName() const { return "res_itemZukan.szs"; }; // _1C (weak)
	virtual void doCreateObj(JKRArchive*);                                  // _20
	virtual bool doStart(Screen::StartSceneArg*);                           // _3C

	bool isAppearConfirmWindow();

	// _00      = VTBL
	// _00-_224 = THIOScene
	// _220, treat as TItemZukan*
	TConfirmEndWindow* mConfirmEndWindow; // _224
};

struct TZukanBase : public TScrollList {
	TZukanBase(char*);

	virtual ~TZukanBase();              // _08 (weak)
	virtual void doCreate(JKRArchive*); // _4C
	virtual void doUpdateFadeinFinish()
	{
		mCanInput = true;
		mPaneSelectIcon->show();
	}                        // _54 (weak)
	virtual bool doUpdate(); // _58
	virtual bool doUpdateFadeout()
	{
		mCanInput = false;
		return TTestBase::doUpdateFadeout();
	}                                                     // _60 (weak)
	virtual void doUpdateFadeoutFinish();                 // _64
	virtual void doDraw(Graphics& gfx);                   // _68
	virtual void paneInit();                              // _80
	virtual void changePaneInfo();                        // _84
	virtual void setShortenIndex(int, int, bool);         // _94
	virtual void doUpdateIn();                            // _98
	virtual void doUpdateOut();                           // _9C
	virtual void doDemoDraw(Graphics&) { }                // _AC (weak)
	virtual int getCategoryColorId(int) { return 0; }     // _B0 (weak)
	virtual DispMemberZukanBase* getDispDataZukan() = 0;  // _B4
	virtual void indexPaneInit(J2DScreen*);               // _B8
	virtual bool isComplete() { return mIsLouieRescued; } // _BC (weak)
	virtual void setXWindow()      = 0;                   // _C0
	virtual void setYWindow()      = 0;                   // _C4
	virtual u64 getXMsgID(int)     = 0;                   // _C8
	virtual u64 getYMsgID(int)     = 0;                   // _CC
	virtual void setDetail()       = 0;                   // _D0
	virtual int getModelIndex(int) = 0;                   // _D4
	virtual void updateButtonAlpha(u8);                   // _D8
	virtual bool isOpenConfirmWindow()  = 0;              // _DC
	virtual void openConfirmWindow()    = 0;              // _E0
	virtual bool isNewSupply(int, bool) = 0;              // _E4
	virtual bool isPanelExist();                          // _E8

	void changeName();
	void doPushXButton();
	void doPushYButton();
	void doPushBButton();
	void windowOpenClose(u64);
	void requireRequest();
	void requireEffectOff();
	bool isEnlargedWindow();
	bool isMemoWindow();
	int checkRequest(int&);
	int getCurrSelectId();
	const ResTIMG* getTexInfo(int);
	void setDebugHeapParent(JKRHeap*);
	void requireSceneEnd();
	void resetDebugShow();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_B4 = TScrollList
	TListScreen* mListScreen;                        // _B4
	TScreenBase* mBGScreen;                          // _B8
	TScreenBase* mEffectScreen;                      // _BC (used for static effect when camera isnt showing an object)
	TScreenBase* mSujiScreen;                        // _C0 (used for enemy info numbers)
	TScreenBase* mYajiScreen;                        // _C4
	P2DScreen::Mgr_tuning* mIconScreen;              // _C8
	og::Screen::CallBack_Message* mMessageNew;       // _CC
	og::Screen::CallBack_Message* mMessageItemName;  // _D0
	og::Screen::CallBack_Message* mMessageCallback3; // _D4
	kh::Screen::khUtilColorAnm* mColorAnm;           // _D8
	TZukanWindow* mWindow;                           // _DC (the main screen for handling the text box descriptions)
	TScaleUpCounter* mSelIndexCounter;               // _E0 (for the selected index shown at the top right)
	og::Screen::CallBack_Picture* mControlStickPic;  // _E4 (the mini control stick in the main menu)
	og::Screen::CallBack_Picture* mStickPicMesg;     // _E8 (the mini control stick in the message box)
	og::Screen::StickAnimMgr* mStickAnim;            // _EC
	J2DTextBoxEx* mPaneNew1;                         // _F0
	J2DPane* mPaneMenu;                              // _F4
	J2DPane* mPane3DStick;                           // _F8
	og::Screen::ArrowAlphaBlink* mArrowAlpha;        // _FC (used for managing the alpha of the L and R button icons)
	J2DPane* mPaneMesgWindowStick;                   // _100
	J2DPane* mPaneMesgWindowStickCap;                // _104
	J2DTextBoxEx* mPaneEnemyName;                    // _108
	J2DTextBoxEx* mPaneEnemyNameShadow;              // _10C
	J2DPane* mPaneMessageDemo;                       // _110
	J2DPane* mAButtonPane;                           // _114
	J2DPane* mXButtonPane;                           // _118
	J2DPane* mYButtonPane;                           // _11C
	J2DPane* mPaneModel;                             // _120 (main pane representing the object camera view)
	J2DPane* mPaneWindowBack;                        // _124
	J2DPane* mPaneWindowBack_Child;                  // _128
	J2DPane* mPaneBigWindow;                         // _12C
	J2DPane* mPaneSelectIcon;                        // _130
	J2DPane* mPaneCursorCorners[4];                  // _134
	JGeometry::TBox2f mPaneModelPos;                 // _144
	JGeometry::TBox2f mPaneModelLPos;                // _154
	JGeometry::TVec2f mPaneModelOffs;                // _164
	JGeometry::TVec2f mPaneModelLOffs;               // _16C
	JGeometry::TVec2f mSelectIconPos;                // _174
	bool mIsCurrentSelUnlocked;                      // _17C (true if the current entry is unlocked and visible)
	bool* mDebugUnlockedList;                        // _180 (used for mIsSection mode, used for randomly setting what to unlock)
	u8* mIsBigIconList;                              // _184
	u32 mInfoVal1;                                   // _188 (corpse value for enemy, treasure value in hoard)
	u32 mInfoVal2;                                   // _18C (pikis lost for enemy, weight for hoard )
	u32 mInfoVal3;                                   // _190 (defeated for enemy, not used for hoard?)
	u32 mDisplayIndex;                               // _194 (the selection index as shown on screen)
	int mState;                                      // _198 (becomes 1 while changing between tiles, 2 and 3 while fading out)
	int mCurrObjectID;                               // _19C (regular game enemy ID or treasure ID)
	JGeometry::TBox2f mPanelListBounds;              // _1A0
	J2DGXColorS10 mMessageWindowColor[2];            // _1B0 (0 = X window, 1 = Y window)
	J2DGXColorS10 mIconColor1[2];                    // _1C0
	J2DGXColorS10 mIconColor2[2];                    // _1D0
	og::Screen::ScaleMgr* mScaleMgr;                 // _1E0
	TOffsetMsgSet* mOffsetMsgNames;                  // _1E4
	TOffsetMsgSet* mOffsetMsg_XDesc;                 // _1E8
	TOffsetMsgSet* mOffsetMsg_YDesc;                 // _1EC
	f32 mNameAlpha;                                  // _1F0
	f32 mXButtonAlpha;                               // _1F4
	f32 mYButtonAlpha;                               // _1F8
	f32 mCameraFadeInLevel;                          // _1FC (controls fade transition on main camera between selections)
	f32 mBigWindowScale;                             // _200
	f32 mCursorAnimTimer;                            // _204 (sine wave system for managing cursor scale)
	f32 mCursorAnimMagnitude;                        // _208 (controls how much the cursor moves in and out)
	f32 mCursorAnimSpeed;                            // _20C
	f32 mCursorScale;                                // _210
	u8 mMessageBoxBGAlpha;                           // _214 (used to fade background while text box is up)
	u8 mIsErrorSoundState;                           // _215
	bool mIsBigWindowOpened;                         // _216
	bool mIsEffectRequired;                          // _217
	bool mIsDrawScene;                               // _218
	bool mDoFadeNameAlpha;                           // _219
	bool mIsInFadeInOut;                             // _21A (true during the fadein/out state)
	bool mCurrCharacterOpened;                       // _21B (true = X, false = Y?)
	bool mDoUpdateLRButtonAlpha;                     // _21C
	int mRequestTimer;                               // _220
	int mCurrIndex;                                  // _224
	bool mIsLouieRescued;                            // _228
	int* mViewablePanelIDList;                       // _22C (used for converting true piklopedia index to index without hidden enemies)
	int mMaxPane;                                    // _230
	int _234;                                        // _234
	int mMaxSelectZukan;                             // _238
	int mSelection;                                  // _23C
	bool mIsPreDebt;                                 // _240 (false if debt is repayed, aka different list system)
	bool mCanComplete;                               // _241
	bool mCanScroll;                                 // _242 (false in the event you have 3 or less entries)
	bool _243;                                       // _243
	bool mIsInDemo;                                  // _244 (used when in sales pitch complete state )

	inline bool checkMemoWindow()
	{
		if (mWindow->mState != TZukanWindow::STATE_Inactive) {
			return true;
		}
		return false;
	}

	static struct StaticValues {
		inline StaticValues()
		{
			mMaxRollSpeed        = 8.0f;
			mSpeedSlowdownFactor = 0.9f;
			mRollSpeedMod        = 1.1f;
			mSpeedSpeedupFactor  = 1.5f;
			mInitialRollSpeed    = 2.0f;

			mNewOffset.set(0.0f, -12.5f);
			mLargeNewOffset.set(0.0f, -30.0f);

			mNewColor0.set(255, 96, 80, 0);
			mNewColor1.set(225, 0, 0, 255);

			mCategoryScale.x = 1.3f;
			mCategoryScale.y = 1.15f;

			mCategoryColor0w.set(0, 0, 255, 255);
			mCategoryColor0b.set(255, 255, 255, 0);
			mCategoryColor1w.set(255, 255, 255, 255);
			mCategoryColor1b.set(255, 255, 255, 0);
		}

		f32 mMaxRollSpeed;        // _00
		f32 mSpeedSlowdownFactor; // _04
		f32 mRollSpeedMod;        // _08
		f32 mSpeedSpeedupFactor;  // _0C
		f32 mInitialRollSpeed;    // _10
	} mScrollParm;

	static s16 mRequestTimerMax;
	static bool mIconMove;
	static f32 mLineSpace; // [vertical spacing between lines of text in message box]
	static f32 mWarpRadius;
	static f32 mScrollValueCoe; // 3.5f  [max scroll speed]
	static f32 mScrollSpeedCoe; // 0.08f [acceleration]
	static f32 mNewScale;
	static f32 mPodIconOffsetX; // 480.0f
	static f32 mLargeCategoryScale;
	static f32 mCategoryAlphaRate;
	static u8 mDrawLineType;
	static bool mShowAllObjects;
	static bool mAllNewSupply;
	static bool mZukanShortenTest;
	static bool mZukanCategoryTest;
	static f32 mRandShowRate;
	static JGeometry::TVec2f mNewOffset;
	static JGeometry::TVec2f mLargeNewOffset;
	static JUtility::TColor mNewColor0;
	static JUtility::TColor mNewColor1;
	static JGeometry::TVec2f mCategoryScale;
	static JUtility::TColor mCategoryColor0w;
	static JUtility::TColor mCategoryColor0b;
	static JUtility::TColor mCategoryColor1w;
	static JUtility::TColor mCategoryColor1b;
	static JKRHeap* mDebugHeapParent;
	static JKRExpHeap* mDebugHeap;
};

struct TEnemyZukan : public TZukanBase {

	// Represents the order of enemies in the piklopedia
	enum EnemyZukanEnemyList {
		Zukan_Chappy,
		Zukan_YellowChappy,
		Zukan_BlueChappy,
		Zukan_Kochappy,
		Zukan_YellowKochappy,
		Zukan_BlueKochappy,
		Zukan_KumaChappy,
		Zukan_KumaKochappy,
		Zukan_Baby,
		Zukan_FireChappy,
		Zukan_Catfish,
		Zukan_LeafChappy,
		Zukan_Tank,
		Zukan_Wtank,
		Zukan_Kabuto,
		Zukan_Rkabuto,
		Zukan_Mar,
		Zukan_Hanachirashi,
		Zukan_MiniHoudai,
		Zukan_Kogane,
		Zukan_Wealthy,
		Zukan_Fart,
		Zukan_UjiA,
		Zukan_UjiB,
		Zukan_Tobi,
		Zukan_Armor,
		Zukan_Imomushi,
		Zukan_ElecBug,
		Zukan_TamagoMushi,
		Zukan_Jigumo,
		Zukan_Sarai,
		Zukan_Demon,
		Zukan_BombSarai,
		Zukan_Fuefuki,
		Zukan_Kurage,
		Zukan_OniKurage,
		Zukan_FireOtakara,
		Zukan_ElecOtakara,
		Zukan_WaterOtakara,
		Zukan_GasOtakara,
		Zukan_BombOtakara,
		Zukan_UmiMushiBlind,
		Zukan_Frog,
		Zukan_MaroFrog,
		Zukan_Tadpole,
		Zukan_BluePom,
		Zukan_RedPom,
		Zukan_YellowPom,
		Zukan_BlackPom,
		Zukan_WhitePom,
		Zukan_RandPom,
		Zukan_Hana,
		Zukan_Sokkuri,
		Zukan_ShijimiChou,
		Zukan_Qurione,
		Zukan_Miulin,
		Zukan_PanModoki,
		Zukan_PelPlant,
		Zukan_HikariKinoko,
		Zukan_Clover,
		Zukan_Ooinu_l,
		Zukan_Tanpopo,
		Zukan_Watage,
		Zukan_Tukushi,
		Zukan_Nekojarashi,
		Zukan_DaiodoRed,
		Zukan_Magaret,
		Zukan_Zenmai,
		Zukan_Wakame_l,
		Zukan_Queen,
		Zukan_SnakeCrow,
		Zukan_Damagumo,
		Zukan_KingChappy,
		Zukan_OoPanModoki,
		Zukan_SnakeWhole,
		Zukan_Houdai,
		Zukan_UmiMushi,
		Zukan_BlackMan,
		Zukan_DangoMushi,
		Zukan_BigFoot,
		Zukan_BigTreasure
	};

	TEnemyZukan();

	virtual ~TEnemyZukan();             // _08
	virtual void doCreate(JKRArchive*); // _4C
	virtual og::Screen::DispMemberBase* getDispMemberBase()
	{
		if (mIsSection) {
			return mDispEnemy;
		} else {
			return getDispMember();
		}
	}                                                                      // _78 (weak)
	virtual bool isListShow(int);                                          // _7C
	virtual int getIdMax() { return ENEMY_ZUKAN_COUNT; }                   // _88 (weak)
	virtual u64 getNameID(int);                                            // _8C
	virtual void getUpdateIndex(int&, bool);                               // _90
	virtual void setShortenIndex(int, int, bool);                          // _94
	virtual DispMemberZukanBase* getDispDataZukan() { return mDispEnemy; } // _B4 (weak)
	virtual void indexPaneInit(J2DScreen*);                                // _B8
	virtual void setXWindow();                                             // _C0
	virtual void setYWindow();                                             // _C4
	virtual u64 getXMsgID(int);                                            // _C8
	virtual u64 getYMsgID(int);                                            // _CC
	virtual void setDetail();                                              // _D0
	virtual int getModelIndex(int);                                        // _D4
	virtual bool isOpenConfirmWindow();                                    // _DC
	virtual void openConfirmWindow();                                      // _E0
	virtual bool isNewSupply(int, bool);                                   // _E4
	virtual bool isPanelExist();                                           // _E8

	u32 getPrice(int);
	u32 getDefeatNum(int);
	u32 getKilledNum(int);

	// _00      = VTBL1
	// _18      = VTBL2
	// _00-_248 = TZukanBase
	DispMemberZukanEnemy* mDispEnemy;  // _248
	TScaleUpCounter* mValueCounter;    // _24C
	TScaleUpCounter* mDefeatedCounter; // _250
	TScaleUpCounter* mPikiLostCounter; // _254
};

struct TItemZukan : public TZukanBase {

#define TREASUREHOARD_CATEGORY_NUM 25

	// 2 appears to not exist
	enum StateID {
		ZUKANDEMO_Init         = 0,
		ZUKANDEMO_Scrolling    = 1,
		ZUKANDEMO_Reading      = 3,
		ZUKANDEMO_AppearEffect = 4,
	};
	enum ColorID {
		COLOR_Color0     = 0,          // green by default
		COLOR_Color1     = 1,          // blue by default
		COLOR_NotPresent = 0xFFFFFFFF, // series currently doesn't show in hoard
	};

	TItemZukan();

	virtual ~TItemZukan();              // _08
	virtual void doCreate(JKRArchive*); // _4C
	virtual bool doUpdate();            // _58
	virtual og::Screen::DispMemberBase* getDispMemberBase()
	{
		if (mIsSection) {
			return mDispItem;
		} else {
			return getDispMember();
		}
	}                                                                     // _78 (weak)
	virtual bool isListShow(int);                                         // _7C
	virtual int getIdMax();                                               // _88
	virtual u64 getNameID(int);                                           // _8C
	virtual void getUpdateIndex(int&, bool);                              // _90
	virtual void setShortenIndex(int, int, bool);                         // _94
	virtual void doUpdateOut();                                           // _9C
	virtual void doDemoDraw(Graphics&);                                   // _AC
	virtual int getCategoryColorId(int i) { return mCategoryColorID[i]; } // _B0 (weak)
	virtual DispMemberZukanBase* getDispDataZukan() { return mDispItem; } // _B4 (weak)
	virtual bool isComplete();                                            // _BC
	virtual void setXWindow();                                            // _C0
	virtual void setYWindow();                                            // _C4
	virtual u64 getXMsgID(int);                                           // _C8
	virtual u64 getYMsgID(int);                                           // _CC
	virtual void setDetail();                                             // _D0
	virtual int getModelIndex(int);                                       // _D4
	virtual bool isOpenConfirmWindow();                                   // _DC
	virtual void openConfirmWindow();                                     // _E0
	virtual bool isNewSupply(int, bool);                                  // _E4
	virtual bool isPanelExist();                                          // _E8

	void demoSet();
	u32 getPrice(int);
	u32 getWeight(int);
	bool isCategoryComplete();

	// _00      = VTBL1
	// _18      = VTBL2
	// _00-_248 = TZukanBase
	DispMemberZukanItem* mDispItem;                       // _248
	kh::Screen::khUtilColorAnm* mColorAnmItem;            // _24C
	TScaleUpCounter* mValueCounter;                       // _250
	TScaleUpCounter* mWeightCounter;                      // _254
	J2DGXColorS10 mOrimaMesgWindowColor;                  // _258
	J2DGXColorS10 mOrimaMesgIconColor1;                   // _260
	J2DGXColorS10 mOrimaMesgIconColor2;                   // _268
	ResTIMG* mOrimaIconTexture;                           // _270
	int mCurrCharacterIconID;                             // _274
	BOOL mCategoryIsComplete[TREASUREHOARD_CATEGORY_NUM]; // _278, for categories with TRUE, the sales pitch is unlocked
	BOOL mCategoryShowUnlock[TREASUREHOARD_CATEGORY_NUM]; // _2DC, for categories with TRUE, show the unlock text/animation
	int mCategoryColorID[TREASUREHOARD_CATEGORY_NUM];     // _340, 0xFFFFFFFF = not unlocked, 0 = green highlight, 1 = blue highlight
	TOffsetMsgSet* mOffsetMsgCategoryNames;               // _3A4 (You've completed the biggest file in the game series!)
	int mEfxTimer;                                        // _3A8
	int mDemoState;                                       // _3AC
	int mDemoScrollTargetRow;                             // _3B0
	int _3B4;                                             // _3B4
	f32 mDemoStateButtonAlpha;                            // _3B8

	static int mCategoryArray[];
};

} // namespace Morimura

#endif
