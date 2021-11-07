#ifndef _EFX_TTANKFIRE_H
#define _EFX_TTANKFIRE_H

namespace efx {
struct TTankFire {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
