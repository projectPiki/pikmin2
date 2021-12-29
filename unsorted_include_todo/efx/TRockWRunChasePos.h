#ifndef _EFX_TROCKWRUNCHASEPOS_H
#define _EFX_TROCKWRUNCHASEPOS_H

/*
    __vt__Q23efx17TRockWRunChasePos:
    .4byte 0
    .4byte 0
    .4byte "create__Q23efx29TSyncGroup3<Q23efx9TChasePos>FPQ23efx3Arg"
    .4byte "forceKill__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
    .4byte "fade__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
    .4byte "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
    .4byte "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"
*/

namespace efx {
namespace TSyncGroup3 < efx
{
	struct TChasePos >
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
struct TRockWRunChasePos : public TChasePos > {
	virtual void TSyncGroup3 < create(Arg*);       // _00
	virtual void TSyncGroup3 < forceKill();        // _04
	virtual void TSyncGroup3 < fade();             // _08
	virtual void TSyncGroup3 < startDemoDrawOff(); // _0C
	virtual void TSyncGroup3 < endDemoDrawOn();    // _10

	// _00 VTBL
};
} // namespace efx

#endif
