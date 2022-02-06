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
	// vtable 2
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _1C
	virtual ~TChasePos();                                    // _2C

	Vector3f* m_position; // _10
};

struct TChasePos2 : public TSyncGroup2<TChasePos> {
	TChasePos2(Vector3f*, unsigned short, unsigned short);
	void setPosptr(Vector3f*);
};

struct TChasePos3 : public TSyncGroup3<TChasePos> {
	TChasePos3(Vector3f*, unsigned short, unsigned short, unsigned short);
	void setPosptr(Vector3f*);
};

struct TChasePos4 : public TSyncGroup4<TChasePos> {
	TChasePos4(Vector3f*, unsigned short, unsigned short, unsigned short, unsigned short);
	void setPosptr(Vector3f*);
};

struct TChasePosPos : public TSync {
	// vtable 2
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _1C
	virtual ~TChasePosPos();                                 // _2C (thunk at _00)

	Vector3f* _10; // _10
	Vector3f* _14; // _14
};

struct TChasePosPosLocalYScale : public TSync {
	TChasePosPosLocalYScale();

	// vtable 2
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _1C
	virtual ~TChasePosPosLocalYScale();                      // _2C (thunk at _00)

	Vector3f* _10; // _10
	Vector3f* _14; // _14
	float _18;     // _18
};

struct TChasePosPosLocalYScale2 : public TSyncGroup2<TChasePosPosLocalYScale> {
	TChasePosPosLocalYScale2(Vector3f*, Vector3f*, float, unsigned short, unsigned short);
	void setPosptr(Vector3f*, Vector3f*);
};

struct TChasePosPosLocalYScale3 : public TSyncGroup3<TChasePosPosLocalYScale> {
	TChasePosPosLocalYScale3(Vector3f*, Vector3f*, float, unsigned short, unsigned short, unsigned short);
	void setPosptr(Vector3f*, Vector3f*);
};

struct TChasePosPosLocalZScale : public TSync {
	TChasePosPosLocalZScale();
	// vtable 2
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _1C
	virtual ~TChasePosPosLocalZScale();                      // _2C (thunk at _00)

	Vector3f* _10; // _10
	Vector3f* _14; // _14
	float _18;     // _18
};

struct TChasePosPosLocalZScale2 : public TSyncGroup2<TChasePosPosLocalZScale> {
	TChasePosPosLocalZScale2(Vector3f*, Vector3f*, float, unsigned short, unsigned short);
	void setPosptr(Vector3f*, Vector3f*);
};

struct TChasePosPosLocalZScale3 : public TSyncGroup3<TChasePosPosLocalZScale> {
	TChasePosPosLocalZScale3(Vector3f*, Vector3f*, float, unsigned short, unsigned short, unsigned short);
	void setPosptr(Vector3f*, Vector3f*);
};

struct TChasePosYRot : public TSync {
	TChasePosYRot();
	// vtable 2
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _1C
	virtual ~TChasePosYRot();                                // _2C (thunk at _00)

	Vector3f* m_position; // _10
	float* m_rotation;    // _14
};

struct TChasePosYRot2 : public TSyncGroup2<TChasePosYRot> {
	TChasePosYRot2(Vector3f*, float*, unsigned short, unsigned short);
	void setPosptr(Vector3f*);
	void setYRot(float*);
};

struct TChasePosYRot3 : public TSyncGroup3<TChasePosYRot> {
	TChasePosYRot3(Vector3f*, float*, unsigned short, unsigned short, unsigned short);
	void setPosptr(Vector3f*);
	void setYRot(float*);
};

} // namespace efx

#endif
