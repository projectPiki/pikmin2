#ifndef _EFX2D_WORLDMAP_H
#define _EFX2D_WORLDMAP_H

#include "efx2d/TChasePos.h"
#include "efx2d/TSimple.h"
#include "types.h"
#include "Vector3.h"

namespace efx2d {
namespace WorldMap {
struct ArgDirScale : public Arg {

	virtual const char* getName() // _08 (weak)
	{
		return "ArgDirScale";
	}

	// _00-_08 	= Vector2f
	// _08		= VTBL
	Vector3f _0C; // _0C
};

struct TSimple_ArgDirScale : public TSimple1 {
	inline TSimple_ArgDirScale(u16 effectID)
	    : TSimple1(effectID)
	{
	}

	virtual bool create(Arg*); // _08

	// _00		= VTBL
	// _00-_10	= TSimple1
};

/**
 * @size{0x18}
 */
struct T2DMapFlare : public TChasePos {
	virtual ~T2DMapFlare(); // _34 (weak)

	// _00		= VTBL
	// _00-_18	= TChasePos
	u8 _18[4]; // _18
};

struct T2DNewmap : public TSimple2 {
	inline T2DNewmap()
	    : TSimple2(PID_Newmap_1, PID_Newmap_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00		= VTBL
	// _00-_14	= TSimple2
};

/**
 * @size{0x28}
 */
struct T2DOnyonKira : public TChasePosDir {
	// vtable 1
	virtual bool create(Arg*); // _08
	// vtable 2
	virtual ~T2DOnyonKira(); // _34 (weak)

	void setGlobalParticleScale(f32);

	// _00		= VTBL
	// _00-_1C	= TChasePosDir
	Vector3f _1C; // _1C
};

struct T2DRocketA : public TSimple_ArgDirScale {
	inline T2DRocketA()
	    : TSimple_ArgDirScale(PID_RocketA)
	{
	}

	// _00		= VTBL
	// _00-_10	= TSimple_ArgDirScale
};

/**
 * @size{0x28}
 */
struct T2DRocketB : public TChasePosDir {
	// vtable 1
	virtual bool create(Arg*); // _08
	// vtable 2
	virtual ~T2DRocketB(); // _34 (weak)

	void setGlobalParticleScale(f32);

	// _00		= VTBL
	// _00-_1C	= TChasePosDir
	Vector3f _1C; // _1C
};

/**
 * @size{0x1C}
 */
struct T2DRocketGlow : public TChasePosDir {
	// vtable 2
	virtual ~T2DRocketGlow(); // _34 (weak)

	void setGlobalParticleScale(f32);

	// _00		= VTBL
	// _00-_1C	= TChasePosDir
};

/**
 * @size{0x18}
 */
struct T2DShstar1 : public TChasePos {
	virtual ~T2DShstar1(); // _34 (weak)

	// _00		= VTBL
	// _00-_18	= TChasePos
};

struct T2DShstar2 : public TSimple1 {
	inline T2DShstar2()
	    : TSimple1(PID_ShootingStar)
	{
	}

	virtual bool create(Arg*); // _08

	// _00		= VTBL
	// _00-_10	= TSimple1
};
} // namespace WorldMap
} // namespace efx2d

#endif
