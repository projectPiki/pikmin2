#ifndef _EFX_TCHASEPOSPOS_H
#define _EFX_TCHASEPOSPOS_H

#include "Vector3.h"
#include "efx/TSync.h"
#include "efx/TSyncGroup.h"

namespace efx {

struct TChasePosPos : public TSync {
	inline TChasePosPos(u16 effectID, Vector3f* position = nullptr, Vector3f* position2 = nullptr)
	    : TSync()
	    , _10(position)
	    , _14(position2)
	{
		mEffectID = effectID;
	}

	// vtable 1 (TBase)
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TChasePosPos() { }                              // _48 (weak, thunk at _1C)

	inline void setPosPosptrs(Vector3f* pos1, Vector3f* pos2)
	{
		_10 = pos1;
		_14 = pos2;
	}

	// _00		= VTBL
	// _00-_10	= TSync
	Vector3f* _10; // _10
	Vector3f* _14; // _14
};

struct TChasePosPosLocalYScale : public TSync {
	TChasePosPosLocalYScale() { }

	inline TChasePosPosLocalYScale(u16 effectID)
	    : TSync()
	    , mPosListStart(nullptr)
	    , mPosListEnd(nullptr)
	    , mYScale(0.0f)
	{
		mEffectID = effectID;
	}

	inline TChasePosPosLocalYScale(u16 effectID, f32 scale)
	    : TSync()
	    , mPosListStart(nullptr)
	    , mPosListEnd(nullptr)
	    , mYScale(scale)
	{
		mEffectID = effectID;
	}

	inline void setPosPosPtr(Vector3f* pos1, Vector3f* pos2)
	{
		mPosListStart = pos1;
		mPosListEnd   = pos2;
	}

	// vtable 1 (TBase)
	// 		_08-_14
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TChasePosPosLocalYScale() { }                   // _48 (weak, thunk at _1C)

	// _00		= VTBL
	// _00-_10	= TSync
	Vector3f* mPosListStart; // _10
	Vector3f* mPosListEnd;   // _14
	f32 mYScale;             // _18
};

struct TChasePosPosLocalYScale2 : public TSyncGroup2<TChasePosPosLocalYScale> {
	TChasePosPosLocalYScale2(Vector3f*, Vector3f*, f32, u16, u16);

	void setPosptr(Vector3f*, Vector3f*);

	// _00		= VTBL
	// _00-_3C	= TSyncGroup2<TChasePosPosLocalYScale>
};

struct TChasePosPosLocalYScale3 : public TSyncGroup3<TChasePosPosLocalYScale> {
	TChasePosPosLocalYScale3(Vector3f*, Vector3f*, f32, u16, u16, u16);

	void setPosptr(Vector3f*, Vector3f*);

	// _00		= VTBL
	// _00-_58	= TSyncGroup3<TChasePosPosLocalYScale>
};

struct TChasePosPosLocalZScale : public TSync {
	TChasePosPosLocalZScale() { }

	inline TChasePosPosLocalZScale(u16 effectID) // probably
	    : mPosPtrA(nullptr)
	    , mPosPtrB(nullptr)
	    , mZScale(0.0f)
	{
		mEffectID = effectID;
	}

	inline TChasePosPosLocalZScale(u16 effectID, f32 scale) // probably
	    : mPosPtrA(nullptr)
	    , mPosPtrB(nullptr)
	    , mZScale(scale)
	{
		mEffectID = effectID;
	}

	// vtable 1 (TBase)
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TChasePosPosLocalZScale() { }                   // _48 (weak, thunk at _1C)

	inline void setPosPtrs(Vector3f* posA, Vector3f* posB)
	{
		mPosPtrA = posA;
		mPosPtrB = posB;
	}

	// _00		= VTBL
	// _00-_10	= TSync
	Vector3f* mPosPtrA; // _10
	Vector3f* mPosPtrB; // _14
	f32 mZScale;        // _18
};

struct TChasePosPosLocalZScale2 : public TSyncGroup2<TChasePosPosLocalZScale> {
	TChasePosPosLocalZScale2(Vector3f*, Vector3f*, f32, u16, u16);

	void setPosptr(Vector3f*, Vector3f*);

	// _00		= VTBL
	// _00-_3C	= TSyncGroup2<TChasePosPosLocalZScale>
};

struct TChasePosPosLocalZScale3 : public TSyncGroup3<TChasePosPosLocalZScale> {
	TChasePosPosLocalZScale3(Vector3f*, Vector3f*, f32, u16, u16, u16);

	void setPosptr(Vector3f*, Vector3f*);

	// _00		= VTBL
	// _00-_58	= TSyncGroup3<TChasePosPosLocalZScale>
};

} // namespace efx

#endif
