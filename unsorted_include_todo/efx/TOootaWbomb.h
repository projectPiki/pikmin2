#ifndef _EFX_TOOOTAWBOMB_H
#define _EFX_TOOOTAWBOMB_H

/*
    __vt__Q23efx11TOootaWbomb:
    .4byte 0
    .4byte 0
    .4byte "create__Q23efx29TSyncGroup4<Q23efx9TChasePos>FPQ23efx3Arg"
    .4byte "forceKill__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
    .4byte "fade__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
    .4byte "startDemoDrawOff__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
    .4byte "endDemoDrawOn__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
*/

namespace efx {
namespace TSyncGroup4 < efx
{
	struct TChasePos >
	{
		virtual void TSyncGroup4 < create(Arg*);       // _08
		virtual void TSyncGroup4 < forceKill();        // _0C
		virtual void TSyncGroup4 < fade();             // _10
		virtual void TSyncGroup4 < startDemoDrawOff(); // _14
		virtual void TSyncGroup4 < endDemoDrawOn();    // _18

		// _00 VTBL
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TOootaWbomb : public TChasePos > {

	// _00 VTBL
};
} // namespace efx

#endif
