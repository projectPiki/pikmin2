#ifndef _EFX_TGEYSERACT_H
#define _EFX_TGEYSERACT_H

/*
    __vt__Q23efx10TGeyserAct:
    .4byte 0
    .4byte 0
    .4byte "create__Q23efx28TSyncGroup3<Q23efx8TForever>FPQ23efx3Arg"
    .4byte "forceKill__Q23efx28TSyncGroup3<Q23efx8TForever>Fv"
    .4byte "fade__Q23efx28TSyncGroup3<Q23efx8TForever>Fv"
    .4byte "startDemoDrawOff__Q23efx28TSyncGroup3<Q23efx8TForever>Fv"
    .4byte "endDemoDrawOn__Q23efx28TSyncGroup3<Q23efx8TForever>Fv"
*/

namespace efx {
namespace TSyncGroup3 < efx
{
	struct TForever >
	{
		virtual void TSyncGroup3 < create(Arg*);       // _00
		virtual void TSyncGroup3 < forceKill();        // _04
		virtual void TSyncGroup3 < fade();             // _08
		virtual void TSyncGroup3 < startDemoDrawOff(); // _0C
		virtual void TSyncGroup3 < endDemoDrawOn();    // _10

		// _00 VTBL
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TGeyserAct : public TForever > {
	virtual void TSyncGroup3 < create(Arg*);       // _00
	virtual void TSyncGroup3 < forceKill();        // _04
	virtual void TSyncGroup3 < fade();             // _08
	virtual void TSyncGroup3 < startDemoDrawOff(); // _0C
	virtual void TSyncGroup3 < endDemoDrawOn();    // _10

	// _00 VTBL
};
} // namespace efx

#endif
