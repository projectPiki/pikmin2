#ifndef _EFX_TPKGLOW2_H
#define _EFX_TPKGLOW2_H

namespace efx {
struct TSimple2 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct TPkGlow2 : public TSimple2 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08
	virtual void _0C() = 0;    // _0C

	// _00 VTBL
};
} // namespace efx

#endif
