#ifndef _MORIMURA_TZUKANWINDOW_H
#define _MORIMURA_TZUKANWINDOW_H

/*
    __vt__Q28Morimura12TZukanWindow:
    .4byte 0
    .4byte 0
    .4byte create__Q28Morimura12TZukanWindowFPCcUl
    .4byte update__Q28Morimura12TZukanWindowFv
    .4byte draw__Q28Morimura12TZukanWindowFR8GraphicsP13J2DPerspGraph
*/

namespace Morimura {
struct TZukanWindow {
	virtual void create(const char*, unsigned long); // _00
	virtual void update();                           // _04
	virtual void draw(Graphics&, J2DPerspGraph*);    // _08

	// _00 VTBL
};
} // namespace Morimura

#endif
