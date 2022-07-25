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
	virtual void create(const char*, unsigned long); // _08
	virtual void update();                           // _0C
	virtual void draw(Graphics&, J2DPerspGraph*);    // _10

	TZukanWindow(JKRArchive*, int);
	void windowOpen();
	void windowClose();
	void msgScroll(float);
	void getPosRate();
	void setWindowColor(J2DGXColorS10&);
	void setIconColor(J2DGXColorS10&, J2DGXColorS10&);
	void onIcon(int);
	void moveIcon(float);
	void changeIconTexture(int, ResTIMG*);
};
} // namespace Morimura

#endif
