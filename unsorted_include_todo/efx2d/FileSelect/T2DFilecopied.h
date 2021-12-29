#ifndef _EFX2D_FILESELECT_T2DFILECOPIED_H
#define _EFX2D_FILESELECT_T2DFILECOPIED_H

/*
    __vt__Q35efx2d10FileSelect13T2DFilecopied:
    .4byte 0
    .4byte 0
    .4byte create__Q35efx2d10FileSelect13T2DFilecopiedFPQ25efx2d3Arg
    .4byte kill__Q25efx2d8TSimple1Fv
    .4byte fade__Q25efx2d8TSimple1Fv
    .4byte setGroup__Q25efx2d5TBaseFUc
*/

namespace efx2d {
struct TSimple1 {
	virtual void _00() = 0; // _00
	virtual void kill();    // _04
	virtual void fade();    // _08

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
namespace FileSelect {
	struct T2DFilecopied : public TSimple1, public TBase {
		virtual void create(Arg*);            // _00
		virtual void kill();                  // _04
		virtual void fade();                  // _08
		virtual void setGroup(unsigned char); // _0C

		// _00 VTBL
	};
} // namespace FileSelect
} // namespace efx2d

#endif
