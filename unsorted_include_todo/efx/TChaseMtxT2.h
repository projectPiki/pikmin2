#ifndef _EFX_TCHASEMTXT2_H
#define _EFX_TCHASEMTXT2_H

/*
    __vt__Q23efx11TChaseMtxT2:
    .4byte 0
    .4byte 0
    .4byte "create__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>FPQ23efx3Arg"
    .4byte "forceKill__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
    .4byte "fade__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
    .4byte "startDemoDrawOff__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
    .4byte "endDemoDrawOn__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
*/

namespace efx {
struct TSyncGroup2<efx::TChaseMtxT> {
	virtual void TSyncGroup2<TChaseMtxT>::create(Arg*);       // _08 (weak)
	virtual void TSyncGroup2<TChaseMtxT>::forceKill();        // _0C (weak)
	virtual void TSyncGroup2<TChaseMtxT>::fade();             // _10 (weak)
	virtual void TSyncGroup2<TChaseMtxT>::startDemoDrawOff(); // _14 (weak)
	virtual void TSyncGroup2<TChaseMtxT>::endDemoDrawOn();    // _18 (weak)
};
} // namespace efx

namespace efx {
struct TChaseMtxT2 : public TSyncGroup2<efx::TChaseMtxT> {

	TChaseMtxT2(float (*)[4], unsigned short, unsigned short);
	void setMtxptr(float (*)[4]);
};
} // namespace efx

#endif
