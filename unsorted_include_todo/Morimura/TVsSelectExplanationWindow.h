#ifndef _MORIMURA_TVSSELECTEXPLANATIONWINDOW_H
#define _MORIMURA_TVSSELECTEXPLANATIONWINDOW_H

/*
    __vt__Q28Morimura26TVsSelectExplanationWindow:
    .4byte 0
    .4byte 0
    .4byte create__Q28Morimura26TVsSelectExplanationWindowFPCcUl
    .4byte update__Q28Morimura24TSelectExplanationWindowFv
    .4byte draw__Q28Morimura24TSelectExplanationWindowFR8GraphicsP13J2DPerspGraph
    .4byte screenScaleUp__Q28Morimura26TVsSelectExplanationWindowFv
*/

namespace Morimura {
struct TSelectExplanationWindow {
	virtual void create(const char*, unsigned long); // _08
	virtual void update();                           // _0C
	virtual void draw(Graphics&, J2DPerspGraph*);    // _10

	// _00 VTBL
};
} // namespace Morimura

namespace Morimura {
struct TVsSelectExplanationWindow : public TSelectExplanationWindow {
	virtual void create(const char*, unsigned long); // _08
	virtual void screenScaleUp();                    // _14

	// _00 VTBL
};
} // namespace Morimura

#endif
