#ifndef _EFX_TUJINKOAP_H
#define _EFX_TUJINKOAP_H

/*
    __vt__Q23efx9TUjinkoAp:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple2Fv
    .4byte fade__Q23efx8TSimple2Fv
*/

namespace efx {
struct TSimpleMtx2 {
	virtual void create(Arg*); // _08

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct TSimple2 {
	virtual void _08() = 0;   // _08
	virtual void forceKill(); // _0C
	virtual void fade();      // _10

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct TUjinkoAp : public TSimpleMtx2, public TSimple2 {

	// _00 VTBL
};
} // namespace efx

#endif
