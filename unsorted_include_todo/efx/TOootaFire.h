#ifndef _EFX_TOOOTAFIRE_H
#define _EFX_TOOOTAFIRE_H

/*
    __vt__Q23efx10TOootaFire:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx10TOootaFireFPQ23efx3Arg
    .4byte "forceKill__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
    .4byte "fade__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
    .4byte "startDemoDrawOff__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
    .4byte "endDemoDrawOn__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
*/

namespace efx {
namespace TSyncGroup6 < efx
{
	struct TChaseMtx >
	{
		virtual void create(Arg*);                     // _08
		virtual void TSyncGroup6 < forceKill();        // _0C
		virtual void TSyncGroup6 < fade();             // _10
		virtual void TSyncGroup6 < startDemoDrawOff(); // _14
		virtual void TSyncGroup6 < endDemoDrawOn();    // _18

		// _00 VTBL
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TOootaFire : public TChaseMtx > {
	virtual void create(Arg*); // _08

	// _00 VTBL
};
} // namespace efx

#endif
