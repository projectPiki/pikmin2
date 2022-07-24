#ifndef _EFX2D_WORLDMAP_TSIMPLE_ARGDIRSCALE_H
#define _EFX2D_WORLDMAP_TSIMPLE_ARGDIRSCALE_H

/*
    __vt__Q35efx2d8WorldMap19TSimple_ArgDirScale:
    .4byte 0
    .4byte 0
    .4byte create__Q35efx2d8WorldMap19TSimple_ArgDirScaleFPQ25efx2d3Arg
    .4byte kill__Q25efx2d8TSimple1Fv
    .4byte fade__Q25efx2d8TSimple1Fv
    .4byte setGroup__Q25efx2d5TBaseFUc
*/

namespace efx2d {
struct TSimple1 {
	virtual void create(Arg*); // _08
	virtual void kill();       // _0C (inline)
	virtual void fade();       // _10 (inline)
};
} // namespace efx2d

namespace efx2d {
struct TBase {
	virtual void create(Arg*);            // _08
	virtual void _0C() = 0;               // _0C
	virtual void _10() = 0;               // _10
	virtual void setGroup(unsigned char); // _14 (inline)
};
} // namespace efx2d

namespace efx2d {
namespace WorldMap {
struct TSimple_ArgDirScale : public TSimple1, public TBase {
	virtual void create(Arg*); // _08
};
} // namespace WorldMap
} // namespace efx2d

#endif
