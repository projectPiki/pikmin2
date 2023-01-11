#ifndef _EFX_TFUEACT_H
#define _EFX_TFUEACT_H

#include "efx/TSync.h"

namespace efx {
struct TFueactBiriBase : public TSync {
	inline TFueactBiriBase(u16 effectID)
	    : TSync(effectID)
	{
	}

	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TFueactBiriBase() { }                           // _48 (weak)

	// _00      = VTBL
	// _00-_10  = TSync
	Matrixf* m_mtx;           // _10
	JGeometry::TVec3f* m_pos; // _14
};

struct TFueactBiri1 : public TFueactBiriBase {
	inline TFueactBiri1()
	    : TFueactBiriBase(PID_FueActBiri_1)
	{
	}

	virtual ~TFueactBiri1() { } // _48 (weak)

	// _00      = VTBL
	// _00-_18  = TFueactBiriBase
};

struct TFueactBiri2 : public TFueactBiriBase {
	inline TFueactBiri2()
	    : TFueactBiriBase(PID_FueActBiri_2)
	{
	}

	virtual ~TFueactBiri2() { } // _48 (weak)

	// _00      = VTBL
	// _00-_18  = TFueactBiriBase
};

struct TFueactCircle : public TBase, public JPAEmitterCallBack, public JPAParticleCallBack {
	inline TFueactCircle()
	    : m_emitter(nullptr)
	{
	}

	virtual bool create(Arg*);                               // _08
	virtual void forceKill();                                // _0C (weak)
	virtual void fade();                                     // _10 (weak)
	virtual void execute(JPABaseEmitter*);                   // _44 (weak)
	virtual void execute(JPABaseEmitter*, JPABaseParticle*); // _48 (weak)
	virtual void executeAfter(JPABaseEmitter*);              // _4C (weak)
	virtual ~TFueactCircle() { }                             // _50 (weak)

	// _00 VTBL
	// _04 = JPAEmitterCallBack
	// _08 = JPAParticleCallBack
	Matrixf* m_mtx;            // _0C
	Vector3f* m_pos;           // _10
	JPABaseEmitter* m_emitter; // _14
};

struct TFueact : public TBase {
	virtual bool create(Arg*); // _08 (weak)
	virtual void forceKill();  // _0C (weak)
	virtual void fade();       // _10 (weak)

	// _00      = VTBL
	TFueactCircle m_circle; // _04
	TFueactBiri1 m_biri1;   // _1C
	TFueactBiri2 m_biri2;   // _34
};
} // namespace efx

#endif
