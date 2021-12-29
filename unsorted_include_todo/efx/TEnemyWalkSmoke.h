#ifndef _EFX_TENEMYWALKSMOKE_H
#define _EFX_TENEMYWALKSMOKE_H

/*
    __vt__Q23efx15TEnemyWalkSmoke:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx15TEnemyWalkSmokeFPQ23efx3Arg
    .4byte forceKill__Q23efx15TEnemyWalkSmokeFv
    .4byte fade__Q23efx15TEnemyWalkSmokeFv
*/

namespace efx {
struct TEnemyWalkSmoke {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
