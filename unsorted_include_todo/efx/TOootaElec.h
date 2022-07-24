#ifndef _EFX_TOOOTAELEC_H
#define _EFX_TOOOTAELEC_H

/*
    __vt__Q23efx10TOootaElec:
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
		virtual void TSyncGroup3 < create(Arg*);       // _08 (inline)
		virtual void TSyncGroup3 < forceKill();        // _0C (inline)
		virtual void TSyncGroup3 < fade();             // _10 (inline)
		virtual void TSyncGroup3 < startDemoDrawOff(); // _14 (inline)
		virtual void TSyncGroup3 < endDemoDrawOn();    // _18 (inline)
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TOootaElec : public TChasePosPosLocalZScale > {
};
} // namespace efx

#endif
