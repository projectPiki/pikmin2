#ifndef _EFX_TKOGANEDIVE_H
#define _EFX_TKOGANEDIVE_H

/*
    __vt__Q23efx11TKoganeDive:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx11TKoganeDiveFPQ23efx3Arg
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
struct TKoganeDive : public TSimple2 {
	virtual void create(Arg*); // _08
};
} // namespace efx

#endif
