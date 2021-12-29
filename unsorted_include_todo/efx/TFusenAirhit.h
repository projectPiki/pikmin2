#ifndef _EFX_TFUSENAIRHIT_H
#define _EFX_TFUSENAIRHIT_H

/*
    __vt__Q23efx12TFusenAirhit:
    .4byte 0
    .4byte 0
    .4byte "create__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>FPQ23efx3Arg"
    .4byte "forceKill__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
    .4byte "fade__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
    .4byte "startDemoDrawOff__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
    .4byte "endDemoDrawOn__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
*/

namespace efx {
namespace TSyncGroup2 < efx
{
	struct TChasePosYRot >
	{
		virtual void TSyncGroup2 < create(Arg*);       // _00
		virtual void TSyncGroup2 < forceKill();        // _04
		virtual void TSyncGroup2 < fade();             // _08
		virtual void TSyncGroup2 < startDemoDrawOff(); // _0C
		virtual void TSyncGroup2 < endDemoDrawOn();    // _10

		// _00 VTBL
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TFusenAirhit : public TChasePosYRot > {
	virtual void TSyncGroup2 < create(Arg*);       // _00
	virtual void TSyncGroup2 < forceKill();        // _04
	virtual void TSyncGroup2 < fade();             // _08
	virtual void TSyncGroup2 < startDemoDrawOff(); // _0C
	virtual void TSyncGroup2 < endDemoDrawOn();    // _10

	// _00 VTBL
};
} // namespace efx

#endif
