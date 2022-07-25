#ifndef _EFX_TOTAFIRE_H
#define _EFX_TOTAFIRE_H

/*
    __vt__Q23efx8TOtaFire:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx8TSimple5FPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple5Fv
    .4byte fade__Q23efx8TSimple5Fv
*/

namespace efx {
struct TSimple5 {
	virtual void create(Arg*); // _08
	virtual void forceKill();  // _0C (weak)
	virtual void fade();       // _10 (weak)
};
} // namespace efx

namespace efx {
struct TOtaFire : public TSimple5 {
};
} // namespace efx

#endif
