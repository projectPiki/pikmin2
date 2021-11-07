#ifndef _EFX_TTANKFIREABC_H
#define _EFX_TTANKFIREABC_H

namespace efx {
struct TTankFireABC {
	virtual void create(Arg*);       // _00
	virtual void forceKill();        // _04
	virtual void fade();             // _08
	virtual void startDemoDrawOff(); // _0C
	virtual void endDemoDrawOn();    // _10

	// _00 VTBL
};
} // namespace efx

#endif
