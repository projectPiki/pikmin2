#ifndef _EFX_TENEMYHAMON_H
#define _EFX_TENEMYHAMON_H

#include "types.h"
#include "efx/TBase.h"
#include "efx/TChasePos.h"
#include "Vector3.h"
#include "Game/enemyInfo.h"

namespace efx {

/**
 * @size = 0x14
 */
struct TEnemyHamonM : public TChasePos {
	inline TEnemyHamonM(Vector3f* position)
	    : TChasePos(PID_EnemyHamonM, position)
	{
	}

	virtual bool create(Arg*);  // _08
	virtual ~TEnemyHamonM() { } // _48 (weak)

	// _00      = VTABLE
	// _04-_14  = TChasePos
};

/**
 * @size = 0x14
 */
struct TEnemyHamonMInd : public TChasePos {
	inline TEnemyHamonMInd(Vector3f* position)
	    : TChasePos(PID_EnemyHamonMInd, position)
	{
	}

	virtual bool create(Arg*);     // _08
	virtual ~TEnemyHamonMInd() { } // _48 (weak, thunk at _1C)

	// _00      = VTABLE
	// _04-_14  = TChasePos
};

/**
 * @size = 0x2C
 */
struct TEnemyHamonChasePos : public TBase {
	inline TEnemyHamonChasePos(Vector3f* position)
	    : mHamonM(position)
	    , mHamonMInd(position)
	{
	}

	virtual bool create(Arg*); // _08
	virtual void forceKill()   // _0C (weak)
	{
		mHamonM.forceKill();
		mHamonMInd.forceKill();
	}
	virtual void fade() // _10 (weak)
	{
		mHamonM.fade();
		mHamonMInd.fade();
	}

	inline void startDemoDrawOff()
	{
		mHamonM.startDemoDrawOff();
		mHamonMInd.startDemoDrawOff();
	}

	inline void endDemoDrawOn()
	{
		mHamonM.endDemoDrawOn();
		mHamonMInd.endDemoDrawOn();
	}

	// _00      = VTABLE
	TEnemyHamonM mHamonM;       // _04
	TEnemyHamonMInd mHamonMInd; // _18
};

/**
 * @size = 0x48
 */
struct TEnemyHamon : public TBase {
	inline TEnemyHamon()
	    : mHamonChasePos(&mPosition)
	{
		mSeaHeightPtr = nullptr;
		mActive       = 0;
	}

	virtual bool create(Arg*); // _08
	virtual void forceKill()   // _0C (weak)
	{
		mHamonChasePos.forceKill();
		mActive = 0;
	}
	virtual void fade() // _10 (weak)
	{
		mHamonChasePos.fade();
		mActive = 0;
	}

	void update(Vector3f&);
	f32 getLimitDepth_();

	// _00      = VTABLE
	TEnemyHamonChasePos mHamonChasePos;       // _04
	f32* mSeaHeightPtr;                       // _30
	Vector3f mPosition;                       // _34
	u8 mActive;                               // _40
	Game::EnemyTypeID::EEnemyTypeID mEnemyID; // _44
	f32 mScale;                               // _48
};

} // namespace efx

#endif
