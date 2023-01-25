#ifndef _EFX2D_TSIMPLE_H
#define _EFX2D_TSIMPLE_H

#include "efx2d/Arg.h"
#include "efx2d/TBase.h"

struct JPABaseEmitter;

namespace efx2d {
struct TSimple1 : public TBase {
	TSimple1(u16 effectID, JPABaseEmitter* emitter)
	{
		mEffectIDs[0] = effectID;
		mEmitters[0]  = emitter;
	}

	inline TSimple1(u16 effectID)
	{
		mEffectIDs[0] = effectID;
		mEmitters[0]  = nullptr;
	}

	virtual bool create(Arg*); // _08
	virtual void kill() { }    // _0C (weak)
	virtual void fade() { }    // _10 (weak)

	// _00     = VTBL
	// _00-_08 = TBase
	u16 mEffectIDs[1];            // _08
	JPABaseEmitter* mEmitters[1]; // _0C
};

struct TSimple2 : public TBase {
	TSimple2(u16 effectID1, u16 effectID2)
	{
		mEffectIDs[0] = effectID1;
		mEffectIDs[1] = effectID2;
		mEmitters[0]  = nullptr;
		mEmitters[1]  = nullptr;
	}

	virtual bool create(Arg*); // _08
	virtual void kill() { }    // _0C (weak)
	virtual void fade() { }    // _10 (weak)

	// _00     = VTBL
	// _00-_08 = TBase
	u16 mEffectIDs[2];            // _08
	JPABaseEmitter* mEmitters[2]; // _0C
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

	virtual bool create(Arg*); // _08
	virtual void kill() { }    // _0C (weak)
	virtual void fade() { }    // _10 (weak)

	// _00     = VTBL
	// _00-_08 = TBase
	u16 mEffectIDs[3];            // _08
	JPABaseEmitter* mEmitters[3]; // _10
};
} // namespace efx2d

#endif
