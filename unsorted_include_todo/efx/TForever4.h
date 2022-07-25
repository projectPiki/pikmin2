#ifndef _EFX_TFOREVER4_H
#define _EFX_TFOREVER4_H

/*
    __vt__Q23efx9TForever4:
    .4byte 0
    .4byte 0
    .4byte "create__Q23efx28TSyncGroup4<Q23efx8TForever>FPQ23efx3Arg"
    .4byte "forceKill__Q23efx28TSyncGroup4<Q23efx8TForever>Fv"
    .4byte "fade__Q23efx28TSyncGroup4<Q23efx8TForever>Fv"
    .4byte "startDemoDrawOff__Q23efx28TSyncGroup4<Q23efx8TForever>Fv"
    .4byte "endDemoDrawOn__Q23efx28TSyncGroup4<Q23efx8TForever>Fv"
*/

namespace efx {
namespace TSyncGroup4 < efx
{
	struct TForever >
	{
		virtual void TSyncGroup4 < create(Arg*);       // _08 (weak)
		virtual void TSyncGroup4 < forceKill();        // _0C (weak)
		virtual void TSyncGroup4 < fade();             // _10 (weak)
		virtual void TSyncGroup4 < startDemoDrawOff(); // _14 (weak)
		virtual void TSyncGroup4 < endDemoDrawOn();    // _18 (weak)
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TForever4 : public TForever > {

	TForever4(unsigned short, unsigned short, unsigned short, unsigned short);
};
} // namespace efx

#endif
