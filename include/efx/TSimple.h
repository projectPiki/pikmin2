#ifndef _EFX_TSIMPLE_H
#define _EFX_TSIMPLE_H

#include "ParticleMgr.h"
#include "efx/Arg.h"
#include "efx/TBase.h"

struct JPABaseEmitter;

namespace efx {
struct TSimple1 : public TBase {
	TSimple1(u16 effectID)
	{
		mEffectIDs[0] = effectID;
		mEmitters[0]  = nullptr;
	}

	TSimple1(u16 effectID, JPABaseEmitter* emitter)
	{
		mEffectIDs[0] = effectID;
		mEmitters[0]  = emitter;
	}

	virtual bool create(Arg*);   // _08
	virtual void forceKill() { } // _0C (weak)
	virtual void fade() { }      // _10 (weak)

	// _00 VTBL
	u16 mEffectIDs[1];            // _04
	JPABaseEmitter* mEmitters[1]; // _08
};

struct TSimple2 : public TBase {
	TSimple2(u16 effectID1, u16 effectID2)
	{
		mEffectIDs[0] = effectID1;
		mEffectIDs[1] = effectID2;
		mEmitters[0]  = nullptr;
		mEmitters[1]  = nullptr;
	}
	virtual bool create(Arg*);   // _08
	virtual void forceKill() { } // _0C (weak)
	virtual void fade() { }      // _10 (weak)

	// _00 VTBL
	u16 mEffectIDs[2];            // _04
	JPABaseEmitter* mEmitters[2]; // _08
};

struct TSimple3 : public TBase {
	TSimple3(u16 effectID1, u16 effectID2, u16 effectID3)
	{
		mEffectIDs[0] = effectID1;
		mEffectIDs[1] = effectID2;
		mEffectIDs[2] = effectID3;
		mEmitters[0]  = nullptr;
		mEmitters[1]  = nullptr;
		mEmitters[2]  = nullptr;
	}

	virtual bool create(Arg*);   // _08
	virtual void forceKill() { } // _0C (weak)
	virtual void fade() { }      // _10 (weak)

	// _00 VTBL
	u16 mEffectIDs[3];            // _04
	JPABaseEmitter* mEmitters[3]; // _0C
};

struct TSimple4 : public TBase {
	TSimple4(u16 effectID1, u16 effectID2, u16 effectID3, u16 effectID4)
	{
		mEffectIDs[0] = effectID1;
		mEffectIDs[1] = effectID2;
		mEffectIDs[2] = effectID3;
		mEffectIDs[3] = effectID4;
		mEmitters[0]  = nullptr;
		mEmitters[1]  = nullptr;
		mEmitters[2]  = nullptr;
		mEmitters[3]  = nullptr;
	}

	virtual bool create(Arg*);   // _08
	virtual void forceKill() { } // _0C (weak)
	virtual void fade() { }      // _10 (weak)

	/**
	 * @fabricated
	 */
	bool _create(Arg& arg)
	{
		// Vector3f& position = arg.mPosition;
		for (int i = 0; i < 4; i++) {
			mEmitters[i] = particleMgr->create(mEffectIDs[i], arg.mPosition, 0);
			// mEmitters[i] = particleMgr->create(mEffectIDs[i], position, 0);
			if (mEmitters[i]) {
				mEmitters[i]->mEmitterCallback = &mCallBack_StaticClipping;
			} else {
				return false;
			}
		}
		return true;
	}

	// _00 VTBL
	u16 mEffectIDs[4];            // _04
	JPABaseEmitter* mEmitters[4]; // _0C
};

struct TSimple5 : public TBase {
	TSimple5(u16 effectID1, u16 effectID2, u16 effectID3, u16 effectID4, u16 effectID5)
	{
		mEffectIDs[0] = effectID1;
		mEffectIDs[1] = effectID2;
		mEffectIDs[2] = effectID3;
		mEffectIDs[3] = effectID4;
		mEffectIDs[4] = effectID5;
		mEmitters[0]  = nullptr;
		mEmitters[1]  = nullptr;
		mEmitters[2]  = nullptr;
		mEmitters[3]  = nullptr;
		mEmitters[4]  = nullptr;
	}

	virtual bool create(Arg*);   // _08
	virtual void forceKill() { } // _0C (weak)
	virtual void fade() { }      // _10 (weak)

	// _00 VTBL
	u16 mEffectIDs[5];            // _04
	JPABaseEmitter* mEmitters[5]; // _10
};
} // namespace efx

#endif
