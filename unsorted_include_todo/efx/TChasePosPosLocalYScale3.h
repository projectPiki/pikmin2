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
namespace TSyncGroup3 < efx
{
	struct TChasePosPosLocalYScale >
	{
		virtual void TSyncGroup3 < create(Arg*);       // _08
		virtual void TSyncGroup3 < forceKill();        // _0C
		virtual void TSyncGroup3 < fade();             // _10
		virtual void TSyncGroup3 < startDemoDrawOff(); // _14
		virtual void TSyncGroup3 < endDemoDrawOn();    // _18

		// _00 VTBL
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TChasePosPosLocalYScale3 : public TChasePosPosLocalYScale > {

	// _00 VTBL
};
} // namespace efx

#endif
