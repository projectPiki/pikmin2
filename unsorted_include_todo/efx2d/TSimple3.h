#ifndef _EFX2D_TSIMPLE3_H
#define _EFX2D_TSIMPLE3_H

/*
    __vt__Q25efx2d8TSimple3:
    .4byte 0
    .4byte 0
    .4byte create__Q25efx2d8TSimple3FPQ25efx2d3Arg
    .4byte kill__Q25efx2d8TSimple3Fv
    .4byte fade__Q25efx2d8TSimple3Fv
    .4byte setGroup__Q25efx2d5TBaseFUc
*/

namespace efx2d {
struct TBase {
	virtual void create(Arg*);            // _00
	virtual void kill();                  // _04
	virtual void fade();                  // _08
	virtual void setGroup(unsigned char); // _0C

	// _00 VTBL
};
} // namespace efx2d

namespace efx2d {
struct TSimple3 : public TBase {
	virtual void create(Arg*);            // _00
	virtual void kill();                  // _04
	virtual void fade();                  // _08
	virtual void setGroup(unsigned char); // _0C

	// _00 VTBL
};
} // namespace efx2d

#endif
