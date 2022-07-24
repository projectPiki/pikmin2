#ifndef _EFX_TUJINKOHD_IMO_H
#define _EFX_TUJINKOHD_IMO_H

/*
    __vt__Q23efx13TUjinkoHd_Imo:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx13TUjinkoHd_ImoFPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple2Fv
    .4byte fade__Q23efx8TSimple2Fv
*/

namespace efx {
struct TSimple2 {
	virtual void create(Arg*); // _08
	virtual void forceKill();  // _0C (inline)
	virtual void fade();       // _10 (inline)
};
} // namespace efx

namespace efx {
struct TUjinkoHd_Imo : public TSimple2 {
	virtual void create(Arg*); // _08
};
} // namespace efx

#endif
