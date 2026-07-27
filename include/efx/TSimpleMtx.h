#ifndef _EFX_TSIMPLEMTX_H
#define _EFX_TSIMPLEMTX_H

#include "efx/TSimple.h"
#include "efx/TCallBack_StaticClipping.h"

#define SET_EMITTER_CALLBACKS(I)                                                                          \
	inline bool TSimpleMtx##I::setEmitterCallbacks()                                                      \
	{                                                                                                     \
		Arg newArg;                                                                                       \
		for (int i = 0; i < I; i++) {                                                                     \
			TCallBack_StaticClipping* callback = &mCallBack_StaticClipping;                               \
			mEmitters[i]                       = particleMgr->create(mEffectIDs[i], newArg.mPosition, 0); \
                                                                                                          \
			if (mEmitters[i]) {                                                                           \
				mEmitters[i]->mEmitterCallback = callback;                                                \
                                                                                                          \
			} else {                                                                                      \
				return false;                                                                             \
			}                                                                                             \
		}                                                                                                 \
		return true;                                                                                      \
	}

struct Matrixf;

namespace efx {
struct TSimpleMtx1 : public TSimple1 {
	inline TSimpleMtx1(Matrixf* mat, u16 effectID)
	    : TSimple1(effectID)
	{
		mMtx = mat;
	}

	virtual bool create(Arg*); // _08
	// fabricated
	inline bool setEmitterCallbacks();

	// _00		= VTBL
	// _00-_0C	= TSimple1
	Matrixf* mMtx; // _0C
};

struct TSimpleMtx2 : public TSimple2 {
	inline TSimpleMtx2(Matrixf* mat, u16 effectID1, u16 effectID2)
	    : TSimple2(effectID1, effectID2)
	{
		mMtx = mat;
	}

	virtual bool create(Arg*); // _08

	// fabricated
	inline bool setEmitterCallbacks();

	// _00		= VTBL
	// _00-_10	= TSimple2
	Matrixf* mMtx; // _10
};

struct TSimpleMtx3 : public TSimple3 {
	inline TSimpleMtx3(Matrixf* mat, u16 effectID1, u16 effectID2, u16 effectID3)
	    : TSimple3(effectID1, effectID2, effectID3)
	{
		mMtx = mat;
	}

	virtual bool create(Arg*); // _08

	// fabricated
	inline bool setEmitterCallbacks();

	// _00		= VTBL
	// _00-_18	= TSimple3
	Matrixf* mMtx; // _18
};

struct TSimpleMtx4 : public TSimple4 {
	inline TSimpleMtx4(Matrixf* mat, u16 effectID1, u16 effectID2, u16 effectID3, u16 effectID4)
	    : TSimple4(effectID1, effectID2, effectID3, effectID4)
	{
		mMtx = mat;
	}

	virtual bool create(Arg*); // _08

	// fabricated
	inline bool setEmitterCallbacks();

	// _00		= VTBL
	// _00-_1C	= TSimple4
	Matrixf* mMtx; // _1C
};

SET_EMITTER_CALLBACKS(1)
SET_EMITTER_CALLBACKS(2)
SET_EMITTER_CALLBACKS(3)
SET_EMITTER_CALLBACKS(4)

} // namespace efx

#endif
