#ifndef _EFX_THEBIAPHD_APPEAR2_LATE_H
#define _EFX_THEBIAPHD_APPEAR2_LATE_H

/*
    __vt__Q23efx22THebiAphd_appear2_late:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx14THebiAphd_baseFPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple4Fv
    .4byte fade__Q23efx8TSimple4Fv
*/

namespace efx {
struct THebiAphd_base {
	virtual void create(Arg*); // _08

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct TSimple4 {
	virtual void _08() = 0;   // _08
	virtual void forceKill(); // _0C
	virtual void fade();      // _10

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct THebiAphd_appear2_late : public THebiAphd_base, public TSimple4 {

	// _00 VTBL
};
} // namespace efx

#endif
