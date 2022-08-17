#ifndef _EFX_TONEEMITTER_H
#define _EFX_TONEEMITTER_H

#include "Vector3.h"
#include "efx/Context.h"
#include "efx/TBase.h"
#include "JSystem/JPA/JPAEmitter.h"

namespace efx {
struct TOneEmitter : public TBase, public JPAEmitterCallBack {
	// vtable 1 (TBase)
	virtual bool create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void executeAfter(JPABaseEmitter*); // _14 (thunk at _08)
	virtual void startDemoDrawOff();            // _18
	virtual void endDemoDrawOn();               // _1C
	virtual ~TOneEmitter();                     // _20 (thunk at _00)

	void add(Context*);

	// Unused/inlined:
	void del(Context*);

	// VTBL 1 _00
	// VTBL 2 _04
	JPABaseEmitter* m_emitter; // _08
	u16 m_effectID;            // _0C
	Context m_context;         // _10
};

/**
 * @size{0x2C}
 */
struct TOneEmitterChasePos : public TBase, public JPAEmitterCallBack {
	// vtable 1 (TBase)
	virtual bool create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void executeAfter(JPABaseEmitter*); // _14 (thunk at _08)
	virtual void startDemoDrawOff();            // _18
	virtual void endDemoDrawOn();               // _1C
	virtual ~TOneEmitterChasePos();             // _20 (thunk at _00)

	void add(ContextChasePos*);
	void del(ContextChasePos*);

	// VTBL 1 _00
	// VTBL 2 _04
	ContextChasePos m_context; // _08
	JPABaseEmitter* m_emitter; // _24
	u16 m_effectID;            // _28
};

struct TOneEmitterSimple : public TBase, public JPAEmitterCallBack {
	// vtable 1 (TBase)
	virtual bool create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void executeAfter(JPABaseEmitter*); // _14 (thunk at _08)
	virtual void startDemoDrawOff();            // _18
	virtual void endDemoDrawOn();               // _1C
	virtual ~TOneEmitterSimple();               // _20 (thunk at _00)

	// VTBL 1 _00
	// VTBL 2 _04
	JPABaseEmitter* m_emitter; // _08
	u16 m_effectID;            // _0C
	Vector3f** _10;            // _10
	int _14;                   // _14
};
} // namespace efx

#endif
