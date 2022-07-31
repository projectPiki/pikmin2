#ifndef _EFX_TCHASEMTX2_H
#define _EFX_TCHASEMTX2_H

/*
    __vt__Q23efx10TChaseMtx2:
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
struct TChaseMtx2 : public TSyncGroup2<efx::TChaseMtx> {

	TChaseMtx2(float (*)[4], unsigned short, unsigned short);
	void setMtxptr(float (*)[4]);
};
} // namespace efx

#endif
