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
		virtual void create(Arg*);                     // _00
		virtual void TSyncGroup3 < forceKill();        // _04
		virtual void TSyncGroup3 < fade();             // _08
		virtual void TSyncGroup3 < startDemoDrawOff(); // _0C
		virtual void TSyncGroup3 < endDemoDrawOn();    // _10

		// _00 VTBL
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TJgmAttackW : public TChasePosYRot > {
	virtual void create(Arg*);                     // _00
	virtual void TSyncGroup3 < forceKill();        // _04
	virtual void TSyncGroup3 < fade();             // _08
	virtual void TSyncGroup3 < startDemoDrawOff(); // _0C
	virtual void TSyncGroup3 < endDemoDrawOn();    // _10

	// _00 VTBL
};
} // namespace efx

#endif
