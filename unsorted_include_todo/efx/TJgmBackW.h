#ifndef _EFX_TJGMBACKW_H
#define _EFX_TJGMBACKW_H

/*
    __vt__Q23efx9TJgmBackW:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx9TJgmBackWFPQ23efx3Arg
    .4byte "forceKill__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
    .4byte "fade__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
    .4byte "startDemoDrawOff__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
    .4byte "endDemoDrawOn__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
*/

namespace efx {
struct TSyncGroup2<efx::TChasePosYRot> {
	virtual void create(Arg*);                                   // _08
	virtual void TSyncGroup2<TChasePosYRot>::forceKill();        // _0C (weak)
	virtual void TSyncGroup2<TChasePosYRot>::fade();             // _10 (weak)
	virtual void TSyncGroup2<TChasePosYRot>::startDemoDrawOff(); // _14 (weak)
	virtual void TSyncGroup2<TChasePosYRot>::endDemoDrawOn();    // _18 (weak)
};
} // namespace efx

namespace efx {
struct TJgmBackW : public TSyncGroup2<efx::TChasePosYRot> {
	virtual void create(Arg*); // _08
};
} // namespace efx

#endif
