#ifndef _EFX_TSYNC_H
#define _EFX_TSYNC_H

#include "efx/TBase.h"
#include "JSystem/JPA/JPAEmitter.h"

namespace efx {
struct TSync : public TBase, public JPAEmitterCallBack {
	inline TSync()
	    : TBase()
	    , m_emitter(nullptr)
	    , m_effectID(EID_Sync)
	    , m_flags(0)
	{
	}
	// vtable 1 (TBase)
	virtual bool create(Arg*); // _08
	virtual void forceKill();  // _0C
	virtual void fade();       // _10
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void execute(JPABaseEmitter*);                       // _30 (weak; thunk at _20)
	virtual void executeAfter(JPABaseEmitter*);                  // _34 (weak; thunk at _24)
	virtual void doExecuteEmitterOperation(JPABaseEmitter*) = 0; // _38
	virtual void doExecuteAfter(JPABaseEmitter*);                // _3C (weak)
	virtual void startDemoDrawOff();                             // _40 (weak)
	virtual void endDemoDrawOn();                                // _44 (weak)
	virtual ~TSync() { }                                         // _48 (weak; thunk at _1C)

	JPABaseEmitter* m_emitter;
	u16 m_effectID;
	u8 m_flags;
};
} // namespace efx

#endif
