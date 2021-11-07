#ifndef _EFX_TKCHAPWAT_H
#define _EFX_TKCHAPWAT_H

namespace efx {
struct TSimple5 {
	virtual void _00() = 0;   // _00
	virtual void forceKill(); // _04
	virtual void fade();      // _08

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct TKchApWat : public TSimple5 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
