#ifndef _MORIMURA_THISCORELISTSCREEN_H
#define _MORIMURA_THISCORELISTSCREEN_H

namespace Morimura {
struct TScreenBase {
	virtual void _00() = 0;                       // _00
	virtual void _04() = 0;                       // _04
	virtual void draw(Graphics&, J2DPerspGraph*); // _08

	// _00 VTBL
};
} // namespace Morimura

namespace Morimura {
struct THiScoreListScreen : public TScreenBase {
	virtual void create(const char*, unsigned long); // _00
	virtual void update();                           // _04
	virtual void draw(Graphics&, J2DPerspGraph*);    // _08

	// _00 VTBL
};
} // namespace Morimura

#endif
