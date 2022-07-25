#ifndef _EFX_TDENKIHIBA_H
#define _EFX_TDENKIHIBA_H

/*
    __vt__Q23efx10TDenkiHiba:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx10TDenkiHibaFPQ23efx3Arg
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
		virtual void create(Arg*);                     // _08
		virtual void TSyncGroup3 < forceKill();        // _0C (weak)
		virtual void TSyncGroup3 < fade();             // _10 (weak)
		virtual void TSyncGroup3 < startDemoDrawOff(); // _14 (weak)
		virtual void TSyncGroup3 < endDemoDrawOn();    // _18 (weak)
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TDenkiHiba : public TForever > {
	virtual void create(Arg*); // _08
};
} // namespace efx

#endif
