#ifndef _EFX_TQUEENDEAD_H
#define _EFX_TQUEENDEAD_H

/*
    __vt__Q23efx10TQueenDead:
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
struct TQueenDead : public TChaseMtx > {

	// _00 VTBL
};
} // namespace efx

#endif
