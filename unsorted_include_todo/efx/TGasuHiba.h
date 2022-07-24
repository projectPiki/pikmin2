#ifndef _EFX_TGASUHIBA_H
#define _EFX_TGASUHIBA_H

/*
    __vt__Q23efx9TGasuHiba:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx9TGasuHibaFPQ23efx3Arg
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
		virtual void create(Arg*);                     // _08
		virtual void TSyncGroup2 < forceKill();        // _0C (inline)
		virtual void TSyncGroup2 < fade();             // _10 (inline)
		virtual void TSyncGroup2 < startDemoDrawOff(); // _14 (inline)
		virtual void TSyncGroup2 < endDemoDrawOn();    // _18 (inline)
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TGasuHiba : public TForever > {
	virtual void create(Arg*); // _08

	void setRateLOD(int);
};
} // namespace efx

#endif
