#ifndef _EFX_TCHASEPOSPOSLOCALZSCALE3_H
#define _EFX_TCHASEPOSPOSLOCALZSCALE3_H

/*
    __vt__Q23efx24TChasePosPosLocalZScale3:
    .4byte 0
    .4byte 0
    .4byte "create__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>FPQ23efx3Arg"
    .4byte "forceKill__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"
    .4byte "fade__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"
    .4byte "startDemoDrawOff__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"
    .4byte "endDemoDrawOn__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"
*/

namespace efx {
namespace TSyncGroup3 < efx
{
	struct TChasePosPosLocalZScale >
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
struct TChasePosPosLocalZScale3 : public TChasePosPosLocalZScale > {

	// _00 VTBL
};
} // namespace efx

#endif
