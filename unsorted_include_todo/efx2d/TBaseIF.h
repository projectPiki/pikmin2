#ifndef _EFX2D_TBASEIF_H
#define _EFX2D_TBASEIF_H

/*
    __vt__Q25efx2d7TBaseIF:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

namespace efx2d {
struct TBaseIF {
	virtual void _00() = 0; // _00
	virtual void _04() = 0; // _04
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C

	// _00 VTBL
};
} // namespace efx2d

#endif
