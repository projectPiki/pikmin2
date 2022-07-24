#ifndef _EFX_TDANGODEAD_H
#define _EFX_TDANGODEAD_H

/*
    __vt__Q23efx10TDangoDead:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple2Fv
    .4byte fade__Q23efx8TSimple2Fv
*/

namespace efx {
struct TSimpleMtx2 {
	virtual void create(Arg*); // _08
};
} // namespace efx

namespace efx {
struct TSimple2 {
	virtual void _08() = 0;   // _08
	virtual void forceKill(); // _0C (inline)
	virtual void fade();      // _10 (inline)
};
} // namespace efx

namespace efx {
struct TDangoDead : public TSimpleMtx2, public TSimple2 {
};
} // namespace efx

#endif
