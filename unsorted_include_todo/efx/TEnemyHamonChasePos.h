#ifndef _EFX_TENEMYHAMONCHASEPOS_H
#define _EFX_TENEMYHAMONCHASEPOS_H

namespace efx {
struct TEnemyHamonChasePos {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
