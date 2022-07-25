#ifndef _EFX_TKURAGESUI_H
#define _EFX_TKURAGESUI_H

/*
    __vt__Q23efx10TKurageSui:
    .4byte 0
    .4byte 0
    .4byte "create__Q23efx28TSyncGroup2<Q23efx8TForever>FPQ23efx3Arg"
    .4byte "forceKill__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
    .4byte "fade__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
    .4byte "startDemoDrawOff__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
    .4byte "endDemoDrawOn__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
*/

namespace efx {
namespace TSyncGroup2 < efx
{
	struct TForever >
	{
		virtual void TSyncGroup2 < create(Arg*);       // _08 (weak)
		virtual void TSyncGroup2 < forceKill();        // _0C (weak)
		virtual void TSyncGroup2 < fade();             // _10 (weak)
		virtual void TSyncGroup2 < startDemoDrawOff(); // _14 (weak)
		virtual void TSyncGroup2 < endDemoDrawOn();    // _18 (weak)
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TKurageSui : public TForever > {

	void setGlobalTranslation(Vector3<float>&);
};
} // namespace efx

#endif
