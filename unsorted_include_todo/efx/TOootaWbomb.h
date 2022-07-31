#ifndef _EFX_TOOOTAWBOMB_H
#define _EFX_TOOOTAWBOMB_H

/*
    __vt__Q23efx11TOootaWbomb:
    .4byte 0
    .4byte 0
    .4byte "create__Q23efx29TSyncGroup4<Q23efx9TChasePos>FPQ23efx3Arg"
    .4byte "forceKill__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
    .4byte "fade__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
    .4byte "startDemoDrawOff__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
    .4byte "endDemoDrawOn__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
*/

namespace efx {
struct TSyncGroup4<efx::TChasePos> {
	virtual void TSyncGroup4<TChasePos>::create(Arg*);       // _08 (weak)
	virtual void TSyncGroup4<TChasePos>::forceKill();        // _0C (weak)
	virtual void TSyncGroup4<TChasePos>::fade();             // _10 (weak)
	virtual void TSyncGroup4<TChasePos>::startDemoDrawOff(); // _14 (weak)
	virtual void TSyncGroup4<TChasePos>::endDemoDrawOn();    // _18 (weak)
};
} // namespace efx

namespace efx {
struct TOootaWbomb : public TSyncGroup4<efx::TChasePos> {
};
} // namespace efx

#endif
