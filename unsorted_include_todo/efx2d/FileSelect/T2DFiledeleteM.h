#ifndef _EFX2D_FILESELECT_T2DFILEDELETEM_H
#define _EFX2D_FILESELECT_T2DFILEDELETEM_H

/*
    __vt__Q35efx2d10FileSelect14T2DFiledeleteM:
    .4byte 0
    .4byte 0
    .4byte create__Q35efx2d10FileSelect14T2DFiledeleteMFPQ25efx2d3Arg
    .4byte kill__Q25efx2d8TSimple1Fv
    .4byte fade__Q25efx2d8TSimple1Fv
    .4byte setGroup__Q25efx2d5TBaseFUc
*/

namespace efx2d {
struct TSimple1 {
	virtual void create(Arg*); // _08
	virtual void kill();       // _0C (inline)
	virtual void fade();       // _10 (inline)
};
} // namespace efx2d

namespace efx2d {
struct TBase {
	virtual void create(Arg*);            // _08
	virtual void _0C() = 0;               // _0C
	virtual void _10() = 0;               // _10
	virtual void setGroup(unsigned char); // _14 (inline)
};
} // namespace efx2d

namespace efx2d {
namespace FileSelect {
struct T2DFiledeleteM : public TSimple1, public TBase {
	virtual void create(Arg*); // _08
};
} // namespace FileSelect
} // namespace efx2d

#endif
