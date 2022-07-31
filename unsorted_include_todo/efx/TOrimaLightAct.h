#ifndef _EFX_TORIMALIGHTACT_H
#define _EFX_TORIMALIGHTACT_H

/*
    __vt__Q23efx14TOrimaLightAct:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx14TOrimaLightActFPQ23efx3Arg
    .4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
    .4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
    .4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
    .4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
*/

namespace efx {
struct TSyncGroup2<efx::TChaseMtx> {
	virtual void create(Arg*);                               // _08
	virtual void TSyncGroup2<TChaseMtx>::forceKill();        // _0C (weak)
	virtual void TSyncGroup2<TChaseMtx>::fade();             // _10 (weak)
	virtual void TSyncGroup2<TChaseMtx>::startDemoDrawOff(); // _14 (weak)
	virtual void TSyncGroup2<TChaseMtx>::endDemoDrawOn();    // _18 (weak)
};
} // namespace efx

namespace efx {
struct TOrimaLightAct : public TSyncGroup2<efx::TChaseMtx> {
	virtual void create(Arg*); // _08
};
} // namespace efx

#endif
