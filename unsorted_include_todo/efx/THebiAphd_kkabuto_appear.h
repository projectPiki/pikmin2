#ifndef _EFX_THEBIAPHD_KKABUTO_APPEAR_H
#define _EFX_THEBIAPHD_KKABUTO_APPEAR_H

/*
    __vt__Q23efx24THebiAphd_kkabuto_appear:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx14THebiAphd_baseFPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple4Fv
    .4byte fade__Q23efx8TSimple4Fv
*/

namespace efx {
struct THebiAphd_base {
	virtual void create(Arg*); // _08
};
} // namespace efx

namespace efx {
struct TSimple4 {
	virtual void _08() = 0;   // _08
	virtual void forceKill(); // _0C (inline)
	virtual void fade();      // _10 (inline)
};
} // namespace efx

namespace efx {
struct THebiAphd_kkabuto_appear : public THebiAphd_base, public TSimple4 {
};
} // namespace efx

#endif
