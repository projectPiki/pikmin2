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
	virtual void forceKill();   // _0C (weak)
	virtual void fade();        // _10 (weak)
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
	    : m_hamonM(position)
	    , m_hamonMInd(position)
	{
	}

	virtual bool create(Arg*); // _08
	virtual void forceKill()   // _0C (weak)
	{
		m_hamonM.forceKill();
		m_hamonMInd.forceKill();
	}
	virtual void fade() // _10 (weak)
	{
		m_hamonM.fade();
		m_hamonMInd.fade();
	}

	// _00      = VTABLE
	TEnemyHamonM m_hamonM;       // _04
	TEnemyHamonMInd m_hamonMInd; // _18
};

/**
 * @size = 0x48
 */
struct TEnemyHamon : public TBase {
	inline TEnemyHamon()
	    : m_hamonChasePos(&_34)
	{
		m_seaHeightPtr = nullptr;
		_40            = 0;
	}

	virtual bool create(Arg*); // _08
	virtual void forceKill()   // _0C (weak)
	{
		m_hamonChasePos.forceKill();
		_40 = 0;
	}
	virtual void fade() // _10 (weak)
	{
		m_hamonChasePos.fade();
		_40 = 0;
	}

	void update(Vector3f&);
	void getLimitDepth_();

	// _00      = VTABLE
	TEnemyHamonChasePos m_hamonChasePos; // _04
	f32* m_seaHeightPtr;                 // _30
	Vector3f _34;                        // _34
	u8 _40;                              // _40
	Game::EnemyTypeID m_enemyID;         // _44
};

} // namespace efx

#endif
