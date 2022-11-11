#ifndef _MORIMURA_VSSELECT_H
#define _MORIMURA_VSSELECT_H

#include "Screen/Enums.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/callbackNodes.h"
#include "Morimura/Window.h"
#include "Morimura/mrUtil.h"
#include "Morimura/ScrollList.h"

namespace Game {
struct Vs2D_TitleInfo;
} // namespace Game

namespace Morimura {
struct DispMemberVsSelect : public og::Screen::DispMemberBase {
	virtual u32 getSize() { return sizeof(DispMemberVsSelect); } // _08
	virtual u32 getOwnerID() { return OWNER_MRMR; }              // _0C
	virtual u64 getMemberID() { return MEMBER_VS_SELECT; }       // _10

	// _00     = VTBL
	// _00-_08 = og::Screen::DispMemberBase
	Game::Vs2D_TitleInfo* m_titleInfo;                              // _08
	JKRHeap* m_heap;                                                // _0C
	og::Screen::DispMemberWorldMapInfoWin0* m_dispWorldMapInfoWin0; // _10
	int _14;                                                        // _14
	u32 _18;                                                        // _18
	int _1C;                                                        // _1C
	int _20;                                                        // _20
	u32 m_redWinCount;                                              // _24
	u32 m_blueWinCount;                                             // _28
	int _2C;                                                        // _2C
	int m_stageCount;                                               // _30
	int _34;                                                        // _34
};

struct TVsSelectCBWinNum : public og::Screen::CallBack_CounterDay {
	virtual ~TVsSelectCBWinNum();      // _08 (weak)
	virtual void update();             // _10
	virtual void setValue(bool, bool); // _28

	// _00     = VTBL
	// _00-_AC = og::Screen::CallBack_CounterDay
	u8 _AC;                           // _AC
	og::Screen::ScaleMgr* m_scaleMgr; // _B0
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
	TCallbackScissor* m_callbackScissor; // _18
};

struct TVsSelectScene : public THIOScene {
	virtual SceneType getSceneType();             // _08 (weak)
	virtual ScreenOwnerID getOwnerID();           // _0C (weak)
	virtual ScreenMemberID getMemberID();         // _10 (weak)
	virtual const char* getResName() const;       // _1C (weak)
	virtual void doCreateObj(JKRArchive*);        // _20
	virtual bool doStart(Screen::StartSceneArg*); // _3C

	// _00      = VTBL
	// _00-_224 = THIOScene
	// _220, treat as TVsSelect
	TConfirmEndWindow* m_confirmEndWindow; // _224
};

struct TVsSelect : public TScrollList {
	TVsSelect();

	virtual ~TVsSelect();                                    // _08 (weak)
	virtual void doCreate(JKRArchive*);                      // _4C
	virtual void doUpdateFadeinFinish();                     // _54
	virtual bool doUpdate();                                 // _58
	virtual void doUpdateFadeoutFinish();                    // _64
	virtual void doDraw(Graphics& gfx);                      // _68
	virtual og::Screen::DispMemberBase* getDispMemberBase(); // _78 (weak)
	virtual void paneInit();                                 // _80
	virtual void changePaneInfo();                           // _84
	virtual void getIdMax();                                 // _88 (weak)
	virtual void getNameID(int);                             // _8C
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

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_B4 = TScrollList
	u8 _B4[0x278]; // _B4, TODO: fill in from ghidra
};

} // namespace Morimura

#endif
