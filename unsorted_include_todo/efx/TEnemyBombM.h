#ifndef _EFX_TENEMYBOMBM_H
#define _EFX_TENEMYBOMBM_H

/*
    __vt__Q23efx11TEnemyBombM:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx11TEnemyBombMFPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple4Fv
    .4byte fade__Q23efx8TSimple4Fv
*/

namespace efx {
struct TSimple4 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct TEnemyBombM : public TSimple4 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
