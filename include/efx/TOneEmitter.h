#ifndef _EFX_TONEEMITTER_H
#define _EFX_TONEEMITTER_H

#include "Vector3.h"
#include "efx/Context.h"
#include "efx/TBase.h"
#include "JSystem/JPA/JPAEmitter.h"

namespace efx {
struct TOneEmitter : public TBase, public JPAEmitterCallBack {
	// vtable 1 (TBase)
	virtual bool create(Arg*); // _08
	virtual void forceKill();  // _0C
	virtual void fade();       // _10
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void executeAfter(JPABaseEmitter*); // _30 (weak)
	virtual void startDemoDrawOff();            // _34 (weak)
	virtual void endDemoDrawOn();               // _38 (weak)
	virtual ~TOneEmitter();                     // _3C (weak)

	void add(Context*);

	// Unused/inlined:
	void del(Context*);

	// _00		= VTBL
	// _04-_08	= JPAEmitterCallBack
	JPABaseEmitter* m_emitter; // _08
	u16 m_effectID;            // _0C
	Context m_context;         // _10
};

/**
 * @size{0x2C}
 */
struct TOneEmitterChasePos : public TBase, public JPAEmitterCallBack {
	// vtable 1 (TBase)
	virtual bool create(Arg*); // _08
	virtual void forceKill();  // _0C
	virtual void fade();       // _10
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void executeAfter(JPABaseEmitter*); // _30 (weak)
	virtual void startDemoDrawOff();            // _34 (weak)
	virtual void endDemoDrawOn();               // _38 (weak)
	virtual ~TOneEmitterChasePos();             // _3C (weak)

	void add(ContextChasePos*);
	void del(ContextChasePos*);

	// _00		= VTBL
	// _04-_08	= JPAEmitterCallBack
	ContextChasePos m_context; // _08
	JPABaseEmitter* m_emitter; // _24
	u16 m_effectID;            // _28
};

struct TOneEmitterSimple : public TBase, public JPAEmitterCallBack {
	inline TOneEmitterSimple(u16 effectID) // something like this, may need reordering
	    : m_emitter(nullptr)
	    , m_effectID(effectID)
	    , _14(0)
	{
		_18 = 10;
		_10 = new Vector3f[_18];
	}

	// vtable 1 (TBase)
	virtual bool create(Arg*); // _08
	virtual void forceKill()   // _0C (weak)
	{
		if (m_emitter) {
			particleMgr->forceKill(m_emitter);
			m_emitter = nullptr;
		}
	}
	virtual void fade() // _10 (weak)
	{
		if (m_emitter) {
			particleMgr->fade(m_emitter);
			m_emitter = nullptr;
		}
	}
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void executeAfter(JPABaseEmitter*); // _30 (weak)
	virtual void startDemoDrawOff()             // _34 (weak)
	{
		if (m_emitter) {
			m_emitter->_F4 |= 0x4;
		}
	}
	virtual void endDemoDrawOn() // _38 (weak)
	{
		if (m_emitter) {
			m_emitter->_F4 &= ~0x4;
		}
	}
	virtual ~TOneEmitterSimple() { } // _3C (weak)

	// _00		= VTBL
	// _04-_08	= JPAEmitterCallBack
	JPABaseEmitter* m_emitter; // _08
	u16 m_effectID;            // _0C
	Vector3f* _10;             // _10
	int _14;                   // _14
	int _18;                   // _18, vector count?
};
} // namespace efx

#endif
