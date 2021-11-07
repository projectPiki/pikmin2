#ifndef _MORIMURA_TSELECTEXPLANATIONWINDOW_H
#define _MORIMURA_TSELECTEXPLANATIONWINDOW_H

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
