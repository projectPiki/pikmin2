#ifndef _EFX_TCHASEPOS_H
#define _EFX_TCHASEPOS_H

#include "Vector3.h"
#include "efx/TSync.h"
#include "efx/TSyncGroup.h"

namespace efx {
struct TChasePos : public TSync {
	TChasePos()
	    : TSync()
	{
	}

	inline TChasePos(u16 effectID, Vector3f* position = nullptr)
	    : TSync()
	    , mPosition(position)
	{
		mEffectID = effectID;
	}

	inline TChasePos(Vector3f* position, u16 effectID)
	    : TSync()
	    , mPosition(position)
	{
		mEffectID = effectID;
	}

	// vtable 1: TBase
	// vtable 2: JPAEmitterCallBack + self
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TChasePos() { }                                 // _48 (weak)

	// _00		= VTBL
	// _00-_10	= TSync
	Vector3f* mPosition; // _10
};

struct TChasePos2 : public TSyncGroup2<TChasePos> {
	TChasePos2(Vector3f*, u16, u16);

	void setPosptr(Vector3f*);

	// _00		= VTBL
	// _00-_2C	= TSyncGroup2<TChasePos>
};

struct TChasePos3 : public TSyncGroup3<TChasePos> {
	TChasePos3(Vector3f*, u16, u16, u16);

	void setPosptr(Vector3f*);

	// _00		= VTBL
	// _00-_40	= TSyncGroup3<TChasePos>
};

struct TChasePos4 : public TSyncGroup4<TChasePos> {
	TChasePos4(Vector3f*, u16, u16, u16, u16);

	void setPosptr(Vector3f*);

	// _00		= VTBL
	// _00-_54	= TSyncGroup4<TChasePos>
};
} // namespace efx

#endif
