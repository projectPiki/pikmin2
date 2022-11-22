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
	    , m_position(position)
	{
		m_effectID = effectID;
	}

	// vtable 1: TBase
	// vtable 2: JPAEmitterCallBack + self
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TChasePos() { }                                 // _48 (weak)

	// _00		= VTBL
	// _00-_10	= TSync
	Vector3f* m_position; // _10
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

struct TChasePosPos : public TSync {
	inline TChasePosPos(u16 effectID, Vector3f* position = nullptr, Vector3f* position2 = nullptr)
	    : TSync()
	    , _10(position)
	    , _14(position2)
	{
		m_effectID = effectID;
	}

	// vtable 1 (TBase)
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TChasePosPos();                                 // _48 (weak, thunk at _1C)

	// _00		= VTBL
	// _00-_10	= TSync
	Vector3f* _10; // _10
	Vector3f* _14; // _14
};

struct TChasePosPosLocalYScale : public TSync {
	TChasePosPosLocalYScale();

	inline TChasePosPosLocalYScale(u16 effectID)
	    : TSync()
	    , _10(nullptr)
	    , _14(nullptr)
	    , _18(0.0f)
	{
		m_effectID = effectID;
	}

	// vtable 1 (TBase)
	// 		_08-_14
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TChasePosPosLocalYScale();                      // _48 (weak, thunk at _1C)

	// _00		= VTBL
	// _00-_10	= TSync
	Vector3f* _10; // _10
	Vector3f* _14; // _14
	float _18;     // _18
};

struct TChasePosPosLocalYScale2 : public TSyncGroup2<TChasePosPosLocalYScale> {
	TChasePosPosLocalYScale2(Vector3f*, Vector3f*, float, u16, u16);

	void setPosptr(Vector3f*, Vector3f*);

	// _00		= VTBL
	// _00-_3C	= TSyncGroup2<TChasePosPosLocalYScale>
};

struct TChasePosPosLocalYScale3 : public TSyncGroup3<TChasePosPosLocalYScale> {
	TChasePosPosLocalYScale3(Vector3f*, Vector3f*, float, u16, u16, u16);

	void setPosptr(Vector3f*, Vector3f*);

	// _00		= VTBL
	// _00-_58	= TSyncGroup3<TChasePosPosLocalYScale>
};

struct TChasePosPosLocalZScale : public TSync {
	TChasePosPosLocalZScale();

	inline TChasePosPosLocalZScale(u16 effectID) // probably
	    : TSync()
	    , _10(nullptr)
	    , _14(nullptr)
	    , _18(0.0f)
	{
		m_effectID = effectID;
	}

	// vtable 1 (TBase)
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TChasePosPosLocalZScale();                      // _48 (weak, thunk at _1C)

	// _00		= VTBL
	// _00-_10	= TSync
	Vector3f* _10; // _10
	Vector3f* _14; // _14
	float _18;     // _18
};

struct TChasePosPosLocalZScale2 : public TSyncGroup2<TChasePosPosLocalZScale> {
	TChasePosPosLocalZScale2(Vector3f*, Vector3f*, float, u16, u16);

	void setPosptr(Vector3f*, Vector3f*);

	// _00		= VTBL
	// _00-_3C	= TSyncGroup2<TChasePosPosLocalZScale>
};

struct TChasePosPosLocalZScale3 : public TSyncGroup3<TChasePosPosLocalZScale> {
	TChasePosPosLocalZScale3(Vector3f*, Vector3f*, float, u16, u16, u16);

	void setPosptr(Vector3f*, Vector3f*);

	// _00		= VTBL
	// _00-_58	= TSyncGroup3<TChasePosPosLocalZScale>
};

struct TChasePosYRot : public TSync {
	TChasePosYRot();

	inline TChasePosYRot(Vector3f* position, float* rotation, u16 effectID)
	    : TSync()
	    , m_position(position)
	    , m_rotation(rotation)
	{
		m_effectID = effectID;
	}

	// vtable 1 (TBase)
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TChasePosYRot() { }                             // _48 (weak, thunk at _1C)

	// _00		= VTBL
	// _00-_10	= TSync
	Vector3f* m_position; // _10
	float* m_rotation;    // _14
};

struct TChasePosYRot2 : public TSyncGroup2<TChasePosYRot> {
	TChasePosYRot2(Vector3f*, float*, u16, u16);

	void setPosptr(Vector3f*);
	void setYRot(float*);

	// _00		= VTBL
	// _00-_34	= TSyncGroup2<TChasePosYRot>
};

struct TChasePosYRot3 : public TSyncGroup3<TChasePosYRot> {
	TChasePosYRot3(Vector3f*, float*, u16, u16, u16);

	void setPosptr(Vector3f*);
	void setYRot(float*);

	// _00		= VTBL
	// _00-_4C	= TSyncGroup3<TChasePosYRot>
};

} // namespace efx

#endif
