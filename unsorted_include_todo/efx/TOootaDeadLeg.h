#ifndef _EFX_TOOOTADEADLEG_H
#define _EFX_TOOOTADEADLEG_H

/*
    __vt__Q23efx13TOootaDeadLeg:
    .4byte 0
    .4byte 0
    .4byte "create__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>FPQ23efx3Arg"
    .4byte "forceKill__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv"
    .4byte "fade__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv"
    .4byte "startDemoDrawOff__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv"
    .4byte "endDemoDrawOn__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv"
*/

namespace efx {
struct TSyncGroup3<efx::TChasePosPosLocalYScale> {
	virtual void TSyncGroup3<TChasePosPosLocalYScale>::create(Arg*);       // _08 (weak)
	virtual void TSyncGroup3<TChasePosPosLocalYScale>::forceKill();        // _0C (weak)
	virtual void TSyncGroup3<TChasePosPosLocalYScale>::fade();             // _10 (weak)
	virtual void TSyncGroup3<TChasePosPosLocalYScale>::startDemoDrawOff(); // _14 (weak)
	virtual void TSyncGroup3<TChasePosPosLocalYScale>::endDemoDrawOn();    // _18 (weak)
};
} // namespace efx

namespace efx {
struct TOootaDeadLeg : public TSyncGroup3<efx::TChasePosPosLocalYScale> {
};
} // namespace efx

#endif
