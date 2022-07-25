#ifndef _EFX2D_FILESELECT_T2DFILEDECIDE_H
#define _EFX2D_FILESELECT_T2DFILEDECIDE_H

/*
    __vt__Q35efx2d10FileSelect13T2DFiledecide:
    .4byte 0
    .4byte 0
    .4byte create__Q25efx2d8TSimple2FPQ25efx2d3Arg
    .4byte kill__Q25efx2d8TSimple2Fv
    .4byte fade__Q25efx2d8TSimple2Fv
    .4byte setGroup__Q25efx2d5TBaseFUc
*/

namespace efx2d {
struct TSimple2 {
	virtual void create(Arg*); // _08
	virtual void kill();       // _0C (weak)
	virtual void fade();       // _10 (weak)
};
} // namespace efx2d

namespace efx2d {
struct TBase {
	virtual void _08() = 0;               // _08
	virtual void _0C() = 0;               // _0C
	virtual void _10() = 0;               // _10
	virtual void setGroup(unsigned char); // _14 (weak)
};
} // namespace efx2d

namespace efx2d {
namespace FileSelect {
struct T2DFiledecide : public TSimple2, public TBase {
};
} // namespace FileSelect
} // namespace efx2d

#endif
