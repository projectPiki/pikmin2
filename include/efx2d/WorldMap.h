#ifndef _EFX2D_WORLDMAP_H
#define _EFX2D_WORLDMAP_H

#include "efx2d/TChasePos.h"
#include "efx2d/TSimple.h"
#include "types.h"
#include "Vector3.h"

namespace efx2d {
namespace WorldMap {
struct ArgDirScale : public Arg {
	/**
	 * @reifiedAddress{803F80F4}
	 * @reifiedFile{plugProjectKonoU/khWorldMap.cpp}
	 */
	virtual const char* getName() // _00
	{
		return "ArgDirScale";
	}

	Vector3f _0C; // _0C
};

struct TSimple_ArgDirScale : public TSimple1 {
	virtual bool create(Arg*); // _00
};

/**
 * @size{0x18}
 */
struct T2DMapFlare : public TChasePos {
	virtual ~T2DMapFlare(); // _14

	u8 _14[8]; // _14
};

struct T2DNewmap : public TSimple2 {
	virtual bool create(Arg*); // _00
};

/**
 * @size{0x28}
 */
struct T2DOnyonKira : public TChasePosDir {
	// vtable 1
	virtual bool create(Arg*); // _00
	// vtable 2
	virtual ~T2DOnyonKira(); // _14

	void setGlobalParticleScale(float);

	Vector3f _1C; // _1C
};

struct T2DRocketA : public TSimple_ArgDirScale {
};

/**
 * @size{0x28}
 */
struct T2DRocketB : public TChasePosDir {
	// vtable 1
	virtual bool create(Arg*); // _00
	// vtable 2
	virtual ~T2DRocketB(); // _14

	void setGlobalParticleScale(float);

	Vector3f _1C;
};

/**
 * @size{0x1C}
 */
struct T2DRocketGlow : public TChasePosDir {
	// vtable 2
	virtual ~T2DRocketGlow(); // _14

	void setGlobalParticleScale(float);
};

/**
 * @size{0x18}
 */
struct T2DShstar1 : public TChasePos {
	virtual ~T2DShstar1(); // _14
};

struct T2DShstar2 : public TSimple1 {
	virtual bool create(Arg*); // _00
};
} // namespace WorldMap
} // namespace efx2d

#endif
