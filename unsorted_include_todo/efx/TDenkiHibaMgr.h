#ifndef _EFX_TDENKIHIBAMGR_H
#define _EFX_TDENKIHIBAMGR_H

namespace efx {
struct TDenkiHibaMgr {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
