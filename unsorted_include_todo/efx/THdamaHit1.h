#ifndef _EFX_THDAMAHIT1_H
#define _EFX_THDAMAHIT1_H

namespace efx {
struct TSimple5 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

namespace efx {
struct THdamaHit1 : public TSimple5 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
