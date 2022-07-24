#ifndef _EFX_TBASE_H
#define _EFX_TBASE_H

/*
    __vt__Q23efx5TBase:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

namespace efx {
struct TBase {
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C
	virtual void _10() = 0; // _10

	// _00 VTBL
};
} // namespace efx

#endif
