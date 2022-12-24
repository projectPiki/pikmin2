#ifndef _MORIMURA_WINDOW_H
#define _MORIMURA_WINDOW_H

#include "og/newScreen/WorldMapInfoWindow.h"
#include "Morimura/Bases.h"

namespace Morimura {
struct TConfirmEndWindow : public og::newScreen::ObjWorldMapInfoWindow0 {
	TConfirmEndWindow(const char*);

	virtual ~TConfirmEndWindow() { }                    // _08 (weak)
	virtual bool doStart(const Screen::StartSceneArg*); // _44
	virtual bool doUpdateFadein();                      // _50
	virtual void doUpdateFadeinFinish();                // _54
	virtual bool doUpdateFadeout();                     // _60
	virtual void doUpdateFadeoutFinish();               // _64
	virtual void doDraw(Graphics& gfx);                 // _68

	void setRetireMsg(u64);

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_D4 = og::newScreen::ObjWorldMapInfoWindow0
	bool m_hasDrawn; // _D4
	u8 m_isActive;   // _D5
};

struct TSelectExplanationWindow : public TScreenBase {

	enum SelectWindowState { SelWinState_Disabled, SelWinState_Opening, SelWinState_IdleOpen, SelWinState_Closing };

	TSelectExplanationWindow(JKRArchive*, int);

	virtual void update();                        // _0C
	virtual void draw(Graphics&, J2DPerspGraph*); // _10
	virtual void screenScaleUp() = 0;             // _14

	void openWindow();
	void closeWindow();

	// _00     = VTBL
	// _00-_18 = TScreenBase
	int m_state;                      // _18
	f32 m_transXModifier;             // _1C
	f32 m_transYModifier;             // _20
	f32 m_scaleGrowRate;              // _24
	f32 m_currScreenScale;            // _28
	og::Screen::ScaleMgr* m_scaleMgr; // _2C
};
} // namespace Morimura

#endif
