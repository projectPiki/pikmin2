#ifndef _EFX_TQUEENROLLCL_H
#define _EFX_TQUEENROLLCL_H

/*
    __vt__Q23efx12TQueenRollCL:
    .4byte 0
    .4byte 0
    .4byte "create__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>FPQ23efx3Arg"
    .4byte "forceKill__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
    .4byte "fade__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
    .4byte "startDemoDrawOff__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
    .4byte "endDemoDrawOn__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
*/

namespace efx {
struct TSyncGroup3<efx::TChasePosYRot> {
	virtual void TSyncGroup3<TChasePosYRot>::create(Arg*);       // _08 (weak)
	virtual void TSyncGroup3<TChasePosYRot>::forceKill();        // _0C (weak)
	virtual void TSyncGroup3<TChasePosYRot>::fade();             // _10 (weak)
	virtual void TSyncGroup3<TChasePosYRot>::startDemoDrawOff(); // _14 (weak)
	virtual void TSyncGroup3<TChasePosYRot>::endDemoDrawOn();    // _18 (weak)
};
} // namespace efx

namespace efx {
struct TQueenRollCL : public TSyncGroup3<efx::TChasePosYRot> {
};
} // namespace efx

#endif
