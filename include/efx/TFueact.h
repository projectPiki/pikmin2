#ifndef _EFX_TFUEACT_H
#define _EFX_TFUEACT_H

#include "efx/TSync.h"

namespace efx {
struct TFueactBiriBase : public TSync {
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TFueactBiriBase();                              // _48 (weak)

	// _00      = VTBL
	// _00-_10  = TSync
	Vector3f* _10; // _10
	Vector3f* _14; // _14
};

struct TFueactBiri1 : public TFueactBiriBase {
	virtual ~TFueactBiri1(); // _48 (weak)

	// _00      = VTBL
	// _00-_18  = TFueactBiriBase
};

struct TFueactBiri2 : public TFueactBiriBase {
	virtual ~TFueactBiri2(); // _48 (weak)

	// _00      = VTBL
	// _00-_18  = TFueactBiriBase
};

struct TFueactCircle : public TBase, public JPAEmitterCallBack, public JPAParticleCallBack {
	virtual bool create(Arg*);                               // _08
	virtual void forceKill();                                // _0C (weak)
	virtual void fade();                                     // _10 (weak)
	virtual void execute(JPABaseEmitter*);                   // _44 (weak)
	virtual void execute(JPABaseEmitter*, JPABaseParticle*); // _48 (weak)
	virtual void executeAfter(JPABaseEmitter*);              // _4C (weak)
	virtual ~TFueactCircle();                                // _50 (weak)

	// _00 VTBL
	// _04 = JPAEmitterCallBack
	// _08 = JPAParticleCallBack
	u8 _0C[0x8];         // _0C, unknown
	JPABaseEmitter* _14; // _14
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
