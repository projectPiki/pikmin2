#ifndef _EFX_TCPHEBIDEAD_H
#define _EFX_TCPHEBIDEAD_H

/*
    __vt__Q23efx11TCphebiDead:
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
		virtual void TSyncGroup4 < create(Arg*);       // _08 (weak)
		virtual void TSyncGroup4 < forceKill();        // _0C (weak)
		virtual void TSyncGroup4 < fade();             // _10 (weak)
		virtual void TSyncGroup4 < startDemoDrawOff(); // _14 (weak)
		virtual void TSyncGroup4 < endDemoDrawOn();    // _18 (weak)
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TCphebiDead : public TChaseMtx > {
};
} // namespace efx

#endif
