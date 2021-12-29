#ifndef _EFX_TSIMPLE5_H
#define _EFX_TSIMPLE5_H

/*
    __vt__Q23efx8TSimple5:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx8TSimple5FPQ23efx3Arg
    .4byte forceKill__Q23efx8TSimple5Fv
    .4byte fade__Q23efx8TSimple5Fv
*/

namespace efx {
struct TSimple5 {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
