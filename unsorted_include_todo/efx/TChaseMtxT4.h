#ifndef _EFX_TCHASEMTXT4_H
#define _EFX_TCHASEMTXT4_H

/*
    __vt__Q23efx11TChaseMtxT4:
    .4byte 0
    .4byte 0
    .4byte "create__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>FPQ23efx3Arg"
    .4byte "forceKill__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv"
    .4byte "fade__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv"
    .4byte "startDemoDrawOff__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv"
    .4byte "endDemoDrawOn__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv"
*/

namespace efx {
namespace TSyncGroup4 < efx
{
	struct TChaseMtxT >
	{
		virtual void TSyncGroup4 < create(Arg*);       // _08 (inline)
		virtual void TSyncGroup4 < forceKill();        // _0C (inline)
		virtual void TSyncGroup4 < fade();             // _10 (inline)
		virtual void TSyncGroup4 < startDemoDrawOff(); // _14 (inline)
		virtual void TSyncGroup4 < endDemoDrawOn();    // _18 (inline)
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TChaseMtxT4 : public TChaseMtxT > {

	TChaseMtxT4();
	void setMtxptr(float (*)[4]);
};
} // namespace efx

#endif
