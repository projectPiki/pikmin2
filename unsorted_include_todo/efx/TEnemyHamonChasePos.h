#ifndef _EFX_TENEMYHAMONCHASEPOS_H
#define _EFX_TENEMYHAMONCHASEPOS_H

/*
    __vt__Q23efx19TEnemyHamonChasePos:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx19TEnemyHamonChasePosFPQ23efx3Arg
    .4byte forceKill__Q23efx19TEnemyHamonChasePosFv
    .4byte fade__Q23efx19TEnemyHamonChasePosFv
*/

namespace efx {
struct TEnemyHamonChasePos {
	virtual void create(Arg*); // _08
	virtual void forceKill();  // _0C (inline)
	virtual void fade();       // _10 (inline)
};
} // namespace efx

#endif
