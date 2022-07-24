#ifndef _EFX_TCURSOR_H
#define _EFX_TCURSOR_H

/*
    __vt__Q23efx7TCursor:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx7TCursorFPQ23efx3Arg
    .4byte forceKill__Q23efx7TCursorFv
    .4byte fade__Q23efx7TCursorFv
*/

namespace efx {
struct TCursor {
	virtual void create(Arg*); // _08
	virtual void forceKill();  // _0C
	virtual void fade();       // _10

	// _00 VTBL
};
} // namespace efx

#endif
