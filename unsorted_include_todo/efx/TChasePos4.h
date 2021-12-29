#ifndef _EFX_TCHASEPOS4_H
#define _EFX_TCHASEPOS4_H

/*
    __vt__Q23efx10TChasePos4:
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
		virtual void TSyncGroup4 < create(Arg*);       // _00
		virtual void TSyncGroup4 < forceKill();        // _04
		virtual void TSyncGroup4 < fade();             // _08
		virtual void TSyncGroup4 < startDemoDrawOff(); // _0C
		virtual void TSyncGroup4 < endDemoDrawOn();    // _10

		// _00 VTBL
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TChasePos4 : public TChasePos > {
	virtual void TSyncGroup4 < create(Arg*);       // _00
	virtual void TSyncGroup4 < forceKill();        // _04
	virtual void TSyncGroup4 < fade();             // _08
	virtual void TSyncGroup4 < startDemoDrawOff(); // _0C
	virtual void TSyncGroup4 < endDemoDrawOn();    // _10

	// _00 VTBL
};
} // namespace efx

#endif
