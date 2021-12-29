#ifndef _EFX_TENEMYBOMB_H
#define _EFX_TENEMYBOMB_H

/*
    __vt__Q23efx10TEnemyBomb:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx10TEnemyBombFPQ23efx3Arg
    .4byte forceKill__Q23efx10TEnemyBombFv
    .4byte fade__Q23efx10TEnemyBombFv
*/

namespace efx {
struct TEnemyBomb {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
