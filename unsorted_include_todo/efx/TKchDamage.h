#ifndef _EFX_TKCHDAMAGE_H
#define _EFX_TKCHDAMAGE_H

/*
    __vt__Q23efx10TKchDamage:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx10TKchDamageFPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple4Fv
    .4byte fade__Q23efx8TSimple4Fv
*/

namespace efx {
struct TSimple4 {
	virtual void create(Arg*); // _08
	virtual void forceKill();  // _0C (inline)
	virtual void fade();       // _10 (inline)
};
} // namespace efx

namespace efx {
struct TKchDamage : public TSimple4 {
	virtual void create(Arg*); // _08
};
} // namespace efx

#endif
