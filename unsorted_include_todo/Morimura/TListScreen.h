#ifndef _MORIMURA_TLISTSCREEN_H
#define _MORIMURA_TLISTSCREEN_H

namespace Morimura {
struct TScreenBase {
	virtual void _00() = 0;                       // _00
	virtual void update();                        // _04
	virtual void draw(Graphics&, J2DPerspGraph*); // _08

	// _00 VTBL
};
} // namespace Morimura

namespace Morimura {
struct TListScreen : public TScreenBase {
	virtual void create(const char*, unsigned long); // _00
	virtual void update();                           // _04
	virtual void draw(Graphics&, J2DPerspGraph*);    // _08

	// _00 VTBL
};
} // namespace Morimura

#endif
