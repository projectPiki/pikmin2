#ifndef _EFX_TKOUHAI2_H
#define _EFX_TKOUHAI2_H

/*
    __vt__Q23efx8TKouhai2:
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
		virtual void TSyncGroup2 < create(Arg*);       // _00
		virtual void TSyncGroup2 < forceKill();        // _04
		virtual void TSyncGroup2 < fade();             // _08
		virtual void TSyncGroup2 < startDemoDrawOff(); // _0C
		virtual void TSyncGroup2 < endDemoDrawOn();    // _10

		// _00 VTBL
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TKouhai2 : public TForever > {
	virtual void TSyncGroup2 < create(Arg*);       // _00
	virtual void TSyncGroup2 < forceKill();        // _04
	virtual void TSyncGroup2 < fade();             // _08
	virtual void TSyncGroup2 < startDemoDrawOff(); // _0C
	virtual void TSyncGroup2 < endDemoDrawOn();    // _10

	// _00 VTBL
};
} // namespace efx

#endif
