#ifndef _EFX_TKCHCRYAB_H
#define _EFX_TKCHCRYAB_H

/*
    __vt__Q23efx9TKchCryAB:
    .4byte 0
    .4byte 0
    .4byte "create__Q23efx29TSyncGroup2<Q23efx9TChasePos>FPQ23efx3Arg"
    .4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
    .4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
    .4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
    .4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
*/

namespace efx {
namespace TSyncGroup2 < efx
{
	struct TChasePos >
	{
		virtual void TSyncGroup2 < create(Arg*);       // _08
		virtual void TSyncGroup2 < forceKill();        // _0C
		virtual void TSyncGroup2 < fade();             // _10
		virtual void TSyncGroup2 < startDemoDrawOff(); // _14
		virtual void TSyncGroup2 < endDemoDrawOn();    // _18

		// _00 VTBL
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TKchCryAB : public TChasePos > {

	// _00 VTBL
};
} // namespace efx

#endif
