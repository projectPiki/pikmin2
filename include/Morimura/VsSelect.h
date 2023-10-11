#ifndef _MORIMURA_VSSELECT_H
#define _MORIMURA_VSSELECT_H

#include "Screen/Enums.h"
#include "og/Screen/ogScreen.h"
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
	struct posInfo {
		posInfo();

		int _00; // _00
		f32 _04; // _04
		f32 _08; // _08
		f32 _0C; // _0C
	};

	TVsPiki(J2DPane*, J2DPane*, J2DPane*);

	void init(int);
	void update(int);
	void draw();
	void setAlpha(u8);

	J2DPicture* _00;       // _00
	J2DPicture* _04;       // _04
	J2DPicture* _08;       // _08
	posInfo mPosInfos[10]; // _0C
	Vector2f _AC[2];       // _AC
};

struct TVsSelectOnyon {

	void reset();
	void posUpdate(f32);
	void getAngDist();
	void draw();

	u8 _00[0x8];  // _00, unknown
	J2DPane* _08; // _08
	f32 _0C;      // _0C
	f32 _10;      // _10
	f32 _14;      // _14
	f32 _18;      // _18
	f32 _1C;      // _1C
	f32 _20;      // _20
	f32 _24;      // _24
	f32 _28;      // _28
	f32 _2C;      // _2C
	u8 _30[0x4];  // _30, unknown
	f32 _34;      // _34
	int _38;      // _38
	u8 _3C[0x4];  // _3C, unknown
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

	virtual ~TVsSelectCBWinNum();      // _08 (weak)
	virtual void update();             // _10
	virtual void setValue(bool, bool); // _28

	// _00     = VTBL
	// _00-_AC = og::Screen::CallBack_CounterDay
	u8 _AC;                          // _AC
	og::Screen::ScaleMgr* mScaleMgr; // _B0
};

struct TVsSelectExplanationWindow : public TSelectExplanationWindow {
	virtual void create(const char*, u32); // _08
	virtual void screenScaleUp();          // _14

	// _00     = VTBL
	// _00-_30 = TSelectExplanationWindow
};

struct TVsSelectIndPane : public TIndPane {
	virtual ~TVsSelectIndPane(); // _08 (weak)
	virtual void draw();         // _10

	// _00     = VTBL
	// _00-_18 = TIndPane
	JUTTexture* _18; // _18
	JUTTexture* _1C; // _1C
	u8 _20[0x14];    // _20, unknown
	f32 _34;         // _34
	f32 _38;         // _38
	s16 _3C;         // _3C
	f32 _40;         // _40
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

	virtual ~TVsSelect() { }                                 // _08 (weak)
	virtual void doCreate(JKRArchive*);                      // _4C
	virtual void doUpdateFadeinFinish();                     // _54
	virtual bool doUpdate();                                 // _58
	virtual void doUpdateFadeoutFinish();                    // _64
	virtual void doDraw(Graphics& gfx);                      // _68
	virtual og::Screen::DispMemberBase* getDispMemberBase(); // _78 (weak)
	virtual void paneInit();                                 // _80
	virtual void changePaneInfo();                           // _84
	virtual int getIdMax();                                  // _88 (weak)
	virtual u64 getNameID(int);                              // _8C
	virtual void setShortenIndex(int, int, bool);            // _94

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

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_B4 = TScrollList
	u8 _B4[0x278]; // _B4, TODO: fill in from ghidra
};

} // namespace Morimura

#endif
