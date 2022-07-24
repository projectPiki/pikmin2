#ifndef _EFX2D_WORLDMAP_T2DNEWMAP_H
#define _EFX2D_WORLDMAP_T2DNEWMAP_H

/*
    __vt__Q35efx2d8WorldMap9T2DNewmap:
    .4byte 0
    .4byte 0
    .4byte create__Q35efx2d8WorldMap9T2DNewmapFPQ25efx2d3Arg
    .4byte kill__Q25efx2d8TSimple2Fv
    .4byte fade__Q25efx2d8TSimple2Fv
    .4byte setGroup__Q25efx2d5TBaseFUc
*/

namespace efx2d {
struct TSimple2 {
	virtual void _08() = 0; // _08
	virtual void kill();    // _0C
	virtual void fade();    // _10

	// _00 VTBL
};
} // namespace efx2d

namespace efx2d {
struct TBase {
	virtual void _08() = 0;               // _08
	virtual void _0C() = 0;               // _0C
	virtual void _10() = 0;               // _10
	virtual void setGroup(unsigned char); // _14

	// _00 VTBL
};
} // namespace efx2d

namespace efx2d {
namespace WorldMap {
struct T2DNewmap : public TSimple2, public TBase {
	virtual void create(Arg*); // _08

	// _00 VTBL
};
} // namespace WorldMap
} // namespace efx2d

#endif
