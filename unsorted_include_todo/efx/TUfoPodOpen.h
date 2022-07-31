#ifndef _EFX_TUFOPODOPEN_H
#define _EFX_TUFOPODOPEN_H

/*
    __vt__Q23efx11TUfoPodOpen:
    .4byte 0
    .4byte 0
    .4byte "create__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>FPQ23efx3Arg"
    .4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
    .4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
    .4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
    .4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
*/

namespace efx {
struct TSyncGroup2<efx::TChaseMtx> {
	virtual void TSyncGroup2<TChaseMtx>::create(Arg*);       // _08 (weak)
	virtual void TSyncGroup2<TChaseMtx>::forceKill();        // _0C (weak)
	virtual void TSyncGroup2<TChaseMtx>::fade();             // _10 (weak)
	virtual void TSyncGroup2<TChaseMtx>::startDemoDrawOff(); // _14 (weak)
	virtual void TSyncGroup2<TChaseMtx>::endDemoDrawOn();    // _18 (weak)
};
} // namespace efx

namespace efx {
struct TUfoPodOpen : public TSyncGroup2<efx::TChaseMtx> {
};
} // namespace efx

#endif
