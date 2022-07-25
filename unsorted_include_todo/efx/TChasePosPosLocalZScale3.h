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
		virtual void TSyncGroup3 < create(Arg*);       // _08 (weak)
		virtual void TSyncGroup3 < forceKill();        // _0C (weak)
		virtual void TSyncGroup3 < fade();             // _10 (weak)
		virtual void TSyncGroup3 < startDemoDrawOff(); // _14 (weak)
		virtual void TSyncGroup3 < endDemoDrawOn();    // _18 (weak)
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TChasePosPosLocalZScale3 : public TChasePosPosLocalZScale > {

	TChasePosPosLocalZScale3(Vector3<float>*, Vector3<float>*, float, unsigned short, unsigned short, unsigned short);
	void setPosptr(Vector3<float>*, Vector3<float>*);
};
} // namespace efx

#endif
