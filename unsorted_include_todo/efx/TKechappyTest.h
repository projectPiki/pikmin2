#ifndef _EFX_TKECHAPPYTEST_H
#define _EFX_TKECHAPPYTEST_H

/*
    __vt__Q23efx13TKechappyTest:
    .4byte 0
    .4byte 0
    .4byte "create__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>FPQ23efx3Arg"
    .4byte "forceKill__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
    .4byte "fade__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
    .4byte "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
    .4byte "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
*/

namespace efx {
struct TSyncGroup3<efx::TChaseMtx> {
	virtual void TSyncGroup3<TChaseMtx>::create(Arg*);       // _08 (weak)
	virtual void TSyncGroup3<TChaseMtx>::forceKill();        // _0C (weak)
	virtual void TSyncGroup3<TChaseMtx>::fade();             // _10 (weak)
	virtual void TSyncGroup3<TChaseMtx>::startDemoDrawOff(); // _14 (weak)
	virtual void TSyncGroup3<TChaseMtx>::endDemoDrawOn();    // _18 (weak)
};
} // namespace efx

namespace efx {
struct TKechappyTest : public TSyncGroup3<efx::TChaseMtx> {

	void setGlobalAlpha(unsigned char);
	void setGlobalParticleScale(float);
	void setAwayFromCenterSpeed(float);
	void setSpread(float);
	void setGlobalDynamicsScale(Vector3<float>&);
};
} // namespace efx

#endif
