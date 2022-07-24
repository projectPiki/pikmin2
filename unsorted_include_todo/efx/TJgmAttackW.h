#ifndef _EFX_TJGMATTACKW_H
#define _EFX_TJGMATTACKW_H

/*
    __vt__Q23efx11TJgmAttackW:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx11TJgmAttackWFPQ23efx3Arg
    .4byte "forceKill__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
    .4byte "fade__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
    .4byte "startDemoDrawOff__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
    .4byte "endDemoDrawOn__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
*/

namespace efx {
namespace TSyncGroup3 < efx
{
	struct TChasePosYRot >
	{
		virtual void create(Arg*);                     // _08
		virtual void TSyncGroup3 < forceKill();        // _0C (inline)
		virtual void TSyncGroup3 < fade();             // _10 (inline)
		virtual void TSyncGroup3 < startDemoDrawOff(); // _14 (inline)
		virtual void TSyncGroup3 < endDemoDrawOn();    // _18 (inline)
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TJgmAttackW : public TChasePosYRot > {
	virtual void create(Arg*); // _08
};
} // namespace efx

#endif
