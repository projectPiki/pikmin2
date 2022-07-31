#ifndef _EFX_TROCKWRUNCHASEPOS_H
#define _EFX_TROCKWRUNCHASEPOS_H

/*
    __vt__Q23efx17TRockWRunChasePos:
    .4byte 0
    .4byte 0
    .4byte "create__Q23efx29TSyncGroup3<Q23efx9TChasePos>FPQ23efx3Arg"
    .4byte "forceKill__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
    .4byte "fade__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
    .4byte "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
    .4byte "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
*/

namespace efx {
struct TSyncGroup3<efx::TChasePos> {
	virtual void TSyncGroup3<TChasePos>::create(Arg*);       // _08 (weak)
	virtual void TSyncGroup3<TChasePos>::forceKill();        // _0C (weak)
	virtual void TSyncGroup3<TChasePos>::fade();             // _10 (weak)
	virtual void TSyncGroup3<TChasePos>::startDemoDrawOff(); // _14 (weak)
	virtual void TSyncGroup3<TChasePos>::endDemoDrawOn();    // _18 (weak)
};
} // namespace efx

namespace efx {
struct TRockWRunChasePos : public TSyncGroup3<efx::TChasePos> {
};
} // namespace efx

#endif
