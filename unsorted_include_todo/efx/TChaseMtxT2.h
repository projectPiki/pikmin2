#ifndef _EFX_TCHASEMTXT2_H
#define _EFX_TCHASEMTXT2_H

/*
    __vt__Q23efx11TChaseMtxT2:
    .4byte 0
    .4byte 0
    .4byte "create__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>FPQ23efx3Arg"
    .4byte "forceKill__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
    .4byte "fade__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
    .4byte "startDemoDrawOff__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
    .4byte "endDemoDrawOn__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"
*/

namespace efx {
namespace TSyncGroup2 < efx
{
	struct TChaseMtxT >
	{
		virtual void TSyncGroup2 < create(Arg*);       // _08 (inline)
		virtual void TSyncGroup2 < forceKill();        // _0C (inline)
		virtual void TSyncGroup2 < fade();             // _10 (inline)
		virtual void TSyncGroup2 < startDemoDrawOff(); // _14 (inline)
		virtual void TSyncGroup2 < endDemoDrawOn();    // _18 (inline)
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TChaseMtxT2 : public TChaseMtxT > {

	TChaseMtxT2(float (*)[4], unsigned short, unsigned short);
	void setMtxptr(float (*)[4]);
};
} // namespace efx

#endif
