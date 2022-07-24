#ifndef _EFX_TENEMYBOMBS_H
#define _EFX_TENEMYBOMBS_H

/*
    __vt__Q23efx11TEnemyBombS:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx11TEnemyBombSFPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple4Fv
    .4byte fade__Q23efx8TSimple4Fv
*/

namespace efx {
struct TSimple4 {
	virtual void create(Arg*); // _08
	virtual void forceKill();  // _0C (inline)
	virtual void fade();       // _10 (inline)
};
} // namespace efx

namespace efx {
struct TEnemyBombS : public TSimple4 {
	virtual void create(Arg*); // _08
};
} // namespace efx

#endif
