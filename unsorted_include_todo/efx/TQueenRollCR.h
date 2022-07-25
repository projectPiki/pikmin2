#ifndef _EFX_TQUEENROLLCR_H
#define _EFX_TQUEENROLLCR_H

/*
    __vt__Q23efx12TQueenRollCR:
    .4byte 0
    .4byte 0
    .4byte "create__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>FPQ23efx3Arg"
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
		virtual void TSyncGroup3 < create(Arg*);       // _08 (weak)
		virtual void TSyncGroup3 < forceKill();        // _0C (weak)
		virtual void TSyncGroup3 < fade();             // _10 (weak)
		virtual void TSyncGroup3 < startDemoDrawOff(); // _14 (weak)
		virtual void TSyncGroup3 < endDemoDrawOn();    // _18 (weak)
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TQueenRollCR : public TChasePosYRot > {
};
} // namespace efx

#endif
