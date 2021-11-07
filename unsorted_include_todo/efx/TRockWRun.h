#ifndef _EFX_TROCKWRUN_H
#define _EFX_TROCKWRUN_H

namespace efx {
struct TRockWRun {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
