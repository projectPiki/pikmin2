#ifndef _MORIMURA_TSELECTEXPLANATIONWINDOW_H
#define _MORIMURA_TSELECTEXPLANATIONWINDOW_H

/*
    __vt__Q28Morimura24TSelectExplanationWindow:
    .4byte 0
    .4byte 0
    .4byte create__Q28Morimura11TScreenBaseFPCcUl
    .4byte update__Q28Morimura24TSelectExplanationWindowFv
    .4byte draw__Q28Morimura24TSelectExplanationWindowFR8GraphicsP13J2DPerspGraph
    .4byte 0
*/

namespace Morimura {
struct TScreenBase {
	virtual void create(const char*, unsigned long); // _08
};
} // namespace Morimura

namespace Morimura {
struct TSelectExplanationWindow : public TScreenBase {
	virtual void update();                        // _0C
	virtual void draw(Graphics&, J2DPerspGraph*); // _10
	virtual void _14() = 0;                       // _14

	TSelectExplanationWindow(JKRArchive*, int);
	void openWindow();
	void closeWindow();
};
} // namespace Morimura

#endif
