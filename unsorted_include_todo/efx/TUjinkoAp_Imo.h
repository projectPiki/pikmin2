#ifndef _EFX_TUJINKOAP_IMO_H
#define _EFX_TUJINKOAP_IMO_H

/*
    __vt__Q23efx13TUjinkoAp_Imo:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx13TUjinkoAp_ImoFPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple2Fv
    .4byte fade__Q23efx8TSimple2Fv
*/

namespace efx {
struct TSimple2 {
	virtual void create(Arg*); // _08
	virtual void forceKill();  // _0C (weak)
	virtual void fade();       // _10 (weak)
};
} // namespace efx

namespace efx {
struct TUjinkoAp_Imo : public TSimple2 {
	virtual void create(Arg*); // _08
};
} // namespace efx

#endif
