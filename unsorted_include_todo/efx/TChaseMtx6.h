#ifndef _EFX_TCHASEMTX6_H
#define _EFX_TCHASEMTX6_H

/*
    __vt__Q23efx10TChaseMtx6:
    .4byte 0
    .4byte 0
    .4byte "create__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>FPQ23efx3Arg"
    .4byte "forceKill__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
    .4byte "fade__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
    .4byte "startDemoDrawOff__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
    .4byte "endDemoDrawOn__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
*/

namespace efx {
namespace TSyncGroup6 < efx
{
	struct TChaseMtx >
	{
		virtual void TSyncGroup6 < create(Arg*);       // _00
		virtual void TSyncGroup6 < forceKill();        // _04
		virtual void TSyncGroup6 < fade();             // _08
		virtual void TSyncGroup6 < startDemoDrawOff(); // _0C
		virtual void TSyncGroup6 < endDemoDrawOn();    // _10

		// _00 VTBL
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TChaseMtx6 : public TChaseMtx > {
	virtual void TSyncGroup6 < create(Arg*);       // _00
	virtual void TSyncGroup6 < forceKill();        // _04
	virtual void TSyncGroup6 < fade();             // _08
	virtual void TSyncGroup6 < startDemoDrawOff(); // _0C
	virtual void TSyncGroup6 < endDemoDrawOn();    // _10

	// _00 VTBL
};
} // namespace efx

#endif
