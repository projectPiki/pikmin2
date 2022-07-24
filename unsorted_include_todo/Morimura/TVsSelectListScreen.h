#ifndef _MORIMURA_TVSSELECTLISTSCREEN_H
#define _MORIMURA_TVSSELECTLISTSCREEN_H

/*
    __vt__Q28Morimura19TVsSelectListScreen:
    .4byte 0
    .4byte 0
    .4byte create__Q28Morimura19TVsSelectListScreenFPCcUl
    .4byte update__Q28Morimura19TVsSelectListScreenFv
    .4byte draw__Q28Morimura11TScreenBaseFR8GraphicsP13J2DPerspGraph
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

namespace Morimura {
struct TScreenBase {
	virtual void create(const char*, unsigned long); // _08 (inline)
	virtual void update();                           // _0C (inline)
	virtual void draw(Graphics&, J2DPerspGraph*);    // _10
};
} // namespace Morimura

namespace Morimura {
struct TVsSelectListScreen : public TScreenBase {
	virtual void create(const char*, unsigned long); // _08 (inline)
	virtual void update();                           // _0C (inline)
	virtual void _14() = 0;                          // _14
	virtual void _18() = 0;                          // _18
	virtual void _1C() = 0;                          // _1C
	virtual void _20() = 0;                          // _20
	virtual void _24() = 0;                          // _24
	virtual void _28() = 0;                          // _28
	virtual void _2C() = 0;                          // _2C
	virtual void _30() = 0;                          // _30
	virtual void _34() = 0;                          // _34
	virtual void _38() = 0;                          // _38
	virtual void _3C() = 0;                          // _3C
	virtual void _40() = 0;                          // _40
	virtual void _44() = 0;                          // _44
	virtual void _48() = 0;                          // _48
	virtual void _4C() = 0;                          // _4C
	virtual void _50() = 0;                          // _50
	virtual void _54() = 0;                          // _54
	virtual void _58() = 0;                          // _58
	virtual void _5C() = 0;                          // _5C
	virtual void _60() = 0;                          // _60
	virtual void _64() = 0;                          // _64
	virtual void _68() = 0;                          // _68
	virtual void _6C() = 0;                          // _6C
	virtual void _70() = 0;                          // _70
	virtual void _74() = 0;                          // _74
};
} // namespace Morimura

#endif
