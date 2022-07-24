#ifndef _EFX2D_TSIMPLE1_H
#define _EFX2D_TSIMPLE1_H

/*
    __vt__Q25efx2d8TSimple1:
    .4byte 0
    .4byte 0
    .4byte create__Q25efx2d8TSimple1FPQ25efx2d3Arg
    .4byte kill__Q25efx2d8TSimple1Fv
    .4byte fade__Q25efx2d8TSimple1Fv
    .4byte setGroup__Q25efx2d5TBaseFUc
*/

namespace efx2d {
struct TBase {
	virtual void create(Arg*);            // _08
	virtual void kill();                  // _0C
	virtual void fade();                  // _10
	virtual void setGroup(unsigned char); // _14

	// _00 VTBL
};
} // namespace efx2d

namespace efx2d {
struct TSimple1 : public TBase {
	virtual void create(Arg*); // _08
	virtual void kill();       // _0C
	virtual void fade();       // _10

	// _00 VTBL
};
} // namespace efx2d

#endif
