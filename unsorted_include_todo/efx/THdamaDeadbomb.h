#ifndef _EFX_THDAMADEADBOMB_H
#define _EFX_THDAMADEADBOMB_H

/*
    __vt__Q23efx14THdamaDeadbomb:
    .4byte 0
    .4byte 0
    .4byte "create__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>FPQ23efx3Arg"
    .4byte "forceKill__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
    .4byte "fade__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
    .4byte "startDemoDrawOff__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
    .4byte "endDemoDrawOn__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
*/

namespace efx {
namespace TSyncGroup4 < efx
{
	struct TChaseMtx >
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
struct THdamaDeadbomb : public TChaseMtx > {
	virtual void TSyncGroup4 < create(Arg*);       // _00
	virtual void TSyncGroup4 < forceKill();        // _04
	virtual void TSyncGroup4 < fade();             // _08
	virtual void TSyncGroup4 < startDemoDrawOff(); // _0C
	virtual void TSyncGroup4 < endDemoDrawOn();    // _10

	// _00 VTBL
};
} // namespace efx

#endif
