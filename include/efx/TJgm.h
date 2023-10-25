#ifndef _EFX_TJGM_H
#define _EFX_TJGM_H

#include "efx/TChasePos.h"
#include "efx/TChaseMtx.h"
#include "efx/TSimple.h"

namespace efx {
struct TJgmAttack : public TChasePos2 {
	inline TJgmAttack(Vector3f* pos)
	    : TChasePos2(pos, PID_JgmAttack_1, PID_JgmAttack_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_2C  = TChasePos2
};

struct TJgmAttackW : public TChasePosYRot3 {
	inline TJgmAttackW(Vector3f* pos, f32* dir)
	    : TChasePosYRot3(pos, dir, PID_JgmAttackW_1, PID_JgmAttackW_2, PID_JgmAttackW_3)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_4C  = TChasePosYRot3
};

struct TJgmBack : public TChasePos {
	inline TJgmBack(Vector3f* pos)
	    : TChasePos(pos, PID_JgmBACK)
	{
	}

	virtual bool create(Arg*); // _08
	virtual ~TJgmBack() { }    // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TJgmBackW : public TChasePosYRot2 {
	inline TJgmBackW(Vector3f* pos, f32* dir)
	    : TChasePosYRot2(pos, dir, PID_JgmBACKW_1, PID_JgmBACKW_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_34  = TChasePosYRot2
};

struct TJgmBubble : public TSimple1 {
	inline TJgmBubble()
	    : TSimple1(PID_JgmBUBBLE)
	{
	}

	// _00      = VTBL
	// _00-_0C  = TSimple1
};

} // namespace efx

#endif
