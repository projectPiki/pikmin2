#ifndef _EFX2D_TBASE_H
#define _EFX2D_TBASE_H

/*
    __vt__Q25efx2d5TBase:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte setGroup__Q25efx2d5TBaseFUc
*/

namespace efx2d {
struct TBase {
	virtual void _00() = 0;               // _00
	virtual void _04() = 0;               // _04
	virtual void _08() = 0;               // _08
	virtual void setGroup(unsigned char); // _0C

	// _00 VTBL
};
} // namespace efx2d

#endif
