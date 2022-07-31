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
struct TSyncGroup3<efx::TChasePosYRot> {
	virtual void create(Arg*);                                   // _08
	virtual void TSyncGroup3<TChasePosYRot>::forceKill();        // _0C (weak)
	virtual void TSyncGroup3<TChasePosYRot>::fade();             // _10 (weak)
	virtual void TSyncGroup3<TChasePosYRot>::startDemoDrawOff(); // _14 (weak)
	virtual void TSyncGroup3<TChasePosYRot>::endDemoDrawOn();    // _18 (weak)
};
} // namespace efx

namespace efx {
struct TJgmAttackW : public TSyncGroup3<efx::TChasePosYRot> {
	virtual void create(Arg*); // _08
};
} // namespace efx

#endif
