#ifndef _EFX_THEBIAPHD_APPEAR1_H
#define _EFX_THEBIAPHD_APPEAR1_H

namespace efx {
struct THebiAphd_base {
	virtual void create(Arg*); // _00

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct TSimple4 {
	virtual void _00() = 0;   // _00
	virtual void forceKill(); // _04
	virtual void fade();      // _08

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct THebiAphd_appear1 : public THebiAphd_base, public TSimple4 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
