#ifndef _EFX2D_WORLDMAP_T2DROCKETA_H
#define _EFX2D_WORLDMAP_T2DROCKETA_H

namespace efx2d {
namespace WorldMap {
	struct TSimple_ArgDirScale {
		virtual void create(Arg*); // _00

		// _00 VTBL
	};
} // namespace WorldMap
} // namespace efx2d

namespace efx2d {
struct TSimple1 {
	virtual void _00() = 0; // _00
	virtual void kill();    // _04
	virtual void fade();    // _08

	// _00 VTBL
};
} // namespace efx2d

namespace efx2d {
struct TBase {
	virtual void _00() = 0;               // _00
	virtual void _04() = 0;               // _04
	virtual void _08() = 0;               // _08
	virtual void setGroup(unsigned char); // _0C

	// _00 VTBL
};
} // namespace efx2d

namespace efx2d {
namespace WorldMap {
	struct T2DRocketA : public TSimple_ArgDirScale,
	                    public TSimple1,
	                    public TBase {
		virtual void create(Arg*);            // _00
		virtual void kill();                  // _04
		virtual void fade();                  // _08
		virtual void setGroup(unsigned char); // _0C

		// _00 VTBL
	};
} // namespace WorldMap
} // namespace efx2d

#endif
