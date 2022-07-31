#ifndef _EFX_TCHASEMTX6_H
#define _EFX_TCHASEMTX6_H

/*
    __vt__Q23efx10TChaseMtx6:
    .4byte 0
    .4byte 0
    .4byte "create__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>FPQ23efx3Arg"
    .4byte "forceKill__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
    .4byte "fade__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
    .4byte "startDemoDrawOff__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
    .4byte "endDemoDrawOn__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
*/

namespace efx {
struct TSyncGroup6<efx::TChaseMtx> {
	virtual void TSyncGroup6<TChaseMtx>::create(Arg*);       // _08 (weak)
	virtual void TSyncGroup6<TChaseMtx>::forceKill();        // _0C (weak)
	virtual void TSyncGroup6<TChaseMtx>::fade();             // _10 (weak)
	virtual void TSyncGroup6<TChaseMtx>::startDemoDrawOff(); // _14 (weak)
	virtual void TSyncGroup6<TChaseMtx>::endDemoDrawOn();    // _18 (weak)
};
} // namespace efx

namespace efx {
struct TChaseMtx6 : public TSyncGroup6<efx::TChaseMtx> {

	TChaseMtx6(float (*)[4], unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short);
	void setMtxptr(float (*)[4]);
};
} // namespace efx

#endif
