#ifndef _EFX_TNEWKURAGEHIRE_H
#define _EFX_TNEWKURAGEHIRE_H

/*
    __vt__Q23efx14TNewkurageHire:
    .4byte 0
    .4byte 0
    .4byte "create__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>FPQ23efx3Arg"
    .4byte "forceKill__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
    .4byte "fade__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
    .4byte "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
    .4byte "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
*/

namespace efx {
namespace TSyncGroup3 < efx
{
	struct TChaseMtx >
	{
		virtual void TSyncGroup3 < create(Arg*);       // _08
		virtual void TSyncGroup3 < forceKill();        // _0C
		virtual void TSyncGroup3 < fade();             // _10
		virtual void TSyncGroup3 < startDemoDrawOff(); // _14
		virtual void TSyncGroup3 < endDemoDrawOn();    // _18

		// _00 VTBL
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TNewkurageHire : public TChaseMtx > {

	// _00 VTBL
};
} // namespace efx

#endif
