#ifndef _EFX2D_T2DBATTLEDIVE_H
#define _EFX2D_T2DBATTLEDIVE_H

/*
    __vt__Q25efx2d13T2DBattleDive:
    .4byte 0
    .4byte 0
    .4byte create__Q25efx2d8TSimple3FPQ25efx2d3Arg
    .4byte kill__Q25efx2d8TSimple3Fv
    .4byte fade__Q25efx2d8TSimple3Fv
    .4byte setGroup__Q25efx2d5TBaseFUc
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

namespace efx2d {
struct TSimple3 {
	virtual void create(Arg*); // _08
	virtual void kill();       // _0C
	virtual void fade();       // _10

	// _00 VTBL
};
} // namespace efx2d

namespace efx2d {
struct TBase {
	virtual void _08() = 0;               // _08
	virtual void _0C() = 0;               // _0C
	virtual void _10() = 0;               // _10
	virtual void setGroup(unsigned char); // _14

	// _00 VTBL
};
} // namespace efx2d

namespace efx2d {
struct T2DBattleDive : public TSimple3, public TBase {
	virtual void _18() = 0; // _18
	virtual void _1C() = 0; // _1C
	virtual void _20() = 0; // _20
	virtual void _24() = 0; // _24
	virtual void _28() = 0; // _28
	virtual void _2C() = 0; // _2C
	virtual void _30() = 0; // _30
	virtual void _34() = 0; // _34
	virtual void _38() = 0; // _38
	virtual void _3C() = 0; // _3C
	virtual void _40() = 0; // _40
	virtual void _44() = 0; // _44
	virtual void _48() = 0; // _48
	virtual void _4C() = 0; // _4C
	virtual void _50() = 0; // _50

	// _00 VTBL
};
} // namespace efx2d

#endif
