#ifndef _MORIMURA_TZUKANWINDOW_H
#define _MORIMURA_TZUKANWINDOW_H

namespace Morimura {
struct TZukanWindow {
	virtual void create(const char*, unsigned long); // _00
	virtual void update();                           // _04
	virtual void draw(Graphics&, J2DPerspGraph*);    // _08

	// _00 VTBL
};
} // namespace Morimura

#endif
