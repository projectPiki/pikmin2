#ifndef _EFX_TENEMYHAMON_H
#define _EFX_TENEMYHAMON_H

namespace efx {
struct TEnemyHamon {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
