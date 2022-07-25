#ifndef _EFX_TCHASEPOS2_H
#define _EFX_TCHASEPOS2_H

/*
    __vt__Q23efx10TChasePos2:
    .4byte 0
    .4byte 0
    .4byte "create__Q23efx29TSyncGroup2<Q23efx9TChasePos>FPQ23efx3Arg"
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
		virtual void TSyncGroup2 < create(Arg*);       // _08 (weak)
		virtual void TSyncGroup2 < forceKill();        // _0C (weak)
		virtual void TSyncGroup2 < fade();             // _10 (weak)
		virtual void TSyncGroup2 < startDemoDrawOff(); // _14 (weak)
		virtual void TSyncGroup2 < endDemoDrawOn();    // _18 (weak)
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TChasePos2 : public TChasePos > {

	TChasePos2(Vector3<float>*, unsigned short, unsigned short);
	void setPosptr(Vector3<float>*);
};
} // namespace efx

#endif
