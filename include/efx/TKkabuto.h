#ifndef _EFX_TKKABUTO_H
#define _EFX_TKKABUTO_H

#include "efx/TChasePos.h"

namespace efx {
struct TKkabutoRot : public TChasePos {
	inline TKkabutoRot(Vector3f* position = nullptr)
	    : TChasePos(PID_KKabutoRot, position)
	{
	}

	// vtable 1 (TBase)
	// vtable 2 (JPAEmitterCallBack + Self)
	virtual ~TKkabutoRot() { } // _48 (weak)

	// _00		= VTBL
	// _00-_14  = TChasePos
};

struct TKkabutoWait : public TChasePos {
	inline TKkabutoWait(Vector3f* position = nullptr)
	    : TChasePos(PID_KKabutoWait, position)
	{
	}

	// vtable 1 (TBase)
	// vtable 2 (JPAEmitterCallBack + Self)
	virtual ~TKkabutoWait() { } // _48 (weak)

	// _00		= VTBL
	// _00-_14  = TChasePos
};
} // namespace efx

#endif
