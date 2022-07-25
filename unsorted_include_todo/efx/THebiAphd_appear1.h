#ifndef _EFX_THEBIAPHD_APPEAR1_H
#define _EFX_THEBIAPHD_APPEAR1_H

/*
    __vt__Q23efx17THebiAphd_appear1:
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
	virtual void forceKill(); // _0C (weak)
	virtual void fade();      // _10 (weak)
};
} // namespace efx

namespace efx {
struct THebiAphd_appear1 : public THebiAphd_base, public TSimple4 {
};
} // namespace efx

#endif
