#ifndef _EFX_TPBAGDOWN_H
#define _EFX_TPBAGDOWN_H

/*
    __vt__Q23efx9TPbagDown:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx11TSimpleMtx3FPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple3Fv
    .4byte fade__Q23efx8TSimple3Fv
*/

namespace efx {
struct TSimpleMtx3 {
	virtual void create(Arg*); // _08
};
} // namespace efx

namespace efx {
struct TSimple3 {
	virtual void _08() = 0;   // _08
	virtual void forceKill(); // _0C (weak)
	virtual void fade();      // _10 (weak)
};
} // namespace efx

namespace efx {
struct TPbagDown : public TSimpleMtx3, public TSimple3 {
};
} // namespace efx

#endif
