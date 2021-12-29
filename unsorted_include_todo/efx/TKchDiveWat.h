#ifndef _EFX_TKCHDIVEWAT_H
#define _EFX_TKCHDIVEWAT_H

/*
    __vt__Q23efx11TKchDiveWat:
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
		virtual void TSyncGroup3 < create(Arg*);       // _00
		virtual void TSyncGroup3 < forceKill();        // _04
		virtual void TSyncGroup3 < fade();             // _08
		virtual void TSyncGroup3 < startDemoDrawOff(); // _0C
		virtual void TSyncGroup3 < endDemoDrawOn();    // _10

		// _00 VTBL
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TKchDiveWat : public TChasePosYRot > {
	virtual void TSyncGroup3 < create(Arg*);       // _00
	virtual void TSyncGroup3 < forceKill();        // _04
	virtual void TSyncGroup3 < fade();             // _08
	virtual void TSyncGroup3 < startDemoDrawOff(); // _0C
	virtual void TSyncGroup3 < endDemoDrawOn();    // _10

	// _00 VTBL
};
} // namespace efx

#endif
