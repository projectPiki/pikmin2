#ifndef _MORIMURA_TSELECTEXPLANATIONWINDOW_H
#define _MORIMURA_TSELECTEXPLANATIONWINDOW_H

/*
    __vt__Q28Morimura24TSelectExplanationWindow:
    .4byte 0
    .4byte 0
    .4byte create__Q28Morimura11TScreenBaseFPCcUl
    .4byte update__Q28Morimura24TSelectExplanationWindowFv
    .4byte
   draw__Q28Morimura24TSelectExplanationWindowFR8GraphicsP13J2DPerspGraph .4byte
   0
*/

namespace Morimura {
struct TScreenBase {
	virtual void create(const char*, unsigned long); // _00

	// _00 VTBL
};
} // namespace Morimura

namespace Morimura {
struct TSelectExplanationWindow : public TScreenBase {
	virtual void create(const char*, unsigned long); // _00
	virtual void update();                           // _04
	virtual void draw(Graphics&, J2DPerspGraph*);    // _08
	virtual void _0C() = 0;                          // _0C

	// _00 VTBL
};
} // namespace Morimura

#endif
