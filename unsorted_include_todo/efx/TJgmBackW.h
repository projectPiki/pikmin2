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
namespace TSyncGroup2 < efx
{
	struct TChasePosYRot >
	{
		virtual void create(Arg*);                     // _08
		virtual void TSyncGroup2 < forceKill();        // _0C (inline)
		virtual void TSyncGroup2 < fade();             // _10 (inline)
		virtual void TSyncGroup2 < startDemoDrawOff(); // _14 (inline)
		virtual void TSyncGroup2 < endDemoDrawOn();    // _18 (inline)
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TJgmBackW : public TChasePosYRot > {
	virtual void create(Arg*); // _08
};
} // namespace efx

#endif
