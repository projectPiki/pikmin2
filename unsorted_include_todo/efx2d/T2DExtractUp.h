#ifndef _EFX2D_T2DEXTRACTUP_H
#define _EFX2D_T2DEXTRACTUP_H

/*
    __vt__Q25efx2d12T2DExtractUp:
    .4byte 0
    .4byte 0
    .4byte create__Q25efx2d8TSimple1FPQ25efx2d3Arg
    .4byte kill__Q25efx2d8TSimple1Fv
    .4byte fade__Q25efx2d8TSimple1Fv
    .4byte setGroup__Q25efx2d5TBaseFUc
*/

namespace efx2d {
struct TSimple1 {
	virtual void create(Arg*); // _00
	virtual void kill();       // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx2d

namespace efx2d {
struct TBase {
	virtual void _00() = 0;               // _00
	virtual void _04() = 0;               // _04
	virtual void _08() = 0;               // _08
	virtual void setGroup(unsigned char); // _0C

	// _00 VTBL
};
} // namespace efx2d

namespace efx2d {
struct T2DExtractUp : public TSimple1, public TBase {
	virtual void create(Arg*);            // _00
	virtual void kill();                  // _04
	virtual void fade();                  // _08
	virtual void setGroup(unsigned char); // _0C

	// _00 VTBL
};
} // namespace efx2d

#endif
