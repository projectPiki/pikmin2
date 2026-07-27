#ifndef _EFX_TCHASEPOSYROT_H
#define _EFX_TCHASEPOSYROT_H

#include "Vector3.h"
#include "efx/TSync.h"
#include "efx/TSyncGroup.h"

namespace efx {

struct TChasePosYRot : public TSync {
	TChasePosYRot() { }

	inline TChasePosYRot(Vector3f* position, f32* rotation, u16 effectID)
	    : TSync()
	    , mPosition(position)
	    , mRotation(rotation)
	{
		mEffectID = effectID;
	}

	// vtable 1 (TBase)
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TChasePosYRot() { }                             // _48 (weak, thunk at _1C)

	// _00		= VTBL
	// _00-_10	= TSync
	Vector3f* mPosition; // _10
	f32* mRotation;      // _14
};

struct TChasePosYRot2 : public TSyncGroup2<TChasePosYRot> {
	TChasePosYRot2(Vector3f*, f32*, u16, u16);

	void setPosptr(Vector3f*);
	void setYRot(f32*);

	// _00		= VTBL
	// _00-_34	= TSyncGroup2<TChasePosYRot>
};

struct TChasePosYRot3 : public TSyncGroup3<TChasePosYRot> {
	TChasePosYRot3(Vector3f*, f32*, u16, u16, u16);

	void setPosptr(Vector3f*);
	void setYRot(f32*);

	// _00		= VTBL
	// _00-_4C	= TSyncGroup3<TChasePosYRot>
};

} // namespace efx

#endif
