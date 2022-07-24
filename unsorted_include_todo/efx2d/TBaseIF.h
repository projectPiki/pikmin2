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
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C
	virtual void _10() = 0; // _10
	virtual void _14() = 0; // _14
};
} // namespace efx2d

#endif
