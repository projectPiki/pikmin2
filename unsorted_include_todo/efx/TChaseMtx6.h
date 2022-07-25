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
		virtual void TSyncGroup6 < create(Arg*);       // _08 (weak)
		virtual void TSyncGroup6 < forceKill();        // _0C (weak)
		virtual void TSyncGroup6 < fade();             // _10 (weak)
		virtual void TSyncGroup6 < startDemoDrawOff(); // _14 (weak)
		virtual void TSyncGroup6 < endDemoDrawOn();    // _18 (weak)
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TChaseMtx6 : public TChaseMtx > {

	TChaseMtx6(float (*)[4], unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short);
	void setMtxptr(float (*)[4]);
};
} // namespace efx

#endif
