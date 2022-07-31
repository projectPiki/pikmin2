#ifndef _EFX_TCHASEMTX4_H
#define _EFX_TCHASEMTX4_H

/*
    __vt__Q23efx10TChaseMtx4:
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
struct TChaseMtx4 : public TSyncGroup4<efx::TChaseMtx> {

	TChaseMtx4(float (*)[4], unsigned short, unsigned short, unsigned short, unsigned short);
	void setMtxptr(float (*)[4]);
};
} // namespace efx

#endif
