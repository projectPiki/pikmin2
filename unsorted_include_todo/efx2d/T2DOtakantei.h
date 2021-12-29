#ifndef _EFX2D_T2DOTAKANTEI_H
#define _EFX2D_T2DOTAKANTEI_H

/*
    __vt__Q25efx2d12T2DOtakantei:
    .4byte 0
    .4byte 0
    .4byte create__Q25efx2d9TForeverNFPQ25efx2d3Arg
    .4byte kill__Q25efx2d9TForeverNFv
    .4byte fade__Q25efx2d9TForeverNFv
    .4byte setGroup__Q25efx2d9TForeverNFUc
*/

namespace efx2d {
struct TForeverN {
	virtual void create(Arg*);            // _00
	virtual void kill();                  // _04
	virtual void fade();                  // _08
	virtual void setGroup(unsigned char); // _0C

	// _00 VTBL
};
} // namespace efx2d

namespace efx2d {
struct T2DOtakantei : public TForeverN {
	virtual void create(Arg*);            // _00
	virtual void kill();                  // _04
	virtual void fade();                  // _08
	virtual void setGroup(unsigned char); // _0C

	// _00 VTBL
};
} // namespace efx2d

#endif
