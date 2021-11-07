#ifndef _EFX_TBOMBROCK_H
#define _EFX_TBOMBROCK_H

namespace efx {
struct TBombrock {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
