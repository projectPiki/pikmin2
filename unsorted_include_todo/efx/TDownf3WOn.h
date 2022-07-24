#ifndef _EFX_TDOWNF3WON_H
#define _EFX_TDOWNF3WON_H

/*
    __vt__Q23efx10TDownf3WOn:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple1Fv
    .4byte fade__Q23efx8TSimple1Fv
*/

namespace efx {
struct TSimpleMtx1 {
	virtual void create(Arg*); // _08

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct TSimple1 {
	virtual void _08() = 0;   // _08
	virtual void forceKill(); // _0C
	virtual void fade();      // _10

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct TDownf3WOn : public TSimpleMtx1, public TSimple1 {

	// _00 VTBL
};
} // namespace efx

#endif
