#ifndef _MORIMURA_THISCORELISTSCREEN_H
#define _MORIMURA_THISCORELISTSCREEN_H

/*
    __vt__Q28Morimura18THiScoreListScreen:
    .4byte 0
    .4byte 0
    .4byte create__Q28Morimura18THiScoreListScreenFPCcUl
    .4byte update__Q28Morimura18THiScoreListScreenFv
    .4byte draw__Q28Morimura11TScreenBaseFR8GraphicsP13J2DPerspGraph
*/

namespace Morimura {
struct TScreenBase {
	virtual void create(const char*, unsigned long); // _00
	virtual void update();                           // _04
	virtual void draw(Graphics&, J2DPerspGraph*);    // _08

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
