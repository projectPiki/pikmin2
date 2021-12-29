#ifndef _EFX_TENEMYAPSMOKE_H
#define _EFX_TENEMYAPSMOKE_H

/*
    __vt__Q23efx13TEnemyApsmoke:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx13TEnemyApsmokeFPQ23efx3Arg
    .4byte forceKill__Q23efx13TEnemyApsmokeFv
    .4byte fade__Q23efx13TEnemyApsmokeFv
*/

namespace efx {
struct TEnemyApsmoke {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
