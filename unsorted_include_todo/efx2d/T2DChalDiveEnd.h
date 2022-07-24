#ifndef _EFX2D_T2DCHALDIVEEND_H
#define _EFX2D_T2DCHALDIVEEND_H

/*
    __vt__Q25efx2d14T2DChalDiveEnd:
    .4byte 0
    .4byte 0
    .4byte create__Q25efx2d8TSimple1FPQ25efx2d3Arg
    .4byte kill__Q25efx2d8TSimple1Fv
    .4byte fade__Q25efx2d8TSimple1Fv
    .4byte setGroup__Q25efx2d5TBaseFUc
*/

namespace efx2d {
struct TSimple1 {
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
struct T2DChalDiveEnd : public TSimple1, public TBase {

	// _00 VTBL
};
} // namespace efx2d

#endif
