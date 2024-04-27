#ifndef _EFX_TROCK_H
#define _EFX_TROCK_H

#include "efx/TSimple.h"
#include "efx/TChasePos.h"

namespace efx {
struct TRockDead : public TSimple3 {
	inline TRockDead()
	    : TSimple3(PID_RockDead_1, PID_RockDead_2, PID_RockDead_3)
	{
	}

	// _00     = VTBL
	// _00-_18 = TSimple3
};

struct TRockGrRun : public TChasePos {
	inline TRockGrRun()
	    : TChasePos(PID_RockGrRun, nullptr)
	{
	}

	virtual ~TRockGrRun() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChasePos
};

struct TRockRun : public TChasePos {
	inline TRockRun()
	    : TChasePos(PID_RockRun, nullptr)
	{
	}

	virtual ~TRockRun() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChasePos
};

struct TRockWRunChasePos : public TChasePos3 {
	inline TRockWRunChasePos(Vector3f* pos)
	    : TChasePos3(pos, PID_RockWRunChasePos_1, PID_RockWRunChasePos_2, PID_RockWRunChasePos_3)
	{
	}

	// _00     = VTBL
	// _00-_40 = TChasePos3
};

struct TRockWRun : public TBase {
	inline TRockWRun()
	    : mChasePos(&mPosition)
	    , mIsActive(false)
	{
	}

	virtual bool create(Arg*) // _08 (weak)
	{
		mIsActive = true;
		return true;
	}
	virtual void forceKill() // _0C (weak)
	{
		mChasePos.forceKill();
		mIsActive = false;
	}
	virtual void fade() // _10 (weak)
	{
		mChasePos.fade();
		mIsActive = false;
	}

	// _00 VTBL
	TRockWRunChasePos mChasePos; // _04
	f32 mSeaHeight;              // _44, might be part of TRockWRunChasePos
	Vector3f mPosition;          // _48
	bool mIsActive;              // _54
};

} // namespace efx

#endif
