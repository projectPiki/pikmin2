#ifndef _EFX_TKURAGEBOMB_H
#define _EFX_TKURAGEBOMB_H

/*
    __vt__Q23efx11TKurageBomb:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx8TSimple2FPQ23efx3Arg
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
struct TKurageBomb : public TSimple2 {
};
} // namespace efx

#endif
