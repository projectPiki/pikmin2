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
	virtual void create(Arg*); // _08
	virtual void forceKill();  // _0C (weak)
	virtual void fade();       // _10 (weak)
};
} // namespace efx

#endif
