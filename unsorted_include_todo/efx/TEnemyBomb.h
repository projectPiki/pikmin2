#ifndef _EFX_TENEMYBOMB_H
#define _EFX_TENEMYBOMB_H

namespace efx {
struct TEnemyBomb {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
