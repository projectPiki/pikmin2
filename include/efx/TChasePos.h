#ifndef _EFX_TCHASEPOS_H
#define _EFX_TCHASEPOS_H

#include "Vector3.h"
#include "efx/TSync.h"
#include "efx/TSyncGroup.h"

namespace efx {
struct TChasePos : public TSync {
	TChasePos();
	inline TChasePos(u16 effectID, Vector3f* position = nullptr)
	    : TSync()
	    , m_position(position)
	{
		m_effectID = effectID;
	}

	// vtable 1: TBase
	// 		_08-_14
	// vtable 2: JPAEmitterCallBack + self
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TChasePos() { }                                 // _48 (weak)

	Vector3f* m_position; // _10
};

struct TChasePos2 : public TSyncGroup2<TChasePos> {
	TChasePos2(Vector3f*, u16, u16);

	void setPosptr(Vector3f*);
};

struct TChasePos3 : public TSyncGroup3<TChasePos> {
	TChasePos3(Vector3f*, u16, u16, u16);

	void setPosptr(Vector3f*);
};

struct TChasePos4 : public TSyncGroup4<TChasePos> {
	TChasePos4(Vector3f*, u16, u16, u16, u16);

	void setPosptr(Vector3f*);
};

struct TChasePosPos : public TSync {

	// vtable 1 (TBase)
	// 		_08-_14
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TChasePosPos();                                 // _48 (weak, thunk at _1C)

	Vector3f* _10; // _10
	Vector3f* _14; // _14
};

struct TChasePosPosLocalYScale : public TSync {
	TChasePosPosLocalYScale();

	// vtable 1 (TBase)
	// 		_08-_14
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TChasePosPosLocalYScale();                      // _48 (weak, thunk at _1C)

	Vector3f* _10; // _10
	Vector3f* _14; // _14
	float _18;     // _18
};

struct TChasePosPosLocalYScale2 : public TSyncGroup2<TChasePosPosLocalYScale> {
	TChasePosPosLocalYScale2(Vector3f*, Vector3f*, float, u16, u16);

	void setPosptr(Vector3f*, Vector3f*);
};

struct TChasePosPosLocalYScale3 : public TSyncGroup3<TChasePosPosLocalYScale> {
	TChasePosPosLocalYScale3(Vector3f*, Vector3f*, float, u16, u16, u16);

	void setPosptr(Vector3f*, Vector3f*);
};

struct TChasePosPosLocalZScale : public TSync {
	TChasePosPosLocalZScale();

	// vtable 1 (TBase)
	// 		_08-_14
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TChasePosPosLocalZScale();                      // _48 (weak, thunk at _1C)

	Vector3f* _10; // _10
	Vector3f* _14; // _14
	float _18;     // _18
};

struct TChasePosPosLocalZScale2 : public TSyncGroup2<TChasePosPosLocalZScale> {
	TChasePosPosLocalZScale2(Vector3f*, Vector3f*, float, u16, u16);

	void setPosptr(Vector3f*, Vector3f*);
};

struct TChasePosPosLocalZScale3 : public TSyncGroup3<TChasePosPosLocalZScale> {
	TChasePosPosLocalZScale3(Vector3f*, Vector3f*, float, u16, u16, u16);

	void setPosptr(Vector3f*, Vector3f*);
};

struct TChasePosYRot : public TSync {
	TChasePosYRot();

	// vtable 1 (TBase)
	// 		_08-_14
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TChasePosYRot();                                // _48 (weak, thunk at _1C)

	Vector3f* m_position; // _10
	float* m_rotation;    // _14
};

struct TChasePosYRot2 : public TSyncGroup2<TChasePosYRot> {
	TChasePosYRot2(Vector3f*, float*, u16, u16);
	void setPosptr(Vector3f*);
	void setYRot(float*);
};

struct TChasePosYRot3 : public TSyncGroup3<TChasePosYRot> {
	TChasePosYRot3(Vector3f*, float*, u16, u16, u16);
	void setPosptr(Vector3f*);
	void setYRot(float*);
};

} // namespace efx

#endif
