#ifndef _MORIMURA_WINDOW_H
#define _MORIMURA_WINDOW_H

#include "og/newScreen/WorldMapInfoWindow.h"
#include "Morimura/Bases.h"

namespace Morimura {
struct TConfirmEndWindow : public og::newScreen::ObjWorldMapInfoWindow0 {
	TConfirmEndWindow(const char*);

	virtual ~TConfirmEndWindow();                       // _08 (weak)
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
	bool m_isOpenMaybe; // _D4
	u8 _D5;             // _D5
};

struct TSelectExplanationWindow : public TScreenBase {
	TSelectExplanationWindow(JKRArchive*, int);

	virtual void update();                        // _0C
	virtual void draw(Graphics&, J2DPerspGraph*); // _10
	virtual void screenScaleUp() = 0;             // _14

	void openWindow();
	void closeWindow();

	// _00     = VTBL
	// _00-_18 = TScreenBase
	u32 _18;                          // _18
	f32 _1C;                          // _1C
	f32 _20;                          // _20
	f32 _24;                          // _24
	f32 _28;                          // _28
	og::Screen::ScaleMgr* m_scaleMgr; // _2C
};
} // namespace Morimura

#endif
