#ifndef _EFX_TCHASEPOS4_H
#define _EFX_TCHASEPOS4_H

/*
    __vt__Q23efx10TChasePos4:
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
struct TChasePos4 : public TSyncGroup4<efx::TChasePos> {

	TChasePos4(Vector3<float>*, unsigned short, unsigned short, unsigned short, unsigned short);
};
} // namespace efx

#endif
