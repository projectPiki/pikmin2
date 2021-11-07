#ifndef _EFX_TTANKWAT_H
#define _EFX_TTANKWAT_H

namespace efx {
struct TTankWat {
	virtual void create(Arg*);       // _00
	virtual void forceKill();        // _04
	virtual void fade();             // _08
	virtual void startDemoDrawOff(); // _0C
	virtual void endDemoDrawOn();    // _10

	// _00 VTBL
};
} // namespace efx

#endif
