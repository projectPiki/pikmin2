#ifndef _EFX_TCHASEMTX3_H
#define _EFX_TCHASEMTX3_H

/*
    __vt__Q23efx10TChaseMtx3:
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
		virtual void TSyncGroup3 < create(Arg*);       // _08 (inline)
		virtual void TSyncGroup3 < forceKill();        // _0C (inline)
		virtual void TSyncGroup3 < fade();             // _10 (inline)
		virtual void TSyncGroup3 < startDemoDrawOff(); // _14 (inline)
		virtual void TSyncGroup3 < endDemoDrawOn();    // _18 (inline)
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TChaseMtx3 : public TChaseMtx > {

	TChaseMtx3(float (*)[4], unsigned short, unsigned short, unsigned short);
	void setMtxptr(float (*)[4]);
};
} // namespace efx

#endif
