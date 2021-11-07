#ifndef _EFX_TCURSOR_H
#define _EFX_TCURSOR_H

namespace efx {
struct TCursor {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
