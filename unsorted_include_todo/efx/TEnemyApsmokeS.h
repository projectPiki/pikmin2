#ifndef _EFX_TENEMYAPSMOKES_H
#define _EFX_TENEMYAPSMOKES_H

namespace efx {
struct TSimple1 {
	virtual void _00() = 0;   // _00
	virtual void forceKill(); // _04
	virtual void fade();      // _08

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct TEnemyApsmokeS : public TSimple1 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
