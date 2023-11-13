#ifndef _MORIMURA_VSSELECT_H
#define _MORIMURA_VSSELECT_H

#include "Screen/Enums.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/StickAnimMgr.h"
#include "og/Screen/callbackNodes.h"
#include "Morimura/Window.h"
#include "Morimura/mrUtil.h"
#include "Morimura/ScrollList.h"
#include "trig.h"

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

	void reset();
	void posUpdate(f32);
	f32 getAngDist();
	void draw();

	u8 _00[0x8];               // _00, unknown
	J2DPane* mOnyonPane;       // _08
	Vector2f mCurrentPosition; // _0C
	Vector2f mGoalPosition;    // _14
	Vector2f mVelocity;        // _1C
	Vector2f mAngleDef;        // _24
	f32 mGoalAngle;            // _2C
	u8 _30[0x4];               // _30, unknown
	f32 mAngleTimer;           // _34
	int mCounter;              // _38
	u8 _3C[0x4];               // _3C, unknown
};

struct TVsSelectSlotIndex {
	void getIndexInfo(int);
};

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
		_34                   = 0;
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
	int _34;                                                       // _34
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
	virtual void create(const char*, u32); // _08
	virtual void screenScaleUp();          // _14

	// _00     = VTBL
	// _00-_30 = TSelectExplanationWindow
};

struct TVsSelectIndPane : public TIndPane {
	virtual ~TVsSelectIndPane() { } // _08 (weak)
	virtual void draw();            // _10

	// _00     = VTBL
	// _00-_18 = TIndPane
};

struct TVsSelectListScreen : public TListScreen {
	virtual void create(const char*, u32); // _08 (weak)
	virtual void update();                 // _0C (weak)

	// _00     = VTBL
	// _00-_18 = TScreenBase
};

struct TVsSelectScreen : public TScreenBase {
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

	void getCourseID(int);
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
	static f32 mDemoScale; // 1.0f
	static f32 mAngUp;     // 0.03f
	static f32 mMoveSpeed; // 25.0f
	static JKRHeap* mDebugHeap;
	static JKRHeap* mDebugHeapParent;
	static ResTIMG* mOrimaTexture[5];
	static ResTIMG* mLouieTexture[5];

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_B4 = TScrollList
	JKRArchive* mVsSelectTextureArc;  // _B4
	Controller* mController2;         // _B8
	TVsSelectScreen* _BC;             // _BC
	TScreenBase* _C0;                 // _C0
	TScreenBase* mRedPodScreen;       // _C4
	TScreenBase* mBluePodScreen;      // _C8
	TScreenBase* mSlotTexturesScreen; // _CC
	TScreenBase* _D0;                 // _D0
	TVsSelectExplanationWindow* _D4;  // _D4
	TVsSelectIndPane* _D8;            // _D8
	J2DPane* _DC;                     // _DC

	J2DPane* _E0;                       // _E0
	J2DPane* _E4;                       // _E4
	J2DPane* _E8;                       // _E8
	J2DPane* _EC;                       // _EC
	J2DPane* _F0;                       // _F0
	J2DPane* _F4[3];                    // _F4
	J2DPane* _100[2];                   // _100
	J2DPane* _108[2];                   // _108
	J2DPane* _110;                      // _110
	J2DPane* _114[6];                   // _114
	J2DPane* _12C[5];                   // _12C
	J2DPane* _140[5];                   // _140
	J2DPane* _154[6];                   // _154
	J2DPane* _16C[6];                   // _16C
	J2DPane* _184[12];                  // _184
	J2DPane* _1B4[6];                   // _1B4
	J2DPane* _1CC[6];                   // _1CC
	J2DPictureEx* _1E4;                 // _1E4
	unknown* _1E8[2];                   // _1E8
	TVsPiki* mVsPiki[2];                // _1F0
	DispMemberVsSelect* mDispMember;    // _1F8
	TOffsetMsgSet* mMesgData;           // _1FC
	efx2d::T2DCountKira* _200;          // _200
	og::Screen::CallBack_Picture* _204; // _204
	og::Screen::StickAnimMgr* _208;     // _208
	og::Screen::ArrowAlphaBlink* _20C;  // _20C
	TVsSelectCBWinNum* mWinCounts[2];   // _210
	u8 _214[0x10];                      // _214
	u8 _228;                            // _228
	u8 _229;                            // _229
	u8 _22A;                            // _22A
	u8 _22B;                            // _22B
	u8 _22C;                            // _22C
	u8 _22D;                            // _22D
	u8 _22E;                            // _22E
	u8 _22F;                            // _22F
	f32 _230;                           // _230
	f32 _234;                           // _234
	f32 _238;                           // _238
	u8 _23C;                            // _23C
	u8 _23D;                            // _23D
	u8 _23E[2];                         // _23E
	int _240;                           // _240
	int _244;                           // _244
	int mStageCount;                    // _248
	int _24C;                           // _24C
	f32 _250;                           // _250
	f32 _254;                           // _254
	f32 _258;                           // _258
	f32 _25C;                           // _25C
	f32 _260;                           // _260
	f32 _264;                           // _264
	f32 _268;                           // _268
	f32 _26C;                           // _26C
	f32 _270;                           // _270
	int mHandicapSel[2];                // _274
	u32 mDispRedPikiNum;                // _27C
	u32 mDispBluePikiNum;               // _280
	u32 _284[2];                        // _284
	u8 _28C[2];                         // _28C
	u8 _28E;                            // _28E
	u8 _28F;                            // _28F
	f32 _290;                           // _290
	f32 _294;                           // _294
	f32 _298;                           // _298
	f32 _29C;                           // _29C
	f32 _2A0;                           // _2A0
	f32 _2A4;                           // _2A4
	Vector2f _2A8[5];                   // _2A8
	Vector2f _2D0[5];                   // _2D0
	Vector2f _2F8[2];                   // _2F8
	Vector2f _308[2];                   // _308
	f32 _318;                           // _318
	f32 _31C;                           // _31C
	Vector2f _320;                      // _320
	ResTIMG** mLevelTextures;           // _328

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
