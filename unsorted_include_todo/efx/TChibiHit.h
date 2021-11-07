#ifndef _EFX_TCHIBIHIT_H
#define _EFX_TCHIBIHIT_H

namespace efx {
struct TSimple4 {
	virtual void _00() = 0;   // _00
	virtual void forceKill(); // _04
	virtual void fade();      // _08

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct TChibiHit : public TSimple4 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08
	virtual void _0C() = 0;    // _0C

	// _00 VTBL
};
} // namespace efx

#endif
