#ifndef _MORIMURA_TCONFIRMENDWINDOW_H
#define _MORIMURA_TCONFIRMENDWINDOW_H

#include "og/newScreen/ObjWorldMapInfoWindow0.h"

namespace Morimura {
/**
 * @size{0xD8}
 */
struct TConfirmEndWindow : public og::newScreen::ObjWorldMapInfoWindow0 {
	virtual ~TConfirmEndWindow();                       // _00
	virtual bool doStart(const Screen::StartSceneArg*); // _3C
	virtual bool doUpdateFadein();                      // _48
	virtual void doUpdateFadeinFinish();                // _4C
	virtual bool doUpdateFadeout();                     // _58
	virtual void doUpdateFadeoutFinish();               // _5C
	virtual void doDraw(Graphics&);                     // _60

	bool m_isOpenMaybe; // _D4
	u8 _D5;             // _D5
};
} // namespace Morimura

#endif
