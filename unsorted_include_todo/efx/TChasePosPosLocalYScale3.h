#ifndef _EFX_TCHASEPOSPOSLOCALYSCALE3_H
#define _EFX_TCHASEPOSPOSLOCALYSCALE3_H

/*
    __vt__Q23efx24TChasePosPosLocalYScale3:
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
struct TChasePosPosLocalYScale3 : public TSyncGroup3<efx::TChasePosPosLocalYScale> {

	TChasePosPosLocalYScale3(Vector3<float>*, Vector3<float>*, float, unsigned short, unsigned short, unsigned short);
	void setPosptr(Vector3<float>*, Vector3<float>*);
};
} // namespace efx

#endif
