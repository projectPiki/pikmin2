#ifndef _EFX2D_TFOREVERN_H
#define _EFX2D_TFOREVERN_H

/*
    __vt__Q25efx2d9TForeverN:
    .4byte 0
    .4byte 0
    .4byte create__Q25efx2d9TForeverNFPQ25efx2d3Arg
    .4byte kill__Q25efx2d9TForeverNFv
    .4byte fade__Q25efx2d9TForeverNFv
    .4byte setGroup__Q25efx2d9TForeverNFUc
*/

namespace efx2d {
struct TForeverN {
	virtual void create(Arg*);            // _08
	virtual void kill();                  // _0C
	virtual void fade();                  // _10
	virtual void setGroup(unsigned char); // _14

	// _00 VTBL
};
} // namespace efx2d

#endif
