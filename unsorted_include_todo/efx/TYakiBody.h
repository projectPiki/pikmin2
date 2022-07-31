#ifndef _EFX_TYAKIBODY_H
#define _EFX_TYAKIBODY_H

/*
    __vt__Q23efx9TYakiBody:
    .4byte 0
    .4byte 0
    .4byte "create__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>FPQ23efx3Arg"
    .4byte "forceKill__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
    .4byte "fade__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
    .4byte "startDemoDrawOff__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
    .4byte "endDemoDrawOn__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
*/

namespace efx {
struct TSyncGroup4<efx::TChaseMtx> {
	virtual void TSyncGroup4<TChaseMtx>::create(Arg*);       // _08 (weak)
	virtual void TSyncGroup4<TChaseMtx>::forceKill();        // _0C (weak)
	virtual void TSyncGroup4<TChaseMtx>::fade();             // _10 (weak)
	virtual void TSyncGroup4<TChaseMtx>::startDemoDrawOff(); // _14 (weak)
	virtual void TSyncGroup4<TChaseMtx>::endDemoDrawOn();    // _18 (weak)
};
} // namespace efx

namespace efx {
struct TYakiBody : public TSyncGroup4<efx::TChaseMtx> {

	void setRateLOD(int);
};
} // namespace efx

#endif
