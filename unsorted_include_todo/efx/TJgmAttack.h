#ifndef _EFX_TJGMATTACK_H
#define _EFX_TJGMATTACK_H

/*
    __vt__Q23efx10TJgmAttack:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx10TJgmAttackFPQ23efx3Arg
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
		virtual void create(Arg*);                     // _08
		virtual void TSyncGroup2 < forceKill();        // _0C (weak)
		virtual void TSyncGroup2 < fade();             // _10 (weak)
		virtual void TSyncGroup2 < startDemoDrawOff(); // _14 (weak)
		virtual void TSyncGroup2 < endDemoDrawOn();    // _18 (weak)
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TJgmAttack : public TChasePos > {
	virtual void create(Arg*); // _08
};
} // namespace efx

#endif
