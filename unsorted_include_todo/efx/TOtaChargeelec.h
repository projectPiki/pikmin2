#ifndef _EFX_TOTACHARGEELEC_H
#define _EFX_TOTACHARGEELEC_H

/*
    __vt__Q23efx14TOtaChargeelec:
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
struct TOtaChargeelec : public TSyncGroup2<efx::TChaseMtxT> {
};
} // namespace efx

#endif
